/**
* @file              atomics.c
* @brief             atomic 类型代码文件，测试 原子 类型(C11起)、_Atomic
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.30
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.30 <td>0.1             <td>brightl         <td>_Atomic类型声明、特性、解释
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>
#include <stdatomic.h>

/**
* @brief             声明、定义
*
* @note              Revision History
*/
#define ATOMICS_TYPE

/**
* @brief             介绍
* @return  int       Return Description
*
* @note              Revision History
*/
int atomics_fn(void) {
#ifdef ATOMICS_TYPE
  /*
  语法

  解释

  注解
  */
  print_purple("atomic type\n");  

#endif // ATOMICS_TYPE  atomic 原子类型

  return 0;
}