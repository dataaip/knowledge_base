#include "lexer/lexer.h"
#include "lexer/token.h"
#include "parser/parser.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main() {

  char *ch = "2034 + 4.5 * 8 % 10 + sin(10) + 5!";

  while (*ch != '\0') {
    token tok = get_next_token((const char **)&ch);
    print_token(&tok);
  }

  char inputs[50];

  fprintf(stdout, "请输入表达式：");

  if (!fgets(inputs, sizeof(inputs), stdin)) {
    if (feof(stdin)) {
      printf("EOF received. Exiting program.\n");
      clearerr(stdin);
      // exit(0);
    } else {
      perror("fgets input error");
    }
  }

  int value = (int)evaluate_expression(inputs);
  fprintf(stdout, "结果为：%d\n", value);

  return 0;
}