C++ 基于范围的 for 循环 （从 C++11 开始）

在某个范围内执行 for 循环。

用作更易读的等效于对一系列值（例如容器中的所有元素）进行作的传统 for 循环 。

语法
attr（可选）for （init-statement（可选）item-declaration：range-initializer） 语句		
属性	-	任意数量的属性
初始语句	-	（从 C++20 开始） 其中之一
表达式语句 （可能是空语句 ;
一个简单的声明 （通常是带有初始值设定项的变量的声明），它可以声明任意多个变量或结构化绑定声明
别名声明
（自 C++23 起）
请注意，任何 init-statement 都必须以分号结尾。这就是为什么它经常被非正式地描述为表达式或声明，后跟分号。

项目声明	-	每个范围项的声明
范围初始值设定项	-	表达式或大括号括起来的初始值设定项列表
陈述	-	any 语句 （通常是复合语句）
解释
上述语法生成的代码等效于以下代码， 除了范围初始值设定项临时值的生命周期扩展（见下文 ）（ 自 C++23 起）（ 包装在 /* */ 中的变量和表达式仅用于说明）：

{

auto&& /* range */ = range-initializer ﻿;
for （auto/* begin */=/* begin-expr */，/* end */=/* end-expr */;
/* 开始 */！=/* 结束 */; ++/* 开始 */）
{
item-declaration= */* 开始 */;
陈述
}
}

（直到 C++17）
{

auto&& /* range */ = range-initializer ﻿;
auto /* begin */ = /* begin-expr */;
auto/* 结束 */=/* 结束表达 */;
对于 （ ;/* 开始 */！=/* 结束 */; ++/* 开始 */）
{
item-declaration= */* 开始 */;
陈述
}
}

（从 C++17 开始）
（直到 C++20）
{

初始语句
auto&& /* range */ = range-initializer ﻿;
auto /* begin */ = /* begin-expr */;
auto/* 结束 */=/* 结束表达 */;
对于 （ ;/* 开始 */！=/* 结束 */; ++/* 开始 */）
{
item-declaration= */* 开始 */;
陈述
}
}

（从 C++20 开始）
range-initializer 的计算值是初始化要迭代的序列或范围。依次，序列的每个元素都会被取消引用，并用于使用 item-declaration 中给出的类型和名称初始化变量。

item-declaration 可以是以下之一：

具有以下限制的简单声明 ：
它只有一个声明符 。
声明符必须没有初始值设定项 。
声明说明符序列只能包含类型说明符和 constexpr，并且不能定义类或枚举 。
仅阐述式 /* begin-expr */ 和 /* end-expr */ 定义如下：

如果 /* range */ 的类型是对数组类型 R 的引用：
如果 R 的边界为 N，则 /* begin-expr */ 是 /* 范围 */ 和 /* end-expr */ 是 /* 范围 */ + N。
如果 R 是未知绑定的数组或不完整类型的数组，则程序格式错误。
如果 /* range */ 的类型是对类类型 C 的引用，并且在 C 范围内搜索名称“begin”和“end”每个找到至少一个声明，则 /* begin-expr */ 是 /* 范围 */。begin（） 和 /* end-expr */ 是 /* 范围 */。end（） 的 end（） 中。
否则，/* begin-expr */ 是 begin（/* range */），/* end-expr */ 是 end（/* range */）， 其中“begin”和“end”是通过参数相关的查找找到的（不执行非 ADL 查找）。
如果循环需要在语句内终止，则可以使用 break 语句作为终止语句。

如果当前迭代需要在语句内终止，则可以使用 continue 语句作为快捷方式。

如果在 init-statement 中引入的名称在语句的最外层块中重新声明，则程序格式错误：

for (int i : {1, 2, 3})
    int i = 1; // error: redeclaration
临时范围初始值设定项
如果 range-initializer 返回临时值，则其生存期将延长到循环结束，如绑定到转发引用 /* range */ 所示。

range-initializer 中所有临时的生命周期不会延长， 除非它们会在 range-initializer 结束时被销毁 （自 C++23 以来）。

// if foo() returns by value
for (auto& x : foo().items()) { /* ... */ } // until C++23 undefined behavior
可以使用 init-statement 解决此问题：

for (T thing = foo(); auto& x : thing.items()) { /* ... */ } // OK
（从 C++20 开始）


请注意，即使在 C++23 中，中间函数调用的非引用参数也不会获得生命周期扩展（因为在某些 ABI 中，它们在被调用方中被销毁，而不是在调用方中），但这只是有错误的函数的问题：

using T = std::list<int>;
const T& f1(const T& t) { return t; }
const T& f2(T t)        { return t; } // always returns a dangling reference
T g();
 
void foo()
{
    for (auto e : f1(g())) {} // OK: lifetime of return value of g() extended
    for (auto e : f2(g())) {} // UB: lifetime of f2's value parameter ends early
}
（自 C++23 起）
笔记
如果范围初始值设定项是大括号括起来的初始值设定项列表 ，则 /* 范围 */ 被推断为对 std：：initializer_list 的引用。

在通用代码中，使用演绎到转发引用是安全的，事实上，更可取的是 （auto& var ： sequence）。

如果范围类型具有名为“begin”的成员和名为“end”的成员，则使用成员解释。无论成员是类型、数据成员、函数还是枚举器，也无论其可访问性如何，都会执行此作。因此，像 class meow { enum { begin = 1， end = 2 }; /* 类的其余部分 */ }; 不能与基于范围的 for 循环一起使用，即使存在命名空间范围的“begin”/“end”函数也是如此。

虽然通常在语句中使用 item-declaration 中声明的变量，但这样做不是必需的。

从 C++ 17 开始，/* begin-expr */ 和 /* end-expr */ 的类型不必相同，事实上 /* end-expr */ 的类型不必是迭代器：它只需要能够与 1 进行不等式比较。这使得可以通过谓词分隔范围（例如“迭代器指向空字符”）。

（从 C++17 开始）
当与具有写入时复制语义的 （non-const） 对象一起使用时，基于范围的 for 循环可以通过 （隐式） 调用非 const begin（） 成员函数来触发深度复制。

如果这是不可取的（例如，因为循环实际上并没有修改对象），则可以通过使用 std：：as_const 来避免它：

struct cow_string { /* ... */ }; // a copy-on-write string
cow_string str = /* ... */;
 
// for (auto x : str) { /* ... */ } // may cause deep copy
 
for (auto x : std::as_const(str)) { /* ... */ }
（从 C++17 开始）
功能测试宏	价值	性病	特征
__cpp_range_based_for	200907L	（C++11）	基于范围的 for 循环
201603L	（C++17）	具有不同开始 / 结束类型的基于范围的 for 循环
202211L	（C++23）	range-initializer 中所有临时对象的生命周期延长
关键字
for

例
运行此代码
#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
 
    for (const int& i : v) // access by const reference
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (auto i : v) // access by value, the type of i is int
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (auto&& i : v) // access by forwarding reference, the type of i is int&
        std::cout << i << ' ';
    std::cout << '\n';
 
    const auto& cv = v;
 
    for (auto&& i : cv) // access by f-d reference, the type of i is const int&
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (int n : {0, 1, 2, 3, 4, 5}) // the initializer may be a
                                     // braced-enclosed initializer list
        std::cout << n << ' ';
    std::cout << '\n';
 
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) // the initializer may be an array
        std::cout << n << ' ';
    std::cout << '\n';
 
    for ([[maybe_unused]] int n : a)  
        std::cout << 1 << ' '; // the loop variable need not be used
    std::cout << '\n';
 
    for (auto n = v.size(); auto i : v) // the init-statement (C++20)
        std::cout << --n + i << ' ';
    std::cout << '\n';
 
    for (typedef decltype(v)::value_type elem_t; elem_t i : v)
    // typedef declaration as init-statement (C++20)
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (using elem_t = decltype(v)::value_type; elem_t i : v)
    // alias declaration as init-statement (C++23)
        std::cout << i << ' ';
    std::cout << '\n';
}
输出：

0 1 2 3 4 5 
0 1 2 3 4 5 
0 1 2 3 4 5 
0 1 2 3 4 5 
0 1 2 3 4 5 
0 1 2 3 4 5 
1 1 1 1 1 1 
5 5 5 5 5 5 
0 1 2 3 4 5 
0 1 2 3 4 5
缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

DR	应用对象	已发布的行为	正确的行为
CWG 1442	C++11	没有具体说明非成员的查找
“begin”和“end”包括通常的不限定查找	没有通常的不合格查找
CWG 2220	C++11	可以重新声明 init-statement 中引入的名称	在这种情况下，程序格式不正确
CWG 2825	C++11	如果 range-initializer 是一个大括号括起来的初始值设定项列表，
将查找非成员“ 开始 ”和“ 结束 ”	将查找成员“ 开始 ”
在这种情况下，“ 结束 ”
P0962R1	C++11	如果出现以下任一情况，则使用成员解释
成员“ 开始 ”和“ 结束 ”存在	仅当两者同时存在时才使用
另请参阅
for_each
 
将一元函数对象应用于范围内的元素
（功能模板）