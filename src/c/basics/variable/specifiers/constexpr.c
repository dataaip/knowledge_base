/**
* @file              constexpr.c
* @brief             constexpr(C23)，在 C23 标准中引入了 constexpr 说明符，这个说明符用于声明标量对象（如整数、浮点数、指针等）为常量。constexpr 说明符在 C++ 中已经存在，现在被引入到 C 语言中
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>constexpr(C23)使用，解释说明
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdio.h>

/**
* @brief             在 C23 标准中引入了 constexpr 说明符，这个说明符用于声明标量对象（如整数、浮点数、指针等）为常量。constexpr 说明符在 C++ 中已经存在，现在被引入到 C 语言中
*
* @note              constexpr 说明符的含义 在 C23 中，如果一个标量对象使用 constexpr 存储类说明符声明，则该对象被视为常量
*/
#define CONSTEXPR_WORDS

/**
* @brief             在 C23 标准中引入了 constexpr 说明符，这个说明符用于声明标量对象（如整数、浮点数、指针等）为常量。constexpr 说明符在 C++ 中已经存在，现在被引入到 C 语言中
* @return  int       Return Description
*
* @note              Revision History
*/
int constexpr_fn(void) {
#ifdef CONSTEXPR_WORDS
  /*
  constexpr(C23)
  在 C23 标准中引入了 constexpr 说明符，这个说明符用于声明标量对象（如整数、浮点数、指针等）为常量。constexpr 说明符在 C++ 中已经存在，现在被引入到 C 语言中
  constexpr 说明符的含义 在 C23 中，如果一个标量对象使用 constexpr 存储类说明符声明，则该对象被视为常量

  1、常量值
  该对象的值在编译时就被确定，并且在程序运行时不能被修改
  编译器可以利用该对象的固定值在其他任何常量表达式中使用

  完全且显式初始化
  根据静态初始化规则，constexpr 对象必须完全且显式地初始化。这意味着在声明时必须为它提供一个确定的初始值
  constexpr int number = 42; // 合法，完全且显式初始化

  链接和地址
  constexpr 对象仍然具有其声明所适用的链接类型（内部链接或外部链接）
  该对象在运行时仍然存在，可以获取其地址，但不能修改其值

  // #include <stdio.h>
  // 
  // constexpr int maxSize = 100;                 // 声明并初始化一个 constexpr 对象
  //
  // void printSize() {
  //     printf("Max size is: %d\n", maxSize);
  // }
  // int main() {
  //   printSize();                              // 输出: Max size is: 100
  //   // maxSize = 200;                         // 错误：不能修改 constexpr 对象的值，constexpr 对象的值在运行时不能被修改
  //   const int* ptr = &maxSize;                // 合法，可以获取地址
  //   // *ptr = 200;                            // 错误：不能通过指针修改值
  //   return 0;
  // }
  静态初始化规则：constexpr 对象的初始化必须符合静态初始化规则，即初始化表达式必须是常量表达式
  不可修改性：任何尝试在运行时修改 constexpr 对象的行为都是非法的，并且会导致编译错误
  链结作用：constexpr 对象仍然遵循其声明的链结规则（内部链接或外部链接），这意味着它们可以在多个翻译单元之间共享（如果具有外部链接）

  2、在 C23 标准中，constexpr 说明符用于声明常量对象，而这些常量对象的初始值设定项（initializer）必须在编译时进行检查，确保它们是常量表达式
  此外，对于浮点类型的常量，这些初始值设定项必须在编译时使用 translation-time floating-point 环境进行评估

  编译时检查常量表达式 常量表达式 是在编译时就能确定其值的表达式。对于 constexpr 对象，其初始值设定项必须是常量表达式，这意味着编译器在编译时会对其进行检查，以确保这些值是确定的和合法的
  constexpr int a = 10;      // 合法，10 是一个常量表达式
  constexpr int b = a + 5;   // 合法，a + 5 也是一个常量表达式
  // constexpr int c = a + unknown_var; // 非法，unknown_var 不是常量表达式
  在上面的例子中，a 和 b 的初始值都是常量表达式，因此是合法的。而 c 的初始值设定项不是常量表达式（假设 unknown_var 不是一个常量），所以是非法的

  translation-time floating-point 环境 对于浮点类型的 constexpr 对象，初始化器必须在编译时使用 translation-time floating-point 环境进行评估。translation-time floating-point 环境是一个在编译期间用于计算浮点表达式值的抽象环境。这确保了浮点计算在编译时的一致性和准确性
  constexpr double pi = 3.141592653589793;
  constexpr double area = pi * 2.0 * 2.0;     // 合法，pi * 2.0 * 2.0 是一个常量表达式
  在上述示例中，pi 和 area 的初始值都是浮点类型的常量表达式，它们在编译时通过 translation-time floating-point 环境计算得到
  在 C23 标准中，constexpr 说明符用于声明常量对象，其初始值设定项必须是常量表达式，编译器在编译时对这些表达式进行检查
  对于浮点类型的 constexpr 对象，初始值设定项必须在编译时使用 translation-time floating-point 环境进行评估。这确保了常量对象在编译时的值是固定的、合法的，并且在运行时不会被修改，从而提高了程序的可靠性和性能
  
  translation-time floating-point 环境提供了一种机制，使得编译器在编译时能够对浮点数表达式进行精确的计算。该环境的关键点包括以下几个方面：
  精度：编译器在 translation-time floating-point 环境中计算浮点数时，必须保证计算的精度不低于运行时的精度。这意味着在编译时和运行时，浮点数的计算结果应保持一致
  舍入：编译器在计算浮点表达式时，必须遵循相同的舍入规则。这确保了编译时计算结果与运行时一致
  特殊值处理：诸如无穷大（infinity）和非数（NaN, Not a Number）等特殊值在 translation-time floating-point 环境中也必须得到正确处理
  在 translation-time floating-point 环境中，所有涉及浮点数的常量表达式在编译时就被计算出来，并且这些结果在程序运行时不会改变
  
  translation-time floating-point 环境的引入有几个重要的作用：
  编译时优化：由于浮点数表达式在编译时就被计算出来，编译器可以对代码进行更多优化，从而提高运行时性能
  一致性：确保浮点数计算在编译时和运行时的一致性，避免由于不同环境下浮点数计算结果不一致导致的潜在问题
  精确性：通过在编译时进行计算，避免了某些运行时浮点数计算可能引入的误差，特别是在对浮点数精度要求较高的应用场景中
  
  3、可以使用 constexpr 声明的对象类型有一些限制，即，以下构造不允许使用 constexpr
  在 C23 标准中，constexpr 说明符用于声明常量对象，但对可以用 constexpr 声明的对象类型有一些限制。具体来说，以下几种类型的对象不能被声明为 constexpr
  指针（除非是空指针）
  constexpr int* ptr = nullptr;   // 合法，空指针可以是 constexpr
  constexpr int value = 5;
  constexpr int* ptr2 = &value;   // 非法，非空指针不能是 constexpr
  
  可变类型（Variably modified types）可变类型是指那些依赖于运行时值来确定大小的类型，如变长数组（Variable Length Arrays，VLA）
  int size = 10;
  constexpr int arr[size];        // 非法，变长数组不能是 constexpr  
  
  原子类型（Atomic types）原子类型是一种用于多线程编程的类型，通过 stdatomic.h 中的类型如 atomic_int 来声明
  #include <stdatomic.h>
  constexpr atomic_int atomicVal = ATOMIC_VAR_INIT(5); // 非法，原子类型不能是 constexpr

  易变类型（volatile types）volatile 关键字用于声明那些可能会被外部修改的变量，如硬件寄存器变量
  constexpr volatile int volatileVar = 10; // 非法，volatile 类型不能是 constexpr

  限制指针（restrict pointers）restrict 关键字用于指针，表明通过该指针访问的对象不会通过其他指针进行访问，从而允许优化
  constexpr int* restrict restrictPtr = nullptr; // 非法，restrict 指针不能是 constexpr

  指针（除非是空指针）：空指针是指向 0 地址的指针，可以是 constexpr，因为它在编译时是确定的。而非空指针指向具体的内存地址，其值在编译时不一定是确定的，因此不能是 constexpr
  可变类型（Variably modified types）：可变类型依赖于运行时的值，比如变长数组，其大小在编译时并不确定，因此不能是 constexpr
  原子类型（Atomic types）：原子类型用于多线程编程，涉及到运行时的同步和原子操作，因此不能在编译时确定其值，所以不能是 constexpr
  易变类型（volatile types）：易变类型表示变量的值可能在任何时候被外部因素改变，因此编译器不能对其进行优化和推断，不能是 constexpr
  限制指针（restrict pointers）：限制指针的用途是优化，而 constexpr 需要在编译时确定具体的值，这两者的用途和语义不兼容，因此不能是 constexpr

  在 C23 标准中，constexpr 说明符用于声明在编译时可以确定值的常量对象。上述几种类型由于其值在编译时无法确定或其用途与 constexpr 的语义不兼容，因此不能被声明为 constexpr。理解这些限制有助于正确地使用 constexpr 声明常量对象，从而优化代码的性能和可靠性  
  */
  // constexpr int number = 42;   // 合法，完全且显式初始化
  // constexpr int number = 42;
  
  // const int* ptr = &number;    // 合法，可以获取地址
  // *ptr = 10;                   // 非法，不能修改值
  
  // constexpr int a = 10;                       // 合法，10 是一个常量表达式
  // constexpr int b = a + 5;                    // 合法，a + 5 也是一个常量表达式
  
  // // constexpr int c = a + unknown_var;       // 非法，unknown_var 不是常量表达式
  
  // constexpr double pi = 3.141592653589793;
  // constexpr double area = pi * 2.0 * 2.0;     // 合法，pi * 2.0 * 2.0 是一个常量表达式
  // constexpr float f = 23.0f;
  // constexpr float g = 33.0f;
  // fesetround(FE_TOWARDZERO);
  // constexpr float h = f / g;                     // 不受上述 fesetround（） 的影响
  // printf("%f\n", h);  

#endif // CONSTEXPR_WORDS  constexpr 关键词  

  return 0;
}