/**
* @file              keywords.c
* @brief             C 关键词，记录 C 中保留的关键词列表。因为语言使用这些关键词，故不可重定义它们。其例外是，它们在 attribute-token 中并不被保留使用 
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.02
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.02 <td>0.1             <td>brightl         <td>C关键词列表
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             C 中保留的关键词列表
*
* @note              Revision History
*/
#define KEYWORDS

/**
* @brief             C 中保留的关键词列表
* @return  int       Return Description
*
* @note              Revision History
*/
int keywords_fn(void) {
#ifdef KEYWORDS
  /*
  这是 C 中保留的关键词列表。因为语言使用这些关键词，故不可重定义它们。其例外是，它们在 attribute-token 中并不被保留使用
  alignas (C23)
  alignof (C23)
  auto
  bool (C23)
  break
  case
  char
  const
  constexpr (C23)
  continue
  default
  do
  double
  else
  enum
  
  extern
  false (C23)
  float
  for
  goto
  if
  inline (C99)
  int
  long
  nullptr (C23)
  register
  restrict (C99)
  return
  short
  signed
  
  sizeof
  static
  static_assert (C23)
  struct
  switch
  thread_local (C23)
  true (C23)
  typedef
  typeof (C23)
  typeof_unqual (C23)
  union
  unsigned
  void
  volatile
  while
  
  _Alignas (C11)(C23弃用)
  _Alignof (C11)(C23弃用)
  _Atomic (C11)
  _BitInt (C23)
  _Bool (C99)(C23弃用)
  _Complex (C99)
  _Decimal128 (C23)
  _Decimal32 (C23)
  _Decimal64 (C23)
  _Generic (C11)
  _Imaginary (C99)
  _Noreturn (C11)(C23弃用)
  _Static_assert (C11)(C23弃用)
  _Thread_local (C11)(C23弃用)
  */

  /*
  最常见的以下划线开头的关键词通常通过其便利宏来使用
  关键词								用作										定义于
  _Alignas (C11)(C23弃用)				alignas (C23移除)						stdalign.h
  _Alignof (C11)(C23弃用)				alignof (C23移除)						stdalign.h
  _Atomic (C11)						    atomic_bool, atomic_int, ...		  stdatomic.h
  _BitInt (C23)（无宏）	
  _Bool (C99)(C23弃用)					bool (C23移除)						    stdbool.h
  _Complex (C99)					   complex	                               complex.h
  _Decimal128 (C23)					   （无宏）	
  _Decimal32 (C23)					   （无宏）	
  _Decimal64 (C23)					   （无宏）	
  _Generic (C11)					   （无宏）	
  _Imaginary (C99)					   imaginary								complex.h
  _Noreturn (C11)(C23弃用)				noreturn								stdnoreturn.h
  _Static_assert (C11)(C23弃用)		    static_assert (C23移除)					 assert.h
  _Thread_local (C11)(C23弃用)			thread_local (C23移除)					threads.h
  
  一些关键词被弃用，出于兼容目的仍然作为对应关键词的代用拼写保留，可以在任何可以使用该关键词的地方使用，这些关键词的拼写、它们的替代形式，以及 true 和 false 是否实现为预定义宏是未指定的
  关键词	            代用拼写
  alignas (C23)	        _Alignas (C11)(C23弃用)
  alignof (C23)	        _Alignof (C11)(C23弃用)
  bool (C23)	        _Bool (C99)(C23 弃用)
  static_assert (C23)	_Static_assert (C11)(C23弃用)
  thread_local (C23)	_Thread_local (C11)(C23弃用)

  每个以双下划线 __ 或单下划线 _ 后随大写字母为首的名称都是受保留的：细节见标识符
  注意合字符 <%、%>、<:、:>、%: 以及 %:%: 提供表示标准记号的代用表示法
  */

  /*
  下列记号在用于预处理器指令语境之内时，为预处理器所识别
  if
  elif
  else
  endif
  
  ifdef
  ifndef
  elifdef (C23起)
  elifndef (C23起)
  define
  undef
  
  include
  embed (C23)
  line
  error
  warning (C23)
  pragma
  
  defined
  __has_include (C23)
  __has_embed (C23)
  __has_c_attribute (C23)  

  下列记号用于预处理器指令的语境之外时，为预处理器所识别
  _Pragma(C99) 
  */

  /*
  下列的额外关键词被分类为扩展，并且为条件性支持
  asm
  fortran
  */
  print_purple("keywords start...\n");

#endif // KEYWORDS 关键词    
  return 0;  
}