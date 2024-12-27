/**
* @file              alignas.c
* @brief             对齐说明符(C11) _Alignas (C11起), alignas (C23起) 出现于声明语法中，作为修改所声明对象的对齐要求的类型说明符
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>对齐说明符(C11)使用，解释说明
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>
#include <stdalign.h>

/**
* @brief             内存对齐是一种优化技术，旨在提高程序的性能和减少内存访问错误。4字节对齐和8字节对齐是两种常见的内存对齐方式。以下是它们的主要区别和相关概念
*
* @note              Revision History
*/
#define ALIGNAS_WORDS

/**
* @brief             内存对齐是一种优化技术，旨在提高程序的性能和减少内存访问错误。4字节对齐和8字节对齐是两种常见的内存对齐方式。以下是它们的主要区别和相关概念
* @return  int       Return Description
*
* @note              Revision History
*/
int alignas_fn(void) {
#ifdef ALIGNAS_WORDS
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

#endif // ALIGNAS_WORDS  alignas 关键词  

  return 0;
}