C++ return 语句

终止当前函数并将指定的值（如果有）返回给调用者。

语法
attr（可选） 返回表达式 （可选）;	(1)	
attr（可选） 返回 braced-init-list;	(2)	（从 C++11 开始）
attr（可选）co_return 表达式 （可选）;	(3)	（从 C++20 开始）
attr（可选）co_returnbraced-init-list;	(4)	（从 C++20 开始）
属性	-	（从 C++11 开始） 任意数量属性的序列
表达	-	expression，可转换为函数返回类型
大括号初始列表	-	大括号括起来的初始值设定项列表
解释
1） 计算表达式 ，终止当前函数并将表达式的结果返回给调用者，隐式转换为函数返回类型后。该表达式在返回类型为（可能是 cv 限定的）void 的函数中是可选的，并且在构造函数和析构函数中是不允许的。
2） 使用 copy-list-initialization 构造函数的返回值。
3,4） 在协程中，必须使用关键字 co_return 而不是返回来表示最终暂停点（有关详细信息，请参阅协程 ）。
表达式或 braced-init-list（自 C++11 以来）（ 如果有）称为 return 语句的作数 。

函数调用结果的复制初始化和表达式结束时销毁所有临时值之间有一个序列点 。

（直到 C++11）
函数调用结果的复制初始化在表达式末尾销毁所有临时变量之前进行排序 ，而表达式末尾的所有临时变量又在销毁包含 return 语句的块的局部变量之前进行排序 。

（从 C++11 开始）
如果函数的返回类型是引用类型，并且返回语句 （1,2） 将返回的引用绑定到临时表达式的结果，则程序格式错误。

（从 C++26 开始）
如果控制到达

返回类型（可能是 CV 限定）为 void 的函数，
构造函数，
析构函数，或
返回类型（可能是 CV 限定）void 的函数的函数 try 块
如果不遇到 return 语句，则执行 return;。

如果控制到达 main 函数的末尾，则返回 0; 执行。

从值返回函数的末尾流出，除了 main 函数和特定协程 （从 C++20 开始） 之外，没有 return 语句是未定义的行为。

在返回（可能是 cv 限定的）void 的函数中，如果表达式类型是（可能是 cv 限定的）void，则可以使用带有 expression 的 return 语句。

如果函数的返回类型被指定为占位符类型 ，则将从返回值中推断出它。如果使用 decltype（auto）， 则类型推导会将可以是实体的表达式视为实体 。

（从 C++14 开始）
笔记
按值返回可能涉及临时对象的构造和复制/移动，除非使用复制省略。 具体来说，复制/移动的条件如下：

从局部变量和参数自动移动
如果表达式是一个（可能用括号括起来的） 标识符表达式 ，该表达式命名了自动存储持续时间的变量，其类型为

非易失性对象类型
（从 C++11 开始）
或对对象类型的非易失性右值引用
（从 C++20 开始）
并且该变量被声明为

在体内
或作为参数
最内层封闭函数或 lambda 表达式。

（从 C++11 开始）
如果表达式符合移动条件，则重载解析以选择要用于初始化返回值的构造函数 ，或者 co_return 选择 promise 的重载 。return_value（）（自 C++20） 执行两次 ：

首先，就好像表达式是右值表达式一样（因此它可以选择移动构造函数 ），并且
如果第一次过载解决失败
（从 C++11 开始）
（直到 C++23）
或者它成功了，但未选择移动构造函数 （正式地，所选构造函数的第一个参数不是对（可能是 CV 限定的） 表达式类型的右值引用）
（从 C++11 开始）
（直到 C++20）
然后像往常一样执行重载解析， 表达式被视为左值（因此它可以选择复制构造函数 ）。
（从 C++11 开始）
（直到 C++23）
如果表达式符合移动条件，则将其视为 x 值（因此重载解析可能会选择移动构造函数 ）。

（自 C++23 起）
保证副本省略
如果 expression 是 prvalue，则结果对象由该表达式直接初始化。当类型匹配时，这不涉及复制或移动构造函数（请参阅复制省略 ）。

（从 C++17 开始）
功能测试宏	价值	性病	特征
__cpp_implicit_move	202207L	（C++23）	更简单的隐式移动
关键字
return ， co_return

例
运行此代码
#include <iostream>
#include <string>
#include <utility>
 
void fa(int i)
{
    if (i == 2)
        return;
    std::cout << "fa("<< i << ")\n";
} // implied return;
 
int fb(int i)
{
    if (i > 4)
        return 4;
    std::cout << "fb(" << i << ")\n";
    return 2;
}
 
std::pair<std::string, int> fc(const char* p, int x)
{
    return {p, x};
}
 
void fd()
{
    return fa(10); // fa(10) is a void expression
}
 
int main()
{
    fa(1); // prints its argument, then returns
    fa(2); // does nothing when i == 2, just returns
 
    int i = fb(5); // returns 4
    i = fb(i);     // prints its argument, returns 2
    std::cout << "i = " << i << '\n'
              << "fc(~).second = " << fc("Hello", 7).second << '\n';
 
    fd();
}
 
struct MoveOnly
{
    MoveOnly() = default;
    MoveOnly(MoveOnly&&) = default;
};
 
MoveOnly move_11(MoveOnly arg)
{
    return arg; // OK. implicit move
}
 
MoveOnly move_11(MoveOnly&& arg)
{
    return arg; // OK since C++20. implicit move
}
 
MoveOnly&& move_23(MoveOnly&& arg)
{
    return arg; // OK since C++23. implicit move
}
输出：

fa(1)
fb(4)
i = 2
fc(~).second = 7
fa(10)
缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

DR	应用对象	已发布的行为	正确的行为
CWG 1541 号	C++98	如果返回类型为 CV 限定的 void，则不能省略表达式	可以省略
CWG 1579	C++11	不允许通过转换移动构造函数返回	转换移动
已启用构造函数查找
CWG 1885	C++98	自动变量销毁的顺序不明确	添加了排序规则
另请参阅
复制省略
返回语句的 C 文档
