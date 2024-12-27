/**
* @file              noreturn.c
* @brief             _Noreturn 函数说明符 指明函数不会返回到其调用点，Noreturn 是C11标准引入的一个关键词，用于函数声明中，表明该函数不会正常返回（即不会通过执行到 return 语句返回，也不会通过运行到函数体结尾而返回）。这类函数通常执行一些操作后终止程序，例如调用 exit 或 abort，或者通过 longjmp 返回到另一个函数
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>_Noreturn 函数说明符使用，解释说明
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>
#include <stdnoreturn.h>
#include <stdlib.h>

/**
* @brief             _Noreturn 函数说明符 指明函数不会返回到其调用点，Noreturn 是C11标准引入的一个关键词，用于函数声明中，表明该函数不会正常返回（即不会通过执行到 return 语句返回，也不会通过运行到函数体结尾而返回）。这类函数通常执行一些操作后终止程序，例如调用 exit 或 abort，或者通过 longjmp 返回到另一个函数
*
* @note              Revision History
*/
#define NORETURN_WORDS
// _Noreturn void terminate_program(const char *message) {      // 声明为 _Noreturn 的函数如果尝试返回，则行为是未定义的。这意味着程序的执行结果不可预测，可能会导致程序崩溃或产生其他不可预期的结果。因此，如果编译器能够检测到这种错误，建议编译器进行诊断和发出警告
//   print_purple("Fatal error: %s\n", message);                // 打印错误信息并终止程序
//   exit(EXIT_FAILURE);                                // 在这个示例中，terminate_program 函数被声明为 _Noreturn，并且它调用 exit 来终止程序。因此，任何调用 terminate_program 的地方，后面的代码将永远不会执行
// }
// _Noreturn void incorrect_function() {                       // 如果一个声明为 _Noreturn 的函数尝试返回（例如，执行到 return 语句或函数体的结尾），则行为未定义。编译器可能无法预测这种情况会导致什么样的结果，因此这是程序员必须避免的错误，尝试返回，这将导致未定义行为                                          
//   return;                                                 // 错误：_Noreturn 函数不应该有 return 语句
// }
// _Noreturn _Noreturn void terminate_program1(const char *message) {  // 尽管上面的示例中 _Noreturn 说明符出现了两次，但它的行为与只出现一次相同，函数 terminate_program 的行为依旧是不返回正常控制流
//   print_purple("Fatal error: %s\n", message);
//   exit(EXIT_FAILURE);
// }
// noreturn void terminate_program2(const char *message) {             // 使用 noreturn 宏 为了简化使用 _Noreturn 说明符，标准库 <stdnoreturn.h> 提供了一个名为 noreturn 的便利宏。这个宏可以提高代码的可读性，并且在不同的编译器实现中提供统一的使用方式
//   print_purple("Fatal error: %s\n", message);
//   exit(EXIT_FAILURE);
// }
// noreturn void exit_now(int i) {                                     // 在 i <= 0 时导致未定义行为 在 i > 0 时退出 或 _Noreturn void exit_now(int i)
//   if (i > 0) {
//     exit(i);
//   }
// }

/**
* @brief             _Noreturn 函数说明符 指明函数不会返回到其调用点，Noreturn 是C11标准引入的一个关键词，用于函数声明中，表明该函数不会正常返回（即不会通过执行到 return 语句返回，也不会通过运行到函数体结尾而返回）。这类函数通常执行一些操作后终止程序，例如调用 exit 或 abort，或者通过 longjmp 返回到另一个函数
* @return  int       Return Description
*
* @note              Revision History
*/
int noreturn_fn(void) {
#ifdef NORETURN_WORDS
  /*
  _Noreturn 函数
  _Noreturn 函数说明符 指明函数不会返回到其调用点，Noreturn 是C11标准引入的一个关键词，用于函数声明中，表明该函数不会正常返回（即不会通过执行到 return 语句返回，也不会通过运行到函数体结尾而返回）。这类函数通常执行一些操作后终止程序，例如调用 exit 或 abort，或者通过 longjmp 返回到另一个函数

  _Noreturn 函数语法 
  _Noreturn 函数声明	(C11起)(C23弃用)

  _Noreturn 函数解释
  1、_Noreturn 关键词出现于函数声明中，指定函数不会由于执行到 return 语句或抵达函数体结尾而返回（可能通过执行 longjmp 返回）。若声明为 _Noreturn 的函数返回，则行为未定义。若编译器能检测此错误，则推荐编译器予以诊断
  声明为 _Noreturn 的函数如果尝试返回，则行为是未定义的。这意味着程序的执行结果不可预测，可能会导致程序崩溃或产生其他不可预期的结果。因此，如果编译器能够检测到这种错误，建议编译器进行诊断和发出警告

  2、_Noreturn 说明符可以在同一函数声明中出现多于一次，行为与只出现一次相同。此说明符通常通过便利宏 noreturn 使用，该宏于头文件 <stdnoreturn.h> 提供
  在 C11 标准中，_Noreturn 说明符可以在同一函数声明中出现多于一次，而且其行为与只出现一次时相同。这意味着从功能上来说，多个 _Noreturn 并不会产生额外的效果或错误。这个特性主要是为了提升代码的灵活性和兼容性
  为了简化使用 _Noreturn 说明符，标准库 <stdnoreturn.h> 提供了一个名为 noreturn 的便利宏。这个宏可以提高代码的可读性，并且在不同的编译器实现中提供统一的使用方式

  3、Noreturn 函数说明符被弃用。应该用 [[noreturn]] 属性代替，宏 noreturn 亦被弃用(C23起)

  4、标准库下列标准库中的函数为 noreturn：
  abort()  void abort(void); abort 函数会使程序异常终止，并产生一个核心转储文件（如果系统支持的话）。该函数不会返回到调用者
  exit()   void exit(int status); exit 函数会终止当前进程，返回给操作系统一个状态码。通常会执行清理操作（如调用已注册的 atexit 函数和刷新所有打开的输出流），然后终止程序
  _Exit()  void _Exit(int status); _Exit 函数与 exit 类似，但不会执行任何清理操作（如调用 atexit 函数或刷新输出流）。它直接终止程序并将状态码返回给操作系统
  quick_exit()  void quick_exit(int status); quick_exit 函数用于快速终止程序。在终止程序之前，它会调用已注册的 at_quick_exit 函数，但不会像 exit 一样执行其他清理操作
  thrd_exit()   _Noreturn void thrd_exit(int res); thrd_exit 函数用于终止调用线程，并将返回值推送给所有加入该线程的其他线程。该函数不会返回到调用线程
  longjmp()   void longjmp(jmp_buf env, int val); longjmp 函数用于恢复到用 setjmp 保存的环境，并跳过中间的调用堆栈。虽然它技术上不是 noreturn 函数，但它不会像普通函数那样返回到调用者，而是跳转到先前的 setjmp 调用点  
  */
  // _Noreturn void terminate_program(const char *message) {        // 1、_Noreturn 是 C11 标准引入的一个关键词，用于函数声明中，表明该函数不会正常返回（即不会通过执行到 return 语句返回，也不会通过运行到函数体结尾而返回）。这类函数通常执行一些操作后终止程序，例如调用 exit 或 abort，或者通过 longjmp 返回到另一个函数
  //   printf("Fatal error: %s\n", message);                        // 打印错误信息并终止程序
  //   exit(EXIT_FAILURE);                                          // 无 return
  // }
  //
  //
  // terminate_program("Something went terribly wrong!");           // 调用 terminate_program 函数，程序将在这里终止，_Noreturn 关键词用于声明函数不会正常返回到调用者，典型的例子包括调用 exit、abort 或通过 longjmp 跳转到另一个函数
  // printf("This will never be printed\n");                        // 这一行代码永远不会被执行
  //                                
  // _Noreturn void incorrect_function() {                          // 行为未定义的情况
  //   // 尝试返回，这将导致未定义行为                                   // 如果一个声明为 _Noreturn 的函数尝试返回（例如，执行到 return 语句或函数体的结尾），则行为未定义。编译器可能无法预测这种情况会导致什么样的结果，因此这是程序员必须避免的错误
  //   return; // 错误：_Noreturn 函数不应该有 return 语句
  // }
  // incorrect_function();                                          // 调用不正确的 _Noreturn 函数，在这个示例中，incorrect_function 函数尝试返回，这是错误的，因为它声明为 _Noreturn。这种情况下，程序的行为是未定义的，可能导致程序崩溃或其他不可预期的结果。如果编译器能够检测到这个错误，理想情况下应该发出诊断信息或警告
  // printf("This may or may not be printed\n");                    // 这行代码的行为不可预测，因为 _Noreturn 函数不应该返回

  // _Noreturn _Noreturn void terminate_program1(const char *message) {  // 2、尽管上面的示例中 _Noreturn 说明符出现了两次，但它的行为与只出现一次相同，函数 terminate_program 的行为依旧是不返回正常控制流
  //   print_purple("Fatal error: %s\n", message);
  //   exit(EXIT_FAILURE);
  // }
  // noreturn void terminate_program2(const char *message) {             // 使用 noreturn 宏 为了简化使用 _Noreturn 说明符，标准库 <stdnoreturn.h> 提供了一个名为 noreturn 的便利宏。这个宏可以提高代码的可读性，并且在不同的编译器实现中提供统一的使用方式
  //   print_purple("Fatal error: %s\n", message);
  //   exit(EXIT_FAILURE);
  // }
  // exit_now(2);
  // print_purple("exit_now error: %s\n", "exit_now not execute!");  

#endif // NORETURN_WORDS  noreturn 关键词  

  return 0;
}