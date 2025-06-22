#include <stdlib.h>
#include <string.h>

#include "ast.h"
#include "logfmt.h"

ast_node *ast_create_number(double value) {
  log_info("AST 创建数值节点：%f", value);
  // 创建 数值类型节点
  ast_node *an = malloc(sizeof(ast_node));
  an->op = OP_NUM;
  an->number = value;
  an->func_name = NULL;
  an->left = NULL;
  an->right = NULL;
  an->args = NULL;
  an->args_count = 0;
  an->parent = NULL;

  return an;
}

ast_node *ast_create_unary(oper_type type, ast_node *left) {
  log_info("AST 创建一元操作符节点：%d, %d", type, left->op);
  // 创建 一元操作节点
  ast_node *an = malloc(sizeof(ast_node));
  an->op = type;
  an->number = 0;
  an->func_name = NULL;
  an->left = left;
  an->right = NULL;
  an->args = NULL;
  an->args_count = 0;
  an->parent = NULL;

  return an;
}

ast_node *ast_create_binary(oper_type type, ast_node *left, ast_node *right) {
  log_info("AST 创建二元操作符节点：%d, %d, %d", type, left->op, right->op);
  // 创建 二元操作节点
  ast_node *an = malloc(sizeof(ast_node));
  an->op = type;
  an->number = 0;
  an->func_name = NULL;
  an->left = left;
  an->right = right;
  an->args = NULL;
  an->args_count = 0;
  an->parent = NULL;

  return an;
}

ast_node *ast_create_function(char *func_name, ast_node **args, int count) {
  log_info("AST 创建函数节点：%s, %d", func_name, count);
  // 创建 函数操作节点
  ast_node *an = malloc(sizeof(ast_node));
  an->op = OP_FUNC;
  an->number = 0;
  an->func_name = strdup(func_name);
  an->left = NULL;
  an->right = NULL;
  an->args = args;
  an->args_count = count;
  an->parent = NULL;

  return an;
}

ast_node *ast_create_args(ast_node *expr) {
  log_info("AST 创建函数参数节点，子节点操作符为：%d", expr->op);
  // 创建 expr 表达式节点
  ast_node *an = malloc(sizeof(ast_node));
  an->op = OP_EXPR_GROUP;
  an->number = 0;
  an->func_name = NULL;
  an->left = expr;
  an->right = NULL;
  an->args = NULL;
  an->args_count = 0;
  an->parent = NULL;

  return an;
}

void ast_tree_free(ast_node *node) {
  // 递归推出条件
  if (!node) {
    return;
  }
  // 释放左子树
  if (node->left) {
    ast_tree_free(node->left);
  }
  // 释放右子树
  if (node->right) {
    ast_tree_free(node->right);
  }
  // 释放函数节点
  if (node->op == OP_FUNC) {
    if (node->args) {
      for (int i = 0; i < node->args_count; i++) {
        ast_tree_free(node->args[i]);
      }
    }
    free(node->args);
    free(node->func_name);
  }

  log_info("释放节点操作符为：%d", node->op);
  free(node);

  return;
}