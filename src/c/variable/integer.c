/**
 * @file              integer.c
 * @brief             整数类型代码文件，测试整数类型变量包括 short、int、long、long long、bool、_Bitint(N)、__int128、int8_t~int64_t、int_fast8_t~int_fast64_t、int_least8_t~int_least64_t、intmax_t、intptr_t
 * @version           0.1
 * @author            brightl birigtl3016@outlook.com
 * @date              2024.11.06
 * @copyright         Copyright (c) 2024.
 *
 * @note              Revision History:
 * <table>
 * <tr><th>Date       <th>Version         <th>Author          <th>Description
 * <tr><td>2024.11.06 <td>0.1             <td>brightl         <td> 整数类型分类、所占字节、取值范围
 * <tr><td>2024.11.07 <td>0.2             <td>brightl         <td> 打印十进制、八进制、十六进制占位符、格式说明符
 * <tr><td>2024.11.08 <td>0.3             <td>brightl         <td> 数据模型选择即各类型字节大小选择、数据类型之间的宏定义及头文件 
 * <tr><td>2024.11.09 <td>0.4             <td>brightl         <td> 类型变量声明、初始化方式及陷阱
 * </table>
 */

#include "c/variable/variable.h"
#include <limits.h>   // 整数类型的极限头文件
#include <stdint.h>   // 定宽整数类型头文件
#include <inttypes.h> // 格式宏常量头文件
#include <stdio.h>
#include <stdlib.h>

#define NUMBER 1

/**
 * @brief             基本整数类型 short、int、long、long long(c99起)
 *
 * @note              int 这是平台的最理想整数类型，保证至少为16位，当前大多数平台使用32位（见后数据模型）、数据模型中的位宽LP32 或 2/4/4、ILP32 或 4/4/4、LLP64 或 4/4/8、LP64 或 4/8/8 不同系统有不同的选择导致字节宽度是不固定的，C标准保证 1 == sizeof(char) ≤ sizeof(short) ≤ sizeof(int) ≤ sizeof(long) ≤ sizeof(long long)
 */
#define SHORT_TYPE
#define INT_TYPE
#define LONG_TYPE
#define LONGLONG_TYPE

/**
 * @brief             定宽整数类型 包含宽度固定位数的类型(int8~64_t)、宽度至少位数最快的类型(int_fast8~64_t)、宽度至少位数最小的类型(int_least8~64_t)、最大宽度类型(intmax_t)、足以保有指针的类型(intptr_t)(c99起)、定宽整数类型其实就是对基本整数类型进行了一次宏包装，以屏蔽不同系统位数字节宽度不一致的问题，它不是一个新的类型是基础整数类型的一些宏定义包装
 *
 * @note              定宽整型、最大整数类型和指针整数类型保证了代码在不同平台上的一致性和可移植性，当N不是8、16、32或64时，实现可以定义类型别名intN_t、int_fastN_t、int_leastN_t 如果实现支持具有该宽度且无填充的整数类型，则只能定义形式为intN_t的类型别名。因此uint24_t表示宽度正好为24位的无符号整数类型
 */
#define INT8_64_T_TYPE
#define INT_FAST8_64_T_TYPE
#define INT_LEAST8_64_T_TYPE
#define INTMAX_T_TYPE
#define INTPRT_T_TYPE

/**
 * @brief             位精确的类型 _BitInt(N)(c23起)
 *
 * @note              _BitInt(N) 其中N为整数常量表达式，指定用于表示该类型的位数，包括符号位，每个N值均代表一种独立类型
 */
#define _BITINTN_TYPE

/**
 * @brief             由各编辑器实现定义精确位的类型 __int128，占用128位 16字节(c99起)
 *
 * @note              __int128 并不是所有编译器都支持(GCC和Clang支持)，可以像使用其他整数类型一样使用 __int128，但它不在C标准中没有标准库的直接支持，尤其是I/O操作，通常在需要非常大的整数和高精度计算时使用
 */
#define INT128

/**
 * @brief             声明和初始化整数类型
 *
 * @note              Revision History
 */
#define DECLARA_INIT

/**
 * @brief             整数类型测试函数：用 int 表示基本的整数类型 short、long、long long、signed、unsigned 提供基本类型的变式
 * @return  int       Return Description
 *
 * @note              Revision History
 */
int integer_fn(void) {
#ifdef SHORT_TYPE
  /*
  以下四个等价 short <=> short int <=> signed short <=> signed short int
  有符号短整型 short、signed 修式 int，int 可忽略、默认有符号
  print 打印 匹配符使用 %hd
  */
  short cat = NUMBER;
  short int dog = NUMBER;
  signed short rabbit = NUMBER;
  signed short int mouse = NUMBER;
  print_purple("cat number = %hd.\n", cat);
  print_purple("dog number = %hd.\n", dog);
  print_purple("rabbit number = %hd.\n", rabbit);
  print_purple("mouse number = %hd.\n", mouse);
  /*
  当前 64位 linux 系统 -> 有符号 short 类型的极限 占用2个字节 16位、最小值 -32768、最大值 32767
  */
  print_purple("short size of %hd byte. minimum = %hd. maximum = %hd.\n", sizeof(short), SHRT_MIN, SHRT_MAX);

  /*
  以下二个等价 unsigned short <=> unsigned short int
  无符号短整型 short、unsigned 修式 int，int 可忽略
  print 打印 匹配符使用 %hu
  */
  unsigned short pig = NUMBER;
  unsigned short int cow = NUMBER;
  print_purple("pig number = %hu.\n", pig);
  print_purple("cow number = %hu.\n", cow);
  /*
  当前 64位 linux 系统 -> 无符号 unsigned short 类型的极限 占用2个字节 16位、最大值 65535
  */
  print_purple("unsigned short size of %hu byte. maximum = %hu.\n", sizeof(unsigned short), USHRT_MAX);

#endif // SHORT_TYPE short 类型

#ifdef INT_TYPE
  /*
  以下三个等价 int <=> signed <=> signed int
  有符号整型 signed 修式 int，int 可忽略、默认有符号
  print 打印 匹配符使用 %d
  */
  int sheep = NUMBER;
  signed horse = NUMBER;
  signed int monkey = NUMBER;
  print_blue("sheep number = %d.\n", sheep);
  print_blue("horse number = %d.\n", horse);
  print_blue("monkey number = %d.\n", monkey);
  /*
  当前 64位 linux 系统 -> 有符号 int 类型的极限 占用4个字节 32位、最小值 -2147483648、最大值 2147483647
  */
  print_blue("int size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int), INT_MIN, INT_MAX);

  /*
  以下二个等价 unsigned <=> unsigned int
  无符号整型 unsigned 修式 int，int 可忽略
  print 打印 匹配符使用 %u
  */
  unsigned panda = NUMBER;
  unsigned int lion = NUMBER;
  print_blue("sheep number = %u.\n", panda);
  print_blue("horse number = %u.\n", lion);
  /*
  当前 64位 linux 系统 -> 无符号 int 类型的极限 占用4个字节 32位、最大值 4294967295
  */
  print_blue("unsigned int size of %u byte. maximum = %u.\n", sizeof(unsigned int), UINT_MAX);

#endif // INT_TYPE int 类型

#ifdef LONG_TYPE
  /*
  以下四个等价 long <=> long int <=> signed long <=> signed long int
  有符号长整型 long、signed 修式 int，int 可忽略、默认有符号
  print 打印 匹配符使用 %ld
  */
  long tiger = NUMBER;
  long int bear = NUMBER;
  signed long kangaroo = NUMBER;
  signed long int elephant = NUMBER;
  print_green("tiger number = %ld.\n", tiger);
  print_green("bear number = %ld.\n", bear);
  print_green("kangaroo number = %ld.\n", kangaroo);
  print_green("elephant number = %ld.\n", elephant);
  /*
  当前 64位 linux 系统 -> 有符号 long 类型的极限 占用8个字节 64位、最小值 -9223372036854775808、最大值 9223372036854775807
  */
  print_green("long size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(long), LONG_MIN, LONG_MAX);

  /*
  以下二个等价 unsigned long <=> unsigned long int
  无符号长整型 long、unsigned 修式 int，int 可忽略
  print 打印 匹配符使用 %lu
  */
  unsigned long wolf = NUMBER;
  unsigned long int fox = NUMBER;
  print_green("wolf number = %lu.\n", wolf);
  print_green("fox number = %lu.\n", fox);
  /*
  当前 64位 linux 系统 -> 无符号 unsigned long 类型的极限 占用8个字节 64位、最大值 18446744073709551615
  */
  print_green("unsigned long size of %lu byte. maximum = %lu.\n", sizeof(unsigned long), ULONG_MAX);

#endif // LONG_TYPE long 类型

#ifdef LONGLONG_TYPE
  /*
  以下四个等价 long long <=> long long int <=> signed long long <=> signed long
  long int 有符号长整型 long、signed 修式 int 默认有符号、int
  可省略、修饰词顺序可以互换不影响类型表示 
  print 打印 匹配符使用 %lld
  */
  long long deer = NUMBER;
  long long int gorilla = NUMBER;
  signed long long rhinoceros = NUMBER;
  signed long long int hippopotamus = NUMBER;
  print_yellow("deer number = %lld.\n", deer);
  print_yellow("gorilla number = %lld.\n", gorilla);
  print_yellow("rhinoceros number = %lld.\n", rhinoceros);
  print_yellow("hippopotamus number = %lld.\n", hippopotamus);
  /*
  当前 64位 linux 系统 -> 有符号 long long 类型的极限 占用8个字节 64位、最小值 -9223372036854775808、最大值 9223372036854775807
  */
  print_yellow("long size of %lld byte. minimum = %lld. maximum = %lld.\n", sizeof(long long), LLONG_MIN, LLONG_MAX);

  /*
  以下二个等价 unsigned long long <=> unsigned long long int
  无符号长整型 long、unsigned 修式 int
  int 可省略、修饰词顺序可以互换不影响类型表示允许任意顺序 unsigned long long int 和 long int unsigned long 指名同一类型 
  print 打印 匹配符使用 %llu
  */
  unsigned long long camel = NUMBER;
  unsigned long long int seal = NUMBER;
  print_yellow("camel number = %llu.\n", camel);
  print_yellow("seal number = %llu.\n", seal);
  /*
  当前 64位 linux 系统 -> 无符号 unsigned long long 类型的极限 占用8个字节 64位、最大值 18446744073709551615
  */
  print_yellow("unsigned long size of %llu byte. maximum = %llu.\n", sizeof(unsigned long long), ULLONG_MAX);

#endif // LONGLONG_TYPE long long 类型 (c99起)

#ifdef INT8_64_T_TYPE
  /*
  int8_t、int16_t、int32_t、int64_t 分别是宽度正好是 8、16、32 和 64 位的有符号整数类型 无填充位并对负值使用补码（只有在实现直接支持该类型时才会提供）
  当前 64位 linux 系统：
  int8_t 是 signed char 的宏定义   1 字节
  int16_t 是 signed short 的宏定义 2 字节
  int32_t 是 signed int 的宏定义   4 字节
  int64_t 是 signed long 的宏定义  8 字节
  print 打印的格式常量，格式宏常量在标头 <inttypes.h> 定义 在每个 PRI 宏中，这里列出的每个 PRI 宏当且仅当实现定义了相应的类型定义名称时才被定义
  */
  int8_t antelope = NUMBER;
  int16_t wildboar = NUMBER;
  int32_t yak = NUMBER;
  int64_t brownbear = NUMBER;
  print_red("antelope number = %d.\n", antelope);
  print_red("wildboar number = %d.\n", wildboar);
  print_red("yak number = %d.\n", yak);
  print_red("brownbear number = %ld.\n", brownbear);
  print_red("int8_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int8_t), INT8_MIN, INT8_MAX);
  print_red("int16_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int16_t), INT16_MIN, INT16_MAX);
  print_red("int32_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int32_t), INT32_MIN, INT32_MAX);
  print_red("int64_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(int64_t), INT64_MIN, INT64_MAX);
  print_red("int8_t PRId8 is %s, int16_t PRId16 is %s, int32_t PRId32 is %s, int64_t PRId64 is %s.\n", PRId8, PRId16, PRId32, PRId64);

  /*
  uint8_t、uint16_t、uint32_t、uint64_t 分别是宽度正好是 8、16、32 和 64 位的无符号整数类型（只有在实现直接支持该类型时才会提供）
  当前 64位 linux 系统：
  uint8_t 是 unsigned char 的宏定义   1 字节
  uint16_t 是 unsigned short 的宏定义 2 字节
  uint32_t 是 unsigned int 的宏定义   4 字节
  uint64_t 是 unsigned long 的宏定义  8 字节
  print 打印的格式常量，格式宏常量在标头 <inttypes.h> 定义 在每个 PRI 宏中，这里列出的每个 PRI 宏当且仅当实现定义了相应的类型定义名称时才被定义
  */
  uint8_t polarbear = NUMBER;
  uint16_t cheetah = NUMBER;
  uint32_t panther = NUMBER;
  uint64_t lynx = NUMBER;
  print_red("polarbear number = %u.\n", polarbear);
  print_red("cheetah number = %u.\n", cheetah);
  print_red("panther number = %u.\n", panther);
  print_red("lynx number = %lu.\n", lynx);
  print_red("uint8_t size of %u byte. maximum = %u.\n", sizeof(uint8_t), UINT8_MAX);
  print_red("uint16_t size of %u byte. maximum = %u.\n", sizeof(uint16_t), UINT16_MAX);
  print_red("uint32_t size of %u byte. maximum = %u.\n", sizeof(uint32_t), UINT32_MAX);
  print_red("uint64_t size of %lu byte. maximum = %lu.\n", sizeof(uint64_t), UINT64_MAX);
  print_red("uint8_t PRIu8 is %s, uint16_t PRIu16 is %s, uint32_t PRIu32 is %s, uint64_t PRIu64 is %s.\n", PRIu8, PRIu16, PRIu32, PRIu64);

#endif // INT8_64_T_TYPE int8~64_t 类型 (c99起)

#ifdef INT_FAST8_64_T_TYPE
  /*
  int_fast8_t、int_fast16_t、int_fast32_t、int_fast64_t 分别是宽度至少有 8、16、32 和 64 位的最快的有符号整数类型
  当前 64位 linux 系统：
  int_fast8_t 是 signed char 的宏定义  1 字节 8位
  int_fast16_t 是 long int 的宏定义    8 字节 64位
  int_fast32_t 是 long int 的宏定义    8 字节 64位
  int_fast64_t 是 long int 的宏定义    8 字节 64位
  在 64 位操作系统上，在许多情况下，long 类型的操作确实会有较好的性能，
  寄存器大小:  64位处理器有64位宽的寄存器，因此可以在一个时钟周期内处理64位的数据
  内存对齐: 64位数据类型在64位系统上通常是对齐的，这有助于提高内存访问速度
  */
  int_fast8_t anteater = NUMBER;
  int_fast16_t kangaroorat = NUMBER;
  int_fast32_t porcupine = NUMBER;
  int_fast64_t marmot = NUMBER;
  print_purple("anteater number = %d.\n", anteater);
  print_purple("kangaroorat number = %ld.\n", kangaroorat);
  print_purple("porcupine number = %ld.\n", porcupine);
  print_purple("marmot number = %ld.\n", marmot);
  print_purple("int_fast8_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int_fast8_t), INT_FAST8_MIN, INT_FAST8_MAX);
  print_purple("int_fast16_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(int_fast16_t), INT_FAST16_MIN, INT_FAST16_MAX);
  print_purple("int_fast32_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(int_fast32_t), INT_FAST32_MIN, INT_FAST32_MAX);
  print_purple("int_fast64_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(int_fast64_t), INT_FAST64_MIN, INT_FAST64_MAX);
  print_purple("int_fast8_t PRIdFAST8 is %s, int_fast16_t PRIdFAST16 is %s, int_fast32_t PRIdFAST32 is %s, int_fast64_t PRIdFAST64 is %s.\n", PRIdFAST8, PRIdFAST16, PRIdFAST32, PRIdFAST64);

  /*
  uint_fast8_t、uint_fast16_t、uint_fast32_t、uint_fast64_t 分别是宽度至少有 8、16、32 和 64 位的最快的无符号整数类型
  当前 64位 linux 系统：
  uint_fast8_t 是 unsigned char 的宏定义         1 字节 8位
  uint_fast16_t 是 unsigned long int 的宏定义    8 字节 64位
  uint_fast32_t 是 unsigned long int 的宏定义    8 字节 64位
  uint_fast64_t 是 unsigned long int 的宏定义    8 字节 64位  
  在 64 位操作系统上，在许多情况下，long 类型的操作确实会有较好的性能，
  寄存器大小:  64位处理器有64位宽的寄存器，因此可以在一个时钟周期内处理64位的数据
  内存对齐: 64位数据类型在64位系统上通常是对齐的，这有助于提高内存访问速度
  */
  uint_fast8_t mole = NUMBER;
  uint_fast16_t hedgehog = NUMBER;
  uint_fast32_t skunk = NUMBER;
  uint_fast64_t mink = NUMBER;
  print_purple("mole number = %u.\n", mole);
  print_purple("hedgehog number = %lu.\n", hedgehog);
  print_purple("skunk number = %lu.\n", skunk);
  print_purple("mink number = %lu.\n", mink);
  print_purple("uint_fast8_t size of %u byte. maximum = %u.\n", sizeof(uint_fast8_t), UINT_FAST8_MAX);
  print_purple("uint_fast16_t size of %lu byte. maximum = %lu.\n", sizeof(uint_fast16_t), UINT_FAST16_MAX);
  print_purple("uint_fast32_t size of %lu byte. maximum = %lu.\n", sizeof(uint_fast32_t), UINT_FAST32_MAX);
  print_purple("uint_fast64_t size of %lu byte. maximum = %lu.\n", sizeof(uint_fast64_t), UINT_FAST64_MAX);
  print_purple("uint_fast8_t PRIuFAST8 is %s, uint_fast16_t PRIuFAST16 is %s, uint_fast32_t PRIuFAST32 is %s, uint_fast64_t PRIuFAST64 is %s.\n", PRIuFAST8, PRIuFAST16, PRIuFAST32, PRIuFAST64);  

#endif // INT_FAST8_64_T_TYPE int_fast8~64_t 类型 (c99起)

#ifdef INT_LEAST8_64_T_TYPE
  /*
  int_least8_t、int_least16_t、int_least32_t、int_least64_t 分别是宽度至少有 8、16、32 和 64 位的最小的有符号整数类型
  当前 64位 linux 系统：
  int_least8_t 是 signed char 的宏定义          1 字节 8位
  int_least16_t 是 signed short int 的宏定义    2 字节 16位
  int_least32_t 是 signed int 的宏定义          4 字节 32位
  int_least64_t 是 signed long int 的宏定义     8 字节 64位
  定宽类型的主要目的是提供一个便携的方式来定义整数类型，确保在不同平台和编译器之间具有一致的最小位宽要求。这对于编写可移植的代码尤其重要
  */
  int_least8_t capybara = NUMBER;
  int_least16_t wombat = NUMBER;
  int_least32_t stoat = NUMBER;
  int_least64_t walrus = NUMBER;
  print_blue("capybara number = %d.\n", capybara);
  print_blue("wombat number = %d.\n", wombat);
  print_blue("stoat number = %d.\n", stoat);
  print_blue("walrus number = %ld.\n", walrus);
  print_blue("int_least8_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int_least8_t), INT_LEAST8_MIN, INT_LEAST8_MAX);
  print_blue("int_least16_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int_least16_t), INT_LEAST16_MIN, INT_LEAST16_MAX);
  print_blue("int_least32_t size of %d byte. minimum = %d. maximum = %d.\n", sizeof(int_least32_t), INT_LEAST32_MIN, INT_LEAST32_MAX);
  print_blue("int_least64_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(int_least64_t), INT_LEAST64_MIN, INT_LEAST64_MAX);
  print_blue("int_least8_t PRIdLEAST8 is %s, int_least16_t PRIdLEAST16 is %s, int_least32_t PRIdLEAST32 is %s, int_least64_t PRIdLEAST64 is %s.\n", PRIdLEAST8, PRIdLEAST16, PRIdLEAST32, PRIdLEAST64);

  /*
  uint_least8_t、uint_least16_t、uint_least32_t、uint_least64_t 分别是宽度至少有 8、16、32 和 64 位的最小的有符号整数类型
  当前 64位 linux 系统：
  uint_least8_t 是 unsigned char 的宏定义          1 字节 8位
  uint_least16_t 是 unsigned short int 的宏定义    2 字节 16位
  uint_least32_t 是 unsigned int 的宏定义          4 字节 32位
  uint_least64_t 是 unsigned long int 的宏定义     8 字节 64位
  定宽类型的主要目的是提供一个便携的方式来定义整数类型，确保在不同平台和编译器之间具有一致的最小位宽要求。这对于编写可移植的代码尤其重要  
  */
  uint_least8_t platypus = NUMBER;
  uint_least16_t opossum = NUMBER;
  uint_least32_t reindeer = NUMBER;
  uint_least64_t tapir = NUMBER;
  print_blue("platypus number = %u.\n", platypus);
  print_blue("opossum number = %u.\n", opossum);
  print_blue("reindeer number = %u.\n", reindeer);
  print_blue("tapir number = %lu.\n", tapir);
  print_blue("uint_least8_t size of %u byte. maximum = %u.\n", sizeof(uint_least8_t), UINT_LEAST8_MAX);
  print_blue("uint_least16_t size of %u byte. maximum = %u.\n", sizeof(uint_least16_t), UINT_LEAST16_MAX);
  print_blue("uint_least32_t size of %u byte. maximum = %u.\n", sizeof(uint_least32_t), UINT_LEAST32_MAX);
  print_blue("uint_least64_t size of %lu byte. maximum = %lu.\n", sizeof(uint_least64_t), UINT_LEAST64_MAX);
  print_blue("uint_least8_t PRIuLEAST8 is %s, uint_least16_t PRIuLEAST16 is %s, uint_least32_t PRIuLEAST32 is %s, uint_least64_t PRIuLEAST64 is %s.\n", PRIuLEAST8, PRIuLEAST16, PRIuLEAST32, PRIuLEAST64);

#endif // INT_LEAST8_64_T_TYPE int_least8~64_t 类型 (c99起)

#ifdef INTMAX_T_TYPE
  /*
  intmax_t 最大宽度的有符号整数类型，是能够表示最大整数范围的类型
  intmax_t 意味着它是所有有符号整数类型中最大的。当需要一个可以表示任意大整数的变量时，可以使用 intmax_t。具体实现取决于平台，通常会在 64 位或更大
  当前 64位 linux 系统：
  intmax_t 是 signed long int 的宏定义        8 字节 64位 
  */
  intmax_t redpanda = NUMBER;
  print_green("redpanda number = %ld.\n",redpanda);
  print_green("intmax_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(intmax_t), INTMAX_MIN, INTMAX_MAX);
  print_green("intmax_t PRIdMAX is %s, intmax_t PRIiMAX is %s.\n", PRIdMAX, PRIiMAX);
  
  /*
  uintmax_t 最大宽度的无符号整数类型，是能够表示最大整数范围的类型
  uintmax_t 意味着它是所有无符号整数类型中最大的。当需要一个可以表示任意大整数的变量时，可以使用 uintmax_t。具体实现取决于平台，通常会在 64 位或更大
  当前 64位 linux 系统：
  uintmax_t 是 unsigned long int 的宏定义     8 字节 64位 
  */
  uintmax_t spectacledbear = NUMBER;
  print_green("spectacledbear number = %lu.\n",spectacledbear);
  print_green("uintmax_t size of %lu byte. maximum = %lu.\n", sizeof(uintmax_t), UINTMAX_MAX);
  print_green("uintmax_t PRIuMAX is %s.\n", PRIuMAX);

#endif // INTMAX_T_TYPE intmax_t 类型

#ifdef INTPRT_T_TYPE
  /*
  intptr_t 足以保有指针的整数类型，保证在任何平台上都能正确存储指针
  当前 64位 linux 系统：
  intptr_t 是 signed long int 的宏定义        8 字节 64位 
  */
  intptr_t sunbear = NUMBER;
  print_yellow("sunbear number = %lx.\n",&sunbear);
  print_yellow("intptr_t size of %ld byte. minimum = %ld. maximum = %ld.\n", sizeof(intptr_t), INTPTR_MIN, INTPTR_MAX);
  print_yellow("intptr_t PRIdPTR is %s, intptr_t PRIiPTR is %s.\n", PRIdPTR, PRIiPTR);

  /*
  uintptr_t 足以保有指针的无符号整数类型，保证在任何平台上都能正确存储指针
  当前 64位 linux 系统：
  uintptr_t 是 unsigned long int 的宏定义     8 字节 64位 
  */
  uintptr_t bobcat = NUMBER;
  print_yellow("bobcat number = %lx.\n",&bobcat);
  print_yellow("uintptr_t size of %lu byte. maximum = %lu.\n", sizeof(uintptr_t), UINTPTR_MAX);
  print_yellow("uintptr_t PRIuPTR is %s.\n", PRIuPTR);

#endif // INTPRT_T_TYPE intptr_t 类型

#ifndef _BITINTN_TYPE
  /*
  以下两个等价 _BitInt(2) <=> signed _BitInt(2)
  有符号长整型 signed 修饰 _BitInt(n)
  位精确的有符号整数类型 其中n由代表精确宽度(包括符号位)的整数常量表达式替换，它不能大于 <limits.h> 中的 BITINT_MAXWIDTH 默认有符号、修饰词顺序可以互换不影响类型表示 
  print 打印匹配符使用 %d
  */
  _BitInt(2) dolphin = NUMBER;
  signed _BitInt(2) whale = NUMBER;
  print_red("dolphin number = %d.\n", dolphin);
  print_red("whale number = %d.\n", whale);
  print_red("_BitInt(N) N maximum = %d", BITINT_MAXWIDTH);

  /*
  以下 unsigned _BitInt(n) 无符号位精确整数
  无符号长整型 unsigned 修饰 _BitInt(n)
  位精确的无符号整数类型 其中n由代表精确宽度(包括符号位)的整数常量表达式替换，它不能大于 <limits.h> 中的 BITINT_MAXWIDTH 修饰词顺序可以互换不影响类型表示 
  print 打印匹配符使用 %d
  */
  unsigned _BitInt(1) bat = NUMBER;
  print_red("bat number = %d.\n", bat);
  print_red("unsigned _BitInt(N) N maximum = %d", BITINT_MAXWIDTH);

#endif // _BITINTN_TYPE _BitInt(N) 位精确类型(c23起)

#ifdef INT128
  /*
  打印 __int128 类型的宏函数
  */
  #define PRINT_INT128(n)                                                        \
    do {                                                                         \
      if ((n) == 0) {                                                            \
        putchar('0');                                                            \
      } else {                                                                   \
        char queue[40];                                                          \
        if ((n) < 0) {                                                           \
          putchar('-');                                                          \
        }                                                                        \
        int i = 0;                                                               \
        __int128 temp = (n);                                                     \
        while (!(temp == 0)) {                                                   \
          queue[i++] = '0' + abs((int)(temp % 10));                              \
          temp /= 10;                                                            \
        }                                                                        \
        while (i > 0) {                                                          \
          putchar(queue[--i]);                                                   \
        }                                                                        \
      }                                                                          \
      putchar('\n');                                                             \
    } while (0)
  /*
  打印 unsigned __int128 类型的宏函数
  */
  #define PRINT_UINT128(n)                                                       \
    do {                                                                         \
      if ((n) == 0) {                                                            \
        putchar('0');                                                            \
      } else {                                                                   \
        char queue[40];                                                          \
        if ((n) < 0) {                                                           \
          putchar('-');                                                          \
        }                                                                        \
        int i = 0;                                                               \
        unsigned __int128 temp = (n);                                            \
        while (!(temp == 0)) {                                                   \
          queue[i++] = '0' + abs((int)(temp % 10));                              \
          temp /= 10;                                                            \
        }                                                                        \
        while (i > 0) {                                                          \
          putchar(queue[--i]);                                                   \
        }                                                                        \
      }                                                                          \
      putchar('\n');                                                             \
    } while (0)   
  /*
  以下三个等价 __int128 <=> signed __int128 <=> __int128_t
  __int128 是一种扩展的整数类型，提供了128位的整数，在某些编译器中（例如GCC和Clang），可以使用这种类型来处理比标准整数类型（如int、long 或 long long）更大的整数 
  大小：__int128 类型占用128位，也就是16字节 __int128 类型的范围是从 -(2^127) 到 2^127 -1，适用于有符号整数。对于无符号整数（unsigned __int128），范围是从 0 到 2^128- 1 
  支持的编译器：主要支持GCC和Clang。但其他编译器可能不支持这种类型。
  使用方法：可以像使用其他整数类型一样使用__int128，但要注意它没有标准库的直接支持，尤其是I/O操作需要自定义输入输出
  */
  __int128 squirrel = ((__int128)1 << 127) - 1;
  signed __int128 pangolin = ((__int128)1 << 127) - 1;
  __int128_t sloth = -((__int128_t)1 << 127);
  print_pink("squirrel number = "); PRINT_INT128(squirrel);                             // 自定义打印I/O输出
  print_pink("pangolin number = "); PRINT_INT128(pangolin);                             // 自定义打印I/O输出
  print_pink("sloth number = "); PRINT_INT128(sloth);                                   // 自定义打印I/O输出
  print_pink("pangolin number = %lld.\n", pangolin);                                    // 溢出无法表示
  print_pink("pangolin large number = %llu\n", (unsigned long long)(pangolin >> 64));   // 打印高64位
  print_pink("pangolin lower half = %llu\n", (unsigned long long)pangolin);             // 打印低64位

  /*
  无符号类型 unsigned __int128 <=> __uint128_t
  */
  unsigned __int128 raccoon = (unsigned __int128)(squirrel + pangolin);                 // 可以进行四则运算
  __uint128_t otter = ((__uint128_t)1 << 128) - 1;                                      // 获取最大值
  print_pink("raccoon number = "); PRINT_UINT128(raccoon);                              // 溢出无法表示
  print_pink("otter number = "); PRINT_UINT128(otter);                                  // 打印极限最大值
  print_pink("raccoon number = %lld.\n", raccoon);                                      // 溢出无法表示

  // 循环 -> 优化递归
  /*
  int print_int128(__int128 data) {
    if (data == 0) {
      putchar('0');
      goto end;
    }
    char queue[40];
    if (data < 0) {
      putchar('-');
    }
    int i = 0;
    __int128 temp = data;
    while (!(temp == 0)) {
      queue[i++] = '0' + abs((int)(temp % 10));
      temp /= 10;
    }
    while (i > 0) {
      putchar(queue[--i]);
    }
  end:
    putchar('\n');
    return 0;
  }
  // 递归 -> 不能优化为尾递归
  void print_int128_st1(__int128 temp) {
    if (temp == 0) {
      return;
    }
    print_int128_st1(temp / 10);
    putchar(abs((int)(temp % 10)) + '0');
  }
  int print_int128_st0(__int128 data) {
    if (data == 0) {
      putchar('0');
      goto end;
    }
    if (data < 0) {
      putchar('-');
    }
    __int128 temp = data;
    print_int128_st1(temp);
  end:
    putchar('\n');
    return 0;
  } 
  */

#endif // INT128 __int128 类型

/* 打印十进制、八进制、十六进制占位符
  %d 十进制有符号整数 
  %lld long long 类型  
  %u 十进制无符号整数    
  %f 浮点数 
  %lf double类型   
  %s 字符串     
  %c 单个字符     
  %p 指针的值     
  %e 指数形式的浮点数     
  %x,%X 无符号以十六进制表示的整数    
  %o 无符号以八进制表示的整数    
  %g 自动选择合适的表示法
*/             

#ifdef DECLARA_INIT
  int bird;              // 声明单个变量，无初始化
  int fish, frog, snake; // 声明多个变量，无赋值
  bird = 0;              // 变量初始化

  int tortoise = 23;              // 声明单个变量，并初始化
  int butterfly = 34, bee = 45;   // 声明多个变量，并初始化
  int ant, spider = 56;

  print_pink("bird number = %d.\n", bird);
#endif // DECLARA_INIT 声明和初始化

  return 0;
}
