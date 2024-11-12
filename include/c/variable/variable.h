/**
* @file              variable.h
* @brief             变量头文件
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.06
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.06 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include "colorfmt.h"

// 定义 调用 integer_fn 函数
#define INTEGER_FN
/**
* @brief             整型变量头文件函数
* @return  int       Return Description
*
* @note              Revision History
*/
int integer_fn(void);

// 定义 调用 boolean_fn 函数
#define BOOLEAN_FN
/**
* @brief             布尔类型变量头文件函数
* @return  int       Return Description
*
* @note              Revision History
*/
int boolean_fn(void);

// 定义 调用 character_fn 函数
#define CHARACTER_FN
/**
* @brief             字符类型变量头文件函数
* @return  int       Return Description
*
* @note              Revision History
*/
int character_fn(void);

// 定义 调用 floating_fn 函数
#define FLOATING_FN
/**
* @brief             浮点类型变量头文件函数
* @return  int       Return Description
*
* @note              Revision History
*/
int floating_fn(void);