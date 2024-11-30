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
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h> // 为了处理变参函数，C 标准库提供了一组宏，包括 stdarg.h 中定义的 va_list、va_start、va_arg 和 va_end。这些宏用于访问变参函数中的可变参数
#include <assert.h> // 预定义标识符和宏在实际应用中非常有用，尤其是在调试和错误报告中。例如，assert 宏使用这些信息来提供详细的错误报告

/**
* @brief             语法：函数声明、函数定义
*
* @note              函数声明引入一个标识符，该标识符指定一个函数，并可选择指定函数参数的类型（原型）。函数声明（与定义不同）可以出现在块作用域和文件作用域，函数定义将函数体（声明与语句的序列）与函数名及形参列表关联。不同于函数声明，函数定义只允许在文件作用域（不存在嵌套函数）
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
  va_list args;                       // 声明一个变量用于处理变参列表
  va_start(args, count);              // 初始化 va_list，指示从 count 后开始的参数

  int total = 0;
  for (int i = 0; i < count; ++i) {
    total += va_arg(args, int);       // 获取下一个参数，类型为 int
  }

  va_end(args);                       // 清理 va_list
  return total;
}
// int sumc(...);                     // 变参函数声明，从 C23 标准开始，可以省略逗号，形参列表直接以省略号结尾
// int sumc(...) {                    // 变参函数定义，int sum(...) 定义了一个变参函数，没有明确的固定参数，形参列表直接以省略号结尾
//   va_list args;
//   va_start(args, 0);               // va_start(args, 0) 初始化 va_list，由于没有固定参数，第二个参数为 0 或 NULL

//   int count = va_arg(args, int);   // int count = va_arg(args, int); 从变参列表中获取第一个参数作为 count，指示后续参数的数量
//   int total = 0;
//   for (int i = 0; i < count; ++i) {
//     total += va_arg(args, int);    // 获取下一个参数
//   }

//   va_end(args);                    // 清理 va_list
//   return total;
// } 

void processArray(int arr[]);         // 不完整类型 函数声明时，形参可以是不完整类型，void processArray(int arr[]); 是函数声明，其中 int arr[] 是不完整类型，在 C99 及其后续标准中，函数的形参列表可以包含不完整类型（incomplete types）和可变长度数组（Variable Length Arrays, VLA）。然而，在函数定义中，这些类型必须在经过数组到指针和函数到指针调整后变为完整类型
void processArray(int arr[]) {        // 不完整类型 在函数定义中，形参类型必须是完整的，在函数定义 void processArray(int arr[]) 中，int arr[] 实际上被调整为 int* arr，这是一个完整类型
  for (int i = 0; i < 5; ++i) {
    print_purple("%d ", arr[i]);
  }
  print_purple("\n");
}
void processVLA(int n, int arr[n]);   // 可变长度数组（VLA） 函数声明，使用 VLA 记法，void processVLA(int n, int arr[n]); 是函数声明，其中 int arr[n] 是一个 VLA
void processVLA(int n, int arr[n]) {  // 可变长度数组（VLA） 函数定义，形参类型调整为指针类型和 VLA（完整类型），在函数定义 void processVLA(int n, int arr[n]) 中，即使 arr 的类型是 VLA，经过数组到指针的调整后，arr 实际上被调整为 int* arr，这是一个完整类型
  for (int i = 0; i < n; ++i) {
    print_purple("%d ", arr[i]);
  }
  print_purple("\n");
}

int max(int a, int b) {               // 新式 (C89) 函数定义，此定义引入函数自身，并为任何将来的函数调用表达式提供函数原型，强迫从实参表达式转换到声明的形参类型
  return a>b?a:b;
}
double gax(void) {
  return 0.1;
}
int maxo(a, b)                        // (C23前) 旧式 (K&R) 函数定义。此定义不表现为原型，而任何将来的函数调用表达式将进行默认实参提升
int a, b; {
  return a > b ? a : b;
}
double gaxo() {
  return 0.1;
}

void fax(char *s);                    // 返回类型由类型说明符和限定符确定 函数的返回类型由类型说明符（如 int，float，char 等）和限定符（如 const，volatile）决定
int sumax(int a, int b);              // 返回类型必须是完整的非数组对象类型或 void 类型，函数的返回类型必须是一个完整的非数组对象类型或 void 类型，完整的类型：完整的类型是指其大小已知的类型。例如，int，float，以及定义完全的结构体类型，非数组对象类型：函数不能返回数组类型，但可以返回指向数组的指针，void 类型：表示函数不返回任何值
int (*fooax(const void *p))[3];       // 如果返回类型有 cvr 限定，则调整为其无限定版本，cvr 限定指的是 const，volatile 和 restrict 限定符。如果函数返回类型包含这些限定符，那么在构造函数类型时，需要将它们调整为其无限定版本
void fax(char *s) {                   // 返回类型为 void，
  puts(s); 
} 
int sumax(int a, int b) {             // 返回类型为int
  return a+b; 
} 
int (*fooax(const void *p))[3] {      // 返回类型是指向 3 个 int 的数组的指针
  return malloc(sizeof(int[3]));
}
const int getConstantValue();         // const int getConstantValue() 函数返回一个 const int 值，但在实际构造函数类型时，它会被调整为 int，虽然我们在函数声明中指定了 const 限定符，但在函数类型系统中，返回类型的 const 限定符通常会被忽略。这是因为返回值是通过值传递（by value）返回给调用者的，在这种情况下，const 限定符对调用者没有实际意义。它仅仅是函数内部的一个约束，告诉函数内部不要修改返回的值
const int getConstantValue() {        // const int getConstantValue() 调整为 int getConstantValue()，虽然函数定义中返回类型是 const int，但调用者接收返回值时，并不能感知到这个 const 限定符。最终的返回类型被视为 int
  return 42;                          // 返回值类型的调整 对于返回基本类型（如 int、float 等）的函数，const 限定符在构造函数类型时会被忽略。这是因为返回值是通过值传递，const 限定符在这种情况下没有实际的约束力
}
const int* getPointerToConstant();    // const int* getPointerToConstant() 函数返回一个指向 const int 的指针，这样的返回类型是允许的，这里返回的是一个指向 const int 的指针。这种情况下，const 限定符对于调用者是有意义的，因为它指明了通过这个指针访问的数据是只读的，不能被修改
const int* getPointerToConstant() {   // const int* getPointerToConstant() 函数 getPointerToConstant 返回一个指向 const int 的指针，这个指针的 const 限定符确保了调用者不能通过这个指针修改 value 的值，这对于确保数据的只读性和避免意外修改是非常重要的
  static const int value = 42;        // 指针类型的返回值 对于返回指针类型的函数，const 限定符保留并生效。这是为了确保通过指针访问的数据的不可变性，从而提供更好的类型安全性
  return &value;                      // 在C语言中，函数的返回类型和参数类型有一套特殊的规则来确保类型一致性和正确的类型转换。这些规则帮助编译器更好地进行类型检查和优化代码，这些规则在设计上是为了简化函数类型的处理，并确保类型系统的一致性和可靠性。理解这些规则有助于编写更健壮和安全的C代码
}

void func1(int) {                     // 在 C23 之前的 C 标准中，函数定义中允许形参是未命名的，因为旧式（K&R）函数定义已被移除。这意味着你可以在函数定义中使用未命名的形式参数，但在函数体内部无法通过名称访问这些参数，从 C23 开始，旧式的 K&R 函数定义被完全移除，因此函数定义中的形参可以是未命名的。在函数体内部，无法通过名称访问这些未命名的形参
  // int = 5;                         // 错误：形参是未命名的
  return;                             // Omitting the parameter name in a function definition is a C2x extension
}
void func2(int a) {
  a = 10;                             // 可以访问并修改形参 a
  return;
}
void func3(void) {
  return;                             // 不接受任何参数
}
int func4(int, int);                  // 函数定义中形参可以为无名，因为旧式 (K&R) 函数定义已被移除。函数体内不能以名称访问无名形参
int func4(int, int) { 
  return 7; 
}

void testFunction(int x) {            // 通常，__func__ 可以与预定义宏 __FILE__ 和 __LINE__ 结合使用，用于调试信息或错误报告。例如，assert 宏就经常利用这些预定义标识符和宏来提供上下文信息，这些预定义标识符和宏在实际应用中非常有用，尤其是在调试和错误报告中。例如，assert 宏使用这些信息来提供详细的错误报告
  assert(x > 0);                      // 如果 x <= 0，assert 会触发并输出错误信息
}

typedef int p23(int q, int r);        // p23 是函数类型 int(int, int)
p23 f23;                              // 合法，函数声明 int f23(int, int)
// p23 f23 {                          // 错误，函数定义 参数列表必须显式存在于声明器中，不能从 typedef 继承它
//   return q + r; 
// }   

max23(a, b) {                         // a 和 b 拥有 int 类型，返回类型为 int
  return a > b ? a : b;               // C89 中，说明符与限定符 是可选的，若省略它，则函数返回类型默认为 int（可由 声明符 修改）
}
max24(a, b)                           
int a;                                // a 拥有 int 类型，b 默认拥有 int 类型，返回类型为 int
{                                     // 旧式定义不要求在 声明列表 中声明每个形参。任何缺少声明的参数拥有 int 类型
  return a > b ? a : b;
}

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
  形参列表可以拥有不完整类型而且可以用 VLA 记法 [*] (C99起)（但在函数定义中，在数组到指针和函数到指针调整后，形参类型必须完整），即在C99及其后续标准中，函数的形参列表可以包含不完整类型（incomplete types）和可变长度数组（Variable Length Arrays, VLA）。然而，在函数定义中，这些类型必须在经过数组到指针和函数到指针调整后变为完整类型
  属性说明符序列亦能应用到函数形参(C23起)，在 C23 标准中，引入了一些新的特性，其中之一是属性说明符序列（attribute specifier sequences）可以应用于函数形参。这些属性说明符可以用于指定某些编译器属性，以便影响函数参数的行为或优化编译器生成的代码
  其他函数调用机制上的细节见函数调用运算符，关于从函数返回，见 return，即函数调用运算符 ()：用于调用一个函数。形如 func(a, b) 的调用方式，返回语句 return：用于从函数中返回一个值，或从 void 类型的函数中返回 
  
  函数声明解释
  11、不同于 C++，声明符 f() 与 f(void) 拥有不同含义：声明符 f(void) 是新式（原型）声明符，声明函数不接收形参。声明符 f() 是声明函数接收未指定数量的形参的声明符（除非用于函数定义） (C23起)
  12、和在函数定义中不同，形参列表可以从 typedef 继承
  13、C89中，说明符与限定符 是可选的，且若省略它，则函数的返回类型默认为 int（可以由 声明符 修改）
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
  
  int fxc15(size_t, uintptr_t);             // 10、任何出现于形参列表中，能被当成 typedef 名或形参名的标识符，都会被当做 typedef 名：int f(size_t, uintptr_t) 被分析成新式声明符，声明一个函数，它接收二个 size_t 和 uintptr_t 类型的无名形参，而非开始定义接收二个名为“ size_t ”和“ uintptr_t ”的函数的旧式声明符，int f(size_t, uintptr_t); 声明了一个返回 int 类型并接收两个无名参数的函数 f。参数类型分别是 size_t 和 uintptr_t，函数定义时，参数 a 和 b 分别是 size_t 和 uintptr_t 类型
  typedef int mytype;                       // mytype 是通过 typedef 定义的一个类型名，等同于 int、size_t 是标准库中的类型名，通常用于表示对象的大小（无符号整数类型）     
  int fxc16(mytype, size_t);                // 新式声明符 声明的函数 fxc16 接收两个无名参数：第一个参数类型为 mytype（即 int）、第二个参数类型为 size_t。这与旧式声明符不同，旧式声明符会将形参列表中的标识符解析为参数名，而不是类型名
  // int fxc16(mytype a, size_t b) {        // 函数定义，函数 fxc16 定义时，参数 a 和 b 分别是 mytype 和 size_t 类型，在 main 函数中，调用 fxc16(a, b)，其中 a 是 mytype 类型（即 int），b 是 size_t 类型
  //   return a + b;                        // 新式声明符：在形参列表中，任何能被当成 typedef 名或形参名的标识符，都会被优先当作 typedef 名。结果是，声明的函数会接收这些类型的无名参数。int f(size_t, uintptr_t); 声明一个接收 size_t 和 uintptr_t 类型无名参数的函数 f
  // }
  int fxc17(mytype mytype, size_t size_t);      // 旧式声明符  int fxc17(mytype mytype, size_t size_t); 声明了一个函数 fxc17，接收两个参数，参数名分别为 mytype 和 size_t，即参数列表中有两个参数：第一个参数名为 mytype，类型为 mytype（即 int），第二个参数名为 size_t，类型为 size_t，这种旧式声明符容易引发混淆，因为参数名和类型名相同
  // int fxc17(mytype mytype, size_t size_t) {  // 函数定义，函数 fxc17 定义时，参数名 mytype 和 size_t 分别是 mytype 和 size_t 类型，在 main 函数中，调用 fxc17(mytype, size_t)，其中参数 mytype 是 mytype 类型（即 int），size_t 是 size_t 类型，极容易引发混淆，因为参数名和类型名相同
  //     return mytype + size_t;                // 旧式声明符：参数名是必须的，容易混淆类型名和参数名，int f(size_t size_t, uintptr_t uintptr_t); 声明一个接收两个分别命名为 size_t 和 uintptr_t 的参数的函数 f
  // }

  int arrayp[5] = {1, 2, 3, 4, 5};              // 10、在 C99 及其后续标准中，函数的形参列表可以包含不完整类型（incomplete types）和可变长度数组（Variable Length Arrays, VLA）。然而，在函数定义中，这些类型必须在经过数组到指针和函数到指针调整后变为完整类型，调整后的完整类型 确保编译器能够确定参数的大小和布局，从而正确生成代码
  processArray(arrayp);                    // 不完整类型是指在声明时其大小未完全确定的类型。例如 未定义大小的数组，不完全定义的结构或联合，不完整类型可以出现在函数的形参列表中，但在函数定义中，必须确保这些类型在经过必要的调整后变为完整类型
  processVLA(5,arrayp);                 // 可变长度数组（VLA）VLA 是一种数组，其大小在运行时确定，C99 引入了 VLA 的概念，允许数组的大小在运行时确定， 

  void printMessage(const char *message) __attribute__((nonnull)); // 10、使用 __attribute__ 指定属性，GCC 编译器支持的一些属性是通过 __attribute__ 关键字来实现的。比如 nonnull 属性可以用于告诉编译器某个参数不能为空指针，__attribute__((nonnull)) 告诉编译器，printMessage 函数的参数 message 不能为空指针，如果在调用时传递了一个空指针，编译器可以发出警告
  // void printMessage(const char *message) {                      // 函数定义
  //   printf("%s\n", message);                                    // 属性说明符序列 是编译器特定的扩展，用于向编译器提供额外的信息。例如，这些属性可以用于优化、代码生成、安全检查等
  // }
  // void printMessage(const char *message) [[nonnull]];           // 使用 C23 标准的属性说明符， C23 标准引入了一个新的属性说明符 [[nonnull]]，类似于 C++ 的属性语法。[[nonnull]] 是一个假设的 C23 标准属性说明符，用于指定 printMessage 函数的参数 message 不能为空指针
  // void printMessage(const char *message) {                      // 函数定义
  //   printf("%s\n", message);                                    // 在 C23 标准中，属性说明符序列可以应用到函数的形参上，这意味着我们可以在函数参数上使用类似 _Attribute_ 或其他形式的属性说明符
  // }   
  // __attribute__ 和属性运算符（在 C23 标准中引入的 [[attribute]]）都可以用于向编译器提供额外的信息，以便影响编译行为、优化代码或启用特定的编译器检查。虽然它们的功能类似，但语法和适用范围有所不同
  // __attribute__ 是一种编译器特定的扩展，最常用于 GNU 编译器集合（GCC）。它的主要特点如下
  // 语法：放在函数、变量、类型等的声明之后括号中的关键字，__attribute__ 使用括号和双下划线：__attribute__((attribute))
  // 兼容性：主要用于 GCC 和 Clang 编译器，但其他编译器可能不支持或支持有限，
  // 应用范围：可以应用于函数、变量、类型、字段等
  // 属性运算符 [[attribute]] 是在 C23 标准中引入的一种新的属性语法，类似于 C++11 中的属性。其主要特点如下
  // 语法：使用双方括号 [[ ]] 包围的关键字或关键字列表，可以放在声明的不同位置，属性运算符使用双方括号：[[attribute]]
  // 标准化：这是 C 标准的一部分，有助于提高可移植性和一致性
  // 应用范围：预计可以应用于函数、变量、类型、字段等，但具体细节取决于 C23 标准的最终版本和各个编译器的实现
   
  
  int fxc18(void);                                      // 11、声明：不接收参数，不同于 C++，声明符 f() 与 f(void) 拥有不同含义：声明符 f(void) 是新式（原型）声明符，声明函数不接收形参。声明符 f() 是声明函数接收未指定数量的形参的声明符（除非用于函数定义） (C23起)
  int fxc19();                                          // 声明：接收未知参数
  // int fxc18(void) { return 1; )                      // 实际定义
  // int fxc19(a,b,c,d) int a,b,c,d; { return 2; }      // 实际定义
  // fxc18(1);                                          // 编译时错误
  // fxc19(2);                                          // 未定义行为

  typedef int p(int q, int r);                          // 12、p 是函数类型 int(int, int)，和在函数定义中不同，形参列表可以从 typedef 继承，typedef可以用于创建类型别名，这在编写更易读和可维护的代码时非常有用
  p fxc20;                                              // 声明 int f(int, int)
  void executeFunction(p* func, int x, int y);          // 使用 typedef 定义的函数类型作为参数类型

  // *fxc21() {                                         // 13、返回 int* 的函数，C89中说明符与限定符是可选的，且若省略它则函数的返回类型默认为 int（可以由 声明符 修改）
  //  return NULL;
  // }

  /*
  函数定义语法
  函数定义将函数体（声明与语句的序列）与函数名及形参列表关联。不同于函数声明，函数定义只允许在文件作用域（不存在嵌套函数）
  C 支持二种函数定义的形式：
  1、属性说明符序列(可选) 说明符与限定符 形参列表声明符 函数体
  2、说明符与限定符 标识符列表声明符 声明列表 函数体(C23 前)
  属性说明符序列-	(C23)可选的属性列表，应用到函数
  说明符与限定符- 下列的组合：类型说明符可由声明符修改组成返回类型、存储类说明符确定标识符的链接（static、extern 或无）、函数说明符（inline、_Noreturn 或无）
  形参列表声明符-	用形参列表指代函数各形参的函数类型的声明符
  标识符列表声明符-	用标识符列表指代函数各形参的函数类型的声明符
  声明列表-	在 标识符列表声明符 中声明每个形参的声明序列，这些声明不能使用初始化式，而且仅允许 register 作为存储类说明符
  函数体-	复合语句，是花括号所包括的声明及语句序列，只要调用此函数就会被执行
  
  函数定义解释
  3、同函数声明，函数的返回类型由 说明符与限定符 中的类型说明符确定，并像在声明中一样可以由 声明符 修改。返回类型必须是完整的非数组对象类型或 void 类型。若返回类型会有 cvr 限定，则为构造函数类型的目的，将它调整为其无限定版本
  4、同函数声明，为构造函数类型的目的，将形参类型从函数调整到指针，从数组调整到指针，并且为确定兼容函数类型的目的，忽略所有形参类型的顶层 cvr 限定符，这种忽略有助于提高函数签名的灵活性和兼容性，但实际的函数实现仍然会受到顶层限定符的约束
  5、不同于函数声明，函数定义不允许无名形参（否则旧式 (K&R) 函数定义中会有冲突），即使不在函数中使用也必须命名它们。仅有的例外是形参列表 (void)	(C23前)
  6、函数定义中形参可以为无名，因为旧式 (K&R) 函数定义已被移除。函数体内不能以名称访问无名形参(C23起)，即从C23开始，旧式的 K&R 函数定义被完全移除，因此函数定义中的形参可以是未命名的。在函数体内部，无法通过名称访问这些未命名的形参
  7、在函数体内，每个具名形参都是左值表达式，它们拥有自动存储期和块作用域。形参在内存中的布局（或者它们究竟是否存储于内存中）是未指定的：这是调用约定的一部分
  8、函数调用机制上的其他细节见函数调用运算符，关于从函数返回，见 return，即函数调用运算符 ()：用于调用一个函数。形如 func(a, b) 的调用方式，返回语句 return：用于从函数中返回一个值，或从 void 类型的函数中返回
  9、__func__ 在每个 函数体 内，拥有块作用域和静态存储期的预定义变量 __func__ 可用，它如同通过以下方式紧跟开花括号后定义 static const char __func__[] = "function name"; 此特殊标识符有时与预定义宏常量 __FILE__ 及 __LINE__ 结合使用，例如为 assert 所用
  10、参数列表必须显式存在于声明器中，不能从 typedef 继承它
  11、C89 中，说明符与限定符 是可选的，若省略它，则函数返回类型默认为 int（可由 声明符 修改）
  12、旧式定义不要求在 声明列表 中声明每个形参。任何缺少声明的参数拥有 int 类型

  */
  max(1,2);         // 1、新式函数定义（C89标准之后） C89（ANSI C标准）引入了函数原型的概念，这种方式也被称为新式函数定义。这种定义方式在函数声明时就明确了参数的类型，从而提供了更严格的类型检查，强制进行参数类型检查和转换、提高了代码的可读性和可维护性、提供了更好的错误检测机制
  gax();
  maxo(1,2);        // 2、旧式函数定义（K&R C） 旧式函数定义，也称为K&R（Kernighan and Ritchie）函数定义，是在C89标准之前使用的方式。在这种方式中，函数的参数类型在函数体之前定义，而不是在函数声明中，不提供参数类型检查、在调用函数时，参数会进行默认的实参提升（例如，char 和 short 会提升为 int）、缺乏类型安全性，可能导致难以发现的错误
  gaxo();

  int valueax = getConstantValue();                               // 3、同函数声明，函数的返回类型由 说明符与限定符 中的类型说明符确定，并像在声明中一样可以由 声明符 修改。返回类型必须是完整的非数组对象类型或 void 类型。若返回类型会有 cvr 限定，则为构造函数类型的目的，将它调整为其无限定版本
  print_purple("Value: %d\n", valueax);                           
  const int* ptrax = getPointerToConstant();                      // 对于返回基本类型（如 int、float 等）的函数，const 限定符在构造函数类型时会被忽略。这是因为返回值是通过值传递，const 限定符在这种情况下没有实际的约束力，对于返回指针类型的函数，const 限定符保留并生效。这是为了确保通过指针访问的数据的不可变性，从而提供更好的类型安全性
  print_purple("Pointer to constant value: %d\n", *ptrax);

  void callFunction(void func(int));                              // 4、将形参类型从函数调整到指针，当函数的参数类型是另一个函数时，编译器会自动将其调整为指向该函数的指针即 void callFunction(void (*func)(int)); 这是因为在C语言中，函数本身不能作为参数传递，但可以通过函数指针来传递，callFunction 函数接受一个参数 func，它是一个接受 int 类型参数并且没有返回值的函数。无论是声明为 void func(int) 还是 void (*func)(int)，编译器都会将其视为函数指针
  void processArrayn(int arr[], int size);                        // 将形参类型从数组调整到指针，当函数的参数类型是一个数组时，编译器会自动将其调整为指向该数组元素类型的指针。这是因为在C语言中，数组作为参数传递时实际上是通过指针传递的，processArrayn 函数接受一个整型数组 arr 和一个整型参数 size。无论是声明为 int arr[] 还是 int* arr，编译器都会将其视为指针类型
  
  void constFunc(const int param);                                // void nonConstFunc(int param);，参数 param 是 const int 类型的参数并返回 void。这里的 const 关键字是一个顶层限定符，表示参数 param 在函数内部不能被修改，在确定两个函数类型是否兼容时忽略所有形参类型的顶层 cvr 限定符，形参类型的顶层 const、volatile 和 restrict 修饰符会被忽略。顶层限定符是直接应用于参数本身的修饰符，而不是应用于参数指向的对象。const int 和 int 在函数形参类型检查中被认为是兼容的
  void nonConstFunc(int param);                                   // void nonConstFunc(int param); 参数 param 是普通的 int，在函数内部可以修改 param 的值
  void constFuncP(const int* param);                              // void constFuncP(const int* param); 参数 param 是 const int*，在函数内部不能通过 param 修改其所指向的整数值，这是一个底层限定符，但指针本身可以被修改
  void nonConstFuncP(int* param);                                 // void nonConstFuncP(int* param); 参数 param 是普通的 int*，在函数内部可以通过 param 修改其所指向的整数值及指针本身                                       
  // 在 C 和 C++ 中，函数类型检查时，形参类型的顶层限定符（const、volatile 和 restrict）会被忽略。顶层限定符是直接应用于参数本身的修饰符，而不是应用于参数所指向的对象。例如，const int 和 int 在函数形参类型检查中被认为是相同的
  // 顶层限定符：直接应用于参数本身如 const int param 中的 const、如 int* const param 中的 const
  // 底层限定符：应用于参数所指向的对象 如 const int* param 中的 const，这是一个底层限定符，因为它应用于 param 所指向的 int 对象
  // 兼容性检查
  // 在 C 语言中，为了判断两个函数类型是否兼容，编译器会忽略所有形参类型的顶层 const、volatile 和 restrict 限定符。这使得以下函数声明和定义被认为是兼容的，下述所有函数声明在函数类型检查中被认为是相同的，因为它们的顶层限定符（const、volatile、restrict）被忽略，这种忽略有助于提高函数签名的灵活性和兼容性，但实际的函数实现仍然会受到顶层限定符的约束
  // void funcA(int* p);
  // void funcB(int* const p);
  // void funcC(const int* p);
  // void funcD(volatile int* p);
  // void funcE(int* restrict p);          

  void func1(int);                                // 5、函数声明，合法的函数声明，表示函数接受一个int类型参数
  void func2(int a);                              // 这是合法的声明，a 是命名的形参
  void func3(void);                               // 这是合法的声明，表示函数不接受任何参数
  func1(10);                                      // 6、在 C23 之前的 C 标准中，函数定义中允许形参是未命名的，因为旧式（K&R）函数定义已被移除。这意味着你可以在函数定义中使用未命名的形式参数，但在函数体内部无法通过名称访问这些参数，从 C23 开始，旧式的 K&R 函数定义被完全移除，因此函数定义中的形参可以是未命名的。在函数体内部，无法通过名称访问这些未命名的形参
  func2(10);                                  
  func3();
  int par4 = func4(10,10);                        // 函数定义中形参可以为无名，因为旧式 (K&R) 函数定义已被移除。函数体内不能以名称访问无名形参
  print_purple("par4 = %d.\n", par4);                                      

  // void exampleFunction(int a, double b) {      // 7、形参的行为 左值表达式：在函数体内，每个具名形参都是左值表达式。这意味着它们可以出现在赋值操作的左侧，并且可以被修改、自动存储期（Automatic Storage Duration）：形参在函数调用时分配存储空间，并在函数返回时释放。这称为自动存储期、块作用域（Block Scope）：形参在函数体内的作用域仅限于函数块内部
  //   a = 10;                                    // 存储和调用约定 形参在内存中的布局（或是否存储于内存中）是未指定的，因为这属于调用约定的一部分。调用约定由编译器和硬件平台决定，决定了函数参数如何传递（通过寄存器或堆栈等）以及返回值如何传递
  //   b = 20.5;                                  // 形参 a 和 b 在函数体内是左值表达式
    
  //   printf("a: %d, b: %.2f\n", a, b);          // 输出修改后的值
  //   return;                                    // 形参在函数返回前有效（自动存储期和块作用域）
  // }                                            // 调用约定 不同的平台和编译器使用不同的调用约定，这决定了函数参数是通过寄存器还是通过堆栈传递。例如：在 x86 平台上的一些调用约定中，前几个参数可能通过寄存器传递，剩余的参数通过堆栈传递，在 ARM 架构上，前四个整数参数通常通过寄存器传递 

  // static const char __func__[] = "function name";   // 9、在 C99 标准及更高版本的 C 语言中，引入了一个特殊的预定义标识符 __func__。在每个函数体内，这个标识符表示当前函数的名称。它具有块作用域和静态存储期，类似于通过以下方式定义的静态常量字符数组，块作用域（Block Scope）__func__ 的作用域仅限于定义它的函数体内。它在函数内部是可见的，但在函数外部不可见、静态存储期（Static Storage Duration）__func__ 在程序开始时分配存储空间，并在程序结束时释放。它的存储期在整个程序运行期间都是有效的
  // void exampleFunction() {                          // 通常，__func__ 可以与预定义宏 __FILE__ 和 __LINE__ 结合使用，用于调试信息或错误报告。例如，assert 宏就经常利用这些预定义标识符和宏来提供上下文信息
  //   print_purple("Function name: %s\n", __func__);  // 输出当前函数的名称
  //   print_purple("File: %s\n", __FILE__);           // 输出当前文件的名称
  //   print_purple("Line: %d\n", __LINE__);           // 输出当前行号
  // }
  testFunction(1);                                  // 传入 -1 这会触发断言，这些预定义标识符和宏在实际应用中非常有用，尤其是在调试和错误报告中。例如，assert 宏使用这些信息来提供详细的错误报告

  // typedef int p23(int q, int r);                   // 10、p23 是函数类型 int(int, int)
  // p23 f23;                                         // 合法，函数声明 int f23(int, int)
  // // p23 f23 {                                     // 错误，函数定义 参数列表必须显式存在于声明器中，不能从 typedef 继承它
  // //   return q + r; 
  // // } 

  int par23 = max23(10,5);                       // 11、C89 中，说明符与限定符 是可选的，若省略它，则函数返回类型默认为 int（可由 声明符 修改）                                    
  print_purple("par23 = %d.\n", par23);
  int par24 = max24(10, 5);                      // 12、旧式定义不要求在 声明列表 中声明每个形参。任何缺少声明的参数拥有 int 类型
  print_purple("par24 = %d.\n", par24);

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