#include "rpn.h"
#include "logfmt.h"

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 中缀表达式转后缀表达式 逆波兰算法
void shunting_yard_expression(const char *inputs,
                              char postfix_expression[][STACK_MAX_SIZE],
                              int *postfix_expression_count) {
  // 初始化 运算符栈
  operator_stack ops;
  init_operator_stack(&ops);
  log_info("初始化运算符栈");

  // 先获取长度，在归 0 转为后缀表达式去除括号空格后重新计算赋值
  size_t inputs_len = strlen(inputs);
  // char postfix_expression[][STACK_MAX_SIZE] 存储后缀表达式
  // 初始化 后缀表达式栈 长度
  *postfix_expression_count = 0;

  // 临时存储单个 token
  char token[STACK_MAX_SIZE] = {0};
  int token_index = 0;

  // 循环计算处理 token
  for (int i = 0; i <= inputs_len; i++) {
    char c = inputs[i];
    log_warn("接收到一个字符 %c", c);

    if (isalnum(c) || c == '.') {
      // 判断数值直接写入 token 列表 等待
      token[token_index++] = c;
      log_info("%c 写入 token 列表", c);
    } else if (c == '(') {
      // 判断左括号 压入操作符栈

      // 先判断 token 列表里有值 就压入后缀表达式栈
      if (token_index > 0) {
        token[token_index] = '\0';
        strcpy(postfix_expression[(*postfix_expression_count)++], token);
        token_index = 0;
        log_info("%s 写入 postfix表达式列表", token);
      }

      // 压入 左括号 入运算符栈
      push_operator_stack(&ops, &c);
      log_info("%c 压入运算符栈", c);
    } else if (c == ')') {
      // 判断右括号 弹出运算符栈的符号 压入 后缀表达式 直到遇到 匹配的左括号
      // 判断 inputs 结束

      // 先判断 token 列表里有值 就压入后缀表达式栈
      if (token_index > 0) {
        token[token_index] = '\0';
        strcpy(postfix_expression[(*postfix_expression_count)++], token);
        token_index = 0;
        log_info("%s 写入 postfix表达式列表", token);
      }

      // 预读将运算符栈的 运算符弹出压入 postfix 后缀表达式直到 遇到 左括号或
      // NULL
      while (peek_operator_stack(&ops) != NULL &&
             strcmp(peek_operator_stack(&ops), "(") != 0) {
        log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
                 peek_operator_stack(&ops));
        strcpy(postfix_expression[(*postfix_expression_count)++],
               pop_operator_stack(&ops));
      }

      if (peek_operator_stack(&ops) != NULL &&
          strcmp(peek_operator_stack(&ops), "(") == 0) {
        log_info("%s 弹出运算符栈", peek_operator_stack(&ops));
        pop_operator_stack(&ops);
      } else {
        log_fatal("右括号没有匹配到相应的左括号 %c, %d", c, i);
        exit(1);
      }

      if (peek_operator_stack(&ops) != NULL &&
          is_function(peek_operator_stack(&ops))) {
        log_info("%s 弹出运算符栈 写入 postfix 表达式列表",
                 peek_operator_stack(&ops));
        strcpy(postfix_expression[(*postfix_expression_count)++],
               pop_operator_stack(&ops));
      }
    } else if (is_operator(c) || c == ',') {

      // 先判断 token 列表里有值 就压入后缀表达式栈
      if (token_index > 0) {
        token[token_index] = '\0';
        strcpy(postfix_expression[(*postfix_expression_count)++], token);
        token_index = 0;
        log_info("%s 写入 postfix表达式列表", token);
      }

      // 处理一元表达式，判断 - 号的位置作用，压入栈
      if (c == '-' &&
          (i == 0 || inputs[i-1] == '(' || is_operator(inputs[i-1]))) {
        strcpy(postfix_expression[(*postfix_expression_count)++], "~");
        log_info("%s 写入 postfix表达式列表", token);
        continue;
      }

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
    } else if (c == ' ' || c == '\0') {
      // 先判断 token 列表里有值 就压入后缀表达式栈
      if (token_index > 0) {
        token[token_index] = '\0';
        strcpy(postfix_expression[(*postfix_expression_count)++], token);
        token_index = 0;
        log_info("%s 写入 postfix表达式列表", token);
      }
    }
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
double evaluation_postfix_expression(char postfix_expression[][STACK_MAX_SIZE],
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

double evaluate_expression_rpn(const char *inputs) {
  // 初始化 token
  char tokens[STACK_MAX_SIZE][STACK_MAX_SIZE];
  int count = 0;
  // 生成后缀表达式
  shunting_yard_expression(inputs, tokens, &count);
  // 计算后缀表达式
  double result = evaluation_postfix_expression(tokens, count);

  return result;
}