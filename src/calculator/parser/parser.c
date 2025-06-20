/*
expression > term > factor > base 的层次结构很好地反映了算术运算的优先级顺序：
加减法（+, -）优先级最低。
乘除法（*, /）优先级高于加减法。
幂运算（^）和阶乘（!）优先级更高。
最底层是数字、括号子表达式和函数调用

expression → term { ('+' | '-') term } // 加减运算（左结合）
term → factor { ('*' | '/') factor } // 乘除运算（左结合）
factor → [ '-' ] base [ '^' factor ] [ '!' ] // 负号、幂（右结合）、阶乘（后缀）
base → number | '(' expression ')' | function_call // 数字、子表达式、函数调用
function_call → function '(' arguments ')' // 函数调用
arguments → expression { ',' expression } // 参数列表
*/

#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../lexer/lexer.h"
#include "../lexer/token.h"
#include "parser.h"

#define FUNC_ARGS_MAX 4

double parser_expression(const char **input);
double parser_term(const char **input);
double parser_factor(const char **input);
double parser_base(const char **input);
double parser_function_call(const char **input);
double parser_arguments(const char **input, double *args_values);

// expression → term { ('+' | '-') term } // 加减运算（左结合）
double parser_expression(const char **input) {
  // 先解析左边
  double left = parser_term(input);

  // 获取运算符号 + -
  token tok = get_next_token(input);
  // 如果是 + -
  while (tok.token_type == TOK_ADD || tok.token_type == TOK_SUB) {
    // 再解析右边
    double right = parser_term(input);
    // 根据符号 返回计算值
    left = tok.token_type == TOK_ADD ? left + right : left - right;

    tok = get_next_token(input);
  }

  // 回退指针
  *input -= tok.tok_length;

  // 返回 left 计算值
  return left;
}

// term → factor { ('*' | '/') factor } // 乘除运算（左结合）
double parser_term(const char **input) {
  // 先解析左边
  double left = parser_factor(input);
  // 记录起始位置用于错误报告
  const char *start_pos = *input;

  // 获取运算符号 * /
  token tok = get_next_token(input);
  // 如果是 * /
  while (tok.token_type == TOK_MUL || tok.token_type == TOK_DIV) {
    // 再解析右边
    double right = parser_factor(input);
    // 根据符号 返回计算值
    if (tok.token_type == TOK_MUL) {
      left *= right;
    } else if (right != 0) {
      left /= right;
    } else {
      fprintf(stderr, "Error at position %ld: Expected Division by zero!\n",
              (*input - start_pos));
      exit(1);
    }

    tok = get_next_token(input);
  }

  // 回退指针
  *input -= tok.tok_length;

  // 返回 left 计算值
  return left;
}

// factor → [ '-' ] base [ '^' factor ] [ '!' ] //
// 负号、幂（右结合）、阶乘（后缀）
double parser_factor(const char **input) {
  // 记录起始位置用于错误报告
  const char *start_pos = *input;

  // 判断是否为 - 数
  bool negative = false;
  token tok = get_next_token(input);
  if (tok.token_type == TOK_SUB) {
    negative = true;
  } else {
    // 回退 token
    *input -= tok.tok_length;
  }

  // 解析 base 基础值
  double base_value = parser_base(input);
  // 符号转变
  if (negative) {
    base_value *= -1;
  }

  // 获取下一个 token
  tok = get_next_token(input);

  // 计算 2^(3!)、(4!)!、2^(3^2) 多个组合
  while (tok.token_type == TOK_FACT || tok.token_type == TOK_POW) {

    // ！阶乘 判断
    if (tok.token_type == TOK_FACT) {
      // 判断 base 是否为整数
      int fact = (int)base_value;
      if (fact < 0 || fact != base_value) {
        fprintf(
            stderr,
            "Error at position %ld: Expected Factorial requires non-negative "
            "integer, got '%d'\n",
            (*input - start_pos), (int)tok.token_type);
        exit(1);
      }
      // 计算阶乘
      int fact_value = 1;
      for (int i = 1; i <= fact; i++) {
        if (fact_value > INT_MAX / i) {
          fprintf(stderr, "Factorial overflow");
          exit(1);
        }
        fact_value *= i;
      }
      base_value = fact_value;
    }

    // 幂计算 判断
    if (tok.token_type == TOK_POW) {
      // 解析 幂计算 返回
      double factor_value = parser_factor(input);
      base_value = pow(base_value, factor_value);
    }

    // 继续获取下一个 token 判断是不是 ^
    // !，此时到最后一步会多获取一个tok，需要回退
    tok = get_next_token(input);
  }

  // 回退指针
  *input -= tok.tok_length;

  return base_value;
}

// base → number | '(' expression ')' | function_call
double parser_base(const char **input) {
  token tok = get_next_token(input);
  const char *start_pos = *input; // 记录起始位置用于错误报告

  // 判断是否数值类型，如果是则返回
  if (tok.token_type == TOK_NUM) {
    return tok.number_value;
  }

  // 判断是否括号，先判断左括号 (
  if (tok.token_type == TOK_LPAREN) {
    // 调用解析表达式计算
    double expr_value = parser_expression(input);
    // 获取下一个字符，判断是否右括号 )
    if (get_next_token(input).token_type != TOK_RPAREN) {
      fprintf(stderr, "Error at position %ld: Expected ')', got '%d'\n",
              (*input - start_pos), (int)tok.token_type);
      exit(1);
    }
    return expr_value;
  }

  // 判断 function 函数
  if (tok.token_type == TOK_FUNC) {
    // 回退 token
    *input -= tok.tok_length;
    // 调用 function call 解析 函数
    double function_value = parser_function_call(input);
    return function_value;
  }

  fprintf(stderr, "Error at position %ld: Expected , got '%d'\n",
          (*input - start_pos), (int)tok.token_type);
  exit(1);
}

// function_call → function '(' arguments ')' // 函数调用
double parser_function_call(const char **input) {
  token tok = get_next_token(input);
  const char *start_pos = *input; // 记录起始位置用于错误报告

  // 获取函数名称字符串
  char func_name[FUNC_MAX_CHAR];
  strncpy(func_name, tok.func_value, sizeof(func_name) - 1);
  func_name[sizeof(func_name) - 1] = '\0';

  // 处理 () 括号里的内容 先判断 括号
  // 判断是否括号，先判断左括号 (
  if (get_next_token(input).token_type != TOK_LPAREN) {
    fprintf(stderr, "Error: Expected '(' after function '%s'\n", func_name);
    exit(1);
  }

  // 调用解析表达式计算
  double args_values[FUNC_ARGS_MAX];
  // 解析计算参数列表
  double args_number = parser_arguments(input, args_values);
  // 获取下一个字符，判断是否右括号 )
  if (get_next_token(input).token_type != TOK_RPAREN) {
    fprintf(stderr, "Error: Expected ',' or ')' after argument\n");
    exit(1);
  }

  // 根据参数个数调用函数 参数为 1 个
  if (args_number == 1) {
    // 判断函数类型，调用函数
    if (strcmp(func_name, "sin") == 0) {
      return sin(args_values[0]);
    }
    if (strcmp(func_name, "cos") == 0) {
      return cos(args_values[0]);
    }
    if (strcmp(func_name, "tan") == 0) {
      return tan(args_values[0]);
    }
    if (strcmp(func_name, "sqrt") == 0) {
      return sqrt(args_values[0]);
    }
    if (strcmp(func_name, "log") == 0 && args_values[0] >= 0) {
      return log(args_values[0]);
    }
  }
  // 根据参数个数调用函数 参数为 2 个
  if (args_number == 2) {
    if (strcmp(func_name, "pow") == 0 && !isnan(pow(args_values[0], args_values[1]))) {
      return pow(args_values[0], args_values[1]);
    }
  }

  fprintf(stderr, "Error at position %ld: Expected function call, got '%d'\n",
          (*input - start_pos), (int)tok.token_type);
  exit(1);
}

// arguments → expression { ',' expression } // 参数列表
double parser_arguments(const char **input, double *args_values) {
  // 最大支持解析 4 个参数
  int current_arg = 0;

  token tok = get_next_token(input);
  while (tok.token_type != TOK_RPAREN) {
    // 参数个数判断
    if (current_arg > FUNC_MAX_CHAR - 1) {
      fprintf(stderr, "Too many arguments for function.\n");
      exit(1);
    }
    // 解析计算第 n 个参数，添加到 参数列表
    args_values[current_arg++] = parser_expression(input);
    // 获取下一个 token
    tok = get_next_token(input);

    if (tok.token_type != TOK_COMMA) {
      fprintf(stderr, "arguments for function error , lost.\n");
      exit(1);
    }
  }
  // 返回函数拥有的参数个数
  return current_arg;
}

double evaluate_expression(const char *expr) {

  double result = parser_expression(&expr);
  // 判断是否解析完成
  if (get_next_token(&expr).token_type != TOK_END) {
    fprintf(stderr, "Error: Extra characters after expression\n");
    exit(1);
  }

  return result;
}