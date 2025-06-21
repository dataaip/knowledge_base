#include "lexer.h"
#include "token.h"
#include "parser.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // char *ch = "-2034 + -4.5 * 8 % 10 + sin(10) + 5!";

  // while (*ch != '\0') {
  //   token tok = get_next_token((const char **)&ch);
  //   print_token(&tok);
  // }

  const char *expressions[] = {
      "2 + 3 * 4",           // 14
      "2 * (3 + 4)",         // 14
      "sin(0.5) + cos(0.5)", // ~1.357008
      "3! + 4!",             // 30
      "2^3^2",               // 512 (右结合)
      "pow(2, 3+2)"          // 32
  };

  for (int i = 0; i < sizeof(expressions) / sizeof(expressions[0]); i++) {
    printf("%s = %f\n", expressions[i], evaluate_expression(expressions[i]));
  }

  return 0;
}