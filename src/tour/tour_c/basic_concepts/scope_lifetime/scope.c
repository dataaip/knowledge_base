/**
* @file              scope.c
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

#include <stdio.h>  // 头文件

#define TOUR_C_BASIC_CONCEPTS_SCOPE_LIFETIME

/*
### 范围 C C 语言 基本概念 

C 程序中出现的每个标识符仅在源代码的某些可能不连续的部分（称为其范围）中可见（即可以使用）。

在一个范围内，只有当实体位于不同的命名空间中时，标识符才能指定多个实体。
C 有四种类型的范围：
  块范围
  文件范围
  函数范围
  函数原型范围
  
嵌套范围
如果由同一标识符命名的两个不同实体同时在范围内，并且它们属于同一名称空间，则范围将嵌套（不允许其他形式的范围重叠），并且出现在内部范围内的声明会隐藏出现在外部范围内的声明：
// The name space here is ordinary identifiers.
int a;   // file scope of name a begins here
void f(void)
{
    int a = 1; // the block scope of the name a begins here; hides file-scope a
    {
      int a = 2;         // the scope of the inner a begins here, outer a is hidden
      printf("%d\n", a); // inner a is in scope, prints 2
    }                    // the block scope of the inner a ends here
    printf("%d\n", a);   // the outer a is in scope, prints 1
}                        // the scope of the outer a ends here
void g(int a);   // name a has function prototype scope; hides file-scope a

块范围
在复合语句（包括函数体）中声明的任何标识符的范围，或在 if、switch、for、while 或 do-while 语句中出现的任何表达式、声明或语句（自 C99 起）或函数定义的参数列表中声明的标识符的范围从声明点开始，到声明它的块或语句的末尾结束。
void f(int n)  // scope of the function parameter 'n' begins
{         // the body of the function begins
   ++n;   // 'n' is in scope and refers to the function parameter
// int n = 2; // error: cannot redeclare identifier in the same scope
   for(int n = 0; n<10; ++n) { // scope of loop-local 'n' begins
       printf("%d\n", n); // prints 0 1 2 3 4 5 6 7 8 9
   } // scope of the loop-local 'n' ends
     // the function parameter 'n' is back in scope
   printf("%d\n", n); // prints the value of the parameter
} // scope of function parameter 'n' ends
int a = n; // Error: name 'n' is not in scope
直到 C99，选择和迭代语句都没有建立自己的块范围（尽管如果在语句中使用了复合语句，则它具有通常的块范围）：
enum {a, b};
int different(void)
{
    if (sizeof(enum {b, a}) != sizeof(int))
        return a; // a == 1
    return b; // b == 0 in C89, b == 1 in C99
}（自 C99 起）
块范围变量默认没有关联和自动存储持续时间。请注意，非 VLA 局部变量的存储持续时间从输入块时开始，但在看到声明之前， 变量不在范围内，无法访问。

文件范围
在任何块或参数列表之外声明的任何标识符的范围从声明点开始，到翻译单元的末尾结束。
int i; // scope of i begins
static int g(int a) { return a; } // scope of g begins (note, "a" has block scope)
int main(void)
{
    i = g(2); // i and g are in scope
}
文件范围标识符默认具有外部链接和静态存储时长。

功能范围
在函数中声明的标签（并且只有一个标签）在该函数的所有位置、所有嵌套块中、在其自己的声明之前和之后都在范围内。注意：通过在 any 语句之前的冒号字符之前使用其他未使用的标识符来隐式声明标签。
void f()
{
   {   
       goto label; // label in scope even though declared later
label:;
   }
   goto label; // label ignores block scope
}
void g()
{
    goto label; // error: label not in scope in g()
}

函数原型范围
在非定义的函数声明的参数列表中引入的名称的范围以函数声明符的末尾结束。
int f(int n,
      int a[n]); // n is in scope and refers to the first parameter
请注意，如果声明中有多个或嵌套的声明符，则范围在最近的封闭函数声明符的末尾结束：
void f ( // function name 'f' is at file scope
 long double f,            // the identifier 'f' is now in scope, file-scope 'f' is hidden
 char (**a)[10 * sizeof f] // 'f' refers to the first parameter, which is in scope
);
enum{ n = 3 };
int (*(*g)(int n))[n]; // the scope of the function parameter 'n'
                       // ends at the end of its function declarator
                       // in the array declarator, global n is in scope
// (this declares a pointer to function returning a pointer to an array of 3 int)

申报点
structure、union 和 enumeration 标记的范围在声明标记的类型说明符中出现标记之后立即开始。
struct Node {
   struct Node* next; // Node is in scope and refers to this struct
};
枚举常量的范围在枚举器列表中出现其定义枚举器后立即开始。
enum { x = 12 };
{
    enum { x = x + 1, // new x is not in scope until the comma, x is initialized to 13
           y = x + 1  // the new enumerator x is now in scope, y is initialized to 14
         };
}
任何其他标识符的范围从其声明符的末尾和初始化器（如果有）之前开始：
int x = 2; // scope of the first 'x' begins
{
    int x[x]; // scope of the newly declared x begins after the declarator (x[x]).
              // Within the declarator, the outer 'x' is still in scope.
              // This declares a VLA array of 2 int.
}
unsigned char x = 32; // scope of the outer 'x' begins
{
    unsigned char x = x;
            // scope of the inner 'x' begins before the initializer (= x)
            // this does not initialize the inner 'x' with the value 32, 
            // this initializes the inner 'x' with its own, indeterminate, value
}
unsigned long factorial(unsigned long n)
// declarator ends, 'factorial' is in scope from this point
{
   return n<2 ? 1 : n*factorial(n-1); // recursive call
}
作为一种特殊情况，不是标识符声明的类型名称的范围被视为在类型名称中出现标识符的位置之后开始（如果不省略）。

笔记
在 C89 之前，具有外部链接的标识符即使在块中引入也具有文件范围，因此，不需要 C89 编译器来诊断已超出范围的 extern 标识符的使用（这种使用是未定义的行为）。
循环体中的局部变量可以隐藏在 C 语言中 for 循环的 init 子句中声明的变量（它们的作用域是嵌套的），但在 C++ 中不能这样做。
与 C++ 不同，C 没有结构范围：在 struct/union/enum 声明中声明的名称与 struct 声明位于同一范围内（除了数据成员位于其自己的成员命名空间中）：
struct foo {
    struct baz {};
    enum color {RED, BLUE};
};
struct baz b; // baz is in scope
enum color x = RED; // color and RED are in scope

引用
C23 标准 （ISO/IEC 9899：2024）：6.2.1 标识符、类型名称和复合文字的范围 （p： TBD）
C17 标准 （ISO/IEC 9899：2018）：6.2.1 标识符的范围 （p： 28-29）
C11 标准 （ISO/IEC 9899：2011）：6.2.1 标识符的范围 （p： 35-36）
C99 标准 （ISO/IEC 9899：1999）：6.2.1 标识符的范围 （p： 29-30）
C89/C90 标准 （ISO/IEC 9899：1990）：3.1.2.1 标识符的范围
*/

/*
我们正在处理C语言中的作用域概念。根据提供的材料，C语言中有四种作用域：块作用域、文件作用域、函数作用域和函数原型作用域。我们需要深入解释每种作用域，并通过示例说明，最后进行总结。

 首先，让我们整理每种作用域的定义和特点：

 1. 块作用域（Block Scope）：
    - 在复合语句（包括函数体）中声明的标识符，或者在if、switch、for、while或do-while语句中（自C99起）出现的表达式、声明或语句中声明的标识符，以及函数参数列表中的标识符。
    - 作用域从声明点开始，到声明它的块或语句的末尾结束。
    - 注意：在C99之前，循环或选择语句不创建自己的块作用域（除非使用复合语句）。
    - 块作用域的变量默认具有自动存储期（非VLA局部变量在进入块时分配存储，但直到声明点才在作用域内）。

 2. 文件作用域（File Scope）：
    - 在任何块或参数列表之外声明的标识符（即全局变量和函数）。
    - 作用域从声明点开始，到翻译单元（源文件）结束。
    - 文件作用域的标识符默认具有外部链接和静态存储期。

 3. 函数作用域（Function Scope）：
    - 只适用于标签（label）。标签在声明它的函数内任何位置都可见，包括嵌套块和声明点之前（因为标签可以向前引用）。
    - 注意：标签通过goto语句使用，并且隐式声明（在语句前的冒号后跟标识符）。

 4. 函数原型作用域（Function Prototype Scope）：
    - 在函数原型（非定义声明）的参数列表中声明的标识符。
    - 作用域在函数声明符的末尾结束（即参数列表的右括号）。
    - 注意：如果函数原型中有多个声明符，则作用域在最近的包围函数声明符的末尾结束。

 此外，材料还提到声明点（Point of Declaration）的概念，即标识符开始可见的位置。对于结构、联合和枚举标记，声明点紧随标记出现在类型说明符之后。枚举常量在枚举器列表中出现后立即可见。其他标识符的声明点在声明符结束之后，初始化器之前。

 嵌套作用域规则：内层作用域可以隐藏外层作用域的同名标识符（只要它们在同一个命名空间）。C语言有四个命名空间：标签（label）、结构/联合/枚举标记（tag）、结构/联合成员（每个结构或联合独立）和普通标识符（变量、函数、类型定义名、枚举常量）。

 现在，我们将通过示例详细说明每种作用域。

 示例1：块作用域
   void f(int n)  // n的作用域开始（块作用域，函数参数）
   {
        ++n;      // n在作用域内，引用函数参数
        for(int n = 0; n<10; ++n) { // 循环局部n的作用域开始，隐藏了参数n
            printf("%d\n", n); // 打印0到9
        } // 循环局部n的作用域结束
        printf("%d\n", n); // 参数n重新可见
   } // 参数n的作用域结束

 示例2：文件作用域
   int i; // 文件作用域，从声明处开始到文件结束
   static int g(int a) { return a; } // g的文件作用域开始，a是块作用域
   int main(void)
   {
        i = g(2); // i和g都在作用域内
   }

 示例3：函数作用域（标签）
   void f()
   {
        goto label; // 尽管label在后面声明，但它在作用域内（函数作用域）
        label: ;    // 标签声明
        {
            goto label; // 标签忽略块作用域，仍然可见
        }
   }
   void g()
   {
        goto label; // 错误：label在g函数中不可见
   }

 示例4：函数原型作用域
   int f(int n, int a[n]); // n在函数原型作用域内，直到声明符结束（即右括号）
   // 注意：在数组声明中，n在作用域内，所以a是VLA（变长数组）

   void f( long double f,   // 这个f在函数原型作用域内，隐藏了文件作用域的f（如果有的话）
          char (**a)[10 * sizeof f] ); // 这里的f指的是参数f

 示例5：声明点
   struct Node {   // 结构标记Node的声明点在这里（类型说明符后）
        struct Node* next; // Node在作用域内，引用此结构
   };

   enum { x = 12 };
   {
        enum { x = x + 1, // 新的x的声明点在哪里？在枚举器列表中出现后，但这里初始化器中的第一个x是外层的x（因为内层x的声明点直到逗号之后？实际上，枚举常量的声明点在枚举器定义之后立即开始。因此，初始化器中的x是外层的x（因为内层x还没有声明点），所以内层x初始化为13
               y = x + 1  // 此时内层x已经在作用域内，所以y=13+1=14
             };
   }

   int x = 2;
   {
        int x[x]; // 内层x的声明点在其声明符之后（即[x]之后），所以在数组维度中，x是外层的x（值为2），声明一个2个int的数组。
   }

   unsigned char x = 32;
   {
        unsigned char x = x; // 内层x的声明点在初始化器之前，所以初始化器中的x是内层x自己（未初始化，值不确定）！这不会用32初始化内层x。
   }

 最后，注意C语言没有结构作用域（即结构内部的标记和外部在同一作用域），而C++则有类作用域。

 总结：
   - C语言的作用域规则控制标识符的可见性。
   - 四种作用域：块、文件、函数、函数原型。
   - 内层作用域可以隐藏外层作用域的同名标识符（同名屏蔽）。
   - 声明点规则决定了标识符从何处开始可见。
   - 函数作用域仅用于标签，允许在函数内任意位置goto。
   - 文件作用域的标识符具有静态存储期和外部链接（除非使用static）。
   - 块作用域的标识符具有自动存储期（除非使用static）。

 通过理解这些规则，可以避免命名冲突，并正确管理变量的生命周期和可见性。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int scope_fn()
{

    printf("scope function begin...");

    return 0;
}