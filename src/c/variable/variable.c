#include "c/variable/variable.h"
#include "c/variable/varlimits.h"
#include "colorfmt.h"

// 定宽整数类型 (C99起)
#include <inttypes.h>
#include <stdint.h>
// 整数类型的极限 核心语言整数类型的极限
#include <limits.h>
#include <float.h>
// bool类型头文件
#include <stdbool.h>
#include <stdio.h>

// #define ASCII_PRINT
// #define LIMIT_PRINT
#define NUM 100
#define DEC_NUM 100.55
#define PRINT_DOC
#define PRINT_CODE
#define ZERO 0

extern int limitb;

// 打印 ascii 字符码表
void printacsii(void) {
  printf("ASCII:\n");
  for (int i = 32; i < CHAR_MAX; i++) {
    printf("%c", i);
    printf(i % 16 == 15 ? "\n" : " ");
  }
  printf("\n");
}

int varle(void) {

#if 0
  // 单行注释
  
  /*
  多行注释
  */

#if 0
    printf("宏排除机制排除方式\n");
#endif
  
  if (0) {
    printf("if 条件排除方式\n");
  }

#endif

/*
ASCII:
  ! " # $ % & ' ( ) * + , - . /
0 1 2 3 4 5 6 7 8 9 : ; < = > ?
@ A B C D E F G H I J K L M N O
P Q R S T U V W X Y Z [ \ ] ^ _
` a b c d e f g h i j k l m n o
p q r s t u v w x y z { | } ~ 
*/

/*
编译器如同下列阶段严格以此顺序进行一般来处理 C 源文件。实际的实现可以组合，或以不同方式处理这些动作，只要行为相同
1、将源文件的字节映射为源字符集的字符、gcc 和 clang 用 -finput-charset 指定源字符集的编码
2、处理删除反斜杠和换行符
3、将源文件分解为注释、空白字符序列和预处理记号(头文件名、标识符、预处理数字、字符常量与字符串字面量、运算符与标点、单独非空白字符)、空格字符替换每段注释、保持换行符
4、*执行预处理器生成预处理文件，预处理后的文件通常以`.i`为后缀
5、将字符常量及字符串字面量中的所有字符及转义序列从源字符集转换成执行字符集、gcc 和 clang 用-fexec-charset 和 -fwide-exec-charset 执行字符集的编码
6、连接相邻的字符串字面量
7、*发生编译，编译器对进行语法和语义分析，将其作为编译单元编译生成汇编代码，生成的汇编代码文件通常以`.s`为后缀
8、*发生汇编，汇编器将汇编代码转换为机器代码生成目标文件，生成的目标文件通常以`.o`为后缀
9、*发生链接，链接目标文件、系统的标准启动代码、库文件，生成可执行文件或库
*/

/*
标点:
# ## 预处理定义运算
{} [] ()
:: ; ? : ... , . -> 
+ - * / % = += -= *= /= %= ^= &= |= == != ++ -- 算术运算 *指针变量定义引用
>> << <<= >>= 移位运算
~ ^ & |  位运算 &取址运算
< > <= >= 比较运算
! && ||  逻辑运算
*/

/*
标识符:
标识符是数字、下划线、小写及大写拉丁字母和以\u及\U转义记号指定的，合法的标识符必须以非数字字符开始

保留标识符： 作为关键词的标识符、以下划线开始的外部标识符、标准库所定义的所有外部标识符、库中的保留与潜在保留标识符

翻译限制： 尽管标识符长度上无特定的限制，一些早期编译器还是在标识符中的有效起始字符数上有限制，而链接器在带外部链接的名称上加上了更严格的限制。
*/ 

/*
作用域: 
作用域是指程序中变量的可见性或访问权限范围
C程序中出现的每个标识符都仅在一些可能不连续的部分可见可使用，这些部分被称为其作用域
C拥有四种作用域：块作用域、文件作用域、函数作用域、函数原型作用域

嵌套作用域：内层作用域中的声明隐藏外层作用域中的声明

块作用域：在声明点开始，在声明于其中的块或语句的结尾结束、块作用域变量默认无链接并拥有自动存储期
文件作用域：在任何块或形参列表外声明的任何标识符的作用域，在声明点开始，翻译单元(一个翻译单元通常指的是一个源文件以及它所包含的所有头文件的内容经过预处理后的结果)尾结束、文件作用域的标识符默认拥有外部链接并拥有静态存储期
函数作用域：声明于函数内部，在该函数中的所有位置（所有嵌套块中，其自身声明前后）都在作用域内，任何语句前的冒号字符前的标识符若不用于其他用途则隐式声明一个标号，标号具有特定的作用域规则并且可以通过特定的语法隐式声明。这种标号通常用于实现跳转语句（如 goto）的目标位置等用途
函数原型作用域：非函数定义的函数声明的形参列表中引入的名称的作用域，在函数声明器的结尾结束。若声明中有多个或嵌套声明器，则作用域在最近的封闭函数声明符的末尾结束

声明点：
结构体、联合体及枚举标签的作用域，在声明该标签的类型指定符中的标签出现后立即开始
枚举常量的作用域，在枚举项列表中其定义枚举项的出现后立即开始
任何其他标识符的作用域从其声明符的末尾之后开始，如果有初始化则在初始化之前开始

C中循环体内的局部变量，能隐藏声明于for循环的初始化子句中的变量（其作用域为嵌套的），但C++中不能如此。
不同于C++，C无结构体作用域：声明于struct/union/enum声明内的名称在结构体声明所在的相同作用域（除了数据成员在其成员命名空间中）
*/ 

/*
生存期、生命周期: 
生存期是指变量在内存中存在的时间，从变量创建到销毁的整个过程
C中每个对象存在、拥有常地址、保有其最近一次存储值（除非其值不确定），对于VLA还有保有其大小(C99起)的程序执行部分，被称作该对象的生存期。

对于声明有自动auto、静态static及线程存储期的对象，生存期等于其存储期（注意非VLA和VLA自动存储期的区别）
对于拥有分配存储期的对象，其生存期始于分配函数的返回（包含从realloc返回），终于realloc或解分配函数的调用。注意因为分配的对象没有声明类型，首次访问该对象所用的左值表达式类型会成为其有效类型。
在生存期外访问对象是未定义行为、指向生存期结束的对象（或该对象后一位置）的指针拥有不确定值

临时生存期: 
具有数组成员（直接成员或嵌套结构体/联合体成员）的结构体和联合体对象，如果由非左值表达式指定，则具有临时生存期。临时生存期从引用此类对象的表达式被求值时开始，在（C11之前）下一个序列点结束，或者在（自C11起）包含的完整表达式或完整声明符结束时结束。
任何尝试修改具有临时生存期的对象的行为都会导致未定义的行为。
序列点是一个非常重要的概念，它定义了在程序执行时，某些操作的执行顺序和表达式的求值顺序。序列点可以确保在某些关键时刻，所有的副作用（如变量的赋值、自增操作等）都已经完成，这有助于避免未定义行为和不确定的计算顺序。
*/

/*
查找与命名空间: 
C语言中，标识符是用来命名变量、函数、类型等的符号。当你在代码中遇到一个标识符时，编译器需要知道这个标识符代表什么。为了做到这一点，编译器会根据标识符的使用方式和其作用域（scope）来定位其定义。C语言将所有标识符分为不同的类别，这些类别被称为“命名空间”。每个命名空间中的标识符是独立的，这意味着同一个名字在不同的命名空间中可以代表不同的东西
当在C程序中遇到一个标识符时，会进行查找以定位引入该标识符且当前处于作用域内的声明。如果这些标识符属于不同的类别（称为命名空间），C 允许同一标识符的多个声明同时处于作用域内

标号命名空间：所有声明为标号的标识符，用于goto语句的标号
标签名：所有声明为结构体、联合体及枚举类型名称的标识符。注意所有这三种标签共享同一命名空间
成员名：所有声明为结构体或联合体之一的成员的标识符。每个结构体和联合体引入它自己的这种命名空间
全局属性命名空间：标准定义的属性记号或实现定义的属性前缀(C23起)
非标准属性名：属性前缀之后的属性名。每个属性前缀均拥有它所引入的实现定义属性所在的分离的命名空间(C23起)
所有其他标识符：称之为“通常标识符”以别于 (1-5)（函数名、对象名、typedef名、枚举常量）

在查找点，根据使用方式确定标识符所属的命名空间
作为 goto 语句操作数出现的标识符，会在标号命名空间中查找
关键词 struct、union 或 enum 之后的标识符，会在标签命名空间中查找
跟在成员访问或通过指针运算符进行成员访问之后的标识符，将在由成员访问运算符的左操作数确定的类型的成员名称空间中进行查找
直接出现于属性说明符（[[...]]）中的标识符，会在全局属性命名空间中查找
后随属性前缀之后的 :: 记号的标识符，会在属性前缀所引入命名空间中查找
所有其他标识符，会在通常命名空间中查找

注解 宏名不是任何命名空间的一部分，因为语义分析前，预处理器会替换它们
一个常见举措是将结构体/联合体/枚举的名称注入通常命名空间，以typedef声明
众所周知的一个同一标识符横跨两个命名空间使用的示例是POSIX头文件sys/stat.h中的标识符stat。它用作通常标识符时指名一个函数，而在用作标签时指代一个结构体。
C语言枚举常量的命名空间与一般标识符的命名空间是相同的，而不像C++那样属于特定枚举类型的命名空间
*/

/*
类型: 
对象、函数和表达式拥有称为类型的属性，它确定存储于对象或表达式求值所得的二进制值的判读方式

类型分类
类型：void
基本类型：
- 字符类型：char
- 有符号整数类型：标准 signed char、short、int、long、long long(C99起)、位精确 _BitInt(N)(C23 起)、扩展实现定义 __int128(C99起)
- 无符号整数类型：标准 _Bool、(C99起)unsigned char、unsigned short、unsigned int、unsigned long、unsigned long long(C99起)、位精确 unsigned _BitInt(N)(C23 起)、扩展实现定义 __uint128(C99起)
- 浮点数类型：二进制浮点数类型 float、double、long double、十进制实浮点数类型 _Decimal32、_Decimal64、_Decimal128(C23起)
- 复数类型：float _Complex、double _Complex、long double _Complex(C99起)
- 虚数类型：float _Imaginary、double _Imaginary、long double _Imaginary(C99起)
枚举类型：enum
派生类型：数组类型、结构体类型、联合体类型、函数类型、指针类型、原子类型_Atomic(C11起)
对于上面列出的每个类型可以存在数种其类型的限定版本，对应const、volatile和restrict限定符的一、二或全部三个组合（在限定符的语义所允许处）

类型组别
对象类型：所有不是函数类型的类型
字符类型：char、signed char、unsigned char
整数类型：char、有符号整数类型、无符号整数类型、枚举类型
实数类型：整数类型和实浮点数类型
算术类型：整数类型和浮点数类型
标量类型：算术类型和指针类型以及nullptr_t(C23起)
聚合类型：数组类型和结构体类型
派生声明符类型：数组类型、函数类型和指针类型
构造一个完整对象类型，使其对象表示中的字节数不能以size_t类型（即sizeof运算符的结果类型）表示，包括在运行时构成这种VLA类型(C99起)是未定义行为。

兼容类型
C程序中，在不同翻译单元中涉及同一对象或函数的声明，不必拥有相同类型。它们只需要拥有相似的类型，正式而言即兼容类型。同样的规则适用于函数调用和左值访问；实参类型必须与形参类型兼容，而左值表达式类型必须与被访问对象的类型兼容。
同一类型（同名或由typedef引入的别名）
使用相同的cvr类型限定符限定的类型，并且被限定的类型是兼容的类型
指针类型，并指向兼容类型
数组类型，其元素类型兼容，且若都拥有常量大小，则大小相同，注意：未知边界数组与任何兼容元素类型的数组兼容。VLA 与任何元素类型兼容的数组兼容
结构体/联合体/枚举类型，若一者以标签声明，则另一者必须以同一标签声明、若它们都是完整类型，则其成员必须在数量上准确对应，各自以兼容类型声明，并各自拥有匹配的名称、若它们都是枚举，则对应成员亦必须拥有相同值、若它们是结构体或联合体对应的元素必须以同一顺序声明、对应的位域必须有相同宽度
枚举类型，一者为枚举类型而另一者为该枚举的底层类型
函数类型，且其返回类型兼容，都使用形参列表，形参数量（包括省略号的使用）相同且其对应形参，在应用数组到指针和函数到指针类型调整及剥除顶层限定符后拥有相同类型
类型char既不与signed char兼容，也不与unsigned char兼容
若涉及同一对象或函数的两个声明不使用兼容类型，则程序的行为未定义
C++没有兼容类型的概念。在不同翻译单元中声明二个兼容但不等同的类型的C程序不是合法的C++程序

合成类型
从两个兼容的类型可以构造合成类型；它是与两个类型兼容，并满足下列条件的类型

不完整类型

类型名
*/

#ifdef PRINT_DOC
  print_green("变量基本类型:\n");
  printf(
      "根据变量所占字节宽度的类型分为:\n 字符型: char \n 整数型: int (其中 "
      "shor、long、long "
      "long 用于修饰int可以组成 short int、long int、long long int) "
      "\n 浮点型: float、double、long double\n 布尔型: _Bool(c99) \n 复数型: "
      "_Complex \n 虚数型: _Imaginary \n");

  printf("根据有无符号分为:\n 有符号: signed(默认有符号可省略c99) "
         "\n 无符号: unsigned\n\n");

  print_green("变量基本类型标准组合:\n");
  printf(" 有符号整数类型: 标准: char、short、int、long、long long(C99起).\n");
  printf(" 无符号整数类型: 标准: _Bool、(C99起)unsigned char、unsigned "
         "short、unsigned int、unsigned long、unsigned long long(C99起).\n");
  printf(" 浮点数类型: 二进制浮点数类型: float、double、long double.\n");
  printf(" 复数类型: float _Complex、double _Complex、long double "
         "_Complex(C99起).\n");
  printf(" 虚数类型: float _Imaginary、double _Imaginary、long double "
         "_Imaginary(C99起).\n\n");

  print_green("变量基本类型(位精确、实现定义、定宽整数类型):\n");
  printf(" 位精确: _BitInt(1)、unsigned _BitInt(1) (C23起).\n");
  printf(" 实现定义: __int128、__uint128. (C99起)\n\n");

  print_green("定宽整数类型:\n");
  printf("有符号定宽整数类型: "
         "int8_t~int64_t(宽度正好是8~64位的有符号整数类型)、int_fast8_t~int_"
         "fast64_t(宽度至少有8~64位的最快的有符号整数类型)、int_least8_t~int_"
         "least64_"
         "t(宽度至少有8~64位的最小的有符号整数类型)、intmax_t、intptr_t "
         "(C99起).\n");
  printf("无符号定宽整数类型: "
         "uint8_t~uint64_t、uint_fast8_t~uint_fast64_t、uint_least8_t~uint_"
         "least64_t、uintmax_t、uintptr_t (C99起).\n\n");

#endif

#ifdef PRINT_CODE
  char c = 'A'; // <=> signed char c = 'A'; 可省略signed
  signed char c1 = 'A';
  unsigned char c2 = 'A';
  printf("char min num is %d, char max num is %d, size num %lu is btye, char "
         "is %d bit.\n",
         CHAR_MIN, CHAR_MAX, sizeof(c), CHAR_BIT);
  printf("uchar max num is %d. \n\n", UCHAR_MAX);

  short st = NUM; // <=> signed short st = NUM; 可省略int 可省略signed
  short int st1 = NUM;          // <=> short st1 = NUM; 可省略int
  signed short int st2 = NUM;   // <=> signed short st2 = NUM; 可省略int
  unsigned short int st3 = NUM; // <=> unsigned short st3 = NUM; 可省略int
  printf("short min num is %d, short max num is %d, size num %lu is btye.\n",
         SHRT_MIN, SHRT_MAX, sizeof(st));
  printf("ushort max num is %d. \n\n", USHRT_MAX);

  int it = NUM; // <=> signed int it = NUM; 可省略signed
  signed int it1 = NUM;
  unsigned int it2 = NUM;
  printf("int min num is %d, int max num is %d, size num %lu is btye.\n",
         INT_MIN, INT_MAX, sizeof(it));
  printf("uint max num is %u. \n\n", UINT_MAX);

  long lg = NUM;      // <=> signed long lg = NUM; 可省略int 可省略signed
  long int lg1 = NUM; // <=> long lg1 = NUM; 可省略int
  signed long int lg2 = NUM;   // <=> signed long lg2 = NUM; 可省略int
  unsigned long int lg3 = NUM; // <=> unsigned long lg3 = NUM; 可省略int
  printf("long min num is %ld, long max num is %ld, size num %lu is btye.\n",
         LONG_MIN, LONG_MAX, sizeof(lg));
  printf("ulong max num is %lu. \n\n", ULONG_MAX);

  long long llg = NUM; // signed long long llg = NUM; 可省略int 可省略signed
  long long int llg1 = NUM;        // <=> long long llg1 = NUM; 可省略int
  signed long long int llg2 = NUM; // <=> signed long long llg2 = NUM; 可省略int
  unsigned long long int llg3 =
      NUM; // <=> unsigned long long llg3 = NUM; 可省略int
  printf("long long min num is %lld, long long max num is %lld, size num %lu "
         "is btye.\n",
         LLONG_MIN, LLONG_MAX, sizeof(llg));
  printf("ullong max num is %llu. \n\n", ULLONG_MAX);

  _Bool bl = true;
  _Bool bl2 = false;
  printf("bool size num %ld\n\n", sizeof(bl));

  __int128 i128 = NUM;
  unsigned __int128 ui128 = NUM;
  printf("__int128 size num %lu is btye, unsigned __int128 size num %lu is "
         "btye.\n\n",
         sizeof(i128), sizeof(ui128));

  int64_t i6t = NUM;
  printf(
      "int64_t min num is %ld, int64_t max num is %ld, size num %lu byte.\n\n",
      INT64_MIN, INT64_MAX, sizeof(i6t));

  uint64_t ui6t = NUM;
  printf("uint64_t max num is %ld, size num %lu byte.\n\n", UINT64_MAX,
         sizeof(ui6t));

  int_fast64_t if6t = NUM;
  printf("int_fast64_t min num is %ld, int_fast64_t max num is %ld, size num "
         "%lu byte.\n\n",
         INT_FAST64_MIN, INT_FAST64_MAX, sizeof(if6t));

  uint_fast64_t ufi6t = NUM;
  printf("uint_fast64_t max num is %lu, size num %lu byte.\n\n",
         UINT_FAST64_MAX, sizeof(ufi6t));

  int_least64_t il6t = NUM;
  printf("int_least64_t min num is %ld, int_least64_t max num is %ld, size num "
         "%lu byte.\n\n",
         INT_LEAST64_MIN, INT_LEAST64_MAX, sizeof(il6t));

  uint_least64_t uli6t = NUM;
  printf("uint_least64_t max num is %lu, size num %lu byte.\n\n",
         UINT_LEAST64_MAX, sizeof(uli6t));

  float ft = DEC_NUM;
  double de = DEC_NUM;
  long double lde = DEC_NUM;

  print_blue("limitb = %d\n",limitb);
#endif

#ifdef ASCII_PRINT
  printacsii();
  printf("\n\n");
#endif

#ifdef LIMIT_PRINT
  varlim();
  printf("\n\n");
#endif

  return 0;
}
