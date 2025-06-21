#include "ast.h"
#include "lexer.h"
#include "logfmt.h"
#include "token.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define FUNC_ARGS_MAX 4

// 表达式解析函数
ast_node* parser_expression_ast(const char **input);
ast_node* parser_term_ast(const char **input);
ast_node* parser_factor_ast(const char **input);
ast_node* parser_base_ast(const char **input);
ast_node* parser_function_call_ast(const char **input);
void parser_arguments_ast(const char **input, ast_node*** args, int* count);

// expression → term { ('+' | '-') term } // 加减运算（左结合）
ast_node* parser_expression_ast(const char **input) {
  // 先解析左边
  ast_node* left = parser_term_ast(input);

  // 获取运算符号 + -
  token tok = get_next_token(input);
  // 如果是 + -
  while (tok.token_type == TOK_ADD || tok.token_type == TOK_SUB) {
    // 再解析右边
    ast_node*  right = parser_term_ast(input);
    // 根据符号 创建 ast 节点
    oper_type op_type = (tok.token_type == TOK_ADD) ? OP_ADD : OP_SUB;
    ast_create_binary(op_type, left, right);

    tok = get_next_token(input);
  }

  // 回退指针
  *input -= tok.tok_length;

  // 返回 left 计算值
  return left;
}

// term → factor { ('*' | '/') factor } // 乘除运算（左结合）
ast_node* parser_term_ast(const char **input) {
  // 先解析左边
  ast_node* left = parser_factor_ast(input);

  // 获取运算符号 * /
  token tok = get_next_token(input);
  // 如果是 * /
  while (tok.token_type == TOK_MUL || tok.token_type == TOK_DIV) {
    // 再解析右边
    ast_node* right = parser_factor_ast(input);
    // 根据符号创建 ast 节点
    if (tok.token_type == TOK_MUL) {
      ast_create_binary(OP_MUL, left, right);  
    } else {
      ast_create_binary(OP_DIV, left, right);  
    }

    tok = get_next_token(input);
  }

  // 回退指针
  *input -= tok.tok_length;

  // 返回 left 计算值
  return left;
}

// factor → [ '-' ] base [ '^' factor ] [ '!' ] //
ast_node* parser_factor_ast(const char **input) {
  // 判断是否为 - 数
  bool negative = false;
  // 获取下一个 token
  token tok = get_next_token(input);
  if (tok.token_type == TOK_SUB) {
    negative = true;
  } else {
    // 回退 token
    *input -= tok.tok_length;
  }

  // 解析 base 基础值
  ast_node* base_value = parser_base_ast(input);
  // 符号转变
  if (negative) {
    // 创建一元符号节点
    ast_create_unary(OP_NEGATE, base_value);
  }

  // 获取下一个 token
  tok = get_next_token(input);

  // 计算 2^(3!)、(4!)!、2^(3^2) 多个组合
  while (tok.token_type == TOK_FACT || tok.token_type == TOK_POW) {

    // ！阶乘 判断
    if (tok.token_type == TOK_FACT) {
      ast_create_unary(OP_FACT, base_value);
    }

    // 幂计算 判断
    if (tok.token_type == TOK_POW) {
      // 解析 幂计算 返回
      ast_node* factor_value = parser_factor_ast(input);
      ast_create_binary(OP_POW, base_value, factor_value);
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
ast_node* parser_base_ast(const char **input) {
  // 获取下一个 token
  token tok = get_next_token(input);

  // 判断是否数值类型，如果是则返回
  if (tok.token_type == TOK_NUM) {
    return ast_create_number(tok.number_value);
  }

  // 判断是否括号，先判断左括号 (
  if (tok.token_type == TOK_LPAREN) {
    // 调用解析表达式计算
    ast_node* parser_expression = parser_expression_ast(input);
    // 获取下一个字符，判断是否右括号 )
    if (get_next_token(input).token_type != TOK_RPAREN) {
      log_fatal("右获取缺失括号不匹配：%s", *input);        
      exit(1);
    }
    return ast_create_args(parser_expression);
  }

  // 判断 function 函数
  if (tok.token_type == TOK_FUNC) {
    // 回退 token
    *input -= tok.tok_length;
    // 调用 function call 解析 函数
    return parser_function_call_ast(input);
  }

  log_fatal("未知的 base 项：%s", *input);
  exit(1);
}

// function_call → function '(' arguments ')' // 函数调用
ast_node* parser_function_call_ast(const char **input){
  // 获取下一个 token
  token tok = get_next_token(input);

  // 获取函数名称字符串
  char func_name[FUNC_MAX_CHAR];
  strncpy(func_name, tok.func_value, sizeof(func_name) - 1);
  func_name[sizeof(func_name) - 1] = '\0';

  // 处理 () 括号里的内容 先判断 括号
  // 判断是否括号，先判断左括号 (
  if (get_next_token(input).token_type != TOK_LPAREN) {
    log_fatal("函数左括号匹配失败：%s", *input);
    exit(1);
  }

  // 调用解析表达式计算
  ast_node** args = NULL;
  int args_count = 0;
  // 解析计算参数列表
  parser_arguments_ast(input, &args, &args_count);
  // 获取下一个字符，判断是否右括号 )
  if (get_next_token(input).token_type != TOK_RPAREN) {
    log_fatal("函数右括号匹配失败：%s", *input);
    exit(1);
  }
  // 创建函数 ast 节点 
  return ast_create_function(func_name, args, args_count);
}

// arguments → expression { ',' expression } // 参数列表
void parser_arguments_ast(const char **input, ast_node*** args, int* count) {

  // ast_node*** args 
  // -> ast_node args 结构体本身 -> ast_node* args 结构体指针 -> ast_node** args 结构体指针的数组 -> ast_node*** args 结构体指针的数组的指针
  // -> *args 结构体数组 **args 结构体指针 ***args 结构体本身

  // 必须动态创建 源调用者非堆内存作用域失效回回收
  *args = malloc(4 * sizeof(ast_node*)); // 最多4个参数
  *count = 0;

  // 获取下一个 token
  token tok = get_next_token(input);
  // 回退指针
  *input -= tok.tok_length;
  // 判断是否为 ) 右括号结束
  while (tok.token_type != TOK_RPAREN) {
    // 参数个数判断
    if (*count > FUNC_ARGS_MAX - 1) {
      log_fatal("函数参数超出了最大个数：%s", *input);
      exit(1);
    }
    // 解析计算第 n 个参数，添加到 参数列表
    ast_node* ast_expression = parser_base_ast(input);
    (*args)[(*count)++] = ast_expression;
    // 获取下一个 token
    tok = get_next_token(input);

    if (tok.token_type != TOK_COMMA && tok.token_type != TOK_RPAREN) {
      log_fatal("函数参数匹配失败非逗号非右括号项：%s", *input);
      exit(1);
    }
  }

  // 回退指针
  *input -= tok.tok_length;
   
  return;
}

ast_node* parser_to_ast(const char *expr) {
  // 解析 表达式 到 AST 数中
  ast_node* ast_head = parser_expression_ast(&expr);
  // 判断是否解析完成
  if (get_next_token(&expr).token_type != TOK_END) {
    log_error("解析未完成，但已结束：%s", &expr);
    exit(1);
  }

  return ast_head;
}