C++ for 循环

有条件地重复执行语句，其中语句不需要管理循环条件。

语法
attr（可选）for （init-statementcondition（可选）;expression（可选）） 语句		
属性	-	（从 C++11 开始） 任意数量的属性
初始语句	-	其中之一
表达式语句 （可能是空语句 ;
一个简单的声明 （通常是带有初始值设定项的循环计数器变量的声明），它可以声明任意多个变量或结构化绑定 （从 C++17 开始）
别名声明
（自 C++23 起）
请注意，任何 init-statement 都必须以分号结尾。这就是为什么它经常被非正式地描述为表达式或声明，后跟分号。

条件	-	条件
表达	-	表达式 （通常是递增循环计数器的表达式）
陈述	-	语句 （通常是复合语句）
条件
条件可以是表达式 ，也可以是简单的声明 。

如果它可以在语法上解析为结构化绑定声明，则将其解释为结构化绑定声明。
（从 C++26 开始）
如果它可以在语法上解析为表达式，则将其视为表达式。否则，它被视为不是结构化绑定声明的声明 （自 C++26 以来）。
当控制达到条件时，条件将产生一个值，用于确定是否执行语句 。

表达
如果 condition 是一个表达式，它产生的值是上下文转换为 bool 的表达式的值。如果转换格式不正确，那么程序格式不规则。

声明
如果 condition 是一个简单的声明，则它产生的值是决策变量（见下文）的值，在上下文中转换为 bool。如果转换格式不正确，那么程序格式不规则。

非结构化绑定声明
声明有以下限制：

在语法上符合以下形式：
type-specifier-seq 声明器 = 赋值表达式
（直到 C++11）
attribute-specifier-seq（可选）decl-specifier-seq 声明符 brace-or-equal-initializer
（从 C++11 开始）
声明符不能指定函数或数组 。
类型说明符序列 （直到 C++11） 声明说明符序列只能包含类型说明符和 constexpr，并且它 （从 C++11 开始） 不能定义类或枚举 。
声明的决策变量是声明的变量。

结构化绑定声明
声明有以下限制：

其初始值设定项中的表达式不能是数组类型。
声明说明符序列只能包含类型说明符和 constexpr。
声明的决策变量是声明引入的发明变量 e。

（从 C++26 开始）
解释
A for 语句等效于：

{
初始语句
while （ 条件 ）
{
陈述
表达 ;
}
}

除了

init-statement 的作用域和 condition 的作用域是相同的。
语句的作用域和表达式的作用域是不相交的，嵌套在 init-statement 和 condition 的作用域内。
在语句中执行 continue 语句将计算表达式 。
空条件等效于 true。
如果循环需要在语句内终止，则可以使用 break 语句作为终止语句。

如果当前迭代需要在语句内终止，则可以使用 continue 语句作为快捷方式。

笔记
与 while 循环一样，如果语句不是复合语句，则其中声明的变量的范围仅限于循环体，就好像它是复合语句一样。

for (;;)
    int n;
// n goes out of scope
作为 C++ 前向进度保证的一部分，如果没有可观察行为的循环不是平凡的无限循环 （自 C++26） 未终止，则行为未定义 。允许编译器删除此类循环。

虽然在 C 中，在 init-statement 和 condition 范围内声明的名称可以在语句范围内隐藏，但在 C++ 中是禁止的：

for (int i = 0;;)
{
    long i = 1;   // valid C, invalid C++
    // ...
}
关键字
for

例
运行此代码
#include <iostream>
#include <vector>
 
int main()
{
    std::cout << "1) typical loop with a single statement as the body:\n";
    for (int i = 0; i < 10; ++i)
        std::cout << i << ' ';
 
    std::cout << "\n\n" "2) init-statement can declare multiple names, as\n"
                 "long as they can use the same decl-specifier-seq:\n";
    for (int i = 0, *p = &i; i < 9; i += 2)
        std::cout << i << ':' << *p << ' ';
 
    std::cout << "\n\n" "3) condition may be a declaration:\n";
    char cstr[] = "Hello";
    for (int n = 0; char c = cstr[n]; ++n)
        std::cout << c;
 
    std::cout << "\n\n" "4) init-statement can use the auto type specifier:\n";
    std::vector<int> v = {3, 1, 4, 1, 5, 9};
    for (auto iter = v.begin(); iter != v.end(); ++iter)
        std::cout << *iter << ' ';
 
    std::cout << "\n\n" "5) init-statement can be an expression:\n";
    int n = 0;
    for (std::cout << "Loop start\n";
         std::cout << "Loop test\n";
         std::cout << "Iteration " << ++n << '\n')
    {
        if (n > 1)
            break;
    }
 
    std::cout << "\n" "6) constructors and destructors of objects created\n"
                 "in the loop's body are called per each iteration:\n";
    struct S
    {
        S(int x, int y) { std::cout << "S::S(" << x << ", " << y << "); "; }
        ~S() { std::cout << "S::~S()\n"; }
    };
    for (int i{0}, j{5}; i < j; ++i, --j)
        S s{i, j};
 
    std::cout << "\n" "7) init-statement can use structured bindings:\n";
    long arr[]{1, 3, 7};
    for (auto [i, j, k] = arr; i + j < k; ++i)
        std::cout << i + j << ' ';
    std::cout << '\n';
}
输出：

1) typical loop with a single statement as the body:
0 1 2 3 4 5 6 7 8 9
 
2) init-statement can declare multiple names, as
long as they can use the same decl-specifier-seq:
0:0 2:2 4:4 6:6 8:8
 
3) condition may be a declaration:
Hello
 
4) init-statement can use the auto type specifier:
3 1 4 1 5 9
 
5) init-statement can be an expression:
Loop start
Loop test
Iteration 1
Loop test
Iteration 2
Loop test
 
6) constructors and destructors of objects created
in the loop's body are called per each iteration:
S::S(0, 5); S::~S()
S::S(1, 4); S::~S()
S::S(2, 3); S::~S()
 
7) init-statement can use structured bindings:
4 5 6
另请参阅
范围循环 （C++11）	执行范围循环
用于
