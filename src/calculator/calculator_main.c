#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input.h"
#include "logfmt.h"
#include "parser.h"
#include "ast.h"
#include "rpn.h"

int main() {

  while (true) {
    char *input_expression = get_input_expression();

    if (strcmp(input_expression, "exit") == 0) break;

    // 递归下降直接求值法
    // double value = evaluate_expression((const char *)input_expression);

    // 递归下降 转为 AST 求值法
    // double value = evaluate_expression_ast((const char *)input_expression);

    // 双栈求值法
    double value = evaluate_expression_rpn((const char *)input_expression);

    log_info("表达式解析完成，值为 %f", value);
    printf("%s = %f.\n", input_expression, value);

    log_debug("释放堆内存：%s", input_expression);
    free(input_expression);
  }
  
  return 0;
}