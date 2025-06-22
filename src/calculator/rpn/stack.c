#include "logfmt.h"
#include "math.h"
#include "rpn.h"

#include <string.h>
#include <time.h>

// 初始化 运算符栈 和 操作数栈
void init_operator_stack(operator_stack *stack) {
  log_info("初始化运算符栈");
  if (!stack) {
    stack->top = -1;
  }
}

void init_operand_stack(operand_stack *stack) {
  log_info("初始化操作数栈");
  if (!stack) {
    stack->top = -1;
  }
}

// 运算符 push、pop、peek 函数
int push_operator_stack(operator_stack *stack, const char *operator) {
  if (!stack || stack->top >= STACK_MAX_SIZE - 1) {
    return 0;
  }

  strncpy(stack->operator[++stack->top], operator, strlen(operator));
  log_info("栈运算符 %s 压入栈", operator);
  return 1;
}

char *pop_operator_stack(operator_stack *stack) {
  if (!stack || stack->top < 0) {
    return NULL;
  }

  log_info("栈运算符 %s 弹出栈", stack->operator[stack->top]);
  return stack->operator[stack->top--];
}

char *peek_operator_stack(operator_stack *stack) {
  if (!stack || stack->top < 0) {
    return NULL;
  }

  log_info("栈运算符 %s 查看", stack->operator[stack->top]);
  return stack->operator[stack->top];
}

// 操作数 push、pop 函数
int push_operand_stack(operand_stack *stack, double operand) {
  if (!stack || stack->top >= STACK_MAX_SIZE - 1) {
    return 0;
  }

  stack->operand[++stack->top] = operand;
  log_info("栈操作数 %s 压入栈", operand);
  return 0;
}

double pop_operand_stack(operand_stack *stack) {
  if (!stack || stack->top < 0) {
    return NAN;
  }

  log_info("栈操作数 %s 弹出栈", stack->operand[stack->top]);
  return stack->operand[stack->top--];
}