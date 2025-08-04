/**
* @file              identifier.cpp
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.05
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.05 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <iostream>

#define TOUR_CPP_BASIC_CONCEPTS_IDENTIFIER_OBJECT

/*
### 标识符 C++ C++ 语言 基本概念 

标识符是由数字、下划线、小写和大写拉丁字母以及大多数 Unicode 字符组成的任意长度序列。
有效标识符的第一个字符必须是以下字符之一：
  大写拉丁字母 A-Z
  小写拉丁字母 a-z
  强调
  具有 Unicode 属性 XID_Start 的任何 Unicode 字符
有效标识符的任何其他字符必须是以下字符之一：
  数字 0-9
  大写拉丁字母 A-Z
  小写拉丁字母 a-z
  强调
  具有 Unicode 属性 XID_Continue 的任何 Unicode 字符
具有属性 XID_Start 和 XID_Continue 的字符列表可以在 DerivedCoreProperties.txt 中找到。
标识符区分大小写（小写和大写字母不同），并且每个字符都很重要。每个标识符都必须符合规范化表单 C。
注意： 在大多数实现中对 Unicode 标识符的支持是有限的，例如 gcc （直到 10）。

在声明中
标识符可用于命名对象、引用、函数、枚举器、类型、类成员、命名空间、模板、模板专用化、参数包（自 C++11 起）、goto 标签和其他实体，但以下情况除外：
1） 作为关键字的标识符不能用于其他目的。
  它们唯一可以用作非关键字的地方是在 attribute-token 中（例如 [[private]] 是一个有效的 attribute）。（自 C++11 起）
2）作为某些运算符和标点符号的替代表示形式的标识符不能用于其他目的。
  具有特殊含义的标识符 （最后,进口,模块（自 C++20 起）和覆盖） 在特定上下文中显式使用，而不是常规标识符。
  除非另有指定，否则将解决有关给定标识符是否具有特殊含义的任何歧义，以将令牌解释为常规标识符。（自 C++11 起）
3）标识符显示为 token 或预处理 token（即，不是像运算符 “”id)（自 C++11 起）保留以下表格之一：
  在全局命名空间中，以下划线开头的标识符
  包含双下划线或以下划线开头后跟大写字母的标识符，但以下标识符除外：
  预定义宏（包括语言功能测试宏）（自 C++20 起）
  std：：_Exit
  __func__（自 C++11 起）
  标准库中定义的以下宏：
  C 风格的 I/O 库宏_IOFBF,_IOLBF和_IONBF
  C 兼容性宏__alignas_is_defined和__alignof_is_defined（在 <stdalign.h 中定义>)
  C 兼容性宏__bool_true_false_are_defined（在 <stdbool.h 中定义>)（自 C++11 起）
  库功能测试宏（自 C++20 起）
这里的 “Reserved” 表示标准库 Headers #define 或声明此类标识符以满足其内部需求，编译器可以预定义此类非标准标识符，并且该名称修饰算法可能会假设其中一些标识符未使用。如果程序员使用此类标识符，则程序格式不正确，无需诊断。

此外，在翻译单元中 #define 或 #undef 某些名称是未定义的行为，有关更多详细信息，请参阅 reserved macro names。

僵尸标识符
从 C++14 开始，一些标识符已从 C++ 标准库中删除。它们列在僵尸名称列表中。
但是，这些标识符仍保留用于特定上下文中的先前标准化。删除的成员函数名称不能用作类似函数的宏的名称，其他删除的成员名称不能用作可移植代码中类似对象的宏的名称。

In 表达式
命名变量、函数、概念特化（自 C++20 起）或枚举器的标识符可以用作表达式。仅包含标识符的表达式的结果是标识符命名的实体。如果标识符命名函数、变量、模板参数对象（自 C++20 起）或数据成员，则表达式的值类别为左值，否则为右值（直到 C++11）prvalue（自 C++11 起）（例如，枚举器是右值（直到 C++11）纯右值（自 C++11 起）表达式，概念的特化是布尔纯右值（自 C++20 起））。

类型
标识符表达式的类型与它命名的实体的类型相同。
存在以下例外情况：
如果由（非限定）标识符命名的实体是本地实体，并且如果它是在标识符出现的声明性区域中的未计算作数之外命名的，则会导致中间 lambda 表达式通过复制捕获该实体，则表达式的类型是类成员访问表达式的类型命名将在最内层的 such 中间 lambda 表达式的 Closure 对象中为此类捕获声明的非静态数据成员。
  void f()
  {
      float x, &r = x;
   
      [=]
      {
          decltype(x) y1;        // y1 has type float
          decltype((x)) y2 = y1; // y2 has type float const& because this lambda
                                 // is not mutable and x is an lvalue
          decltype(r) r1 = y1;   // r1 has type float&
          decltype((r)) r2 = y2; // r2 has type float const&
      };
  }（自 C++11 起）
如果 named 的实体是 type 为 的模板参数的模板参数对象，则表达式的类型为 const T。T（自 C++20 起）

非限定标识符
除了适当声明的标识符外，还可以在同一角色的表达式中使用以下内容：
函数表示法中的重载运算符名称，例如作员+或作员 new;
用户定义的转换函数名称，例如运算符 bool;
用户定义的文本运算符名称，例如运算符 “” _km;（自 C++11 起）
模板名称后跟其参数列表，例如MyTemplate<int 的 >;
字符后跟类名，例如~~我的类;
字符后跟 declType 说明符，例如~~decltype（str）.（自 C++11 起）
字符后跟 Pack Indexing 说明符，例如~~包。。。[0].（自 C++26 起）
它们与 identifiers 一起称为非限定标识符表达式。

限定标识符
限定标识符表达式是范围解析运算符前面的非限定标识符表达式::，以及（可选）由范围解析运算符分隔的以下任意序列：
命名空间名称;
类名;
枚举名称;
表示类或枚举类型的 decltype 说明符。（自 C++11 起）
表示类或枚举类型的 Pack 索引说明符。（自 C++26 起）
例如，表达式std：：string：：npos是命名 static 成员的表达式NPOS在类中字符串in 命名空间性病.表达式：：tolower命名函数托洛尔在 global 命名空间中。表达式：：std：：cout命名全局变量出局in 命名空间性病，这是一个顶级命名空间。表达式boost：：signals2：：connection命名类型连接在命名空间中声明信号2，它在命名空间中声明提高.
关键字模板可以根据需要出现在限定标识符中，以消除依赖模板名称的歧义。
有关合格标识符的名称查找的详细信息，请参阅 合格查找 。

隐式成员访问转换
如果标识符表达式E表示某个类的非静态非类型成员，并且满足以下所有条件，CE转换为 Class Member 访问表达式这个->E:
E不是成员访问运算符的正确作数。
如果E是限定标识符表达式，E不是 address-of 运算符的无括号作数。
满足以下任一条件：
  E可能会进行评估。
  C是最内层的封闭类，位于E.
  C是最内层的封闭类的基类，位于E.
此转换不适用于模板定义上下文（请参阅依赖名称）。
struct X
{
    int x;
};
 
struct B
{
    int b;
};
 
struct D : B
{
    X d;
 
    void func()
    {
        d;   // OK, will be transformed into this->d
        b;   // OK, will be transformed into this->b
        x;   // Error: this->x is ill-formed
 
        d.x; // OK, will be transformed into this->d.x
             // instead of d.this->x or this->d.this->x
    }
};

名字
名称是使用以下项之一来指代实体：
标识符
函数表示法中的重载运算符名称 （作员+,作员 new)
用户定义的转换函数名称 （运算符 bool)
用户定义的文本运算符名称 （运算符 “”_km)（自 C++11 起）
模板名称后跟其参数列表 （MyTemplate<int 的 >)
每个名称都通过声明引入程序。在多个翻译单元中使用的名称可能引用相同或不同的实体，具体取决于链接。
当编译器在程序中遇到未知名称时，它会通过名称查找将其与引入该名称的声明相关联，但模板声明和定义中的依赖名称除外（对于这些名称，编译器将确定它们是命名类型、模板还是其他实体，这可能需要显式消除歧义）。

缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

博士	应用对象	发布时的行为	纠正行为
CWG 1440	C++11	前面的 decltype 表达式可以表示任何类型的::	只能表示类或枚举类型
CWG 1963 年	C++11	标识符中可以使用除数字、非数字和通用字符名称以外的实现定义的字符	禁止
CWG 2521	C++11	literal 运算符的 user-defined-string-literal中的标识符像往常一样保留	规则是不同的
CWG 2771	C++98	&a未转化为&这个->a在类上下文中	它被转换
CWG 2777	C++20	标识符表达式的类型不清楚它是否命名模板参数 object	明确
CWG 2818	C++98	预定义的宏名称是保留的	他们不是保留的
*/

/*
我们面对的是C++标识符系统的详细解释需求。需要深入解析标识符的组成规则、保留规则、使用场景及现代特性，并配合代码示例和总结。

核心要点：
1. 标识符组成：允许Unicode字符（需符合XID_Start/XID_Continue），必须使用NFC形式，区分大小写
2. 禁止使用的标识符：关键字、特殊运算符替代名、保留模式（双下划线、下划线+大写）
3. 使用场景：命名各类实体（变量/函数/类等），在表达式中的行为
4. 特殊语法：非限定标识符（含运算符重载）、限定标识符（带作用域解析）
5. 隐式成员访问转换：类成员访问的this隐式添加
6. 僵尸标识符：已移除但仍保留特殊上下文的标识符

我们将分模块深入解析：
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto identifier_fn() -> int
{

    std::cout << "identifier function begin..." << std::endl;
    std::cout << "你好, 世界!\n";  // Unicode 支持

    return 0;
}