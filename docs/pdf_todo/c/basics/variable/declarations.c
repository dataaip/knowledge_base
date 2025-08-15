/**
* @file              declarations.c
* @brief             声明是一种 C 语言结构，它将一个或多个标识符引入程序并指定它们的含义和属性
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.02
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.02 <td>0.1             <td>brightl         <td>声明定义、使用、特性
* </table>
*/

#include "c/basics/variable/variable.h"
#include "colorfmt.h"
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <stdatomic.h> 
#include <time.h>
#include <stdalign.h>
#include <threads.h>

/**
* @brief             完整的声明 由 属性说明符序列(C23起) + 说明符[类型说明符、存储类说明符、对齐说明符、函数说明符] + 限定符[类型限定符] + 声明符 + 初始化器组成
*
* @note              声明可以出现在任何范围内。每个声明都以分号结尾（就像一个语句一样），由两个 （直到C23） 三个 （自C23起） 不同的部分组成
*/

/*
本页目录：

一、声明含义- 声明定义、范围组成、说明符和限定符、声明符与初始化器、属性说明符序列、auto自动推断

二、声明符使用- 声明符分类、声明推理、声明规则、声明符序列点

三、定义- 定义与声明的关系、各类标识符的定义规则、定义注意事项

四、重声明- 重声明规则、例外情况、重声明作用

五、声明注解- C89 标准规则、空声明符、可变长数组（VAL）与 可变修改类型（VM 类型）声明、静态断言与声明、属性与声明、空语句
*/
#define DECLARATIONS

/**
* @brief             c 声明示例代码函数
* @return  int       Return Description
*
* @note              Revision History
*/
int declarations_fn(void) {
#ifdef DECLARATIONS
  print_purple("declaration start...\n");

/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

/*
一、声明含义
声明定义：声明是一种 C 语言结构，它将一个或多个标识符引入程序并指定它们的含义和属性
范围组成：声明可以出现在任何范围内。每个声明都以分号结尾（就像一个语句一样），由两个（直到C23）三个（自C23起）不同的部分组成
（1）说明符 限定符 声明符 初始化器(可选); -（简单声明：引入一个或多个表示对象、函数、结构体/联合体/枚举标签、类型定义或枚举常量的标识符）
（2）属性说明符序列 说明符 限定符 声明符 初始化器;(C23起) -（简单声明：引入一个或多个表示对象、函数、结构体/联合体/枚举标签、类型定义或枚举常量的标识符）
（3）属性说明符序列;(C23起) -（属性声明：不声明任何标识符，如果标准未指定含义，则具有实现[即具体编译器]定义的含义）
  
说明符和限定符：下列以任意顺序排列的由空格分隔的列表（如 const volatile int ≡ volatile const int）：
（1）类型说明符：void、算术类型名、原子类型名、由 typedef 声明在之前引入的名称、struct、union 或 enum 说明符、typeof 说明符(C23起)
（2）零或一个存储类说明符：typedef、constexpr、auto、register、static、extern、_Thread_local
（3）零或多个函数说明符(只在声明函数时）：inline、_Noreturn
（4）零或多个对齐说明符： _Alignas、alignas（自C23起）
（5）零或多个类型限定符：const、volatile、restrict、_Atomic
  
声明符与初始化器：
（1）由声明符组成的以逗号分隔的列表（每个声明符提供额外的类型信息或要声明的标识符，如：int a, *b, c[3] 声明符：a, *b, c[3]）
（2）声明符可以伴有初始化器（如：= 42; = {1,2,3}; 初始化器）
（3）枚举、结构体和联合体声明可以省略声明符，在这种情况下，它们仅引入枚举常量或标签（如：enum Color { RED, GREEN, BLUE }; // 省略声明符，仅定义枚举常量，struct Student { char name[20]; }; // 省略声明符，定义结构体标签"Student"）
  
属性说明符序列(C23)可选的属性列表：
（1）应用于声明的实体，或者如果单独出现，则形成属性声明（如：[[gnu::weak]]; // 后续符号默认为弱引用 extern void weak_function();）

一个声明引入的每个标识符类型是通过 类型说明符 所指定的类型及其 声明符 所应用的类型修饰决定的（即：声明一个标识符（如变量、函数等）的最终类型由 类型说明符 和 声明符 共同决定）
（1）如果使用 auto 说明符，变量的类型也可能被推断出来（C23起）
（2）属性(C23起)可在 说明符与限定符 中出现，在这种情况下，它们适用于由前面的说明符确定的类型
*/
  static const volatile _Alignas(8) int declarator_all = 10;                       // 声明 由 说明符[类型说明符、存储类说明符、对齐说明符、函数说明符] + 限定符[类型限定符] + 声明符 + 初始化器组成
  // [[maybe_unused]] static const volatile _Alignas(8) int declarator_all23 = 10; // 声明 由 属性说明符序列(C23起) + 说明符[类型说明符、存储类说明符、对齐说明符、函数说明符] + 限定符[类型限定符] + 声明符 + 初始化器组成
  
  int type_specifier_num = 42;                                       // 类型说明符（定义基础类型）：算术类型（int）
  struct TS_Point { int x, y; };                                     // 类型说明符（定义基础类型）：结构体类型说明符（struct）
  typedef int type_specifier_Int;                                    // 类型说明符（定义基础类型）：通过 typedef 引入的类型名（MyInt）
  enum TS_Color { TS_RED, TS_GREEN, TS_BLUE };                       // 类型说明符（定义基础类型）：枚举类型说明符（enum）
  // typeof(type_specifier_num) type_specifier_value = 10;           // 类型说明符（定义基础类型）：C23 的 typeof（推断 value 为 int 类型）
  static int storage_specifier_counter = 0;                          // 存储类说明符（控制存储位置/生命周期）：static：静态变量（程序生命周期）
  extern int storage_specifier_global_var;                           // 存储类说明符（控制存储位置/生命周期）：extern：声明外部链接变量
  auto storage_specifier_x = 3.14;                                   // 存储类说明符（控制存储位置/生命周期）：C23 起：auto 推断 x 为 double 类型
  // inline int function_specifier_add(int a, int b) { return a + b; } // 函数说明符（修饰函数行为）：inline：建议内联展开函数
  // _Noreturn void function_specifier_exit_program() { exit(0); }     // 函数说明符（修饰函数行为）：_Noreturn：函数不会返回（如终止程序）
  alignas(16) int alignment_specifier_buffer[4];                      // 对齐说明符（C23 起，控制内存对齐）：alignas(16)：强制按 16 字节对齐
  _Alignas(double) char alignment_specifier_data[32];                 // 对齐说明符（C23 起，控制内存对齐）：对齐到 double 类型的对齐要求
  const int Type_Qualifier_MAX = 100;                                 // 类型限定符（修饰类型特性）：const：值不可修改
  volatile int type_qualifier_sensor_value;                           // 类型限定符（修饰类型特性）：volatile：可能被外部修改（禁用编译器优化）
  int* restrict type_qualifier_ptr = &type_specifier_num;             // 类型限定符（修饰类型特性）：restrict：指针是唯一访问路径（优化提示）
  _Atomic int type_qualifier_atomic_counter;                          // 类型限定符（修饰类型特性）：_Atomic：原子操作（线程安全）

  int declarator;                                                    // 声明符是声明语句中 标识变量名 并 提供类型信息 的部分。它可以是简单的变量名，也可以包含复杂的类型修饰（如指针、数组、函数等）
  int simple_declarator_x;                                           // 简单声明符：声明符是 "x"
  int *complex_declarator_p;                                         // 复杂声明符：声明符是 "*p"（指针）
  int complex_declarator_arr[5];                                     // 复杂声明符：声明符是 "arr[5]"（数组）
  int complex_declarator_func();                                     // 复杂声明符：声明符是 "func()"（函数）
  int (*complex_declarator_fp)(int) = NULL;                          // 复杂声明符：声明符是 "(*fp)(int)"，表示函数指针，初始化器 "= NULL" 初始化指针
  int list_declarator_a, *list_declarator_b, list_declarator_c[3];   // 逗号分隔的声明符列表：可以在一条声明语句中声明多个变量，用逗号分隔不同的声明符
  int initializer;                                                   // 初始化器：声明符可以伴随初始化器，用于在声明时为变量赋初值
  int simple_initializer_x = 42;                                     // 简单初始化：初始化器 = 42
  int simple_initializer_arr[] = {1,2,3};                            // 数组初始化：初始化器 = {1,2,3}
  struct SI_Point { int x, y; } simple_initializer_p = { .x=1, .y=2 };  // 结构体初始化：初始化器 = { .x=1, .y=2 }
  enum SI_Color { SI_RED, SI_GREEN, SI_BLUE };                          // 省略声明符：仅定义枚举常量，省略声明符的特殊情况，在 枚举、结构体、联合体 声明中，可以省略声明符，此时仅引入常量或标签
  struct SI_Student { char name[20]; };                                 // 省略声明符：定义结构体标签"Student"

#ifdef C23_OK  
  [[attribute1, attribute2]] int attribute_specifiers_x;             // 属性说明符：是 C23 引入的语法，用于为声明的实体（变量、函数、类型等）附加额外信息（如编译器优化提示、静态分析标记等）
  [[gnu::visibility("default")]];                                    // 独立属性声明：设置后续声明的默认可见性，属性可以单独出现，形成 "属性声明"，通常用于全局作用域
  [[deprecated]] struct OldStruct { int data; };                     // 属性说明符：标记结构体 OldStruct 为废弃
  [[gnu::weak]]; extern void weak_function();                        // 独立属性声明：后续符号默认为弱引用
#endif // 是否支持 C23 

  const int *type_specifier_declarator[5];                           // 类型说明符与声明符的协作：类型说明符（如 int, double, struct S）确定基础类型、声明符（如 *p, arr[5], func()）修饰基础类型，最终确定标识符的类型、最终类型 = 基础类型 + 声明符修饰
  const int *declarator_p[5];                                        // 类型说明符：const int（基础类型是 int，附加 const 限定符），声明符：*p[5]：[5] → 数组修饰符 → 数组类型、* → 指针修饰符 → 指向数组元素的指针，最终类型：p 是一个长度为 5 的数组，每个元素是 const int*（指向常整型的指针）
  auto automatic_inference_x = 42;                                   // 若使用 auto 作为类型说明符，编译器根据 初始化器 推断变量类型。声明符的修饰（如指针、数组）会参与类型推断，推断为 int
  auto *automatic_inference_p = &automatic_inference_x;              // 推断为 int*
  auto automatic_inference_arr[] = {1,2};                            // 推断为 int[2]
#ifdef C23_OK
  auto automatic_inference_func() { return 3.14; }                   // 推断返回类型（C23允许）返回 double
  auto (*automatic_inference_fp)(int) = some_func;                   // 与声明符修饰的互动，推断 automatic_inference_fp 为函数指针类型，指向 int → 返回类型的函数
  [[nodiscard]] int attribute_x = 10;                                // 属性应用于整个声明（变量 x），属性可以出现在 类型说明符、限定符 或 声明符 的位置，影响不同类型的实体
  int [[gnu::aligned(16)]] attribute_y;                              // 属性应用于基础类型 int（类型本身）
  int* [[gnu::nonnull]] attribute_p;                                 // 属性应用于声明符修饰的指针（变量 p）
  [[deprecated]] void attribute_func() [[noreturn]];                 // 属性应用于函数声明符（函数 func）
  [[gnu::weak]] int [[gnu::vector_size(16)]] *attribute_ptr;         // 复杂组合：- gnu::weak → 应用于变量 ptr（弱符号），- gnu::vector_size(16) → 应用于基础类型 int（向量化类型），- * → 声明符修饰符（指针）。位置决定应用对象：若在 类型说明符前 → 应用于整个声明。若在 类型说明符或限定符中 → 应用于基础类型。若在 声明符后 → 应用于声明的标识符
  [[gnu::aligned(8)]] const int* [[gnu::nonnull]] attribute_ptrs[3]; // 类型说明符：const int，声明符：*ptrs[3] → 数组 ptrs 包含 3 个指向常整型的指针，属性：gnu::aligned(8) → 应用于基础类型 const int，要求对齐到 8 字节，gnu::nonnull → 应用于声明符修饰的指针，标记指针不可为 NULL  
#endif // 是否支持 C23 

/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

/*
二、声明符使用
声明符分类：每个声明符都是以下之一
（1）标识符 属性说明符序列(可选)                    - 此声明符引入的标识符，即这是最基本的声明形式，就是简单地给出一个标识符（如变量名、函数名等），并且可以选择性地跟上属性说明符序列。属性说明符序列可以用于指定一些额外的属性等（C23起这些属性可在这个位置出现） _Alignas(8) double value;
（2）( 声明符 )	                                 - 任何声明符都可以用括号括起来; 这是引入指向数组的指针和指向函数的指针所必需的，即形式：任何声明符都可以用括号括起来。这种形式看似简单，但它在一些复杂的类型声明场景中非常有用，特别是在声明指向数组的指针和指向函数的指针时是必需的 int (*ptr_to_array)[5]; int (*ptr_to_function)(int, double);
（3）* 属性说明符序列(可选) 限定符(可选) 声明符       - 指针声明符：声明 S * cvr D; 将 D 声明为受 cvr 限定的指向由 S 确定的类型的指针，即这是用于声明指针的形式。首先是 * 符号表示指针，然后可以跟上属性说明符序列（用于指定指针相关的额外属性，不过这种情况相对较少见），接着是限定符（如const、volatile等，用于进一步限定指针所指向的类型的特性），最后是声明符，整个式子将最后的声明符所声明的类型确定为指针所指向的类型 _Alignas(4) char * restrict ptr3;
（4）无指针声明符 [ static(可选) 限定符(可选) 表达式 ] 或 无指针声明符 [ 限定符(可选) * ]  - 数组声明符：声明 S D[N] 声明 D 为有 N 个 S 所确定类型对象的数组，无指针声明符是 除未被括号包围的指针声明符 以外的其他任何声明符，即这是用于声明数组的形式。"无指针声明符" 是指除未被括号包围的指针声明符以外的其他任何声明符，先通过前面的部分确定数组元素的类型，然后通过[ static(可选) 限定符(可选) 表达式 ]或[ 限定符(可选) * ]来确定数组的大小或特性 int arr[5]; int arr2[static 3]; double * arr3[const 2];
（5）无指针声明符 ( 形参或标识符 )                  - 函数声明符：声明 S D(params) 声明 D 为接收参数 params 并返回 S 的函数，无指针声明符是 除未被括号包围的指针声明符 以外的其他任何声明符，即这是用于声明函数的形式。"无指针声明符" 同样是指除未被括号包围的指针声明符以外的其他任何声明符，先通过前面的部分确定函数的返回类型，然后通过( 形参或标识符 )来确定函数的参数情况 int func(void);
声明推理：这种声明语法背后的关键推理是，当由声明符声明的标识符出现在与声明符形式相同的表达式中时，它将具有由类型说明符序列指定的类型。例如，如果我们声明了一个指针int *ptr，那么当我们在表达式中使用 ptr 时，比如 *ptr = 10; 编译器就知道 ptr 是一个指向整数的指针，所以可以通过解指针操作（*）来访问和修改所指向的整数的值。同样，对于数组声明int arr[5]，当我们在表达式中使用arr时，编译器就知道它是一个包含 5 个整数的数组，并且可以根据数组的索引规则来访问其中的元素。对于函数声明也是如此，当我们调用一个函数时，编译器根据函数的声明就能准确知道函数的返回类型、参数类型和数量等信息，从而正确地执行函数调用和处理返回值
声明规则：通过这样一套声明规则，C 语言能够精确地表达各种复杂的类型关系，使得程序员可以准确地定义和使用不同类型的变量、指针、数组和函数等，同时也让编译器能够准确地理解程序的意图并进行正确的编译处理
 
声明符序列点：
（1）序列点：是程序执行中的一个确定点，在此点之前的所有 副作用（如变量赋值、内存修改）必须完成，之后的操作将看到这些修改后的结果
（2）声明符末尾的序列点：当一个声明符的末尾不是另一个声明符的一部分时，此处形成一个序列点。这确保了声明过程中初始化操作的顺序性
（3）这种规则有助于编译器正确地解析和处理声明语句，特别是在涉及复杂的初始化表达式和多个变量声明的情况下。它保证了变量的初始化顺序和赋值操作按照预期的顺序进行，从而确保程序的正确性和可预测性。如果没有这样的规则，在复杂的声明语句中，编译器可能会因为不确定求值顺序而产生错误的代码生成或者无法正确处理声明
*/
  int simple_declarator_varx;                                         // 简单标识符声明符：格式：标识符 [属性说明符序列]，作用：声明基础变量或函数名，可附加属性（C23 起）简单变量声明
#ifdef C23_OK
  [[gnu::aligned(16)]] int simple_declarator_vary;                    // 简单标识符声明符：C23: 带属性的变量（强制 16 字节对齐）
#endif // DEBUG
  void simple_declarator_varfunc();                                   // 简单标识符声明符：函数声明符（无参数）
  int (*parentheses_declarator_ptr_to_array)[5];                      // 复杂括号标识符声明符：格式：(声明符)，作用：强制优先级，用于复杂声明（如指向数组或函数的指针）指向含 5 个整数的数组的指针，(*ptr_to_array)：括号强制 * 优先作用于 ptr_to_array，使其成为指针，若不加括号：int *ptr_to_array[5] 会声明为 指针数组，而非 数组指针
  int (*parentheses_declarator_func_ptr)(int, int);                   // 复杂括号标识符声明符：指向函数的指针（参数：int, int → 返回 int）
  int *pointer_declarator_p;                                          // 指针声明符：格式：* [属性] [限定符] 声明符，作用：声明指针变量，可附加属性或类型限定符，指向 int 的指针
  const char *pointer_declarator_s = "hello";                         // 指针声明符：指向常字符的指针（不可修改字符内容）
  int * restrict pointer_declarator_ptr = &simple_declarator_varx;    // 指针声明符：restrict 限定符（唯一访问指针）
#ifdef C23_OK
  [[gnu::nonnull]] int *pointer_declarator_np;                        // 指针声明符：C23: 标记指针不可为 NULL  
#endif // DEBUG
  int array_declarator_arr[5];                                                    // 数组声明符：格式：无指针声明符 [static 表达式] [限定符]，无指针声明符 [限定符 *] 作用：声明数组，支持静态大小或可变长度数组（VLA），固定长度数组（5 个 int）
  void array_declarator_func1(int array_declarator_arr2[static 3]);               // 数组声明符：静态数组（编译器优化提示）
  void array_declarator_func2(double array_declarator_matrix[const 2][3]);        // 数组声明符：二维数组，行维度为常量
  void array_declarator_func3(int n, int array_declarator_arr[*]);                // 数组声明符：函数参数中未指定大小的数组（C99 起）
  int function_declarator_sum(int a, int b);                                      // 函数声明符：格式：无指针声明符 (形参列表)，作用：声明函数，指定返回类型和参数列表，函数返回 int，参数为两个 int
  void (*function_declarator_signal(int sig, void (*handler)(int)))(int);         // 函数声明符：函数 signal：参数为 int 和函数指针，返回函数指针
  int declaration_reasoning_num;
  int *declaration_reasoning_p = &declaration_reasoning_num;                      // 声明推理与规则：声明与表达式的一致性，声明符的语法设计使得 变量在表达式中的使用形式与声明形式一致，声明 p 是指向 int 的指针
  *declaration_reasoning_p = 10;                                                  // 声明推理与规则：表达式中的 *p 对应声明中的 *p
  int declaration_reasoning_arr[3];                                               // 声明推理与规则：声明 arr 是含 3 个 int 的数组
  declaration_reasoning_arr[0] = 42;                                              // 声明推理与规则：表达式中的 arr[0] 对应声明中的 [3]
  int (*(*parse_rules_complex_declaration_func)(int))[5];                         // 复杂声明的解析规则：C 语言采用 "声明符螺旋规则"（顺时针解析）：从标识符开始，按优先级（括号 > 后缀操作符 > 前缀操作符）解析，解析步骤：func 是一个指针（*func），指向一个函数（(*func)(int)），参数为 int，函数返回一个指针（*(*func)(int)），指向一个含 5 个 int 的数组（(*(*func)(int))[5]）

  int sequence_points_a = 1, sequence_points_b = sequence_points_a + 1;                                                              // 声明符序列点：序列点位置：在 a 的声明符末尾（即 int a = 1 的末尾）。在 b 的声明符末尾（即 b = a + 1 的末尾）。关键作用：初始化 b 时，a 的值已被确定为 1，因为 a 的初始化在序列点之前已完成。若没有序列点规则，b 的初始化可能因求值顺序不确定而使用未定义的 a 值
  int sequence_points_x = (printf("init x\n"), 10), sequence_points_y = (printf("init y\n"), sequence_points_x + 1);  // 声明符序列点： x 的声明符末尾是序列点，其初始化副作用（打印 "init x"）必须在此点前完成。y 的初始化才会在 x 的值确定后执行

/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

/*
三、定义
定义与声明的关系：
（1）定义是声明的子集：所有定义都是声明，但并非所有声明都是定义
核心区别：
（1）声明（declaration）：仅告知编译器标识符的存在及其类型信息，不分配存储或完整描述，是引入标识符的占位符，依赖后续定义或外部链接
（2）定义（definition）：提供标识符的完整信息（如分配存储、成员列表、函数体等），使其可被程序使用，是程序实体的完整描述，使编译器能分配存储或生成代码

各类标识符的定义规则：
（1）枚举（enum）与类型别名（typedef）规则：所有 enum 和 typedef 的声明均为定义，（例外：C11 起允许前向声明枚举类型（不完整声明），但需后续补充定义）
（2）函数（function）规则：包含函数体的声明是定义
（3）对象（变量）规则：分配存储的声明是定义（自动或静态存储），不分配存储的声明（extern）不是定义
（4）结构体（struct）与联合体（union）规则：指定成员列表的声明是定义
定义声明总结：
（1）枚举-声明：仅声明标签（C11 起支持前向声明），定义：指定枚举常量列表
（2）类型别名-声明：无（typedef 本身即为定义），定义：为现有类型创建别名
（3）函数-声明：提供函数原型（参数与返回类型），定义：包含函数体
（4）变量-声明：extern 声明（不分配存储），定义：分配存储（自动或静态）
（5）结构体/联合体-声明：前向声明，定义：指定成员列表

注意事项：
（1）重复定义：同一作用域内禁止重复定义（如多次定义同一结构体）
（2）前向声明限制：结构体/联合体的前向声明（struct S;）允许声明指针，但不可访问成员，直到完整定义
（3）extern 的歧义性：extern int var;  // 声明（假设 var 在其他文件定义），extern int var = 10; // 定义（extern + 初始化 → 强制定义）
*/
  enum DF_Color { DF_RED, DF_GREEN, DF_BLUE };                           // 枚举与类型别名规则：定义枚举类型 Color
  typedef int Definition_MyInt;                                          // 枚举与类型别名规则：定义类型别名 MyInt
  enum DF_Direction;                                                     // 枚举与类型别名规则：声明（非定义，C11 起支持）
  enum DF_Direction { DF_UP, DF_DOWN };                                  // 枚举与类型别名规则：补充定义
  int definition_add(int a, int b);                                      // 函数规则：声明（非定义）
  // int definition_add(int a, int b) { return a + b; }                  // 函数规则：定义
  // int definition_global_var;                                          // 对象（变量）规则：定义（静态存储，全局变量）
  // void definition_func() {
  //   int definition_local_var;                                         // 对象（变量）规则：定义（自动存储，局部变量）
  //   static int definition_static_var;                                 // 对象（变量）规则：定义（静态存储，局部静态变量）
  //   extern int definition_extern_var;                                 // 对象（变量）规则：声明（非定义，引用外部变量）
  // }      
  struct DF_Point;                                                       // 结构体与联合体规则：声明（非定义）
  struct DF_Point { int x, y; };                                         // 结构体与联合体规则：定义
  
  // extern int declaration_var;                                         // 注意事项：声明（假设 var 在其他文件定义）
  // extern int definition_var = 10;                                     // 注意事项：定义（extern + 初始化 → 强制定义）

/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

/*
四、重声明
核心规则：
（1）在同一作用域中，不允许重复声明同一标识符（避免命名冲突），除非满足以下特定例外情况
（2）具有链接（外部/内部）的对象声明：允许重复声明同一外部变量（extern）或静态变量（static），典型应用场景：多文件共享全局变量
（3）非可变长度数组（Non-VLA）类型别名（typedef）：只要类型相同，可重复定义相同的 typedef 名称，典型应用场景：头文件多次包含保护
（4）结构体（struct）和联合体（union）声明：允许重复声明同一标签的结构体或联合体（需声明兼容），典型应用场景：前向声明与完整声明分离

重声明作用：
（1）这些规则简化了头文件的使用- 为何这些规则简化头文件使用？头文件（.h）常被多个源文件包含，以下规则避免了重复包含时的编译错误
（2）结构体/联合体的重复声明 头文件中通常使用 前向声明 或 完整定义，结合头文件保护符（#ifndef）避免重复展开
（3）extern 变量声明 头文件中声明外部变量，源文件中定义，允许多文件共享
（4）typedef 类型别名头文件中定义类型别名，即使多次包含也不会冲突
*/
  // // 文件: main.c                                                                        // 具有链接的对象声明规则：同一作用域内可重复声明具有外部或内部链接的变量（如 extern 或 static）
  // extern int redeclaration_global_var;                                                  // 具有链接的对象声明：第一次声明（外部链接）
  // extern int redeclaration_global_var;                                                  // 具有链接的对象声明：允许重复声明（同一类型）
  // int main() { printf("%d\n", redeclaration_global_var); return 0; }
  // // 文件: var.c
  // int redeclaration_global_var = 42;                                                    // 具有链接的对象声明：实际定义
  // // 错误示例
  // extern int redeclaration_x;                                                           // 具有链接的对象声明：声明
  // int redeclaration_x = 10;                                                             // 具有链接的对象声明：定义：允许（extern + 初始化 → 定义）     
  // extern int redeclaration_x = 20;                                                      // 具有链接的对象声明：错误：重复定义
  
  //                                                                                       // 非 VLA 类型别名（typedef）规则：同一作用域内可重复声明相同的 typedef，但类型必须完全一致
  typedef int Redeclaration_MyInt;                                                         // 非 VLA 类型别名（typedef）规则：第一次定义 MyInt
  typedef int Redeclaration_MyInt;                                                         // 非 VLA 类型别名（typedef）规则：允许：类型相同
  typedef unsigned int Redeclaration_UInt;
  // typedef int Redeclaration_UInt;                                                       // 非 VLA 类型别名（typedef）规则：错误：类型冲突（int vs unsigned int）
  // // 错误示例
  // typedef int RedeclarationArrType[n];                                                  // 非 VLA 类型别名（typedef）规则：VLA 类型别名禁止重复：VLA 类型别名（n 是变量）
  // typedef int RedeclarationArrType[n];                                                  // 非 VLA 类型别名（typedef）规则：VLA 类型别名禁止重复：错误：VLA 类型别名不可重复声明（即使 n 值相同）
  
  //                                                                                       // 结构体与联合体声明规则：规则：允许重复声明同一标签的结构体/联合体，但需满足以下条件之一：声明均为 不完整声明（仅声明标签，无成员），声明均为 完整声明 且成员列表完全一致
  struct Redeclaration_Point;                                                              // 结构体与联合体声明规则：合法重复声明（不完整 → 完整）：前向声明（不完整）
  struct Redeclaration_Point { int x, y; };                                                // 结构体与联合体声明规则：合法重复声明（不完整 → 完整）：完整定义
  struct Redeclaration_Data;                                                               // 结构体与联合体声明规则：合法重复声明（多次不完整声明）：不完整声明
  struct Redeclaration_Data;                                                               // 结构体与联合体声明规则：合法重复声明（多次不完整声明）：允许重复
  // // 错误示例
  // struct Redeclaration_Point { int x; };                                                // 结构体与联合体声明规则：非法重复声明（成员不一致）：第一次定义
  // struct Redeclaration_Point { int x, y; };                                             // 结构体与联合体声明规则：非法重复声明（成员不一致）：错误：成员列表不一致

  // 头文件: point.h
  // #ifndef POINT_H
  // #define POINT_H
  // struct Redeclaration_Point { int x, y; };                                             // 重声明作用：结构体/联合体的重复声明：完整定义（即使多次包含也只展开一次）
  // #endif
  // 头文件: config.h
  // extern int Redeclaration_MAX_SIZE;                                                    // 重声明作用：extern 变量声明：声明（允许多文件包含）
  // 源文件: config.c
  // int Redeclaration_MAX_SIZE = 100;                                                     // 重声明作用：extern 变量声明：实际定义
  // 头文件: types.h
  // typedef int MyInt;                                                                    // 重声明作用：typedef 类型别名：允许重复包含（类型相同）
  // // 错误示例
  int redeclaration_x = 10;         
  // int redeclaration_x = 20;                                                             // 重声明作用：错误示例：重复定义（无 extern）
  typedef int Redeclaration_MyInt;
  // typedef float Redeclaration_MyInt;                                                    // 重声明作用：错误示例：类型冲突
  struct RD_A { int a; };
  // struct RD_A { int a, b; };                                                            // 重声明作用：错误示例：成员列表不一致

/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

/*
五、声明注解
C89 标准规则：
（1）变量声明必须位于复合语句开头（C89 规则），C89 要求：在复合语句（如函数体、if 块、for 循环体等）中，所有变量声明必须出现在块的 开头，且在任何可执行语句之前。目的：简化编译器对作用域和内存分配的管理，提升代码可读性，这样规定的主要原因是为了让编译器在处理复合语句时能够更清晰、有序地管理变量的作用域和内存分配等操作。在代码阅读和理解上，也使得变量的声明集中在块的开头，便于开发者快速了解在该块内会使用哪些变量。但这种规定也有一定的局限性，比如在一些复杂的逻辑中，如果需要根据前面语句的执行结果来动态决定是否声明某个变量，就会受到限制，不过这在 C89 之后的标准（如 C99 等）中有了改进，允许在块内更灵活地声明变量
（2）隐式函数声明（C89 特性），隐式声明规则：C89 允许：调用未显式声明的函数时，编译器会 隐式声明该函数返回 int 类型，且参数类型和数量 不确定（实际行为类似可变参数），风险：若函数实际返回非 int 类型或参数不匹配，可能导致未定义行为或链接错误
（3）旧式函数定义（K&R 风格）：规则：函数参数可以不声明类型（默认为 int），或在参数列表后单独声明类型，问题：参数类型不匹配（如传递 float 会被隐式转换为 int）。缺乏原型检查，易导致运行时错误

空声明符：
（1）空声明符是被禁止的，C 语言要求每个声明必须 明确指定操作对象，因此以下三种情况必须满足至少一种，违反此规则会导致编译错误，底层原理：编译器需求-声明必须生成符号表条目，用于内存分配、类型检查和链接，符号表条目-声明符（变量名、函数名等）或标签是符号表的键（Key），未明确标识符 → 无法生成符号表 → 编译失败
（2）包含至少一个声明符（变量名、函数名、指针、数组等）
（3）声明结构体/联合体/枚举的标签（如 struct S;）
（4）引入枚举常量（如 enum { RED, GREEN };）

可变长数组（VAL）与 可变修改类型（VM 类型）声明：
（1）VM 类型规则：如果声明符（declarator）的任何部分是可变长度数组（VLA）声明符，则整个声明符的类型被称为 可变修改类型（VM 类型），VM 类型的核心特征是其大小依赖运行时变量
（2）VM 类型继承特性：由 VM 类型定义的新类型也会继承可变修改特性，一旦某个类型被判定为 VM 类型，所有基于它定义的新类型（如指针、数组、函数参数等）也会自动成为 VM 类型。这种继承是“传染性”的——只要声明符中涉及 VM 类型，最终类型一定是 VM 类型
（3）VM 类型作用域限制：VM 类型只能声明在 块作用域（如函数内部）或 函数原型作用域（如函数参数声明中），
（4）VM 类型的限制：限制 1：不能作为结构体或联合体的成员，结构体和联合体的成员必须在编译时确定大小，而 VM 类型的大小在运行时才能确定
（5）VM 类型的限制：限制 2：静态存储期的特殊规则，VLA 本身只能有自动存储期（函数内局部变量）或动态存储期（malloc 分配），指向 VLA 的指针可以是静态的，但必须类型一致?（静态声明时不能依赖运行时变量）
（6）为什么需要 VM 类型？VM 类型的设计是为了支持 动态大小的数据结构（如运行时确定大小的数组）。编译器需要知道这些类型的大小信息在运行时才能确定，因此必须对它们的使用施加特殊限制（如作用域限制）
（7）VM 类型的典型场景：函数参数中使用 VLA、基于 VM 类型定义新类型
（8）可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：栈内存管理：VLA 的内存分配在栈上，编译器在声明点隐式插入代码分配内存，在作用域结束时释放。跳转破坏逻辑：goto、switch、longjmp 的跳转行为会绕过编译器插入的内存管理代码，导致栈指针（SP）或基指针（BP）不一致，从而引发未定义行为

静态断言与声明：
（1）静态断言的定义：静态断言（通过 _Static_assert 关键字实现）是 C11 标准引入的特性，用于在编译时检查条件是否成立，语法形式：_Static_assert(常量表达式, "错误消息");
（2）关键特性：静态断言在语法上被视为一种声明（declaration），因此可以出现在代码中允许声明出现的任何位置，例如文件作用域（全局作用域）、块作用域（函数内部、代码块内部）、结构体/联合体定义内部（C11允许）等
（3）关键特性：它不引入任何标识符（如变量、类型或函数），因此不会与其他标识符产生命名冲突，静态断言没有声明符（declarator），因此不会定义变量、类型或函数。它仅包含一个条件表达式和一个错误消息字符串
（4）关键特性：它的语法不遵循常规的声明规则（例如没有变量名或类型名）
（5）静态断言的作用：静态断言用于在编译时强制验证某些条件，例如验证类型的大小（如 sizeof(int) == 4），确保常量表达式的值符合预期（如数组长度或配置参数），检查编译器特性或平台相关的假设，如果断言失败，编译器会直接报错并显示指定的错误消息，避免滥用：仅用于编译时可确定的常量表达式，不能替代运行时检查

属性与声明：
（1）属性声明定义：属性声明是 C23 标准引入的语法特性，通过 [[属性说明]] 的形式为代码实体（如变量、函数、类型等）添加编译器相关的额外信息，
（2）语法规则：属性声明必须包含 属性说明符序列（即 [[...]]），后跟一个分号 ; [[deprecated("Use new_func() instead")]]; // 属性声明（C23 起支持）
（3）关键特性：视为声明：属性声明在语法上被归类为“声明”（declaration），因此可以出现在任何允许声明的位置（如全局作用域、函数内部、结构体内部等）
（4）不引入标识符：属性声明本身不会定义变量、函数或类型，仅用于附加元信息
（5）需与声明结合：属性通常修饰具体的声明实体（如变量、函数），单独使用属性声明可能导致未定义行为（取决于编译器实现）

空语句：
（1）定义：单独的分号 ; 构成一条 空语句，表示不执行任何操作
（2）语法规则：空语句不需要任何属性说明符序列，直接以 ; 结尾
（3）关键特性：视为语句：空语句属于"语句"（statement）范畴，用于语法结构需要语句但无需实际操作的情况（如循环体占位）
（4）关键特性：合法存在：虽然无实际作用，但在语法上是合法的
*/
  // void c89_declaration_func() {                                                              // 变量声明必须位于复合语句开头（C89 规则）：C89 合法写法
  //   int c89_declaration_a;                                                                   // 变量声明必须位于复合语句开头（C89 规则）：声明在块开头
  //   c89_declaration_a = 10;
  //   int c89_declaration_b;                                                                   // 变量声明必须位于复合语句开头（C89 规则）：错误：声明夹在语句之间（C89 不允许）
  //   c89_declaration_b = 20;
  // }
  // void c99_declaration_func() {                                                              // 变量声明必须位于复合语句开头（C89 规则）：C99 合法写法
  //   int c99_declaration_a = 10;
  //   printf("%d\n", c99_declaration_a);
  //   int c99_declaration_b = 20;                                                              // 变量声明必须位于复合语句开头（C89 规则）：C99 起允许在语句后声明变量
  // }
  for (int c99_declaration_i = 0; c99_declaration_i < 10; c99_declaration_i++) { /*...*/ }       // 变量声明必须位于复合语句开头（C89 规则）：循环变量在初始化部分声明，C89 的局限性：无法根据逻辑动态声明变量（如条件分支中声明变量），C99 改进：允许在代码中任意位置声明变量（如循环初始化、条件分支内）
  //  
  // float c89_declaration_result = c89_declaration_sqrt(4.0);                                  // 隐式函数声明（C89 特性），隐式声明规则：隐式声明 int sqrt();（实际返回 double），问题分析：sqrt 实际返回 double，但隐式声明为 int → 返回值被错误解释。若链接时找到的 sqrt 函数返回 double，程序可能崩溃或输出垃圾值
  //
  // c89_declaration_add(c89_declaration_a, c89_declaration_b) {                                // 旧式函数定义（K&R 风格）规则：（无参数类型声明），参数类型默认为 int
  //   return c89_declaration_a + c89_declaration_b;
  // }
  // c89_declaration_sub(c89_declaration_a, c89_declaration_b)
  // int c89_declaration_a, c89_declaration_b; {                                                // 旧式函数定义（K&R 风格）规则：参数类型声明在括号后
  //     return c89_declaration_a - c89_declaration_b;
  // }                                                                                          // 旧式函数定义（K&R 风格）规则：问题：参数类型不匹配（如传递 float 会被隐式转换为 int），缺乏原型检查，易导致运行时错误
  //
  // #include <math.h>                                                                          // 现代编程建议：避免隐式函数声明：始终使用函数原型（包括标准库函数的头文件）显式包含 sqrt 的原型声明
  // int c99_declaration_main() {
  //     double result = sqrt(4.0);                                                             // 现代编程建议：正确使用
  //     return 0;
  // }
  // void c99_declaration_process_data() {
  //   for (int i = 0; i < 100; i++) { /*...*/ }                                                // 现代编程建议：使用 C99+ 标准：启用编译器选项（如 -std=c99），利用灵活的变量声明和类型检查，循环变量声明在初始化部分
  // }
  // int c99_declaration_add(int a, int b) {                                                    // 现代编程建议：禁用旧式函数定义，启用现代函数定义（原型风格）
  //   return a + b;
  // }

  // int ;                                                                    // 空声明符：空声明符错误：只有类型说明符，无声明符或标签，错误原因：编译器无法确定该声明的作用（声明变量？函数？类型？），缺少标识符，无法分配存储或生成符号表条目
  // double ;                                                                 // 空声明符：空声明符错误：同上
  // struct { int x; };                                                       // 空声明符：无效的结构体/联合体声明错误：匿名结构体未声明变量或标签，错误原因：匿名结构体/联合体必须声明变量或标签
  // union { float f; };                                                      // 空声明符：无效的结构体/联合体声明错误：匿名联合体未声明变量或标签
  int empty_declarator_x;                                                     // 空声明符：包含声明符的声明：声明变量 x
  void empty_declarator_func(int);                                            // 空声明符：包含声明符的声明：声明函数 func
  int* empty_declarator_ptr;                                                  // 空声明符：包含声明符的声明：声明指针 ptr
  struct ED_Student;                                                          // 空声明符：声明结构体/联合体/枚举标签：前向声明结构体标签 Student（不完整类型）
  enum ED_Color;                                                              // 空声明符：声明结构体/联合体/枚举标签：前向声明枚举标签 Color（C11 起支持）
  enum { ED_MAX_SIZE = 100 };                                                 // 空声明符：引入枚举常量：定义匿名枚举，引入常量 MAX_SIZE
  struct { int x, y; } empty_declarator_point;                                // 特殊场景与例外：合法：声明匿名结构体变量 point，匿名结构体/联合体的变量声明，合法性：虽然结构体匿名，但通过声明变量 point 提供了声明符
  // enum ED_Flag {};                                                         // 特殊场景与例外：C11 起合法（但无实际意义），空枚举声明（C11 起），合法性：C11 允许空枚举，但需至少有一个声明符或标签
  void empty_declarator_func1(int, double);                                   // 特殊场景与例外：合法：参数名可省略（但必须有类型），函数原型中的参数列表，函数原型中的参数列表，合法性：参数名不是声明符，但参数类型是声明的一部分

  // void vm_print_matrix(int rows, int cols, int matrix[rows][cols]) {       // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：函数参数声明为 VLA 的指针（VM 类型），matrix 的类型是 int (*)[cols]（指向二维 VLA 的指针），属于 VM 类型，函数内部可以安全地使用 rows 和 cols 定义动态大小的数组
  //   for (int i = 0; i < rows; i++) {
  //     for (int j = 0; j < cols; j++) {
  //       printf("%d ", matrix[i][j]);
  //     }
  //     printf("\n");
  //   }
  // }  
  int vm_n = 10;                                                              // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：基于 VM 类型定义新类型
  typedef int VM_ArrayType[vm_n];                                             // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：ArrayType 是 VM 类型，ArrayType 是基于变量 n 定义的 VM 类型
  VM_ArrayType vm_arr;                                                        // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：arr 是 VLA，大小为 n
  typedef VM_ArrayType* VM_PtrType;                                           // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：PtrType 是 VM 类型（指向 VLA 的指针），PtrType 继承 VM 特性，因为它指向一个 VM 类型
  VM_PtrType vm_ptr = &vm_arr;                                                // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：正确
  struct VM_S {
    int vm_n;
    // int vm_arr[vm_n];                                                      // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：VM 类型的限制：错误：结构体成员不能是 VLA（VM 类型）
    // int (*vm_ptr)[vm_n];                                                   // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：VM 类型的限制：错误：成员 ptr 是 VM 类型
  };
  static int (*vm_ptr1)[5];                                                   // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：VM 类型的限制：指向 VLA 的指针可以是静态的，正确：指向固定大小数组的指针（非 VM 类型）
  static int (*vm_ptr2)[vm_n];                                                // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：VM 类型的限制：指向 VLA 的指针可以是静态的，错误：ptr2 是 VM 类型，不能声明为 static
  static int vm_m = 10;
  static int (*vm_ptr3)[vm_m];
  // // 常见错误示例
  // int vm_file_n = 10;
  // int vm_file_arr[vm_file_n];                                              // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：错误 1：在文件作用域声明 VM 类型，错误：文件作用域不能声明 VLA（VM 类型）
  // void vm_func(int n) {
  //   int vm_arr[n];                                                         // 可变长数组（VAL）与 可变修改类型（VM 类型）声明：错误 2：跨作用域使用 VM 类型，VLA 在 func 的块作用域中
  // }
  // int main() {
  //   vm_func(5);
  //   // vm_arr 在此处已销毁，无法访问
  // }
  // // goto、switch、longjmp 相关限制
  // void vm_goto_demo(int n) {                                              // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：goto 语句与 VM 类型的限制，规则：如果 goto 语句的跳转路径绕过可变修改类型（如 VLA）的声明或初始化，会导致 未定义行为（Undefined Behavior）。编译器无法保证 VLA 的内存分配和释放逻辑在跳转后的一致性
  //   goto skip;                                                            // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：错误：跳转绕过 VLA 的声明，问题：goto 跳转到 skip 标签时，直接跳过了 VLA arr 的声明和内存分配
  //   int arr[n];                                                           // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：VLA 声明（编译器在此处隐式分配内存），后果：VLA 的内存分配逻辑被破坏，可能导致栈内存错误（如访问未分配的内存）
  // skip:                                                                   // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：goto 的限制：不可跳转绕过 VLA 的声明或初始化。VLA 的内存分配在声明点进行，跳转绕过会导致栈状态不一致，对 goto：确保跳转路径不绕过任何 VM 类型的声明。
  //   printf("Jumped over VLA declaration!");
  // }
  int vm_switch_x = 2;                                                       // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：switch 语句与 VM 类型的限制，规则：在 switch 语句中，如果某个 case 标签位于 VLA 声明的作用域内，且存在跨 case 的跳转（如 break 缺失），可能导致绕过 VLA 的声明
  switch (vm_switch_x) {
    case 1: {
      int arr[vm_switch_x];                                                  // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：VLA 在 case 1 的作用域内
      // 使用 arr
      break;
    }
    case 2:
                                                                             // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：缺少 break，导致跳转到 case 2 后可能绕过 VLA 声明，问题：若 x=2，程序会从 case 2 直接执行到 case 3，但 case 3 中声明的 VLA arr 的作用域仅限于 case 3
    case 3: {
      int arr[vm_switch_x];                                                  // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：VLA 在 case 3 的作用域内，后果：跨 case 执行可能导致 VLA 的内存分配和释放逻辑混乱
      // 使用 arr
      break;
    }                                                                        // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：switch 的限制：避免跨 case 跳转进入或绕过 VLA 的作用域。每个 case 中的 VLA 应有独立的作用域（用 {} 包裹），对 switch：为每个 case 中的 VLA 使用独立的作用域（用 {} 包裹代码块）
  }
  // #include <setjmp.h>
  // jmp_buf vm_jmp_env;
  // void vm_jmp_func(int vm_jmp_n) {                                        // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：longjmp 与 VM 类型的限制：规则：若通过 longjmp 跳转回一个已退出栈帧（即包含 VLA 的函数已返回），则访问原栈帧中的 VLA 会导致未定义行为。VLA 的内存位于栈上，函数返回后栈内存被回收，此时访问会引发内存错误
  //   int vm_jmp_arr[vm_jmp_n];                                             // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：VLA 分配在栈上
  //   setjmp(vm_jmp_env);                                                   // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：保存当前环境（包含 VLA 的栈帧）
  //                                                                         // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：函数返回后，VLA 的内存被回收
  // }
  // int main() {
  //   vm_jmp_func(5);
  //   longjmp(vm_jmp_env, 1);                                               // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：错误：跳转回已销毁的栈帧，问题：func 返回后，其栈帧（包括 VLA arr）已被销毁，但 longjmp 试图跳转回该栈帧
  //   return 0;                                                             // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：后果：访问已释放的栈内存，导致程序崩溃或数据损坏
  // }                                                                       // 可变修改类型（VM 类型） 与 goto、switch、longjmp 相关限制：longjmp 的限制：不可跳转回包含 VLA 的已退出函数栈帧。VLA 的栈内存生命周期仅限于其所在函数执行期间。对 longjmp：避免在含 VLA 的函数中使用 setjmp/longjmp，或确保跳转时函数栈帧仍有效
  
  _Static_assert(sizeof(int) == 4, "int must be 4 bytes");                   // 静态断言与声明：全局作用域中的静态断言：在文件作用域中验证 int 的大小，作用：编译时检查 int 类型是否为 4 字节。如果平台不满足此条件，编译失败，输出：若失败，编译器报错：error: static assertion failed: "int must be 4 bytes"
  struct SA_Point {
    int static_assert_x;
    int static_assert_y;
    _Static_assert(sizeof(int) == 4, "int must be 4 bytes");                 // 静态断言与声明：全局作用域中的静态断言：结构体内部的静态断言，注意：此用法需要编译器支持 C11 或更高标准
  };  
  // void static_assert_process_array(int static_assert_size) {
  //   _Static_assert(sizeof(static_assert_size) == sizeof(int), "size must be int type"); // 静态断言与声明：全局作用域中的静态断言：验证函数参数是否合法，作用：编译时检查 size 的类型是否为 int（通过 sizeof 间接验证），问题：此示例中的 _Static_assert 实际上无法直接验证 size 的类型，因为 size 是函数参数，其类型在函数声明时已确定。更典型的用法是验证常量表达式（如 _Static_assert(CHAR_BIT == 8, "Require 8-bit char");）
  //   int arr[static_assert_size];
  // }
  // // 错误用法示例
  int static_assert_x = 10;
  // _Static_assert(static_assert_x == 10, "x must be 10");                  // 静态断言与声明：全局作用域中的静态断言：错误 1：使用运行时表达式，错误：x 不是常量表达式，问题：x 是变量，其值在编译时无法确定
  _Static_assert(1, "");                                                     // 静态断言与声明：全局作用域中的静态断言：错误 2：在非声明区域使用，正确：静态断言是声明，可以出现在代码块中，注意：此示例实际是合法的，因为静态断言被视为声明，可以与其他语句混合编写（但通常不建议这样做）
  // // 实际应用场景
  // #include <stdint.h>                                                     // 静态断言与声明：全局作用域中的静态断言：场景 1：验证类型大小
  // _Static_assert(sizeof(int32_t) == 4, "int32_t must be 4 bytes");
  #define MAX_USERS 100                                                      // 静态断言与声明：全局作用域中的静态断言：场景 2：确保配置常量合法
  _Static_assert(MAX_USERS > 0, "MAX_USERS must be positive");
  _Static_assert(__STDC_VERSION__ >= 201112L, "Require C11 or later");       // 静态断言与声明：全局作用域中的静态断言：场景 3：检查平台特性

#ifdef C23_OK
  [[maybe_unused]];                                                          // 属性与声明：全局作用域中的属性声明（可能无效，无具体修饰对象），不推荐：未关联任何声明
  [[nodiscard]] int attribute_calculate();                                   // 属性与声明：正确用法：属性修饰变量声明，提示调用者不要忽略返回值
  // int main() {                                                         
  //   [[deprecated]];                                                       // 属性与声明：函数内部的属性声明（可能无效），不推荐：未关联任何声明
  //   [[maybe_unused]] int attribute_x;                                     // 属性与声明：正确用法：属性修饰局部变量，忽略未使用警告
  //   return 0;
  // }
  // while (wait_for_input()) 
  //   ;                                                                        // 空语句：空语句在循环中的应用，表示循环体无操作
  // if (error_occurred)
  //   ;                                                                        // 空语句：条件语句中的占位，表示不处理错误
  // else
  //   handle_success();  
  // // 常见错误与注意事项
  [[deprecated]];                                                            // 属性与声明：错误 1：单独使用属性声明，警告：未关联任何声明（编译器可能忽略或报错），修正：将属性关联到具体声明：[[deprecated]] void old_func(); // 正确：修饰函数声明
  [[nodiscard]];                                                             // 属性与声明：错误 2：混淆属性声明与空语句，意图添加属性，但实际是空语句，错误：属性未关联任何声明，修正：明确属性的修饰目标：[[nodiscard]] int get_value(); // 正确：修饰函数声明
  ;                                                                          // 属性与声明：正确：空语句
  // // 实际应用场景
  [[maybe_unused]] static int debug_flag;                                    // 属性与声明：场景 1：抑制编译器警告，避免未使用警告
  [[deprecated("Use secure_api() instead")]]
  void legacy_api();                                                         // 属性与声明：场景 2：标记废弃函数，调用时触发编译警告
  while (!is_ready())                                                        // 属性与声明：场景 3：循环体占位，等待条件满足，无需执行操作
  ;                                                                          // 空语句
#endif // C23 支持

/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

  print_purple("declaration end...\n");

  /*
  指针，详细移至 pointers.c 文档
  指针是一种对象类型，它引用函数或另一种类型的对象，可以添加限定符。指针亦可以不引用任何内容，这通过一个特定的空指针值指示
  指针是用来存储内存地址的数据类型，可以引用（指向）函数或其他类型的对象。通过指针，可以访问和修改这些对象。指针可以是空指针，表示它不指向任何有效对象或函数。指针还可以添加限定符，如 const，以限制其使用

  指针语法
  类型说明符序列 * 属性说明符序列(可选) 限定符序列(可选) 声明符
  在指针声明的声明文法中：
  类型说明符序列 代表所指向的类型可以是函数或对象类型也可以是不完整类型、
  属性说明符序列 属性在C23引入应用到被声明的指针的可选属性列表
  限定符序列 包括 const、volatile等修饰符它们修饰指针或指针所指向的对象
  指针符号 * 
  声明符 包含指针的标识符以及指针的层次结构例如指向指针的指针

  使用：指针用于间接使用，这是种普遍存在的编程技巧；它们可以用于实现按引用传递语义，访问有动态存储期的对象，实现“可选”类型（使用空指针值），结构体间的聚合关系，回调（使用指向函数指针），泛型接口（使用指向 void 的指针）以及其他更多
  按引用传递语义 在函数调用时，我们通常按值传递参数，这意味着函数得到的是参数的一个副本。有时我们希望函数能够直接修改传递给它的变量，这时可以使用指针来实现按引用传递
  访问有动态存储期的对象 通过动态内存分配（如 malloc 和 free），我们可以在运行时分配和释放内存，这些内存块的生命周期可以跨越函数调用
  实现 “可选” 类型 指针可以用来表示一个“可选”值（例如，指针为 NULL 表示没有值）
  结构体间的聚合关系 通过指针，可以实现结构体之间的聚合关系，例如链表、树等数据结构，结构体之间的聚合关系是一种常见的设计模式，它允许一个结构体包含另一个结构体的实例或指针。这种关系可以通过指针来实现，使得不同结构体能够协同工作，彼此引用，从而构建更复杂的数据结构和系统
  回调（使用指向函数的指针）函数指针可以用来实现回调机制，使得函数的行为可以在运行时灵活变化
  泛型接口（使用指向 void 的指针）void 指针可以指向任何类型的数据，常用于实现泛型接口

  1、指向对象的指针
  对象指针初始化 指向对象的指针可以通过应用于对象类型（可以不完整）表达式的取址运算符初始化，即指针初始化可以通过应用于对象类型表达式的取址运算符来初始化指向对象的指针
  * 一元运算符(对象) 指针可以出现作为间接运算符（一元 *）的操作数，它返回标识所指向对象的左值，即在 C 语言中，指针可以通过间接运算符（即一元 *）来访问它所指向的对象，可以通过这种方式对指针所指向的对象进行读取和修改操作，指针在操作内存和变量时使得我们能够通过指针间接访问和操作变量的值
  -> 运算符(结构体联合体) 指向结构体和联合体类型的对象的指针亦可作为经由指针的成员访问运算符 -> 的左操作数出现，在 C 语言中，当我们使用指针指向结构体或联合体类型的对象时，可以通过箭头运算符 -> 来访问结构体或联合体的成员。这种运算符的使用简化了指针操作，使得代码更加易读
  隐式转换算术运算(数组) 因为数组到指针具有隐式转换，指向数组首元素的指针可通过数组类型表达式初始化，有一些加法、减法、复合赋值、自增和自减运算符对指向数组元素的指针有定义，在 C 语言中，数组名在大多数表达式中会被隐式转换为指向其第一个元素的指针。这使得我们可以方便地通过数组名来初始化指向数组元素的指针。此外，指向数组元素的指针也可以进行一些指针运算，如加法、减法、自增和自减运算等
  指针比较运算符 比较运算符在一些情况下对指向对象的指针有定义：两个表示相同地址的指针比较相等，两个空指针值比较相等，比较指向同一数组的元素的指针以两个元素的数组下标进行比较，以及指向结构体成员的指针以这些成员的声明顺序进行比较，许多实现亦提供对任意来源指针的严格全序，例如若它们实现在连续（“平直”）的虚拟地址空间上，关键点 比较相同地址的指针、空指针比较、指向同一数组的指针比较、指向结构体成员的指针比较、任意来源指针的严格全序
   
  2、指向函数的指针
  函数的指针初始化 指向函数的指针可由函数地址初始化。因为函数到指针转换，取址运算符是可选的
  函数传递 不同于函数，指向函数的指针是对象，从而能存储在数组中，被复制、赋值，作为参数传递给其他函数等等
  函数指针调用 指向函数的指针可以用作函数调用运算符的左操作数；这会调用所指向的函数，即指向函数的指针可以用作函数调用运算符 () 的左操作数，这意味着你可以通过函数指针来调用它所指向的函数，函数指针的定义：函数指针是一个指向函数的指针。它可以存储函数的地址，从而可以通过这个指针来调用函数、用函数指针调用函数：当一个函数指针指向一个函数后，可以像普通函数一样使用函数调用运算符 () 来调用这个函数
  解引用 对函数指针进行解引用会得到所指向函数的函数指示符
  函数比较 相等性比较运算符定义于指向函数的指针（若指向相同函数则它们比较相等）因为函数类型的兼容性忽略函数形参的顶层限定符，指向仅在形参的顶层限定符有区别的函数指针是可互换的，即在 C 语言中，函数指针可以用来指向函数，并且可以通过比较运算符来判断两个函数指针是否指向同一个函数。此外，函数类型的兼容性规则会忽略函数形参的顶层限定符（如 const 和 volatile），因此这些限定符不会影响函数指针的比较和互换性
  
  3、指向 void 类型的指针
  指向任意类型对象的指针能隐式转换成指向 void 的指针（可选地有 const 或 volatile 限定），反之亦然
  指向 void 的指针用于传递未知类型的对象，这在泛型接口中常用：malloc 返回 void*，qsort 期待用户提供接受两个 const void* 实参的回调。pthread_create 期待用户提供接受并返回 void* 的回调。所有情况下，调用方负责在使用前将指针转换到正确的类型，即在 C 语言中，void* 类型的指针是一种通用指针类型，可以指向任何类型的对象。这使得 void* 非常适合用于泛型接口，例如内存分配、排序函数和多线程编程
  
  4、空指针
  每种类型的指针都有一个特殊的值，称为该类型的 “空指针值”。值为 null 的指针不指向任何对象或函数（解引用空指针是未定义行为），并且与同一类型值也为 null 的所有指针比较相等
  要将指针初始化为 null 或者将 null 值赋给已有的指针，可以使用空指针常量（如 “NULL” 或者任何其他值为零的整数常量）。“静态初始化” 也会将指针初始化为它们的 null 值
  空指针可以表示对象不存在，也可以用于表示其他类型的错误情况。通常，接收指针参数的函数几乎总是需要检查该值是否为空，并以不同的方式处理这种情况（例如，当传递空指针时，free不执行任何操作）

  5、在 C 语言中，指针和类型转换涉及许多复杂的规则和未定义行为
  严格别名规则 严格别名规则规定，解引用一个指针时，如果该指针的类型与对象的声明类型不同，则几乎总是会导致未定义行为。这是为了优化编译器的代码生成
  restrict 关键字 restrict 关键字是在 C99 中引入的，用于指示一个指针是唯一访问某一块内存的手段。这意味着通过该指针访问的内存不会被其他指针别名，从而允许编译器进行更多的优化
  数组到指针的转换 在大多数情况下，数组类型的左值表达式会隐式转换成指向数组首元素的指针。这个转换称为“数组到指针转换” 个别情况见 arrays.c 说明
  指针指向char类型 在 C 语言中，指向 char 类型的指针通常用于表示字符串。字符串是以 '\0'（空字符）结尾的 char 数组。为了表示合法的字符串，指针必须指向 char 数组的元素，并且数组中必须有一个或多个 '\0' 字符以示字符串的结束
  */
  float *p;            // 简单指向对象的指针 类型说明符序列 float 说明指针 p 指向 float 类型的对象、声明符 *p 表示 p 是一个指针，指向 float 类型
  float **pp;          // 指向指针的指针 类型说明符序列 float 说明指针 pp 指向的是一个指向 float 类型对象的指针、声明符 **pp 表示 pp 是一个指向指针的指针，而这个指针指向 float 类型
  int (*fp)(int);      // 指向函数的指针 类型说明符序列 int 说明 fp 最终指向的函数返回 int 类型、声明符 (*fp)(int) 表示 fp 是一个指向函数的指针，这个函数接受一个 int 参数，返回 int 类型
  // int* fn(int);     // 返回指针的函数 类型说明符序列 int*，表示返回一个指向 int 的指针、声明符 fn(int) 表示 fn 是一个函数，这个函数接受一个 int 参数，并返回一个 int* 类型的值
  const int *pc;       // 带限定符的指针 pc 是一个指向 const int 的指针，这意味着通过 pc 不能修改它所指向的 int 值
  int * const cp;      // 带限定符的指针 cp 是一个 const 指针，指向一个 int，这意味着 cp 本身不能指向其他地址，但可以修改它所指向的 int 值
  int * const * pcp;   // 带限定符的指针 pcp 是一个指向 const 指针（该指针指向 int）的指针，这意味着 pcp 可以修改所指向的 const 指针
  // [[deprecated]] int *ptr; // 带属性说明符序列的指针(C23起) ptr 是一个指针，指向 int，并且标记为 deprecated

  int *nnp;            // 1、指向对象的指针
  int *const *nnpp;
  int ** const nnpp1;
  int (*arrp)[2];
  int (*ele)[3][3]; 
  struct S { int n; } s = {1};
  struct S* ssp;

  void (*pf1)(int);    // 2、指向函数的指针                       

  int nv = 1, *pv=&nv; // 3、指向 void 类型的指针
  void* pvv = pv;
  int* pv2 = pvv;
  void* thread_function(void *arg);

  int *nup1 = NULL;    // 4、空指针
  int *nup2 = 0;
  static int *nup3;

  int az = 42;         // 5、指针注解         
  float *pz = (float *)&az;
  int resa[] = {1, 2, 3, 4, 5};
  int *restrict resap = resa;
  int arrays[5] = {1, 2, 3, 4, 5};        
  int *arraysp = arrays;
  char str1p[] = "Hello, World!";                    
  char str2p[] = {'H', 'e', 'l', 'l', 'o', '\0'};    
  char *str1p1 = str1p;                              
  char *str2p2 = str2p;

  /*
  数组，详情移至 arrays.c 文档
  数组是由连续无空隙分配的，拥有特定元素类型的对象构成的。这些对象的数目数量（数组大小）在数组生存期间决不改变
  在数组声明的声明语法中，类型说明符的序列指定元素类型（必须是一个完整对象类型如 int、char），声明符 的形式为 [10]、[restrict 10]
  一般的数组 声明符 的语法
  [static(可选) 限定符(可选) 表达式(可选)] 属性说明符序列(可选)
  [限定符(可选) static(可选) 表达式(可选)] 属性说明符序列(可选)
  未指定大小的 VLA 的声明符（只能出现于函数原型作用域）
  [限定符(可选) * ] 属性说明符序列(可选) 
  表达式 任何无逗号运算符的表达式，表明数组中的元素数量
  限定符 const、restrict 和 volatile 限定符的任意混合，只允许出现于函数形参列表中，它们对数组形参所转换得到的指针类型赋予限定
  属性说明符序列	(C23起)可选的属性列表，应用到被声明的数组

  基本声明形式：int arr[10];，声明一个包含 10 个 int 的数组
  带 const 限定符：void foo(const int arr[10]); 声明一个参数不能修改的数组
  带 static 关键字：void bar(int arr[static 10]); 提示编译器数组至少有 10 个元素
  带 restrict 限定符：void baz(int arr[restrict 10]); 提示编译器优化指针访问
  未指定大小的 VLA：void qux(int n, int arr[n][*]); 声明一个可变长度数组
  属性说明符序列：void fun(int arr[10] [[deprecated]]); 向编译器传达额外信息 

  数组类型有几种变体：已知常量大小的数组、变长度数组，以及未知大小数组
  1、已知常量大小数组 若数组声明符中的 表达式 为整数常量表达式，拥有大于零的值，且元素类型是一种拥有已知常量大小的类型（即元素不是VLA） (C99起)，则声明符声明的是已知常量大小的数组，
  已知常量大小的数组可以用数组初始化器提供它们的初始值
  在函数形参列表中，数组声明符中允许有额外的语法元素：关键词 static 及 限定符，它们可以以任意顺序在大小表达式之前出现（即便省略大小表达式也可以出现它们）
  对于函数中在数组形参的 [ 和 ] 中使用关键词 static 的情况，每次对这种函数函数调用中，实际参数的值必须是一个指向数组首地址的合法指针，该数组至少有 表达式 所指定的元素数目
  若存在 限定符，则它们对数组参数类型所转换得的指针类型赋予限定，在 C 语言中，当函数参数是数组时，在实际传递过程中，数组会自动转换为指向其首元素的指针类型。如果在这个数组参数的声明中存在限定符（比如 const、volatile 等），那么这些限定符会对转换后得到的指针类型施加相应的限定作用

  2、变长度数组 非常量长度数组 若 表达式 不是整数常量表达式，则数组声明器声明一个非常量大小的数组（VLA）
  变长数组（VLA, Variable Length Array）和变长修改类型（VM, Variable Modified type）有一些特定的限制和要求，变长数组 (VLA): 数组的大小在编译时未知，而在运行时确定的数组、变长修改类型 (VM): 包含VLA或者指向VLA的指针的类型
  每次控制流经过该声明时，会求值 表达式（而且它必须每次求值为大于零的值），然后分配数组（对应地，VLA 的生存期在其声明离开作用域时结束）。VLA 实例的大小不会在其生存期中改变，但在另一次经过同一代码时，它可能被分配不同大小
  若大小是 * ，则声明是对于未指定大小的 VLA 的。这种声明只能出现于函数原型作用域，并声明一个完整类型的数组。其实，所有函数原型作用域中的 VLA 声明符都被处理成如同用 * 替换 表达式
  变长数组 非常量长度数组与从它们派生的类型（指向它们的指针，等等）被通称为“可变修改类型”（VM）。任何可变修改类型的对象只能声明于块作用域或函数原型作用域中
  VLA 必须拥有自动或分配存储期，指向 VLA 的指针但不是 VLA 自身亦可拥有静态存储期，VM 类型不能拥有链接
  变长数组 可变修改的类型不能是结构体或联合体的成员，变长数组和变长修改类型不能作为结构体或联合体的成员。原因在于结构体和联合体的大小在编译时必须是确定的，而VLA的大小在编译时是未知的
  C标准允许编译器定义一个宏常量 __STDC_NO_VLA__ 来指示是否支持VLA和VM类型：C99标准: 如果定义为1，表示编译器不支持VLA和VM类型、C11标准（到C23前）: 如果定义为1，表示编译器不支持具有自动存储期的VLA对象，但仍必须支持分配存储期的VLA对象

  3、未知大小数组 若忽略数组声明器中的 表达式，则它声明一个未知大小数组。
  除了函数形参列表中的情况（这种数组被转换成指针），以及有初始化器的情况之外，这种类型都是不完整类型（注意，以 * 代替大小声明的拥有未指定大小的 VLA 是完整类型） (C99起)
  在 struct 定义中，未知大小数组可以作为最后一个元素出现（只要有至少一个其他具名成员），这种情况下，这是称为柔性数组成员的特殊情形。细节见 structure.c 文档

  4、限定符 在C99及以后的标准中，如果数组类型声明中有 const、volatile 或 restrict 限定符，这些限定符实际上应用于数组的元素类型，而不是数组类型本身。这可以通过使用 typedef 来实现
  在C23之前的标准中，数组类型被认为与其元素类型具有相同的限定符。这意味着数组类型本身没有 const、volatile 或 restrict 限定符，只是其元素类型具有这些限定符
  在C23标准中，对数组类型的处理更为严格，数组类型本身被认为具有这些限定符。如果一个数组是 const 的，那么这个数组类型也被认为是 const 的，因此不允许将 const 数组类型转换为 void* 指针
  在C标准中，不允许直接将 _Atomic 限定符应用于数组类型，但允许数组的元素类型是原子类型

  5、赋值 数组类型的对象不是可修改左值，尽管它们可以取地址，但它们不能出现于赋值运算符的左侧。不过，拥有数组成员的结构体是可修改左值，并可以赋值
  在C语言中，数组名本身不是可修改左值。这意味着你不能直接对一个数组整体进行赋值操作。数组名在表达式中通常会被转换为指向其第一个元素的指针，但它不能出现在赋值运算符的左侧
  结构体是可修改左值: 与数组不同，结构体类型的对象是可修改左值。这意味着你可以对结构体整体进行赋值操作。即使一个结构体包含数组成员，结构体整体仍然是可修改的，这是因为结构体在C语言中的定义允许对整个结构体对象进行操作，包括赋值、传递和返回。这些操作会触发对结构体中所有成员（包括数组成员）进行逐成员的赋值或拷贝

  6、数组到指针转换 在C语言中，数组到指针的隐式转换是一种常见的操作。这个转换在特定的上下文中会自动发生，将数组类型的左值表达式转换为指向其第一个元素的指针。这种转换的结果是一个非左值指针，可以用于指向数组的元素
  隐式转换的上下文不会转换为指针的情况：作为取地址运算符（&）的操作数、作为 sizeof 运算符的操作数、作为 typeof 和 typeof_unqual 的操作数（C23起）、作为用于数组初始化的字符串字面量、作为 _Alignof 的操作数（C11起）
  数组类型的左值表达式会隐式转换为指向其首元素的指针：函数参数、表达式中的操作数
  当数组类型用于函数形参列表时，它会转换成对应的指针类型： int f(int a[2]) 和 int f(int* a) 声明同一个函数。因为函数实际参数类型为指针类型，使用数组实参的函数调用会进行一个数组到指针转换；被调用函数无法获得实参数组的大小，所以必须显式传递size  

  7、多维数组 当数组的元素是另一个数组时，我们称数组是多维的
  当用数组到指针转换时，多维数组被转换成指向其首元素的指针，例如指向首行的指针
  若支持 VLA 则 (C11 起)多维数组可以在每一维度可变修改，允许数组的每一维度在运行时动态确定大小。例如，int am2[nm][2*nm] 是一个二维VLA数组，大小在运行时由 nm 决定

  8、零长度数组 在C语言标准中，不允许声明零长度数组。这意味着你不能定义一个长度为零的数组
  一些编译器（特别是C99标准之前）提供零长度数组作为扩展，典型用例是实现柔性数组成员（FAM）。柔性数组成员在结构体中用于定义可变长度的最后一个数组成员

  9、副作用
  可变长度数组（VLA）VLA 是C99引入的一种特性，允许数组的大小在运行时确定，而不是编译时
  大小表达式的副作用：如果VLA的大小表达式中包含副作用，编译器保证这些副作用将正确产生。副作用是指表达式在求值过程中对程序状态的改变，例如++（递增）操作符
  */
  float cats[11], *dogs[17];       // cats 是 11 个 float 组成的数组，dogs 是 17 个指向 float 的指针组成的数组
  const int arrc[10];              // 这声明了一个长度为 10 的 const int 数组 arrc，数组中的元素是常量，这意味着一旦初始化后，其元素值不能被修改
  static int arrs[10];             // 如果声明在函数外 static 关键字使得这个数组的作用域被限制在声明它的文件中（文件作用域），但其生命周期是整个程序运行期间、如果声明在函数内：static 关键字使得数组在函数的多次调用间保持其值（静态局部变量）
  // int arrr[restrict 10];        // 非法 限定符 const、restrict 和 volatile 限定符的任意混合，只允许出现于函数形参列表中，它们对数组形参所转换得到的指针类型赋予限定
  // int arrvla[10][*];            // 非法 若大小是 * ，则声明是对于未指定大小的 VLA 的。这种声明只能出现于函数原型作用域，并声明一个完整类型的数组
  void fool(int arrc[const 10]);
  void bar(int arrs[static 10]);
  void baz(int arrr[restrict 10]);
  void qux(int n, int arrvla[n][*]);

  int n[10];                      // 1、整数常量是常量表达式
  char o[sizeof(double)];         // sizeof 是常量表达式
  enum { MAX_SZ=100 };
  int nea[MAX_SZ];                // 枚举常量是常量表达式
  int arra[5] = {1,2,3};          // 声明 int[5] 数组 且初始化为 1,2,3,0,0
  char str[] = "abc";             // 声明 char[4] 数组 且初始化为 'a','b','c','\0'
  double fa[10] = {0}, fb[20] = {0};
  const int arrct[] = {0, 1, 2, 3}; // 等价于 const int * arrct; 数组作为参数传递时会退化为指针
  volatile int arrvl[] = {0, 1, 2, 3}; // 等价于 volatile int * arrxl; 数组作为参数传递时会退化为指针
  // restrict int arrrt[10];        // 非法 restrict 只能用于指针，而不能直接用于数组声明，int arrrt[10]; int *restrict p = arrrt; // p 是一个指向数组 arrr 的 restrict 指针

  int n1 = 3;                       // 2、变长数组
  int A[n1];                        // 变长数组 可变修改类型的对象声明于块作用域
  int (*p2)[n1];                    // 变长数组指针 可变修改类型的对象声明于块作用域
  void fvla(int m, int C[m][m]);    // 变长数组指针 可变修改类型的对象声明于函数原型作用域
  void quB(int n, int ala[n][*]);   // 变长数组指针 可变修改类型的对象声明于函数原型作用域
  int arrvla[n1];                   // arr 是一个 VLA，具有自动存储期
  int *arrn = malloc(n1 * sizeof(int)); // arrn 是一个 VLA，由 molloc 分配，动态分配内存
  // static int arr[n1];                // 这是不合法的，VLA 不能具有静态存储期，尝试声明一个静态VLA
  int *static_pointer = arrn;            // 静态指针指向 VLA，指针具有静态存储期，VLA具有自动存储期
  // struct tag {                       // 可变修改的类型不能是结构体或联合体的成员
  //   int z[n1];                       // 错误： VLA 结构体成员
  //   int (*y)[n1];                    // 错误： VM 结构体成员
  // }; 

  extern int x[];                // 3、未知大小的数组 x 的类型是“边界未知的 int 数组”
  int aun[] = {1,2,3};           // a 的类型是“3 个 int 的数组”
  struct s {int n; double d[];}; // s.d 是柔性数组成员
  struct s *s1 = malloc(sizeof (struct s) + (sizeof (double) * 8)); // 如同 d 是 double d[8]

  typedef int cA[2][3];                         // 4、在这个例子中，typedef 定义了一个二维数组类型 cA。当我们声明 const cA ca 时，实际上我们声明的是一个二维数组，其元素类型是 const int。因此，ca[0] 的类型是 const int*，而不是 int*，这就是为什么尝试将 ca[0] 赋值给 int* 指针 pi 会产生错误
  const cA ca = {{4, 5, 6}, {7, 8, 9}};         // const int 的数组的数组
  int* cpi = ca[0];                             // ca[0] 类型为 const int*
  void *unqual_ptr = ca;                        // C23 前 OK；C23 起错误 C23之前，将一个 const 数组类型转换为 void* 是合法的，因为数组类型本身没有 const 限定符，仅其元素类型有、在C23标准下，这个转换将被视为错误，因为 ca 是一个 const 数组类型，不能转换为一个未限定的 void* 指针
  typedef int tA[2];
  // _Atomic tA ta0 = {0};    // 错误，_Atomic tA ta0 和 _Atomic(tA) ta1 是错误的，因为 _Atomic 不能应用于数组类型
  // _Atomic(tA) ta1 = {0};   // 错误，_Atomic tA ta0 和 _Atomic(tA) ta1 是错误的，因为 _Atomic 不能应用于数组类型
  _Atomic int ta2[2] = {0};  // OK，_Atomic int ta2[2] 和 _Atomic(int) ta3[2] 是合法的，因为它们声明了一个数组，其元素类型是 _Atomic int
  _Atomic(int) ta3[2] = {0}; // OK，_Atomic int ta2[2] 和 _Atomic(int) ta3[2] 是合法的，因为它们声明了一个数组，其元素类型是 _Atomic int

  int aq[3] = {1, 2, 3}, bq[3] = {4, 5, 6};     // 5、赋值
  int arrq[5];
  int *pq = arrq;                               // 合法，arrq 被转换为指向其第一个元素的指针
  // arrq = {1, 2, 3, 4, 5};                    // 错误，不能对数组整体赋值
  int (*pq1)[3] = &aq;                          // OK，可以取地址
  // aq = bq;                                   // 错误，aq 是数组
  struct { int cq[3]; } sq1, sq2 = {3,4,5};
  sq1 = sq2;                                    // OK：可以对拥有数组成员的结构体赋值

  int arrcs[5];                     // 6、数组到指针的转换
  int (*pcs)[5] = &arrcs;           // pcs 是指向数组的指针，当数组作为 & 运算符的操作数时，得到的是数组的地址，而不是数组首元素的指针
  size_t sizecs = sizeof(arrcs);    // sizecs 是数组的大小，单位是字节，当数组作为 sizeof 运算符的操作数时，得到的是数组的大小，而不是指向数组首元素的指针
  typeof(arrcs) another_arrcs;      // another_arrcs 是与 arrcs 类型相同的数组，typeof 和 typeof_unqual 运算符会获得数组的真实类型，而不是进行隐式转换，需要 C23 支持，假设 typeof 是可用的
  char strcs[] = "hello";           // strcs 是字符数组，包含字符串 "hello" 和结尾的 '\0'，字符串字面量用于初始化字符数组时，不会发生隐式转换
  size_t aligncs = _Alignof(arrcs); // aligncs 是数组的对齐要求，_Alignof 运算符会获得数组的对齐要求，而不是进行隐式转换  
  register int rarr[5];             // register 修饰符和数组 如果声明一个数组为 register，则尝试对该数组取地址的行为是未定义的。这是因为 register 修饰符建议编译器将变量存储在寄存器中，而不是内存中，数组通常不适合存储在寄存器中，这是因为 register 修饰符和数组的存储需求冲突，编译器无法保证将数组存储在寄存器中
  // int *rp = &rarr;               // 错误：行为未定义，不能取 `register` 数组的地址  

  int a1[2] = {1, 2};                    // 7、一维数组 元素个数 1，2
  int *pm0 = a1;                         // 指向一维数组的首元素
  int am[2][3] = {{1,2,3}, {4,5,6}};     // 二维数组 2x3 矩阵（2 个元素的数组，每个元素为 3 个 int 的数组）可视作行主导排列的 2x3 矩阵
  int (*pm1)[3] = am;                    // 指向首个 3 个元素行的指针、pm1 是一个指向包含3个整数的数组的指针、am 被隐式转换为指向它的首行的指针，即 int (*)[3] 类型
  int bm[3][3][3];                       // 三维数组 3x3x3 立方体
  int (*pm2)[3][3] = bm;                 // 指向首个 3x3 平面的指针 、pm2 是一个指向 3x3 二维平面的指针、bm 被隐式转换为指向其首个 3x3 平面的指针，即 int (*)[3][3] 类型
  int nm = 10;
  int am2[nm][2*nm];                     // 若支持 VLA 则 (C11起)多维数组可以在每一维度可变修改

  int arrv[0];    // 8、这是非法的，标准C语言不允许声明零长度数组
  struct Sts {    // C99及以后的标准：引入了柔性数组成员的标准语法
    int n;
    int arr[];    // 柔性数组成员，允许在定义结构体时不指定数组大小
  };

  int nval = 5;
  int narrvl[nv];                               // 9、合法的VLA语法，数组大小由变量nv决定
  int nv1 = 5, mv1 = 5;
  size_t szv1 = sizeof(int (*[nv1++])[mv1++]);  // nv1 和 mv1 作为数组大小表达式的一部分，int (*[nv1++])[mv1++]：这是一个指向大小为mv1++的数组的指针数组，其大小为nv1++、sizeof 操作符：计算表达式的大小，而不实际创建该类型的对象，副作用保证：C标准保证在上述表达式中nv1会被自增，mv1也会被自增，但在某些情况下（如sizeof操作的结果不依赖副效应时），mv1可能不会被自增，具体行为：语句执行后，nv1一定会增加1，而mv1可能增加也可能不增加，这取决于编译器的实现和优化

  /*
  枚举类型 enum，详细见 enumerated.c 文档
  枚举类型是独立的类型，其值为包含所有其显示命名的常量（枚举常量）的底层类型的值
  
  enum 属性声明符序列(可选) 标识符(可选) { 枚举项列表 } 
  声明没有固定底层类型的枚举，其中枚举项列表是枚举项的逗号分隔列表（允许尾随的逗号）(C99 起)，每个 枚举项 拥有形式：枚举常量 属性声明符序列 (可选)、枚举常量 属性声明符序列 (可选) = 常量表达式
  enum 属性声明符序列(可选) 标识符(可选) : 类型 { 枚举项列表 } 
  声明固定底层类型为 类型 的枚举(C23起)，其中枚举项列表是枚举项的逗号分隔列表（允许尾随的逗号）(C99 起)，每个 枚举项 拥有形式：枚举常量 属性声明符序列 (可选)、枚举常量 属性声明符序列 (可选) = 常量表达式

  标识符, 枚举常量：是由此声明引入的标识符
  常量表达式：整数常量表达式，其值以 int 类型的值表示(C23前)、若枚举具有固定底层类型则其可以表示为类型的值(C23起)
  属性声明符序列：(C23)可选的属性列表，若出现在 enum 后则应用到整个枚举，若出现在枚举常量后则应用到枚举项

  ? 枚举类型为什么只占4个字节(默认int类型的情况下) ？枚举的大小是按照 enum 中元素最大值所占的内存大小来决定的，不像结构体那样有多少个元素就按各个元素所占字节叠加、当枚举成员的值小于 4 个字节时，占 4 个字节、当枚举成员的值大于 4 个字节时，最大只能是 long long 类型，占 8 个字节

  在枚举说明符的主体中出现的每个枚举常量在封闭作用域中成为一个整数常量，类型为 int（C23前），并且可以在需要整数常量的任何时候使用（例如，作为 case 标签或作为非可变长度数组大小

  C语言中枚举常量（enumeration constant）的类型推导规则 6条
  1、如果是同一枚举常量的重新声明，则为先前声明的类型
  2、对于具有固定基础类型的枚举，则枚举所用为固定类型
  3、如果枚举器列表中没有先前的枚举常量，并且没有带有定义整数常量表达式的显式 =，则为 int
  4、如果使用 = 明确给出，并且整数常量表达式的值可以用 int 表示，则为 int
  5、如果使用 = 明确给出，并且整数常量表达式的值不能用 int 表示，则为整数常量表达式的类型
  6、上一个枚举常量的值的类型加上 1。如果这样的整数常量表达式会溢出或绕过前一个枚举常量的值（从加 1 开始），则该类型将采用以下任一类型：大小合适的有符号整数类型（不包括位精度有符号整数类型），能够表示前一个枚举常量的值加 1、大小合适的无符号整数类型（不包括位精度无符号整数类型），能够表示前一个枚举常量的值加 1
  如果要添加的前一个枚举常量是有符号整数类型，则选择有符号整数类型。如果前一个枚举常量是无符号整数类型，则选择无符号整数类型、如果之前没有大小合适的整数类型可以表示新值，则枚举没有能够表示其所有值的类型
  
  C23标准中，枚举类型的兼容类型和底层类型的选择规则
  1、每个无固定底层类型的(C23起)枚举类型与如下之一兼容：char、有符号整数类型或无符号整数类型（不包括 bool 和位精确整数类型）
  2、对于任何枚举类型，哪一个类型是兼容的是实现定义的，但无论是那种类型，都必须有足以表示该枚举中所有枚举项的值
  3、对于所有具有固定底层类型的枚举，枚举的类型均与枚举的底层类型兼容
  4、没有固定底层类型的枚举类型，在其完成处枚举成员的类型为：如果枚举的所有值均可表示为一个 int 则为 int，否则，为枚举的类型
  5、所有枚举均有底层类型，可以通过用 enum-类型说明符 显式指定底层类型，并作为其固定底层类型，如果未显式指定，则其底层类型为枚举的兼容类型，它为有符号或无符号的整数类型 或 char (C23起)

  1、若 枚举常量 后随 = 常量表达式 ，则其值为该常量表达式的值。若 枚举常量 没有后随 = 常量表达式 ，则其值是比同一枚举中前一枚举项的值大一的值。首个枚举项（若它不用 = 常量表达式 ）的值是零
  2、若使用 标识符 则其自身成为标签命名空间中枚举类型的名称，且需要使用关键词 enum （除非 typedef 到通常命名空间）
  3、枚举类型是整数类型，从而可以用于任何其他整数类型能用之处，包括隐式转换和算术运算符

  引入枚举类型和一或多个枚举常量的声明亦可声明一或多个该类型的对象：引入枚举类型和一或多个枚举常量的声明时，可以同时声明一个或多个该枚举类型的对象。这意味着在定义枚举类型的同时，也可以创建该类型的变量，而不必分两步进行
  局部枚举变量 定义了一个枚举类型 zoo 和两个枚举变量 cats 和 catsp
  zoo 是枚举类型的名称、CAT, DOG, RABBIT 是枚举常量，且紧随声明 cats = CAT <=> enum zoo cats = CAT; 且紧随声明 *catsp = &cats <=> enum zoo *catsp = &cats;

  枚举允许以比 #define 更加便利和结构化的方式生成具名常量；它们可见于调试器，遵循作用域规则，并且参与类型系统
  #define TEN 10
  struct S {int x : TEN;};  // OK
  enum {TEN = 10};
  struct S {int x : TEN;};  // 也 OK
  constexpr int TEN = 10;   (自 C23 起也可用 constexpr 来达成相同目的)
  struct S {int x : TEN;};  // 也 OK

  由于 C 中结构体或联合体不建立其作用域，可以在前者(结构体或联合体)的成员说明中引入枚举类型及其枚举常量，而之后其(枚举类型)作用域与前者(结构体或联合体)相同
  */
  enum color {RED, GREEN, BLUE}; // 全局命名的枚举类型
  enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY}; // 全局匿名的枚举类型
  enum day {MON = 1, TUES, WEDNES, THURS, FRI, SATUR, SUN}; // 全局带有显式值的枚举类型
  enum __attribute__((aligned(4))) log_aligned {INFO, WARN, ERROR}; // 全局带有属性声明符的枚举类型 __attribute__((aligned(8))) 是 GCC 扩展的属性语法，需要在类型名称前使用，为枚举类型设置对齐方式，但是，当该属性用于枚举类型时，并不能达到预期效果。原因在于，枚举类型的对齐方式是由编译器决定的，并且编译器通常会根据枚举的基础类型（通常是 int）来选择对齐方式
  // enum __attribute__((packed)) Status : uint8_t { OK = 0, WARNING = 1, ERROR = 255 }; 声明固定底层类型为 uint8_t 的枚举类型 (C23起)
  typedef enum book {C, CPLUSPLUS, GO, RUST, PYTHON} program_Book; // 使用 typedef 重新定义 enum 类型  
  enum color c = RED;                           // 声明一个 color 枚举类型的变量
  int today = MONDAY;                           // 使用匿名枚举类型的值
  int cr = GREEN;
  enum day tday = WEDNES;                       // 声明一个 day 枚举类型的变量
  enum log_aligned log_level = INFO;            // 声明一个 log_aligned 枚举类型的变量  
  switch(c) // 作为 case 标签 使用
  {
  case RED:
      print_purple("color is red.\n");
      break;
  case GREEN:
      print_purple("color is green.\n");
      break;
  case BLUE:
      print_purple("color is blue.\n");
      break;
  }
  enum color0 { RED1 };
  enum color1 { BLUE1 = RED1 };                               // 1、同一枚举常量的重新声明 ：RED 的类型为 enum Color1
  // enum FixedEnum : unsigned int { A = 1, B = 2 };          // 2、固定基础类型的枚举 ：A 和 B 的类型为 unsigned int
  enum Example { X, Y, Z };                                   // 3、没有先前的枚举常量，没有带有定义整数常量表达式 ：X, Y, Z 都是 int 类型
  enum AnotherExample { M = 1000, N = 2000 };                 // 4、整数常量表达式的值可以用 int 表示 ：M 和 N 都是 int 类型
  enum BigValues { P = 2147483648 };                          // 5、整数常量表达式的值不能用 int ：P 的值超出 int 范围，会被推导为 long
  // enum OverflowExample { Q = 2147483647, R };              // 6、上一个枚举常量的值的类型加上 1 溢出 ：Q 是 int 类型, R = 2147483648, 所以 R 是 long 类型
  enum SignedExample { S = -1, T };                           // 前一个枚举常量是有符号整数类型 ：S 是 int 类型, 所以 T = 0 也是 int 类型
  // enum LargeRange { U = 9223372036854775807, V };          // 没有大小合适的整数类型可以表示新值 ：U 是 long long 类型, V = 9223372036854775808，没有更大的类型来表示
  
  enum Example1 { A1 = 1, B1 = 2 };                             // 1、兼容类型可以是 int 或 unsigned int 等
  enum Example2 { C2 = 1, D2 = 1000000 };                       // 2、假设编译器选择 int 作为兼容类型 兼容类型为 int
  // enum FixedBaseType : unsigned char { ET = 1, FT = 255 };   // 3、E 和 F 的类型为 unsigned char
  enum Example3 { G3 = 1, H3 = 2 };                             // 4、 G 和 H 的类型为 int
  enum Example4 { I4 = 2147483648 };                            // 4、I 的类型为 long 因为值超出 int 范围
  // enum FixedBaseType2 : short { JT = 1, KT = 32767 };        // 5、J 和 K 的底层类型为 short
  enum Example5 { L5 = 1, M5 = 2 };                             // 5、底层类型由实现决定，可以是 int

  enum Foo { A2, B, C1 = 10, D, E = 1, F, G = F + C}; // A=0, B=1, C=10, D=11, E=1, F=2, G=12
  enum color2 { YELLOW, GREEN1, PINK };
  enum color2 cl = YELLOW;                            // 需要使用关键词 enum  OK
  // color2 x = GREEN;                                // ERROR： color2 不在通常命名空间中
  typedef enum color2 color_t;                        // typedef 到通常命名空间
  color_t x1 = GREEN;                                 // OK
  enum { ONE1 = 1, TWO1 } Example6;                   // 枚举类型是整数类型，从而可以用于任何其他整数类型能用之处
  // long n2 = ONE;                                      // 提升
  // double d = ONE;                                     // 转换
  Example6 = 1.2;                                     // 转换，Example6 现在是 ONE
  Example6 = Example6 + 1;                            // 转换，Example6 现在是 TWO 

  enum zoo {CAT, DOG, RABBIT} cats1 = CAT, *catsp = &cats; // 局部枚举变量 定义了一个枚举类型 zoo 和两个枚举变量 cats 和 catsp
  print_purple("zoo cat of is: %d.\n", cats1);
  print_purple("zoo cat of is: %d. ptr is %p.\n", *catsp, catsp); 
  print_purple("zoo size of is %d. cats is %d. catsp is %d.\n",sizeof(enum zoo), sizeof(cats), sizeof(catsp));
  enum TV { FOX = 11, CNN = 25, ESPN = 15, HBO = 22, MAX = 30, NBC = 32 };
  print_purple("FOX: \t%2d\n", FOX);
  
  enum {TEN = 10};              // 比 #define 更加便利和结构化的方式生成具名常量，这里定义了一个匿名枚举类型，并在其中定义了一个枚举常量 TEN，其值被初始化为 10。与使用 #define 来定义常量相比，枚举常量具有类型安全性（它属于特定的枚举类型，而不是简单的文本替换），并且在代码结构上更加清晰，便于维护和理解
  struct Se {int xe : TEN;} se; // 也 OK  struct S {int x : TEN;} s; 定义了一个结构体 S，其中包含一个成员变量 x，它是一个有符号整数类型（int），并且使用了位域（bit-field）的特性。这里指定 x 的位宽为 TEN，也就是 10 位。这意味着 x 在内存中只会占用 10 位的存储空间来存储其整数值，而不是通常情况下 int 类型所占用的完整位数（通常是 32 位，具体取决于编译器和平台）。然后声明了一个结构体变量 s 属于 S 类型
  se.xe = 511;                  // 只有10位，不是32位4字节
  print_purple("s.x = %d.\n",se.xe);

  struct Element {
    int z;
    enum State {SOLID, LIQUID, GAS, PLASMA} state : 2;
  } oxygen = {8, GAS};
  enum State ee = LIQUID;      // OK 类型 enum State 与其枚举常量于此保持可见 和 struct Element 作用域与可见范围相同
  print_purple("enum State e = %d. enum State state = %d. PLASMA = %d.\n", ee, oxygen.state, PLASMA); // 打印 1 2 3  

  /*
  struct，详细见 structure.c 文档
  结构体（struct）是一种复合数据类型，它由一组按顺序排列的成员组成，每个成员可以是不同类型的变量。与结构体相对的是联合体（union），其成员在内存中是重叠存储的。结构体的定义和声明有特定的语法规则

  声明方式、语法、规则
  1、结构体的基本概念 结构体是一种由一序列的成员组成的类型，成员的存储以顺序分配于内存中、联合体是由一个序列的成员组成的类型，成员存储在内存中重叠
  2、结构体的类型说明符语法 结构体的类型说明符与联合体的类型说明符相同，只是所用的关键词有别（struct 对比 union）
  3、结构体的定义和声明语法 
  struct 属性说明符序列(可选) 名字(可选) {结构体声明列表} 
  struct 属性说明符序列(可选) 名字 
  结构体声明列表：结构体声明列表可以包含任意数量的变量声明、位域声明和静态断言声明，不允许不完整类型的成员和函数类型的成员（除了柔性数组成员）
  属性说明符序列（C23起）可以包含属性的可选列表，应用到结构体类型  

  结构体特性、使用、初始化
  1、结构体成员的地址是按定义顺序递增的
  2、指向结构体的指针可以转换为指向其首成员的指针，反之亦然
  3、位域成员的地址指向其分配单元
  4、在结构体的成员之间和最后可能有填充字节，但首成员前没有填充字节
  5、结构体的大小至少等于其所有成员的大小之和，但由于对齐要求，实际大小可能更大
  6、柔性数组成员 是一种在定义结构体时使用的特殊数组成员，允许我们在不指定数组大小的情况下定义数组成员。柔性数组成员通常用于需要动态分配大小的结构体
  7、匿名结构体是一种特殊的结构体类型，它本身没有名字，直接作为外围结构体或联合体的一部分。因此，匿名结构体的成员可以直接作为外围结构体或联合体的成员来访问
  8、若不以任何具名成员定义结构体（包含经由匿名嵌套结构体或联合体获得的成员），则程序行为未定义，即如果一个结构体没有任何具名成员（即所有成员都是通过匿名嵌套结构体或联合体获得的成员），那么根据标准，访问这些成员的行为是未定义的，这是因为标准要求至少有一个具名成员来确保结构体的有效使用
  9、前置声明 有时需要让一个结构体引用另一个结构体，这种情况经常出现在定义具有相互依赖关系的数据结构时，为了实现这一点，可以使用前向声明（forward declaration），前向声明允许你先声明一个结构体的名字，而不立即定义它的内容。这种结构体名字在定义之前会被视为不完整类型（incomplete type），只能用来声明指针而不能直接使用。这种特性有助于解决结构体彼此引用的问题
  10、不完整类型的成员 结构体初始化规则 在 C 语言中，一个结构体在其定义结束之前是一个不完整类型，这意味着在定义结构体时，不能包含其自身类型的成员，这是因为在结构体定义结束之前，编译器不知道结构体的大小，可以包含指向其自身类型的指针成员，这是合法且常用的，例如在链表和树的实现中
  11、结构体声明的作用域 结构体声明不会建立新的作用域，这意味着在结构体声明列表中引入的嵌套类型、枚举及枚举项在结构体声明的外围作用域中是可见的
  */
  struct Examples { int a; float b; char c; };       // 1、这里，结构体 Example 的成员 a, b 和 c 是按顺序存储在内存中的
  union ExampleUnions { int a; float b; char c; };   // 2、这里，联合体 ExampleUnion 的成员 a, b 和 c 是重叠存储在相同的内存位置
  struct Person { char name[50]; int age; };         // 3、结构体定义：引入一个新类型 struct 名字 并定义其含义 这里定义了一个结构体类型 Person
  struct ForwardDeclaration;                         // 3、若仅在其自身的行使用，如在 struct 名字; 中，声明但不定义 struct 名字，这是一个前向声明，声明了名为 ForwardDeclaration 的结构体类型，但未定义其成员
  struct ForwardDeclaration { int id; double value; }; // 3、在其他语境中，命名先前声明的结构体，并且不允许属性说明符序列，现在定义了之前前向声明的结构体 ForwardDeclaration
  struct ComplexStruct {
    int a;
    unsigned int b: 4;                                       // 位域声明
    _Static_assert(sizeof(int) == 4, "Unexpected int size"); // 静态断言声明
  };                                                 // 4、结构体声明列表可以包含任意数量的变量声明、位域声明和静态断言声明  
  struct InvalidStruct {
    int a;
    // int incompleteMember[];                               // 这是不允许的，因为这是不完整类型的成员，注释掉的 int incompleteMember[]; 是一个不完整类型的成员，因为数组的大小未定义，这在结构体中是不允许的
    // void func();                                          // 这是不允许的，函数类型的成员，在C语言中，结构体成员不能是函数类型，然而，它们可以是函数指针类型，在 struct InvalidStruct 中，void func(); 是一个函数声明，这是不允许的，可以使用函数指针来替代
  };                                                 // 4、不允许不完整类型的成员和函数类型的成员（除了柔性数组成员），不完整类型是指类型的大小未知或未定义例如，未指定数组大小的数组类型就是一种不完整类型，在结构体中，成员必须是完整类型，这样编译器才能确定每个成员在内存中的大小和偏移位置
  struct ValidStructWithFuncPtr {
    int a;
    void (*func)();                                          // 这是一个函数指针，指向返回类型为 void 且无参数的函数
  };
  struct ValidStruct {
    int a;
    int flexibleArray[];                                     // 柔性数组成员，这是允许的，柔性数组成员是C语言的一种特殊数组成员，它允许在结构体的末尾定义一个大小不确定的数组。柔性数组成员的前提是结构体中必须有其他成员，并且柔性数组成员必须是结构体中的最后一个成员，柔性数组成员在定义结构体变量时，可以根据需要具体分配数组的大小
  };
  // struct [[nodiscard]] EnhancedStruct {
  //   int importantValue;
  // };                                             // 5、可以包含属性的可选列表，应用到结构体类型（C23起    
  typedef struct typeStruct {
    int a;
    float b;
  } tStruct;                            // 使用 typedef 重新定义 struct 类型、提升命名空间
  struct qs* pss = NULL;                // 声明一个指向 struct qs 的指针 pss
  struct qs { int a; };                 // 定义 struct qs，包含一个整型成员 a 

  struct Examplesc {
    int a;
    float b;
    char c;
  };
  struct Examplesc example;            // 1、在结构体对象内，其成员的地址按照成员定义的顺序递增，这意味着在内存中，结构体成员是按它们在结构体定义中的顺序排列的：&example.a < &example.b < &example.c
  struct Examplesc *ptrStruct = &example;
  int *ptrInt = (int *)ptrStruct;                                  // 2、指向结构体的指针可以转换为指向其首成员的指针，反之亦然，ptrInt 指向 example.a
  struct Examplesc *ptrStruct2 = (struct Examplesc *)ptrInt;       // 2、首成员的指针逆转位结构体的指针，ptrInt 指向结构体 ptrStruct2
  struct BitFieldExample {                                         // 3、若首成员为位域，则指向其分配单元的指针，位域成员是特殊的按位存储的成员。虽然不能直接获取位域成员的地址，但可以获取其分配单元的地址，位域（bit field）是 C 语言中的一种特殊结构体成员，允许你以 位 为单位定义结构体成员的大小，位域通常用于节省内存或实现硬件寄存器的映射                                       
    unsigned int a : 3;                                         // 占用3个位
    unsigned int b : 5;                                         // 占用5个位
  };                                                            // 这个例子中，struct BitFieldExample 有两个位域成员 a 和 b。成员 a 占用3个位，成员 b 占用5个位
  struct BitFieldExample bitexample;                            // 由于位域成员是按位存储的，不能直接获取它们的地址，这是因为C语言标准不允许对位域成员取地址，但可以获取包含这些位域的分配单元的地址
  // unsigned int *bptr = &example.a;                           // 错误，无法获取位域成员的地址，bitexample.a 和 bitexample.b 共享一个 unsigned int 类型的分配单元，如果我们尝试获取 a 或 b 的地址，编译器会报错
  unsigned int *bptr = (unsigned int *)&bitexample;             // 获取分配单元的地址，可以获取包含位域的分配单元的地址，即整个结构体的地址
  struct BitFieldExample bitexample1 = { 5, 3 };
  unsigned int *bitptr = (unsigned int *)&bitexample1;          // 获取分配单元的地址   
  print_purple("Value of the allocation unit: %u\n", *bitptr);  // 打印分配单元的值，5 的二进制表示是 101（3 位），3 的二进制表示是（5 位需要写作 00011），合并位域在内存中，a 和 b 会被合并到同一个分配单元（通常是一个 unsigned int），其合并为一个 8 位的二进制数 00011 101，这个二进制数可以被解释为一个 unsigned int，为了便于解释，我们将其扩展为 32 位 0000 0000 0000 0000 0000 0000 0011 101 这个二进制数转换为十进制是 53
  print_purple("Binary output of the allocation unit: ");       // unsigned int 只用了 8 位，其余位数未定义，因为内存对齐或结构填充策略导致的      
  struct BitFieldExample3 {
    unsigned int a : 3;
    unsigned int b : 5;
    unsigned int c : 6;
    unsigned int d : 20; // 如果加上这个成员，编译器可能会使用新的分配单元，假设 unsigned int 是32位（4字节），那么 a 和 b 、c 会共享同一个 unsigned int 分配单元，如果加上成员 d，编译器可能会在需要时使用新的分配单元
  };
  print_purple("Size of struct BitFieldExample3: %zu\n", sizeof(struct BitFieldExample3));
  struct BitFieldExample3 bitexample3 = {5, 3, 25, 1};   //  unit 1：011001 00011 101 、unit 2：0000 0000 0000 0000 0001
  unsigned int *bitptr3 = (unsigned int *)&bitexample3;  //  获取分配单元的地址
  print_purple("bitptr3 = %p, bitptr3[0] = %p, bitptr3[1] = %p.\n", bitptr3, &bitptr3[0], &bitptr3[1]);
  print_purple("Value of the allocation unit 1: %u\n", bitptr3[0]);   // 打印分配单元的值 unit 1
  print_purple("Value of the allocation unit 2: %u\n", bitptr3[1]);   // 打印分配单元的值 unit 2
  print_purple("Binary output of the allocation unit 1: "); // 打印二进制表示 unit 1
  for (int i = 31; i >= 0; i--) {
    print_purple("%d", (bitptr3[0] >> i) & 1);
  }
  print_purple("\n");
  print_purple("Binary output of the allocation unit 2: "); // 打印二进制表示 unit 2
  for (int i = 31; i >= 0; i--) {
    print_purple("%d", (bitptr3[1] >> i) & 1);
  }
  print_purple("\n");
  struct Example2sc {                                                              // 4、在任意两个成员间和最后的成员后可能存在无名的填充字节，但首成员前不会有，填充字节（padding bytes）是编译器为了对齐（alignment）成员而插入的字节，对齐是为了提高内存访问效率，例如，某些架构可能要求 int 类型变量在 4 字节边界对齐，如果一个 char 类型成员后面紧跟一个 int 类型成员，编译器可能会插入填充字节来满足对齐要求
    char c;  // 1 byte
    int i;   // 4 bytes, may be aligned to 4-byte boundary
  };                                                                               // 4、内存布局可能是：[c][padding][i][i][i][i]
  struct Example3sc {                                                              // 5、结构体的大小至少与其成员的大小之和一样大，这意味着结构体的大小不仅包括所有成员的大小，还可能包含填充字节
    char c;  // 1 byte
    int i;   // 4 bytes, but aligned to 4-byte boundary
  };
  print_purple("Size of struct: %zu\n", sizeof(struct Example3sc));                // 5、可能输出 8，结构体大小至少是 5 bytes，但由于对齐要求，实际大小可能是 8 bytes.
  struct FlexArrayStruct {                                                         // 6、定义结构体：结构体中拥有至少一个具名成员，并在结构体的最后一个成员定义一个数组但不指定大小，动态分配内存：在实际使用时，通过动态分配内存的方式为结构体分配额外的空间，以容纳柔性数组成员所需的内存，访问柔性数组成员：访问柔性数组成员时，结构体表现得好像该数组成员拥有分配的额外内存的部分
    int count;   // 具名成员
    char data[]; // 柔性数组成员
  };
  const char* sampleString = "Hello, World!";
  size_t strLength = strlen(sampleString);
  struct FlexArrayStruct* fas = malloc(sizeof(struct FlexArrayStruct) + strLength + 1);   // 动态分配内存，包括结构体本身和字符串的长度，分配的内存大小为 sizeof(struct FlexArrayStruct) （结构体除柔性数组成员外的大小）加上字符串的长度 strLength 再加1（用于字符串的终止符 \0）
  if (!fas) {
    perror("Failed to allocate memory");
    return 1;
  }
  fas->count = strLength;                                                                      // 设置具名成员的值，设置 count 成员的值为字符串的长度
  memcpy(fas->data, sampleString, strLength + 1);                                              // 复制字符串到柔性数组成员，将字符串复制到 data 柔性数组成员中
  print_purple("FlexArrayStruct Count: %d\n", fas->count);                                     // 输出结果
  print_purple("FlexArrayStruct Data: %s\n", fas->data);                                       // 输出结果，使用 fas->data 访问柔性数组成员，并输出字符串内容
  free(fas);                                                                                   // 释放内存，柔性数组成员不能作为数组元素或其他结构体的成员，初始化和赋值操作会忽略柔性数组成员，使用 sizeof 计算结构体大小时不会包含柔性数组成员的部分。要确保在访问柔性数组成员时已经正确分配了额外的存储空间，否则会导致未定义行为                         
  struct ssc { 
    int n; 
    double d[];                                        // s.d 是柔性数组元素 
  };                                                   // 当你访问灵活数组成员时，访问操作会依据分配给整个结构体对象的内存大小来解释灵活数组的大小，具体来说：灵活数组成员是在结构体中定义的一个不完整数组成员，其大小在编译时未知，当你动态分配结构体内存时，你可以指定灵活数组成员所需的实际大小，访问灵活数组的元素时，编译器假设你已经为结构体的灵活数组部分分配了足够的内存并使用这个大小来解释灵活数组的边界
  struct ssc t1 = { 0 };                               // OK：d 如同为 double d[1]，但访问是 UB，如果没有为灵活数组成员分配额外的存储空间，它会表现得像是一个具有1个元素的数组。但是，如果访问该元素或生成一个指向该元素后面位置的指针，则会导致未定义行为
  // struct s t2 = { 1, { 4.2 } };                     // 错误：初始化忽略柔性数组，只能初始化具名成员，灵活数组成员被忽略
  struct ssc *ssc1 = malloc(sizeof (struct s) + 64); // 若 sizeof (double) == 8，如同 d 为 double d[8]
  struct ssc *ssc2 = malloc(sizeof (struct s) + 40); // 若 sizeof (double) == 8，如同 d 为 double d[5]
  ssc1 = malloc(sizeof (struct s) + 10);             // 若 sizeof (double) == 8，现在如同 d 为 double d[1]
  double *dp = &(ssc1->d[0]);                          // OK，获取地址没问题，包含8个完整字节
  *dp = 42;                                            // OK，赋值没问题，包含8个完整字节
  // ssc1->d[1]++;                                        // 未定义行为，不能将超出的2字节作为 double 访问
  ssc2 = malloc(sizeof (struct s) + 6);                // 同上，但访问为 UB，因为缺少两个字节作为完整的 double
  dp = &(ssc2->d[0]);                                  // OK，获取地址没问题
  // *dp = 42;                                            // 未定义行为，字节数不够
  *ssc1 = *ssc2;                                       // 只复制 s.n，没有任何 s.d 的元素，除了 sizeof (struct s) 中捕获的元素，
  print_purple("s sizeof = %zu. int sizeof = %zu. double sizeof = %zu.\n", sizeof(struct s), sizeof(int), sizeof(double));  // 输出 sizeof(int) 的值 sizeof 运算符会忽略灵活数组成员，但可能会有更多的尾部填充
  // struct Invalid {
  //   struct ssc arr[10];                                  // 非法：具有灵活数组成员的结构体不能作为数组元素
  // };
  // struct AnotherInvalid {
  //   struct ssc example;                                  // 非法：具有灵活数组成员的结构体不能作为其他结构体的成员
  // };    
  struct v {                            
    union {                               // 匿名联合体  匿名联合体是没有名字的联合体类型
      struct { int i, j; };               // 匿名结构体  匿名结构体是没有名字的结构体类型
      struct { long k, l; } w;
    };
    int m;
  } v1;
  v1.i = 2;                               // 7、合法，匿名结构体的成员可以直接在外围结构体或联合体中使用，就好像它们是外围结构体或联合体的成员一样，如果外围结构体或联合体也是匿名的，那么同样的规则递归应用，这意味着更内层的匿名结构体成员也可以直接在更外层的结构体或联合体中使用
  // v1.k = 3;                            // 非法：内层结构体非匿名
  v1.w.k = 5;                             // 合法：使用w名称获取  
  struct UndefinedBehaviorExample {       // 8、具名成员是指在结构体或联合体中拥有名字的成员。它们可以直接通过成员名来访问，未定义行为意味着程序的行为不可预测，可能会导致程序运行时崩溃、产生错误结果，甚至出现安全问题
    struct {         // 匿名结构体
      int member1;   // 匿名结构体的成员
    };
    union {          // 匿名联合体
      float member2; // 匿名联合体的成员
    };
  };
  struct UndefinedBehaviorExample uexample; // 尝试访问匿名结构体和联合体的成员
  uexample.member1 = 10;                    // 这种访问方式会导致未定义行为
  uexample.member2 = 3.14f;                 // 这种访问方式会导致未定义行为
  print_purple("Member 1: %d\n", uexample.member1);
  print_purple("Member 2: %f\n", uexample.member2);  
  struct DefinedBehaviorExample {           // 定义一个包含匿名嵌套结构体和联合体，并且有具名成员的结构体
    int named_member;                       // 具名成员
    struct {                                // 匿名结构体
      int member1;                          // 匿名结构体的成员
    };
    union {                                 // 匿名联合体
      float member2;                        // 匿名联合体的成员
    };
  };
  struct DefinedBehaviorExample dexample;
  dexample.named_member = 5;                // 访问具名成员
  dexample.member1 = 10;                    // 访问匿名结构体和联合体的成员
  dexample.member2 = 3.14f;                 // 访问匿名结构体和联合体的成员
  print_purple("Named member: %d\n", dexample.named_member);
  print_purple("Member 1: %d\n", dexample.member1);
  print_purple("Member 2: %f\n", dexample.member2);
  struct y;             // 9、前置声明 struct y ，通过前向声明，可以让结构体相互引用，解决了在定义相互依赖数据结构时的困难。前向声明使得编写复杂的数据结构变得更加灵活和可行
  struct x {            // 定义 struct x，包含一个指向 struct y 的指针
    struct y *p;        // 这里 struct y 是不完整类型，只能声明指针,前向声明允许在定义结构体之前引用它。前向声明的结构体在定义之前被视为不完整类型，只能用来声明指针但不能直接操作
    // 其他成员...
  };
  struct y {            // 现在定义 struct y，包含一个指向 struct x 的指针
    struct x *q;        // 这里 struct x 是完整类型
    struct x q1;
    // 其他成员...
  };
  struct x instanceX;             // 创建结构体的实例
  struct y instanceY;             // 创建结构体的实例
  instanceX.p = &instanceY;       // 相互引用
  instanceY.q = &instanceX;       // 相互引用
  print_purple("instanceX.p: %p\n", (void*)instanceX.p);
  print_purple("instanceY.q: %p\n", (void*)instanceY.q);
  // void g(void) {
  //   struct qs;                   // 新的局部 struct qs 的前置声明它隐藏全局 struct qs 直至此块结束
  //   struct qs *p;                // 指向局部 struct qs 的指针，若无上面的前置声明，则它会指向文件作用域的 qs
  //   struct qs { char* p; };      // 局部 struct qs 的定义
  //   struct qs local_instance;    // 在这个作用域内，struct qs 是局部定义的，不是全局的 struct qs
  //   local_instance.p = "Local struct s"; // 使用局部定义的 struct qs
  //   print_purple("Local instance p: %s\n", local_instance.p);
  // }
  // g();                           // 如果在一个作用域中重新声明了一个结构体标签，它会隐藏在更高作用域中具有相同标签的结构体，直到当前作用域结束
  struct qs global_instance;
  global_instance.a = 10;           // 使用全局定义的 struct qs
  print_purple("Global instance a: %d\n", global_instance.a);
  struct Node {
    int value;
    struct Node* next;              // 10、指向同类型结构体的指针成员，此行 Node 还不是完整类型 只能是指针
  };
  struct Node node1;
  struct Node node2;
  node1.value = 1;
  node1.next = &node2;
  node2.value = 2;
  node2.next = NULL;
  print_purple("Node1 value: %d\n", node1.value);
  print_purple("Node2 value: %d\n", node1.next->value);
  struct Container {               // 11、定义一个结构体包含嵌套类型和枚举
    struct Inner {
      int x;
    } inner;
    enum { RED4, GREEN4, BLUE4 } color;
  };
  struct Container container;
  container.inner.x = 10;         // 访问嵌套结构体和枚举
  container.color = GREEN;        // 访问嵌套结构体和枚举
  print_purple("Inner x: %d\n", container.inner.x);
  print_purple("Color: %d\n", container.color);  
  int color = BLUE4;              // 直接访问枚举项（在外围作用域可见）
  print_purple("Color from enum: %d\n", color);   

  /*
  union，详细见 unions.c 文档
  联合体是由一序列的成员所组成的类型，各成员的存储重叠（与结构体相反，结构体是由一序列的成员所构成的类型，成员的存储以顺序分配）。在任一时刻，最多能在联合体中存储其一个成员的值，联合体的类型说明符与 struct 类型说明符相同，只是所用的关键词有别

  联合体声明方式语法规则 
  union 属性声明符序列(可选) 名字(可选) { 联合体声明列表 }  联合体定义：引入一个新类型 union 名字 并定义其含义
  union 属性声明符序列(可选) 名字 声明但不定义 union 名字（前置声明），在其他上下文中命名先前声明的联合体，并且不允许属性说明符序列，即属性声明符序列存在，它不能后随 
  名字 所定义的联合体的名称
  联合体声明列表	任意数量的变量声明，位域声明和静态断言声明，不允许不完整类型的成员和函数类型的成员、属性声明符序列 (C23起)可选的属性列表应用到联合体类型，若这种形式不后随（即不是前置声明）则不允许

  联合体特性、使用、初始化
  1、联合体中的所有成员共享同一块内存区域，联合体的大小至少等于其最大成员的大小。编译器可能会添加额外的尾随填充字节，以满足对齐要求
  2、指针转换 可以将指向联合体的指针转型为指向它每个成员的指针（若联合体拥有位域成员，则能转型指向联合体的指针为指向位域底层类型的指针）。类似地，指向结构体任何成员的指针都能被转型为指向整个结构体的指针
  3、类型双关 通过联合体不同成员来访问同一块内存，从而实现数据类型的转换，若用于访问内容的联合体成员不同于上次用于存储值的成员，则转译被存储值的对象表示为新类型的对象表示（这被称为类型双关），若新类型的大小大于上次写入的类型大小，则多出的字节内容是未指明的（而且可以是陷阱表示）
  4、匿名联合体 类似结构体，类型为不带名字的联合体的无名联合体成员，每个匿名联合体的成员被认为是外围结构体或联合体的成员并维持联合体布局不变。若外围结构体或联合体亦为匿名，则递归应用此规则
  5、类似结构体，若不以任何具名成员（包含经由匿名嵌套结构体或联合体获得的成员）定义联合体，则程序行为未定义 
  */
  union Data {
    int i;
    float f;
    char str[20];     //最大的字节成员
  };
  union Data data;
  data.i = 10;
  print_purple("data.i : %d\n", data.i);
  data.f = 220.5f;
  print_purple("data.f : %f\n", data.f);
  strcpy(data.str, "C Programming");
  print_purple("data.str : %s\n", data.str);
  print_purple("size of Data = %zu. size of data = %zu.\n", sizeof(union Data), sizeof(data));  

  union Exampleun { // 1、在这个联合体中，int 通常占 4 个字节，double 通常占 8 个字节，char 占 1 个字节。联合体的总大小至少是 8 个字节，因为 double 是最大的成员。编译器也可能添加一些额外的填充字节以满足对齐要求
    int i;
    double d;
    char c;
  };
  union Exampleun ex;
  union Exampleun *pex = &ex;
  int *puni = (int *)pex;                         // 2、指向联合体的指针转换为成员的指针，可以将指向联合体的指针转换为指向其任意成员的指针。这是因为联合体的所有成员共享同一块内存区域
  double *pd = (double *)pex;
  char *punc = (char *)pex;
  ex.i = 42;
  int *pxi = &ex.i;
  // union Exampleun *pexi = (union Exampleun *)pi;    // 2、指向联合体成员的指针转换为指向联合体的指针，指向联合体成员的指针也可以转换为指向整个联合体的指针   
  union Exampleun1 {
    unsigned int field1 : 3;   // 一个3位的无符号整数
    unsigned int field2 : 5;   // 一个5位的无符号整数
    unsigned int field3 : 8;   // 一个8位的无符号整数
  };
  union Exampleun1 ex1;
  ex1.field1 = 5;              // 将field1设置为5（二进制：101）
  unsigned int *pField1 = (unsigned int *)&ex1;
  struct vun {                 // 4、匿名联合体的成员被视为其外围结构体或联合体的成员，可以直接访问。这种规则可以递归应用于嵌套的匿名联合体
    union { // 匿名联合体
      struct { int i, j; }; // 匿名结构体
      struct { long k, l; } w;
    };
    int m;
  } vun1;
  vun1.i = 2;      // 合法，可直接访问
  // vun1.k = 3;   // 非法：内层结构体不是匿名的
  vun1.w.k = 5;    // 合法，通过名称访问
  union Exampleun2 {          // 5、没有具名成员的联合体、联合体中包含匿名嵌套结构体或联合体，但这些结构体或联合体也不包含任何具名成员，结果会导致未定义行为
    struct {
      // 没有具名成员 结构未定义
    };
  }; 
  union Exampleun3 {
    int i;  // 具名成员
    float f;
  };

  union pad {               // 此联合体拥有尾随的 3 个填充字节
    char  c[5];             // 占据 5 字节 => char c[5] 需要 5 字节，但没有特定对齐要求
    float f;                // 占据 4 字节，隐含对齐 4 => float f 需要 4 字节，并且要求 4 字节对齐
  } pun = {.f = 1.23};      // 大小为 8 以满足 float 的对齐，联合体的大小必须满足所有成员的对齐要求和大小需求，为了满足 float 的对齐要求（通常是 4 字节），联合体的总大小必须是 float 对齐的倍数。因为 char c[5] 和 float f 共享相同的存储空间，联合体的总大小必须是 4 的倍数，并且至少需要容纳最大的成员 c[5] 的 5 字节。因此，编译器会在 char c[5] 后面添加 3 个字节的填充，使得总大小达到 8 字节，以满足 float 的对齐要求
  print_purple("size of union of char[5] and float is %zu\n", sizeof pun); // 内存对齐是指数据在内存中存储的位置需满足某种约束条件，以提高内存访问的效率。不同类型的数据可能有不同的对齐要求。例如，4字节的 float 类型通常要求4字节对齐，这意味着它的地址必须是4的倍数

  /*
  原子类型(C11)，详细见 atomics.c 文档
  原子类型语法 (C11起) _Atomic 有两种用法：用作类型说明符和用作类型限定符
  1、_Atomic (类型名) 
  用作类型说明符；这种用法定义了一个新的原子类型，其中类型名是除数组或函数外的任意类型。注意，类型名不能是另一个原子类型或带有 const、volatile、restrict 限定符的类型
  2、_Atomic 类型名 
  用作类型限定符；这种用法定义了类型名的一个原子版本。与 const、volatile 和 restrict 等其他类型限定符不同，原子类型可能有不同的大小、对齐和对象表示。原子类型可以与 const、volatile 和 restrict 等限定符混合使用
  _Atomic (类型名)：用作类型说明符，定义新的原子类型，不能带有其他限定符或嵌套其他原子类型。这是为了简化类型系统，避免复杂性，即这种用法定义了一个新的原子类型。此时，_Atomic 创建了一个新的类型，与基础类型不同。由于 _Atomic (类型名) 是创建一个全新的类型定义，所以它不能包含任何限定符（如 const、volatile、restrict），也不能嵌套另一个原子类型
  _Atomic 类型名：用作类型限定符，修饰现有类型，可以与其他限定符（如 const、volatile、restrict）一起使用。这种用法提供了更大的灵活性，即这种用法将一个已存在的类型限定为原子类型。在这种用法中，_Atomic 被视为类型限定符，就像 const、volatile 和 restrict 一样。由于它是一个限定符，可以与其他限定符一起使用

  3、头文件 <stdatomic.h> 定义了 37 个便利类型别名，从 atomic_bool 到 atomic_uintmax_t 简化了此关键词与内建及库类型的组合使用，<stdatomic.h> 提供了 37 个便利类型别名。这些别名可以让代码更简洁、更易读
  若编译器定义了宏常量 __STDC_NO_ATOMICS__，则不提供关键词 _Atomic

  解释
  4、原子类型的对象是仅有的免除数据竞争的对象；即它们可以被两个线程共时修改，或被一个修改并被另一个读取
  数据竞争（Data Race）是一种常见的并发问题，发生在两个或多个线程同时访问同一个共享变量，并且至少有一个线程在修改这个变量。数据竞争可能导致不可预测的行为和难以调试的错误，原子类型通过确保对变量的操作是不可分割的（即原子的），从而避免数据竞争。原子操作可以被看作是在内部加锁，使得一个操作在一个时间点只能由一个线程完成
  原子对象：原子对象通过原子操作避免数据竞争
  线程安全：原子操作提供了一种线程安全的方式来修改共享变量，避免了多线程访问中的数据竞争问题
  为什么原子类型可以避免数据竞争
  原子类型（Atomic Types）通过确保对变量的操作是不可分割的（即原子的），从而避免了数据竞争。具体来说，原子操作具有以下特性
  不可分割性：原子操作是不可分割的，即操作要么全部完成，要么完全不完成。不会出现部分完成的情况
  顺序一致性：原子操作保证在不同线程中对同一个原子对象的操作有一个一致的顺序。即使多个线程同时操作同一个原子对象，它们看到的操作结果也是一致的
  硬件支持：现代处理器提供了对原子操作的硬件支持，如原子加减、交换等，使得这些操作在硬件层面上也是原子的

  5、每个原子对象都拥有关联于其自身的修改顺序，即对该对象的修改的全序。若从某个线程的视角来看，对于某原子对象 M 修改的 A 发生早于同一原子对象 M 修改的 B，则在 M 修改的顺序中 A 出现早于 B
  修改顺序 每个原子对象都有一个关联的修改顺序（Modification Order），这是一种全序（Total Order），即对该对象的所有修改可以按某种线性顺序排列。这种顺序定义了某个线程视角下对该原子对象的所有修改的顺序
  修改顺序：原子对象的修改顺序是全序的，确保对原子对象的所有修改可以按某种线性顺序排列

  6、注意即使每个原子对象都有其自身的修改顺序，却并无单独的全序；不同线程可能会观测到不同原子对象有相异的修改顺序，即原子的修改顺序 每个原子对象都有其自身的“修改顺序”（modification order），这是对该对象的所有修改操作的总顺序。对于一个特定的原子对象，所有线程都能以相同的顺序观察到这些修改。但这并不意味着所有线程对不同原子对象的修改观察顺序是一致的 
  这句话的意思是，尽管每一个原子对象都有其自身的修改顺序，但并不存在一个单一的全局顺序；不同的线程可能会以不同的顺序观察到对不同原子对象的修改
  具体来说，在并发编程中，原子对象的修改是线程安全的，即对这些对象的读取和写入操作是以原子性方式进行的，不会发生数据竞争。然而，每个原子对象的修改顺序是独立的，某个原子对象的修改顺序不一定与其他原子对象的修改顺序一致。这就意味着，不同的线程在访问这些原子对象时，可能会观察到不同的修改顺序
  例如，假设有两个原子对象A和B，线程T1首先修改了A，然后修改了B，而线程T2可能首先观察到B的修改，然后观察到A的修改。这种现象是因为每个原子对象都有其独立的修改顺序，而没有一个统一的全局顺序来规定所有原子对象的修改顺序
  
  多线程编程中的一个重要概念 内存模型和一致性。在多线程环境中，即使单个原子对象的操作具有顺序一致性，不同线程可能会观察到不同的操作顺序。这是因为内存模型允许某些优化和重排序，以提高性能
  内存模型中的一致性 内存模型允许一定程度的重排序和优化，这使得不同线程可能以不同的顺序观察到操作的执行。即使 atomic_store 和 atomic_load 是原子的且在单个对象上是有序的，不同线程对不同对象的观察顺序仍可能不一致
  解决方法 如果需要确保某些操作的严格顺序，可以使用更多的同步原语
  互斥锁（Mutex）：确保临界区内的操作是顺序一致的，互斥锁（Mutex）是用于保护临界区的一种同步机制。临界区是指那些不允许多个线程同时执行的代码段。通过使用互斥锁，可以确保在同一时间只有一个线程可以进入临界区，从而保证操作的顺序一致性
  条件变量（Condition Variable）：用于线程间的复杂同步，条件变量用于线程之间的复杂同步，通常与互斥锁一起使用。条件变量允许一个线程阻塞并等待某个条件变为真，另一个线程可以发出信号以唤醒等待的线程
  内存栅栏（Memory Fences）：强制特定的操作顺序，内存栅栏（也称为内存屏障）是一种低级的同步原语，用于防止编译器和处理器对读写操作进行重排序。内存栅栏可以确保某些操作在内存中的执行顺序
  原子的修改顺序：每个原子对象都有其自身的修改顺序，所有线程对同一原子对象的修改顺序观察是一致的
  不同线程的观察顺序：不同线程可能对不同原子对象的修改顺序观察不一致，这没有单独的全序
  内存模型的影响：内存模型允许优化和重排序，使得不同线程可能以不同的顺序观察到操作  

  对于所有原子运算，保证有四种连贯，即在多线程编程中，原子操作是确保并发安全的关键。C11标准引入了原子类型和操作，这些操作保证了四种连贯性：写写连贯、读读连贯、读写连贯和写读连贯
  7、写写连贯：若原子对象 M 的修改操作 A 发生早于 M 的修改操作 B，则 M 的修改顺序中 A 出现早于 B
  8、读读连贯：若原子对象 M 的值计算 A 发生早于 M 的值计算 B，且从 M 上的副效应 X 求得 A 值，则 B 所计算得的值要么是 X 所存储的值，要么是 M 上的副效应 Y 所存储的值，其中 Y 在 M 的修改顺序中出现晚于 X
  9、读写连贯：若原子对象 M 的值计算 A 发生早于 M 上的操作 B，则从 M 上的副效应 X 求得 A 值，这里 X 在 M 的修改顺序中出现早于 B
  10、写读连贯：若在原子对象 M 上的副效应 X 发生早于 M 的值计算 B，则求值 B 从 X，或从在 M 的修改顺序中出现晚于 X 的副效应 Y 求得其值
  写写连贯性保证了在一个线程对某个原子对象进行写操作之后，该线程以及其他所有线程对该原子对象的后续写操作都能够看到先前写操作的结果。这意味着写操作不会被乱序执行
  读读连贯性保证一个线程对原子对象的读操作在另一个线程对该原子对象的读操作之前发生时，前一个读操作不得看到后一个读操作的结果
  读写连贯性保证一个线程对原子对象的读操作在另一个线程对该原子对象的写操作之前发生时，读操作不能读取到写操作之后的值
  写读连贯性保证如果一个线程对原子对象进行了写操作，而另一个线程随后进行了读操作，那么读操作要么读取到当前的写入值，要么读取到之后的某个值，而不会读取到更早的值  

  11、一些原子运算亦是同步操作：它们可以拥有附加的释放语义、获取语义，或顺序一致语义。见 memory_order ?
  在C语言中的多线程编程中，原子操作提供了一种确保并发访问数据安全的机制。不同的内存顺序（memory_order）描述了操作的同步语义以及它们在程序中的顺序。具体来说，内存顺序控制了原子操作对其他线程的可见性，以及它们在与其他内存操作的相对顺序
  memory_order_relaxed 不提供任何同步或顺序的保证。这意味着此操作只保证原子性，不提供跨线程的可见性保证，当你只需要原子操作的原子性而不关心操作的顺序时
  memory_order_acquire 获取操作，确保在当前线程中，这个操作之后的所有读写操作都不会在内存操作之前被重排序。这种语义主要用于加载操作，当你需要确保在读取一个值之后，随后读取的其他值都是最新的
  memory_order_release 释放操作，确保在当前线程中，这个操作之前的所有读写操作都不会在内存操作之后被重排序。这种语义主要用于存储操作，当你需要确保在写入一个值之前，所有的写操作都已经完成
  memory_order_acq_rel 获取-释放操作，结合了获取和释放语义。这意味着这个操作既是获取操作又是释放操作。它确保在当前线程中，这个操作之前的所有写操作在这个操作之后的所有读操作之前完成，当你在同一操作中既需要获取语义又需要释放语义时，通常用于读-改-写操作
  memory_order_seq_cst 顺序一致性操作，提供最强的同步和顺序保证。所有操作都看起来像是在单一的全局顺序中执行。它确保所有线程看到的操作顺序是一致的，当你需要最强的同步和顺序保证时  

  12、内建的自增减运算符和复合赋值运算符是拥有完全序列一致顺序（如同用 memory_order_seq_cst）的读-修改-写操作。若想要较不严格的同步语义，则可以用标准库函数替代
  内建的自增减运算符和复合赋值运算符 在C语言中，内建的自增/自减运算符（如++和--）以及复合赋值运算符（如+=和-=）在用于原子类型时，通常会具有完全序列一致的顺序（memory_order_seq_cst）的读-修改-写操作
  完全序列一致顺序（memory_order_seq_cst）memory_order_seq_cst（Sequentially Consistent Order）是C11标准中的一个内存顺序模型。它确保所有操作在所有线程中以全局一致的顺序进行，这意味着所有线程看到的操作顺序都是相同的。这是最严格的内存序列模型，确保了最强的同步语义，具体来说，对于原子变量的内建自增/自减以及复合赋值操作，使用memory_order_seq_cst意味着这些操作不仅是原子的，而且它们的执行顺序在程序的所有线程中是一致的
  较不严格的同步语义 在某些情况下，完全序列一致顺序可能不必要，并且可能会导致性能开销。如果你希望使用较不严格的同步语义，可以使用标准库函数来替换默认的内建运算符，并指定更松散的内存顺序约束，C标准库提供了一些原子操作函数（如atomic_fetch_add、atomic_fetch_sub等），允许你指定内存顺序模型，如memory_order_relaxed、memory_order_acquire、memory_order_release等  
  
  13、原子属性仅对左值表达式有意义。左值到右值转换（模仿从原子区域到 CPU 寄存器的内存读取）会把原子性及其他限定符剥去
  原子属性仅对左值表达式有意义 左值（lvalue）是指可以出现在赋值运算符左侧的表达式，它代表一个存储位置。原子类型（如atomic_int）的原子属性是指这些类型的变量在多线程环境中执行原子操作（如读、写、修改时不会被其他线程干扰）的能力
  原子属性仅对左值表达式有意义，这意味着对原子变量的原子操作必须通过左值来进行。例如，对一个原子变量执行原子读、写或修改操作时，该变量必须是一个左值
  左值到右值转换 在C和C++中，右值（rvalue）是指可以出现在赋值运算符右侧的表达式，它代表某个值（而不是存储位置）。当一个左值转换为右值时，它的值会被读取，并且该值可以被用来进行计算或赋值给其他变量
  左值到右值转换（即从原子区域到CPU寄存器的内存读取）会把原子性及其他限定符剥去。意思是，当你读取一个原子变量的值并将其存储在一个非原子变量（通常是一个CPU寄存器）中时，原子变量的原子性属性就不再适用了
  原子属性仅对左值表达式有意义：原子操作必须通过左值（存储位置）来进行
  左值到右值转换：当将一个原子变量的值读取到一个普通变量（或右值）中时，原子性属性被剥去，该普通变量就不再具备原子性  
  
  14、本节未完成原因：更多和 memory_order 及原子库页面的综述互动

  原子类型注解
  15、访问原子结构体/联合体的成员是未定义行为，在C11标准中，如果你定义了一个包含原子类型成员的结构体或联合体，直接访问这些原子成员是未定义行为。这是因为标准并未定义如何保证这些成员的原子性
  16、sig_atomic_t 不提供线程间同步或内存定序，仅提供原子性，sig_atomic_t 是C标准库定义的一个类型，通常用于信号处理程序中，以确保对变量的访问是原子的。然而，sig_atomic_t 并不提供线程间的同步或内存序列保证，只提供对信号处理上下文中变量访问的基本原子性
  17、volatile 类型不提供线程间同步、内存定序或原子性，在C和C++中，volatile 关键字告诉编译器不要对使用该变量的代码进行优化，因为该变量可能在程序外部（如硬件或信号处理程序）被修改。然而，volatile 并不提供线程间同步、内存序列保证或原子性
  18、推荐实现确保对于每个可能的类型 T，C 中 _Atomic(T) 的表示与 C++ 中 std::atomic<T> 的相同，为了保证C和C++之间的兼容性，推荐实现保证C中的 _Atomic(T) 与C++中的 std::atomic<T> 表示相同。这确保了原子性和内存顺序机制在两种语言中是一致的  
  */
  print_purple("atomic type\n");  
  _Atomic (int) atomic_int_var;                     // 1、在这个示例中，atomic_int_var 是一个原子的 int 类型变量，通过 _Atomic (int) 语法定义
  atomic_int_var = 0;
  atomic_fetch_add(&atomic_int_var, 1);             // 原子地增加 1
  // _Atomic (const int) atomic_const_int_var;      // 不允许，const 不能用于类型说明符
  // _Atomic (_Atomic (int)) nested_atomic_int_var; // 不允许，不能嵌套原子类型
  atomic_int atomic_counter;                 // 2、定义一个原子的 int 类型变量，在这个示例中，atomic_counter 是一个原子的 int 类型变量，通过 atomic_int 宏定义。atomic_int 是 _Atomic int 的别名 
  atomic_counter = 0;                 
  atomic_fetch_add(&atomic_counter, 1);      // 原子地增加 1
  _Atomic const int atomic_const_int;        // 2、定义一个原子的、const常量的 int 类型变量，在这个示例中，atomic_const_int 是一个原子的、常量的 int 类型变量。因为它是常量，所以不能修改它的值
  // atomic_const_int                        // 是常量，不能修改它的值
  // atomic_fetch_add(&atomic_const_int, 1); // 这将导致编译错误
  _Atomic const int * pa1;                    // p1 是指向 atomic const int 的指针
  const atomic_int * pa2;                     // 同上 p2 是指向 atomic const int 的指针
  const _Atomic(int) * pa3;                   // 同上 p3 是指向 atomic const int 的指针         
  atomic_int atomic_counter1;                // 3、声明一个原子的 int 变量
  atomic_bool flag;                          // 声明一个原子的 bool 变量
  atomic_store(&atomic_counter, 0);          // 初始化原子变量
  atomic_store(&flag, false);                // 初始化原子布尔变量  
  atomic_fetch_add(&atomic_counter, 1);      // 原子地增加 1
  bool current_flag = atomic_load(&flag);    // 原子地加载布尔值
  print_purple("current_flag = %d.\n", current_flag);  

  /*
  位域 Bit-fields
  声明带有明确宽度的成员，按位数计。相邻的位域成员可能被打包，共享和分散到各个单独的字节
  位域是C语言中的一种特殊结构体成员，用于在结构体或联合体中以位级别（bit level）来定义数据成员。它的使用场景主要是为了节省存储空间或者与硬件寄存器映射的时候，硬件寄存器：位域常用于直接映射硬件寄存器，方便操作特定位，存储优化：通过位域可以精确控制每个成员占用的位数，减少空间浪费
  
  位域声明，是使用下列 声明符的结构体或联合体的 成员声明
  标识符(可选) : 宽度		
  标识符 正在声明的位域名称。名称是可选的：无名位域引入一个指定的填充位数
  宽度 一个拥有大于或等于零，且小于或等于底层类型位数的整数常量表达式。大于零时，此为此位域将占据的位数。零值仅允许用于无名位域，并拥有特殊含义：它指定结构体定义中的下个位域会从分配单元边界开始
  
  解释
  位域（在 C99 之前）只能有以下三种类型之一，（从 C99 开始到 C23）有四种类型（可能带有 const 或 volatile 限定符）
  unsigned int，用于无符号位域（unsigned int b:3; 的范围是 0..7 ）
  signed int，用于有符号位域（signed int b:3; 的范围是 -4..3 ）
  int 用于具有实现定义的有符号性的位域（注意，这与关键字 int 在其他任何地方的含义不同，在其他地方它的意思是 有符号整数）。例如，int b:3;  可能具有值的范围为 -4..3 或者 0..7
  _Bool 类型，用于单位比特位域（例如 bool x:1;），取值范围为 0 到 1，并且与其进行的隐式转换遵循布尔转换规则(C99 起)
  位精确整数类型（例如，_BitInt (5):4; 范围为 -8..7 而 unsigned _BitInt (5):4; 范围为 0..15））(C23 起)
  其他实现定义的类型可能是可接受的。位域是否可以具有原子类型也是由实现定义的。（自 C11 起）位域中的位数（宽度）设定了它可以容纳的值的范围

  允许将多个相邻位域打包在一起（通常如此）
  struct S {
    // 通常将占用 4 字节：
    // 5 位： b1 的值
    // 11 位：未使用
    // 6 位： b2 的值
    // 2 位： b3 的值
    // 8 位：未使用
    unsigned b1 : 5, : 11, b2 : 6, b3 : 2;
  };

  拥有零 宽度 的特殊无名位域打破填充：它指定下个位域在始于下个分配单元的起点
  struct S {
    // 通常将占用 8 字节
    // 5 位： b1 的值
    // 27 位：未使用
    // 6 位： b2 的值
    // 15 位： b3 的值
    // 11 位：未使用
    unsigned b1 : 5;
    unsigned :0; // 开始新的 unsigned int
    unsigned b2 : 6;
    unsigned b3 : 15;
  };
  因为位域不必在字节的起点开始，故不能取位域的地址。不可能有指向位域的指针。不能对位域使用 sizeof 和 _Alignas (C11 起)，但可以获取包含这些位域的分配单元的地址比如 unsigned 

  注解
  在位域上调用 offsetof 这种用法导致未定义行为
  offsetof是一个宏，用于计算结构体成员相对于结构体起始位置的偏移量。定义在stddef.h中，通常用于获取某个成员在结构体中的偏移量。但是，当试图使用offsetof宏来获取位域成员的偏移量时，会导致未定义行为
  内存布局和对齐：位域的内存布局和对齐方式在不同的编译器和平台上是不同的。位域成员可能会跨越字节边界或者被填充位（padding bits）分隔。这种不确定性使得位域成员的确切位置难以确定
  标准未定义性：C和C++标准没有定义位域成员在内存中的具体布局和对齐方式。因此，使用offsetof宏来获取位域成员的偏移量，会因为其未定义的存储特性而导致不可预测的结果

  保有位域的分配单元的对齐 这种位域的属性未指定
  在位域的背景下，所谓的“分配单元”通常指的是存储位域的基本内存单元（如字节、整型等）。位域的分配单元的对齐方式未指定
  平台依赖：不同的硬件平台和编译器可能会对位域成员进行不同的对齐处理。有的编译器可能会对位域进行字节对齐，有的可能会进行更复杂的对齐方式（如按整型对齐）
  无标准规定：既然C和C++标准没有明确规定位域的对齐属性，编译器有权自行决定如何处理位域的对齐。这会导致跨平台或跨编译器的代码在处理位域时产生不同的行为，增加了代码的不确定性和潜在的bug

  位域的下列属性为实现定义
  int 类型的位域被当做有符号或无符号，即在 C 中，如果你声明一个 int 类型的位域，编译器可以选择将它视为有符号或无符号。这取决于具体的编译器实现
  是否容许除 int、signed int、unsigned int、_Bool(C99 起) 和（可能 unsigned 的）_BitInt(N)(C23 起) 类型的位域，即按照规范，标准位域类型为 int、signed int、unsigned int、_Bool（从 C99 起）和 _BitInt(N)（从 C23 起）。是否允许其他类型的位域取决于编译器实现
  是否容许原子类型的位域(C11 起)，即 C11 引入了原子类型，但是否允许这些原子类型用作位域也是由编译器实现决定的
  位域是否能越过分配单元边界，即一些编译器可能强制每个位域必须完全包含在一个单元内，而另一些编译器可能允许位域跨越单元边界
  分配单元内位域的顺序（一些平台上位域从左往右打包，其他平台上是从右往左），即不同平台可能会以不同的方式存储位域。一些平台从左到右打包位域，另一些平台从右到左

  尽管 _Bool 的对象表示的位数至少为CHAR_BIT，_Bool类型位域的 宽度 不能大于1 (C99起)，即尽管 _Bool 类型的对象表示至少需要 CHAR_BIT 位（通常是 8 位），但在位域中，_Bool 类型的宽度不能超过 1 位
  C++ 编程语言中，位域的宽度能超出底层类型，并且 int 类型的位域始终为有符号，即在 C++ 中，位域宽度可以超过其底层类型的大小，且 int 类型的位域总是被视为有符号的
  */
  struct Examplebit {
    unsigned int a : 3;  // `a` 占用3位
    unsigned int b : 5;  // `b` 占用5位，可能与 `a` 位域共享同一个字节或存储单元
    unsigned int : 0;    // 强制下一位域（`c`）从新存储单元开始
    unsigned int c : 8;  // `c` 占用8位，从新存储单元开始
  };                     // a 和 b 可能被打包在同一个字节或存储单元中，具体取决于系统架构和编译器实现，由于 unsigned int : 0，c 将从新的存储单元的开始位置开始
  struct Sbit {
    // 三位无符号位域，
    // 允许值为 0..7
    unsigned int b : 3;
  };
  struct Sbit sbit = {7};
  ++sbit.b;                               // 无符号溢出
  print_purple("sbit.b = %d\n", sbit.b);  // 输出： 0
  struct Sbt1 {
    // 通常将占用 4 字节：
    // 5 位： b1 的值
    // 11 位：未使用
    // 6 位： b2 的值
    // 2 位： b3 的值
    // 8 位：未使用
    unsigned b1 : 5, : 11, b2 : 6, b3 : 2;
  };
  print_purple("Sbt1 sizeof = %zu\n",sizeof(struct Sbt1)); // 通常打印 4
  struct Sbt2 {
    // 通常将占用 8 字节
    // 5 位： b1 的值
    // 27 位：未使用
    // 6 位： b2 的值
    // 15 位： b3 的值
    // 11 位：未使用
    unsigned b1 : 5;
    unsigned :0; // 开始新的 unsigned int
    unsigned b2 : 6;
    unsigned b3 : 15;
  };
  print_purple("Sbt2 sizeof = %zu\n", sizeof(struct Sbt2)); // 通常打印 8

  /*
  const 类型限定符 
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
  char * const *pcptr2 = &ptr2;                       // const作用域 *pcptr2 OK：添加限定符（char* 到 char *const）
  char ** const ppctr2 = &ptr2;                       // const作用域 ppctr2
  const int num = 5;                                  // 10、// 在C++中，下面这种用法是合法的，因为const int类型的num可以当作常量表达式，但在C语言中是非法的，因为C不认为num是常量表达式
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
  int arrcval[const_size];                            // 这里定义了一个可变长数组，因为使用了const限定的const_size作为数组大小，在C语言中会这样处理

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
  
  多线程 lock-free 问题 volatile、原子类型、内存栅栏/屏障、编译器重排、CPU乱序
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
  // sig_atomic_t flagsl = 0;                                 // 11、当处理信号时，信号处理函数可能会在异步执行的环境中访问某些变量。使用 volatile 和 sig_atomic_t 类型可以确保这些变量在信号处理函数中正确地被读取和写入
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

  /*
  restrict(C99) 类型限定符
  在 C 类型系统中每一个独立的类型都有数个该类型的限定版本，对应 const、volatile，以及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。此节描述 restrict 限定符的效果
  在 C99 标准中引入的 restrict 类型限定符旨在帮助编译器进行优化。它告诉编译器，通过被 restrict 限定的指针所访问的内存地址不会通过任何其他指针进行访问。这种限定符主要用于指针，可以帮助编译器更好地优化代码，从而提升性能
  当你声明一个指针为 restrict 时，实际上是在告诉编译器：仅通过这个指针访问的内存不会通过其他指针访问，编译器可以假定没有其他指针访问这段内存，从而进行更激进的优化

  restrict 限定指针
  1、restrict 的使用规则 仅有指向对象类型的指针及其（可能多维的）数组(C23起)可被 restrict 限定
  restrict 只能用于指向对象（变量、数组元素等）的指针，而不能用于其他类型
  不能直接用于基本数据类型，如 int、float 等
  不能用于函数指针
  
  具体而言，以下是错误的
  int restrict *p
  float (* restrict f9)(void)

  2、限制语义仅适用于左值表达式；例如，强制转换为受限限定指针或调用返回受限限定指针的函数不是左值，并且限定符没有效果
  restrict 限定符的语义仅适用于左值表达式。这句原文的意思是说，只有在左值上下文中，restrict 限定符才有实际的作用。如果是在非左值上下文中使用，那么 restrict 限定符是没有效果的
  左值（lvalue）：表示一个对象，可以出现在赋值操作符的左侧。例如变量、数组元素、指针解引用等
  右值（rvalue）：表示一个值（数据），不能出现在赋值操作符的左侧。例如常量、表达式的结果、函数调用的返回值等

  3、在声明受限制指针 restrict P 的块的每次执行期间（通常是在P作为函数参数的函数体的每次执行期间），如果通过P（直接或间接）可访问的某个对象以任何方式被修改，那么在该块中对该对象的所有访问（包括读取和写入）都必须通过P（直接或间接）进行，否则行为是未定义的
  在声明了 restrict 指针 P 的块的每次执行（典型例子是函数体的执行，其中 P 为函数形参）中，若某个可由 P（直接或间接）访问的对象会被任何手段修改，则该块中对该对象的所有访问（读或写），都必须经由 P 进行，否则行为未定义

  4、如果对象从未被修改，可以通过不同的受限限定 restrict 指针进行别名化和访问（请注意，如果通过别名化的受限限定指针 restrict 所指向的对象本身又是指针，这种别名化可能会抑制优化）
  如果一个对象从未被修改，那么即便是通过不同的 restrict 限定指针进行别名化访问，也不会违反 restrict 的语义。换句话说，如果你保证对象只读，那么多个 restrict 限定指针访问同一对象是安全的，不会破坏编译器的优化假设
  如果 restrict 限定指针本身指向的是另一个指针（而不是基本类型或常规对象），那么这种别名化可能会抑制优化。原因在于指向指针的指针可能会引入额外的间接访问，编译器很难确保这种间接访问不会引入额外的修改或冲突，从而限制优化的能力
  指针指向指针：在这种情况下，restrict 指针指向的是一个指针，而不是直接指向具体的数据对象
  间接访问：通过 restrict 指针间接访问最终的数据对象，是通过两步操作完成的：先访问指针，再通过这个指针访问数据对象

  5、从一个受限指针 restrict 赋值给另一个受限指针 restrict 是未定义行为，除非是从某个外部块中的指向对象的指针赋值给某个内部块中的指针（包括在调用具有受限指针 restrict 参数的函数时使用受限指针 restrict 参数），或者在从函数返回时（以及在其他情况下，当源指针所在的块结束时）
  在 C99 标准中，restrict 关键字的使用有一些严格的规则，以确保编译器能够安全地进行优化。特别是，将一个 restrict 指针赋值给另一个指针的行为在某些情况下是未定义的，但在其他特定情况下是允许的
  未定义行为：一般情况下，将一个 restrict 指针赋值给另一个指针（包括另一个 restrict 指针或普通指针）是未定义行为。这是因为这样赋值可能破坏编译器对 restrict 指针独占访问内存区域的假设
  
  合法行为：在特定情况下，这种赋值是允许的，并且行为是定义明确的。主要包括以下几种情况
  将指向外部块的 restrict 指针赋值给内部块中的指针
  将 restrict 指针作为参数传递给函数
  从函数返回 restrict 指针
  当前一个 restrict 指针的生命周期结束时，将其赋值给另一个指针

  6、restrict 指针可以自由地赋值给非 restrict 指针，只要编译器还能优化代码，优化机会还是会保留的

  restrict 限定数组
  7、若以 restrict 类型限定符声明数组类型（通过使用 typedef），则数组类型无 restrict 限定，但其元素类型有 restrict 限定 (C23前)始终认为数组类型与其元素类型同等地拥有 restrict 限定(C23起)
  C23 之前：restrict 关键字仅应用于数组元素类型，而不是整个数组类型。将带有 restrict 限定符的对象的地址赋值给无限定符的指针是合法的
  C23 起：restrict 关键字应用于整个数组类型及其元素类型。将带有 restrict 限定符的对象的地址赋值给无限定符的指针是非法的，因为这违反了 restrict 的独占访问假设

  restrict 限定函数参数
  8、在函数声明中，关键词 restrict 可以出现于方括号内，用以声明函数参数的数组类型。它对数组所转换得的指针类型赋予进行限定，即数组转为指针后限定
  void f(int n, float * restrict r, float * restrict s)
  void f(int m, int n, float a[restrict m][n], float b[restrict m][n]); 参数 a 和 b 都是二维浮点数组，且它们的每一个指针元素都带有 restrict 限定符。这意味着在函数 f 的执行期间，编译器可以假设通过 a 和 b 访问的内存区域是独立的，不会重叠。这种假设使得编译器可以进行更多的优化

  注解
  restrict 限定符的预期用途（如同 “register” 存储类）是促进优化，从组成一个符合标准的程序的所有预处理翻译单元中删除该限定符的所有实例不会改变其含义（即可观察的行为）
  restrict 限定符的预期用途（类似于 register 存储类）是促进优化。如果从构成符合标准的程序的所有预处理翻译单元中删除所有 restrict 限定符，该程序的含义（即可观察的行为）不会改变

  编译器可以忽略任何一个或全部使用 restrict 的别名使用暗示
  编译器可以自由地忽略任何或所有与 restrict 使用相关的别名（aliasing）含义。这意味着即使程序员使用了 restrict，编译器也可以选择不利用这些信息进行优化

  欲避免未定义行为，程序员应该确保 restrict 限定指针所做的别名引用断言不会违规
  为了避免未定义行为，程序员必须确保由 restrict 限定的指针所做的别名断言不被违反。也就是说，程序员需要保证使用 restrict 限定符的指针确实不会与其他指针指向同一内存区域，否则可能会导致未定义行为

  许多编译器提供作为 restrict 对立面的语言扩展：指示即使指针类型不同，也可以别名使用的属性：“may_alias”（gcc）
  许多编译器提供了一种与 restrict 相反的语言扩展，用于指示即使指针类型不同，这些指针也可能别名。例如，GCC 提供的 may_alias 属性，may_alias 扩展是一种编译器属性，告诉编译器即使指针类型不同，这些指针也可能指向相同的内存区域。这与 restrict 的作用相反。restrict 用于指示某个指针是唯一访问某一块内存区域的方式，从而允许更激进的优化，而 may_alias 则用于指示指针可能别名，从而避免优化导致的错误
  int * __attribute__((may_alias)) ptr; 这个属性告诉编译器，即使 ptr 的类型与其他指针不同，它们也可能指向相同的内存区域，编译器应考虑这种可能性，在没有 may_alias 属性的情况下，编译器可能假设 float 类型的指针和 int 类型的指针不会指向同一内存区域，从而进行一些不安全的优化

  使用模式
  9、restrict 限定指针有几种常用的使用模式
  
  文件作用域：
  文件作用域的 restrict 限定指针必须在程序运行期间指向单个数组的元素。该数组对象不可以通过 restrict 指针和通过其声明名称（若有的话）或另一个 restrict 指针两种方式一同引用
  在文件作用域中，一个被 restrict 限定的指针在程序执行期间必须指向单个数组对象。这个数组对象不能既通过这个受限 restrict 指针被引用，又通过其声明的名称（如果有的话）或者另一个受限指针 restrict 被引用
  
  文件作用域 restrict 指针对访问动态分配的全局数组有用；restrict 语义令通过此指针的引用，和通过静态数组的声明名称引用该数组效率相当
  在文件作用域中，受限制 restrict 指针对于提供对动态分配的全局数组的访问很有用。restrict 语义使得通过这种指针进行的引用优化成为可能，其效果与通过静态数组的声明名称进行引用的优化效果一样好。也就是说，文件作用域中的受限制 restrict 指针能够在访问动态分配的全局数组时，实现高效的引用优化，就像通过静态数组的名称进行引用一样高效

  函数形参
  最广泛的 restrict 限定指针使用，是用作函数形参
  在下例中，编译器可能推断出被修改对象不会有别名引用，从而能更大胆地优化循环。在 f 的入口处，必须提供 restrict 指针对关联数组的独占访问。特别是，在 f 内 b 或 c 都不可以指入 a 所关联的数组，因为它们都不是以基于 a 的指针值赋值的。对于 b，因为其声明的 const 限定符这是显然的，但对于 c，需要检查 f 的函数体
  在这段代码示例中，函数 f 的参数 a 被声明为 restrict 指针。这意味着在 f 的执行过程中，编译器可以假定通过 a 指针访问的数组（也就是 a 所关联的数组）不会有别名引用。简单来说，就是编译器认为不会有其他指针（除了基于 a 的指针值进行赋值得到的指针外）同时指向 a 所关联的数组并对其进行修改，基于这样的假设，编译器就能更大胆地去优化循环等代码逻辑
  例如在 f 函数中的循环语句 for (i=0; i<n; i++) a[i] = b[i] + c[i];，因为 a 是 restrict 指针，编译器会认为只有通过 a 这个途径在这个函数内对其关联的数组进行操作，不会出现其他 “隐藏” 的指针也在操作同一个数组的情况，所以可以采用更高效的方式生成相应的机器指令，比如更合理地安排数据加载、存储顺序以及利用寄存器等资源来提升代码的执行效率
  float x[100];
  float *c;
  void f(int n, float * restrict a, float * const b)  // float * restrict a: a 是一个 restrict 限定的指针，指向的数组是唯一通过 a 访问的，不会通过其他指针访问、float * const b: b 是一个常量指针（指针本身不可修改），指向的数组可以通过其他指针（如 c）访问
  {
    int i;
    for (i=0; i<n; i++)         // 独占访问要求：在 f 函数的入口处，参数 a 作为 restrict 指针必须对其关联的数组有独占访问权。这意味着在 f 函数的整个执行过程中，别的指针不能偷偷地 “闯入” 并指向这个和 a 相关的同一个数组，除非这个指针是基于 a 的指针值进行赋值得到的
      a[i] = b[i] + c[i];       // 在函数 f 中，参数 a 被声明为 restrict。这意味着在调用 f 函数时，通过 a 访问的内存区域不能通过其他指针参数（如 b）或全局变量（如 c）访问。这一限定符允许编译器更大胆地优化代码，因为它可以假设 a 指向的内存区域没有别名引用
  }                            
  void g3(void)                 
  {
    float d[100], e[100];
    c = x; 
    f(100, d, e);               // OK f(100, d, e); 和 f(50, d, d+50); 是有效调用，因为 a 和 b 指向的数组没有重叠
    f(50, d, d+50);             // OK
    f(99, d+1, d);              // 未定义行为，f(99, d+1, d); 和 f(99, d+1, e); 是未定义行为，因为在这两种情况下，a 和 b 指向的内存区域重叠，违反了 restrict 的约束
    c = d; 
    f(99, d+1, e);              // 未定义行为
    f(99, e, d+1);              // OK
  }
  请注意，允许 c 指向与 b 相关联的数组。还请注意，对于这些目的，与特定指针相关联的 “数组” 仅指通过该指针实际引用的数组对象的那部分
  请注意，在上述示例中，编译器可以推断出 a 和 b 不会别名，因为 b 的常量性保证了它在函数体中不能依赖于 a。等效地，程序员可以编写void f(int n, float *a, float const * restrict b)，在这种情况下，编译器可以推断出通过 b 引用的对象不能被修改，因此不能同时使用 b 和 a 引用任何已修改的对象，如果程序员编写 void f(int n, float * restrict a, float *b)，那么编译器在不检查函数体的情况下将无法推断出 a 和 b 不别名。一般来说，最好在函数原型中用 restrict 显式注释所有不别名的指针
  const 与 restrict 对于参数 b，它被声明为 const，这意味着通过 b 不能修改其指向的内存区域。这一点与 restrict 结合，编译器可以确定通过 b 访问的内存不会被修改，更有助于优化
  void f(int n, float * a, float const * restrict b) 这种情况下，编译器同样可以理解，通过 b 引用的对象不会被修改，并且通过 a 和 b 引用的对象不会互相影响

  restrict：用于指示某个指针是唯一访问某一内存区域的方式，允许编译器进行更大胆的优化
  函数参数中的 restrict：在函数参数中使用 restrict 可以显著提高性能，因为编译器可以假设这些指针不会别名使用
  const 与 restrict 结合：通过将指针声明为 const，可以进一步优化，因为编译器可以确定这些指针引用的内存不会被修改
  void f(int n, float * restrict a, float const * b)
  void f(int n, float * a, float const * restrict b)
  void f(int n, float * restrict a, float * b)

  通常情况下，最好在函数原型中用 restrict 显式标注所有不会别名使用的指针

  块作用域
  一个块作用域的 restrict 限定指针会做一个限于其块内的别名引用断言。它允许局部断言仅应用到重要的块，譬如紧凑循环。它亦使得将使用 restrict 限定指针的函数转换成宏成为可能
  块作用域中的 restrict 限定符用于限制指针的别名引用，仅在特定块内有效。通过这种方式，可以在短小的代码段（如紧凑的循环）中应用 restrict，从而提高优化效率，而不会影响整个函数的行为。这在将使用 restrict 限定指针的代码转换为宏时尤其有用
  块作用域中的 restrict 限定符在宏定义中，可以帮助编译器在特定代码块（如循环）中进行更好的优化，同时避免了全局作用域的限制，使得代码更加灵活和高效
  float x[100];
  float *c;
  #define f3(N, A, B)                                  \
  do                                                   \
  { int n = (N);                                       \  // 在 f3 宏中，float * restrict a = (A); 表示指针 a 是 restrict 限定的，意味着在该块作用域内，通过 a 访问的内存区域不会通过其他指针访问。这使得编译器可以对这段代码进行更激进的优化
    float * restrict a = (A);                          \  // 由于 restrict 仅在宏定义的块内有效，不会影响宏外的代码，提高了代码灵活性
    float * const    b = (B);                          \  // float * const b = (B); 表示指针 b 是常量指针，即 b 本身不可修改，但可以通过 b 修改其指向的内容
    int i;                                             \  // 这个宏 f3 定义了一个内联的紧凑循环。通过使用 do { ... } while(0) 结构，确保宏在每次调用时都像一个单一的语句块
    for ( i=0; i<n; i++ )                              \  // 在宏内，定义了局部变量 n、a、b 和 i，这些变量仅在宏块内生效，不会与宏外的变量产生冲突
      a[i] = b[i] + c[i];                              \
  } while(0)
  float d[100], e[100];
  c = x;
  f3(100, d, e);   // 有效调用，f3(100, d, e); 和 f3(50, d, d+50); 是有效的，因为在块作用域内，a 和 b 的访问没有冲突，并且编译器可以利用 restrict 进行优化
  f3(50, d, d+50); // 有效调用，c 是全局变量，在宏内的循环中也被使用，但这不会影响 a 和 b 的 restrict 性质，因为 restrict 的别名约束只适用于块内的局部变量
  
  局部优化：通过在块作用域内使用 restrict，可以在局部代码段（如循环）中进行优化，而不影响整个函数的其他部分
  宏的灵活性：将使用 restrict 的代码转换为宏，使得这一优化技术可以在各处灵活应用，而无需重复编写相同的代码
  防止别名冲突：通过块作用域内的 restrict 限定，可以防止局部指针产生别名冲突，从而提高代码效率

  结构体成员
  作为结构体成员的 restrict 限定指针，所做的别名引用断言作用域，是用于访问该结构体的标识符的作用域。即使结构体声明于文件作用域，当用以访问此结构体的标识符拥有块作用域时，结构体中的别名引用断言亦拥有块作用域；别名引用断言仅在块执行或函数调用中生效，具体取决于此结构体类型的对象是如何创造的
  当 restrict 限定指针作为结构体成员时，别名引用断言的作用域是由用于访问该结构体实例的标识符的作用域决定的。即使结构体类型本身在文件作用域，如果结构体变量在块作用域中声明，那么别名引用断言也在该块作用域中生效
  struct t                  // restrict 指针断言
  {
    int n;                  // 成员指向无交集的存储区
    float * restrict p;
    float * restrict q;
  };
  void ff(struct t r, struct t s)
  {
    struct t u;
    // r、s、u 拥有块作用域
    // r.p、r.q、s.p、s.q、u.p、u.q 应该在每次执行 ff 时全部指向无交集的存储区
    // ...
  }
  这种设计在高性能计算中尤为重要。例如，在复杂的数值计算或图像处理代码中，确保不同指针访问的内存区域不重叠，可以显著提高内存访问效率
  restrict 限定指针作为结构体的成员，其别名引用断言的作用域由结构体实例的作用域决定
  结构体实例在块作用域内时，restrict 限定只在该块作用域内生效
  这允许编译器在局部作用域内进行更好的优化，而不影响全局作用域的代码行为
  在函数 ff 中，每次调用函数时，r、s 和 u 的 restrict 指针提供了独占内存访问的保证，防止数据竞争，提升性能

  // int foo(int *a, int *b)
  // {
  //   *a = 5;
  //   *b = 6;
  //   return *a + *b;
  // }
  // int rfoo(int *restrict a, int *restrict b)
  // {
  //   *a = 5;
  //   *b = 6;
  //   return *a + *b;
  // }
  可能的输出：
  ; 所生成的 64 位 Intel 平台的代码：
  foo:
    movl    $5, (%rdi)    ; 存储 5 于 *a
    movl    $6, (%rsi)    ; 存储 6 于 *b
    movl    (%rdi), %eax  ; 从 *a 读回值，考虑到前面的存储会修改它
    addl    $6, %eax      ; 将从 *a 读得的值加 6
    ret
  rfoo:
    movl      $11, %eax   ; 结果是 11，编译时常量
    movl      $5, (%rdi)  ; 存储 5 于 *a
    movl      $6, (%rsi)  ; 存储 6 于 *b
    ret
  关键字 restrict 只用于限定指针；该关键字用于告知编译器，所有修改该指针所指向内容的操作全部都是基于(base on)该指针的，即不存在其它进行修改操作的途径；这样的后果是帮助编译器进行更好的代码优化，生成更有效率的汇编代码  
  */
  // int restrict *resp;              // 1、错误 restrict 限定的是 *resp
  // float (* restrict resf9)(void);  // 错误 restrict 不能用于函数指针，restrict 只应限定指针，而不应直接限定基本数据类型或函数指针  
  int restrictnum = 10;
  float restrictnum1 = 10.f;
  int * restrict restp = &restrictnum;                // restp 是一个指向 int 的指针，并且被 restrict 限定
  float * restrict restq = &restrictnum1;             // restq 是一个指向 float 的指针，并且被 restrict 限定
  int * restrict restarr[10];                         // restarr 是一个数组，数组的每个元素是一个被 restrict 限定的指向 int 的指针
  print_purple("restrict restp = %d.\n", *restp);
  print_purple("restrict restq = %.2f.\n", *restq);
  int * restrict restp1 = &restrictnum;               // 2、限制语义仅适用于左值表达式
  *restp1 = 10;                                       // 左值上下文中的 restrict：这里 restp1 是一个左值，并且有 restrict 限定，所以编译器可以进行优化  
  int *restq1 = (int * restrict) restp1;              // 非左值上下文中的 restrict（无效）：这里 restp1 不是左值，restrict 限定无效
  *restq1 = 10;                                       // 这行代码中，restq1 是一个左值，但 restrict 限定信息已经丢失 ，(int * restrict) p 是一个强制转换表达式，结果不是左值，因此 restrict 限定符无效。赋值给 q 后，q 的 restrict 限定符信息已经丢失，所以在 *q = 10 这一行中，编译器不能利用 restrict 信息进行优化 
  print_purple("restrict restp1 = %d.\n", *restp1);
  print_purple("restrict restq1 = %d.\n", *restq1);
  int * restrict barrest(void);                       // 函数返回值中的 restrict（无效）：bar() 函数返回一个 restrict 限定的指针，但返回值本身不是左值，因此 restrict 限定符无效
  // void f(int n, int * restrict p, int * restrict q) {
  //   while (n-- > 0)                    // 3、必须由声明了 restrict 的指针 p 进行所有访问（读或写），否则会发生定义行为
  //     *p++ = *q++;                     // 通过 *p 修改的对象与通过 *q 读取的无一相同
  //                                      // 编译器可以自由地优化、向量化、做页面映射等等。
  // }
  // void g(void) {
  //   extern int d[100];
  //   f(50, d + 50, d);                  // OK，不会 p 和 q 不会重复访问
  //   f(50, d + 1, d);                   // 未定义行为：f 中的 p 和 q 均可访问 d[1]
  // }
  const int * restrict crestp = &restrictnum;  // 4、crestp 是 restrict 限定的指针，并且它们指向的对象是 const 类型（只读）。因为对象不会被修改，编译器可以假设通过 crestp 的访问不会相互影响，从而进行优化
  int acrestp = *crestp;
  int ** restrict crestpp;                     // crestpp 是 restrict 指向指针的指针。因为 crestpp 指向的对象本身是指针，编译器在处理间接访问 *crestpp 时，难以保证这些指针不会引入冲突或修改，从而可能抑制优化
  int *acrestpp = *crestpp;                
  // *acrestpp = 10;                           // 由于 crestpp 指向的是指针，它们的间接访问可能引入冲突，限制优化
  // 初始化 crestpp：crestpp 是一个 restrict 指向指针的指针。它指向某个 int* 类型的指针
  // 间接访问 *crestpp：int *acrestpp = *crestpp; 这行代码首先通过 crestpp 访问到一个 int* 类型的指针，并将其赋值给 acrestpp
  // 修改内存 *acrestpp = 10;：这行代码通过 acrestpp 修改了内存中的一个整数值
  // 地址冲突的潜在风险：编译器无法保证 *crestpp 指向的 int* 指针没有通过其他途径被修改或访问。也就是说，crestpp 指向的内存位置可能还被其他指针间接访问或修改，从而引入内存访问冲突
  // 优化限制：为了进行优化，编译器需要确定内存访问彼此独立且没有冲突。当无法确定时，编译器不得不保守地假设可能存在冲突，从而限制优化。例如，它无法重排序指令或进行寄存器重用优化，因为无法确定对内存的访问是否安全
  int ** restrict crestpp0;                    // crestpp 是一个 restrict 指针，指向一个 int* 指针
  int *acrestpp1 = *crestpp0;                  // acrestpp1 和 acrestpp2 都间接指向 crestpp 指向的 int* 指针
  int *acrestpp2 = *crestpp0;                  // 但是编译器无法确定 *crestpp 是否会被其他指针（例如 acrestpp2）间接访问和修改。这意味着编译器必须假设 *crestpp 可能通过其他指针被修改，从而抑制某些优化
  // *acrestpp1 = 10;
  // *acrestpp2 = 20;
  // int* restrict restrictp1 = &a;          // 5、从一个受限指针 restrict 赋值给另一个受限指针 restrict 是未定义行为
  // int* restrict restrictp2 = &b;
  // restrictp1 = restrictp2;                // 未定义行为
  int * restrict outerrestp;                 // 将指向外部块的 restrict 指针赋值给内部块中的指针，外部块的 restrict 指针
  {
    int *outerrestq = outerrestp;            // 合法：outerrestq 在 outerrestp 所在块的内部
  }
  // void process_array(int * restrict arr); // 将 restrict 指针作为参数传递给函数
  // int * restrict arrrestp;
  // process_array(arrrestp);                // 合法：将 restrict 指针作为函数参数传递
  // int * restrict get_restricted_ptr(int * restrict input) {
  //   return input;                         // 合法：从函数返回 restrict 指针
  // }  
  int * restrict outerrestp1;                // 外部块的 restrict 指针
  {
    int *outerrestq1 = outerrestp1;          // 合法：outerrestq1 在 outerrestp1 所在块的内部
  }
  int *outerrestqr = outerrestp1;            // outerrestp1 的生命周期结束后，可以将其赋值给另一个指针
  // void f(int n, float * restrict r, float * restrict s) {
  //   float * p = r, * q = s;               // OK    
  //   while (n-- > 0)                       // 6、restrict 指针可以自由地赋值给非 restrict 指针，只要编译器还能优化代码，优化机会还是保留
  //     *p++ = *q++;                        // 几乎肯定优化成仅如 *r++ = *s++ 一般
  // }
  typedef int *array_t[10];                     // 7、若以 restrict 类型限定符声明数组类型（通过使用 typedef），则数组类型无 restrict 限定，但其元素类型有 restrict 限定 (C23前)始终认为数组类型与其元素类型同等地拥有 restrict 限定(C23起)
  // restrict array_t a;                        // a 的类型是 int *restrict[10]，在这个声明中，restrict 关键字应用于数组的元素类型，而不是数组类型本身。也就是说，数组 a 的每个元素都是一个 int * restrict 类型的指针。这意味着每个指针都具有 restrict 限定符，但数组 a 本身并不具有 restrict 限定符，注：clang 和 icc 以 array_t 不是指针类型为由拒绝
  // void *unqual_ptr = &a;                     // C23 前 OK 在这种情况下，unqual_ptr 是一个 void* 类型的指针，指向数组 a，这种转换是合法的，因为 restrict 限定符只影响指针的行为，而不影响数组本身； C23 起错误，在 C23 标准及之后的标准中，这种转换被视为非法，因为 restrict 限定符适用于整个数组类型和它的元素类型，赋值给无限定符的指针会违反 restrict 的独占访问假设，clang 即使在 C89-C17 模式也应用 C++/C23 中的规则，
  // void f(int m, int n, float a[restrict m][n], float b[restrict m][n]);
  // void g12(int n, float (*p)[n]) {           // 8、在函数声明中，关键词 restrict 可以出现于方括号内，用以声明函数参数的数组类型。它对数组所转换得的指针类型赋予进行限定
  //   f(10, n, p, p+10);                       // OK，在第一次调用中，m 的值是 10，因此 a 和 b 分别指向 p 和 p + 10，即 p 指向的数组和紧接在其后的数组。这种情况是安全的，因为 p 和 p + 10 指向的内存区域不会重叠                 
  //   f(20, n, p, p+10);                       // 可能是未定义行为（取决于 f 所为），在第二次调用中，m 的值是 20，因此 a 和 b 分别指向 p 和 p + 10，即 p 指向的数组和紧接在其后的 20 个数组。在这种情况下，p 和 p + 10 所指向的内存区域可能存在重叠，具体取决于 n 的值和 f 函数的实现。如果 n 的值较小，例如只有 1，那么 p 和 p + 10 实际上可能指向同一个内存区域的部分
  // }
  float *restrict resta, *restrict restb;       // 8、文件作用域
  float restc[100];                             // 编译器可以从 restrict 限定符推断 resta、restb 和 restc 都没有潜在的别名引用
  // int init(int n)
  // {
  //    float * t = malloc(2*n*sizeof(float));
  //    resta = t;      // resta 引用前半
  //    restb = t + n;  // restb 引用后半
  // }
  void fnres1(int n, float * restrict a, float const * b);  // 函数形参 编译器可以优化基于 a 的唯一性，但不能假设 b 所指向的内存区域没有别名
  void fnres2(int n, float * a, float const * restrict b);  // 编译器可以假设通过 b 访问的内存区域是唯一访问的，且不会被修改，这允许更好的优化
  void fnres3(int n, float * restrict a, float * b);        // 编译器可以优化基于 a 的唯一性，但不能假设 b 所指向的内存区域没有别名，并且 b 的内容是可修改的
  // #define f3(N, A, B)                                \   // 块作用域中的 restrict 限定符在宏定义中，可以帮助编译器在特定代码块（如循环）中进行更好的优化，同时避免了全局作用域的限制，使得代码更加灵活和高效
  // do                                                 \
  // { int n = (N);                                     \
  //   float * restrict a = (A);                        \
  //   float * const    b = (B);                        \
  //   int i;                                           \
  //   for ( i=0; i<n; i++ )                            \
  //     a[i] = b[i] + c[i];                            \
  // } while(0);
  struct t                                        // 块作用域，结构体 t 定义了两个 restrict 限定指针成员 p 和 q，这些指针指向的内存区域在相应的作用域内不能通过其他指针访问，restrict 限定符指示编译器，这些指针所指向的内存区域是独占访问的，可以用于优化
  {
    int n;
    float * restrict p;
    float * restrict q;
  };
  // void ff(struct t r, struct t s)              // r 和 s 是函数 ff 的参数，u 是函数 ff 内的局部变量。这些结构体实例在块作用域内
  // {                                            // 虽然结构体 t 在文件作用域中声明，但在 ff 函数中使用的 r、s 和 u 是在块作用域内，这意味着它们的 restrict 限定指针的别名断言也是在这个作用域内生效
  //   struct t u;
  //   // r、s、u 拥有块作用域
  //   // r.p、r.q、s.p、s.q、u.p、u.q 应该在
  //   // 每次执行 ff 时全部指向无交集的存储区
  //   // ...
  // }                                            // 别名引用断言 r.p、r.q、s.p、s.q、u.p、u.q 都是 restrict 限定指针，每次调用 ff 函数时，编译器可以假设这些指针在函数调用期间指向的内存区域是独占的，不会与其他指针别名。这允许编译器进行更激进的优化，在 ff 函数的执行过程中，可以确保 r.p、r.q、s.p、s.q、u.p 和 u.q 指向的内存区域不会交叉，从而避免数据竞争和提升性能
  void ff(struct t r, struct t s);

  /* 
  对齐说明符(C11)
    内存对齐是一种优化技术，旨在提高程序的性能和减少内存访问错误。4字节对齐和8字节对齐是两种常见的内存对齐方式。以下是它们的主要区别和相关概念
    4字节对齐 定义：数据在内存中的起始地址必须是4的倍数 适用对象：一般用于较小的数据类型，例如int（通常占用4字节）
    优点：可以减少内存空间的浪费、对于32位系统，访问速度较快
    使用场景：适合那些需要频繁访问的4字节数据类型
  
    8字节对齐 定义：数据在内存中的起始地址必须是8的倍数 适用对象：适用于较大的数据类型，例如double（通常占用8字节）和64位系统的指针
    优点：在64位系统上，访问速度较快，因为64位处理器通常一次能处理8字节数据、可以避免某些架构上由于未对齐访问带来的性能损失和潜在的硬件异常
    使用场景：适合那些需要频繁访问的8字节数据类型以及64位系统上的数据
    
    假如在一块内存中存储两个数据，一个是4字节的int，另一个是8字节的double
    4字节对齐：
    int数据存储在地址0x0000处
    double数据需要存储在地址0x0004处（因为4字节对齐），但这样会导致double数据的访问可能需要两次读取操作，影响性能
    8字节对齐：
    int数据存储在地址0x0000处
    double数据存储在地址0x0008处（因为8字节对齐），保证了数据的高效访问

  _Alignas (C11起), alignas (C23起) 出现于声明语法中，作为修改所声明对象的对齐要求的类型说明符
  _Alignas (表达式)	(1)	(C11起)
  alignas (表达式)	(2)	(C23起)
  _Alignas (类型)	  (3)	(C11起)
  alignas (类型)	  (4)	(C23起)
  表达式-	任何值为合法对齐或零的整数常量表达式，整数常量表达式在编译时求值
  类型- 任何类型名称
  关键词 _Alignas 亦用作便利宏 alignas，于头文件 <stdalign.h> 提供(C23前)

  解释
  1、_Alignas(C23前)alignas(C23起) 说明符只能在声明不是位域，且不拥有寄存器存储类的对象时使用。它不能用于函数参数声明，亦不能用于 typedef
  在 C 语言中，_Alignas（在C23之前）或 alignas（从C23起）说明符用于指定对象的对齐要求。对齐是指数据在内存中存储时的起始地址必须是某个特定的倍数，这样可以提高访问速度和效率。对于某些硬件架构或性能需求，可以手动指定这种对齐要求
  _Alignas / alignas 说明符有一些使用限制
  不能用于位域：位域是一种结构体成员，表示多个字段共享一个存储单元，对齐要求不适用于这种情况
  不能用于具有寄存器存储类的对象：寄存器变量存储在 CPU 寄存器中，而不是内存中，因此对齐没有意义
  不能用于函数参数声明：函数参数不需要显式的内存对齐，因为它们的管理由编译器处理
  不能用于 typedef 声明：typedef 声明只是类型的别名，不涉及具体的内存分配，因此对齐说明符无

  用于声明时，设置被声明对象的对齐要求为
  1,2) 表达式 的结果，除非它是零
  3,4) 类型 的对齐要求，即设置为 _Alignof(type)(C23前) alignof(type)(C23起)
  struct S1 {
    _Alignas(16) char arr[64]; // 在 C23 之前：arr 的对齐为 16 字节
    alignas(16) char arr[64];  // 从 C23 起：arr 的对齐为 16 字节
  };
  struct S2 {
    _Alignas(double) int x; // 在 C23 之前：x 的对齐为 double 的对齐
    alignas(double) int x;  // 从 C23 起：x 的对齐为 double 的对齐
  };

  当你使用类型的对齐要求时，如果这会降低该类型本身的自然对齐要求，那么这种更改是无效的，在这个例子中，如果 double 的对齐要求大于 float 的对齐要求，那么这种设置是无效的，因为不能降低 double 的自然对齐要求
  struct Sa1 {
    _Alignas(float) double x1;  // 在 C23 之前，Requested alignment is less than minimum alignment of 8 for type 'double'
    alignas(float) double x2;   // 从 C23 起，Requested alignment is less than minimum alignment of 8 for type 'double'
  };

  2、表达式求值为零的情况 如果用于对齐的表达式求值为零，则此对齐说明符将没有效果。也就是说，对象将使用其默认的对齐要求
  3、多个对齐说明符 如果在同一个声明中出现多个 _Alignas（或 alignas）说明符，编译器会选择最严格的对齐要求，即最大的对齐要求
  4、对齐说明符在声明和定义中的一致性 alignas（或 _Alignas）说明符只需要在对象定义中出现一次。如果在对象的任何声明中使用了对齐说明符，则在对象的定义中也必须使用相同的对齐要求，如果不同的翻译单元（即不同源文件）为同一个对象声明了不同的对齐要求，则行为是未定义的。这意味着程序可能会在不同编译器或平台上表现出不同的行为，甚至可能导致崩溃或数据损坏
  
  注解
  5、C++ 中，alignas 说明符亦可应用于声明 class/struct/union 类型以及枚举。这在 C 中不受支持，但可通过在成员声明中使用 _Alignas(C23 前)alignas(C23 起) 来控制 struct 类型的对齐  
  */
  struct Sa {
    _Alignas(double) int x1;            // 1、在 C23 之前
    alignas(double) int x2;             // 从 C23 起
  };
  // void func(alignas(16) int param);  // 错误，无法使用 alignas 在函数参数声明中
  _Alignas(0) int xa;                   // 2、在 C23 之前：无效果，使用 int 的默认对齐，如果 alignas 的表达式求值为零，则对象的对齐使用其默认对齐要求
  alignas(0) int ya;                    // 从 C23 起：无效果，使用 int 的默认对齐  
  _Alignas(8) _Alignas(16) int xa1;     // 3、在 C23 之前：实际对齐为 16，在同一个声明中出现多个 alignas 说明符时，使用最大的对齐要求
  alignas(8) alignas(16) int ya1;       // 从 C23 起：实际对齐为 16
  // extern int xa6 alignas(32);        // 4、声明 x，指定对齐为 32 字节，声明和定义中的一致性：如果在对象的任何声明中使用了 alignas，则在对象定义中必须使用相同的对齐要求。不同翻译单元声明同一对象时，如果对齐不同，则行为未定义
  // int xa6 alignas(32);               // 定义 x，必须与声明中的对齐一致
  // extern int xa6 alignas(16);        // 错误：如果在另一个翻译单元（另一个文件）中声明为不同的对齐，与其他翻译单元中的对齐不一致，行为未定义
  struct sse_t                          // 5、每一个 struct sse_t 类型的对象会在 16 字节边界对齐，（注意：需要支持 DR 444）
  {
    alignas(16) float sse_data[4];      // alignas(16) 说明符指定 sse_data 数组的起始地址必须是 16 字节的倍数，这意味着每一个 struct sse_t 类型的对象都会在 16 字节边界对齐。这种对齐通常用于 SIMD（单指令多数据）操作，提高了操作效率
  };
  struct data {                         // 这种 struct data 的每一个对象都会在 128 字节边界对齐
    char x;                             // alignas(128) 说明符指定 cacheline 数组的起始地址必须是 128 字节的倍数
    alignas(128) char cacheline[128];   // 因为 cacheline 是一个数组对象而不是单个 char 对象，所以整个 struct data 的对齐也需要满足 128 字节的对齐要求，这种对齐要求通常用于缓存对齐，提高了缓存命中率和访问效率
  };  
  print_purple("sizeof(data) = %zu (1 byte + 127 bytes padding + 128-byte array)\n", sizeof(struct data));
  print_purple("alignment of sse_t is %zu\n", alignof(struct sse_t));
  alignas(2048) struct data dsa;        // 此 struct data 的实例会更严格地对齐
  print_purple("alignment of dsa is %zu\n", alignof(dsa));

  /*
  存储期与链接
  存储类说明符 指定对象和函数的存储期（storage duration）和链接（linkage）
  auto - 自动存储期与无链接
  register - 自动存储期与无链接；不能取这种对象的地址
  static - 静态存储期与内部链接（除非在块作用域）
  extern - 静态存储期与外部链接（除非已声明带内部链接）
  _Thread_local(C23前)thread_local(C23起) - 线程存储期(C11起)

  auto
  自动存储期：auto 变量的生命周期从进入其定义所在的代码块开始，到离开该块为止
  无链接：auto 变量只能在其定义所在的代码块中访问，不能在其他代码块中使用
  默认行为：在块作用域（如函数内），未明确指定存储类的局部变量默认为 auto
  auto int x = 10; // x 是一个自动存储期的局部变量
  
  register
  自动存储期：register 变量的生命周期与 auto 相同
  无链接：同样只能在其定义所在的代码块中使用
  优化提示：提示编译器将变量尽量存储在 CPU 寄存器中，以提高访问速度（现代编译器通常会自行进行优化，register 提示不一定有效）
  限制：不能取这种变量的地址，即不能使用 & 操作符
  register int y = 20; // y 是一个建议存储在寄存器中的局部变量

  static
  静态存储期：static 变量在程序的整个生命周期内存在，从程序启动到程序结束
  内部链接：在文件作用域中定义的 static 变量或函数只能在该文件中使用
  块作用域：在块作用域中定义的 static 变量具有静态存储期，但没有链接，仍然只能在定义它的代码块中使用
  static int globalVar = 100; // 文件作用域，只能在这个文件中访问
  void function() {
    static int z = 30;        // 块作用域，z 是一个静态存储期的局部变量，生命周期为整个程序期间
  }

  extern
  静态存储期：extern 变量在程序的整个生命周期内存在，从程序启动到程序结束
  外部链接：extern 变量或函数可以在多个文件间共享使用
  声明与定义：extern 通常用于声明在其他文件中定义的变量    
  int sharedVar = 200;        // 在一个文件中定义
  extern int sharedVar;       // 在另一个文件中声明，告诉编译器 sharedVar 是一个在其他文件中定义的全局变量

  _Thread_local（C23前）或 thread_local（C23起）
  线程存储期：_Thread_local 或 thread_local 变量在每个线程中独立存在，有自己的存储空间
  C11 起：C11 标准引入了这个存储类说明符，用于支持多线程编程。每个线程有独立的变量副本，各个线程的副本在程序运行期间独立存在
  #include <threads.h> // 包含线程相关头文件（C11 标准）
  _Thread_local int threadVar = 300; // C23 前
  thread_local int threadVar = 300;  // C23 起
  void function() {
    threadVar++;
  }

  存储类说明符为变量和函数的生命周期、可见性及访问权限提供了灵活的控制手段，有助于优化内存使用和程序性能

  解释
  1、存储类说明符出现于声明和复合字面量表达式(C23起)中。至多可使用一个说明符，但可以将 _Thread_local(C23 前)thread_local(C23 起) 与 static 或 extern 组合以调整链接(C11 起)。存储类说明符确定其所声明的名称的两个独立属性：存储期与链接
  auto 说明符只允许用于声明于块作用域的对象（除了函数形参列表）。它指示自动存储期与无链接，也是这种声明的默认属性
  register 说明符只允许用于声明于块作用域的对象，包括函数形参列表。它指示自动存储期与无链接（即这种声明的默认属性），但另外提示优化器，若可能则将此对象的值存储于 CPU 寄存器中。无论此优化是否发生，声明为 register 的对象不能用作取址运算符的参数，不能用 alignas(C11 起)，而且 register 数组不能转换为指针
  static 说明符指定静态存储期（除非与 _Thread_local 组合）(C11起)和内部链接（除非用于块作用域）。它能用于在 文件作用域的函数，以及 文件 和 块作用域的变量，但不能用于函数形参列表
  extern 指定静态存储期（除非与 _Thread_local(C23 前)thread_local(C23 起) 组合）(C11 起)和外部链接。它能用于 文件 和 块作用域中 的 函数和对象 声明（除了函数形参列表）。若 extern 出现在已经声明带内部链接的标识符上，则链接仍为内部。否则（若前一声明为外部、无链接或不在作用域内）链接则为外部链接
  
  _Thread_local(C23 前)thread_local(C23 起) 指示线程存储期。它不能用于函数声明。若将它用在对象声明上，则它必须在同一对象的每次声明上都存在。若将它用在块作用域声明上，则必须与 static 或 extern 之一组合以决定链接，线程存储期：指定变量在所属线程的整个生命周期内存在。每个线程都有自己独立的变量副本，互不干扰。这些变量会在线程创建时被初始化，并在线程结束时销毁
  对象声明的一致性：如果 _Thread_local 或 thread_local 用在对象声明上，它必须在该对象的每次声明中都存在。这确保了所有的声明一致指示该对象具有线程存储期
  块作用域：当在块作用域（如函数内部）使用 _Thread_local 或 thread_local 说明符时，必须与 static 或 extern 之一组合使用。这是因为在块作用域中需要明确指定存储期和链接属性

  2、若不提供存储类说明符，则默认为，对所有函数为 extern、对在文件作用域的对象为 extern、对在块作用域的对象为 auto
  
  3、存储类说明符在结构体或联合体中的应用，当用存储类说明符（如 static, extern, _Thread_local, 或 thread_local）来声明结构体或联合体时，这些存储期规范会递归地应用到结构体或联合体的每个成员     

  4、在块作用域（如函数内部），函数声明可以使用 extern 也可以完全不使用存储类说明符，extern 函数声明表示函数可以在其他文件中访问（具有外部链接）
  5、在文件作用域（全局变量和函数的顶层作用域），函数声明可以使用 extern 或 static，static 函数声明表示函数只能在定义它的文件中访问（具有内部链接）

  6、函数形参不能使用除 register 以外的存储类说明符。register 提示编译器尽量将变量存储在寄存器中，以提高访问速度
  7、static 在数组类型的函数形参中的特殊含义 在数组类型的函数形参中，static 有特殊含义。它提示调用函数时，传递的数组指针所指向的数组至少有指定的元素数目，这对于优化可以很有帮助

  存储期
  4、每个对象都有一个名为 存储期 的属性，它限制了对象的生命周期。在 C 语言中有四种存储期
  在 C 语言中，每个对象都有一个称为存储期的属性，它决定了对象何时分配和释放内存。C 中有四种存储期：自动存储期、静态存储期、线程存储期和分配存储期
  
  自动存储期 (Automatic Storage Duration)
  分配和释放：当程序执行进入对象所声明于其中的块（例如函数或代码块）时，自动分配该对象的存储；当退出该块时，无论是通过 goto、return 还是正常到达块的结尾，存储都会被释放
  VLA（变长数组）：从 C99 起，VLA 的存储是在执行声明时分配的，而不是在块入口时分配的，存储在声明离开作用域时解分配而非退出块时解分配
  递归：如果递归地进入同一个块，每次递归调用都会进行新的存储分配
  适用对象：所有函数形参和非 static 块作用域的对象，以及在块作用域中使用的复合字面量（C23前）都拥有自动存储期

  静态存储期 (Static Storage Duration)
  分配和释放：存储期是整个程序的执行过程，只在 main 函数之前初始化一次，存储直到程序结束
  适用对象：所有声明为 static 的对象和所有带内部或外部链接且未声明为 _Thread_local（C23前）或 thread_local（C23起）的对象都拥有静态存储期

  线程存储期 (Thread Storage Duration) (C11起)
  分配和释放：存储期是创建该对象的线程的整个执行过程，在线程启动时初始化存储，在线程结束时释放存储。每个线程都有自己独立的对象副本
  注意事项：如果一个线程访问另一个线程初始化的 thread_local 对象，行为是实现定义的
  适用对象：所有声明为 _Thread_local（C23前）或 thread_local（C23起）的对象拥有线程存储期

  分配存储期 (Allocated Storage Duration)
  分配和释放：通过动态内存分配函数（如 malloc、calloc、realloc）进行分配，并通过 free 函数进行释放。存储期由程序员显式控制
  适用对象：所有通过动态内存分配函数分配的对象都拥有分配存储期

  自动存储期：对象在进入块时分配，退出块时释放。典型对象包括函数形参和非 static 块作用域对象
  静态存储期：对象在程序开始时分配，程序结束时释放。典型对象包括声明为 static 和具有内部或外部链接的全局变量
  线程存储期：对象在线程开始时分配，线程结束时释放。典型对象包括声明为 _Thread_local 或 thread_local 的变量
  分配存储期：对象通过动态内存分配函数分配，并通过 free 释放。典型对象包括通过 malloc、calloc 或 realloc 分配的内存

  链接
  5、在 C 语言中，链接（linkage）指的是变量或函数标识符在不同作用域之间的可见性和可访问性。了解链接的不同类型有助于正确地管理变量和函数的作用范围和生命周期。C 中有三种主要的链接：无链接、内部链接和外部链接
  链接（Linkage）是指标识符（变量或函数）在其他作用域中被引用的能力。如果在多个作用域中声明了具有相同标识符的变量或函数，但并非在所有作用域中都能被引用，那么就会生成该变量的多个实例。以下是被认可的链接类型
  
  无链接 (No Linkage)
  定义：只能从其所在的作用域指代该变量或函数，即该标识符在其所在的块内是唯一的，外部无法访问
  适用对象：所有未声明为 extern 的块作用域变量。所有函数形参。所有并非函数或变量的标识符（例如 typedef、enum 常量等）

  内部链接 (Internal Linkage)
  定义：能从当前翻译单元（即源文件）中的所有作用域指代该函数或变量，但不能被其他翻译单元访问
  适用对象：所有声明为 static 的文件作用域变量和函数。从 C23 起，所有声明为 constexpr 的文件作用域变量

  外部链接 (External Linkage)
  定义：能从整个程序的任何翻译单元（即不同的源文件）指代该变量或函数
  适用对象：所有未声明为 static 或 constexpr 的文件作用域变量。所有未声明为 static 的文件作用域函数。所有块作用域函数声明。所有声明为 extern 的变量或函数，如果在该位置没有某个之前的带有内部链接的声明可见

  试探性定义 (Tentative Definition)
  定义：当声明一个变量而不定义其值时，如果该变量在同一翻译单元中有多个不同的链接声明（例如一个声明为 extern，另一个不带 extern），则行为未定义
  int x;                // 外部链接（试探性定义）
  static int x = 5;     // 内部链接
  // 行为未定义，因为同一标识符 x 具有内部和外部链接

  无链接：变量或函数只能在其定义的块内访问。典型对象包括块作用域的非 extern 变量和函数形参
  内部链接：变量或函数只能在定义它们的翻译单元内访问。典型对象包括 static 文件作用域变量和函数
  外部链接：变量或函数可以在整个程序的任何翻译单元内访问。典型对象包括未声明为 static 或 constexpr 的文件作用域变量和函数、所有声明为 extern 的变量或函数
  理解链接的不同类型有助于正确地管理变量和函数的作用范围，从而避免命名冲突和意外的行为

  链接与库
  6、在 C 语言中，链接（linkage）与库的使用紧密相关，特别是当我们在多个源文件之间共享变量和函数时。理解如何在头文件和源文件中声明和定义带有不同链接类型的对象，对模块化和库的开发至关重要

  具有外部链接的声明通常在头文件中提供，以便所有包含该头文件的翻译单元可以引用在其他地方定义的相同标识符
  在头文件中出现的任何具有内部链接的声明都会在每个包含该文件的翻译单元中产生一个单独且不同的对象

  带外部链接的声明
  定义：带外部链接的声明允许在多个翻译单元（源文件）之间共享同一变量或函数。这种声明通常放在头文件中，以便所有包含该头文件的源文件都能访问这些声明
  头文件作用：头文件（.h 文件）通常包含变量和函数的声明，而不包含它们的定义。这确保了变量和函数的实际定义只出现一次（通常在一个源文件中），但可以在多个源文件中引用
  头文件 example.h：
  // 声明具有外部链接的变量和函数
  extern int globalVar;
  void globalFunction();

  源文件 example.c：
  #include "example.h"
  // 定义具有外部链接的变量和函数
  int globalVar = 42;
  void globalFunction() {
    // 函数实现
  }
  另一个源文件 main.c：
  #include "example.h"
  int main() {
    globalVar = 100;   // 访问具有外部链接的变量
    globalFunction();  // 调用具有外部链接的函数
    return 0;
  }
  在上面的例子中，globalVar 和 globalFunction 在 example.h 中声明，具有外部链接。这使得任何包含 example.h 的源文件都可以访问和使用它们的定义

  带内部链接的声明
  定义：带内部链接的声明使得变量或函数只能在单个翻译单元（源文件）内访问。如果将内部链接的声明放在头文件中，每个包含该头文件的源文件都会创建一个独立的对象或函数副本
  头文件作用：在头文件中声明具有内部链接的变量或函数意味着每个包含该头文件的源文件都会生成独立的实例，这在许多情况下是不期望的
  头文件 example_internal.h：
  // 声明具有内部链接的变量和函数
  static int internalVar;
  static void internalFunction();

  源文件 example1.c：
  #include "example_internal.h"
  static int internalVar = 1;  // 定义内部链接变量
  static void internalFunction() {
    // 函数实现
  }
  void example1Function() {
    internalFunction();  // 访问内部链接的函数
  }
  源文件 example2.c：
  #include "example_internal.h"
  static int internalVar = 2;  // 每个源文件产生一个独立的变量
  static void internalFunction() {
    // 函数实现
  }
  void example2Function() {
    internalFunction();  // 访问内部链接的函数
  }
  在这个例子中，example_internal.h 中的 internalVar 和 internalFunction 都具有内部链接。每个包含该头文件的源文件都会生成自己的 internalVar 和 internalFunction 的副本，因此 example1.c 和 example2.c 中的 internalVar 和 internalFunction 是独立的，不会互相干扰  

  注解
  7、一般通过定义于头文件 <threads.h> 的便利宏 thread_local 使用关键词 _Thread_local (C23前)
  C 语言文法中，typedef 和 constexpr(C23 起) 说明符在形式上列作存储类说明符，但并不指定存储
  auto 说明符还用于类型推断(C23起)
  在文件作用域的 const 且非 extern 的名称在 C 中拥有外部链接（同所有文件作用域的默认情况），但在 C++ 中拥有内部链接

  8、外部及试探性定义
  在 C 语言中，程序的结构由各种声明和定义组成。这些声明和定义可以分为两类：外部声明和内部声明。这里我们重点讨论外部声明
  外部声明的概念 外部声明指的是出现在函数体（即 {} 括起来的代码块）之外的声明。这些声明通常用于定义或声明具有外部链接的变量和函数，也就是说，这些变量和函数在整个程序的各个翻译单元（即经过预处理器处理后包含所有 #include 的源文件）中都是可见的
  外部声明的特点 位置：外部声明位于任何函数之外，可以在文件的顶部或其他函数之间、作用域：外部声明的作用域通常是整个翻译单元，甚至可以在其他翻译单元中使用（通过 extern 关键字）
  链接类型：
  外部链接：默认情况下，函数和变量具有外部链接，这意味着它们可以在其他翻译单元中被访问
  内部链接：使用 static 关键字声明的变量和函数具有内部链接，它们仅在当前翻译单元中可见

  在一个翻译单元（即经过预处理器处理后包含所有 #include 的源文件）的顶层，每个 C 程序都是一系列声明的序列，这些声明用外部链接或内部链接声明函数和对象。这些声明被称为外部声明，因为它们出现在任何函数之外
  extern int n;                     // 外部声明拥有外部链接
  int b = 1;                        // 外部定义拥有外部链接
  static const char *c = "abc";     // 外部定义拥有内部链接
  int f(void) {                     // 外部定义拥有外部链接
    int a = 1;                      // 非外部
    return b; 
  }
  static void x(void) {             // 外部定义拥有内部链接
  }
  
  用外部声明声明的对象具有静态存储期，因此不能使用 “自动存储类说明符”（auto）或 “寄存器存储类说明符”（register），但自 C23 起 “自动存储类说明符” 可用于类型推断；自 C23 起 “自动存储类说明符” 可用于类型推断。由外部声明引入的标识符具有文件作用域  
  
  9、试探性定义
  在 C 语言中，"试探性定义"是一个重要的概念，特别是当涉及到变量的声明和定义时。这个概念有助于理解在同一个翻译单元（翻译单元是指经过预处理后包含所有 #include 的源文件）中的变量是如何被处理的 
  试探性定义的概念 试探性定义（tentative definition）是指没有初始化器的外部变量声明，且要么没有存储类说明符，要么带有 static 说明符
  特点：
  没有初始化器：即声明时没有赋初值
  可以有 static 说明符：如果使用 static 关键字，变量具有内部链接（仅在当前翻译单元中可见）
  可能表现为定义，也可能表现为声明：这取决于在同一翻译单元中是否存在实际的（完全的）定义

  试探性定义的处理
  如果在同一翻译单元中存在实际的定义（即带有初始化器的定义），试探性定义就仅表现为声明
  如果没有找到实际的定义，则试探性定义最终会被视为定义，并且变量会被隐式初始化为零

  试探性定义是可能或可能不表现为定义的声明
  若在同一翻译单元的前方或后方能找到实际的外部定义，则试探性定义仅表现为声明
  若在同一翻译单元中无定义，则试探性定义表现为将对象空初始化的实际定义
  不同于 extern 声明（如果前一声明已建立标识符链接， extern 声明不更改链接），试探性定义可以与同一标识符另一声明的链接不一致。若同一标识符的二个声明均在作用域内且拥有不同链接，则行为未定义
  拥有内部链接的试探性定义必须拥有完整类型

  int i1 = 1;        // 定义，外部链接
  int i1;            // 试探性定义，表现为声明，因为 i1 已定义，若在同一翻译单元的前方或后方能找到实际的外部定义，则试探性定义仅表现为声明
  extern int i1;     // 声明，引用前面的定义
  
  extern int i2 = 3; // 定义，外部链接
  int i2;            // 试探性定义，表现为声明，因为 i2 已定义，若在同一翻译单元的前方或后方能找到实际的外部定义，则试探性定义仅表现为声明
  extern int i2;     // 声明，引用到前面的外部链接定义

  int i3;            // 试探性定义，外部链接，若在同一翻译单元中无定义，则试探性定义表现为将对象空初始化的实际定义
  int i3;            // 试探性定义，外部链接
  extern int i3;     // 声明，外部链接 // 在此翻译单元中，如同以“ int i3 = 0; ”方式定义 i3

  static int i4 = 2; // 定义，内部链接
  int i4;            // 未定义行为：链接与前一行不一致，若同一标识符的二个声明均在作用域内且拥有不同链接，则行为未定义
  extern int i4;     // 声明，引用到内部链接定义
 
  static int i5;     // 试探性定义，内部链接
  int i5;            // 未定义行为：链接与前一行不一致，若同一标识符的二个声明均在作用域内且拥有不同链接，则行为未定义
  extern int i5;     // 引用到前者，其链接为内部

  static int i[];    // 错误：试探性 static 声明中的不完整类型，拥有内部链接的试探性定义必须拥有完整类型
  int i[];           // OK：等价于 int i[1] = {0}; 除非在此文件之后重声明

  10、唯一定义规则
  每个翻译单元可以具有零个或一个具有内部链接（static全局）的每个标识符的外部定义
  这意味着在一个翻译单元中，每个静态全局变量或函数最多只能有一个定义。例如，不能在同一个文件中多次定义相同名称的 static 变量或函数
  
  如果具有内部链接的标识符用于非 VLA、（自C99起）、non-VLA、sizeof、_Alignof（自C11起）、_Alignof或 typeof（自C23起）或 typeof 以外的任何表达式中，则该标识符在翻译单元中必须有且只有一个外部定义，
  这就是说，如果你在使用 sizeof、_Alignof 或 typeof 时，使用了一个具有内部链接的标识符，这个标识符在该翻译单元中必须有且有一个明确的定义

  整个程序可以有零个或一个具有外部链接的每个标识符的外部定义
  对于具有外部链接的标识符（即非 static 的全局变量和函数），在整个程序（所有翻译单元的总和）中，每个标识符最多只能有一个定义

  如果具有外部链接的标识符用于非 VLA、（自C99起）、non-VLA、sizeof、_Alignof（自 C11 起）、_Alignof或 typeof（自 C23 起）或 typeof 以外的任何表达式中，则该标识符必须有一个且只有一个外部定义在整个程序中的某个位置
  这意味着在整个程序中，如果使用 sizeof、_Alignof 或 typeof 表达式涉及到一个外部链接的标识符，那么这个标识符在程序中必须且只能有一个定义
  // File1.c
  int globalVariable;                       // 外部链接标识符
  static int staticVariable;                // 内部链接标识符
  // File2.c
  extern int globalVariable;                // 外部链接标识符声明
  static int anotherStaticVariable = 30;    // 内部链接标识符
  // 外部链接标识符的定义 globalVariable 在 File1.c 中定义并初始化。在 File2.c 中，通过 extern 声明引用这个全局变量。全局变量在整个程序中只能有一个定义
  // 内部链接标识符的定义 在 File1.c 中，staticVariable 是一个内部链接标识符，只能在 File1.c 中使用，在 File2.c 中，anotherStaticVariable 是另一个内部链接标识符
  
  11、注解
  不同翻译单元中的内联定义不受一个定义规则的约束。有关内联函数定义的详细信息，请参阅 inline 
  内联函数（inline functions）是一种提示编译器在调用函数时将函数代码直接替换到调用点，以避免函数调用的开销。与普通函数不同，内联函数的定义在不同的翻译单元中并不受"一个定义"规则的约束。这意味着你可以在多个翻译单元中定义相同的内联函数，而不会导致重复定义错误
  // File1.c
  inline void myFunction() {
    // Function implementation
  }
  // File2.c
  inline void myFunction() {
    // Same function implementation
  }

  关键词 extern 与文件作用域中声明在一起的含义，见存储期及链接
  extern 关键字用于声明一个变量或函数是在其他地方定义的，并且可以在当前文件中使用。它通常用于在头文件中声明全局变量或函数，使得它们能在多个翻译单元中共享
  // header.h
  extern int sharedVariable;
  // File1.c
  #include "header.h"
  int sharedVariable = 10; // 定义变量
  // File2.c
  #include "header.h"
  void useSharedVariable() {
    sharedVariable = 20; // 使用变量
  }  

  有关声明和定义之间的区别，请参阅定义
  声明（declaration）告诉编译器变量或函数的名称和类型，但不分配存储空间或提供实现。例如，extern 声明和函数原型都是声明
  定义（definition）不仅告诉编译器变量或函数的名称和类型，还分配存储空间或提供实现
  extern int globalVariable;      // 声明
  int globalVariable = 10;      // 定义

  发明试探性定义是为了标准化各种 C89 前的前置声明具有内部链接标识符的手段
  试探性定义（tentative definition）概念的引入是为了标准化在 C89 之前不同编译器处理具有内部链接标识符的前置声明的方式。试探性定义允许在没有初始化器的情况下声明变量，并在同一翻译单元中只有一个实际定义
  // File.c
  static int staticVariable;      // 试探性定义
  // ...其他代码...
  static int staticVariable = 10; // 实际定义
  在上面的例子中，static int staticVariable; 是一个试探性定义，而 static int staticVariable = 10; 是实际定义。试探性定义确保在同一翻译单元中，对于具有内部链接的标识符，只有一个最终定义
  */  
  auto int xvar = 10;                   // 1、x 是一个自动存储期的局部变量
  register int yvar = 20;               // y 是一个建议存储在寄存器中的局部变量
  static int zvar = 30;                 // z 是一个静态存储期的局部变量，生命周期为整个程序期间
  extern int sharedVar;                 // 告诉编译器 sharedVar 是一个在其他文件中定义的全局变量
  // _Thread_local int threadVar1 = 300; // C23 前
  // thread_local int threadVar2 = 300;  // C23 起
  static int xst = 10;                  // 内部链接
  extern int xet;                       // 仍为内部链接，因为前一个声明是内部链接
  // extern int zet = 20;               // 外部链接和定义
  extern int zet;                       // 外部链接声明
  extern void fooet();                  // 函数声明
  static _Thread_local int threadVar1;  // C11，static 和 _Thread_local/thread_local：当 static 和 _Thread_local（C23 前）或 thread_local（C23 起）组合使用时，变量具有线程存储期而不是静态存储期。每个线程有独立的存储空间
  static thread_local int threadVar2;   // C23
  extern _Thread_local int threadVare1; // C11，extern 和 _Thread_local/thread_local：当 extern 和 _Thread_local（C23 前）或 thread_local（C23 起）组合使用时，变量仍然具有线程存储期。extern 的作用是在其他文件中声明该线程局部变量
  extern thread_local int threadVare2;  // C23
  struct Examplese { int a; float b; }; // 3、seex1 是一个静态存储期的结构体变量，其成员 a 和 b 也具有静态存储期。同样，如果 seex2 在其他文件中定义，其成员 a 和 b 也将具有外部链接的存储期
  static struct Examplese seex1 = {1, 2.0f};  
  extern struct Examplese seex2;
  // void function() {
  //   int a;                           // 4、自动存储期
  //   {
  //     int b;                         // 自动存储期
  //   }                                // 退出块，b 的存储被释放
  // }
  // static int x;                      // 静态存储期
  // void function() {
  //   static int y;                    // 静态存储期
  // }
  // _Thread_local int threadVar;       // C11 标准，线程存储期
  // thread_local int anotherThreadVar; // C23 标准，线程存储期
  // int *ptr = (int*)malloc(sizeof(int)); // 分配存储期
  // if (ptr != NULL) {
  //   *ptr = 42;  
  //   free(ptr);                          // 释放存储
  // }
  int localVar;                         // 5、无链接
  void anotherFunction(int param);      // param 无链接
  static int fileScopeVar;              // 内部链接
  // static void fileScopeFunction() {  // 内部链接
  //   // code
  // }
  extern int externalVar;               // 外部链接
  // 库接口，头文件“flib.h”：      // 7、链接与库
  // #ifndef FLIB_H
  // #define FLIB_H
  // void f(void);              // 带外部链接的函数声明
  // extern int state;          // 带外部链接的变量声明
  // static const int size = 5; // 带内部链接的只读对象定义
  // enum { MAX = 10 };         // 常量定义
  // inline int sum (int a, int b) { return a + b; } // inline 函数定义
  // #endif // FLIB_H
  //
  // 库实现，源文件“flib.c”：
  // #include "flib.h"
  // static void local_f(int s) {} // 带内部链接的定义（只用于此文件）
  // static int local_state;       // 带内部链接的定义（只用于此文件） 
  // int state;                       // 带外部链接的定义（main.c 使用）
  // void f(void) { local_f(state); } // 带外部链接的定义（main.c 使用）  
  // 
  // 应用代码，源文件“main.c”：
  // #include "flib.h"
  // int main(void)
  // {
  //   int x[MAX] = {size}; // 使用常量和只读变量
  //   state = 7;           // 修改 flib.c 中的 state
  //   f();                 // 调用 flib.c 中的 f()
  // }
  int As = 1;                         // 自动存储期，隐藏全局 A 
  int* ptr_1 = malloc(sizeof(int));   // 开始分配存储期
  print_purple("address of int in allocated memory = %p\n", (void*)ptr_1);
  free(ptr_1);                        // 停止分配存储期

  /*
  typedef
  1、typedef 声明 提供了一种将标识符声明为类型别名的方法，用于替换可能复杂的 类型名称
  关键字 typedef 用于声明中，处于存储类说明符的语法位置，但其不影响存储或链接
  
  解释
  2、如果一个声明使用 typedef 作为存储类说明符，那么其中的每个声明符都将一个标识符定义为指定类型的别名。由于在一个声明中只允许有一个存储类说明符，所以 typedef 声明不能是静态的或外部的
  如果一个声明使用 typedef 作为存储类说明符，那么其中的每个声明符都将一个标识符定义为指定类型的别名，在一个声明中只允许有一个存储类说明符，所以 typedef 声明不能是 static 的或 extern 的
  typedef int MyInt;        // 正确
  static typedef int MyInt; // 错误
  extern typedef int MyInt; // 错误

  typedef 声明不会引入一个独特的类型，它只是为现有类型建立一个同义词，因此，typedef 名称与它们所别名的类型是兼容的。typedef 名称与普通标识符（如枚举、变量和函数）共享命名空间
  typedef 声明不会引入一个独特的类型，它只是为现有类型建立一个同义词。因此，typedef 名称与它们所别名的类型是兼容的
  typedef int Integer;
  Integer x = 5;
  int y = 10;
  x = y;                          // 合法，因为 Integer 与 int 是同一种类型
  typedef 名称与普通标识符（如枚举、变量和函数）共享命名空间。这意味着你不能在同一命名空间内定义两个相同名称的标识符
  typedef int MyType;
  int MyType;                     // 错误，与 typedef 名称冲突
  
  对 VLA 的 typedef 只能出现在块作用域内。与数组自身的声明不同，数组长度会在每次控制流经过 typedef 声明时求值
  void copyt(int n)
  {
    typedef int B[n];             // B 是 VLA，其长度为 n，现在求值
    n += 1;
    B a;                          // a 的长度是 +=1 前的 n
    int b[n];                     // a 和 b 长度不同
    for (int i = 1; i < n; i++)
      a[i-1] = b[i];
  }

  注解
  3、typedef 名称可能是一个不完整类型，它可以像往常一样被补全
  typedef 声明通常用于将来自标签命名空间的名称注入到普通命名空间中，他们甚至可以完全避免使用标签名称空间
  typedef 名亦常用来简化复杂声明的语法
  库常常会将依赖系统或依赖配置的类型暴露成 typedef 名，以对用户或其他库组件提供统一接口
  #if defined(_LP64)
  typedef int  wchar_t;
  #else
  typedef long wchar_t;
  #endif
  */
  typedef int int_t;                          // 1、声明 int_t 为类型 int 之别名
  typedef char char_t, *char_p, (*fp1)(void); // 声明 char_t 为类型 char 之别名，char_p 为 char* 之别名，fp1 为 char(*)(void) 之别名
  typedef int MyInt;                          // 2、正确
  // static typedef int MyInt1;               // 错误
  // extern typedef int MyInt2;               // 错误
  // typedef int MyType;
  // int MyType;                              // 错误，与 typedef 名称冲突
  typedef int Integer;
  Integer xx = 5;
  int yy = 10;
  xx = yy;                                    // 合法，因为 Integer 与 int 是同一种类型
  typedef int At[];                           // 3、A 是 int[]
  At at = {1, 2}, bt = {3,4,5};               // a 的类型是 int[2]，b 的类型是 int[3]
  typedef struct tnode tnode;                 // 通常命名空间的 tnode 为标签命名空间的 tnode 之别名
  struct tnode {
    int count;
    tnode *left, *right;                      // 同 struct tnode *left, *right;
  };                                          // 现在 tnode 也是完整类型
  tnode sn, *sp;                              // 同 struct tnode s, *sp;
  typedef struct { double hi, lo; } range;    // 它们可以完全避免使用标签命名空间
  range z, *zp;
  int (*(*callbacks[5])(void))[3];            // 一个包含5个元素的数组，每个数组的元素函数指针 是一个接收void参数，返回值是一个指向3个int元素数组的指针
  typedef int arr_t[3];                       // arr_t 是 3 个 int 的数组
  typedef arr_t* (*fp5)(void);                // 指针指向的函数返回 arr_t*
  fp5 callbackse[5];

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

  /*
  静态断言(C11)
  静态断言（static assert）是 C11 标准引入的一项特性，允许在编译时进行条件检查。如果条件不满足，编译器会生成一条错误消息，从而防止代码继续编译。C23 标准对这一特性进行了进一步的改进和明确
  1、语法
  _Static_assert ( 表达式 , 消息 )	 (C11起)(C23弃用)
  static_assert ( 表达式 , 消息 )		 (C23起)
  _Static_assert ( 表达式 )		      (C11起)(C23弃用)
  static_assert ( 表达式 )		      (C23起)
  表达式 -	任何整数常量表达式，一个常量表达式，该表达式在编译时求值
  消息 -	任何字符串字面量，当表达式的值为零（false）时，编译器输出的错误消息
  此关键词 _Static_assert 亦可用作便利宏 static_assert 于头文件 <assert.h> 中提供(C23前)
  static_assert 和 _Static_assert 都具有相同的效果，_Static_assert 是为了保持兼容性而保留的已弃用拼写，实现也可以将 static_assert 或 _Static_assert 定义为预定义宏，并且自C23起 assert.h 不再提供 static_assert

  2、解释
  常量表达式在编译时进行计算，并与零进行比较。如果它与零相等，则会发生编译时错误，并且编译器必须将消息作为错误消息的一部分显示出来（除了不在基本字符集中的字符不需要显示）（直到C23）；自C23起，应该将消息（如果提供）作为错误消息的一部分显示出来。否则，如果表达式不等于零，则什么也不会发生；不会生成任何代码
  编译器在编译时会计算 表达式 的值：
  如果 表达式 的值为非零（true），则编译成功，什么也不会发生
  如果 表达式 的值为零（false），则编译失败，并显示 消息 作为错误信息的一部分

  3、在 C23 标准中，对静态断言的错误消息显示进行了改进和明确
  在 C23 之前，如果 表达式 为零，编译器必须将 消息 作为错误消息的一部分显示（但不要求显示基本字符集以外的字符）
  从 C23 开始，如果提供了 消息，编译器应该将它作为错误消息的一部分显示

  4、静态断言通常用于以下场景：
  编译时常量验证：确保某些常量符合预期条件，这在配置和定义常量时非常有用，以确保它们在编译时已经满足特定的约束
  #define MAX_SIZE 1024
  #define MIN_SIZE 512
  _Static_assert(MAX_SIZE >= MIN_SIZE, "MAX_SIZE must be greater than or equal to MIN_SIZE");

  类型大小验证：验证类型的大小是否符合特定要求，这在涉及到数据结构对齐或特定硬件要求时非常有用
  typedef struct {
    uint8_t a;
    uint32_t b;
  } MyStruct;
  _Static_assert(sizeof(MyStruct) == 8, "Size of MyStruct must be 8 bytes");

  配置参数检查：确保配置参数在预期范围内，这在编写可配置软件时非常有用，以确保配置参数在合理的范围内
  #define MAX_CONNECTIONS 100
  _Static_assert(MAX_CONNECTIONS > 0 && MAX_CONNECTIONS <= 1000, "MAX_CONNECTIONS must be between 1 and 1000");

  接口一致性检查：确保接口符合预期设计，确保接口符合预期设计。这在编写库或模块时非常有用，以确保模块接口的一致性和正确性
  typedef void (*CallbackFunction)(int);
  _Static_assert(sizeof(CallbackFunction) == sizeof(void (*)(int)), "CallbackFunction type mismatch");

  静态断言是 C 语言中的一个强大工具，用于在编译时进行条件检查，确保代码符合特定的约束条件，从而避免潜在的运行时错误。C23 标准进一步改进了静态断言的错误消息显示，使其更加明确和易于理解。在现代 C 编程中，合理使用静态断言可以显著提高代码的可靠性和可维护性
  */
  static_assert((2 + 2) % 3 == 1, "Whoa dude, you knew!");          // 1、测试数学是否正常工作，C23
  _Static_assert(2 + 2 * 2 == 6, "Lucky guess!?");                  // C23 之前的替代方案
  // static_assert(sizeof(int) < sizeof(char), "Unmet condition!"); // 2、这会在编译时产生错误
  static_assert(sizeof(int) > sizeof(char), "Unmet condition!");    // 正常
  // constexpr int _42 = 2 * 3 * 2 * 3 + 2 * 3;                     // C23 支持
  // static_assert(_42 == 42, "");                                  // 常量表达式，可以省略消息字符串
  // const int _13 = 13;
  // static_assert(_13 == 13);                                      // 编译时错误- 并非整数常量表达式
  #define MIN_BUFFER_SIZE 256
  _Static_assert(MIN_BUFFER_SIZE >= 128, "Buffer size is too small");  

  /*
  属性说明符序列(C23起)
  引入了针对类型、对象、表达式等的实现定义属性

  1、语法 [[attr]] [[attr1, attr2, attr3(args)]] [[属性前缀::attr(arg)]]
  [[gnu::hot]] [[gnu::const]] [[nodiscard]]
  int f(void);                                    // 以三个属性声明 f
  
  形式上，语法是 [[ 属性列表 ]]	(C23起)
  [[gnu::const, gnu::hot, nodiscard]]
  int f(void);                                    // 同上，但使用了包含三个属性的单个属性说明符
  
  其中，属性列表是由零个或多个属性标记组成的逗号分隔序列
  标准属性	                           (1)	
  属性前缀 :: 标识符	                  (2)	
  标准属性 ( 实参列表 (可选) )	         (3)	
  属性前缀 :: 标识符 ( 实参列表 (可选) )	(4)	
  其中，属性前缀（attribute-prefix）是一个标识符，参数列表（argument-list）是一个由括号、方括号和花括号平衡的令牌序列（balanced-token-sequence）
  1) 标准属性，例如 [[fallthrough]]
  2) 有命名空间的属性，例如 [[gnu::unused]]
  3) 有实参的标准属性，例如 [[deprecated("reason")]]
  4) 有命名空间和实参列表的属性，例如 [[gnu::nonnull(1)]]

  2、解释
  属性为实现定义的语言扩展（例如 GNU 和 IBM 的语言扩展__attribute__((...))、Microsoft 扩展__declspec()等）提供了统一的标准语法
  
  __attribute__是 GNU C/C++ 编译器的一个特性，它主要用于在声明函数、变量或类型时指定特殊的属性。这些属性可以影响编译器的行为，比如函数调用约定、变量的对齐方式等诸多方面
  函数属性
  noreturn属性：用于告知编译器被修饰的函数不会返回。例如，一个函数会调用exit()系统调用而终止程序，就可以使用这个属性
  constructor和destructor属性：constructor属性的函数会在main()函数之前自动执行，destructor属性的函数会在main()函数结束之后自动执行。这在进行一些初始化和清理工作时非常有用
  变量属性
  aligned属性：用于指定变量的对齐方式。例如，在某些硬件平台上，为了提高内存访问效率，需要对数据进行特定字节对齐
  类型属性
  packed属性：用于告诉编译器取消结构或联合的默认对齐，按照紧凑的方式进行存储  

  在 C 语言的发展过程中，不同的编译器厂商（如 GNU、IBM、Microsoft 等）为了满足一些特定的需求（如优化、与操作系统或硬件的特定交互等），开发了各自的语言扩展。这些扩展在语法和功能上都有所不同，这就导致了代码的可移植性问题。C23 标准尝试解决这个问题，为这些实现定义的语言扩展提供统一的标准语法
  C23 标准的作用 
  提高可移植性：之前，使用了特定编译器扩展（如__attribute__((...))或__declspec()）的代码在不同编译器之间移植时，往往需要大量的修改。C23 提供统一语法后，开发人员可以在一定程度上使用标准的方式来表示这些扩展，使得代码更容易在不同的 C 编译器环境下进行移植
  统一编译器行为：对于编译器开发者来说，C23 标准提供了一个指导框架。编译器厂商可以根据这个标准来调整自己的语言扩展实现，使得它们在遵循标准的同时，还能保留自己的特色功能。例如，当涉及到函数属性的指定时，编译器可以按照 C23 标准的统一语法来解析和处理这些属性，而不是各自为政

  旧的扩展方式
  在 GNU 中使用__attribute__((...))来指定函数属性，如noreturn
  在 Microsoft 中使用__declspec()来指定类似的属性（假设存在这样的功能等价情况）可能是完全不同的语法
  
  C23 标准下的可能情况（假设）
  C23 可能会定义一种统一的语法，如[[noreturn]]来表示函数不会返回。那么代码可能会变成这样
  [[noreturn]] void my_exit_function()

  不管是在 GNU 还是 Microsoft（假设它们都遵循 C23 的这个标准语法）编译器环境下，代码的表示方式更加统一，便于开发人员理解和使用

  3、属性可用在 C 程序中的几乎所有位置，而且可应用于几乎所有事物：类型、变量、函数、名字、代码块、整个翻译单元，不过每个特定的属性都仅在实现所容许之处有效：[[expect_true]] 可能是只能与 if，而非与类声明一同使用的属性，[[omp::parallel()]] 可能是应用到代码块或 for 循环，而非到类型 int 等的属性。（请注意这两个属性只是虚构的例子，有关标准与一些非标准属性，见下文）
  
  4、在声明中，属性既可以出现在整个声明之前，也可以紧跟在被声明的实体名称之后，在这种情况下它们会被合并。在大多数其他情况下，属性适用于紧接在前的实体
  C23 标准引入了属性（attributes）的概念，提供了一种标准化的方法来向编译器传达特定的信息或指示。这些属性可以应用于各种编程元素，如变量、函数、类型等，以控制编译器行为或优化代码
  属性的语法使用 [[...]] 双方括号的形式包围属性列表。属性可以出现在声明的不同位置，具体如下
  整个声明之前：属性适用于整个声明 属性适用于整个声明中的所有实体
  实体名称之后：属性适用于紧接在前的实体名称 属性仅适用于该实体
  [[attribute1, attribute2]]
  int variable [[attribute3]];    // 属性1、属性2应用于整个声明，属性3应用于variable
  [[attribute4]]
  int function() [[attribute5]];  // 属性4应用于整个声明，属性5应用于返回类型
  
  属性应用于整个声明
  [[nodiscard]]                   // 属性应用于整个声明，在这个例子中，[[nodiscard]] 属性指示编译器，返回值不应被忽略。如果调用者忽略了返回值，编译器可能会生成警告
  int compute_value() {
    return 42;
  }
  int main() {
    compute_value();              // 编译器可能会警告未使用返回值
    return 0;
  }
  属性应用于特定实体
  int variable [[deprecated]];    // 属性应用于变量，在这个例子中，[[deprecated]] 属性应用于 variable 变量，指示编译器该变量已过时。如果使用了该变量，编译器可能会生成警告
  int main() {
    variable = 5;                 // 编译器可能会生成警告，因为variable已过时
    return 0;
  }
  多个属性的示例
  [[nodiscard]]
  int compute_value() [[deprecated]];  // 属性1应用于整个声明，属性2应用于返回类型，在这个例子中，[[nodiscard]] 属性应用于整个 compute_value 函数声明，[[deprecated]] 属性应用于返回类型。如果调用了该函数，编译器可能会生成警告
  int main() {
    int value = compute_value();       // 编译器可能会生成警告，因为compute_value已过时
    return 0;
  }  

  5、在 C23 中，引入了属性（attributes）这一概念，以标准化的方法向编译器传达特定的信息或指示。属性的语法使用双左方括号 [[]] 来包围属性列表。这种语法结构有一些特定的规则和限制
  两个连续的左方括号记号 [[ 只能在以下两种情况下出现 
  引入属性说明符：用于声明属性
  在属性实参之内：用于嵌套属性
  
  引入属性说明符 这是指属性的声明位置，属性说明符使用 [[ 开头和 ]] 结尾
  [[nodiscard]]
  int compute_value() {
    return 42;
  }
  在属性实参之内，属性可以包含参数，这些参数本身可以是其他属性。这时嵌套的属性也需要使用 [[ 和 ]] 来表示
  [[deprecated("Use new_function instead"), maybe_unused]]
  void old_function() { }
  双左方括号 [[ 在 C23 中有其特定的使用场景和规则，只能用于引入属性说明符或在属性实参内使用

  6、除了下面列出的标准属性之外，实现可能支持具有实现定义行为的任意非标准属性。实现未知的所有属性都会被忽略，而不会导致错误
  在 C23 标准中，属性（attributes）为编译器提供了更多的信息，以便进行优化或传达特定的指令。虽然 C23 标准定义了一些标准属性，但实现（编译器）也可以支持自定义的非标准属性。此外，任何编译器未知的属性将被忽略，不会导致编译错误
  
  标准属性：这是 C23 标准中预定义的属性，所有符合 C23 标准的编译器都应该支持这些属性。例如，[[nodiscard]] 和 [[deprecated]] 是标准属性
  非标准属性：这些是由编译器实现定义的属性，不在 C23 标准中预定义。不同的编译器可能会支持不同的非标准属性，用来提供特定编译器的优化或功能。例如，特定编译器可能会支持 [[gnu::always_inline]] 这样的非标准属性
  未知属性的处理：对于编译器未知的属性，编译器将忽略它们，并且不会产生编译错误。这使得代码在不同编译器之间具有更好的兼容性

  [[nodiscard]] 和 [[deprecated]] 是标准属性，所有符合 C23 标准的编译器都应该支持它们
  [[gnu::always_inline]] 是一个非标准属性，特定于 GCC 编译器。这种属性可能提供特定编译器的优化功能
  如果编译器不认识 [[unknown_attribute]]，它会忽略这个属性，并且不会产生编译错误

  7、每个标准属性都预留给标准化使用。也就是说，每个非标准属性都由实现提供的属性前缀进行前缀修饰，例如[[gnu::may_alias]]和[[clang::no_sanitize]]
  非标准属性是由编译器实现提供的额外属性，这些属性需要冠以前缀以避免与标准属性冲突
  
  避免名称冲突：属性前缀确保非标准属性的名称不会与标准属性发生冲突。这意味着即使未来标准定义了新的属性，现有代码使用的非标准属性也不会受到影响
  明确属性来源：属性前缀清楚地表明了属性是由哪个编译器或实现提供的。这有助于开发者了解和选择特定编译器的优化和特性
  提高代码可移植性：使用属性前缀可以使代码更具可移植性。即使某些属性是特定编译器提供的，其他编译器可以忽略这些前缀属性，而不会引发错误

  在 C23 标准中，标准属性是保留的，所有符合标准的编译器都应该支持这些属性。为了避免与标准属性冲突，非标准属性必须使用属性前缀。例如，GCC 编译器使用 [[gnu::]] 前缀，Clang 编译器使用 [[clang::]] 前缀。这种设计确保了命名的一致性和代码的可移植性，提高了代码在不同编译环境中的兼容性和灵活性

  8、标准属性
  标准属性的拼写
  C 标准仅定义下列属性。每个名字形如 attr 的标准属性亦能拼写成 __attr__ 而其含义不变
  每个标准属性除了标准的 [[attr]] 形式，也可以拼写成 __attr__ 形式。例如，[[deprecated]] 可以写成 __deprecated__，这些不同的拼写方式在意义上是相同的。这种设计允许编写在某些老旧环境或特殊情况下依旧适用的代码
  __deprecated__
  void old_function_deprecated();
  __deprecated__("Use new_function instead")
  void another_old_function_deprecated();

  标准属性列表及其解释

  [[deprecated]] 和 [[deprecated("原因")]]
  说明：指示声明有此属性的名字或实体被弃用，即允许但因故不鼓励使用，即指示某个名字或实体已经过时，不建议使用。可以选择性地提供一个字符串参数，说明不建议使用的原因
  语法：[[ deprecated ]]、[[ __deprecated__ ]]、[[ deprecated ( 字符串字面量 ) ]]、[[ __deprecated__ ( 字符串字面量 ) ]]，字符串字面量 能用于解释弃用的理由并/或提议代替用实体的文本
  解释：指示允许使用以此属性声明的名字或实体，但因某种原因不鼓励使用。编译器通常会对这些使用情况发出警告。若指定 字符串字面量，则通常将它包含于警告中
  下列名字或实体的声明中允许使用这个属性：
  - typedef 名：[[deprecated]] typedef S* PS;
  - 对象：[[deprecated]] int x;
  - 结构体/联合体：struct [[deprecated]] S;
  - 结构体/联合体成员：union U { [[deprecated]] int n; };
  - 枚举：enum [[deprecated]] E {};
  - 枚举项：enum { A [[deprecated]], B [[deprecated]] = 42 };
  - 函数：[[deprecated]] void f(void); 
  注解：声明时未标记为弃用的名字或实体，可以在后续声明中添加 [[deprecated]] 属性，从而将其标记为弃用
  注解：声明为弃用的名字不能通过不带此属性的重声明变为未弃用，一旦某个名字或实体被声明为弃用，就不能通过后续的声明移除 [[deprecated]] 属性。即不能将一个已标记为弃用的名字或实体重声明为未弃用 
  举例：
  [[deprecated]]
  void old_function();
  [[deprecated("Use new_function instead")]]
  void another_old_function(); 

  [[fallthrough]] 
  说明：表明从前一个 case 标签的贯穿是有意的，并且不应该被对贯穿发出警告的编译器诊断，即用在 switch 语句中，指示从一个 case 标号到下一个 case 标号的落空是有意的，不应被编译器诊断为警告
  语法：[[ fallthrough ]]、[[ __fallthrough__ ]]，[[fallthrough]] 属性只能用于 switch 语句中的 case 或 default 分支，且必须作为独立的一行声明，紧跟在需要“直落”的 case 分支的最后一条语句之后
  解释：[[fallthrough]] 是 C23 标准引入的一种属性，用于明确指示 switch 语句中的某个 case 分支有意地“直落”到下一个 case 分支。这在避免编译器发出未明确意图的警告时非常有用，在很多编程语言中，switch 语句的 case 分支如果没有使用 break、return 等语句明确结束，会“直落”到下一个 case 分支。这种行为有时是有意的，但如果没有明确指示，编译器通常会发出警告，提示开发者可能是无意的遗漏。通过使用 [[fallthrough]] 属性，可以明确告诉编译器这是有意的行为，并避免警告
  举例：
  switch (value) {
    case 1:
      printf("Case 1\n");
      [[fallthrough]];
    case 2:
      printf("Case 2\n");
      [[fallthrough]];
    case 3:
      printf("Case 3\n");
      break;
    default:
      printf("Default case\n");
      break;
  }
  在这个例子中，对于输入 1，程序会连续打印 "Case 1", "Case 2" 和 "Case 3"，因为每个 case 分支都使用了 [[fallthrough]] 属性。对于输入 2，程序打印 "Case 2" 和 "Case 3"；对于输入 3，只打印 "Case 3"；对于输入 4，则进入默认分支，打印 "Default case"
  switch (value) {
    case 1:
      // some code
      [[fallthrough]];
    case 2:
      // falling through intentionally
      break;
  }

  [[nodiscard]] 和 [[nodiscard("原因")]]
  说明：[[nodiscard]] 是 C23 标准引入的一种属性，用于提示编译器某个函数的返回值不应被忽略。这有助于捕捉潜在的逻辑错误，因为忽略重要的返回值可能会导致未预料的行为或错误，建议编译器在函数的返回值被忽略时发出警告。可以选择性地提供一个字符串参数，说明忽略返回值的原因
  语法：基本形式 [[nodiscard]] 和 [[__nodiscard__]]，带字符串字面量的形式（用于提供警告信息）[[nodiscard("reason")]] 和 [[__nodiscard__("reason")]] 其中 reason 是一个字符串，用于解释为什么不应舍弃返回值
  工作原理：函数声明：当一个函数被声明为 [[nodiscard]] 时，调用该函数时返回值不应被忽略，编译器警告：如果调用时忽略了返回值，编译器将发出警告，提醒开发者需处理该返回值，自定义警告信息：通过提供字符串字面量，可以自定义警告信息，解释为什么返回值不应被忽略
  解释：出现于函数声明、枚举声明或结构体/联合体声明
  - 函数声明：当某个函数被声明为 [[nodiscard]] 时，该函数的返回值不应被忽略，如果一个函数被声明为 [[nodiscard]]，调用该函数时若忽略了其返回值，编译器会发出警告
  - 结构体、联合体、枚举的声明：当一个结构体、联合体或枚举被声明为 [[nodiscard]] 时，任何返回该类型的函数，其返回值都不应被忽略，如果一个枚举、结构体或联合体被声明为 [[nodiscard]]，任何返回该类型的函数，其返回值不应被忽略
  - 处理弃值表达式：如果从转型到 void 以外的弃值表达式调用声明为 [[nodiscard]] 的函数，或者调用返回声明 [[nodiscard]] 的结构体/联合体/枚举的函数，编译器会发出警告
  - 字符串字面量：当 [[nodiscard]] 属性带有字符串字面量时，编译器在发出警告时通常会包含该字符串作为警告信息的一部分，解释为什么不应忽略返回值
  举例：
  错误处理：某些函数返回错误码或状态，忽略这些返回值可能导致未处理的错误
  [[nodiscard]]
  int error_prone_function();   // 忽略返回值可能会导致错误未被检测到
  资源管理：某些函数返回需要手动释放的资源句柄
  [[nodiscard]]
  FILE* open_file(const char* filename);  // 忽略返回值可能会导致资源泄露
  重要计算结果：一些函数返回重要的计算结果，忽略这些结果可能会导致逻辑错误
  [[nodiscard]]
  int perform_critical_calculation();
  函数返回值的弃值表达式
  [[nodiscard]]
  int important_function() {
    return 42;
  }
  (void)important_function();             // 使用 void 转型避免警告
  int result = important_function();      // 正确使用，返回值被处理
  结构体返回值的弃值表达式
  [[nodiscard]]
  typedef struct {
    int id;
  } Resource;
  Resource acquire_resource() {
    Resource res = {1};
    return res;
  }
  (void)acquire_resource(); // 使用 void 转型避免警告
  Resource res = acquire_resource(); // 正确使用，返回值被处理  
  [[nodiscard]]
  int compute_value();
  [[nodiscard("Check the return value for errors")]]
  int compute_value_with_warning();

  [[maybe_unused]]
  说明：抑制对未使用实体的警告，即抑制编译器对未使用的变量、参数、或函数的警告
  语法：[[ maybe_unused ]]、[[ __maybe_unused__ ]]
  解释：此属性能出现在下列实体的声明中，若编译器对未使用实体发布警告，则对任何声明为 maybe_unused 的实体抑制该警告
  - typedef 名：[[maybe_unused]] typedef S* PS;
  - 对象：[[maybe_unused]] int x;
  - 结构体/联合体：struct [[maybe_unused]] S;
  - 结构体/联合体成员：union U { [[maybe_unused]] int n; };
  - 枚举：enum [[maybe_unused]] E {};
  - 枚举项：enum { A [[maybe_unused]], B [[maybe_unused]] = 42 };
  - 函数：[[maybe_unused]] void f(void);
  举例：
  [[maybe_unused]] void f([[maybe_unused]] _Bool cond1, [[maybe_unused]] _Bool cond2)
  {
     [[maybe_unused]] _Bool b = cond1 && cond2;
     assert(b);       // 发布模式中， assert 被编译掉，而 b 不被使用 无警告，因为它声明为 [[maybe_unused]]
  }                   // 参数 cond1 与 cond2 不被使用，无警告
  f(1, 1);
  [[maybe_unused]]
  void unused_function() {
    // This function might not be used
  }
  void function_with_unused_parameter([[maybe_unused]] int unused_param) {
    // ...
  }

  [[noreturn]] 和 [[_Noreturn]]
  说明：指示函数不会返回，即指示某个函数不会返回到调用者。这有助于编译器进行优化和错误检查
  语法：[[ noreturn ]]、[[ __noreturn__ ]] 和 [[ _Noreturn ]]（弃用）、[[ ___Noreturn__ ]]（弃用）
  解释：指示函数不会返回，此属性适用于函数名称，并指定函数不会通过执行 return 语句或到达函数体末尾而返回（它可能通过执行longjmp返回）。如果具有此属性的函数实际返回，则行为未定义。如果可以检测到这种情况，建议发出编译器诊断信息
  - 函数声明：指示函数不会返回，即函数不会通过执行 return 语句或到达函数体末尾而返回（可能通过执行 longjmp 返回）
  - 行为未定义：如果带有此属性的函数实际返回，则行为未定义。如果编译器检测到这种情况，建议发出诊断信息
  - 关键字弃用：在 C23 之前，_Noreturn 关键字用于指示这种行为。从 C23 开始，该关键字被弃用，取而代之的是 [[noreturn]] 属性
  标准库：以下标准库函数均被声明带有 noreturn 属性（C23 之前，它们曾以 _Noreturn 说明符声明）
  - abort()：程序支持工具，引发非正常的程序终止（不清理） abort() 函数会导致程序异常终止，并生成一个核心转储文件（如果系统支持）。该函数不会返回
  - exit()：程序支持工具，引发正常的程序终止并清理 exit() 函数会正常终止程序，执行全局对象的析构函数和任何已注册的 atexit 函数。该函数不会返回
  - _Exit()：程序支持工具，引发正常的程序终止但不清理 _Exit() 函数会立即终止程序，但不会执行全局对象的析构函数和已注册的 atexit 函数。该函数不会返回
  - quick_exit()：程序支持工具，引发正常的程序终止但不完全清理 quick_exit() 函数会快速终止程序，只执行已注册的 at_quick_exit 函数。该函数不会返回
  - thrd_exit()：程序支持工具 thrd_exit() 是线程库中的一个函数，用于终止调用它的线程，返回一个退出码。该函数不会返回
  - longjmp()：longjmp() 函数会将控制权转移到用 setjmp() 保存的环境中，而不会返回到调用它的地方。与 [[noreturn]] 属性不同的是，虽然 longjmp() 不会返回到调用它的位置，但它会恢复执行到 setjmp() 所保存的位置
  举例：
  [[noreturn]]
  void exit_program() {
    // This function does not return
    exit(1);
  }
  // [[_Noreturn]] 是 [[noreturn]] 的弃用拼写
  _Noreturn void exit_program_deprecated() {
    exit(1);
  }
  // #include <stdio.h>
  // #include <setjmp.h>          // setjmp.h：提供 setjmp 和 longjmp 函数，用于非本地跳转
  // #include <stdnoreturn.h>     // stdnoreturn.h：提供 noreturn 关键字，指示函数不会返回
  //  
  // jmp_buf my_jump_buffer;        // jmp_buf 是一个类型，用于保存调用 setjmp 时的环境信息（堆栈上下文、寄存器等）
  //  
  // noreturn void foo(int status)  // noreturn：指示 foo 函数不会返回到调用它的地方 
  // {
  //   printf("foo(%d) called\n", status);      // foo 函数接收一个整数参数 status，打印一条消息后，调用 longjmp 将控制权转移到调用 setjmp 的地方，同时返回值为 status + 1
  //   longjmp(my_jump_buffer, status + 1);     // 将从 setjmp 返回 status+1
  // }
  //
  // int main(void)
  // {
  //   volatile int count = 0;                  // setjmp 作用域中修改的局部变量必须为 volatile，volatile int count = 0：定义一个 volatile 修饰的局部变量 count，因为在 setjmp 和 longjmp 的作用域中修改的局部变量必须声明为 volatile，以确保其值不会在编译器优化中被意外改变
  //   if (setjmp(my_jump_buffer) != 5)         // setjmp(my_jump_buffer)：保存当前环境信息到 my_jump_buffer，并返回 0，if (setjmp(my_jump_buffer) != 5)：检查 setjmp 的返回值。如果返回值不是 5，则调用 foo(++count)
  //     foo(++count);
  // }
  // 运行解释
  //第一次调用 setjmp：
  //setjmp 保存当前环境，返回值为 0
  //进入 if 语句块，调用 foo(++count)。此时 count 为 1
  //
  //第一次调用 foo：
  //打印 foo(1) called
  //调用 longjmp(my_jump_buffer, 2)。这会使程序跳回到 setjmp 调用后的地方，并将 setjmp 的返回值设为 2
  //
  //第二次检查 setjmp 返回值：
  //setjmp 返回 2（由 longjmp 指定）
  //再次进入 if 语句块，调用 foo(++count)。此时 count 为 2
  //
  //第二次调用 foo：
  //打印 foo(2) called
  //调用 longjmp(my_jump_buffer, 3)
  //
  //重复上述过程，直到 setjmp 返回值为 5
  //结束：
  //当 setjmp 返回 5 时，不进入 if 语句块，程序结束 
  longjmp 和 goto 是两种不同的控制流工具，它们都可以改变程序执行的顺序，但其作用范围、用法和应用场景都有所不同。以下是对这两者的详细解释和比较
  
  longjmp 和 setjmp 是一对函数，用于实现非本地跳转。它们常用于从一个深层嵌套的函数调用中快速返回到一个特定的点。使用这对函数需要注意以下几点：
  setjmp：保存当前的环境信息，包括堆栈指针、程序计数器等。其返回值为 0
  longjmp：跳转到之前调用 setjmp 的位置，并恢复保存的环境，同时使 setjmp 返回一个指定的值（非 0）

  goto 是一种用于无条件跳转的基础控制流语句，可以在代码的任何地方跳转到标记的位置。goto 应该谨慎使用，过度使用会导致代码难以读懂和维护

  longjmp 和 setjmp 适用于需要跨函数边界的非本地跳转，一般用于异常处理或错误恢复
  goto 适用于简单的、函数内部的跳转，适当使用可以简化代码，但过度使用会导致代码难以维护
  在实际编程中，应该尽量避免使用 goto，而是使用结构化的编程方法（如循环和函数调用）来实现控制流。longjmp 和 setjmp 则应仅在确有必要的情况下使用，并确保代码的可读性和可维护性

  [[unsequenced]]
  说明：指示某个函数无状态、无作用、幂等且无依赖，向编译器提供函数访问对象的信息，使其可以推导函数调用的某些性质
  语法：[[ unsequenced ]]、[[ __unsequenced__ ]]
  [[unsequenced]]
  int pure_function() {
    return 42; // No side effects, idempotent
  }   
  [[reproducible]]
  说明：指示某个函数无作用且为幂等，即在相同输入下总是产生相同输出，向编译器提供函数访问对象的信息，使其可以推导函数调用的某些性质
  语法：[[ reproducible ]]、[[ __reproducible__ ]]
  [[reproducible]]
  int reproducible_function(int x) {
    return x * 2;                       // No side effects, produces the same result for the same input
  }
  C23 引入了一些新的函数属性，以帮助编译器更好地推导函数调用的性质，从而进行优化。这些属性包括 [[unsequenced]] 和 [[reproducible]]，它们分别提供了关于函数无作用、幂等、无状态和无关联的信息。下面我们详细解释这些属性及其含义
  解释 这些属性适用于函数声明符或具有函数类型的类型说明符。相应的属性是函数类型的一个特性
  
  无作用 对函数调用的求值是无效果的，如果在调用期间按顺序执行的任何存储操作是对与调用同步的对象的修改；如果此外该操作是可观察的，则对该对象的所有访问都必须基于函数的唯一指针参数
  无作用：函数调用不改变外部可观察状态，或者所有改变是可同步的
  定义：如果函数调用过程中，编入序列的任何存储操作，都是对某对象的同步于此次调用的修改，则该调用的执行是无作用的。简单来说，调用该函数不会产生任何对程序状态的影响，除非这些影响是可以准确同步的
  条件：
  如果函数调用涉及存储操作，这些操作必须同步于此次调用
  如果这些存储操作是可观察的（即，它们对外显现），那么所有对该对象的访问都必须基于函数的一个唯一指针形参

  幂等的 如果对一个评估 E 进行第二次评估可以紧接着原始评估进行，且不会改变产生的结果值（如果有结果值）或者执行的可观察状态，那么评估 E 是幂等的
  幂等：函数多次调用不会改变结果或状态
  定义：对于某个求值 E，若 E 的第二次求值可以紧跟第一次求值编入序列而不改变结果值（如果有）或执行的可观察状态，则它是幂等的。即，重复调用该函数不会产生额外的副作用，且结果一致
  条件：
  函数调用多次，结果不变且没有额外的副作用
  重复求值不会影响程序的可观察状态或结果值

  无状态 如果在函数 F 中或在由 F 调用的函数中，任何具有静态或线程存储持续时间的对象的定义是 const（但不是 volatile 限定的），那么函数 F 是无状态的
  无状态：函数不依赖于或修改静态或全局状态
  定义：如果函数 F 或其所调用的任何函数中，具有静态或线程存储期限的任何对象的定义均为 const 且无 volatile 限定，则 F 是无状态的。即，函数不依赖于或修改静态或线程局部的状态
  条件：
  函数中所有静态或线程存储期限的对象都必须是 const 且无 volatile 限定

  ？无关联 函数 F 是独立的，如果对于通过不是基于调用参数的左值调用 F 观察到的任何对象 X，在同一程序执行期间对 F 的所有调用中对 X 的所有访问都观察到相同的值；否则，如果访问基于指针参数，则应该有一个唯一的这样的指针参数 P，使得对 X 的任何访问都应该是基于 P 的左值
  对象 X 如果满足以下条件则被函数调用所观察：如果两者同步，如果 X 不是该调用的局部对象，如果 X 的生存期在函数调用之前开始，并且如果在调用期间对 X 的访问是有序的；如果存在 X 的最后一个值（如果有），在调用之前存储的该值被称为是该调用所观察到的 X 的值
  无关联：函数调用对外部对象的访问是唯一的或通过单一指针参数进行
  定义：对于函数 F，如果 F 的调用中可以通过非该调用的形参的左值而观察到任何对象 X，在同一次程序执行中所有对 F 的调用中，对 X 的所有访问都观察到相同的值，则 F 无关联。或者，如果访问是通过某个指针形参进行，则应当有一个唯一的这种指针形参 P，使得对 X 的任何访问都应当是基于 P 的左值访问
  条件：
  函数调用不会通过非形参的方式观察到不同的对象状态
  如果通过指针形参访问对象，则只有一个唯一的指针形参负责该访问
  
  注解：
  这些属性为编译器优化的目的而存在
  如果函数可重现，则可将先后多次调用当做一次调用
  如果函数无顺序，则可将先后多次调用当做一次调用，且这些调用可以并行化并任意重排
  
  C23 标准属性为编译器提供了更多的控制和优化可能性，同时增强了代码的可读性和可靠性。理解和正确使用这些属性，有助于编写更高效、更安全的 C 代码

  9、属性测试
  __has_c_attribute( 属性记号 )	检查 属性记号 所指名的属性记号的存在
  __has_c_attribute 是一个预处理器宏，用于检查某个特定属性是否存在。这个宏非常有用，可以用于条件编译，确保代码的兼容性和移植性。它可以用于检测标准属性和特定于厂商的属性，但它们的检测结果有所不同

  使用方法
  __has_c_attribute(属性记号) 在预处理阶段展开为一个整数，用于指示某个属性是否存在。对于标准属性，它将展开为该属性被添加到工作草案中的年份和月份。对于特定于厂商的属性，它将展开为一个非零的整数常量

  标准属性的检测结果
  对于标准属性，__has_c_attribute 将展开为属性被标准化时的年份和月份。例如，如果某个属性是在 2023 年 10 月被添加到标准中的，那么 __has_c_attribute 将展开为 202310
  #if __has_c_attribute(deprecated)
    [[deprecated]]
    void old_function() {
      // Implementation
    }
  #else
    void old_function() {
      // Implementation without deprecation
    }
  #endif
  在这个例子中，__has_c_attribute(deprecated) 检查 [[deprecated]] 属性是否存在。如果存在（假设展开值为 202310），则使用 [[deprecated]] 属性声明函数，否则提供一个没有 deprecated 属性的版本  

  特定于厂商的属性的检测结果
  对于特定于厂商的属性，__has_c_attribute 将展开为一个非零的整数常量，这个常量的具体值由编译器实现决定，只要它是非零整数即可
  #if __has_c_attribute(gnu::always_inline)
    [[gnu::always_inline]]
    void inline_function() {
      // Implementation
    }
  #else
    inline void inline_function() {
      // Implementation without always_inline attribute
    }
  #endif
  在这个例子中，__has_c_attribute(gnu::always_inline) 用于检查 [[gnu::always_inline]] 属性是否存在。如果存在（展开为一个非零整数），则使用 [[gnu::always_inline]] 属性声明函数，否则提供一个没有 always_inline 属性的版本  
  
  条件编译中的使用 __has_c_attribute 可以在 #if 和 #elif 表达式中使用，这使得它非常适合条件编译
  #if __has_c_attribute(nodiscard)
    [[nodiscard]]
    int compute_value() {
      return 42;
    }
  #else
    int compute_value() {
      return 42;
    }
  #endif
  在这个例子中，__has_c_attribute(nodiscard) 检查 [[nodiscard]] 属性是否存在。如果存在，则使用 [[nodiscard]] 属性声明函数，否则提供一个没有 nodiscard 属性的版本

  其他限制
  需要注意的是，__has_c_attribute 不能在 #ifdef、#ifndef 和 defined 中使用。只能在 #if 和 #elif 表达式中使用。因此，下面的代码是无效的
  #ifdef __has_c_attribute(nodiscard) // 错误
    // Code
  #endif

  __has_c_attribute 是一个非常有用的预处理器宏，用于检查特定属性的存在。它可以帮助开发者编写更具兼容性和移植性的代码，通过条件编译来适应不同的编译器和标准版本。对于标准属性，它展开为属性添加到标准中的年份和月份；对于特定于厂商的属性，它展开为一个非零的整数常量。在使用时要注意其适用范围，只能在 #if 和 #elif 中使用，不能在 #ifdef、#ifndef 和 defined 中使用

  属性记号	          属性	              值	           标准
  deprecated	      [[deprecated]]	    201904L	      (C23)
  fallthrough	      [[fallthrough]]	    201904L	      (C23)
  maybe_unused	    [[maybe_unused]]    201904L	      (C23)
  nodiscard	        [[nodiscard]]	      202003L	      (C23)
  noreturn          [[noreturn]]
  _Noreturn	        [[_Noreturn]]	      202202L	      (C23)
  unsequenced	      [[unsequenced]]	    202207L	      (C23)
  reproducible	    [[reproducible]]	  202207L	      (C23)

  */
  // [[gnu::hot]] [[gnu::const]] [[nodiscard]]
  // int f(void);                                     // 1、以三个属性声明 f
  // [[gnu::const, gnu::hot, nodiscard]]
  // int f(void);                                     // 同上，但使用了包含三个属性的单个属性说明符
  void my_exit_function() __attribute__((noreturn));  // 2、用于告知编译器被修饰的函数不会返回。例如，一个函数会调用exit()系统调用而终止程序，就可以使用这个属性
  // void my_exit_function() {
  //   // 做一些清理工作
  //   exit(0);
  // }
  void init_function() __attribute__((constructor));  // 初始化代码，比如初始化全局变量等
  void fini_function() __attribute__((destructor));   // 清理代码，比如释放资源等
  int my_variable __attribute__((aligned(16)));       // 表示my_variable这个变量的存储地址将按照 16 字节对齐
  struct my_struct {                                  // 这个my_struct结构体将不会进行默认的对齐填充，节省内存空间，但可能会影响访问效率
    char a;
    int b;
  } __attribute__((packed));
  // [[attribute1, attribute2]]
  // int variable [[attribute3]];    // 5、属性1、属性2应用于整个声明，属性3应用于variable
  // [[attribute4]]
  // int function() [[attribute5]];  // 属性4应用于整个声明，属性5应用于返回类型

  // [[deprecated]]                  // 8、标准属性
  // void old_function();
  // [[deprecated("Use new_function instead")]]
  // void another_old_function();
  // switch (value) {
  //   case 1:
  //     // some code
  //     [[fallthrough]];
  //   case 2:
  //     // falling through intentionally
  //     break;
  // }
  // [[nodiscard]]
  // int compute_value();
  // [[nodiscard("Check the return value for errors")]]
  // int compute_value_with_warning();
  // [[maybe_unused]]
  // void unused_function() {
  //   // This function might not be used
  // }
  // void function_with_unused_parameter([[maybe_unused]] int unused_param) {
  //   // ...
  // }
  // [[noreturn]]
  // void exit_program() {
  //   // This function does not return
  //   exit(1);
  // }
  // // [[_Noreturn]] 是 [[noreturn]] 的弃用拼写
  // _Noreturn void exit_program_deprecated() {
  //   exit(1);
  // }
  // [[unsequenced]]
  // int pure_function() {
  //   return 42; // No side effects, idempotent
  // } 
  // [[reproducible]]
  // int reproducible_function(int x) {
  //   return x * 2; // No side effects, produces the same result for the same input
  // }  

#endif // DECLARATIONS declarations 声明

  return 0;  
}