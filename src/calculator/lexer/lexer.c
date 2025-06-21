#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lexer.h"
#include "token.h"
#include "logfmt.h"

token get_next_token(const char **input) {

  // 跳过空字符
  while (isspace(**input)) {
    (*input)++;
  }

  // 判断数值
  if (isdigit(**input) || **input == '.') {
    if (**input != '-') {
      char *endptr = NULL;
      errno = 0;
      double num = strtod(*input, &endptr);
      if (errno == ERANGE) {
        log_error("strol 数值转换异常：%s", *input);
      }
      int len = (int)(endptr - *input);
      *input = endptr;
      return (token){.token_type = TOK_NUM, num, .tok_length = len};
    }
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
    tok.tok_length = i;
    return tok;
  }

  // 判断运算符
  switch (*(*input)++) {
  case '+':
    return (token){TOK_ADD, .tok_length = 1};
  case '-':
    return (token){TOK_SUB, .tok_length = 1};
  case '*':
    return (token){TOK_MUL, .tok_length = 1};
  case '/':
    return (token){TOK_DIV, .tok_length = 1};
  case '%':
    return (token){TOK_MOD, .tok_length = 1};
  case '^':
    return (token){TOK_POW, .tok_length = 1};
  case '!':
    return (token){TOK_FACT, .tok_length = 1};
  case '(':
    return (token){TOK_LPAREN, .tok_length = 1};
  case ')':
    return (token){TOK_RPAREN, .tok_length = 1};
  case ',':
    return (token){TOK_COMMA, .tok_length = 1};
  case '\0':
    return (token){TOK_END, .tok_length = 1};
  default:
    return (token){TOK_ERR, .tok_length = 1};
  }

  log_error("获取下一个 Token 异常：%s", *input);
}

token_type peek_next_token(const char** inputs) {
  // 保存原始指针位置
  const char* original = *inputs;
  // 读取下一个 token
  token tok = get_next_token(inputs);
  // 恢复原始指针位置
  *inputs = original;

  log_info("预读到的下一个 token 类型为 %d: ", tok.token_type);
  
  return tok.token_type;
}

void print_token(const token *t) {
  printf("(%d, %f, %s, %d)\n", t->token_type, t->number_value, t->func_value,
         t->tok_length);
}