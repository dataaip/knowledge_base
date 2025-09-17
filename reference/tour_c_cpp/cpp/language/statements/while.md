C++ while 循环

有条件地重复执行语句。

语法
attr（可选）while （ 条件 ） 语句		
属性	-	（从 C++11 开始） 任意数量的属性
条件	-	条件
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
while 语句等效于

/* 标签 */：
{

if（ 条件 ）
{
陈述
goto/* 标签 */;
}
}

如果 condition 是声明，则它声明的变量将被销毁并在循环的每次迭代中创建。

如果循环需要在语句内终止，则可以使用 break 语句作为终止语句。

如果当前迭代需要在语句内终止，则可以使用 continue 语句作为快捷方式。

笔记
无论语句是否是复合语句，它总是引入块作用域 。其中声明的变量仅在循环体中可见，换句话说，

while (--x >= 0)
    int i;
// i goes out of scope
与

while (--x >= 0)
{
    int i;
} // i goes out of scope
作为 C++ 前向进度保证的一部分，如果没有可观察行为的循环不是平凡的无限循环 （自 C++26） 未终止，则行为未定义 。允许编译器删除此类循环。

关键字
while

例
运行此代码
#include <iostream>
 
int main()
{
    // while loop with a single statement
    int i = 0;
    while (i < 10)
         i++;
    std::cout << i << '\n';
 
    // while loop with a compound statement
    int j = 2;
    while (j < 9)
    {
        std::cout << j << ' ';
        j += 2;
    }
    std::cout << '\n';
 
    // while loop with a declaration condition
    char cstr[] = "Hello";
    int k = 0;
    while (char c = cstr[k++])
        std::cout << c;
    std::cout << '\n';
}
输出：

10
2 4 6 8
Hello