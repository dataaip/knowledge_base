#include "ast.h"
#include "logfmt.h"
#include "token.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

double factorial(double number) {
  // 计算阶乘
  if (number < 0 || number != (int)number) {
    log_fatal("错误: 阶乘要求非负整数");
    exit(1);
  }

  double result = 1;
  for (int i = 1; i <= (int)number; i++) {
    result *= i;
  }
  return result;
}

double number_div(double left, double right) {
  // 计算除法
  if (right != 0) {
    return left / right;
  }
  log_fatal("被除数不能为 0 : %d", right);
  exit(1);
}

double evaluate_function(ast_node *ast_func) {
  char func_name[FUNC_MAX_CHAR];
  strncpy(func_name, ast_func->func_name, sizeof(func_name) - 1);
  func_name[sizeof(func_name) - 1] = '\0';
  // 求 参数列表的值
  int args_count = ast_func->args_count;
  double args_values[args_count];
  for (int i = 0; i < args_count; i++) {
    args_values[i] = evaluate_ast(ast_func->args[i]);
  }

  // 根据参数个数调用函数 参数为 1 个
  if (args_count == 1) {
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
  if (args_count == 2) {
    if (strcmp(func_name, "pow") == 0 &&
        !isnan(pow(args_values[0], args_values[1]))) {
      return pow(args_values[0], args_values[1]);
    }
  }

  log_fatal("未知的函数匹配失败：%s", func_name);
  exit(1);
}

double evaluate_ast(ast_node *ast_head) {

  log_info("当前节点值为：%d, 操作符为: %d", ast_head->number, ast_head->op);

  // 递归跳出条件
  if (!ast_head) {
    return 0;
  }
  // 判断 ast 节点类型回溯
  switch (ast_head->op) {
  case OP_NUM: {
    log_info("当前节点值为数值: %d", ast_head->number);
    return ast_head->number;
  }

  case OP_NEGATE:
    return -evaluate_ast(ast_head->left);

  case OP_FACT:
    return factorial(evaluate_ast(ast_head->left));

  case OP_ADD:
    return evaluate_ast(ast_head->left) + evaluate_ast(ast_head->right);

  case OP_SUB:
    return evaluate_ast(ast_head->left) - evaluate_ast(ast_head->right);

  case OP_MUL:
    return evaluate_ast(ast_head->left) * evaluate_ast(ast_head->right);

  case OP_DIV:
    return number_div(evaluate_ast(ast_head->left),
                      evaluate_ast(ast_head->right));

  case OP_POW:
    return pow(evaluate_ast(ast_head->left), evaluate_ast(ast_head->right));

  case OP_FUNC:
    return evaluate_function(ast_head);

  case OP_EXPR_GROUP:
    return evaluate_ast(ast_head->left);

  default:
    log_fatal("未知的 AST 节点匹配失败：%d", ast_head->op);
    exit(1);
  }
}