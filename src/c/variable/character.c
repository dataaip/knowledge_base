/**
* @file              character.c
* @brief             character 字符类型代码文件，测试char类型变量包括 char
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.08
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.08 <td>0.1             <td>brightl         <td>字符类型分类、所占字节、取值范围
* </table>
*/

#include "c/variable/variable.h"
#include <limits.h> // 字符char 取值极限定义头文件
#include <wchar.h>  // 字符串操作、字符串检验、宽字符数组操作、转换成数值格式
#include <wctype.h> // 字符分类、字符操作
#include <stddef.h> // 定义各种变量类型和宏的头文件

#include <stdlib.h> 
#include <stdio.h>

/**
* @brief             字符类型 char、signed char、unsigned char
*
* @note              Revision History
*/
#define CHAR_TYPE

/**
* @brief             宽字符，c 标准亦定义了 typedef 名 wchar_t、char16_t 和 char32_t(C11起)以表示宽字符，以及表示 UTF-8 字符的 char8_t(C23 起)
*
* @note              Revision History
*/
#define WCHAR_T_TYPE
#define CHART8_32_T

/**
* @brief             打印 ascii 码
*
* @note              Revision History
*/
#define PRINT_ASCII

/**
* @brief             字符类型 signed char 用作有符号字符类型、unsigned char 用作无符号字符类型亦可用于查看对象表示（无修饰内存）、char 用于字符类型
* @return  int       Return Description
*
* @note              char 与 signed char 或 unsigned char 等价（具体等价于哪个是实现定义的，并且可以通过编译器命令行开关控制），但 char 是独立的类型，与 signed char 及 unsigned char 都不相同
*/
int character_fn(void){
#ifdef CHAR_TYPE
  /*
  可以看出 char 与 signed char 取值范围一样，在 linux 64 位 gcc 编译器实现中 等价
  char <=> signed char 用作有符号字符类型
  unsigned char 用作无符号字符类型。亦可用于查看对象表示（无修饰内存）
  字符类型 1个字节 8位，按%c格式化时输出位字符、按%d格式化时输出位整数相应的ascii码
  */
  char cat = 'A';
  char dog = 65; 
  signed char rabbit = 'A';
  signed char mouse = 65;
  unsigned char pig = 'A';
  unsigned char cow = 65;
  print_purple("cat is %c. number is %d.\n", cat, cat);
  print_purple("dog is %c. number is %d.\n", dog, dog);
  print_purple("rabbit is %c. number is %d.\n", rabbit, rabbit);
  print_purple("mouse is %c. number is %d.\n", mouse, mouse);
  print_purple("pig is %c. number is %d.\n", pig, pig);
  print_purple("cow is %c. number is %d.\n", cow, cow);
  print_purple("char size of %d. minimum = %d. maximum = %d \n", sizeof(char), CHAR_MIN, CHAR_MAX);
  print_purple("signed char size of %d. minimum = %d. maximum = %d \n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
  print_purple("unsigned char size of %d. maximum = %d \n", sizeof(unsigned char), UCHAR_MAX);

#endif // CHAR_TYPE char 类型

#ifdef WCHAR_T_TYPE
  /*

  */
  wchar_t sheep = L'A';

#endif // WCHAR_T_TYPE wchar_t 类型

#ifdef CHART8_32_T

#endif // CHART8_32_T char8~32_t 类型

#ifdef PRINT_ASCII
  puts("Printable ASCII:");
  for (int i = 32; i < 127; ++i) {
      putchar(i);
      putchar(i % 16 == 15 ? '\n' : ' ');
  }
  puts("\n");
#endif // PRINT_ASCII

    return 0;
}