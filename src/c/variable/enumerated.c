/**
* @file              enumerated.c
* @brief             枚举类型 代码文件，测试枚举类型 enum
* @version           0.2
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.13
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.13 <td>0.1             <td>brightl         <td>全局、局部枚举声明方式、固定底层类型、无固定底层类型
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>枚举类型使用特性、存储大小、枚举常量类型推导
* </table>
*/

#include "c/variable/variable.h"
#include <stdalign.h>     // 内存对齐定义的头文件
#include <stdio.h>

/**
* @brief             命名的枚举类型、匿名的枚举类型、带有显式值的枚举类型、带有属性声明符的枚举类型、没有固定底层类型的枚举、固定底层类型的枚举
*
* @note              在 C 语言中，枚举类型（enum）用来定义一组命名的整型常量，使代码更具可读性和可维护性。枚举类型的值通常是整数，从0开始递增，不过也可以显式地为每个枚举常量赋值
*/
#define ENUM_TYPE

#ifdef ENUM_TYPE
/*
枚举类型是独立的类型，其值为包含所有其显示命名的常量（枚举常量）的底层类型的值
enum 属性声明符序列(可选) 标识符(可选) { 枚举项列表 } 声明没有固定底层类型的枚举，其中枚举项列表是枚举项的逗号分隔列表（允许尾随的逗号）(C99 起)，每个 枚举项 拥有形式：枚举常量 属性声明符序列 (可选)、枚举常量 属性声明符序列 (可选) = 常量表达式
enum 属性声明符序列(可选) 标识符(可选) : 类型 { 枚举项列表 } 声明固定底层类型为 类型 的枚举(C23起)，其中枚举项列表是枚举项的逗号分隔列表（允许尾随的逗号）(C99 起)，每个 枚举项 拥有形式：枚举常量 属性声明符序列 (可选)、枚举常量 属性声明符序列 (可选) = 常量表达式
标识符, 枚举常量：是由此声明引入的标识符
常量表达式：整数常量表达式，其值以 int 类型的值表示(C23前)、若枚举具有固定底层类型则其可以表示为类型的值(C23起)
属性声明符序列：(C23)可选的属性列表，若出现在 enum 后则应用到整个枚举，若出现在枚举常量后则应用到枚举项

? 枚举类型为什么只占4个字节(默认int类型的情况下) ？枚举的大小是按照 enum 中元素最大值所占的内存大小来决定的，不像结构体那样有多少个元素就按各个元素所占字节叠加、当枚举成员的值小于 4 个字节时，占 4 个字节、当枚举成员的值大于 4 个字节时，最大只能是 long long 类型，占 8 个字节
在枚举说明符的主体中出现的每个枚举常量在封闭作用域中成为一个整数常量，类型为 int（C23前），并且可以在需要整数常量的任何时候使用（例如，作为 case 标签或作为非可变长度数组大小）
C语言中枚举常量（enumeration constant）的类型推导规则 6条
C23标准中，枚举类型的兼容类型和底层类型的选择规则

命名的枚举类型 enum color {RED, GREEN, BLUE}; color 是枚举类型的名称、RED, GREEN, BLUE 是枚举常量
匿名的枚举类型 enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY}; 省略了枚举类型的名称，所以这是一个匿名的枚举类型、枚举常量是 MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
带有显式值的枚举类型 enum day {MON = 1, TUES, WEDNES, THURS, FRI, SATUR, SUN}; 定义了一个枚举类型 day，包含七个枚举常量，枚举常量 MON 被显式赋值为 1 其余的枚举常量 TUES, WEDNES, THURS, FRI, SATUR, 和 SUN 没有显式赋值，但它们会自动递增取值
带有属性声明符的枚举类型 enum __attribute__((aligned(8))) log_aligned {INFO, WARN, ERROR}; 全局带有属性声明符的枚举类型 __attribute__((aligned(8))) 是 GCC 扩展的属性语法，需要在类型名称前使用，为枚举类型设置对齐方式，枚举常量是 INFO, WARN, ERROR
*/
enum color {RED, GREEN, BLUE}; // 全局命名的枚举类型
enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY}; // 全局匿名的枚举类型
enum day {MON = 1, TUES, WEDNES, THURS, FRI, SATUR, SUN}; // 全局带有显式值的枚举类型
enum __attribute__((aligned(4))) log_aligned {INFO, WARN, ERROR}; // 全局带有属性声明符的枚举类型 __attribute__((aligned(8))) 是 GCC 扩展的属性语法，需要在类型名称前使用，为枚举类型设置对齐方式，但是，当该属性用于枚举类型时，并不能达到预期效果。原因在于，枚举类型的对齐方式是由编译器决定的，并且编译器通常会根据枚举的基础类型（通常是 int）来选择对齐方式
// enum __attribute__((packed)) Status : uint8_t { OK = 0, WARNING = 1, ERROR = 255 }; 声明固定底层类型为 uint8_t 的枚举类型 (C23起)
typedef enum book {C, CPLUSPLUS, GO, RUST, PYTHON} program_Book; // 使用 typedef 重新定义 enum 类型

#endif // ENUM_TYPE enum 类型

/**
* @brief             枚举类型确实是一种独立的类型，它的值是从其定义的枚举常量中选择的。枚举类型的底层类型通常是 int，但这可以根据编译器的实现和具体的需求有所不同。在标准C中，枚举类型的底层类型必须能够表示枚举常量的所有值
* @return  int       Return Description
*
* @note              enum 属性声明符序列(可选) 标识符(可选) { 枚举项列表 } ，属性声明符序列(可选)：可以包括属性或修饰符，但在大多数情况下，不需要特殊属性，标识符(可选)：枚举类型的名称。如果省略，则定义一个匿名的枚举类型，枚举项列表：包含一组枚举常量，常量之间用逗号分隔
*/
int enumerated_fn(void) {
#ifdef ENUM_TYPE
  /*
  声明枚举类型打印输出
  */
  enum color c = RED;                           // 声明一个 color 枚举类型的变量
  int today = MONDAY;                           // 使用匿名枚举类型的值
  enum day tday = WEDNES;                       // 声明一个 day 枚举类型的变量
  enum log_aligned log_level = INFO;            // 声明一个 log_aligned 枚举类型的变量
  print_purple("The value of c: %d %d.\n", c, RED); // 输出 c 的值，即 0
  print_purple("today is: %d %d.\n", today, MONDAY); // 输出 today 的值，即 0
  print_purple("tday is day number: %d %d.\n", tday, WEDNES);  // 输出: 3
  print_purple("Log level value: %d %d.\n", log_level, INFO);  // 输出变量的值 // 输出: 0
  print_purple("Alignment of log_level: %zu.\n", __alignof__(log_level));  // 使用 GCC 特定的 __alignof__ 操作符获取对齐方式 输出: 8
  print_purple("color size of is %d. c is %d.\n",sizeof(enum color), sizeof(c));
  print_purple("day size of is %d. tday is %d.\n",sizeof(enum day), sizeof(tday));
  print_purple("log_aligned size of is %d. log_level is %d.\n",sizeof(enum log_aligned), sizeof(log_level));
  switch(c) // 作为 case 标签 使用
  {
  case RED:
      print_purple("color is red.\n");
      break;
  case GREEN:
      print_purple("color is green.\n");
      break;
  case BLUE:
      print_purple("color is blue.\n");
      break;
  }

  /*
  C语言中枚举常量（enumeration constant）的类型推导规则：
  1、如果是同一枚举常量的重新声明，则为先前声明的类型
  2、对于具有固定基础类型的枚举，则为枚举类型
  3、如果枚举器列表中没有先前的枚举常量，并且没有带有定义整数常量表达式的显式 =，则为 int
  4、如果使用 = 明确给出，并且整数常量表达式的值可以用 int 表示，则为 int
  5、如果使用 = 明确给出，并且整数常量表达式的值不能用 int 表示，则为整数常量表达式的类型
  6、上一个枚举常量的值的类型加上 1。如果这样的整数常量表达式会溢出或绕过前一个枚举常量的值（从加 1 开始），则该类型将采用以下任一类型：大小合适的有符号整数类型（不包括位精度有符号整数类型），能够表示前一个枚举常量的值加 1、大小合适的无符号整数类型（不包括位精度无符号整数类型），能够表示前一个枚举常量的值加 1
  如果要添加的前一个枚举常量是有符号整数类型，则选择有符号整数类型。如果前一个枚举常量是无符号整数类型，则选择无符号整数类型、如果之前没有大小合适的整数类型可以表示新值，则枚举没有能够表示其所有值的类型
  */ 
  enum color0 { RED };
  enum color1 { BLUE = RED };                                 // 1、同一枚举常量的重新声明 ：RED 的类型为 enum Color1
  // enum FixedEnum : unsigned int { A = 1, B = 2 };          // 2、固定基础类型的枚举 ：A 和 B 的类型为 unsigned int
  enum Example { X, Y, Z };                                   // 3、没有先前的枚举常量，没有带有定义整数常量表达式 ：X, Y, Z 都是 int 类型
  enum AnotherExample { M = 1000, N = 2000 };                 // 4、整数常量表达式的值可以用 int 表示 ：M 和 N 都是 int 类型
  enum BigValues { P = 2147483648 };                          // 5、整数常量表达式的值不能用 int ：P 的值超出 int 范围，会被推导为 long
  // enum OverflowExample { Q = 2147483647, R };              // 6、上一个枚举常量的值的类型加上 1 溢出 ：Q 是 int 类型, R = 2147483648, 所以 R 是 long 类型
  enum SignedExample { S = -1, T };                           // 前一个枚举常量是有符号整数类型 ：S 是 int 类型, 所以 T = 0 也是 int 类型
  // enum LargeRange { U = 9223372036854775807, V };          // 没有大小合适的整数类型可以表示新值 ：U 是 long long 类型, V = 9223372036854775808，没有更大的类型来表示
  
  /*
  C23标准中，枚举类型的兼容类型和底层类型的选择规则：
  1、每个无固定底层类型的(C23起)枚举类型与如下之一兼容：char、有符号整数类型或无符号整数类型（不包括 bool 和位精确整数类型）  
  2、对于任何枚举类型，哪一个类型是兼容的是实现定义的，但无论是那种类型，都必须有足以表示该枚举中所有枚举项的值
  3、对于所有具有固定底层类型的枚举，枚举的类型均与枚举的底层类型兼容
  4、没有固定底层类型的枚举类型，在其完成处枚举成员的类型为：如果枚举的所有值均可表示为一个 int 则为 int，否则，为枚举的类型
  5、所有枚举均有底层类型，可以通过用 enum-类型说明符 显式指定底层类型，并作为其固定底层类型，如果未显式指定，则其底层类型为枚举的兼容类型，它为有符号或无符号的整数类型 或 char (C23起)
  */
  enum Example1 { A1 = 1, B1 = 2 };                             // 1、兼容类型可以是 int 或 unsigned int 等
  enum Example2 { C2 = 1, D2 = 1000000 };                       // 2、假设编译器选择 int 作为兼容类型 兼容类型为 int
  // enum FixedBaseType : unsigned char { ET = 1, FT = 255 };   // 3、E 和 F 的类型为 unsigned char
  enum Example3 { G3 = 1, H3 = 2 };                             // 4、 G 和 H 的类型为 int
  enum Example4 { I4 = 2147483648 };                            // 4、I 的类型为 long 因为值超出 int 范围
  // enum FixedBaseType2 : short { JT = 1, KT = 32767 };        // 5、J 和 K 的底层类型为 short
  enum Example5 { L5 = 1, M5 = 2 };                             // 5、底层类型由实现决定，可以是 int

  /*
  1、若 枚举常量 后随 = 常量表达式 ，则其值为该常量表达式的值。若 枚举常量 没有后随 = 常量表达式 ，则其值是比同一枚举中前一枚举项的值大一的值。首个枚举项（若它不用 = 常量表达式 ）的值是零
  2、若使用 标识符 则其自身成为标签命名空间中枚举类型的名称，且需要使用关键词 enum （除非 typedef 到通常命名空间）
  3、枚举类型是整数类型，从而可以用于任何其他整数类型能用之处，包括隐式转换和算术运算符
  */
  enum Foo { A, B, C = 10, D, E = 1, F, G = F + C}; // A=0, B=1, C=10, D=11, E=1, F=2, G=12
  enum color2 { YELLOW, GREEN, PINK };
  enum color2 cl = YELLOW;                          // 需要使用关键词 enum  OK
  // color2 x = GREEN;                              // ERROR： color2 不在通常命名空间中
  typedef enum color2 color_t;                      // typedef 到通常命名空间
  color_t x = GREEN;                                // OK
  enum { ONE = 1, TWO } Example6;                   // 枚举类型是整数类型，从而可以用于任何其他整数类型能用之处
  long n = ONE;                                     // 提升
  double d = ONE;                                   // 转换
  Example6 = 1.2;                                   // 转换，Example6 现在是 ONE
  Example6 = Example6 + 1;                          // 转换，Example6 现在是 TWO   
  
  /*    
  引入枚举类型和一或多个枚举常量的声明亦可声明一或多个该类型的对象：引入枚举类型和一或多个枚举常量的声明时，可以同时声明一个或多个该枚举类型的对象。这意味着在定义枚举类型的同时，也可以创建该类型的变量，而不必分两步进行
  局部枚举变量 定义了一个枚举类型 zoo 和两个枚举变量 cats 和 catsp
  zoo 是枚举类型的名称、CAT, DOG, RABBIT 是枚举常量，且紧随声明 cats = CAT <=> enum zoo cats = CAT; 且紧随声明 *catsp = &cats <=> enum zoo *catsp = &cats;
  */
  enum zoo {CAT, DOG, RABBIT} cats = CAT, *catsp = &cats; // 局部枚举变量 定义了一个枚举类型 zoo 和两个枚举变量 cats 和 catsp
  print_purple("zoo cat of is: %d.\n", cats);
  print_purple("zoo cat of is: %d. ptr is %p.\n", *catsp, catsp); 
  print_purple("zoo size of is %d. cats is %d. catsp is %d.\n",sizeof(enum zoo), sizeof(cats), sizeof(catsp));
  enum TV { FOX = 11, CNN = 25, ESPN = 15, HBO = 22, MAX = 30, NBC = 32 };
  print_purple("FOX: \t%2d\n", FOX);

  /*
  枚举允许以比 #define 更加便利和结构化的方式生成具名常量；它们可见于调试器，遵循作用域规则，并且参与类型系统
  
  #define TEN 10
  struct S {int x : TEN;}; // OK
  
  enum {TEN = 10};
  struct S {int x : TEN;}; // 也 OK
  
  constexpr int TEN = 10;   (自 C23 起也可用 constexpr 来达成相同目的)
  struct S {int x : TEN;}; // 也 OK
  */
  enum {TEN = 10};           // 比 #define 更加便利和结构化的方式生成具名常量，这里定义了一个匿名枚举类型，并在其中定义了一个枚举常量 TEN，其值被初始化为 10。与使用 #define 来定义常量相比，枚举常量具有类型安全性（它属于特定的枚举类型，而不是简单的文本替换），并且在代码结构上更加清晰，便于维护和理解
  struct S {int x : TEN;} s; // 也 OK  struct S {int x : TEN;} s; 定义了一个结构体 S，其中包含一个成员变量 x，它是一个有符号整数类型（int），并且使用了位域（bit-field）的特性。这里指定 x 的位宽为 TEN，也就是 10 位。这意味着 x 在内存中只会占用 10 位的存储空间来存储其整数值，而不是通常情况下 int 类型所占用的完整位数（通常是 32 位，具体取决于编译器和平台）。然后声明了一个结构体变量 s 属于 S 类型
  s.x = 511;                 // 只有10位，不是32位4字节
  print_purple("s.x = %d.\n",s.x);

  /*
  由于 C 中结构体或联合体不建立其作用域，可以在前者(结构体或联合体)的成员说明中引入枚举类型及其枚举常量，而之后其(枚举类型)作用域与前者(结构体或联合体)相同
  */
  struct Element {
    int z;
    enum State {SOLID, LIQUID, GAS, PLASMA} state : 2;
  } oxygen = {8, GAS};
  enum State e = LIQUID; // OK 类型 enum State 与其枚举常量于此保持可见 和 struct Element 作用域与可见范围相同
  print_purple("enum State e = %d. enum State state = %d. PLASMA = %d.\n", e, oxygen.state, PLASMA); // 打印 1 2 3

#endif // ENUM_TYPE enum 类型

  return 0;
}