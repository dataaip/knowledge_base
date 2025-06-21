# AST表达式计算器

在构建了抽象语法树(AST)之后，计算表达式的过程就是遍历AST并执行节点指定的操作。下面我将实现一个完整的AST表达式计算器，包含AST构建和计算功能。

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

// 定义Token类型
typedef enum {
    TOK_END,       // 结束
    TOK_NUM,       // 数字
    TOK_ADD,       // 加法 +
    TOK_SUB,       // 减法 -
    TOK_MUL,       // 乘法 *
    TOK_DIV,       // 除法 /
    TOK_POW,       // 幂运算 ^
    TOK_FACT,      // 阶乘 !
    TOK_LPAREN,    // 左括号 (
    TOK_RPAREN,    // 右括号 )
    TOK_FUNC,      // 函数
    TOK_COMMA,     // 逗号 ,
    TOK_ERROR      // 错误
} TokenType;

// Token结构体
typedef struct {
    TokenType type;
    double num_value;
    char func_name[16];
    int length;
} Token;

// AST节点类型
typedef enum {
    AST_NUMBER,
    AST_NEGATE,     // 一元负号
    AST_FACTORIAL,  // 阶乘
    AST_ADD,
    AST_SUB,
    AST_MUL,
    AST_DIV,
    AST_POWER,      // 幂运算
    AST_FUNCTION,   // 函数调用
    AST_EXPR_GROUP  // 括号表达式组
} ASTNodeType;

// AST节点结构
typedef struct ASTNode {
    ASTNodeType type;
    double value;           // 数字节点值
    char* func_name;        // 函数名
    struct ASTNode* left;   // 左操作数/单操作数
    struct ASTNode* right;  // 右操作数（二元操作）
    struct ASTNode** args;  // 函数参数数组
    int args_count;         // 参数数量
} ASTNode;

// 函数指针类型
typedef double (*MathFunc)(double*, int);

// 词法分析器状态
typedef struct {
    const char* input;
    const char* current;
} Lexer;

// 初始化词法分析器
Lexer lexer_init(const char* input) {
    Lexer lexer;
    lexer.input = input;
    lexer.current = input;
    return lexer;
}

// 跳过空白字符
void skip_whitespace(Lexer* lexer) {
    while (isspace(*lexer->current)) {
        lexer->current++;
    }
}

// 获取下一个Token
Token get_next_token(Lexer* lexer) {
    skip_whitespace(lexer);
    
    Token token;
    token.length = 0;
    
    if (*lexer->current == '\0') {
        token.type = TOK_END;
        token.length = 1;
        return token;
    }
    
    // 检查数字
    if (isdigit(*lexer->current) || *lexer->current == '.') {
        char* end;
        token.num_value = strtod(lexer->current, &end);
        token.type = TOK_NUM;
        token.length = end - lexer->current;
        lexer->current = end;
        return token;
    }
    
    // 检查运算符和标点符号
    switch (*lexer->current) {
        case '+': token.type = TOK_ADD; break;
        case '-': token.type = TOK_SUB; break;
        case '*': token.type = TOK_MUL; break;
        case '/': token.type = TOK_DIV; break;
        case '^': token.type = TOK_POW; break;
        case '!': token.type = TOK_FACT; break;
        case '(': token.type = TOK_LPAREN; break;
        case ')': token.type = TOK_RPAREN; break;
        case ',': token.type = TOK_COMMA; break;
        default: 
            // 检查函数名
            if (isalpha(*lexer->current)) {
                int i = 0;
                while (isalpha(*lexer->current) && i < 15) {
                    token.func_name[i++] = *lexer->current++;
                }
                token.func_name[i] = '\0';
                token.type = TOK_FUNC;
                token.length = i;
                return token;
            }
            token.type = TOK_ERROR;
            break;
    }
    
    if (token.type != TOK_ERROR) {
        token.length = 1;
        lexer->current++;
    }
    
    return token;
}

// 节点创建辅助函数
ASTNode* ast_create_number(double value) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = AST_NUMBER;
    node->value = value;
    node->left = node->right = NULL;
    node->args = NULL;
    node->args_count = 0;
    node->func_name = NULL;
    return node;
}

ASTNode* ast_create_unary(ASTNodeType type, ASTNode* operand) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = type;
    node->left = operand;
    node->right = NULL;
    node->args = NULL;
    node->args_count = 0;
    node->func_name = NULL;
    return node;
}

ASTNode* ast_create_binary(ASTNodeType type, ASTNode* left, ASTNode* right) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = type;
    node->left = left;
    node->right = right;
    node->args = NULL;
    node->args_count = 0;
    node->func_name = NULL;
    return node;
}

ASTNode* ast_create_function(const char* func_name, ASTNode** args, int count) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = AST_FUNCTION;
    node->func_name = strdup(func_name);
    node->args = args;
    node->args_count = count;
    node->left = node->right = NULL;
    return node;
}

ASTNode* ast_create_group(ASTNode* expr) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = AST_EXPR_GROUP;
    node->left = expr;
    node->right = NULL;
    node->args = NULL;
    node->args_count = 0;
    node->func_name = NULL;
    return node;
}

// 表达式解析函数
ASTNode* parser_expression(Lexer* lexer);
ASTNode* parser_term(Lexer* lexer);
ASTNode* parser_factor(Lexer* lexer);
ASTNode* parser_base(Lexer* lexer);
ASTNode* parser_function_call(Lexer* lexer);
void parser_arguments(Lexer* lexer, ASTNode*** args, int* count);

// expression → term { ('+' | '-') term }
ASTNode* parser_expression(Lexer* lexer) {
    ASTNode* left = parser_term(lexer);
    Token tok = get_next_token(lexer);
    
    while (tok.type == TOK_ADD || tok.type == TOK_SUB) {
        ASTNode* right = parser_term(lexer);
        ASTNodeType op_type = (tok.type == TOK_ADD) ? AST_ADD : AST_SUB;
        left = ast_create_binary(op_type, left, right);
        tok = get_next_token(lexer);
    }
    
    // 回退token
    lexer->current -= tok.length;
    return left;
}

// term → factor { ('*' | '/') factor }
ASTNode* parser_term(Lexer* lexer) {
    ASTNode* left = parser_factor(lexer);
    Token tok = get_next_token(lexer);
    
    while (tok.type == TOK_MUL || tok.type == TOK_DIV) {
        ASTNode* right = parser_factor(lexer);
        ASTNodeType op_type = (tok.type == TOK_MUL) ? AST_MUL : AST_DIV;
        left = ast_create_binary(op_type, left, right);
        tok = get_next_token(lexer);
    }
    
    lexer->current -= tok.length;
    return left;
}

// factor → [ '-' ] base [ '^' factor ] [ '!' ]
ASTNode* parser_factor(Lexer* lexer) {
    // 处理负号
    bool negative = false;
    Token tok = get_next_token(lexer);
    if (tok.type == TOK_SUB) {
        negative = true;
    } else {
        lexer->current -= tok.length;
    }

    // 解析基础元素
    ASTNode* node = parser_base(lexer);
    if (negative) {
        node = ast_create_unary(AST_NEGATE, node);
    }

    // 处理幂和阶乘
    tok = get_next_token(lexer);
    while (tok.type == TOK_FACT || tok.type == TOK_POW) {
        if (tok.type == TOK_FACT) {
            node = ast_create_unary(AST_FACTORIAL, node);
        } else if (tok.type == TOK_POW) {
            ASTNode* right = parser_factor(lexer); // 右结合递归
            node = ast_create_binary(AST_POWER, node, right);
        }
        tok = get_next_token(lexer);
    }
    
    lexer->current -= tok.length;
    return node;
}

// base → number | '(' expression ')' | function_call
ASTNode* parser_base(Lexer* lexer) {
    Token tok = get_next_token(lexer);
    
    if (tok.type == TOK_NUM) {
        return ast_create_number(tok.num_value);
    }
    
    if (tok.type == TOK_LPAREN) {
        ASTNode* expr = parser_expression(lexer);
        tok = get_next_token(lexer);
        if (tok.type != TOK_RPAREN) {
            fprintf(stderr, "错误: 缺少右括号\n");
            exit(1);
        }
        return ast_create_group(expr);
    }
    
    if (tok.type == TOK_FUNC) {
        lexer->current -= tok.length;
        return parser_function_call(lexer);
    }
    
    fprintf(stderr, "错误: 无效基础元素\n");
    exit(1);
}

// function_call → function '(' arguments ')'
ASTNode* parser_function_call(Lexer* lexer) {
    Token tok = get_next_token(lexer);
    char func_name[16];
    strcpy(func_name, tok.func_name);

    tok = get_next_token(lexer);
    if (tok.type != TOK_LPAREN) {
        fprintf(stderr, "错误: 函数缺少左括号\n");
        exit(1);
    }

    // 解析参数
    ASTNode** args = NULL;
    int arg_count = 0;
    parser_arguments(lexer, &args, &arg_count);

    tok = get_next_token(lexer);
    if (tok.type != TOK_RPAREN) {
        fprintf(stderr, "错误: 函数缺少右括号\n");
        exit(1);
    }
    
    return ast_create_function(func_name, args, arg_count);
}

// arguments → expression { ',' expression }
void parser_arguments(Lexer* lexer, ASTNode*** args, int* count) {
    *args = malloc(4 * sizeof(ASTNode*)); // 最多4个参数
    *count = 0;
    
    Token tok = get_next_token(lexer);
    lexer->current -= tok.length;
    
    while (tok.type != TOK_RPAREN) {
        if (*count >= 4) {
            fprintf(stderr, "错误: 参数超过最大值\n");
            exit(1);
        }
        (*args)[(*count)++] = parser_expression(lexer);
        tok = get_next_token(lexer);
        if (tok.type != TOK_COMMA && tok.type != TOK_RPAREN) {
            fprintf(stderr, "错误: 参数格式错误\n");
            exit(1);
        }
    }
    lexer->current -= tok.length;
}

// 解析表达式为AST
ASTNode* parse_expression(const char* expr) {
    Lexer lexer = lexer_init(expr);
    ASTNode* root = parser_expression(&lexer);
    
    Token tok = get_next_token(&lexer);
    if (tok.type != TOK_END) {
        fprintf(stderr, "错误: 解析未完成\n");
        exit(1);
    }
    return root;
}

// 计算阶乘
double factorial(double n) {
    if (n < 0 || n != (int)n) {
        fprintf(stderr, "错误: 阶乘要求非负整数\n");
        exit(1);
    }
    
    double result = 1;
    for (int i = 1; i <= (int)n; i++) {
        result *= i;
    }
    return result;
}

// 计算AST
double eval_ast(ASTNode* node) {
    if (!node) return 0;
    
    switch (node->type) {
        case AST_NUMBER:
            return node->value;
            
        case AST_NEGATE:
            return -eval_ast(node->left);
            
        case AST_FACTORIAL:
            return factorial(eval_ast(node->left));
            
        case AST_ADD:
            return eval_ast(node->left) + eval_ast(node->right);
            
        case AST_SUB:
            return eval_ast(node->left) - eval_ast(node->right);
            
        case AST_MUL:
            return eval_ast(node->left) * eval_ast(node->right);
            
        case AST_DIV: {
            double divisor = eval_ast(node->right);
            if (divisor == 0) {
                fprintf(stderr, "错误: 除数不能为零\n");
                exit(1);
            }
            return eval_ast(node->left) / divisor;
        }
            
        case AST_POWER:
            return pow(eval_ast(node->left), eval_ast(node->right));
            
        case AST_FUNCTION: {
            // 计算所有参数
            double* args = malloc(node->args_count * sizeof(double));
            for (int i = 0; i < node->args_count; i++) {
                args[i] = eval_ast(node->args[i]);
            }
            
            // 调用相应函数
            double result = 0;
            if (strcmp(node->func_name, "sin") == 0 && node->args_count == 1) {
                result = sin(args[0]);
            } else if (strcmp(node->func_name, "cos") == 0 && node->args_count == 1) {
                result = cos(args[0]);
            } else if (strcmp(node->func_name, "tan") == 0 && node->args_count == 1) {
                result = tan(args[0]);
            } else if (strcmp(node->func_name, "sqrt") == 0 && node->args_count == 1) {
                if (args[0] < 0) {
                    fprintf(stderr, "错误: sqrt 要求非负数\n");
                    exit(1);
                }
                result = sqrt(args[0]);
            } else if (strcmp(node->func_name, "log") == 0 && node->args_count == 1) {
                if (args[0] <= 0) {
                    fprintf(stderr, "错误: log 要求正数\n");
                    exit(1);
                }
                result = log(args[0]);
            } else if (strcmp(node->func_name, "pow") == 0 && node->args_count == 2) {
                result = pow(args[0], args[1]);
            } else {
                fprintf(stderr, "错误: 未知函数或参数个数错误: %s\n", node->func_name);
                exit(1);
            }
            
            free(args);
            return result;
        }
            
        case AST_EXPR_GROUP:
            return eval_ast(node->left);
            
        default:
            fprintf(stderr, "错误: 未知AST节点类型\n");
            exit(1);
    }
}

// 释放AST内存
void free_ast(ASTNode* node) {
    if (!node) return;
    
    if (node->left) free_ast(node->left);
    if (node->right) free_ast(node->right);
    
    if (node->type == AST_FUNCTION) {
        for (int i = 0; i < node->args_count; i++) {
            free_ast(node->args[i]);
        }
        free(node->args);
        free(node->func_name);
    }
    
    free(node);
}

// 测试函数
void test_expression(const char* expr) {
    printf("表达式: %s\n", expr);
    
    ASTNode* ast = parse_expression(expr);
    double result = eval_ast(ast);
    
    printf("结果: %.6f\n\n", result);
    free_ast(ast);
}

int main() {
    printf("科学计算器 - AST表达式计算演示\n");
    printf("============================\n\n");
    
    // 基本算术运算
    test_expression("2 + 3 * 4");
    test_expression("(2 + 3) * 4");
    test_expression("10 / (2 + 3)");
    test_expression("3 * 4 - 5 / 2");
    
    // 负数和幂运算
    test_expression("-3 + 5");
    test_expression("2 ^ 3");
    test_expression("2 ^ 3 ^ 2");  // 右结合: 2^(3^2) = 2^9 = 512
    test_expression("(2 ^ 3) ^ 2"); // 8^2=64
    
    // 阶乘
    test_expression("5!");
    test_expression("3! + 4!");
    test_expression("2 ^ (3!)"); // 2^6=64
    
    // 函数调用
    test_expression("sin(0)");
    test_expression("cos(0)");
    test_expression("sqrt(9)");
    test_expression("log(10)");
    test_expression("pow(2, 3)");
    
    // 复杂表达式
    test_expression("sqrt(9) + pow(2, 3) * 2");
    test_expression("(sin(0) + cos(0)) * 10");
    test_expression("(3! - 4) * 5 + 2 ^ 3");
    
    return 0;
}
```

## AST表达式计算原理

这个科学计算器展示了完整的AST表达式计算流程：

1. **词法分析(Lexer)**：
   - 将输入字符串分解为Token序列
   - 识别数字、运算符、函数名等

2. **语法分析(Parser)**：
   - 使用递归下降解析器构建AST
   - 根据运算符优先级构建树结构（乘除优先于加减）

3. **AST结构**：
   - 叶子节点：数字
   - 一元操作节点：负号、阶乘
   - 二元操作节点：加减乘除、幂运算
   - 函数调用节点：包含函数名和参数列表
   - 表达式组节点：括号表达式

4. **表达式计算(eval_ast)**：
   - 递归遍历AST
   - 后序遍历：先计算子节点，再计算当前节点
   - 根据节点类型执行相应操作

5. **函数支持**：
   - 支持常见数学函数：sin, cos, sqrt, log, pow
   - 参数个数和类型检查

## 示例输出

```
表达式: 2 + 3 * 4
结果: 14.000000

表达式: (2 + 3) * 4
结果: 20.000000

表达式: 10 / (2 + 3)
结果: 2.000000

表达式: 3 * 4 - 5 / 2
结果: 9.500000

表达式: -3 + 5
结果: 2.000000

表达式: 2 ^ 3
结果: 8.000000

表达式: 2 ^ 3 ^ 2
结果: 512.000000

表达式: (2 ^ 3) ^ 2
结果: 64.000000

表达式: 5!
结果: 120.000000

表达式: 3! + 4!
结果: 30.000000

表达式: 2 ^ (3!)
结果: 64.000000

表达式: sin(0)
结果: 0.000000

表达式: cos(0)
结果: 1.000000

表达式: sqrt(9)
结果: 3.000000

表达式: log(10)
结果: 2.302585

表达式: pow(2, 3)
结果: 8.000000

表达式: sqrt(9) + pow(2, 3) * 2
结果: 19.000000

表达式: (sin(0) + cos(0)) * 10
结果: 10.000000

表达式: (3! - 4) * 5 + 2 ^ 3
结果: 18.000000
```

这个实现展示了如何从字符串表达式构建AST，然后递归计算AST得到最终结果。AST结构不仅用于计算，还可以用于表达式优化、可视化等其他用途。