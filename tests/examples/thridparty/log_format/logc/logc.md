### log.c 详细使用指南
log.c 是一个超轻量级（仅 500 行代码）的 C 语言日志库，适用于嵌入式系统和资源受限环境。以下是涵盖基础到高级的完整示例：

---

#### **1. 基础使用**
```c
#include "log.h"

int main() {
    // 初始化日志系统（默认输出到 stdout）
    log_init();
    
    // 不同级别的日志记录
    log_trace("This is a trace message");
    log_debug("Debug value: %d", 42);
    log_info("Application started");
    log_warn("Disk space low: %.1f%%", 85.5);
    log_error("File not found: %s", "config.ini");
    log_fatal("Critical system failure");
    
    return 0;
}
/* 输出:
TRACE: [main.c:7] This is a trace message
DEBUG: [main.c:8] Debug value: 42
INFO:  Application started
WARN:  Disk space low: 85.5%
ERROR: [main.c:11] File not found: config.ini
FATAL: [main.c:12] Critical system failure
*/
```

---

#### **2. 自定义配置**
**设置日志级别**
```c
int main() {
    log_init();
    
    // 只显示警告及以上级别的日志
    log_set_level(LOG_WARN);
    
    log_debug("This won't be shown"); // 被过滤
    log_warn("Important warning!");
    
    return 0;
}
```

**设置输出目标**
```c
int main() {
    // 输出到文件
    FILE *logfile = fopen("app.log", "a");
    log_set_fp(logfile);
    
    // 设置时间格式
    log_set_time_fmt("%H:%M:%S");
    
    log_info("Logging to file");
    fclose(logfile); // 关闭前确保刷新
    
    return 0;
}
```

**自定义前缀**
```c
// 自定义前缀格式
static const char *custom_prefix(int level) {
    static char buffer[20];
    const char *colors[] = {"\x1b[94m", "\x1b[36m", "\x1b[32m", "\x1b[33m", "\x1b[31m", "\x1b[35m"};
    const char *reset = "\x1b[0m";
    
    snprintf(buffer, sizeof(buffer), "%s[%s]%s ", 
             colors[level], 
             log_level_string(level), 
             reset);
    return buffer;
}

int main() {
    log_init();
    log_set_prefix(custom_prefix); // 应用自定义前缀
    
    log_info("Custom colored log");
    return 0;
}
```

---

#### **3. 高级功能**
**多线程安全**
```c
#include <pthread.h>

void* thread_func(void* arg) {
    log_info("Thread %d started", *(int*)arg);
    // ... 工作代码 ...
    log_debug("Thread %d finished", *(int*)arg);
    return NULL;
}

int main() {
    log_init();
    log_set_lock(log_lock); // 使用内置的简单互斥锁
    
    pthread_t threads[3];
    int ids[] = {1, 2, 3};
    
    for (int i = 0; i < 3; i++) {
        pthread_create(&threads[i], NULL, thread_func, &ids[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }
    
    return 0;
}
```

**断言功能**
```c
int main() {
    log_init();
    
    int *ptr = NULL;
    log_assert(ptr != NULL, "Pointer should not be NULL");
    // 输出: ASSERT: [main.c:7] Pointer should not be NULL
    
    return 0;
}
```

**回调函数**
```c
// 自定义日志处理器
static void log_handler(int level, const char *file, int line, const char *msg) {
    const char *level_str = log_level_string(level);
    printf("[CUSTOM] %s:%d | %s - %s\n", file, line, level_str, msg);
}

int main() {
    log_init();
    log_set_handler(log_handler); // 完全接管日志处理
    
    log_warn("Custom handler in action");
    return 0;
}
/* 输出:
[CUSTOM] main.c:15 | WARN - Custom handler in action
*/
```

---

#### **4. 嵌入式系统应用**
**内存受限环境**
```c
// 定义 LOG_USE_COLOR=0 禁用颜色
// 定义 LOG_SHORT_NAMES 使用短名称 (T/D/I/W/E/F)
#define LOG_USE_COLOR 0
#define LOG_SHORT_NAMES

#include "log.h"

// 自定义输出函数（替代 printf）
static void embedded_output(const char *msg) {
    // 发送日志到 UART
    uart_send_string(msg);
}

int main() {
    // 最小化配置
    log_set_level(LOG_INFO);
    log_set_output(embedded_output);
    log_set_time_fmt(NULL); // 禁用时间戳
    
    log_info("System booted");
    return 0;
}
```

**带时间戳的日志**
```c
// 获取系统时间函数
static struct tm *get_sys_time() {
    time_t now = time(NULL);
    return localtime(&now);
}

int main() {
    log_init();
    log_set_time_func(get_sys_time); // 设置自定义时间函数
    
    log_set_time_fmt("%Y-%m-%d %H:%M:%S");
    log_info("Time-stamped log");
    return 0;
}
/* 输出:
INFO: [2023-10-05 14:30:45] Time-stamped log
*/
```

---

#### **5. 编译与集成**
**单文件集成**：
1. 下载 [log.c](https://github.com/rxi/log.c) 和 [log.h](https://github.com/rxi/log.c/blob/master/src/log.h)
2. 添加到项目：
```c
#define LOG_IMPLEMENTATION
#include "log.c" // 在某个源文件中实现
```

**CMake 集成**：
```cmake
cmake_minimum_required(VERSION 3.5)
project(LogExample)

# 添加 log.c 作为源文件
add_executable(app main.c log.c)

# 或作为库
add_library(log STATIC log.c)
target_link_libraries(app PRIVATE log)
```

**编译选项**：  
| 宏定义 | 功能 |
|--------|------|
| `LOG_USE_COLOR` | 启用/禁用颜色输出 |
| `LOG_SHORT_NAMES` | 使用短日志级别名称 |
| `LOG_NO_COLORS` | 同 `LOG_USE_COLOR=0` |
| `LOG_DISABLE_LEVELS` | 禁用指定级别 (如 `LOG_DISABLE_LEVELS = LOG_TRACE\|LOG_DEBUG`) |

---

#### **6. 高级技巧**
**日志分割**
```c
void rotate_logs() {
    static int file_count = 0;
    char filename[32];
    
    // 关闭当前日志文件
    if (log_get_fp() != stdout) {
        fclose(log_get_fp());
    }
    
    // 创建新日志文件
    snprintf(filename, sizeof(filename), "app_%03d.log", file_count++);
    log_set_fp(fopen(filename, "w"));
    
    log_info("Rotated log file to %s", filename);
}

int main() {
    log_init();
    rotate_logs();
    
    // 定时器触发分割
    signal(SIGUSR1, (void(*)(int))rotate_logs);
    
    while (1) {
        log_info("Heartbeat");
        sleep(60);
    }
}
```

**敏感信息过滤**
```c
static void sanitize_log(int level, const char *file, int line, const char *msg) {
    char sanitized[256];
    const char *patterns[] = {"password", "token", "secret"};
    
    // 复制原始消息
    strncpy(sanitized, msg, sizeof(sanitized));
    
    // 过滤敏感词
    for (int i = 0; i < sizeof(patterns)/sizeof(patterns[0]); i++) {
        char *pos = strstr(sanitized, patterns[i]);
        if (pos) {
            memset(pos, '*', strlen(patterns[i])); // 替换为星号
        }
    }
    
    // 调用默认处理器
    log_log(level, file, line, sanitized);
}

int main() {
    log_init();
    log_set_handler(sanitize_log);
    
    log_info("User password=12345 logged in"); // 输出: User ******** logged in
    return 0;
}
```

**性能关键区域**
```c
// 禁用日志的宏
#ifdef DISABLE_LOGGING
#  define log_trace(...)
#  define log_debug(...)
// ... 其他级别类似 ...
#endif

void performance_critical() {
    // 临时禁用日志
    int old_level = log_get_level();
    log_set_level(LOG_FATAL); // 只允许致命错误
    
    // 高性能代码...
    
    // 恢复日志级别
    log_set_level(old_level);
}
```

---

#### **关键特性总结**
| 功能 | API/宏 |
|------|--------|
| **日志级别** | `LOG_TRACE`-`LOG_FATAL` |
| **基本输出** | `log_trace()`, `log_info()`, 等 |
| **配置** | `log_set_level()`, `log_set_fp()` |
| **时间格式** | `log_set_time_fmt()`, `log_set_time_func()` |
| **线程安全** | `log_set_lock()`, `log_lock()` |
| **断言** | `log_assert()` |
| **自定义处理** | `log_set_handler()`, `log_set_prefix()` |
| **编译控制** | `LOG_USE_COLOR`, `LOG_SHORT_NAMES` |

---

#### **最佳实践**
1. **嵌入式环境配置**
```c
// system_log.c
#include "log.h"

void system_log_init() {
    // 最小化配置
    log_set_level(LOG_INFO);
    log_set_time_fmt("%H:%M");
    
    // 重定向到硬件接口
    log_set_output(uart_putstr);
    
    // 添加启动标记
    log_info("==== SYSTEM BOOT ====");
}
```

2. **模块化日志**
```c
// network.c
#include "log.h"

#define NET_LOG(level, ...) log_log(level, __FILE__, __LINE__, __VA_ARGS__)

void connect_server() {
    NET_LOG(LOG_DEBUG, "Connecting to server");
    // ...
    if (error) {
        NET_LOG(LOG_ERROR, "Connection failed: %d", error_code);
    }
}
```

3. **崩溃日志捕获**
```c
#include <execinfo.h>

void crash_handler(int sig) {
    void *buffer[50];
    int size = backtrace(buffer, 50);
    
    log_fatal("Crash signal: %d", sig);
    log_fatal("Backtrace:");
    
    // 打印调用栈
    char **strings = backtrace_symbols(buffer, size);
    for (int i = 0; i < size; i++) {
        log_fatal("  %s", strings[i]);
    }
    
    exit(1);
}

int main() {
    signal(SIGSEGV, crash_handler);
    signal(SIGABRT, crash_handler);
    
    // 应用代码...
}
```

4. **日志级别运行时调整**
```c
// 通过信号动态调整日志级别
void sigusr2_handler(int sig) {
    static int levels[] = {LOG_TRACE, LOG_DEBUG, LOG_INFO, LOG_WARN, LOG_ERROR};
    static int index = 0;
    
    index = (index + 1) % (sizeof(levels)/sizeof(levels[0]));
    log_set_level(levels[index]);
    
    log_info("Log level changed to %s", log_level_string(levels[index]));
}

int main() {
    signal(SIGUSR2, sigusr2_handler);
    // ...
}
```

log.c 是资源受限环境的理想选择，其设计哲学是"简单即美"。完整文档见 [GitHub 仓库](https://github.com/rxi/log.c)，实际使用时建议直接查看头文件中的详细注释。
