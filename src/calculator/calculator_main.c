#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "input.h"
#include "logfmt.h"
#include "parser.h"

int main() {

  char* input_expression = get_input_expression();

  double value = evaluate_expression((const char *)input_expression);
  log_info("表达式解析完成，值为 %f", value);

  printf("%s = %f.\n", input_expression, value);

  log_debug("释放堆内存：%s", input_expression);
  free(input_expression);
  
  return 0;
}