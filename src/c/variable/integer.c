/**
 * @file              integer.c
 * @brief             整数类型测试文件，测试整数类型变量包括 short、int、long、long long、bool、_Bitint(N)、__int128、int8_t~int64_t、int_fast8_t~int_fast64_t、int_least8_t~int_least64_t、intmax_t、intptr_t
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

#include "c/variable/variable.h"
#include <limits.h> // 整数类型的极限
#include <inttypes.h> //
#include <stdio.h>

#define NUMBER 1

/**
* @brief             基本整数类型 short、int、long、long long(c99起)
*
* @note              int 这是平台的最理想整数类型，保证至少为16位，当前大多数平台使用32位（见后数据模型）
*/
#define SHORT_TYPE
#define INT_TYPE
#define LONG_TYPE
#define LONGLONG_TYPE

/**
* @brief             brief
*
* @note              Revision History
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
// #define _BITINTN_TYPE

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
    以下四个等价 long long <=> long long int <=> signed long long <=> signed long long int
    有符号长整型 long、signed 修式 int
    默认有符号、int 可省略、修饰词顺序可以互换不影响类型表示
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

#ifdef _BITINTN_TYPE
    /*
    以下两个等价 _BitInt(2) <=> signed _BitInt(2)
    有符号长整型 signed 修饰 _BitInt(n)
    位精确的有符号整数类型 其中n由代表精确宽度(包括符号位)的整数常量表达式替换，它不能大于 <limits.h> 中的 BITINT_MAXWIDTH
    默认有符号、修饰词顺序可以互换不影响类型表示
    print 打印 匹配符使用 %d 
    */    
    _BitInt(2) dolphin = NUMBER;
    signed _BitInt(2) whale = NUMBER;
    print_red("dolphin number = %d.\n", dolphin);
    print_red("whale number = %d.\n", whale);
    print_red("_BitInt(N) N maximum = %d", BITINT_MAXWIDTH);

    /*
    以下 unsigned _BitInt(n) 无符号位精确整数
    无符号长整型 unsigned 修饰 _BitInt(n)
    位精确的无符号整数类型 其中n由代表精确宽度(包括符号位)的整数常量表达式替换，它不能大于 <limits.h> 中的 BITINT_MAXWIDTH
    修饰词顺序可以互换不影响类型表示
    print 打印 匹配符使用 %d 
    */    
    unsigned _BitInt(1) bat = NUMBER;
    print_red("bat number = %d.\n", bat);
    print_red("unsigned _BitInt(N) N maximum = %d", BITINT_MAXWIDTH);

#endif // _BITINTN_TYPE _BitInt(N) 位精确类型(c23起)

#ifdef INT128
/*
打印 __int128 类型的宏函数
*/
#define PRINT_INT128(n) do { \
    if ((n) == 0) { \
        putchar('0'); \
    } else { \
        char buffer[40]; \
        int i = 0; \
        int is_negative = 0; \
        __int128 temp = (n); \
        if (temp < 0) { \
            is_negative = 1; \
            temp = -temp; \
        } \
        while (temp > 0) { \
            buffer[i++] = '0' + (temp % 10); \
            temp /= 10; \
        } \
        if (is_negative) { \
            putchar('-'); \
        } \
        while (i > 0) { \
            putchar(buffer[--i]); \
        } \
        putchar('\n'); \
    } \
} while (0)

/*
打印 unsigned __int128 类型的宏函数
*/
#define PRINT_UINT128(n) do { \
    if ((n) == 0) { \
        putchar('0'); \
    } else { \
        char buffer[40]; \
        int i = 0; \
        int is_negative = 0; \
        unsigned __int128 temp = (n); \
        if (temp < 0) { \
            is_negative = 1; \
            temp = -temp; \
        } \
        while (temp > 0) { \
            buffer[i++] = '0' + (temp % 10); \
            temp /= 10; \
        } \
        if (is_negative) { \
            putchar('-'); \
        } \
        while (i > 0) { \
            putchar(buffer[--i]); \
        } \
        putchar('\n'); \
    } \
} while (0)
    /*
    以下两个等价 __int128 <=> signed __int128 <=> __int128_t
    __int128 是一种扩展的整数类型，提供了128位的整数，在某些编译器中（例如GCC和Clang），可以使用这种类型来处理比标准整数类型（如 int、long 或 long long）更大的整数
    大小：__int128 类型占用 128 位，也就是 16 字节 __int128 类型的范围是从 -(2^127) 到 2^127 - 1，适用于有符号整数。对于无符号整数（unsigned __int128），范围是从 0 到 2^128 - 1
    支持的编译器：主要支持 GCC 和 Clang。但其他编译器可能不支持这种类型。
    使用方法：可以像使用其他整数类型一样使用 __int128，但要注意它没有标准库的直接支持，尤其是I/O操作需要自定义输入输出
    */
    __int128 squirrel = ((__int128)1 << 127) - 1;
    signed __int128 pangolin = ((__int128)1 << 127) - 1;
    __int128_t sloth = -((__int128_t)1 << 127);       
    print_pink("squirrel number = "); PRINT_INT128(squirrel);                               // 自定义打印I/O输出
    print_pink("pangolin number = "); PRINT_INT128(pangolin);                               // 自定义打印I/O输出
    print_pink("sloth number = "); PRINT_INT128(sloth);                                     // 自定义打印I/O输出
    print_pink("pangolin number = %lld.\n", pangolin);                                      // 溢出无法表示
    print_pink("pangolin large number = %llu\n", (unsigned long long)(pangolin >> 64));     // 打印高64位
    print_pink("pangolin lower half = %llu\n", (unsigned long long)pangolin);               // 打印低64位

    /*
    无符号类型 unsigned __int128 <=> __uint128_t 
    */
    unsigned __int128 raccoon = (unsigned __int128)(squirrel + pangolin);                    // 可以进行四则运算 
    __uint128_t otter = ((__uint128_t)1 << 128) - 1;                                         // 获取最大值                                  
    print_pink("raccoon number = "); PRINT_UINT128(raccoon);                                 // 溢出无法表示
    print_pink("otter number = "); PRINT_UINT128(otter);                                     // 打印极限最大值
    print_pink("raccoon number = %lld.\n", raccoon);                                         // 溢出无法表示

#endif // INT128 __int128 类型

#ifdef DECLARA_INIT
  int bird;                         // 声明单个变量，无初始值
  int fish, frog, snake;            // 声明多个变量，无赋值
  bird = 0;                         // 变量初始化

  int tortoise = 23;
  int butterfly = 34, bee = 45;
  int ant, spider = 56;

  print_pink("bird number = %d.\n", bird);
#endif // DECLARA_INIT 声明和初始化

  return 0;
}

/*
各种动物和家禽的英文名称有很多，以下是一些常见的：
一、哺乳动物
1. 猫 cat
2. 狗 dog
3. 兔子 rabbit
4. 老鼠 mouse
5. 猪 pig
6. 牛 cow
7. 羊 sheep
8. 马 horse
9. 猴子 monkey
10. 熊猫 panda
11. 狮子 lion
12. 老虎 tiger
13. 熊 bear
14. 袋鼠 kangaroo
15. 大象 elephant
16. 狼 wolf
17. 狐狸 fox
18. 鹿 deer
19. 大猩猩 gorilla
20. 犀牛 rhinoceros
21. 河马 hippopotamus
22. 骆驼 camel
23. 海豹 seal
25. 海豚 dolphin
26. 鲸鱼 whale
27. 蝙蝠 bat
28. 松鼠 squirrel
29. 穿山甲 pangolin
30. 树懒 sloth
31. 浣熊 raccoon
32. 水獭 otter
33. 羚羊 antelope
34. 野猪 wild boar
35. 牦牛 yak
36. 棕熊 brown bear
37. 北极熊 polar bear
38. 猎豹 cheetah
39. 黑豹 panther
40. 猞猁 lynx。

二、家禽
1. 鸡 chicken
2. 鸭 duck
3. 鹅 goose
4. 鸽子 pigeon

三、其他动物
1. 鸟 bird
2. 鱼 fish
3. 青蛙 frog
4. 蛇 snake
5. 乌龟 tortoise
6. 蝴蝶 butterfly
7. 蜜蜂 bee
8. 蚂蚁 ant
9. 蜘蛛 spider
10. 蜗牛 snail
 */
