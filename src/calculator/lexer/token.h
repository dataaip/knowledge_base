#ifndef LEXER_TOKEN_H
#define LEXER_TOKEN_H

#define FUNC_MAX_CHAR 10

typedef enum {
  // number 数值
  TOK_NUM,
  // 函数 sin cos 等
  TOK_FUNC,
  // 加减乘除求模 + - * / % 等左结合
  TOK_ADD,
  TOK_SUB,
  TOK_MUL,
  TOK_DIV,
  TOK_MOD,
  // 幂运算 ^ 阶乘! 等右结合
  TOK_POW,
  TOK_FACT,
  // 括号 ( ) 优先级 
  TOK_LPAREN,
  TOK_RPAREN,
  // 结束标志
  TOK_END,
  // 异常标志
  TOK_ERR
} token_type;

typedef struct {
  token_type token_type;
  double number_value;
  char func_value[FUNC_MAX_CHAR];
} token;

#endif // !LEXER_TOKEN_H
