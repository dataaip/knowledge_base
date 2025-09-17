C++ switch 语句

根据条件的值将控制权转移到多个语句之一。

语法
attr（可选）switch（init-statement（optional）condition） 语句		
属性	-	（从 C++11 开始） 任意数量的属性
初始语句	-	（从 C++17 开始） 以下任何一项：
表达式语句 （可能是空语句 ;
一个简单的声明 ，通常是带有初始值设定项的变量声明，但它可能会声明任意多个变量或结构化绑定
别名声明
（自 C++23 起）
请注意，任何 init-statement 都必须以分号结尾。这就是为什么它经常被非正式地描述为表达式或声明，后跟分号。

条件	-	条件
陈述	-	语句（通常是复合语句）
条件
条件可以是表达式 ，也可以是简单的声明 。

如果它可以在语法上解析为结构化绑定声明，则将其解释为结构化绑定声明。
（从 C++26 开始）
如果它可以在语法上解析为表达式，则将其视为表达式。否则，它被视为不是结构化绑定声明的声明 （自 C++26 以来）。
当控件达到条件时，条件将产生一个值，该值用于确定控件将转到哪个标签。

表达
如果 condition 是一个表达式，那么它产生的值就是表达式的值。

声明
如果 condition 是一个简单的声明，则它产生的值是决策变量的值（见下文）。

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
类型
条件只能产生以下类型：

积分类型
枚举类型
类类型
如果生成的值是类类型，则在上下文中隐式转换为整数或枚举类型。

如果（可能转换的）类型受整数提升的影响，则产生值将转换为提升的类型。

标签
switch 语句中的任何语句都可以使用以下一个或多个标签进行标记：

attr（可选）case 常量表达式 ：	(1)	
attr（可选） 默认值：	(2)	
属性	-	（从 C++11 开始） 任意数量的属性
常量表达式	-	开关条件的调整类型的转换常量表达式

case 或默认标签与包含它的最内层 switch 语句相关联。

如果满足以下任何条件，则程序格式不正确：

switch 语句与多个案例标签相关联，这些标签的常量表达式 s 在转换后具有相同的值。
switch 语句与多个默认标签相关联。
控制流量传输
当 switch 语句的条件产生一个（可能转换的）值时：

如果其中一个关联的事例标签常量具有相同的值，则控制权将传递给由匹配的事例标签标记的语句。
否则，如果存在关联的默认标签，则控制权将传递给由默认标签标记的语句。
否则， 不会执行 switch 语句中的任何语句。
case 和 default 标签本身不会改变控制流。要从中间退出 switch 语句，请参阅 break 语句 。

编译器可能会在故障时发出警告（到达下一个案例或默认标签，不间断 ）， 除非属性 [[fallthrough]] 紧接出现在案例标签之前，以指示故障是有意的 （自 C++17 以来）。

switch (1)
{
    case 1:
        std::cout << '1'; // prints "1",
    case 2:
        std::cout << '2'; // then prints "2"
}
switch (1)
{
    case 1:
        std::cout << '1'; // prints "1"
        break;            // and exits the switch
    case 2:
        std::cout << '2';
        break;
}

带有初始值设定项的 switch 语句
如果使用 init-statement，则 switch 语句等效于

{
初始语句
switch ( 条件 ) 语句
}

除了 init-statement 声明的名称（如果 init-statement 是声明）和条件声明的名称（如果 condition 是声明）在同一作用域中，这也是语句的作用域。

（从 C++17 开始）
笔记
因为不允许将控制权转移到变量的作用域中 ，所以如果在语句中遇到声明语句，则必须将其作用域限定在其自己的复合语句中：

switch (1)
{
    case 1:
        int x = 0; // initialization
        std::cout << x << '\n';
        break;
    default:
        // compilation error: jump to default:
        // would enter the scope of 'x' without initializing it
        std::cout << "default\n";
        break;
}
switch (1)
{
    case 1:
        {
            int x = 0;
            std::cout << x << '\n';
            break;
        } // scope of 'x' ends here
    default:
        std::cout << "default\n"; // no error
        break;
}
关键字
switch ， case ， default

例
以下代码显示了 switch 语句的几个用例：

运行此代码
#include <iostream>
 
int main()
{
    const int i = 2;
    switch (i)
    {
        case 1:
            std::cout << '1';
        case 2:              // execution starts at this case label
            std::cout << '2';
        case 3:
            std::cout << '3';
            [[fallthrough]]; // C++17 attribute to silent the warning on fallthrough
        case 5:
            std::cout << "45";
            break;           // execution of subsequent statements is terminated
        case 6:
            std::cout << '6';
    }
 
    std::cout << '\n';
 
    switch (i)
    {
        case 4:
            std::cout << 'a';
        default:
            std::cout << 'd'; // there are no applicable constant expressions 
                              // therefore default is executed
    }
 
    std::cout << '\n';
 
    switch (i)
    {
        case 4:
            std::cout << 'a'; // nothing is executed
    }
 
    // when enumerations are used in a switch statement, many compilers
    // issue warnings if one of the enumerators is not handled
    enum color { RED, GREEN, BLUE };
    switch (RED)
    {
        case RED:
            std::cout << "red\n";
            break;
        case GREEN:
            std::cout << "green\n";
            break;
        case BLUE:
            std::cout << "blue\n";
            break;
    }
 
    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    struct Device
    {
        enum State { SLEEP, READY, BAD };
        auto state() const { return m_state; }
 
        /* ... */
 
    private:
        State m_state{};
    };
 
    switch (auto dev = Device{}; dev.state())
    {
        case Device::SLEEP:
            /* ... */
            break;
        case Device::READY:
            /* ... */
            break;
        case Device::BAD:
            /* ... */
            break;
    }
 
    // pathological examples
 
    // the statement does not have to be a compound statement
    switch (0)
        std::cout << "this does nothing\n";
 
    // labels do not require a compound statement either
    switch (int n = 1)
        case 0:
        case 1:
            std::cout << n << '\n';
}
输出：

2345
d
red
1
缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

DR	应用对象	已发布的行为	正确的行为
CWG 1767	C++98	不受约束的类型的条件
无法提升积分提升	不推广
这些类型的条件
CWG 2629	C++98	condition 可以是浮点变量的声明	禁止
另请参阅
开关的 C 文档
外部链接
1. 	使用 Duff 的装置展开循环
2. 	Duff 的设备可用于在 C/C++ 中实现协程
