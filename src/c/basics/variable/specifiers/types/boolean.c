/**
* @file              boolean.c
* @brief             boolean 类型代码文件，测试布尔类型包括 bool、_Bool
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.08
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.08 <td>0.1             <td>brightl         <td>布尔类型分类、所占字节、取值范围
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdbool.h> // bool类型头文件 定义了 bool 代表 _Bool，true 代表 1，false 代表 0
#include <stdio.h>

/**
* @brief             布尔类型 _Bool、bool
*
* @note              Revision History
*/
#define BOOL_TYPE

/**
* @brief             _Bool 类型（亦可作为宏bool使用），足以保有两个值之一，1与0​（亦可作为宏true与false使用）
* @return  int       Return Description
*
* @note              Revision History
*/
int boolean_fn(void) {
#ifdef BOOL_TYPE
  /*
  类型 _Bool <=> bool(_Bool的宏) 
  bool值 1 <=> true(1的宏)、0 <=> false(0的宏)
  _Bool、bool的转换与到其他整数类型的转换不同：(bool)0.5 求值为 true，然而 (int)0.5 求值为 ​0
  */
  _Bool cat = 1;
  _Bool dog = true;  
  bool rabbit = 0;
  bool mouse = false;
  bool pig = (bool)0.5;
  bool cow = (bool)-1;
  print_purple("cat is %d.\n", cat);
  print_purple("dog is %d.\n", dog);
  print_purple("rabbit is %d.\n", rabbit);
  print_purple("mouse is %d.\n", mouse);
  print_purple("pig is %d.\n", pig);
  print_purple("cow is %d.\n", cow);
  print_purple("_Bool size of %d.\n", sizeof(_Bool));

#endif // BOOL_TYPE bool类型

  return 0;
}