/**
* @file              functions.c
* @brief             函数 代码文件，测试 函数代码块 包括 int main (void);
* @version           0.2
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.16
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.18 <td>0.1             <td>brightl         <td>声明方式
* <tr><td>2024.11.19 <td>0.2             <td>brightl         <td>函数使用特性、存储大小
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h> // 为了处理变参函数，C 标准库提供了一组宏，包括 stdarg.h 中定义的 va_list、va_start、va_arg 和 va_end。这些宏用于访问变参函数中的可变参数

/**
* @brief             语法：函数声明、函数定义
*
* @note              函数声明引入一个标识符，该标识符指定一个函数，并可选择指定函数参数的类型（原型）。函数声明（与定义不同）可以出现在块作用域和文件作用域
*/
#define FUNCTION_TYPE     
int sum(int x, int y) {     // 函数定义 定义一个名为“sum”并拥有函数体“ { return x+y; } ”的函数 
  //  return x + a + b;     // 错误：不能在 sum 中访问 main 的 x
  return x + y;
}

int max1(int a, int b);     // 函数声明 新式(C89)函数声明。此声明不仅引入函数指代符自身，而且还为任何将来的函数调用表达式提供函数原型，强制将使用的实参表达式转换成声明的形参类型，并进行编译时的实参数量检查
int max1(int a, int b) {    // 函数定义
  return a > b ? a : b;
}
int max2(a, b)              // 函数声明 旧式(K&R)函数定义，此声明不引入函数原型，且任何将来的函数调用表达式都将进行默认实参提升，而且若实参数量不匹配形参数量则引起未定义行为
int a, b;                   // 标识符列表: (a, b)
{ 
  return a > b ? a : b; 
}                           
int max3();                 // 函数声明 无原型函数声明，此声明不引入原型。 (C23前)新风格的函数声明，等价于 形参列表 void (C23起)  int max3(void);
// [[noreturn]] void fatalError(const char* message);  // 带属性说明符的示例 (C23) 在C23标准中，可以为函数类型添加属性说明符。例如，使用[[noreturn]]属性来指示函数不会返回

int (*aptr)[3];                      // int (*aptr)[3]; 这是一个指向数组的指针 声明了一个指向包含 3 个 int 类型元素的数组的指针
int (*(*fooptr)(const void *p))[3];  // int (*(*fooptr)(const void *p))[3]; 这是一个指向函数的指针的声明。含义是 fooptr 是一个指向函数的指针，这个函数接受一个 const void * 类型的参数，并返回一个指向包含 3 个 int 类型元素的数组的指针
int (*foofn(const void *p))[3];      // int (*foofn(const void *p))[3]; 这是一个函数声明。含义是 foofn 是一个函数，它接受一个 const void * 类型的参数，并返回一个指向包含 3 个 int 元素的数组的指针
int (*foofn(const void *p))[3] {     
    static int arr[3] = {1, 2, 3};   // 这里采用静态数组确保在函数返回后数组依然有效
    return &arr;  // 返回指向数组的指针
}

void foofn1();                       // 函数声明，具有文件作用域和外部链接，若函数声明符出现于任何函数外，则其引入的标识符拥有文件作用域和外部链接，除非使用 static 或有较前的 static 声明可见
void foofn1() {                      // 文件作用域 当函数声明出现在任何函数外部时，该函数的标识符就拥有文件作用域。这意味着该标识符在整个源文件中都是可见的，直到文件结尾
  return;                            // 外部链接 默认情况下，函数在全局作用域（即文件作用域）声明时，具有外部链接。这意味着该函数可以在其他文件中被引用。换句话说，不仅在声明它的文件中可以使用它，在链接阶段，其他文件也可以访问这个函数
}
static void foofn2();                // 函数声明，具有文件作用域和内部链接
static void foofn2() {               // 如果在函数声明前添加 static 修饰符，这个函数的链接性会变为内部链接。这意味着该函数只能在声明它的文件中可见，其他文件无法引用它
  return;    
}
void foofn3() {                       // 文件作用域 函数声明在任何函数外部，标识符在整个文件中可见
  return;                             // 外部链接 默认情况下，全局作用域的函数具有外部链接，可以在其他文件中被引用
}                                     // 内部链接 使用 static 修饰符声明的函数只能在同一文件中可见
void foofn4() {                       // 块作用域 函数声明在另一个函数内部，标识符只在包含它的代码块内可见，可以具有外部或内部链接
  return;
}

void example(int, double);            // 合法，参数未命名，函数 example 有两个参数，一个是 int 类型，另一个是 double 类型，但参数没有名字。这是完全合法的声明
void example(int a, double b) {       // 在函数定义中，参数必须命名，因为这些名字将在函数体中用到，函数 example 中的参数 a 和 b 都被命名，并且在函数体中使用
  print_purple("a: %d, b: %f\n", a, b);     
}
// int example(int, double) {         // 错误，参数在函数定义中必须命名
//   print_purple("a: %d, b: %f\n", a, b);  
// } 

// int fxc4(static int x);            // 错误：static 不能用于函数形参，static 不能用于函数形参，因此上述声明是非法的
int fxc5(register int x);             // 合法：register 说明符在函数声明中会被忽略，在这个示例中，register 说明符在函数声明中是合法的，但会被编译器忽略
int fxc5(register int x) {            // 函数定义
  return x * 2;
}
int fxc6(int arr[static 10]);         // 合法：表示 arr 至少有 10 个元素，在 C99 之后的标准中，可以在函数形参中使用 static 说明符来指定最小数组大小。注意，这里的 static 并不是存储类说明符，而是表示数组的最小大小
int fxc6(int arr[static 10]) {        // int fxc6(int arr[static 10]); 声明了一个函数 fxc6，它接收一个至少有 10 个元素的数组 arr。在函数定义中，可以安全地访问 arr 的前 10 个元素，数组下标中的 static：合法，用于指示数组的最小大小，不是存储类说明符
  return arr[0] + arr[9];             // 可以安全地访问 arr[0] 到 arr[9]
}

int sumb(int count, ...);             // 变参函数（variadic functions）允许函数接受可变数量的参数。这种函数的形参列表可以以 , ... 或（从 C23 标准开始） ... 结束，以表明函数可以接受可变数量的参数
int sumb(int count, ...) {            // 变参函数定义，int sum(int count, ...) 定义了一个变参函数，接受一个确定的参数 count，后面可以接受任意数量的 int 类型参数 
    va_list args;                     // 声明一个变量用于处理变参列表
    va_start(args, count);            // 初始化 va_list，指示从 count 后开始的参数

    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);  // 获取下一个参数，类型为 int
    }

    va_end(args);                    // 清理 va_list
    return total;
}
// int sumc(...);                       // 变参函数声明，从 C23 标准开始，可以省略逗号，形参列表直接以省略号结尾
// int sumc(...) {                      // 变参函数定义，int sum(...) 定义了一个变参函数，没有明确的固定参数，形参列表直接以省略号结尾
//     va_list args;
//     va_start(args, 0);               // va_start(args, 0) 初始化 va_list，由于没有固定参数，第二个参数为 0 或 NULL

//     int count = va_arg(args, int);   // int count = va_arg(args, int); 从变参列表中获取第一个参数作为 count，指示后续参数的数量
//     int total = 0;
//     for (int i = 0; i < count; ++i) {
//         total += va_arg(args, int);  // 获取下一个参数
//     }

//     va_end(args);                    // 清理 va_list
//     return total;
// }          

#ifdef FUNCTION_TYPE

#endif // FUNCTION_TYPE function 类型 

/**
* @brief             解释：函数是将一个标识符（函数名）关联到一条复合语句（函数体）的 C 语言构造。每个 C 程序都从 main 函数开始执行，也从它或者调用其他用户定义函数或库函数终止
* @return  int       Return Description
*
* @note              Revision History
*/
int functions_fn(void) {
#ifdef FUNCTION_TYPE
  /*
  1、特性：
  函数由函数声明或函数定义引入
  函数可以拥有零或更多个形参，它们为函数调用运算符的实参所初始化，并且以通过其 return 语句向其调用者返回一个值
  函数体在函数定义中提供 每个被用在表达式中的非内联 (C99起)函数（除非其不求值），必需在程序中定义一次
  不可以有嵌套函数（除了一些通过非标准的编译器扩展）每个函数定义必须出现在文件作用域，而且函数无法访问来自其调用方的局部变量
  */
  int sum(int, int);                               // 函数声明（可以出现于任何作用域）
  int n = sum(1, 2);                          // 函数调用 形参 x 和 y 为实参 1 和 2 所初始化
  int x = 1;                                       // main 的局部变量
  print_purple("int n = sum(1, 2); = %d.\n", n);
  //  int sum(int a, int b) {                      // 错误：不允许嵌套函数
  //    return  a + b; 
  //  }
  
  /*
  函数声明语法
  函数声明引入一个标识符，该标识符指定一个函数，并可选择指定函数参数的类型（原型）。函数声明（与定义不同）可以出现在块作用域和文件作用域
  
  在函数声明的声明文法中，类型说明符 序列，可选择地由声明式修饰代表其返回类型（可以是任何异于函数和数组的类型），而 声明符 有三种形式
  1、非指针声明符 (形参列表) 属性说明符序列(可选)
  2、非指针声明符 (标识符列表) 属性说明符序列(可选)	(C23前)
  3、非指针声明符 () 属性说明符序列(可选)
  非指针声明符 -	除了不带括号的指针声明符以外的任何声明符。包含于此声明符中的标识符成为函数指代符的标识符，即任何不包含指针的声明符。通常是函数名
  形参列表 -	或为单一关键词 void，或为形参的逗号分隔列表，可以以省略号形参结尾，即参数的逗号分隔列表，可以是类型和参数名（如 int a, float b），也可以是单个关键词 void 表示无参数，或以省略号 ... 结尾表示变长参数列表
  标识符列表 -	标识符的逗号分隔列表，仅在声明符被用作旧式函数定义的一部分的情况下可能，即标识符的逗号分隔列表，仅在声明符被用作旧式函数定义的一部分的情况下可能。这种形式在ANSI C（C89）标准中被使用
  属性说明符序列 -	(C23)可选的属性列表，应用到函数类型，即可选的属性列表，应用到函数类型（C23起）

  1、新式 (C89) 函数声明。此声明不仅引入函数指代符自身，而且还为任何将来的函数调用表达式提供函数原型，强制将使用的实参表达式转换成声明的形参类型，并进行编译时的实参数量检查
  新式（C89）函数声明，此声明既引入了函数指示符本身，又充当了任何未来 “函数调用表达式” 的函数原型，强制将参数表达式转换为声明的参数类型，并在编译时检查参数数量
  int max1(int a, int b);    // 声明
  int n = max1(12.01, 3.14); // OK：从 double 转换到 int
  2、(C23前) 旧式(K&R)函数定义。此声明不引入函数原型，且任何将来的函数调用表达式都将进行默认实参提升，而且若实参数量不匹配形参数量则引起未定义行为
  int max2(a, b) 
  int a, b; { return a>b?a:b; }   // 定义期待 int；第二个调用是未定义行为
  int n = max2(true, (char)'a');  // 以二个 int 参数调用 max （提升后）
  int n = max2(12.01f, 3.14);     // 以二个 double 参数调用 max （提升后）
  3、无原型函数声明，此声明不引入原型。 (C23 前)新风格的函数声明，等价于 形参列表 void (C23起)
  int max3(); <=> int max3(void);

  函数声明解释
  4、在C语言中，函数不能直接返回数组类型。这是因为数组在C语言中是一个连续的内存块，而函数返回值需要是一个固定大小的类型。数组的大小可以是可变的，因此不适合作为函数的返回类型。不过，你可以使用其他方法来实现类似的功能，如返回指向数组的指针，或者使用结构体包含数组
  5、函数返回类型的规则和限制 函数的返回类型，由 说明符与限定符 中的类型说明符确定，并且像在声明中一样可以由 声明符 修改，它必须是非数组对象类型或类型 void。若该函数声明不是定义，则返回类型可以不完整。返回类型不能有 cvr 限定：为构造函数类型的目的，调整任何有限定返回类型为其无限定版本
  6、函数声明式可以与其他声明式联合，只要他们共享其类型说明符和限定符
  7、若函数声明符出现于任何函数外，则其引入的标识符拥有文件作用域和外部链接，除非使用 static 或有较前的 static 声明可见
  8、若声明出现于另一函数内，则标识符拥有块作用域（且亦拥有外部或内部链接），即使函数声明在块作用域内，它仍然可以具有外部或内部链接
  9、在 C 语言中，函数声明（也称为函数原型）和函数定义在语法和语义上有一些不同之处，函数声明（或原型）告诉编译器有关函数的名称、返回类型和参数类型，但不包含函数的具体实现，函数声明通常放在头文件中，以便在多个源文件中共享函数接口、函数定义不仅包括函数的名称、返回类型和参数类型，还包括函数体（即函数的具体实现）、参数命名规则：在函数声明中，参数的名字是可选的，而在函数定义中，参数的名字是必须的
  
  10、形参列表 中的每个形参均是引入单个变量的声明，变量拥有下列额外属性
  声明符中的标识符是可选的（除非此函数声明是函数定义的一部分） (C23前)
  对形参允许的存储类说明符(auto、register、static、extern)仅有 register，而在非定义的函数声明中忽略它，即在C语言中，函数形参允许的存储类说明符仅有 register，而其他存储类说明符（如 static 和 extern）在函数形参中是非法的。此外，在非定义的函数声明（函数原型）中，register 说明符会被忽略
  任何数组类型的形参都被调整到对应的指针类型，若数组声明符的方括号内有限定符，则它具有限定 (C99起)，即在 C 语言中，函数形参如果是数组类型，会自动被调整为对应的指针类型。这意味着在函数声明中，任何数组类型的参数实际上都会被视为指向数组元素类型的指针。此外，如果数组声明符的方括号内有类型限定符（如 const、volatile 等），这些限定符也会应用到指针类型上。这些规则从C99标准开始生效
  任何函数类型的形参都被调整到对应的指针类型
  形参列表可以以 , ... 或... (C23起) 终止，细节见变参数函数，即在 C 语言中，变参函数（variadic functions）允许函数接受可变数量的参数。这种函数的形参列表可以以 , ... 或（从 C23 标准开始） ... 结束，以表明函数可以接受可变数量的参数
  形参不能拥有 void 类型（但可以拥有指向 void 指针类型）。完全由关键词 void 组成的特殊形参列表用于声明不接收实参的函数
  任何出现于形参列表中，能被当成 typedef 名或形参名的标识符，都会被当做 typedef 名：int f(size_t, uintptr_t) 被分析成新式声明符，声明一个函数，它接收二个 size_t 和 uintptr_t 类型的无名形参，而非开始定义接收二个名为“ size_t ”和“ uintptr_t ”的函数的 旧式声明符，即形参列表中的标识符可以被解释为类型名或形参名。为了避免歧义，编译器需要明确这些标识符的含义。你提到的规则指出了当标识符既可以被解释为 typedef 名（类型别名）又可以被解释为形参名时，优先将其解释为 typedef 名，如果 size_t 和 uintptr_t 是 typedef 名，那么它们会被解析为类型而不是形参名
  形参列表可以拥有不完整类型而且可以用 VLA 记法 [*] (C99起)（但在函数定义中，在数组到指针和函数到指针调整后，形参类型必须完整）
  属性说明符序列亦能应用到函数形参(C23起)
  其他函数调用机制上的细节见函数调用运算符，关于从函数返回，见 return 

  */
  int nm1 = max1(12.01, 3.14);      // 1、OK：从 double 转换到 int
  int nm2 = max2(true, (char)'a');  // 2、以二个 int 参数调用 max2 （提升后）
  int nm3 = max2(12.01f, 3.14);     // 2、以二个 double 参数调用 max2 （提升后）未定义
  int nm4 = max2(12, 3);
  print_purple("nm1 = %d.\n", nm1);
  print_purple("nm2 = %d.\n", nm2);
  print_purple("nm3 = %d.\n", nm3);
  print_purple("nm4 = %d.\n", nm4);
  int max4();                            // 3、无原型函数声明

  const void *ptr = NULL;
  int (*arrayPtr)[3] = foofn(ptr);    // 4、函数不能返回数组、可以返回指向数组的指针
  for (int i = 0; i < 3; i++) {
    print_purple("%d ", (*arrayPtr)[i]);
  }
  print_purple("\n");
  fooptr = foofn;
  int (*arrayPtr1)[3] = fooptr(ptr);
  for (int i = 0; i < 3; i++) {
    print_purple("%d ", (*arrayPtr1)[i]);
  }
  print_purple("\n");  

  void f(char *s);                      // 5、返回类型为 void
  int sum(int a, int b);                // sum 的返回类型为 int.
  int (*foo(const void *p))[3];         // 返回类型是指向 3 个 int 的数组的 指针
  double const bar(void);               // 声明 double(void) 类型函数
  const int* foo5();                    // 合法 ？
  // double (*barp)(void) = bar;           // OK：barp 是指向 double(void) 的 指针
  // double const (*barpc)(void) = barp;   // OK：barp 亦为指向 double(void) 的 指针
  int foo1();             // 合法声明，返回类型是 int，函数的返回类型由类型说明符（如 int, float, char, 以及用户定义的类型）和类型限定符（如 const, volatile, restrict）决定，和变量的声明类似，函数的返回类型可以通过声明符来修改，例如可以使用指针符号（*）将返回类型修改为一个指针类型
  int* qux();             // 合法声明，返回类型是 int 指针
  void bar1();            // 合法声明，返回类型是 void，返回类型不能是数组类型。例如，函数不能直接返回一个数组，返回类型可以是任何非数组的对象类型（如 int, struct, 指针等）或者 void
  // int arrayFunc()[10]; // 非法，返回类型不能是数组，替换为 int (*arrayFunc())[10] 返回指向数组的指针，声明了一个返回指向包含 10 个 int 类型元素的数组的指针的函数;
  struct S;               // 前向声明，不完整类型
  struct S* foos();       // 函数声明，返回类型是不完整类型 struct S*，如果函数只是声明（而不是定义），那么返回类型可以是不完整的。例如，你可以声明一个返回类型为 struct S 的函数，而不需要立即定义 struct S 的完整结构
  // const int fooc();    // 非法，返回类型不能是 const int，cvr 限定符指的是 const, volatile, 和 restrict，返回类型不能带有这些限定符。例如，函数不能返回 const int 或 volatile int，如果返回类型有这些限定符，在构造函数类型的时候，这些限定符会被去掉，调整为其无限定版本
  // const int* foo5();   // 合法，函数返回一个指向 const int 的指针，意味着你不能通过这个指针修改指向的值
  // const int foo6();    // 非法，返回类型不能是 const int ?
  
  int f1(void), *fip(), (*pfi)(), *ap[3]; // 6、声明二个函数和二个对象
  // inline int g(int), n;                // 错误：inline 说明符仅用于函数
  typedef int array_t[3];                
  // array_t a, h();                      // 错误：数组类型不能作为函数返回类型

  foofn1();                               // 7、函数声明符出现于函数外，具有文件作用域和外部链接
  foofn2();                               // static 函数声明符出现于函数外 具有文件作用域和内部链接
  
  void foofn3();                          // 8、函数声明符出现于函数内，具有块作用域和外部链接，如果函数之前没有 static 修饰符的声明（或者当前声明也没有 static 修饰符），则它具有外部链接
  foofn3();                               // 在 functions_fn 函数内调用
  void foofn4();                          // 函数声明符出现于函数内，具有块作用域和内部链接，由于前面(functions_fn 若存在 static 修饰)的 static 修饰符，如果函数之前有 static 修饰符的声明（或者当前声明有 static 修饰符），则它具有内部链接
  foofn4();                               // 在 functions_fn 函数内调用

  example(2, 3.14);                  // 9、函数声明合法，参数未命名，按照 C89/C90、C99 和 C11 标准，在函数声明中，参数不需要命名，只需要指定参数的类型即可，在函数定义中，参数必须命名，因为这些名字将在函数体中用到

  int fxc1(int, double);                   // 10、OK，声明符中的标识符是可选的（除非此函数声明是函数定义的一部分）
  int gxc1(int a, double b);               // OK
  // int fxc1(int, double) { return 1; }   // 错误：定义必须命名形参，C23起允许此定义
  
  // int fxc2(static int x);               // 10、错误，对形参允许的存储类说明符仅有 register，而在非定义的函数声明中忽略它，即在 C 语言中，函数形参允许的存储类说明符仅有 register，而其他存储类说明符（如 static 和 extern）在函数形参中是非法的。此外，在非定义的函数声明（函数原型）中，register 说明符会被忽略、register：建议编译器将变量存储在 CPU 寄存器中，以提高访问速度、static：使变量具有静态存储持续时间，通常用于全局变量或局部静态变量，但不适用于函数形参、extern：用于声明全局变量或函数，但不适用于函数形参
  int fxc3(int [static 10]);               // OK （数组下标的 static 不是存储类说明符）
  register int rxc5 = 10;                  // register 用于形参：合法，但在函数声明中会被忽略
  fxc5(rxc5);                           // 合法：register 用于函数形参
  int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  fxc6(array);                        // 数组下标中的 static：合法，用于指示数组的最小大小，不是存储类说明符

  int fxc7(int[]);                         // 10、调整到声明 int fxc7(int*) 任何数组类型的形参都被调整到对应的指针类型，若数组声明符的方括号内有限定符，则它具有限定 (C99起)，任何数组类型的形参都会被调整为对应的指针类型。这是因为在函数调用时，传递的是数组的指针，而不是数组本身，数组声明符的方括号内的限定符，如 const、volatile 等，将应用于调整后的指针类型
  int g(const int[10]);                    // 调整到声明 int g(const int*)，const int[10] 表示这个数组的所有元素都是 const int 类型，这意味着数组中的每个元素在初始化后都不能被修改，在函数形参中，它被调整为指向 const int 类型的指针
  int h(int[const volatile]);              // 调整到声明 int h(int * const volatile)，int[const volatile] 表示这个数组的指针具有 const volatile 限定符，指针本身不能被修改，且指针的值可能会被外部因素（如硬件中断）改变，在函数形参中，它被调整为具有 const volatile 限定符的指向 int 类型的指针
  int x10(int[*]);                         // 调整到声明 int x10(int*)
  // int* const const_ptr = &value1;       // 表示一个指向 int 类型的常量指针，指针本身是常量，不能改变它的值，可以修改指针所指向的内容
  // const int* ptr_to_const = &value1;    // 表示一个指向 const int 类型的指针，指针所指向的内容是常量，不能通过该指针修改内容，可以改变指针的值使其指向别的地址
  // void g(const int arr[10]);
  // void g(const int arr[10]) {
  //     // arr 被视为 const int* 类型的指针
  //     // 因此不能修改 arr 指向的内容
  //     // arr[0] = 5; // 错误，不能修改 const int
  //     int value = arr[0]; // 合法，读取 const int
  // }
  // void g(int arr[const volatile]);
  // void g(int arr[const volatile]) {
  //     // arr 被视为 int* const volatile 类型的指针
  //     // 不能修改 arr 自身的值，但可以修改 arr 指向的内容
  //     // arr = NULL; // 错误，不能修改 const 限定的指针
  //     arr[0] = 5; // 合法，修改 arr 指向的内容
  // }

  int fxc8(char g(double));                 // 10、调整到声明 int f(char (*g)(double)) 任何函数类型的形参都被调整到对应的指针类型
  int fxc9(int(void));                      // 调整到声明 int h(int (*)(void))

  int fxc10(int, ...);                      // 10、形参列表可以以 , ... 或... (C23 起) 终止，细节见变参数函数，
  int fxc11(int, ...);                      // 形参列表以逗号和省略号（, ...）结尾，这是传统的方式，表示函数接受一个确定数量的参数后，后面可以再接受任意数量和类型的参数
  // int fxc12(...);                        // 形参列表仅以省略号（...）结尾（C23起），从 C23 标准开始，可以省略逗号，形参列表直接以省略号结尾
  print_purple("Sum of 2, 3, 4: %d\n", sumb(3, 2, 3, 4));

  int fxc12(void);                          // 10、OK，形参不能拥有 void 类型（但可以拥有指向 void 指针类型）。完全由关键词 void 组成的特殊形参列表用于声明不接收实参的函数
  // int fxc13(void x);                     // 错误，形参不能拥有 void 类型
  int fxc14(void* x);                       // OK，可以拥有指向 void 指针类型


  /*
  函数定义
  */

  /*
  可变参数
  */

  /*
  内联函数(C99起)inline
  */

  /*
  _Noreturn 函数
  */

#endif // FUNCTION_TYPE function 类型    

  return 0;  
}