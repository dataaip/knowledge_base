/**
* @file              initialization.c
* @brief             初始化对象声明可以通过名为初始化的步骤提供其初始值
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.02
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.02 <td>0.1             <td>brightl         <td>初始化方式、特性
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             对象声明可以通过名为初始化的步骤提供其初始值
*
* @note              对于每个声明符，若不省略初始化式，则它可以是下列之一：= 表达式、= {初始化式列表}、= {}	
*/
#define INITIALIZATION
// 初始化

// 显式初始化
// 隐式初始化
// 空初始化

// 标量初始化

// 数组初始化

// 结构体及联合体初始化

/**
* @brief             对象声明可以通过名为初始化的步骤提供其初始值
* @return  int       Return Description
*
* @note              初始化式指定存储于一个对象中的初始值
*/
int initialization_fn(void) {
#ifdef INITIALIZATION
  /*
  初始化
  
  显式初始化
  隐式初始化
  空初始化
  
  标量初始化
  
  数组初始化

  结构体及联合体初始化
  */
  print_purple("initialization start...\n");

#endif // INITIALIZATION initialization

  return 0;
}