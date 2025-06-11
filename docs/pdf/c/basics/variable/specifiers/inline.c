/**
* @file              inline.c
* @brief             内联函数(C99起)inline，inline 说明符在 C 和 C++ 中用于提示编译器将函数进行内联优化。内联函数的主要目的是通过将函数调用替换为函数体，从而减少函数调用的开销（如将参数置于栈上和从函数返回结果），以提高程序的运行效率。然而，内联函数也有可能导致可执行文件增大，因为函数体可能会在多个调用点被重复展开
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>声明内联函数 inline 函数声明(C99起)，解释说明
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdio.h>

/**
* @brief             inline 说明符的目的是提示编译器做优化，譬如函数内联，这通常要求编译方能见到函数的定义。编译器能（并且经常）就优化的目的忽略 inline 说明符的存在与否，若编译器进行函数内联，则它会以函数体取代所有对它的调用，以避免函数调用的开销（将数据置于栈上和取得结果），这可能会生成更大的可执行文件，因为函数可能会被重复多次。结果同仿函数宏，只是用于该函数的标识符和宏指代可见于定义点的定义，而不指代调用点的定义
*
* @note              inline 说明符在 C 和 C++ 中用于提示编译器将函数进行内联优化。内联函数的主要目的是通过将函数调用替换为函数体，从而减少函数调用的开销（如将参数置于栈上和从函数返回结果），以提高程序的运行效率。然而，内联函数也有可能导致可执行文件增大，因为函数体可能会在多个调用点被重复展开
*/
#define INLINE_WORDS
inline int addinl(int a, int b) {         // addinl 内联函数 add 函数被标记为 inline。编译器可能会将 add(2, 3) 替换为 2 + 3，从而避免实际的函数调用
  return a + b;
}
#define ADDDEF(a, b) ((a) + (b))          // ADDDEF 宏定义 在预处理阶段展开为 ((2) + (3))。虽然效果类似于内联函数，但没有类型检查和作用域规则

static inline int add(int a, int b) {     // 内部链接的内联函数，拥有内部链接，可以声明为 static inline，没有其他限制，保证该函数在定义它的翻译单元内部可见
  return a + b;
} 
inline int multiply(int a, int b) {       // 非 static 的内联函数（不涉及局部 static 对象或文件作用域的 static 对象）
  return a * b;                           // 非 static 的内联函数，不能定义非 const 的函数局部 static 对象，不能使用文件作用域的 static 对象
}
inline int increment(int val) {           // 非 static 的内联函数，不能定义非 const 的函数局部 static 对象，不能使用文件作用域的 static 对象
  const static int increment_value = 1;   // 合法，合法的局部 const static 对象
  return val + increment_value;
}

/**
* @brief             inline 说明符的目的是提示编译器做优化，譬如函数内联，这通常要求编译方能见到函数的定义。编译器能（并且经常）就优化的目的忽略 inline 说明符的存在与否，若编译器进行函数内联，则它会以函数体取代所有对它的调用，以避免函数调用的开销（将数据置于栈上和取得结果），这可能会生成更大的可执行文件，因为函数可能会被重复多次。结果同仿函数宏，只是用于该函数的标识符和宏指代可见于定义点的定义，而不指代调用点的定义
* @return  int       Return Description
*
* @note              Revision History
*/
int inline_fn(void) {
#ifdef INLINE_WORDS
  /*
  内联函数(C99起)inline
  声明内联函数 inline 函数声明(C99起)

  内联函数解释 
  inline 说明符的目的是提示编译器做优化，譬如函数内联，这通常要求编译方能见到函数的定义。编译器能（并且经常）就优化的目的忽略 inline 说明符的存在与否，若编译器进行函数内联，则它会以函数体取代所有对它的调用，以避免函数调用的开销（将数据置于栈上和取得结果），这可能会生成更大的可执行文件，因为函数可能会被重复多次。结果同仿函数宏，只是用于该函数的标识符和宏指代可见于定义点的定义，而不指代调用点的定义
  inline 说明符在 C 和 C++ 中用于提示编译器将函数进行内联优化。内联函数的主要目的是通过将函数调用替换为函数体，从而减少函数调用的开销（如将参数置于栈上和从函数返回结果），以提高程序的运行效率。然而，内联函数也有可能导致可执行文件增大，因为函数体可能会在多个调用点被重复展开
  
  内联函数的工作机制
  提示编译器进行优化 inline 说明符提示编译器尝试将函数进行内联优化，但编译器可以根据实际情况选择是否执行该优化。即使函数被标记为 inline，编译器也可能忽略这个提示
  减少函数调用开销 内联函数可以减少参数传递和返回值的开销，因为编译器将函数体直接插入到函数调用点，而不是进行实际的函数调用。这避免了参数压栈和跳转的开销
  潜在的代码膨胀 由于内联函数在每个调用点都直接插入函数体，可能导致生成的可执行文件变大。特别是当内联函数体较大且被多次调用时，这个问题会更加明显

  内联函数与宏的对比
  内联函数：
  内联函数的实现与普通函数类似，具有类型检查和作用域规则
  编译器在内联函数调用点插入函数体，从而避免函数调用开销
  内联函数定义必须在其调用之前可见，这通常要求将内联函数的定义放在头文件中  
  宏定义：
  宏使用预处理器进行文本替换，没有类型检查，只是简单的文本替换
  宏定义通常在调用点展开，类似于内联函数，但不具备函数的语义和作用域规则
  宏可能会带来不易察觉的错误，例如多次求值的问题

  1、编译器的行为
  即使使用了 inline 说明符，编译器仍然有自由决定是否进行内联优化
  函数体的大小：较大的函数体可能不会被内联，以避免代码膨胀
  调用频率：频繁调用的小函数更有可能被内联
  优化级别：编译器优化选项（例如 -O2 或 -O3）会影响内联决策
  函数的复杂性：复杂的函数可能不会被内联，因为内联可能不会带来显著的性能提升

  不管是否进行内联，内联函数都保证下列语义：任何拥有内部链接的函数都可以声明成 static inline，没有其他限制，一个非 static 的内联函数不能定义一个非 const 的函数局部 static 对象，并且不能使用文件作用域的 static 对象
  2、static 内部链接的内联函数：
  static inline 函数 任何拥有内部链接（internal linkage）的函数都可以声明为 static inline，没有其他限制。内部链接意味着该函数只能在定义它的翻译单元（通常是一个源文件）中访问、使用 static inline 可以确保内联函数在编译单元内部是可见的，不会与其他翻译单元中的同名函数冲突
  3、非 static 内联函数的限制：
  局部 static 对象 一个非 static 的内联函数不能定义一个非 const 的函数局部 static 对象。这是因为局部 static 对象在函数的多次调用中保持其状态，但在内联函数的上下文中，编译器可能会在多个调用点生成多个实例，从而导致状态不一致
  文件作用域的 static 对象 非 static 的内联函数不能使用文件作用域的 static 对象。这是因为文件作用域的 static 对象在整个文件中共享，但内联函数可能会在多个翻译单元中内联，导致对这些对象的多次定义和引用，破坏了 static 对象的唯一性

  4、若非 static 函数声明为 inline ，则必须在同一翻译单元中定义它。不使用 extern 的内联定义不会对外部可见，而且不会阻止其他翻译单元定义同一函数。这使得 inline 关键词成了 static 外另一种在头文件定义函数的方式，可以由同一程序的多个翻译单元包含该头文件，
  内联函数的定义要求 非 static 的内联函数必须在声明它的同一翻译单元中定义
  内联定义的可见性 如果内联函数的定义不使用 extern 关键字，则不会对外部翻译单元可见，而且不会阻止其他翻译单元定义同名函数
  在头文件中的内联函数 使用 inline 关键字可以作为 static 的替代方式，将函数定义放在头文件中，允许多个翻译单元包含该头文件而不会引发重定义错误

  5、若函数在一些翻译单元中声明为 inline ，它就不需要在处处皆声明为 inline ：至多一个单元会提供常规的非 inline 非 static 函数，或是声明为 extern inline 的函数。称此翻译单元提供外部定义。为避免未定义行为，若在表达式中使用拥有外部链接的函数名，则程序中必须存在一个外部定义，见唯一定义规则
  如果在某些翻译单元中将函数声明为inline，则它不需要在所有地方都声明为inline：最多一个翻译单元还可以提供一个常规的、非内联的非静态函数，或者一个声明为extern inline的函数。这个翻译单元被称为提供_外部定义_。为了避免未定义行为，如果在表达式中使用具有外部链接的函数名称，则程序中必须存在一个外部定义，参见单一定义规则？
  
  在C中，内联函数（inline）可以在多个翻译单元中定义而不会导致链接错误。这是因为内联函数的定义通常会在使用该函数的每个翻译单元中生成一份独立的拷贝。但是，为了确保一个具有外部链接的函数（即在多个翻译单元中可见的函数）遵循唯一定义规则（One Definition Rule, ODR），需要特别注意以下几点
  唯一定义规则 (ODR) ODR要求在整个程序中，具有外部链接的函数或变量必须在且仅在一个翻译单元中拥有一个定义。内联函数略有不同，允许在不同翻译单元中有多个相同定义的副本，但需要确保这些定义是相同的
  外部定义的需求 如果一个函数在某些翻译单元中声明为 inline，并且在其他翻译单元中被调用，那么为了避免未定义行为，必须确保该函数在某个翻译单元中有一个外部定义。这可以通过在一个翻译单元中提供一个常规的非 inline 定义或者一个 extern inline 定义来实现
  
  内联函数的定义 可以在多个翻译单元中存在，只要这些定义是相同的
  外部定义 是必要的，如果函数在某些地方声明为 inline 并且在其他地方使用，以避免未定义行为
  extern inline 可以用来提供一种方式，在一个地方定义内联函数，同时在另一个地方提供外部定义，以满足链接器的需求

  6、内联函数的地址始终是外部定义的地址，但当以此地址进行函数调用时，调用内联定义（若存在于翻译单元中）还是外部定义是未指定的。定义于内联定义中的 static 对象与定义于外部定义中的 static 对象有别
  具有外部链接的内联函数的地址始终是外部定义的地址，但是当使用这个地址进行函数调用时，未指定是调用（如果在翻译单元中存在）内联定义还是外部定义。在内联定义中定义的静态对象与在外部定义中定义的静态对象不同
  
  这个问题涉及到内联函数、静态变量和链接的行为。在C和C++中，内联函数可以在多个翻译单元中定义，并且每个翻译单元可以有自己的副本。然而，内联函数的行为以及其内部静态变量的作用范围可能会导致一些复杂的情况
  内联函数的地址和调用行为 内联函数的地址始终是外部定义的地址，但当通过该地址进行函数调用时，实际调用的是内联定义还是外部定义是未指定的。这意味着编译器可以选择调用在当前翻译单元中内联定义的函数，也可以选择调用外部定义的函数。这种行为在标准中是未指定的
  静态变量在内联函数中的行为 每个内联函数的定义有其独立的静态变量副本。这意味着如果一个内联函数在一个翻译单元中定义并调用，其内部的静态变量是独立于其他翻译单元中相同内联函数定义的静态变量的

  内联函数允许在多个翻译单元中定义，并且每个内联定义都可以有自己的静态变量副本
  外部定义确保整个程序中有一个单一的函数定义，用于满足链接器的需求
  未指定行为意味着编译器可以选择调用内联定义或外部定义，这可能导致不同的结果，特别是当函数内部有静态变量时

  7、C 程序不应该依赖于调用的是函数的内联版本还是外部版本，否则其行为是未定义的，即在C语言中，内联函数和外部定义的函数都有各自的使用场景和优势。然而，程序不应该依赖于调用的是内联版本还是外部版本的函数。这样做会导致未定义行为
  内联函数与外部定义的函数
  内联函数：使用 inline 关键字定义、编译器会尽量在调用点直接插入函数代码，以减少函数调用的开销、可以在多个翻译单元中定义
  外部定义的函数：在一个翻译单元中有一个具体的实现、链接器会确保整个程序中只有一个这样的定义

  未定义行为的原因：未定义行为（Undefined Behavior, UB）是指程序的行为无法预测，可能会因编译器、编译选项、运行环境等的不同而有所变化。当程序依赖于调用的是内联版本还是外部版本时，行为可能是未定义的，原因如下
  编译器优化与选择：编译器可能会根据优化级别和其他因素决定是否将内联函数展开为内联代码，或者调用外部定义的函数、这种选择在不同的编译器或相同编译器的不同版本中可能有所不同
  静态变量的作用域：内联函数和外部定义函数中定义的静态变量是独立的、调用不同版本的函数可能导致访问不同的静态变量实例，从而引发未定义行为
  
  C程序不应该依赖于内联版本还是外部版本的函数调用，否则会导致未定义行为。确保程序行为一致性的最佳实践是：避免在内联函数中定义静态变量，或者确保内联函数的行为与外部定义函数的行为保持一致、明确控制函数调用，不要在同一程序中同时定义内联和外部版本的函数，以避免编译器选择不同版本带来的不确定性
  
  8、内联函数生效：
  inline只有在开启编译器优化选项时才会生效
  
  C语言原本是不支持inline的，但C++中原生对inline的支持让很多C编译器也为C语言实现了一些支持inline语义的扩展。C99将inline正式放入到标准C语言中，并提供了inline关键字。和C++中的inline一样，C99的inline也是对编译器的一个提示，提示编译器尽量使用函数的内联定义，去除函数调用带来的开销
  
  在C中，inline关键字是从C++吸收而来的，它允许编译器在函数调用点插入函数体代码而不是进行普通的函数调用。这可以减少函数调用的开销，提高性能
  C中的内联函数有以下特点和限制
  内联函数的定义可以在多个翻译单元中有所不同：不同翻译单元中的内联函数定义可以有所不同，但如果程序依赖这些差异，其行为是未指定的。这意味着程序的结果可能因编译器、优化级别等因素而不同
  局部静态变量是独立的：在C中，每个内联函数的定义都有自己的局部静态变量实例，即使这些实例在不同的翻译单元中出现，这意味着不同翻译单元中的同一个内联函数的不同定义，它们的局部静态变量是相互独立的
  C++ 中的 inline 关键字有更严格和明确的要求
  相同的定义要求：在C++中，内联函数必须在每一个翻译单元中声明为inline，而且每一个内联函数的定义必须完全相同。这确保了编译器能够在所有翻译单元中一致地处理内联函数
  局部静态变量的行为：C++允许内联函数中定义非const的局部静态变量，而且所有来自一个内联函数不同定义版本的局部静态变量都是相同的，这意味着在所有翻译单元中，内联函数的局部静态变量是共享的，且只有一个实例  
  */
  int resultinl = addinl(2, 3);               // 1、对内联函数的调用，编译器可能会将 add(2, 3) 替换为 2 + 3，从而避免实际的函数调用
  print_purple("Result: %d\n", resultinl);
  int resultdef = ADDDEF(2, 3);                    // 宏展开为 ((2) + (3))
  print_purple("Result: %d\n", resultdef);     

  int resultadd = add(2, 3);                  // 2、static inline 函数 拥有内部链接，可以声明为 static inline，没有其他限制，保证该函数在定义它的翻译单元内部可见
  print_purple("resultadd: %d\n", resultadd); 
  
  int resultmultiply = multiply(2, 3);        // 3、非 static 内联函数的限制 不能定义非 const 的函数局部 static 对象，不能使用文件作用域的 static 对象
  print_purple("resultmultiply: %d\n", resultmultiply); 
  int resultincrement = increment(3);
  print_purple("resultincrement: %d\n", resultincrement);

  // inline void myFunction() {                // 3、非 static 内联函数的限制 一个非 static 的内联函数不能定义一个非 const 的函数局部 static 对象。这是因为局部 static 对象在函数的多次调用中保持其状态，但在内联函数的上下文中，编译器可能会在多个调用点生成多个实例，从而导致状态不一致
  //   static int counter = 0;                 // 非法，非 static 的内联函数不能定义非 const 的局部 static 对象
  // }
  // static int fileScopeVar = 0;              // 文件作用域的 static 对象
  // inline void myFunction() {                // 非 static 的内联函数不能使用文件作用域的 static 对象。这是因为文件作用域的 static 对象在整个文件中共享，但内联函数可能会在多个翻译单元中内联，导致对这些对象的多次定义和引用，破坏了 static 对象的唯一性
  //     fileScopeVar++;                       // 非法，非 static 的内联函数不能使用文件作用域的 static 对象
  // }

  // // my_header.h                            // 4、若非 static 函数声明为 inline ，则必须在同一翻译单元中定义它
  // inline int add(int a, int b) {            // 非 static 内联函数的定义要求 同一翻译单元中的定义
  //   return a + b;                           // 如果一个非 static 函数声明为 inline，则必须在同一个翻译单元（通常是一个源文件及其包含的头文件）中定义它
  // }                                         // 翻译单元是编译器在编译时处理的基本单位，通常由一个源文件及其包含的所有头文件构成
  // // main.c                                 // 也就是说，当你在一个源文件中使用一个内联函数时，这个函数的定义必须出现在包括该源文件的头文件中
  // #include "my_header.h"                    // 包含头文件，add 函数被声明和定义在 my_header.h 头文件中，并在 main.c 中被包含和使用。编译器在编译 main.c 时，将看到 add 函数的定义
  // int main() {
  //   int result = add(2, 3);                 // 使用内联函数
  //   return 0;
  // }
  
  // // my_header.h                            // 内联定义的可见性 不使用 extern 的内联定义
  // inline int subtract(int a, int b) {       // 如果一个内联函数的定义不使用 extern 关键字，则这个定义不会对外部翻译单元可见
  //   return a - b;                           // 这意味着每个包含该函数定义的翻译单元都可以有自己的版本，而不会与其他翻译单元冲突
  // }                                         // 多个翻译单元可以包含 my_header.h，每个翻译单元都会有自己的 subtract 函数版本，而不会引起重定义错误

  // // my_header.h                            // 内联函数在头文件中的使用
  // inline int multiply(int a, int b) {       // inline 作为 static 的替代
  //   return a * b;                           // inline 关键字可以作为 static 关键字的另一种方式来在头文件中定义函数、使用 inline 关键字可以允许同一程序的多个翻译单元都包含该头文件，而不会引发重定义错误
  // }                                         // multiply 函数被声明和定义在头文件 my_header.h 中，多个翻译单元（main.c 和 another_file.c）都可以包含这个头文件并使用 multiply 函数，而不会引发重定义错误
  // // main.c
  // #include "my_header.h"                    // 包含头文件
  // int main() {
  //   int result = multiply(2, 3);            // 使用内联函数
  //   return 0;
  // }
  // // another_file.c
  // #include "my_header.h"                    // 再次包含头文件
  // void another_function() {
  //   int result = multiply(4, 5);            // 再次使用内联函数
  // }

  // 头文件 functions.h                         // 5、外部定义的需求 假设有一个内联函数 addinl，可以在多个翻译单元中声明并定义在这种情况下，每个包含 functions.h 的翻译单元都会有 addinl 函数的定义。这是合法的，因为 addinl 是一个内联函数
  // #ifndef FUNCTIONS_H                       // 尽管在 main.c 和 other.c 中有内联定义，extern_def.c 提供了一个外部定义，符合唯一定义规则
  // #define FUNCTIONS_H
  // inline int addinl(int a, int b) {
  //   return a + b;
  // }
  // #endif // FUNCTIONS_H
  // 
  // 源文件 main.c
  // #include <stdio.h>
  // #include "functions.h"
  // int main() {
  //   int result = addinl(2, 3);
  //   printf("Result: %d\n", result);
  //   return 0;
  // }
  //
  // 源文件 other.c
  // #include "functions.h"
  // void another_function() {
  //   int result = addinl(4, 5);
  //   // 其他代码
  // }
  // 源文件 extern_def.c                         // 然而，如果你在某些地方需要一个外部定义（即一个非内联的实例），可以在一个翻译单元中提供一个常规的非 inline 定义
  // int addinl(int a, int b) {                 // 非 inline 定义
  //   return a + b;
  // }  
  //
  // 头文件 functions.h                          // 5、使用 extern inline 的情况，extern inline 允许函数在一个地方定义为内联，但仍然需要一个外部定义来满足链接器要求
  // #ifndef FUNCTIONS_H
  // #define FUNCTIONS_H
  // extern inline int addinl(int a, int b) {
  //   return a + b;
  // }
  // #endif // FUNCTIONS_H
  // 源文件 extern_def.c                         // 在这个例子中，extern inline 声明告诉编译器这个函数可以内联，但也会有一个单独的外部定义（在 extern_def.c 中）
  // int addinl(int a, int b) {                 // 外部定义
  //   return a + b;
  // }

  // // saddr.h                                 // 6、内联定义：在 saddr.h 中，定义了一个内联函数 saddr，它返回一个静态字符串指针 name
  // #ifndef SADDR_H                            // 内联函数的定义包含一个静态变量 name，每个包含这个头文件的翻译单元都会有自己独立的 name 变量副本
  // #define SADDR_H
  // inline const char *saddr(void) {
  //   static const char name[] = "saddr";
  //   return name;
  // }
  // #endif // SADDR_H
  //
  // // saddr.c                                 // 外部定义：在 saddr.c 中，我们提供了一个外部定义的 saddr 函数，该函数返回另一个静态变量 name
  // #include "saddr.h"                         // 这个外部定义确保了整个程序中至少有一个 saddr 函数的单一定义，满足链接器的需求
  // extern const char *saddr(void);
  // const char *saddr(void) {
  //   static const char name[] = "saddr";
  //   return name;
  // }
  //
  // // main.c                                  // 调用行为：当 compare_name() 函数调用 saddr() 时，编译器可能会选择调用内联定义的 saddr，也可能选择调用外部定义的 saddr
  // #include <stdio.h>                         // 因此，两个 saddr() 调用可能会调用同一个内联定义的函数，也可能会分别调用内联定义和外部定义的函数，这种行为是未指定的，这意味着结果可能因编译器和优化级别的不同而异
  // #include "saddr.h"                         // 静态变量的差异：如果调用的是同一个内联定义的 saddr 函数，返回的静态变量 name 是同一个，如果调用的是一个内联定义和一个外部定义的 saddr 函数，返回的静态变量 name 是不同的。这意味着 compare_name() 中的两个 saddr() 调用可能返回不同的指针地址，导致返回值为 0（即 false）
  // int compare_name(void) {
  //   return saddr() == saddr();               // 未指定行为，调用可能是外部的
  // }
  // int main(void) {
  //   printf("Comparison result: %d\n", compare_name());
  //   return 0;
  // }

  // 头文件 functions.h                          // 7、内联与外部定义的冲突：
  // #ifndef FUNCTIONS_H                        // functions.h 中定义了一个内联函数 add，包含一个静态变量 counter
  // #define FUNCTIONS_H                        // functions.c 中定义了一个外部函数 add，也包含一个静态变量 counter
  // inline int add(int a, int b) {
  //   static int counter = 0;
  //   counter++;
  //   return a + b + counter;
  // }
  // #endif // FUNCTIONS_H
  //
  // 源文件 functions.c
  // #include "functions.h"
  // int add(int a, int b) {
  //   static int counter = 0;
  //   counter++;
  //   return a + b + counter;
  // }
  //
  // 源文件 main.c                               // 未定义行为的来源
  // #include <stdio.h>                         // 在 main.c 中，add(1, 2) 的调用既可能调用内联定义的 add，也可能调用外部定义的 add
  // #include "functions.h"                     // 如果编译器选择调用内联版本，静态变量 counter 在每个翻译单元中都是独立的，两个调用可能使用不同的 counter
  // extern int add(int a, int b);              // 如果编译器选择调用外部版本，所有调用将使用 functions.c 中的 counter
  // int main() {                               // 因此，程序的行为依赖于编译器的选择，从而导致未定义行为
  //   printf("%d\n", add(1, 2));
  //   printf("%d\n", add(1, 2));               // C程序不应该依赖于内联版本还是外部版本的函数调用，否则会导致未定义行为。确保程序行为一致性的最佳实践如下，通过遵循这些原则，可以避免未定义行为，确保程序在不同编译环境下具有一致的行为
  //   return 0;                                // 避免在内联函数中定义静态变量，或者确保内联函数的行为与外部定义函数的行为保持一致
  // }                                          // 明确控制函数调用，不要在同一程序中同时定义内联和外部版本的函数，以避免编译器选择不同版本带来的不确定性

  // // 头文件 "test.h"                          // 8、这个头文件定义了一个内联函数 sum，它接受两个整数参数，并返回它们的和。
  // #ifndef TEST_H_INCLUDED
  // #define TEST_H_INCLUDED
  // inline int sum(int a, int b) {
  //   return a + b;
  // }
  // #endif
  //
  // 源文件 "sum.c"                              // 这个源文件包含了头文件 test.h，同时使用 extern inline 声明了 sum 函数。这个声明告诉编译器这是一个外部内联函数的定义，确保链接器能够找到它
  // #include "test.h"
  // extern inline int sum(int a, int b);       // 提供外部定义
  // 
  // 源文件 "test1.c"                            // 这个源文件包含了头文件 test.h，并声明了一个外部函数 f。在 main 函数中，它调用了 sum 函数和 f 函数，并将它们的结果相加后打印出来
  // #include <stdio.h>
  // #include "test.h"
  // extern int f(void);
  // int main(void) {
  //   printf("%d\n", sum(1, 2) + f());
  // }
  // 
  // 源文件 "test2.c"                            // 这个源文件包含了头文件 test.h，并定义了 f 函数。在 f 函数中，它调用了 sum(3, 4) 并返回结果
  // #include "test.h"
  // int f(void) {
  //   return sum(3, 4);
  // }                                          // 这个示例展示了如何在 C 中使用 inline 函数，并通过 extern inline 提供一个外部定义以确保链接器可以找到该函数的实现，减少函数调用开销：在使用 inline 的地方，编译器可以将函数代码直接插入调用点，减少函数调用的开销，确保定义一致：通过在一个源文件中提供 extern inline 定义，确保了函数的定义在整个程序中是一致的

#endif // INLINE_WORDS  inline 关键词  

  return 0;
}