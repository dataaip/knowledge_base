/**
* @file              typedef.c
* @brief             typedef 声明 提供了一种将标识符声明为类型别名的方法，用于替换可能复杂的 类型名称
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>typedef关键词使用，解释说明
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             typedef 声明 提供了一种将标识符声明为类型别名的方法，用于替换可能复杂的 类型名称
*
* @note              关键字 typedef 用于声明中，处于存储类说明符的语法位置，但其不影响存储或链接
*/
#define TYPEDEF_WORDS

/**
* @brief             typedef 声明 提供了一种将标识符声明为类型别名的方法，用于替换可能复杂的 类型名称
* @return  int       Return Description
*
* @note              Revision History
*/
int typedef_fn(void) {
#ifdef TYPEDEF_WORDS
  /*
  typedef
  1、typedef 声明 提供了一种将标识符声明为类型别名的方法，用于替换可能复杂的 类型名称
  关键字 typedef 用于声明中，处于存储类说明符的语法位置，但其不影响存储或链接
  
  解释
  2、如果一个声明使用 typedef 作为存储类说明符，那么其中的每个声明符都将一个标识符定义为指定类型的别名。由于在一个声明中只允许有一个存储类说明符，所以 typedef 声明不能是静态的或外部的
  如果一个声明使用 typedef 作为存储类说明符，那么其中的每个声明符都将一个标识符定义为指定类型的别名，在一个声明中只允许有一个存储类说明符，所以 typedef 声明不能是 static 的或 extern 的
  typedef int MyInt;        // 正确
  static typedef int MyInt; // 错误
  extern typedef int MyInt; // 错误

  typedef 声明不会引入一个独特的类型，它只是为现有类型建立一个同义词，因此，typedef 名称与它们所别名的类型是兼容的。typedef 名称与普通标识符（如枚举、变量和函数）共享命名空间
  typedef 声明不会引入一个独特的类型，它只是为现有类型建立一个同义词。因此，typedef 名称与它们所别名的类型是兼容的
  typedef int Integer;
  Integer x = 5;
  int y = 10;
  x = y;                          // 合法，因为 Integer 与 int 是同一种类型
  typedef 名称与普通标识符（如枚举、变量和函数）共享命名空间。这意味着你不能在同一命名空间内定义两个相同名称的标识符
  typedef int MyType;
  int MyType;                     // 错误，与 typedef 名称冲突
  
  对 VLA 的 typedef 只能出现在块作用域内。与数组自身的声明不同，数组长度会在每次控制流经过 typedef 声明时求值
  void copyt(int n)
  {
    typedef int B[n];             // B 是 VLA，其长度为 n，现在求值
    n += 1;
    B a;                          // a 的长度是 +=1 前的 n
    int b[n];                     // a 和 b 长度不同
    for (int i = 1; i < n; i++)
      a[i-1] = b[i];
  }

  注解
  3、typedef 名称可能是一个不完整类型，它可以像往常一样被补全
  typedef 声明通常用于将来自标签命名空间的名称注入到普通命名空间中，他们甚至可以完全避免使用标签名称空间
  typedef 名亦常用来简化复杂声明的语法
  库常常会将依赖系统或依赖配置的类型暴露成 typedef 名，以对用户或其他库组件提供统一接口
  #if defined(_LP64)
  typedef int  wchar_t;
  #else
  typedef long wchar_t;
  #endif  
  */

  typedef int int_t;                          // 1、声明 int_t 为类型 int 之别名
  typedef char char_t, *char_p, (*fp1)(void); // 声明 char_t 为类型 char 之别名，char_p 为 char* 之别名，fp1 为 char(*)(void) 之别名
  
  typedef int MyInt;                          // 2、正确
  // static typedef int MyInt1;               // 错误
  // extern typedef int MyInt2;               // 错误
  // typedef int MyType;
  // int MyType;                              // 错误，与 typedef 名称冲突
  typedef int Integer;
  Integer xx = 5;
  int yy = 10;
  xx = yy;                                    // 合法，因为 Integer 与 int 是同一种类型
  
  typedef int At[];                           // 3、A 是 int[]
  At at = {1, 2}, bt = {3,4,5};               // a 的类型是 int[2]，b 的类型是 int[3]
  typedef struct tnode tnode;                 // 通常命名空间的 tnode 为标签命名空间的 tnode 之别名
  struct tnode {
    int count;
    tnode *left, *right;                      // 同 struct tnode *left, *right;
  };                                          // 现在 tnode 也是完整类型
  tnode sn, *sp;                              // 同 struct tnode s, *sp;
  typedef struct { double hi, lo; } range;    // 它们可以完全避免使用标签命名空间
  range z, *zp;
  int (*(*callbacks[5])(void))[3];            // 一个包含5个元素的数组，每个数组的元素函数指针 是一个接收void参数，返回值是一个指向3个int元素数组的指针
  typedef int arr_t[3];                       // arr_t 是 3 个 int 的数组
  typedef arr_t* (*fp5)(void);                // 指针指向的函数返回 arr_t*
  fp5 callbackse[5];  

#endif // TYPEDEF_WORDS  typedef 关键词  

  return 0;
}