#ifndef CALCULATOR_AST_H
#define CALCULATOR_AST_H

typedef enum {
  // number 数值
  OP_NUM,
  // 函数 sin cos 等
  OP_FUNC,
  // 加减乘除求模 + - * / % 等左结合
  OP_ADD,
  OP_SUB,
  OP_MUL,
  OP_DIV,
  OP_MOD,
  // 幂运算 ^ 阶乘! 等右结合
  OP_POW,
  OP_FACT,
  OP_NEGATE,     // 一元负号
  OP_EXPR_GROUP  // 括号表达式组
} oper_type;

typedef struct ast_node {
  oper_type op;
  double number; // 数字节点值
  char* func_name; // 函数名
  struct ast_node* left; // 左操作数/单操作数
  struct ast_node* right; // 右操作数（二元操作）
  struct ast_node** args;  // 函数参数数组,二级指针执行一系列 node 组
  int args_count;         // 参数数量
  struct ast_node* parent;
} ast_node;

ast_node* ast_create_number(double value); // 创建数值 ast_node 节点
ast_node* ast_create_unary(oper_type type, ast_node* left); // 创建 一元操作 左结合 ast_node 节点
ast_node* ast_create_binary(oper_type type, ast_node* left, ast_node* right); // 创建 二元操作 ast_node 节点
ast_node* ast_create_function(char* func_name, ast_node** args, int count); // 创建 函数操作 ast_node 节点
ast_node* ast_create_args(ast_node* expr); // 创建 函数参数 ast_node 节点

void ast_tree_free(ast_node* head); // ast 树节点释放

ast_node* evaluate_expression_ast(const char *expr);

#endif // !CALCULATOR_AST_H
