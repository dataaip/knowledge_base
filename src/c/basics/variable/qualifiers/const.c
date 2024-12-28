/**
* @file              const.c
* @brief             const 类型限定符，在 C 类型系统中每一个独立的类型，都有该类型的几个限定版本，对应 const、volatile 及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。本节描述 const 限定符的效果 
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>const 类型限定符使用、说明和解释
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdio.h>

/**
* @brief             在 C 类型系统中每一个独立的类型，都有该类型的几个限定版本，对应 const、volatile 及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。本节描述 const 限定符的效果
*
* @note              Revision History
*/
#define CONST_WORDS

/**
* @brief             在 C 类型系统中每一个独立的类型，都有该类型的几个限定版本，对应 const、volatile 及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。本节描述 const 限定符的效果
* @return  int       Return Description
*
* @note              Revision History
*/
int const_fn(void) {
#ifdef CONST_WORDS
  /*
  在 C 类型系统中每一个独立的类型，都有该类型的几个限定版本，对应 const、volatile 及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。本节描述 const 限定符的效果
  
  1、用 const 限定类型声明的对象可能会被编译器放置在只读内存中，并且如果在程序中从未获取过 const 对象的地址，那么它可能根本不会被存储，任何尝试修改类型为 const 限定的对象的行为都会导致未定义的行为
  
  2、const 语义仅适用于左值表达式；当在不需要左值的上下文中使用常量左值表达式时，其 const 限定符会丢失（请注意，如果存在 volatile 限定符，则不会丢失）
  左值（lvalue）的概念：左值是一个表示数据对象的表达式，它具有确定的内存地址，并且在程序执行过程中可以出现在赋值运算符的左边（当然，不是所有左值都能合法地放在赋值运算符左边，比如被 const 修饰的左值就不行）。例如，变量名就是常见的左值，像 int num = 10; 这里的 num 就是一个左值，它对应内存中存储 num 值的位置，可以通过 num 去获取或者修改这个位置存储的值（如果没有其他限制条件的话）
  const 语义与左值：当我们用 const 修饰一个变量，比如 const int n = 5;，此时 n 就是一个常量左值表达式。const 的语义作用在这个左值上，意味着这个左值所代表的数据对象（也就是 n 对应的内存存储的值）在程序中是不应该被修改的，编译器会基于这个限定来进行一些检查和优化（虽然通过一些不正当手段还是可能破坏这个限定，如前面提到的利用指针强制类型转换去修改 const 变量，但这属于未定义行为）。所以说 const 语义是针对左值表达式来体现的，它限定了这个左值所关联的对象的可修改性
  不需要左值的上下文举例：比如在函数调用传值的场景中，如果函数参数是按值传递（不是传递指针或者引用），并且参数类型是一个 const 限定的基本类型。例如有函数 void printValue(const int x) { printf("%d\n", x); }，在调用 printValue(n);（假设前面定义了 const int n = 5;）时，n 这个常量左值表达式的值会被拷贝一份传递给函数 printValue 里的形参 x。在这里，函数内部只是使用 x 的值去打印，并不需要把 x 当作一个能修改的左值（实际上也不能修改，因为有 const 修饰），此时对于这个形参 x 所处的这个 “使用其值” 的上下文（而不是把它当作可修改的对象的上下文）来说，它的 const 限定符在某种意义上 “丢失” 了作用。也就是说在函数内部的代码生成等处理中，编译器更多地只是把它当作一个普通的值来处理，只要保证不会出现对它进行赋值等修改操作就行，不会像对待真正要维持常量性的左值那样严格限制所有相关的代码生成情况
  volatile 限定符的作用：volatile 主要用于告诉编译器，被它修饰的变量可能会在程序执行过程中被意想不到的因素（比如硬件中断、多线程并发访问等情况）修改，所以编译器不能对这个变量进行常规的优化（比如缓存其值到寄存器等可能导致看不到外部对其修改的优化行为），每次使用这个变量时都要从内存中重新读取其值
  与 const 结合时的情况：当一个变量同时被 const 和 volatile 修饰，例如 volatile const int flag = 0;，即使在一些看似不需要左值的上下文中，它的 const 限定符也不会丢失。这是因为 volatile 强调了这个变量的特殊性，其值随时可能被外部改变，所以编译器始终要把它当作一个具有特殊性质（既不能随意修改它 —— 因为有 const，又要时刻关注它的值可能变化 —— 因为有 volatile）的左值来对待，不管在何种使用场景下，都会严格遵循 const 和 volatile 的语义要求来生成相应的代码，不会出现因为上下文好像不需要左值特性就忽略 const 限定的情况

  const 对象
  3、指定具有常量限定类型 const 的对象的左值表达式，以及指定具有至少一个常量限定类型成员（包括递归包含的聚合体或联合体的成员）的结构体或联合体类型对象的左值表达式，不是可修改的左值。特别是，它们不可赋值
  针对基本类型的 const 左值 对于像 const int n = 10; 这样简单的情况，n 是一个具有常量限定类型（const int）的左值表达式。根据这条规则，它不是可修改的左值，意味着像 n = 20; 这样的赋值操作是非法的，编译器会报错。因为 const 明确限定了这个左值所代表的对象（也就是 n 对应的那个整数存储的值）不能被改变，它在整个程序的正常执行流程中应该始终保持初始设定的常量值
  针对结构体或联合体中的 const 成员 假设有如下结构体定义 struct Point { const int x; int y; }; 如果定义了一个结构体变量 struct Point p = {10, 20};，那么 p.x 就是一个指定具有常量限定类型成员（这里 x 是 const int 类型）的结构体类型对象的左值表达式。按照规则，p.x 是不可修改的左值，像 p.x = 30; 这样的赋值操作就是不合法的，编译器会检测出这违反了 const 的语义限定，阻止这样的代码通过编译
  对于联合体也是类似的道理 union Data { const int num; char str[10]; }; 定义 union Data d; 后，d.num 作为指定了常量限定类型成员的联合体对象的左值表达式，同样不可以被赋值修改，像 d.num = 5; 这种操作是不符合语言规范的，会被编译器认定为错误操作
  递归包含情况 假如存在结构体嵌套结构体，并且内层结构体有 const 限定的成员，同样不可修改，编译器会依据 const 的语义规则禁止这样的代码编译通过

  const 结构体联合体
  4、常量限定的结构或联合类型的成员会获得其所属类型的限定如 const（无论是使用 “.” 运算符还是 “->” 运算符访问时）
  
  const 数组
  5、若以 const 类型限定符声明数组类型（通过使用 typedef），则数组类型无 const 限定，但其元素类型有(C23前)，但(C23起) 始终认为数组类型与其元素类型同等地拥有 const 限定
  在 C23 之前，通过 typedef 使用 const 来限定数组时，const 的限定作用主要体现在数组元素层面，保证元素不可修改，但并没有对数组整体的可赋值等操作（从类型层面当作一个不可变的实体）进行限定，这和很多人直观上认为的整个数组都被 const 修饰的理解是不太一样的，容易产生混淆，也可能导致一些代码出现不符合预期的行为（如果程序员错误地以为数组整体不可变）
  C23 标准下让数组类型和其元素类型在 const 限定方面的处理更加统一、直观，减少了因之前标准下两者限定不一致而可能导致的误解和编程错误，使代码中对于 const 修饰数组情况的行为更符合程序员通常期望的那种 “整个数组都不可变” 的语义理解
  实际编程中，如果代码要在不同 C 语言标准的环境下编译运行，就需要特别留意这种关于数组和 const 限定相关规则的变化，避免出现兼容性问题

  const 函数
  6、若以 const 类型限定符声明函数类型（通过使用 typedef），则行为未定义，typedef 常用于给已有的数据类型定义一个新的别名，方便代码书写和增强可读性等。例如可以用 typedef 给函数指针类型定义别名，像这样 typedef int (*FuncPtr)(int);，如果试图使用 const 来限定函数类型本身（通过 typedef 操作），这在 C 语言标准中是未定义行为。例如，下面这样的代码（虽然不符合标准规范，但展示下错误示例）typedef int const FuncType(const int);  
  函数在 C 语言里有其自身特殊的调用机制、存储方式以及语义规则等。函数本身不是像普通变量那样可以简单地用 const 去限定其整体不可变，因为函数调用涉及到执行一段代码逻辑、参数传递、栈帧的操作等复杂过程。C 语言标准并没有明确规定用 const 去限定函数类型该如何处理，所以不同的编译器面对这样的情况可能会有不同的处理方式，甚至可能直接报错，这就导致了行为的不可预测性，也就是所谓的未定义行为
  7、函数声明中，关键词 const 可出现在用于声明函数形参的数组类型的方括号内。它限定数组类型所变换到的指针类型，
  在 C 语言中，当函数的形参声明为数组形式时，比如 void func(int arr[5])，实际上在函数调用传递参数时，数组会自动退化为指向其首元素的指针，即上述函数声明等同于 void func(int *arr)。这是 C 语言的一个重要特性，为了方便函数处理数组数据
  两条声明声明相同函数 void f(double x[const], const double y[const]); 退化成指针 void f(double * const x, const double * const y);

  const 复合字面量
  8、常量限定的复合字面量不一定指定不同的对象；它们可能与其他复合字面量以及碰巧具有相同或重叠表示的字符串字面量共享存储
  复合字面量是一种可以创建匿名对象（没有显式命名的对象）的语法结构，当使用 const 对复合字面量进行限定的时候，它有一些特殊的存储特性
  对于带有 const 修饰的复合字面量，编译器在处理时，出于存储优化等方面的考虑，有可能会把它们在内存中的存储进行重叠安排（只要符合相应规则，不影响程序语义的正确性），而不是一定为每个这样的复合字面量都分配完全独立、不同的内存区域，而且它们还可能和字符串字面量在存储上有重叠情况（因为字符串字面量本身也是一种不可修改的常量性质的数据，存储在只读的内存区域，和 const 限定的复合字面量在不可变这点上有相似性）
  这种重叠存储情况是编译器实现层面基于标准允许的优化可能带来的结果，不同的编译器可能有不同的表现，在实际编写代码时不能依赖这种不确定的、依赖编译器行为的情况来确保程序逻辑的绝对正确性，除非是非常明确知晓并且在特定、可控的环境下利用这种特性

  const 指针
  9、指向非 const 类型的指针能隐式转换成指向同一或兼容类型的 const 限定版本的指针。需要转型表达式进行逆向转换
  注意 指向指向 T 指针的指针不可转换为指向指向 const T 指针的指针；对于要兼容的二个类型，其限定必须等同，即 指向char*的指针 不能转为指向const char*的指针

  const 注解 在 C 中不是常量表达式，在 C++ 中为常量表达式
  10、C 从 C++ 中采纳了 “const” 限定符，但是与 C++ 不同，在 C 中具有 const 限定类型的表达式不是常量表达式；它们不能用作 case 标签，也不能用于初始化静态和线程存储持续时间对象、枚举常量或位域大小。当它们用作数组大小时，结果数组是可变长度数组 VLA
  在早期的 C 语言中并没有 const 这个关键字来专门限定常量，后来从 C++ 引入了 const 限定符。在 C++ 中，const 有着比较明确且丰富的语义用于定义常量，比如用 const 修饰的变量一旦初始化后其值就不能被改变，并且在很多场景下 const 修饰的表达式可以当作真正的常量表达式来使用。而 C 语言虽然接纳了 const 限定符，但是对它的处理和 C++ 有着关键的区别
  不是常量表达式：在 C 语言里，即使一个表达式被 const 限定了，它本质上仍然只是一个具有只读属性的变量（在内存中有对应的存储单元，和普通变量类似只是不能修改它的值），而不是像在 C++ 中那样完全等同于常量表达式 
  不可用作 case 标号：在 switch 语句中，case 后面跟的必须是常量表达式，用于和 switch 表达式的值进行匹配判断。在 C 语言中，由于 const 限定的表达式不是常量表达式
  不能用于初始化静态和线程存储期对象：静态存储期对象是指那些在程序整个生命周期内都存在的对象，例如定义在所有函数外部的全局变量，或者用 static 关键字修饰的局部变量等。在 C 语言中，初始化这类对象要求使用常量表达式，而 const 限定的表达式不符合要求
  不能用作枚举项：枚举类型中每个枚举项本质上也相当于是一个常量，在 C 语言里，const 限定的表达式没办法充当枚举项
  不能用于位域大小：在结构体中定义位域时，用于指定位域宽度的数值必须是常量表达式。同样因为 const 限定的表达式在 C 语言中不算常量表达式，所以不能用于这个用途
  当在 C 语言中把 const 限定的表达式用作数组大小时，它会生成可变长数组（Variable Length Array，简称 VLA）。可变长数组是 C99 标准引入的特性，它允许数组的大小在运行时根据实际情况确定（只要符合一定的内存等条件限制）  
  */
  const int nct = 1;      // 1、const 限定类型的对象
  // nct = 2;             // 不可修改，首先，定义了一个 const int 类型的变量 n 并初始化为 1。const 关键字修饰意味着这个变量的值在正常情况下是不应该被修改的，它承诺在程序执行期间保持常量性，编译器会基于这个假设做一些优化处理，并且从语义层面阻止程序员去直接修改它的值
  int* pct = (int*)&nct;  // 声明了一个 int* 类型的指针 p，并通过强制类型转换将 n 的地址赋值给 p。这里的强制类型转换其实是一种绕过 const 限定的危险操作，因为从语言设计意图来讲，不应该通过这样的指针去修改 const 变量的值
  *pct = 2;               // 未定义行为，这块本应内存不可修改，然后执行 *p = 2，试图通过指针 p 去修改 n 的值。在 C 语言标准中，这样去修改一个 const 限定的对象的值属于未定义行为（Undefined Behavior），这意味着编译器可以自由选择如何处理这种情况，不同的编译器实现、不同的编译选项（比如是否开启优化）都可能导致截然不同的结果
  print_purple("cnt = %d, cnt address = %p\n", nct, &nct); 
  print_purple("pct = %d, pct value = %p\n", *pct, pct);
  
  const int nct1 = 1;     // 3、const 类型对象
  // nct1 = 2;            // 错误： nct1 的类型为 const 限定
  int xct = 2;            // 未限定类型的对象
  const int* pxct = &xct; // const 类型对象
  // *pxct = 3;           // 错误：左值 *pxct 的类型为 const 限定 
  struct {int a; const int b; } s1st = {.b=1}, s2st = {.b=2};
  // s1st = s2st;         // 错误：s1 的类型无限定，但它有 const 成员

  struct s4st { int i; const int ci; } cs5;      // 4、cs5.i 的类型为 int，cs5.ci 的类型为 const int
  const struct s4st cs6;                         // cs6.i 和 cs6.ci 的类型都是 const int

  typedef int Aarr[2][3];                        // 5、定义了一个名为Aarr的类型别名，表示一个二维数组类型，该二维数组有 2 行 3 列，元素类型为int
  const Aarr arrt = { {4, 5, 6}, {7, 8, 9} };    // const 限定了 arrt 数组中的元素不能被修改。对于这个二维数组，任何试图修改其元素值的操作都是非法的
  // arrt[0][0] = 10;                            // 非法操作，因为 arrt 是 const 限定的，不能修改其元素
  int* prti = arrt[0];                           // ？a[0] 拥有 const int* 类型，Initializing 'int *' with an expression of type 'const int[3]' discards qualifiers
  void* unqual_p = arrt;                         // ？C23 前 OK ； C23 起错误 // 注： clang 即使在 C89-C17 模式也应用 C++/C23 中的规则 Initializing 'void *' with an expression of type 'const Aarr' (aka 'const int[2][3]') discards qualifiers
  // typedef const int ArrayType[5];             // 通过typedef定义了一个新的数组类型别名，元素是const int类型
  // ArrayType arrt3;
  // void *unqual_ptr = arrt3;                   // 可以将一个ArrayType类型的数组赋值给另一个同类型数组，因为数组类型本身未被const限定，在C23中，这会被视为错误，因为数组类型本身现在被const限定了，不能随意赋值
  // arrt3[0] = 10;                              // 错误，试图修改const int类型的元素，违反了const语义

  typedef int (*FuncPtr)(int);                   // 6、定义了一个名为FuncPtr的函数指针类型别名，指向的函数参数为int，返回值为int
  typedef int const FuncType(const int);         // 试图用const限定函数类型，这是错误的，行为未定义

  void fn1(double x[const], const double y[const]);   // 7、退化成指针 void fn2(double * const x, const double * const y);
  void fn2(double * const x, const double * const y); // x 是一个指向 double 类型的 const 指针，这意味着指针 x 本身不能被修改，不能再指向其他地址，但它指向的值可以被修改
  void fn3(double x[], const double y[]);             // y 的元素不能被修改，声明表示数组中的元素是常量，不能被修改
  void fn4(double *x, const double *y);               // y 的元素不能被修改，此指针不能修改它所指向的double类型的值，但指针本身可以指向不同的地址

  const int* pcst1 = (const int[]){1, 2, 3};          // 8、通过复合字面量 (const int[]){1, 2, 3} 创建了一个匿名的 const int 类型的数组（元素为 1、2、3），然后定义了一个指向 const int 的指针 p1 指向这个匿名数组的首元素
  const int* pcst2 = (const int[]){2, 3, 4};          // pcst2 的值可等于 pcst1+1，第二行代码里，同样用复合字面量 (const int[]){2, 3, 4} 创建了另一个匿名的 const int 类型数组（元素为 2、3、4），并让指针 p2 指向它。这里注释提到 p2 的值可等于 p1 + 1，意思是由于编译器对这些 const 限定的复合字面量存储处理的灵活性，有可能在内存布局上，后面这个匿名数组 (const int[]){2, 3, 4} 的起始地址刚好和前一个匿名数组 (const int[]){1, 2, 3} 的第二个元素地址是重合的（虽然这不是必然情况，取决于编译器的实现，但标准允许这种可能的存储优化存在），所以从语法概念上来说，就好像 p2 的值等同于 p1 + 1 一样，也就是两个复合字面量所代表的数组在内存中存在了重叠表示的情况
  _Bool bl = "foobar" + 3 == (const char[]){"bar"};   // bl 的值可为 1，"foobar" 是一个字符串字面量，在 C 语言中它存储在只读的内存区域，并且它本质上可以看作是一个 const char 类型的数组（因为其内容不可修改）。表达式 "foobar" + 3 是对这个字符串字面量做指针运算，它得到的是指向该字符串中字符 'b' 的指针（因为跳过了前面 3 个字符）

  int* ptr1 = 0;                                      // 9、指向非 const 类型的指针能隐式转换成指向同一或兼容类型的 const 限定版本的指针。逆向转换需要转型表达式处理
  const int* cptr1 = ptr1;                            // OK：添加限定符（int 到 const int）
  ptr1 = cptr1;                                       // 错误：舍弃限定符（const int 到 int），Assigning to 'int *' from 'const int *' discards qualifiers
  ptr1 = (int*)cptr1;                                 // OK：转型
  char *ptr2 = 0;
  const char **cpptr2 = &ptr2;                        // const作用域 **cpptr2  错误：char* 与 const char* 不是兼容类型，Initializing 'const char **' with an expression of type 'char **' discards qualifiers in nested pointer types
  // char const **cpptr2;
  char * const *pcptr2 = &ptr2;                       // const作用域 *pcptr2 OK：添加限定符（char* 到 char *const）
  char ** const ppctr2 = &ptr2;                       // const作用域 ppctr2

  const int num = 5;                                  // 10、在C++中，下面这种用法是合法的，因为const int类型的num可以当作常量表达式，但在C语言中是非法的，因为C不认为num是常量表达式
  int arrnum[num];
  const int choice = 2;
  switch (choice) {
    case choice:                                      // 在C语言中，这是非法的，因为choice虽然被const限定，但不是常量表达式
      // do something
      break;
    default:
      break;
  }
  const int global_const = 10;
  static int static_variable = global_const;          // 下面是非法的，试图用const限定的global_const去初始化静态存储期的变量，在C中不行
  const int enum_value = 3;
  enum Color {
    REDC = enum_value,                                // 在C语言中，这是非法的，不能用const限定的enum_value作为枚举项
    GREENC
  };
  const int bit_width = 4;
  struct BitFieldStruct {
    unsigned int field : bit_width;                   // 在C语言中，这是非法的，不能用const限定的bit_width作为位域大小
  };
  int size = 10;
  const int const_size = size;
  int arrcval[const_size];                            // 这里定义了一个可变长数组，因为使用了const限定的const_size作为数组大小，在C语言中会这样处理 定义为 可变长数组

#endif // CONST_WORDS  const 关键词 

  return 0;
}