# 命令行参数解析库 C V1

## 实现一个功能完整的C语言命令行参数解析器

我将为您实现一个功能完整的C语言命令行参数解析器。这个解析器支持短选项、长选项以及参数值的解析。

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 选项类型枚举
typedef enum {
    OPTION_NO_ARG,      // 无参数选项
    OPTION_REQUIRED_ARG, // 必需参数选项
    OPTION_OPTIONAL_ARG  // 可选参数选项
} option_arg_type_t;

// 选项定义结构体
typedef struct {
    const char *name;           // 长选项名称
    int val;                    // 短选项字符或返回值
    option_arg_type_t has_arg;  // 参数类型
    const char *description;    // 选项描述
} option_t;

// 解析结果结构体
typedef struct {
    const char *name;    // 选项名称
    const char *arg;     // 参数值（如果有的话）
    int val;             // 选项值
} parsed_option_t;

// 解析器状态结构体
typedef struct {
    const option_t *options;    // 选项定义数组
    int optind;                 // 下一个要处理的参数索引
    int optopt;                 // 未知选项字符
    const char *optarg;         // 当前选项的参数值
    bool done;                  // 解析是否完成
    char *nextchar;             // 下一个要处理的字符位置
} arg_parser_t;

// 全局解析器状态
static arg_parser_t parser = {0};

/**
 * 初始化参数解析器
 * @param options 选项定义数组
 */
void arg_parser_init(const option_t *options) {
    parser.options = options;
    parser.optind = 1;  // 跳过程序名
    parser.optopt = 0;
    parser.optarg = NULL;
    parser.done = false;
    parser.nextchar = NULL;
}

/**
 * 根据短选项字符查找选项定义
 * @param short_opt 短选项字符
 * @return 选项定义指针，未找到返回NULL
 */
static const option_t* find_short_option(char short_opt) {
    if (!parser.options) return NULL;
    
    for (int i = 0; parser.options[i].name || parser.options[i].val; i++) {
        if (parser.options[i].val == short_opt) {
            return &parser.options[i];
        }
    }
    return NULL;
}

/**
 * 根据长选项名称查找选项定义
 * @param long_opt 长选项名称
 * @return 选项定义指针，未找到返回NULL
 */
static const option_t* find_long_option(const char *long_opt) {
    if (!parser.options || !long_opt) return NULL;
    
    for (int i = 0; parser.options[i].name || parser.options[i].val; i++) {
        if (parser.options[i].name && strcmp(parser.options[i].name, long_opt) == 0) {
            return &parser.options[i];
        }
    }
    return NULL;
}

/**
 * 解析短选项
 * @param argc 参数数量
 * @param argv 参数数组
 * @return 选项值，-1表示解析完成，'?'表示错误
 */
static int parse_short_option(int argc, char *const argv[]) {
    char opt_char = *parser.nextchar++;
    const option_t *opt = find_short_option(opt_char);
    
    if (!opt) {
        parser.optopt = opt_char;
        fprintf(stderr, "未知选项: -%c\n", opt_char);
        return '?';
    }
    
    parser.optarg = NULL;
    
    // 处理参数
    if (opt->has_arg == OPTION_REQUIRED_ARG || opt->has_arg == OPTION_OPTIONAL_ARG) {
        // 检查同一参数中的剩余字符
        if (*parser.nextchar) {
            parser.optarg = parser.nextchar;
            parser.nextchar = NULL;
            parser.optind++;
        } else {
            // 检查下一个参数
            if (parser.optind + 1 < argc && 
                (opt->has_arg == OPTION_REQUIRED_ARG || 
                 (argv[parser.optind + 1][0] != '-' || 
                  (argv[parser.optind + 1][0] == '-' && argv[parser.optind + 1][1] == '\0')))) {
                parser.optarg = argv[parser.optind + 1];
                parser.optind += 2;
            } else if (opt->has_arg == OPTION_REQUIRED_ARG) {
                fprintf(stderr, "选项 -%c 需要参数\n", opt_char);
                parser.optopt = opt_char;
                return '?';
            } else {
                parser.optind++;
            }
        }
    } else {
        // 无参数选项
        if (!*parser.nextchar) {
            parser.optind++;
        }
    }
    
    return opt->val;
}

/**
 * 解析长选项
 * @param argc 参数数量
 * @param argv 参数数组
 * @param arg 当前参数
 * @return 选项值，-1表示解析完成，'?'表示错误
 */
static int parse_long_option(int argc, char *const argv[], const char *arg) {
    char *equal_pos = strchr(arg, '=');
    char *option_name = strdup(arg);
    char *option_arg = NULL;
    
    if (equal_pos) {
        *equal_pos = '\0';
        option_arg = equal_pos + 1;
    }
    
    const option_t *opt = find_long_option(option_name);
    if (!opt) {
        fprintf(stderr, "未知选项: --%s\n", option_name);
        free(option_name);
        parser.optind++;
        return '?';
    }
    
    parser.optarg = option_arg;
    
    // 处理参数
    if (opt->has_arg == OPTION_REQUIRED_ARG && !option_arg) {
        if (parser.optind + 1 < argc) {
            parser.optarg = argv[parser.optind + 1];
            parser.optind += 2;
        } else {
            fprintf(stderr, "选项 --%s 需要参数\n", option_name);
            free(option_name);
            return '?';
        }
    } else if (opt->has_arg == OPTION_OPTIONAL_ARG && !option_arg) {
        if (parser.optind + 1 < argc && 
            (argv[parser.optind + 1][0] != '-' || 
             (argv[parser.optind + 1][0] == '-' && argv[parser.optind + 1][1] == '\0'))) {
            parser.optarg = argv[parser.optind + 1];
            parser.optind += 2;
        } else {
            parser.optind++;
        }
    } else {
        parser.optind++;
    }
    
    free(option_name);
    return opt->val;
}

/**
 * 获取下一个选项
 * @param argc 参数数量
 * @param argv 参数数组
 * @return 选项值，-1表示解析完成，'?'表示错误
 */
int arg_parser_next(int argc, char *const argv[]) {
    // 检查是否已完成解析
    if (parser.done || parser.optind >= argc) {
        return -1;
    }
    
    char *arg = argv[parser.optind];
    
    // 如果不是选项，解析完成
    if (arg[0] != '-' || arg[1] == '\0') {
        parser.done = true;
        return -1;
    }
    
    // 处理 "--" 结束符
    if (arg[1] == '-' && arg[2] == '\0') {
        parser.optind++;
        parser.done = true;
        return -1;
    }
    
    // 长选项处理
    if (arg[1] == '-') {
        return parse_long_option(argc, argv, arg + 2);
    }
    
    // 短选项处理
    if (!parser.nextchar || *parser.nextchar == '\0') {
        parser.nextchar = arg + 1;
    }
    
    return parse_short_option(argc, argv);
}

/**
 * 打印帮助信息
 * @param program_name 程序名称
 * @param description 程序描述
 * @param options 选项数组
 */
void print_help(const char *program_name, const char *description, const option_t *options) {
    printf("用法: %s [选项...]\n", program_name);
    if (description) {
        printf("\n%s\n", description);
    }
    printf("\n选项:\n");
    
    for (int i = 0; options[i].name || options[i].val; i++) {
        printf("  ");
        if (options[i].val) {
            printf("-%c", options[i].val);
            if (options[i].name) {
                printf(", ");
            }
        } else {
            printf("    ");
        }
        
        if (options[i].name) {
            printf("--%s", options[i].name);
        }
        
        switch (options[i].has_arg) {
            case OPTION_REQUIRED_ARG:
                if (options[i].name) {
                    printf("=<参数>");
                } else {
                    printf(" <参数>");
                }
                break;
            case OPTION_OPTIONAL_ARG:
                if (options[i].name) {
                    printf("[=<参数>]");
                } else {
                    printf(" [<参数>]");
                }
                break;
            default:
                break;
        }
        
        if (options[i].description) {
            printf("\t%s", options[i].description);
        }
        printf("\n");
    }
}

// 测试示例
int main(int argc, char *argv[]) {
    // 定义选项
    option_t options[] = {
        {"verbose", 'v', OPTION_NO_ARG, "详细输出"},
        {"output", 'o', OPTION_REQUIRED_ARG, "输出文件"},
        {"config", 'c', OPTION_REQUIRED_ARG, "配置文件"},
        {"threads", 't', OPTION_REQUIRED_ARG, "线程数"},
        {"help", 'h', OPTION_NO_ARG, "显示帮助信息"},
        {"version", 'V', OPTION_NO_ARG, "显示版本信息"},
        {"limit", 'l', OPTION_OPTIONAL_ARG, "限制数量"},
        {NULL, 0, 0, NULL}  // 结束标记
    };
    
    // 初始化解析器
    arg_parser_init(options);
    
    int opt;
    while ((opt = arg_parser_next(argc, argv)) != -1) {
        switch (opt) {
            case 'v':
                printf("启用详细模式\n");
                break;
            case 'o':
                printf("输出文件: %s\n", parser.optarg);
                break;
            case 'c':
                printf("配置文件: %s\n", parser.optarg);
                break;
            case 't':
                printf("线程数: %s\n", parser.optarg);
                break;
            case 'h':
                print_help(argv[0], "这是一个示例CLI工具", options);
                return 0;
            case 'V':
                printf("版本 1.0.0\n");
                return 0;
            case 'l':
                if (parser.optarg) {
                    printf("限制数量: %s\n", parser.optarg);
                } else {
                    printf("使用默认限制\n");
                }
                break;
            case '?':
                // 错误已经在解析器中处理
                return 1;
            default:
                fprintf(stderr, "未知选项: %c\n", opt);
                return 1;
        }
    }
    
    // 处理非选项参数
    printf("\n非选项参数:\n");
    for (int i = parser.optind; i < argc; i++) {
        printf("  %s\n", argv[i]);
    }
    
    return 0;
}
```

这个命令行参数解析器具有以下特性：

### 主要功能

1. **短选项支持**：如 `-v`, `-o file.txt`
2. **长选项支持**：如 `--verbose`, `--output=file.txt`
3. **参数处理**：
   - 无参数选项
   - 必需参数选项
   - 可选参数选项
4. **灵活的参数格式**：
   - `-o file.txt`
   - `-ofile.txt`
   - `--output=file.txt`
   - `--output file.txt`

### 核心组件

1. **option_t 结构体**：定义选项的属性
2. **arg_parser_init()**：初始化解析器
3. **arg_parser_next()**：获取下一个选项
4. **print_help()**：生成帮助信息

