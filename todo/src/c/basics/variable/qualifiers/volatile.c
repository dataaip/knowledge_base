/**
* @file              volatile.c
* @brief             volatile 类型限定符，C 类型系统中的每个单独类型都有该类型的多个限定版本，对应于 const、volatile 中的一个、两个或全部三个，对于指向对象类型的指针，restrict 限定符。本节介绍 volatile 限定符的效果
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>volatile 类型限定符使用、说明和解释
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

/**
* @brief             关于 volatile 限定符的基本作用 在 C 和 C++ 语言中，volatile 是一个类型限定符，它主要用于告诉编译器，被它修饰的对象（通常是变量等左值表达式所代表的对象）具有一些特殊的、易变的性质，其值可能会在程序控制流之外被改变，比如可能被硬件（像外部设备寄存器等情况）或者其他并发执行的线程（在多线程环境下）修改
*
* @note              在 C 或 C++ 中，volatile 关键字被用来防止编译器对其修饰的变量进行优化，从而确保程序在每次访问该变量时（无论是读取还是写入）都直接进行内存操作。这对于某些硬件寄存器或多线程编程中特殊的内存位置是非常重要的 
*/
#define VOLATILE_WORDS

/**
* @brief             C 类型系统中的每个单独类型都有该类型的多个限定版本，对应于 const、volatile 中的一个、两个或全部三个，对于指向对象类型的指针，restrict 限定符。本节介绍 volatile 限定符的效果
* @return  int       Return Description
*
* @note              Revision History
*/
int volatile_fn(void) {
#ifdef VOLATILE_WORDS
  /*
  volatile 类型限定符
  C 类型系统中的每个单独类型都有该类型的多个限定版本，对应于 const、volatile 中的一个、两个或全部三个，对于指向对象类型的指针，restrict 限定符。本节介绍 volatile 限定符的效果
  关于 volatile 限定符的基本作用 在 C 和 C++ 语言中，volatile 是一个类型限定符，它主要用于告诉编译器，被它修饰的对象（通常是变量等左值表达式所代表的对象）具有一些特殊的、易变的性质，其值可能会在程序控制流之外被改变，比如可能被硬件（像外部设备寄存器等情况）或者其他并发执行的线程（在多线程环境下）修改
  在 C 或 C++ 中，volatile 关键字被用来防止编译器对其修饰的变量进行优化，从而确保程序在每次访问该变量时（无论是读取还是写入）都直接进行内存操作。这对于某些硬件寄存器或多线程编程中特殊的内存位置是非常重要的

  1、通过 volatile 限定类型的左值表达式进行的每次访问（读取和写入）都被视为用于优化的可观察副作用，并严格根据抽象机器的规则进行评估（即，所有写入都在下一个序列点之前的某个时间完成）。这意味着在单个执行线程中，无法相对于另一个可见的副作用（由 sequence point 与 volatile 访问分开）优化或重新排序 volatile 访问
  可观察的副作用：对 volatile 变量的每一次访问（无论是读取还是写入）都被视为一个可观察的副作用。这意味着这些访问不会被编译器优化掉，因为它们被认为是对程序行为有实际影响的操作
  严格的评估顺序：根据抽象机器（即标准规定的行为模型）的规则，所有对 volatile 变量的写入操作必须在下一个序列点（sequence point）之前完成。换句话说，编译器不能随意重新排序这些操作
  单线程中的顺序保证：在单个线程的执行过程中，volatile 变量的访问顺序不能被重新排序到另一个可见的副作用之前或之后，除非有明确的序列点将它们分开
  
  访问和优化：volatile 修饰的变量在每次访问时都被视为有可观察的副作用，这意味着编译器不应该对这些访问进行优化（如缓存，寄存器替换等），确保每次访问都是直接从内存读取或写入
  序列点：序列点是 C/C++ 中定义的一个概念，表示在某些关键位置，所有的副作用（包括修改和读取）都应该在下一步之前完成。通常来说，一个序列点确保前面的所有操作都完成，后面的操作才开始
  单线程环境中的顺序保证：在单线程环境下，每个 volatile 访问（读取或写入）都会严格按程序中定义的顺序执行，而不会被编译器重新排序

  2、将 非 volatile 值强制转换为 volatile 类型不起作用。要使用 volatile 语义访问非 volatile 对象，必须将其地址强制转换为指向 volatile 的指针，然后必须通过该指针进行访问
  如果你有一个非 volatile 的变量，你不能简单地通过类型转换将其转换成 volatile 类型来获得 volatile 的语义。这是因为 volatile 的语义不仅仅涉及到变量的类型，还涉及到编译器对该变量的访问处理方式，正确的方法是通过一个指向 volatile 的指针来访问这个变量，编译器会知道对该变量的访问需要按照 volatile 的语义进行处理

  3、任何通过 非 volatile 左值读取或写入其类型符合 volatile 条件的对象的行为都会导致 undefined 行为
  如果一个对象被声明为 volatile，但是你通过一个非 volatile 的左值（变量或指针）来访问它，编译器可能会对这种访问进行优化，结果可能会导致未定义行为。未定义行为意味着程序的行为无法预测，可能会导致程序崩溃或其他不可预见的问题

  volatile 限定结构体联合体
  4、volatile 限定结构或联合类型的成员将获得其所属类型的限定（使用 . 运算符或 -> 运算符访问时）

  volatile 限定数组
  5、若以 volatile 类型限定符声明数组类型（通过使用 typedef），则数组类型无 volatile 限定，但其元素类型有(C23前)，从 C23 起 始终认为数组类型与其元素类型同等地拥有 volatile 限定 (C23起)

  volatile 限定函数
  6、若函数类型声明具有 volatile 类型限定（通过使用 typedef），则行为未定义，类同 const
  7、在函数声明中，关键词 volatile 可以出现于用以声明数组类型的函数形参的方括号内。它对数组所转换得的指针类型赋予限定，类同 const

  volatile 限定指针
  8、指向非 volatile 类型的指针可以隐式转换成指向同一或兼容类型的 volatile 限定版本的指针。逆向转换需要使用转型表达式进行
  9、注意指向 T 的指针的指针不可转换成指向 volatile T 的指针的指针；对于要兼容的两个类型，它们的限定必须相同，即 指向 char* 的指针 不可转为指向 volatile char* 的指针

  volatile 的用法
  10、static volatile 对象模仿映射于内存的 I/O 端口，而 static const volatile 对象模仿映射于内存的输入端口，例如实时时钟，volatile 关键字用于指示编译器，不要优化访问 ttyport 指针指向的内存位置。也就是说，每次访问 *ttyport 都应该直接访问内存地址 TTYPORT_ADDR，而不是使用缓存的值。这种用法通常用于硬件寄存器或 I/O 端口
  11、sig_atomic_t 类型的 static volatile 对象用于与 signal 处理函数交流，当处理信号时，信号处理函数可能会在异步执行的环境中访问某些变量。使用 volatile 和 sig_atomic_t 类型可以确保这些变量在信号处理函数中正确地被读取和写入
  12、含有对 setjmp 宏调用的函数中的局部 volatile 变量，是在 longjmp 返回后仅有保证恢复其值的局部变量，在使用 setjmp 和 longjmp 时， volatile 关键字可以保证在 longjmp 返回后，局部变量的值能够被正确恢复
  13、volatile 变量可用于禁用某些优化形式，例如禁用死存储消除，或为微基准测试禁用常量折叠，volatile 变量可以防止编译器对代码进行某些优化，例如死存储消除或常量折叠。这在编写低级代码或进行微基准测试时尤为重要
  14、volatile 变量不适合线程间交流；它们不提供原子性、同步或内存定序。读取一个被另一线程未经同步地修改的 volatile 变量，或两个未同步的线程的共时修改，对于一些数据竞争是未定义行为
  
  多线程 lock-free 问题 
  volatile、原子类型 
  memory order/memory barrier/内存栅栏/屏障、编译器的指令重排、CPU 的指令重排（乱序执行）
  */
  volatile bool flagv = false;  // 1、volatile bool flag 表示 flag 是一个可能被外部因素（比如另一个线程或硬件中断）修改的变量
  // void set_flag() {          // 在 check_flag() 函数中，编译器不能对 while (!flag) 循环进行优化，必须每次都从内存读取 flag 的值，以确保当另一个线程调用 set_flag() 将 flag 设为 true 时，check_flag() 能够检测到这一变化
  //   flag = true;             // 如果没有使用 volatile 关键字，编译器可能会优化 while (!flag) 循环，将 flag 的值缓存到寄存器中。这意味着 flag 的变化可能不会被检测到，导致 check_flag() 无限循环
  // }                          // 在多线程编程中，volatile 关键字可以确保一个线程对变量的修改对另一个线程来说是可见的。虽然 volatile 不能保证线程安全（需要结合锁或其它同步机制），但它能保证每次访问变量时都读取最新的值
  // void check_flag() {        // volatile 关键字防止编译器对变量访问进行优化，从而确保每次访问都会直接操作内存中的值。这对于变量可能在程序之外被修改的情况（如多线程环境或硬件寄存器）尤为重要。通过使用 volatile，我们保证了程序的正确性和可预见性，即使在复杂的并发或硬件交互环境中也是如此
  //   while (!flag) {
  //     // 等待 flag 变为 true
  //   }
  //   printf("Flag is set!\n");
  // }
  // int main() {
  //   // 这里假设两个函数在不同的线程中运行
  //   set_flag();
  //   check_flag();
  //   return 0;
  // } 
  volatile int shared_var = 0;  // 在 write_to_shared 函数中，有两个对 shared_var 的写操作。由于 shared_var 被声明为 volatile，编译器保证这两个写操作在程序执行时不会被优化或重新排序。它们会严格按顺序写入内存
  // void write_to_shared() {   // 同样，在 read_from_shared 函数中，有两个对 shared_var 的读操作。编译器会确保每次读操作都直接从内存中读取，而不是使用任何缓存值
  //   shared_var = 1; // volatile write
  //   shared_var = 2; // volatile write
  // }
  // void read_from_shared() {  
  //   int x = shared_var; // volatile read
  //   int y = shared_var; // volatile read
  //   printf("x = %d, y = %d\n", x, y);
  // }
  // int main() {               // 我们可以通过编译和执行该程序，观察输出结果来验证这些行为。如果 volatile 关键字没有发挥作用，我们可能会看到编译器优化后的结果（如：寄存器缓存导致的错误读取）。但是由于 volatile 的保证，shared_var 的每次访问都会直接从内存中进行，确保了读取和写入的正确性
  //   write_to_shared();       // 编译并运行上面的代码，输出将是：x = 2, y = 2
  //   read_from_shared();      // 这说明 shared_var 的每次读取都确实从内存中获取了最新的值，且没有任何优化和重排发生。这验证了 volatile 关键字确保了访问顺序和内存同步的规则
  //   return 0;
  // } 
  // 未重排  
  // int a = 0;                 // 按照书写顺序，我们期望先执行代码块A，然后执行代码块B。然而，编译器可能会进行重排和优化，以提高性能或者减少不必要的计算。如果编译器发现代码块A和代码块B之间没有数据依赖关系（即它们之间互不影响），编译器可能会将代码块B提前执行
  // int b = 1;                 
  // // 代码块 A
  // a = b * 2;
  // // 代码块 B
  // b = 3;
  // 重排后                      // 在这种情况下，最终的a的值将是6，而不是我们预期的2。编译器这样做的目的是优化代码的执行效率，但有时这种优化会导致意想不到的结果，尤其是在多线程环境中
  // int a = 0;
  // int b = 1;
  // // 编译器重排后代码
  // // 代码块 B
  // b = 3; 
  // // 代码块 A   
  // a = b * 2; 
  // 防止编译器重排               // 为了防止编译器进行不安全的重排，可以使用内存屏障或其它同步机制，例如在多线程程序中使用volatile关键字或其它同步原语
  // volatile int a = 0;        // 使用volatile关键字后，编译器会确保对这些变量的读写操作不会被重排，从而保证程序按照预期的顺序执行。需要注意的是，volatile关键字并不能解决所有的并发问题，对于更复杂的同步需求，还需要使用互斥锁（mutex）、条件变量（condition variable）等同步原语
  // volatile int b = 1;
  // // 代码块 A
  // a = b * 2;
  // // 代码块 B
  // b = 3;

  int non_volatile_var = 42;                             // 2、非volatile变量，将非 volatile 值强制转换为 volatile 类型不起作用。要使用 volatile 语义访问非 volatile 对象，必须将其地址强制转换为指向 volatile 的指针，然后必须通过该指针进行访问
  volatile int *ptr = (volatile int *)&non_volatile_var; // 将其地址强制转换为指向volatile的指针  
  *ptr = 43;                                             // 通过volatile指针进行访问

  volatile int volatile_var = 42;                        // 3、声明为volatile的变量，通过非 volatile 指针 non_volatile_ptr 访问 volatile 变量 volatile_var 是未定义行为。编译器可能会对这种访问进行优化，导致程序的行为不可预测
  int *non_volatile_ptr = (int *)&volatile_var;          // 非volatile指针
  int valuen = *non_volatile_ptr;                        // 通过非volatile指针读取volatile变量
  *non_volatile_ptr = 43;                                // 通过非volatile指针写入volatile变量
  volatile int nvlt = 1;                                 // volatile 限定类型的对象
  int* pvlt = (int*)&nvlt;                               // 非volatile指针
  int valt = *pvlt;                                      // 未定义行为

  struct svc { int i; const int ci; } sv;                // 4、s.i 类型是 int，s.ci 的类型是 const int
  volatile struct svc vs;                                // vs.i 和 vs.ci 的类型各是 volatile int 和 const volatile in

  typedef int Avl[2][3];                                 // 5、volatile 限定 数组
  volatile Avl al = {{4, 5, 6}, {7, 8, 9}};              // volatile int 的数组的数组
  int* pil = al[0];                                      // a[0] 拥有 volatile int* 类型，Initializing 'int *' with an expression of type 'volatile int[3]' discards qualifiers
  void *unqual_ptrvl = al;                               // C23 前 OK；C23 起错误 // 注：clang 即使在 C89-C17 模式也应用 C++/C23 中的规则，Initializing 'void *' with an expression of type 'volatile Avl' (aka 'volatile int[2][3]') discards qualifiers

  typedef int FuncTypec(const int);                      // 6、若函数类型声明具有 const 类型限定（通过使用 typedef），则行为未定义
  typedef int const FuncTypect(const int); 
  typedef int FuncTypevl(volatile int);                  // 若函数类型声明具有 volatile 类型限定（通过使用 typedef），则行为未定义
  typedef int volatile FuncTypevtl(volatile int);   
  
  void fv1(double x[volatile], const double y[volatile]);   // 7、在函数声明中，关键词 volatile 可以出现于用以声明数组类型的函数形参的方括号内。它对数组所转换得的指针类型赋予限定 
  void fv2(double * volatile x, const double * volatile y); // 类似 const 限定

  int* pvtl = 0;                                            // 8、指向非 volatile 类型的指针可以隐式转换成指向同一或兼容类型的 volatile 限定版本的指针。逆向转换需要使用转型表达式进行
  volatile int* vpvtl = pvtl;                               // OK：添加限定符（int 到 volatile int）
  pvtl = vpvtl;                                             // 丢弃限定符（volatile int 到 int）
  pvtl = (int*)vpvtl;                                       // OK：类型转换

  char *pvtlc = 0;                                          // 9、注意指向 T 的指针的指针不可转换成指向 volatile T 的指针的指针；对于要兼容的两个类型，它们的限定必须相同
  volatile char **vppvtlc = &pvtlc;                         // char* 和 volatile char* 不是兼容类型
  char * volatile *pvpvtlc = &pvtlc;                        // 添加限定符（char* 到 char* volatile）
  char ** volatile ppvvtlc = &pvtlc;  

  // volatile short *ttyport = (volatile short*)TTYPORT_ADDR; // 10、(volatile short*)TTYPORT_ADDR 进行类型转换，将 TTYPORT_ADDR 地址转换为指向 volatile short 类型的指针。这是因为在嵌入式编程中，硬件寄存器地址通常需要进行这种类型的转换，volatile 关键字用于指示编译器，不要优化访问 ttyport 指针指向的内存位置。也就是说，每次访问 *ttyport 都应该直接访问内存地址 TTYPORT_ADDR，而不是使用缓存的值。这种用法通常用于硬件寄存器或 I/O 端口
  // for(int i = 0; i < N; ++i) *ttyport = a[i];              // *ttyport 是 volatile short 类型的左值，这段代码很可能在与某个硬件设备进行通信，比如一个串行端口（tty port）。通过将数据写入 ttyport 对应的地址，程序可以将数据发送到这个设备
  
  // volatile sig_atomic_t flagsl = 0;                        // 11、当处理信号时，信号处理函数可能会在异步执行的环境中访问某些变量。使用 volatile 和 sig_atomic_t 类型可以确保这些变量在信号处理函数中正确地被读取和写入
  // void signal_handler(int signal) {                
  //   flag = 1; // 设置一个标志，告诉主程序信号已到来
  // }
  
  // #include <setjmp.h>                                      // 12、在使用 setjmp 和 longjmp 时， volatile 关键字可以保证在 longjmp 返回后，局部变量的值能够被正确恢复
  // jmp_buf env;                                             // env 是一个保存程序执行环境的结构，用于存储 setjmp 函数调用时的上下文信息
  // void function() {
  //   volatile int i = 0;                                    // volatile 修饰符的作用是告诉编译器变量 i 的值可能会在程序的控制流之外发生变化，因此每次访问 i 时都要重新读取它的值，而不是使用缓存的值
  //   if (setjmp(env) == 0) {                                // setjmp(env) 保存当前的执行环境到 env 中，并返回 0，这个条件语句会在 setjmp 被初次调用时返回 0，因此会执行 i = 42;
  //     // 初次调用 setjmp, 返回 0     
  //     i = 42;
  //   } else {                                               // 当 longjmp(env, 1) 被调用时，程序的控制流会跳回到 setjmp(env) 的位置，此时 setjmp 返回 1，所以会执行 else 中的代码，打印 i 的值
  //     // 从 longjmp 返回，i 的值将保持为 42
  //     printf("i = %d\n", i);
  //   }
  // }
  // int main() {
  //   function();
  //   longjmp(env, 1);
  //   return 0;
  // }
  
  // volatile int x = 0;                                      // 13、volatile 变量可以防止编译器对代码进行某些优化，例如死存储消除或常量折叠。这在编写低级代码或进行微基准测试时尤为重要
  // while (x == 0) {
  //   // 这里的 x == 0 将不会被编译器优化掉
  // }

  clock_t t = clock();            // 展示用 volatile 禁用优化
  double dt = 0.0;
  for (int n = 0; n < 10000; ++n)
    for (int m = 0; m < 10000; ++m)
      dt += dt * n * m;           // 读写非 volatile 对象
  print_purple("Modified a non-volatile variable 100m times. Time used: %.2f seconds\n", (double)(clock() - t)/CLOCKS_PER_SEC );
  t = clock();
  volatile double vdt = 0.0;
  for (int n = 0; n < 10000; ++n)
    for (int m = 0; m < 10000; ++m) {
      double prod = vdt * n * m;  // 读 volatile 对象
      vdt += prod;                // 读写 volatile 对象
    } 
  print_purple("Modified a volatile variable 100m times. Time used: %.2f seconds\n", (double)(clock() - t)/CLOCKS_PER_SEC );

#endif // VOLATILE_WORDS  volatile 关键词

  return 0;
}