#include "lexer.h"
#include "token.h"
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

token get_next_token(const char **input) {

  // 1. 保障 **input 是正确的字符

  // 跳过空字符
  while (isspace(**input)) {
    (*input)++;
  }

  // 判断数值
  if (isdigit(**input) || **input == '.') {
    char *endptr = NULL;
    errno = 0;
    double num = strtod(*input, &endptr);
    if (errno == ERANGE) {
      printf("invalid strtol, please try again.\n");
    }
    *input = endptr;
    return (token){.token_type = TOK_NUM, num};
  }

  // 判断函数
  if (isalpha(**input)) {
    token tok = {.token_type = TOK_FUNC};
    int i = 0;
    while (isalpha(**input)) {
      tok.func_value[i++] = (**input); // *(*input)++
      (*input)++;
    }
    tok.func_value[i] = '\0';
    return tok;
  }

  // 判断运算符
  switch (*(*input)++) {
  case '+':
    return (token){TOK_ADD};
  case '-':
    return (token){TOK_SUB};
  case '*':
    return (token){TOK_MUL};
  case '/':
    return (token){TOK_DIV};
  case '%':
    return (token){TOK_MOD};
  case '^':
    return (token){TOK_POW};
  case '!':
    return (token){TOK_FACT};
  case '(':
    return (token){TOK_LPAREN};
  case ')':
    return (token){TOK_RPAREN};
  case '\0':
    return (token){TOK_END};
  default:
    return (token){TOK_ERR};
  }
}

void print_token(const token *t) {
  printf("(%d, %f, %s) -> ", t->token_type, t->number_value, t->func_value);
}