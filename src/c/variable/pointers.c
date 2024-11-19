/**
* @file              pointers.c
* @brief             指针 类型代码文件，测试指针类型包括 *
* @version           0.3
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.16
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.18 <td>0.1             <td>brightl         <td>全局、局部枚举声明方式
* <tr><td>2024.11.19 <td>0.2             <td>brightl         <td>指针类型使用特性、存储大小
* <tr><td>2024.11.20 <td>0.3             <td>brightl         <td>指针、多级指针、指针字符串、指针函数、函数指针、指针数组、数组指针、指向void指针、空指针
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             语法：类型说明符序列 * 属性说明符序列(可选) 限定符序列(可选) 声明符
*
* @note              在指针声明的声明文法中：类型说明符序列 代表所指向的类型可以是函数或对象类型也可以是不完整类型、属性说明符序列 属性在C23引入应用到被声明的指针的可选属性列表、限定符序列 包括 const、volatile等修饰符它们修饰指针或指针所指向的对象、声明符 指针符号 * 和 包含指针的标识符以及指针的层次结构例如指向指针的指针
*/
#define POINTER_TYPE

/**
* @brief             指针是一种对象类型，它引用函数或另一种类型的对象，可以添加限定符。指针亦可以不引用任何内容，这通过一个特定的空指针值指示
* @return  int       Return Description
*
* @note              指针是用来存储内存地址的数据类型，可以引用（指向）函数或其他类型的对象。通过指针，可以访问和修改这些对象。指针可以是空指针，表示它不指向任何有效对象或函数。指针还可以添加限定符，如 const，以限制其使用
*/
int pointers_fn(void) {
#ifdef POINTER_TYPE
  /*
  1、简单指向对象的指针
  2、指向指针的指针
  3、指向函数的指针
  // 4、返回指针的函数
  5、带限定符的指针
  6、带属性说明符序列的指针(C23起)
  */
  float *p;          // 1、简单指向对象的指针 类型说明符序列 float 说明指针 p 指向 float 类型的对象、声明符 *p 表示 p 是一个指针，指向 float 类型
  float **pp;        // 2、指向指针的指针 类型说明符序列 float 说明指针 pp 指向的是一个指向 float 类型对象的指针、声明符 **pp 表示 pp 是一个指向指针的指针，而这个指针指向 float 类型
  int (*fp)(int);    // 3、指向函数的指针 类型说明符序列 int 说明 fp 最终指向的函数返回 int 类型、声明符 (*fp)(int) 表示 fp 是一个指向函数的指针，这个函数接受一个 int 参数，返回 int 类型
  // int* fn(int);      // 4、返回指针的函数 类型说明符序列 int*，表示返回一个指向 int 的指针、声明符 fn(int) 表示 fn 是一个函数，这个函数接受一个 int 参数，并返回一个 int* 类型的值
  const int *pc;     // 5、带限定符的指针 pc 是一个指向 const int 的指针，这意味着通过 pc 不能修改它所指向的 int 值
  int * const cp;    // 5、带限定符的指针 cp 是一个 const 指针，指向一个 int，这意味着 cp 本身不能指向其他地址，但可以修改它所指向的 int 值
  int * const * pcp; // 5、带限定符的指针 pcp 是一个指向 const 指针（该指针指向 int）的指针，这意味着 pcp 可以修改所指向的 const 指针，但不能通过 const 指针修改 int 值
  // [[deprecated]] int *ptr; // 6、带属性说明符序列的指针(C23起) ptr 是一个指针，指向 int，并且标记为 deprecated 
  
  float *p1, **pp1;     // p1 是指向 float 的指针，pp1 是指向指向 float 指针的指针
  int (*fp1)(int);      // fp1 是指向类型 int(int) 为函数的指针
  int n;
  const int * pc1 = &n; // pc1 是指向 const int 的非 const 指针
  // *pc1 = 2;          // 错误：不能通过 pc1 修改 n
  pc1 = NULL;           // OK：pc 自身可修改
  int * const cp1 = &n; // cp1 是一个指向非 const int 的 const 指针
  *cp1 = 2;             // OK：通过 cp1 修改 n
  // cp1 = NULL;        // 错误：cp1 自身不能修改
  int * const * pcp1 = &cp1; // pcp1 是一个指向指向 const 指针的非 const 指针，即是一个二级指针 一级非const、二级const、 int * const：说明这是一个 const 指针，指向一个 int 类型的数据，* pcp1：pcp1 是一个指针，指向 int * const 类型的指针
  // *pcp1 = NULL;           // 错误，不能修改 *pcp1  *pcp1 是一个 const 指针
  pcp1 = NULL;               // OK，可以修改 pcp1，pcp1 是一个非 const 的二级指针，指向一个 const 的一级指针
  int ** const pcp2 = &cp1;  // pcp2 是一个 const 指针，是指向一个指向 int 的指针、int ** const：说明这是一个 const 指针，指向一个 int * 类型的数据，pcp2：pcp2 是一个 const 指针，指向 int * 类型的指针
  *pcp2 = NULL;              // OK，可以通过 pcp2 修改 cp1 的值，pcp2 是一个 const 的二级指针，指向一个非 const 的一级指针
  // pcp2 = NULL;            // 错误，不能修改 pcp2 pcp2 是一个 const 指针
   
  /*
  解释
  */
  

#endif // POINTER_TYPE pointer 类型   

  return 0;  
}