#include "ast.h"
#include "parser.h"
#include <stdio.h>

// 测试函数
void test_expression(const char* expr) {
    printf("表达式: %s\n", expr);
    
    ASTNode* ast = parse_expression(expr);
    double result = eval_ast(ast);
    
    printf("结果: %.6f\n\n", result);
    free_ast(ast);
}

void intg_test(){
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
}