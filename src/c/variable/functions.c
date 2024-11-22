/**
* @file              functions.c
* @brief             函数 代码文件，测试 函数代码块 包括 int main (void);
* @version           0.2
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.16
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.18 <td>0.1             <td>brightl         <td>声明方式
* <tr><td>2024.11.19 <td>0.2             <td>brightl         <td>函数使用特性、存储大小
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             语法：函数声明、函数定义
*
* @note              Revision History
*/
#define FUNCTION_TYPE     
int sum(int x, int y) {     // 函数定义 定义一个名为“sum”并拥有函数体“ { return x+y; } ”的函数 
  //  return x + a + b;     // 错误：不能在 sum 中访问 main 的 x
  return x + y;
}

#ifdef FUNCTION_TYPE

#endif // FUNCTION_TYPE function 类型 

/**
* @brief             解释：函数是将一个标识符（函数名）关联到一条复合语句（函数体）的 C 语言构造。每个 C 程序都从 main 函数开始执行，也从它或者调用其他用户定义函数或库函数终止
* @return  int       Return Description
*
* @note              Revision History
*/
int functions_fn(void) {
#ifdef FUNCTION_TYPE
  /*
  1、特性：
  函数由函数声明或函数定义引入
  函数可以拥有零或更多个形参，它们为函数调用运算符的实参所初始化，并且以通过其 return 语句向其调用者返回一个值
  函数体在函数定义中提供 每个被用在表达式中的非内联 (C99起)函数（除非其不求值），必需在程序中定义一次
  不可以有嵌套函数（除了一些通过非标准的编译器扩展）每个函数定义必须出现在文件作用域，而且函数无法访问来自其调用方的局部变量
  */
  int sum(int, int);                               // 函数声明（可以出现于任何作用域）
  int n = sum(1, 2);                          // 函数调用 形参 x 和 y 为实参 1 和 2 所初始化
  int x = 1;                                       // main 的局部变量
  print_purple("int n = sum(1, 2); = %d.\n", n);
  //  int sum(int a, int b) {                      // 错误：不允许嵌套函数
  //    return  a + b; 
  //  }
  
  /*
  函数声明
  */

  /*
  函数定义
  */

  /*
  可变参数
  */

  /*
  内联函数(C99起)inline
  */

  /*
  _Noreturn 函数
  */

#endif // FUNCTION_TYPE function 类型    

  return 0;  
}