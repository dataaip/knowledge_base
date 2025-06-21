#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "input.h"
#include "parser.h"


int main() {

  char* input_expression = get_input_expression();

  double value = evaluate_expression((const char *)input_expression);

  printf("%s = %f.\n", input_expression, value);

  free(input_expression);

  return 0;
}