C++ if 语句

有条件地执行另一个语句。

用于需要根据条件执行代码的情况，或者是否在明显常量计算的上下文中计算 if 语句 （ 自 C++23 起）。

语法
attr（可选）ifconstexpr（可选）
（init-statement（可选） 条件 ）statement-true	(1)	
attr（可选）ifconstexpr（可选）
（init-statement（可选）condition）statement-trueelsestatement-false	(2)	
attr（可选）if！（可选）consteval 复合语句	(3)	（自 C++23 起）
attr（可选）if！（可选）consteval 复合语句 else 语句	(4)	（自 C++23 起）
1）if 语句，没有 else 分支
2）if 语句与 else 分支
3） 没有 else 分支的 consteval if 语句
4） 带有 else 分支的 consteval if 语句
属性	-	（从 C++11 开始） 任意数量的属性
constexpr	-	（从 C++17 开始） 如果存在，则该语句将变为 constexpr if 语句
初始语句	-	（从 C++17 开始）
表达式语句 （可能是空语句 ;
一个简单的声明 ，通常是带有初始值设定项的变量声明，但它可以声明任意多个变量或结构化绑定声明
别名声明
（自 C++23 起）
请注意，任何 init-statement 都必须以分号结尾。这就是为什么它经常被非正式地描述为表达式或声明，后跟分号。

条件	-	条件
语句-true	-	如果条件产生 true 则要执行的语句
语句-false	-	如果条件产生 false，则要执行的语句
复合语句	-	如果 if 语句在明显常量求值的上下文中求值（或者如果 ！ 位于 consteval 之前，则在此类上下文中不求值）要执行的复合语句
陈述	-	如果 if 语句未在明显常量求值的上下文中求值（或者如果 ！ 位于 consteval 之前，则在此类上下文中求值）要执行的语句（必须是复合语句，见下文 ）
条件
条件可以是表达式 ，也可以是简单的声明 。

如果它可以在语法上解析为结构化绑定声明，则将其解释为结构化绑定声明。
（从 C++26 开始）
如果它可以在语法上解析为表达式，则将其视为表达式。否则，它被视为不是结构化绑定声明的声明 （自 C++26 以来）。
当控件达到条件时，该条件将产生一个值，该值用于确定控件将转到哪个分支。

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
分支选择
如果条件为 true，则执行 statement-true。

如果 if 语句的 else 部分存在并且条件产生 false，则执行 statement-false。

如果 if 语句的 else 部分存在并且 statement-true 也是 if 语句，则该内部 if 语句也必须包含 else 部分（换句话说，在嵌套的 if 语句中，如果还没有关联的 else，则 else 与最接近的相关联）。

运行此代码
#include <iostream>
 
int main()
{
    // simple if-statement with an else clause
    int i = 2;
    if (i > 2)
        std::cout << i << " is greater than 2\n";
    else
        std::cout << i << " is not greater than 2\n";
 
    // nested if-statement
    int j = 1;
    if (i > 1)
        if (j > 2)
            std::cout << i << " > 1 and " << j << " > 2\n";
        else // this else is part of if (j > 2), not of if (i > 1)
            std::cout << i << " > 1 and " << j << " <= 2\n";
 
    // declarations can be used as conditions with dynamic_cast
    struct Base
    {
        virtual ~Base() {}
    };
 
    struct Derived : Base
    {
        void df() { std::cout << "df()\n"; }
    };
 
    Base* bp1 = new Base;
    Base* bp2 = new Derived;
 
    if (Derived* p = dynamic_cast<Derived*>(bp1)) // cast fails, returns nullptr
        p->df(); // not executed
 
    if (auto p = dynamic_cast<Derived*>(bp2)) // cast succeeds
        p->df(); // executed
}
输出：

2 is not greater than 2
2 > 1 and 1 <= 2
df()
带有初始值设定项的 if 语句
如果使用 init-statement，则 if 语句等效于

{
初始语句
attr（可选）ifconstexpr（可选）（ 条件 ）
语句-true
}

或

{
初始语句
attr（可选）ifconstexpr（可选）（ 条件 ）
语句-true
else
语句-false
}

除了 init-statement 声明的名称（如果 init-statement 是声明）和 condition 声明的名称（如果 condition 是声明）在同一作用域内，这也是两个语句的作用域。

std::map<int, std::string> m;
std::mutex mx;
extern bool shared_flag; // guarded by mx
 
int demo()
{
    if (auto it = m.find(10); it != m.end())
        return it->second.size();
 
    if (char buf[10]; std::fgets(buf, 10, stdin))
        m[0] += buf;
 
    if (std::lock_guard lock(mx); shared_flag)
    {
        unsafe_ping();
        shared_flag = false;
    }
 
    if (int s; int count = ReadBytesWithSignal(&s))
    {
        publish(count);
        raise(s);
    }
 
    if (const auto keywords = {"if", "for", "while"};
        std::ranges::any_of(keywords, [&tok](const char* kw) { return tok == kw; }))
    {
        std::cerr << "Token must not be a keyword\n";
    }
}
（从 C++17 开始）


Constexpr 如果
以 if constexpr 开头的语句称为 constexpr if 语句 。constexpr if 语句的所有子语句都是控制流限制语句 。

在 constexpr if 语句中，condition 必须是上下文转换的 bool 类型的常量表达式 （直到 C++23） 上下文转换为 bool 的表达式，其中转换是常量表达式 （从 C++23 开始）。

如果条件产生 true，则丢弃 statement-false（如果存在），否则，将丢弃 statement-true。

丢弃语句中的 return 语句不参与函数返回类型推导：

template<typename T>
auto get_value(T t)
{
    if constexpr (std::is_pointer_v<T>)
        return *t; // deduces return type to int for T = int*
    else
        return t;  // deduces return type to int for T = int
}
丢弃的语句可以 ODR 使用未定义的变量：

extern int x; // no definition of x required
 
int f()
{
    if constexpr (true)
        return 0;
    else if (x)
        return x;
    else
        return -x;
}
在模板之外，将完全检查已丢弃的语句。 如果 constexpr 不是 #if 预处理指令的替代品：

void f()
{
    if constexpr(false)
    {
        int i = 0;
        int *p = i; // Error even though in discarded statement
    }
}
如果 constexpr if 语句出现在模板化实体中，并且如果 condition 在实例化后不依赖于值 ，则在实例化封闭模板时不会实例化丢弃的语句。

template<typename T, typename ... Rest>
void g(T&& p, Rest&& ...rs)
{
    // ... handle p
    if constexpr (sizeof...(rs) > 0)
        g(rs...); // never instantiated with an empty argument list
}
实例化为嵌套模板后，条件仍与值相关：

template<class T>
void g()
{
    auto lm = [=](auto p)
    {
        if constexpr (sizeof(T) == 1 && sizeof p == 1)
        {
            // this condition remains value-dependent after instantiation of g<T>,
            // which affects implicit lambda captures
            // this compound statement may be discarded only after
            // instantiation of the lambda body
        }
    };
}
对于每个可能的专业化，丢弃的语句不能格式错误：

template<typename T>
void f()
{
    if constexpr (std::is_arithmetic_v<T>)
        // ...
    else {
        using invalid_array = int[-1]; // ill-formed: invalid for every T
        static_assert(false, "Must be arithmetic"); // ill-formed before CWG2518
    }
}
在实现 CWG 问题 2518 之前，对于这种 catch-all 语句，常见的解决方法是始终为 false 的类型相关表达式：

template<typename>
constexpr bool dependent_false_v = false;
 
template<typename T>
void f()
{
    if constexpr (std::is_arithmetic_v<T>)
        // ...
    else {
        // workaround before CWG2518
        static_assert(dependent_false_v<T>, "Must be arithmetic");
    }
}
typedef 声明或别名声明 （从 C++23 开始） 可以用作 constexpr if 语句的 init 语句 ，以减少类型别名的作用域。

本节不完整
原因：没有例子
（从 C++17 开始）


Consteval 如果
以 if consteval 开头的语句称为 consteval if 语句 。consteval if 语句的所有子语句都是控制流限制语句 。

语句必须是复合语句，即使它不是复合语句，它仍将被视为 consteval if 语句的一部分（因此会导致编译错误）：

运行此代码
constexpr void f(bool b)
{
    if (true)
        if consteval {}
        else ; // error: not a compound-statement
               // else not associated with outer if
}
如果在明显常量计算的上下文中评估 consteval if 语句，则执行 compound-statement。否则，如果存在语句 ，则执行语句。

如果语句以 if 开头 ！consteval， 复合语句和语句 （如果有）都必须是复合语句。此类语句不被视为 consteval if 语句，但等效于 consteval if 语句：

如果 ！consteval {/* stmt */ } 相当于
if consteval {} else {/* stmt */}.
如果 ！consteval {/* stmt-1 */} else {/* stmt-2 */} 等效于
if consteval {/* stmt-2 */} else {/* stmt-1 */}.
consteval if 语句（或否定形式的语句 ）中的 compound-statement 位于 immediate 函数上下文中，其中对 immediate 函数的调用不需要是常量表达式。

运行此代码
#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>
 
constexpr bool is_constant_evaluated() noexcept
{
    if consteval { return true; } else { return false; }
}
 
constexpr bool is_runtime_evaluated() noexcept
{
    if not consteval { return true; } else { return false; }
}
 
consteval std::uint64_t ipow_ct(std::uint64_t base, std::uint8_t exp)
{
    if (!base) return base;
    std::uint64_t res{1};
    while (exp)
    {
        if (exp & 1) res *= base;
        exp /= 2;
        base *= base;
    }
    return res;
}
 
constexpr std::uint64_t ipow(std::uint64_t base, std::uint8_t exp)
{
    if consteval // use a compile-time friendly algorithm
    {
        return ipow_ct(base, exp);
    }
    else // use runtime evaluation
    {
        return std::pow(base, exp);
    }
}
 
int main(int, const char* argv[])
{
    static_assert(ipow(0, 10) == 0 && ipow(2, 10) == 1024);
    std::cout << ipow(std::strlen(argv[0]), 3) << '\n';
}
（自 C++23 起）
笔记
如果 statement-true 或 statement-false 不是复合语句，则将其视为：

if (x)
    int i;
// i is no longer in scope
与

if (x)
{
    int i;
}
// i is no longer in scope
条件引入的名称的范围（如果它是声明）是两个语句主体的组合范围：

if (int x = f())
{
    int x; // error: redeclaration of x
}
else
{
    int x; // error: redeclaration of x
}
如果 goto 或 longjmp 输入了 statement-true，则不会计算条件 ，并且不会执行 statement-false。

在 constexpr if 语句的条件下不允许内置转换，但对 bool 的非缩小整数转换除外。

（从 C++17 开始）
（直到 C++23）
功能测试宏	价值	性病	特征
__cpp_if_constexpr	201606L	（C++17）	constexpr 如果
__cpp_if_consteval	202106L	（C++23）	consteval 如果
关键字
if ， else ， constexpr ， consteval

缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

DR	应用对象	已发布的行为	正确的行为
CWG 631	C++98	如果
第一个子语句通过标签到达	不评估条件，第二个
子语句不执行（与 C 中相同）
另请参阅
is_constant_evaluated
  
（C++20）
 
检测调用是否发生在常量计算的上下文中
（功能）
if 语句的 C 文档
