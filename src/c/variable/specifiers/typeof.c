/**
* @file              typeof.c
* @brief             typeof 运算符 (C23起)，确定对象的类型
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>typeof 运算符 (C23起)，使用解释说明
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             typeof 运算符 (C23起)，确定对象的类型
*
* @note              Revision History
*/
#define TYPEOF_WORDS

/**
* @brief             typeof 运算符 (C23起)，确定对象的类型
* @return  int       Return Description
*
* @note              Revision History
*/
int typeof_fn(void) {
#ifdef TYPEOF_WORDS
  /*
  typeof 运算符 (C23起)，确定对象的类型

  1、语法
  typeof( 类型 )	(1)	
  typeof( 表达式 )	(2)	
  typeof_unqual( 类型 )	(3)	
  typeof_unqual( 表达式 )	(4)	

  解释
  1) 返回类型名称且会计算嵌套的 typeof 说明符
  2) 返回操作数对应的类型名称。表达式不会发生隐式类型转换
  3,4) 分别与 (1) 和 (2) 相同，但是会移除限定符

  注解
  typeof 和 typeof_unqual 统称为 typeof 运算符。typeof 运算符不能被用于位域成员。如果操作数的类型是可修改的类型，则会对操作数求值；否则，操作数不会被求值。typeof_unqual 运算符的返回结果是与 typeof 运算符返回的结果相对应的非原子限定类型。typeof 运算符将会保留所有限定符

  2、说明
  C23（或称为C2x）是C语言的一个新标准，它引入了一些新的特性和改进。关于 typeof 和 typeof_unqual，这是在C23中正式引入的两个关键字，用于类型查询
  typeof:
  在C23中，typeof 运算符允许程序员获取任意表达式的类型，而不实际评估该表达式
  它可以用来声明具有相同类型的变量、进行类型转换等
  语法形式为：typeof( expression ) 或 typeof(type-name)，其中 expression 是任何有效的C表达式，而 type-name 是一个类型名
  使用 typeof 可以帮助编写更加泛型和可移植的代码

  typeof_unqual:
  typeof_unqual 类似于 typeof，但它返回的是表达式的未限定类型（unqualified type），即去掉所有限定符（如 const, volatile, restrict 等）后的基础类型
  对于指针类型，这意味着返回的类型将不会包含指向对象的限定符；对于非指针类型，则会移除类型本身的限定符
  语法形式同样为：typeof_unqual( expression ) 或 typeof_unqual(type-name)

  这两个特性在之前的一些编译器（例如GCC）中作为扩展提供，但在C23中它们成为了标准的一部分。这使得开发者能够更方便地处理类型信息，并且可以编写出更为灵活和通用的代码
  这些新特性增强了C语言处理复杂类型的能力，特别是在实现泛型编程模式时非常有用
  */
  int a;        // 1、语法
  typeof(a) b;  // 声明一个与 a 类型相同的变量 b

  const int ci = 10;                      // 2、说明
  typeof(ci) cii = 20;                    // cii 将被声明为 const int
  int *restrict ptr;
  typeof(ptr) newPtr = NULL;              // newPtr 将被声明为 int *restrict

  // 如果你使用 typeof_unqual, 则限定符会被忽略
  // typeof_unqual(ci) i = 30;               // i 将被声明为 int (而不是 const int)
  // typeof_unqual(ptr) anotherPtr = NULL;   // anotherPtr 将被声明为 int* (限定符 'restrict' 被忽略了)

#endif // TYPEOF_WORDS  typeof 关键词  

  return 0;
}