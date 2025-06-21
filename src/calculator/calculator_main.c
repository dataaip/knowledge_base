#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "ast.h"
#include "input.h"
#include "logfmt.h"
#include "parser.h"

int main() {

  while (true) {
    char *input_expression = get_input_expression();

    // double value = evaluate_expression((const char *)input_expression);
    ast_node *ast = parser_to_ast((const char *)input_expression);
    double value = evaluate_ast(ast);

    ast_tree_free(ast);
    log_info("表达式解析完成，值为 %f", value);

    printf("%s = %f.\n", input_expression, value);

    log_debug("释放堆内存：%s", input_expression);
    free(input_expression);
  }
  return 0;
}