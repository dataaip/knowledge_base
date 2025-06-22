#include "lexer.h"
#include "logfmt.h"
#include "rpn.h"
#include "token.h"

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 中缀表达式转后缀表达式 逆波兰算法
void shunting_yard_expression_tok(const char **inputs,
                                  char postfix_expression[][STACK_MAX_SIZE],
                                  int *postfix_expression_count) {
  // 初始化 运算符栈
  operator_stack ops;
  init_operator_stack(&ops);
  log_info("初始化运算符栈");

  token tok = get_next_token(inputs);
  while (tok.token_type != TOK_END && tok.token_type != TOK_ERR) {

    if (tok.token_type == TOK_NUM) { // 判断 数值类型
      char buffer[STACK_MAX_SIZE];
      sprintf(buffer, "%f", tok.number_value);
      strcpy(postfix_expression[(*postfix_expression_count)++], buffer);
      log_info("获取了数值类型 %s 写入 postfix 表达式列表", buffer);
    } else if (tok.token_type == TOK_LPAREN) { // 判断左括号 压入操作符栈
      push_operator_stack(&ops, "(");
      log_info("%s 压入运算符栈", "(");
    } else if (tok.token_type == TOK_RPAREN) { // 判断右括号
      // 从运算符栈不断去除运算符 直到遇到括号
      while (peek_operator_stack(&ops) != NULL &&
             strcmp(peek_operator_stack(&ops), "(") != 0) {
        log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
                 peek_operator_stack(&ops));
        strcpy(postfix_expression[(*postfix_expression_count)++],
               pop_operator_stack(&ops));
      }
      // 弹出 ( 左括号
      if (peek_operator_stack(&ops) != NULL &&
          strcmp(peek_operator_stack(&ops), "(") == 0) {
        log_info("%s 弹出运算符栈", peek_operator_stack(&ops));
        pop_operator_stack(&ops);
      } else {
        log_fatal("右括号没有匹配到相应的左括号 %d", tok.token_type);
        exit(1);
      }
      // 若为函数 处理函数
      if (peek_operator_stack(&ops) != NULL &&
          is_function(peek_operator_stack(&ops))) {
        log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
                 peek_operator_stack(&ops));
        strcpy(postfix_expression[(*postfix_expression_count)++],
               pop_operator_stack(&ops));
      }
    } else if (tok.token_type == TOK_FUNC) { // 判断函数
      push_operator_stack(&ops, tok.func_value);
      log_info("%s 压入运算符栈", tok.func_value);
    } else if (tok.token_type == TOK_ADD || tok.token_type == TOK_SUB ||
               tok.token_type == TOK_MUL || tok.token_type == TOK_DIV ||
               tok.token_type == TOK_MOD || tok.token_type == TOK_POW ||
               tok.token_type == TOK_FACT) { // 判断 运算符

      char c = '\0';
      switch (tok.token_type) {
      case TOK_ADD: {
        c = '+';
        break;
      }

      case TOK_SUB: {
        c = '-';
        break;
      }

      case TOK_MUL: {
        c = '*';
        break;
      }

      case TOK_DIV: {
        c = '/';
        break;
      }

      case TOK_MOD: {
        c = '%';
        break;
      }

      case TOK_POW: {
        c = '^';
        break;
      }

      case TOK_FACT: {
        c = '!';
        break;
      }

      default: {
        log_fatal("未知的操作符 %d", tok.token_type);
        exit(1);
      }
      }

      // 处理一元表达式，判断 - 号的位置作用，压入栈

      // 处理运算符优先级
      while (peek_operator_stack(&ops) != NULL) {

        char *ops_c = peek_operator_stack(&ops);

        if (is_function(ops_c)) {
          log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
                   peek_operator_stack(&ops));
          strcpy(postfix_expression[(*postfix_expression_count)++],
                 pop_operator_stack(&ops));

        } else if (is_operator(ops_c[0]) &&
                   (operator_precedence(ops_c[0]) > operator_precedence(c) ||
                    (operator_precedence(ops_c[0]) == operator_precedence(c) &&
                     c != '^' && c != '!'))) {

          log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
                   peek_operator_stack(&ops));
          strcpy(postfix_expression[(*postfix_expression_count)++],
                 pop_operator_stack(&ops));
        } else {
          break;
        }
      }
      // 压入运算符栈
      char operator_str[2] = {c, '\0'};
      push_operator_stack(&ops, operator_str);
      log_info("%s 压入运算符栈", operator_str);
    }

    tok = get_next_token(inputs);
  }

  // 处理剩余运算符
  while (peek_operator_stack(&ops) != NULL) {
    log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
             peek_operator_stack(&ops));
    strcpy(postfix_expression[(*postfix_expression_count)++],
           pop_operator_stack(&ops));
  }
}

// 后缀表达式求值
double
evaluation_postfix_expression_tok(char postfix_expression[][STACK_MAX_SIZE],
                                  int postfix_expression_count) {

  // 初始化 操作数栈
  operand_stack ods;
  init_operand_stack(&ods);

  // 后缀表达式计算求值
  for (int i = 0; i < postfix_expression_count; i++) {
    char *token = postfix_expression[i];

    // 处理数值 直接压入
    if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[i + 1]))) {
      double value = atof(token);
      push_operand_stack(&ods, value);
      log_info("处理数值计算 %f 压入操作数栈", value);
    } else if (token[0] == '~') { // 一元负号
      double value = -pop_operand_stack(&ods);
      push_operand_stack(&ods, value);
      log_info("处理一元负号计算 %f 压入操作数栈", value);
    } else if (is_function(token)) {
      double value = apply_function(token, pop_operand_stack(&ods));
      push_operand_stack(&ods, value);
      log_info("处理函数计算 %f 压入操作数栈", value);
    } else if (is_operator(token[0])) {
      double right = pop_operand_stack(&ods);
      double left = pop_operand_stack(&ods);
      if (isnan(left) || isnan(right)) {
        return NAN;
      }
      double value = apply_operator(left, right, token[0]);
      push_operand_stack(&ods, value);
      log_info("处理运算符计算 %d 压入操作数栈", value);
    }
  }

  if (ods.top != 0) {
    log_fatal("后缀表达式计算未完成 %d", ods.top);
    exit(1);
  }

  double result = pop_operand_stack(&ods);
  log_info("后缀表达式计算完成 %d", result);

  return result;
}

double evaluate_expression_rpn_tok(const char *inputs) {
  // 初始化 token
  char tokens[STACK_MAX_SIZE][STACK_MAX_SIZE];
  int count = 0;
  // 生成后缀表达式
  shunting_yard_expression_tok(&inputs, tokens, &count);
  // 计算后缀表达式
  double result = evaluation_postfix_expression_tok(tokens, count);

  return result;
}