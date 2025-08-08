#include "logfmt.h"
#include "rpn.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

int operator_precedence(char operator) {
  log_info("运算符优先级判断 %c", operator);
  // 运算符优先级判断
  if (operator== '+' || operator== '-') {
    return 1;
  } else if (operator== '*' || operator== '/') {
    return 2;
  } else if (operator== '^' || operator== '!') {
    return 3;
  } else {
    log_fatal("未知的运算符 %c", operator);
    exit(1);
  }
}

int is_operator(char operator) {
  log_info("是否运算符判断 %c", operator);
  // 是否运算符判断
  return operator== '+' || operator== '-' || operator== '*' || operator==
      '/' || operator== '^' || operator== '!';
}

int is_function(const char *operator) {
  log_info("是否函数判断 %c", operator);
  // 是否函数判断
  return strcmp(operator, "sin") == 0 || strcmp(operator, "cos") == 0 ||
         strcmp(operator, "tan") == 0 || strcmp(operator, "sqrt") == 0 ||
         strcmp(operator, "log") == 0 || strcmp(operator, "ln") == 0;
}

double apply_operator(double left, double right, char operator) {
  log_info("运算符应用计算值 %c", operator);
  // 运算符匹配应用计算值
  switch (operator) {
  case '+':
    return left + right;

  case '-':
    return left - right;

  case '*':
    return left * right;

  case '/': {
    if (right == 0) {
      log_fatal("被除数不能为 0 %f", right);
      exit(1);
    }
    return left / right;
  }

  case '^':
    return pow(left, right);

  case '!': {
    int fac = (int)left;
    if (fac < 0 || fac != (int)left) {
      log_fatal("阶乘小于或不为整数 %d", left);
    }
    int result = 1;
    for (int i = 1; i <= fac; i++) {
      result *= i;
    }
    return result;
  }

  default: {
    log_fatal("未知的运算符 %c", operator);
    exit(1);
  }
  }
}

double apply_function(const char *operator, double right) {
  log_info("运算符应用计算值 %c", operator);
  // 函数匹配应用计算值
  if (strcmp(operator, "sin") == 0) {
    return sin(right);
  }
  if (strcmp(operator, "cos") == 0) {
    return cos(right);
  }
  if (strcmp(operator, "tan") == 0) {
    return tan(right);
  }
  if (strcmp(operator, "sqrt") == 0) {
    return sqrt(right);
  }
  if (strcmp(operator, "log") == 0) {
    return log10(right);
  }
  if (strcmp(operator, "ln") == 0) {
    return log(right);
  }

  log_fatal("未知的运算符 %s", operator);
  exit(1);
}