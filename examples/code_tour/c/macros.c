
#include <stdio.h>
#include <stdlib.h>

// 定义结构体
struct s {
    char* num;
};

// 定义 print 宏
#define print(x) printf("%s\n", x)

// 宏定义 -> 宏的本质就是在预处理阶段做的字符串的简单替换，不关注变量类型等等
/*
MATH 宏
- 宏 MATH(a, b, c) 是对 MAX 宏的封装。
- 它将参数 a、b 和 c 传递给 MAX 宏。
- 注意这里的 num 是硬编码在 MATH 宏中的，而不是通过参数传递，宏 MATH 中硬编码了 num，限制了灵活性
- 硬编码 hh 避免了运行时的额外开销，因为编译器可以在预处理阶段展开宏，并直接访问 hh 字段。如果允许用户自定义 hh 的名称，则需要在每次操作时指定该字段的名称，增加了复杂性和潜在的错误风险
*/
#define MATH(a, b, c) MAX(num, a, b, c)
/*
宏 MAX(num, a, b, c) 是一个带参数的宏，定义了一个 do { ... } while(0) 块
- 它的作用是执行以下操作：
- 调用 print(c->num)：打印指针 c 的成员 num
- 调用 print(a)：打印参数 a
- 调用 print(b)：打印参数 b
*/
#define MAX(num, a, b, c) \
do {                      \
    print((c)->num);      \
    print(a);             \
    print(b);             \
} while(0)

int main(void) {
    // 初始化结构体
    struct s instance = {"num"};
    struct s *sh = &instance;

    // 调用宏 宏参数多出来一个
    MATH("1", "2", sh);

    return 0;
}