/**
* @file              string.c
* @brief             在 C 语言中，字符串是由字符数组表示的，以空字符（'\0'）结尾，C 标准库还提供了一些头文件和函数来操作字符串。最常用的头文件是 <string.h>
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.13
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.13 <td>0.1             <td>brightl         <td>字符串的表示、和字符数组区别、存储
* </table>
*/

#include "c/basics/variable/variable.h"
#include <string.h>  // 操作字符串的头文件
#include <stdio.h>
#include <stdlib.h>

#define STRING_CHAR_ARRAY_TYPE

/**
* @brief             字符串在 C 中是用字符数组表示的，字符串以 '\0'（空字符）结尾的字符数组，空字符标志着字符串的结束
* @return  int       Return Description
*
* @note              字符数组和字符串区别：是否是字符串取决于是否以 '\0' 结尾
*/
int string_fn(void) {
#ifdef STRING_CHAR_ARRAY_TYPE
  /*
  字符串在 C 中是用字符数组表示的，字符串以 '\0'（空字符）结尾的字符数组，即是类型为 char[]、char8_t[] (C23起)、char16_t[]、char32_t[] (C11起)或 wchar_t[] 的一系列带有终止字符的字符数组
  字符数组必须有足够的空间来存储字符串及其终止空字符，使用字符串函数时，确保目标数组有足够的空间来存储结果，避免字符串操作中的缓冲区溢出（Buffer Overflow）

  字符串 字符串是以空字符（'\0'）结尾的字符数组。C 语言中没有专门的字符串类型，字符串实际上是由字符数组表示的，字符串字面量是用双引号括起来的一系列字符
  字符数组 字符数组是由一组字符组成的数组，可以用来存储字符串。字符数组和字符串的主要区别是，字符数组不一定以空字符（'\0'）结尾，而字符串必须以空字符结尾
  字符指针 字符指针是指向字符数组或字符串的指针，字符指针可以用于动态分配字符串，字符数组在编译时分配固定大小的内存，而字符指针可以指向运行时动态分配的内存
  
  字符串 以 '\0' 结尾的字符数组、编译时确定、不可变（字面量）、必须以 '\0' 结尾、常用于字符串字面量、操作安全性较高
  字符数组 一组字符的数组、编译时确定、可变、不一定以 '\0' 结尾、常用于存储字符序列、操作安全性较高
  字符指针 指向字符数组或字符串的指针、可以编译时确定，也可以动态分配、可变、取决于所指向的数据、常用于动态字符串处理、需要小心内存管理
  
  C 语言中，字符串的存储位置和生命周期主要取决于它们的声明方式。字符串可以存储在静态存储区、栈区或堆区，这三种存储方式分别对应不同的生命周期和特性
  rabbit 字符串字面量存储在静态存储区，静态存储区中的数据在程序的整个生命周期内是存在的，并且通常是只读的
  cat 在函数内部声明的局部字符数组用于存储字符串时，这些字符串存储在栈区中。栈区中的数据在函数调用时分配，函数返回时释放
  dynamicrabbit 使用动态内存分配函数（如 malloc、calloc 或 realloc）分配的字符串存储在堆区中。堆区中的数据在显式释放之前会一直存在，程序员需要手动管理内存
  */
  char cat[] = "Hello, World!";                                                                 // 字符串
  char dog[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};         // 字符数组 包含 '\0' 等价 cat
  char cow[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};               // 字符数组 不包含 '\0' 不是字符串  
  char *rabbit = "Hello, World!";                                                               // 字符指针
  print_purple("cat size of %d. length =%d.\n", sizeof(cat), strlen(cat));                
  print_purple("dog size of %d. length =%d.\n", sizeof(dog), strlen(dog)); 
  print_purple("cow size of %d. length =%d.\n", sizeof(cow), strlen(cow));                   // strlen 是一个标准库函数，用于计算以 null 终止符 \0 结尾的字符串的长度。然而，我们定义的 cow 数组并没有包含 null 终止符，因此 strlen(cow) 的行为是未定义的，因为它会遍历数组直到找到第一个 \0，但在 cow 数组中并没有 \0
  print_purple("rabbit size of %d. length =%d.\n", sizeof(rabbit), strlen(rabbit));          // sizeof(rabbit) 输出: 8 (在 64 位系统上，指针的大小)

  print_purple("cat say %s.\n", cat);                           // 输出字符串: Hello, World!
  print_purple("dog say %s.\n", dog);                           // 输出字符数组: Hello, World!
  for (int i = 0; i < (int)sizeof(cow); i++) {
      print_purple("%c",cow[i]);                               // 输出字符数组: Hello, World!
  }
  print_purple(" say cow.\n");                               
  print_purple("rabbit say %s.\n", rabbit);                     // 输出字符指针: Hello, World!
  char *dynamicrabbit = malloc(14 * sizeof(char));       // 动态分配内存的字符指针
  if (dynamicrabbit != NULL) {
    strcpy(dynamicrabbit, "Hello, World!");
    print_purple("dynamicrabbit say %s.\n", dynamicrabbit);     // 输出: Hello, World!
    free(dynamicrabbit);                                  // 释放动态分配的内存
  }  

#endif // STRING_CHAR_ARRAY_TYPE 字符串 char[] 类型

  return 0;
}