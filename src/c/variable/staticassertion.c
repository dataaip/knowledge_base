/**
* @file              staticassertion.c
* @brief             静态断言（static assert）是 C11 标准引入的一项特性，允许在编译时进行条件检查。如果条件不满足，编译器会生成一条错误消息，从而防止代码继续编译。C23 标准对这一特性进行了进一步的改进和明确
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>静态断言语法、使用
* </table>
*/

#include "c/variable/variable.h"
#include <stdint.h>
#include <stdio.h>
#include <assert.h>

/**
* @brief             静态断言是 C 语言中的一个强大工具，用于在编译时进行条件检查，确保代码符合特定的约束条件，从而避免潜在的运行时错误。C23 标准进一步改进了静态断言的错误消息显示，使其更加明确和易于理解。在现代 C 编程中，合理使用静态断言可以显著提高代码的可靠性和可维护性
*
* @note              Revision History
*/
#define STATICASSERTION

/**
* @brief             静态断言（static assert）是 C11 标准引入的一项特性，允许在编译时进行条件检查。如果条件不满足，编译器会生成一条错误消息，从而防止代码继续编译。C23 标准对这一特性进行了进一步的改进和明确
* @return  int       Return Description
*
* @note              Revision History
*/
int staticassertion_fn(void) {
#ifdef STATICASSERTION
  /*
  静态断言（static assert）是 C11 标准引入的一项特性，允许在编译时进行条件检查。如果条件不满足，编译器会生成一条错误消息，从而防止代码继续编译。C23 标准对这一特性进行了进一步的改进和明确

  1、语法
  _Static_assert ( 表达式 , 消息 )	 (C11起)(C23弃用)
  static_assert ( 表达式 , 消息 )		 (C23起)
  _Static_assert ( 表达式 )		      (C11起)(C23弃用)
  static_assert ( 表达式 )		      (C23起)

  表达式 -	任何整数常量表达式，一个常量表达式，该表达式在编译时求值
  消息 -	任何字符串字面量，当表达式的值为零（false）时，编译器输出的错误消息
  此关键词 _Static_assert 亦可用作便利宏 static_assert 于头文件 <assert.h> 中提供(C23前)
  static_assert 和 _Static_assert 都具有相同的效果，_Static_assert 是为了保持兼容性而保留的已弃用拼写，实现也可以将 static_assert 或 _Static_assert 定义为预定义宏，并且自C23起 assert.h 不再提供 static_assert

  2、解释
  常量表达式在编译时进行计算，并与零进行比较。如果它与零相等，则会发生编译时错误，并且编译器必须将消息作为错误消息的一部分显示出来（除了不在基本字符集中的字符不需要显示）（直到C23）；自C23起，应该将消息（如果提供）作为错误消息的一部分显示出来。否则，如果表达式不等于零，则什么也不会发生；不会生成任何代码
  编译器在编译时会计算 表达式 的值：
  如果 表达式 的值为非零（true），则编译成功，什么也不会发生
  如果 表达式 的值为零（false），则编译失败，并显示 消息 作为错误信息的一部分

  3、在 C23 标准中，对静态断言的错误消息显示进行了改进和明确
  在 C23 之前，如果 表达式 为零，编译器必须将 消息 作为错误消息的一部分显示（但不要求显示基本字符集以外的字符）
  从 C23 开始，如果提供了 消息，编译器应该将它作为错误消息的一部分显示

  4、静态断言通常用于以下场景：
  编译时常量验证：确保某些常量符合预期条件，这在配置和定义常量时非常有用，以确保它们在编译时已经满足特定的约束
  #define MAX_SIZE 1024
  #define MIN_SIZE 512
  _Static_assert(MAX_SIZE >= MIN_SIZE, "MAX_SIZE must be greater than or equal to MIN_SIZE");

  类型大小验证：验证类型的大小是否符合特定要求，这在涉及到数据结构对齐或特定硬件要求时非常有用
  typedef struct {
    uint8_t a;
    uint32_t b;
  } MyStruct;
  _Static_assert(sizeof(MyStruct) == 8, "Size of MyStruct must be 8 bytes");

  配置参数检查：确保配置参数在预期范围内，这在编写可配置软件时非常有用，以确保配置参数在合理的范围内
  #define MAX_CONNECTIONS 100
  _Static_assert(MAX_CONNECTIONS > 0 && MAX_CONNECTIONS <= 1000, "MAX_CONNECTIONS must be between 1 and 1000");

  接口一致性检查：确保接口符合预期设计，确保接口符合预期设计。这在编写库或模块时非常有用，以确保模块接口的一致性和正确性
  typedef void (*CallbackFunction)(int);
  _Static_assert(sizeof(CallbackFunction) == sizeof(void (*)(int)), "CallbackFunction type mismatch");

  */

  static_assert((2 + 2) % 3 == 1, "Whoa dude, you knew!");          // 1、测试数学是否正常工作，C23
  _Static_assert(2 + 2 * 2 == 6, "Lucky guess!?");                  // C23 之前的替代方案

  // static_assert(sizeof(int) < sizeof(char), "Unmet condition!"); // 2、这会在编译时产生错误
  static_assert(sizeof(int) > sizeof(char), "Unmet condition!");    // 正常
  // constexpr int _42 = 2 * 3 * 2 * 3 + 2 * 3;                     // C23 支持
  // static_assert(_42 == 42, "");                                  // 常量表达式，可以省略消息字符串
  // const int _13 = 13;
  // static_assert(_13 == 13);                                      // 编译时错误- 并非整数常量表达式

  #define MIN_BUFFER_SIZE 256                                       // 4、静态断言通常用于以下场景
  _Static_assert(MIN_BUFFER_SIZE >= 128, "Buffer size is too small");

  #define MAX_SIZE 1024
  #define MIN_SIZE 512
  _Static_assert(MAX_SIZE >= MIN_SIZE, "MAX_SIZE must be greater than or equal to MIN_SIZE");

  typedef struct {
    uint8_t a;
    uint32_t b;
  } MyStruct;
  _Static_assert(sizeof(MyStruct) == 8, "Size of MyStruct must be 8 bytes");

  #define MAX_CONNECTIONS 100
  _Static_assert(MAX_CONNECTIONS > 0 && MAX_CONNECTIONS <= 1000, "MAX_CONNECTIONS must be between 1 and 1000");

  typedef void (*CallbackFunction)(int);
  _Static_assert(sizeof(CallbackFunction) == sizeof(void (*)(int)), "CallbackFunction type mismatch");

#endif // STATICASSERTION  static_assert  

  return 0;
}