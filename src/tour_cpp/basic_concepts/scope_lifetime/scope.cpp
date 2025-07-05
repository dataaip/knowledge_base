/**
* @file              scope.cpp
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

#define TOUR_CPP_BASIC_CONCEPTS_SCOPE_LIFTTIME

/*
### 范围C++ C++ 语言 基本概念 

C++ 程序中出现的每个声明仅在某些可能不连续的范围内可见。
在作用域中，非限定名称查找可用于将名称与其声明相关联。

常规
每个程序都有一个全局范围，其中包含整个程序。
所有其他范围都是由S
  声明 /
  parameter list 中的一个参数，
  语句或
  处理程序。
S始终出现在另一个范围中，因此包含 .S
程序点的封闭范围是包含它的任何范围;最小的此类范围称为该点的直接范围。
如果范围是或包含但不包含 ，则范围会介入程序点和范围（不包含 ）之间。PSPSP
任何不是模板参数范围的范围的父范围都是包含模板参数范围的最小范围，而不是模板参数范围。SS除非另有说明：
  声明位于其所在位置的直接范围内。
  声明的目标范围是它所在的范围。
  声明 （re） 引入的任何名称都在其目标范围内绑定到它。
  如果 是实体声明的目标范围，则实体属于范围。SS
//                global  scope  scope
//                scope     S      T
int x;         //   ─┐                 // program point X
               //    │
{              //    │     ─┐
    {          //    │      │     ─┐
        int y; //    │      │      │   // program point Y
    }          //    │      │     ─┘
}              //   ─┘     ─┘
在上面的程序中：
全局范围、范围和范围包含程序点 。STY 
换句话说，这三个范围都是在 program point 处封闭的 scope。Y
全局范围包含 scopes 和 ，范围 包含 scope 。STST
因此，scope 是所有三个范围中最小的，这意味着：T
  范围 是程序点的直接范围 。TY
  变量y栖息在其位置的范围。T
  Scope 是声明的目标范围Ty.
  变量y属于范围 。T
Scope 是 scope 的父范围，全局范围是 scope 的父范围。STS
范围 介入程序点 和 范围 之间。SXT

块范围
每
  选择语句 （if， switch），
  迭代语句 （for， range-for（自 C++11 起））， while， do-while），
  handler 或
  复合语句，而不是处理程序的复合语句
引入包含 statement 或 handler 的块范围。
属于块范围的变量是块变量。
int i = 42;
int a[10];
for (int i = 0; i < 10; i++) // inner “i” inhabits the block scope
    a[i] = i;                // introduced by the for-statement
int j = i; // j = 42
块范围 extern 声明以更大的封闭范围为目标，但在其直接范围内绑定名称。
如果声明不是与名称无关的声明，并且（自 C++26 起）在S
  函数体或函数 try 块的复合语句，
  Lambda 表达式的 compund 语句主体{}（自 C++11 起）
  本身不是 selection 或 iteration 语句的 selection 或 iteration 语句的子语句，或者
  函数 try block 的处理程序
可能与 的目标范围是 的父范围的声明冲突，则程序格式不正确。S
if (int x = f())  // declares “x”
{ // the if-block is a substatement of the if-statement
    int x;        // error: redeclaration of “x”
}
else
{ // the else-block is also a substatement of the if-statement
    int x;        // error: redeclaration of “x”
}
void g(int i)
{
    extern int i; // error: redeclaration of “i”
}

函数参数范围
每个参数声明都引入了一个函数参数范围，其中包括 .PP
如果声明的参数是函数声明的参数列表：
  如果函数声明是函数定义，则引入的范围将扩展到函数定义的末尾。
  否则（函数声明是函数原型），引入的范围将扩展到函数声明符的末尾。
  在这两种情况下，范围都不包括函数声明的轨迹。
如果声明的参数是 lambda 表达式的参数列表，则引入的范围将扩展到 body 的末尾。{}（自 C++11 起）
如果声明的参数是推演指南的参数列表，则引入的范围会扩展到该推演指南的末尾。（自 C++17 起）
如果声明的参数是 requires 表达式的参数列表，则引入的范围将扩展到 requirement-seq 的末尾。{}（自 C++20 起）
int f(int n) // the declaration of the parameter “n”
{            // introduces a function parameter scope
    / * ... * /
}            // the function parameter scope ends here

Lambda 范围
每个 lambda 表达式都引入了一个 lambda 范围，该范围在捕获后立即启动，并扩展到 body 的末尾。[]{}
使用 lambda 表达式的初始化器进行捕获E驻留在 Lambda 作用域中由E.
auto lambda = [x = 1, y]() // this lambda expression introduces a lambda scope,
{                          // it is the target scope of capture “x”
    / * ... * /
};                         // the lambda scope ends before the semicolon（自 C++14 起）

命名空间范围
命名空间的每个命名空间定义都引入了一个命名空间范围，其中包括 的每个命名空间定义的声明。NSN
对于 target scope is 或 is contains by 的每个非友元重新声明或特化，以下部分也包含在 scope 中：SSS
  对于 class （template） redeclaration 或 class template specialization，其 class-head-name 之后的部分。
  对于枚举重新声明，为其 enum-head-name 之后的部分。
  对于任何其他重新声明或特化，声明符的 unqualified-id 或 qualified-id 之后的部分。
全局范围是全局命名空间的命名空间范围。
namespace V   // the namespace definition of “V”
{             // introduces a namespace scope “S”
    // the first part of scope “S” begins here
    void f();
    // the first part of scope “S” ends here
}
void V::f()   // the portion after “f” is also a part of scope “S”
{
    void h(); // declares V::h
}             // the second part of scope “S” ends here

类范围
类或类模板的每个声明都引入了一个类范围，其中包括 的类定义的成员规范。CSC
对于 target scope is 或 is contains by 的每个非友元重新声明或特化，以下部分也包含在 scope 中：SSS
对于 class （template） redeclaration 或 class template specialization，其 class-head-name 之后的部分。
对于枚举重新声明，为其 enum-head-name 之后的部分。
对于任何其他重新声明或特化，声明符的 unqualified-id 或 qualified-id 之后的部分。
class C       // the class definition of “C”
{             // introduces a class scope “S”
    // the first part of scope “S” begins here
    void f();
    // the first part of scope “S” ends here
}
void C::f()   // the portion after “f” is also a part of scope “S”
{
    / * ... * /
}             // the second part of scope “S” ends here

枚举范围
枚举的每个声明都引入了一个枚举范围，其中包括非不透明（自 C++11 起）枚举声明（如果存在）的枚举器列表。EE
enum class E // the enumeration declaration of “E”
{            // introduces an enumeration scope “S”
    // scope “S” begins here
    e1, e2, e3
    // scope “S” ends here
}

模板参数范围
每个模板模板参数都引入了一个模板参数范围，其中包括整个模板参数列表和该模板模板参数的 require 子句（自 C++20 起）。
每个模板声明都引入了一个模板参数范围，该范围从模板参数列表的开头延伸到 的末尾。模板参数列表之外的任何声明都位于与 .DSDDSD
// the class template declaration of “X”
// introduces a template parameter scope “S1”
template
<
    // scope “S1” begins here
    template // the template template parameter “T”
             // introduces another template parameter scope “S2”
    <
        typename T1
        typename T2
    > requires std::convertible_from<T1, T2> // scope “S2” ends here
    class T,
    typename U
>
class X; // scope “S1” ends before the semicolon

申报点
通常，名称在其第一个声明的轨迹之后可见，如下所示。
在简单声明中声明的名称的轨迹紧跟在该名称的声明符之后和其初始值设定项（如果有）之前。
int x = 32; // outer x is in scope
{
    int x = x; // inner x is in scope before the initializer (= x)
               // this does not initialize inner x with the value of outer x (32),
               // this initializes inner x with its own (indeterminate) value
}
std::function<int(int)> f = [&](int n){ return n > 1 ? n * f(n - 1) : n; };
// the name of the function f is in scope in the lambda and can
// be correctly captured by reference, giving a recursive function
const int x = 2; // outer x is in scope
{
    int x[x] = {}; // inner x is in scope before the initializer (= {}),
                   // but after the declarator (x[x])
                   // in the declarator, outer x is still in scope
                   // this declares an array of 2 int
}
类或类模板声明的坐标点紧跟在其 class-head 中命名该类的标识符（或命名模板特化的 template-id）之后。类或类模板名称已在基类列表中的范围内。
struct S: std::enable_shared_from_this<S> {}; // S is in scope at the colon
枚举说明符或不透明的枚举声明（自 C++11 起）的轨迹紧跟在命名枚举的标识符之后。
enum E : int // E is in scope at the colon
{
    A = sizeof(E)
};
类型别名或别名模板声明的 locus 紧跟在别名引用的 type-id 之后。
using T = int; // outer T is in scope at the semicolon
{
    using T = T*; // inner T is in scope at the semicolon,
                  // outer T is still in scope before the semicolon
                  // same as T = int*
}
在未命名构造函数的 using 声明中，声明符的坐标点紧跟在声明符之后。
template<int N>
class Base
{
protected:
    static const int next = N + 1;
    static const int value = N;
};
struct Derived: Base<0>, Base<1>, Base<2>
{
    using Base<0>::next,     // next is in scope at the comma
          Base<next>::value; // Derived::value is 1
};
枚举器的轨迹紧跟在其定义之后（而不是像变量那样在初始值设定项之前）。
const int x = 12;
{
    enum
    {
        x = x + 1, // enumerator x is in scope at the comma,
                   // outer x is in scope before the comma,
                   // enumerator x is initialized to 13
        y = x + 1  // y is initialized to 14
    };
}
injected-class-name 的 locus 紧跟在其类（或类模板）定义的左大括号之后。
template<typename T>
struct Array
//  : std::enable_shared_from_this<Array> // error: the injected class name is not in scope
    : std::enable_shared_from_this< Array<T> > // OK: the template-name Array is in scope
{ // the injected class name Array is now in scope as if a public member name
    Array* p; // pointer to Array<T>
};
函数局部预定义变量的隐式声明的轨迹__func__紧接在函数定义的函数体之前。（自 C++11 起）

结构化绑定声明的坐标点紧跟在 identifier-list 之后，但禁止结构化绑定初始值设定项引用正在声明的任何名称。（自 C++17 起）

在 range-for 循环的 range-declaration 中声明的变量或结构化绑定（自 C++17 起）的轨迹紧跟在 range-expression 之后。
std::vector<int> x;
for (auto x : x) // vector x is in scope before the closing parenthesis,
                 // auto x is in scope at the closing parenthesis
{
    // the auto x is in scope
}（自 C++11 起）
模板参数的坐标点紧跟在其完整模板参数（包括可选的 default 参数）之后。
typedef unsigned char T;
template<
    class T = T, // template parameter T is in scope at the comma,
                 // typedef name of unsigned char is in scope before the comma
    T // template parameter T is in scope
    N = 0
>
struct A
{
};
概念定义的坐标点紧跟在概念名称之后，但禁止概念定义引用正在声明的概念名称。（自 C++20 起）
命名命名空间定义的坐标点紧跟在命名空间名称之后。

此部分不完整
原因：[basic.scope.pdecl] 的剩余部分

缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

博士	应用对象	发布时的行为	纠正行为
CWG 2793	C++98	块作用域中的 extern 声明可能与父作用域中的另一个声明冲突	禁止

引用
C++23 标准 （ISO/IEC 14882：2024）：6.4 范围 [basic.scope]
C++20 标准 （ISO/IEC 14882：2020）：6.4 范围 [basic.scope]
C++17 标准 （ISO/IEC 14882：2017）：6.3 范围 [basic.scope]
C++14 标准 （ISO/IEC 14882：2014）：3.3 范围 [basic.scope]
C++11 标准 （ISO/IEC 14882：2011）：3.3 范围 [basic.scope]
C++98 标准 （ISO/IEC 14882：1998）：3.3 声明性区域和范围 [basic.scope]
*/

/*
我们被要求深入解释C++中的作用域概念，并提供示例说明和总结。附件内容详细描述了C++中各种作用域类型及其规则。下面我们将根据附件内容进行结构化解析。

### 1. 核心概念解析
**作用域定义**：C++中每个声明仅在程序特定部分可见，这些部分称为作用域。名称查找在作用域内进行，将非限定名称与其声明关联。

**作用域嵌套**：除全局作用域外，所有作用域都包含在另一个作用域中（称为父作用域）。最小包含作用域称为直接作用域。

### 2. 作用域类型详解
#### a) 块作用域 (Block Scope)
- **引入机制**：由复合语句（{}）、选择语句（if/switch）、迭代语句（for/while）或异常处理程序引入。
- **关键特性**：
  - 块内声明的变量称为块变量（如循环计数器）。
  - 块作用域中`extern`声明目标为外层作用域，但名称绑定在当前块。
  - C++26起禁止在函数体、lambda体等内部声明与外层声明冲突。

**示例**：
```cpp
int main() {
    int x = 10; // 外层块变量
    {
        int x = x; // 危险：内层x声明点后生效，使用未初始化值
        extern int y; // 目标为全局作用域，但名称y绑定在当前块
    }
}
```

#### b) 函数参数作用域 (Function Parameter Scope)
- **作用范围**：从参数声明开始，延伸至：
  - 函数定义末尾（对函数定义）
  - 函数声明符末尾（对函数原型）
  - lambda体末尾（对lambda表达式）
  - 推导指南末尾（C++17起）
  - requires表达式末尾（C++20起）

**示例**：
```cpp
void foo(int param) { // param作用域开始
    // param在整个函数体内可见
} // param作用域结束
```

#### c) Lambda作用域 (Lambda Scope)
- **特性**：C++11引入，从捕获列表[]后开始，延伸至lambda体末尾。
- 捕获初始化器中的名称驻留在lambda作用域。

**示例**：
```cpp
auto lambda = [x=1]() { // x驻留在lambda作用域
    return x + 1; 
};
```

#### d) 命名空间作用域 (Namespace Scope)
- **特性**：由命名空间定义引入，包含所有该命名空间内的声明。
- 全局作用域是全局命名空间的命名空间作用域。
- 类/枚举的成员函数定义在命名空间作用域内。

**示例**：
```cpp
namespace NS {
    void func(); // 声明在NS作用域
}
void NS::func() { // 定义仍属于NS作用域
    // ...
}
```

#### e) 类作用域 (Class Scope)
- **特性**：由类/类模板定义引入，覆盖整个类定义和成员函数定义。
- 类名在类头后即进入作用域（注入类名）。

**示例**：
```cpp
class MyClass { // 类作用域开始
public:
    void method(); // 声明在类作用域
};
void MyClass::method() { // 定义仍属于类作用域
    // ...
}
```

#### f) 枚举作用域 (Enumeration Scope)
- **特性**：强类型枚举（enum class）引入独立作用域，包含枚举值。

**示例**：
```cpp
enum class Color { // 枚举作用域
    Red, Green, Blue // 枚举值在作用域内
};
// Color::Red 必须限定访问
```

#### g) 模板参数作用域 (Template Parameter Scope)
- **特性**：从模板参数列表开始到模板声明结束。
- 模板模板参数有自己的嵌套模板参数作用域。

**示例**：
```cpp
template<typename T> // T进入模板参数作用域
class Box {
    T item; // T在此可见
};
```

### 3. 声明点规则
声明点决定名称何时可见：
- **变量**：声明符后，初始化器前
  ```cpp
  int x = x; // 内层x在声明点后生效，使用未初始化值
  ```
- **类/枚举**：类名/枚举名后立即生效
  ```cpp
  class S : std::enable_shared_from_this<S> {}; // S在基类列表中可见
  ```
- **类型别名**：类型ID后
  ```cpp
  using T = T*; // 外层T在=右侧可见
  ```
- **枚举值**：定义后立即生效
  ```cpp
  enum { x = x + 1 }; // 外层x在=右侧可见
  ```

### 4. 现代C++特性影响
- **Lambda作用域**（C++11）：支持闭包捕获作用域管理
- **结构化绑定**（C++17）：绑定声明点在后，禁止自引用
  ```cpp
  auto [x,y] = point; // x,y在声明点后可见
  ```
- **概念**（C++20）：概念名在定义后立即生效，禁止自引用
  ```cpp
  template<typename T> concept C = C<T>; // 错误：禁止自引用
  ```

### 总结与开发准则

#### 核心规则总结
| **作用域类型**       | **引入机制**                     | **终止点**                     | **典型应用**               |
|----------------------|----------------------------------|--------------------------------|---------------------------|
| 块作用域             | {}、if、for等控制语句            | 块结束                        | 局部变量、临时变量        |
| 函数参数作用域       | 函数/lambda参数列表              | 函数体/lambda体结束           | 函数参数                  |
| Lambda作用域         | lambda表达式捕获列表后           | lambda体结束                  | 捕获变量初始化            |
| 命名空间作用域       | namespace定义                    | 命名空间定义结束              | 全局/命名空间变量、函数   |
| 类作用域             | class/struct定义                 | 类定义结束                    | 类成员、嵌套类型          |
| 枚举作用域           | enum class定义                   | 枚举定义结束                  | 强类型枚举值              |
| 模板参数作用域       | template参数列表                 | 模板声明结束                  | 模板类型参数              |

#### 最佳实践指南
1. **最小化作用域原则**：
   ```cpp
   // 优先使用块作用域
   if (auto result = compute(); result.is_valid()) {
       // 仅在此块使用result
   } // result自动释放
   ```

2. **避免名称隐藏**：
   ```cpp
   int value; // 全局
   void func() {
       int value = value; // 错误：自初始化
       {
           int local = ::value; // 明确访问全局变量
       }
   }
   ```

3. **安全使用声明点**：
   ```cpp
   std::vector<int> data;
   for (auto& elem : data) { // elem声明点在range-expression后
       // 安全使用elem
   }
   ```

4. **类设计准则**：
   ```cpp
   class Widget {
   public:
       Widget(); // 注入类名在类作用域内
       // 成员函数定义在类外仍属类作用域
   private:
       int impl_detail; // 私有作用域隔离实现
   };
   ```

#### 深度洞见
1. **注入类名机制**：
   ```cpp
   template<typename T>
   class List {
       List* next; // 等价于List<T>*，利用注入类名
   };
   ```

2. **模板参数作用域隔离**：
   ```cpp
   typedef int T;
   template<class T = T> struct Box { // 模板参数T隐藏外层typedef
       T content; // 使用模板参数T
   };
   ```

3. **跨作用域名称查找**：
   ```cpp
   namespace A {
       void log(); // 目标命名空间作用域
   }
   void process() {
       extern void A::log(); // 声明使log在当前块可见
       log(); // 通过ADL查找
   }
   ```

> **终极结论**：
> 1. C++作用域系统是静态词法作用域的多层实现
> 2. 七种作用域类型构成严密的可见性控制体系
> 3. 声明点规则是名称查找的核心时间基准
> 4. 现代C++扩展了作用域在元编程中的应用
> 5. 开发核心准则：
>    - 始终遵循"最小暴露"原则
>    - 警惕声明点的隐藏陷阱
>    - 优先使用块作用域管理资源生命周期
>    - 利用命名空间和类作用域组织代码结构
>    - 模板编程中注意参数作用域覆盖
>    - 使用工具静态分析作用域冲突
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto scope_fn() -> int
{

    std::cout << "scope function begin..." << std::endl;

    return 0;
}