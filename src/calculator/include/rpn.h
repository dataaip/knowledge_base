#ifndef CALCULATOR
#define CALCULATOR

#define STACK_MAX_SIZE 100

// 创建 运算符栈 和 操作数栈
typedef struct {
    char operator[STACK_MAX_SIZE][STACK_MAX_SIZE];
    int top;
} operator_stack;

typedef struct {
    double operand[STACK_MAX_SIZE];
    int top;
} operand_stack;

// 初始化 运算符栈 和 操作数栈
void init_operator_stack(operator_stack* stack);
void init_operand_stack(operand_stack* stack);
// 运算符 push、pop 函数
int push_operator_stack(operator_stack* stack, const char* operator);
char* pop_operator_stack(operator_stack* stack);
char* peek_operator_stack(operator_stack* stack);
// 操作数 push、pop 函数
int push_operand_stack(operand_stack* stack, double operand);
double pop_operand_stack(operand_stack* stack);

// 运算符优先级 运算符类型 运算符应用
int operator_precedence(char operator);
int is_operator(char operator);
int is_function(const char* operator);
double apply_operator(double left, double right, char operator);
double apply_function(const char* operator, double right);

#endif // !CALCULATOR