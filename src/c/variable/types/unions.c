/**
* @file              unions.c
* @brief             联合体类型 代码文件，测试联合体 union
* @version           0.3
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.13
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.13 <td>0.1             <td>brightl         <td>全局、局部联合体声明方式、固定底层类型、无固定底层类型
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>联合体类型使用、特性、内存布局
* <tr><td>2024.11.13 <td>0.3             <td>brightl         <td>联合体类型初始化
* </table>
*/

#include "c/variable/variable.h"
#include <stdalign.h> // 内存对齐定义的头文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <assert.h>
#include <stdint.h>

/**
* @brief             union 属性声明符序列(可选) 名字(可选) { 联合体声明列表 }，union 属性声明符序列(可选) 名字	
*
* @note              联合体是由一序列的成员所组成的类型，各成员的存储重叠（与结构体相反，结构体是由一序列的成员所构成的类型，成员的存储以顺序分配）。在任一时刻，最多能在联合体中存储其一个成员的值，联合体的类型说明符与 struct 类型说明符相同，只是所用的关键词有别
*/
#define UNION_TYPE

#ifdef UNION_TYPE
/*
联合体声明方式语法规则 
union 属性声明符序列(可选) 名字(可选) { 联合体声明列表 }  联合体定义：引入一个新类型 union 名字 并定义其含义
union 属性声明符序列(可选) 名字 声明但不定义 union 名字（前置声明），在其他上下文中命名先前声明的联合体，并且不允许属性说明符序列，即属性声明符序列存在，它不能后随 
名字 所定义的联合体的名称、联合体声明列表	任意数量的变量声明，位域声明和静态断言声明，不允许不完整类型的成员和函数类型的成员、属性声明符序列 (C23起)可选的属性列表应用到联合体类型，若这种形式不后随（即不是前置声明）则不允许
*/
union Data {
    int i;
    float f;
    char str[20];     //最大的字节成员
};

#endif // UNION_TYPE union 类型

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int unoins_fn(void) {
#ifdef UNION_TYPE
  /*
  联合体特性、使用、初始化
  1、联合体中的所有成员共享同一块内存区域，联合体的大小至少等于其最大成员的大小。编译器可能会添加额外的尾随填充字节，以满足对齐要求
  2、指针转换 可以将指向联合体的指针转型为指向它每个成员的指针（若联合体拥有位域成员，则能转型指向联合体的指针为指向位域底层类型的指针）。类似地，指向结构体任何成员的指针都能被转型为指向整个结构体的指针
  3、类型双关 通过联合体不同成员来访问同一块内存，从而实现数据类型的转换，若用于访问内容的联合体成员不同于上次用于存储值的成员，则转译被存储值的对象表示为新类型的对象表示（这被称为类型双关），若新类型的大小大于上次写入的类型大小，则多出的字节内容是未指明的（而且可以是陷阱表示）
  4、匿名联合体 类似结构体，类型为不带名字的联合体的无名联合体成员，每个匿名联合体的成员被认为是外围结构体或联合体的成员并维持联合体布局不变。若外围结构体或联合体亦为匿名，则递归应用此规则
  5、类似结构体，若不以任何具名成员（包含经由匿名嵌套结构体或联合体获得的成员）定义联合体，则程序行为未定义
  6、关于结构体和联合体初始化的规则，见结构体初始化
  */
  union Data data;
  data.i = 10;
  print_purple("data.i : %d\n", data.i);
  data.f = 220.5f;
  print_purple("data.f : %f\n", data.f);
  strcpy(data.str, "C Programming");
  print_purple("data.str : %s\n", data.str);
  print_purple("size of Data = %zu. size of data = %zu.\n", sizeof(union Data), sizeof(data));

  union Example { // 1、在这个联合体中，int 通常占 4 个字节，double 通常占 8 个字节，char 占 1 个字节。联合体的总大小至少是 8 个字节，因为 double 是最大的成员。编译器也可能添加一些额外的填充字节以满足对齐要求
      int i;
      double d;
      char c;
  };

  union Example ex;
  union Example *pex = &ex;
  int *pi = (int *)pex;                         // 2、指向联合体的指针转换为成员的指针，可以将指向联合体的指针转换为指向其任意成员的指针。这是因为联合体的所有成员共享同一块内存区域
  double *pd = (double *)pex;
  char *pc = (char *)pex;
  ex.i = 42;
  int *pxi = &ex.i;
  union Example *pexi = (union Example *)pi;    // 2、指向联合体成员的指针转换为指向联合体的指针，指向联合体成员的指针也可以转换为指向整个联合体的指针   
  union Example1 {
    unsigned int field1 : 3;   // 一个3位的无符号整数
    unsigned int field2 : 5;   // 一个5位的无符号整数
    unsigned int field3 : 8;   // 一个8位的无符号整数
  };
  union Example1 ex1;
  ex1.field1 = 5;              // 将field1设置为5（二进制：101）
  unsigned int *pField1 = (unsigned int *)&ex1;

  struct v {                   // 4、匿名联合体的成员被视为其外围结构体或联合体的成员，可以直接访问。这种规则可以递归应用于嵌套的匿名联合体
    union { // 匿名联合体
      struct { int i, j; }; // 匿名结构体
      struct { long k, l; } w;
    };
    int m;
  } v1;
  v1.i = 2;      // 合法，可直接访问
  // v1.k = 3;   // 非法：内层结构体不是匿名的
  v1.w.k = 5;    // 合法，通过名称访问

  union Example2 {            // 5、没有具名成员的联合体、联合体中包含匿名嵌套结构体或联合体，但这些结构体或联合体也不包含任何具名成员，结果会导致未定义行为
    struct {
        // 没有具名成员
    };
  }; 
  union Example3 {
    int i;  // 具名成员
    float f;
  };

  union S {
    uint32_t u32;
    uint16_t u16[2];
    uint8_t  u8;
  } s = {0x12345678};                       // s.u32 现为活跃成员
  print_purple("Union S has size %zu and holds %x\n", sizeof s, s.u32);
  s.u16[0] = 0x0011;                        // s.u16 现为活跃成员
  print_purple("s.u8 is now %x\n", s.u8);   // 从 s.u8 读取转译对象表示，未指定，典型结果是 11 或 00
  print_purple("s.u32 is now %x\n", s.u32); // 从 s.u32 读取转译对象表示，未指定，典型结果是 12340011 或 00115678  

  assert((uint8_t*)&s == &s.u8);            // 指向联合体所有成员的指针彼此间比较相等，也与指向联合体的指针比较相等，这行代码是一个断言语句，用来验证指针的比较。在C中，当通过指针访问联合体的成员时，所有成员的地址是相同的，并且与联合体本身的地址相同，断言 (uint8_t*)&s == &s.u8 的结果应为真

  union pad {               // 此联合体拥有尾随的 3 个填充字节
    char  c[5];             // 占据 5 字节 => char c[5] 需要 5 字节，但没有特定对齐要求
    float f;                // 占据 4 字节，隐含对齐 4 => float f 需要 4 字节，并且要求 4 字节对齐
  } p = {.f = 1.23};        // 大小为 8 以满足 float 的对齐，联合体的大小必须满足所有成员的对齐要求和大小需求，为了满足 float 的对齐要求（通常是 4 字节），联合体的总大小必须是 float 对齐的倍数。因为 char c[5] 和 float f 共享相同的存储空间，联合体的总大小必须是 4 的倍数，并且至少需要容纳最大的成员 c[5] 的 5 字节。因此，编译器会在 char c[5] 后面添加 3 个字节的填充，使得总大小达到 8 字节，以满足 float 的对齐要求
  print_purple("size of union of char[5] and float is %zu\n", sizeof p); // 内存对齐是指数据在内存中存储的位置需满足某种约束条件，以提高内存访问的效率。不同类型的数据可能有不同的对齐要求。例如，4字节的 float 类型通常要求4字节对齐，这意味着它的地址必须是4的倍数

#endif // UNION_TYPE union 类型

  return 0;
}