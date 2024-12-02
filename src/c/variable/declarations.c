/**
* @file              declarations.c
* @brief             声明是一种引入一个或多个标识符到程序中，并指定其含义及属性的 C 语言构造
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

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             声明是一种引入一个或多个标识符到程序中，并指定其含义及属性的 C 语言构造
*
* @note              声明可以出现在任何作用域中。每个声明以分号结束（类似语句），并由两 (C23前)三 (C23起)个独立部分组成
*/
#define DECLARATIONS

/**
* @brief             声明是一种引入一个或多个标识符到程序中，并指定其含义及属性的 C 语言构造
* @return  int       Return Description
*
* @note              声明可以出现在任何作用域中。每个声明以分号结束（类似语句），并由两 (C23前)三 (C23起)个独立部分组成
*/
int declarations_fn(void) {
#ifdef DECLARATIONS
  /*
  
  */
  print_purple("declaration start...\n");

#endif // DECLARATIONS declarations 声明

  return 0;  
}