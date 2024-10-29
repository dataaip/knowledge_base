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
// 宽字符
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
#include <uchar.h>

#include <math.h>

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

宏名不是任何命名空间的一部分，因为语义分析前，预处理器会替换它们
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
对于上面列出的每个类型可以存在数种其类型的限定版本，对应const、volatile和restrict限定符的一个、两个或全部三个组合（在限定符的语义所允许处）

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
数组类型，其元素类型兼容，且若都拥有常量大小，则大小相同，注意：未知边界数组与任何兼容元素类型的数组兼容。VLA与任何元素类型兼容的数组兼容
结构体/联合体/枚举类型，若一者以标签声明，则另一者必须以同一标签声明、若它们都是完整类型，则其成员必须在数量上准确对应，各自以兼容类型声明，并各自拥有匹配的名称、若它们都是枚举，则对应成员亦必须拥有相同值、若它们是结构体或联合体对应的元素必须以同一顺序声明、对应的位域必须有相同宽度
枚举类型，一者为枚举类型而另一者为该枚举的底层类型
函数类型，其返回类型兼容，都使用形参列表，形参数量（包括省略号的使用）相同且其对应形参，在应用数组到指针和函数到指针类型调整及剥除顶层限定符后拥有相同类型
类型char既不与signed char兼容，也不与unsigned char兼容
若涉及同一对象或函数的两个声明不使用兼容类型，则程序的行为未定义
C++没有兼容类型的概念。在不同翻译单元中声明二个兼容但不等同的类型的C程序不是合法的C++程序

合成类型/复合类型
从两个兼容的类型可以构造合成类型；它是与两个类型兼容，并满足下列条件的类型
两个类型均为数组类型，已知常量大小的数组则合成类型为该大小的数组，一个类型是VLA其大小由表达式指定且表达式尚未求值则需要两个类型的合成类型的程序有未定义行为，一个类型为已指定大小的VLA则合成类型为该大小的VLA，一个类型为未指定大小的VLA则合成类型为未指定大小的VLA，两个数组类型都有未知大小则合成类型为未知大小的数组，合成类型的元素类型是两个元素类型的合成类型
一个类型是有形参类型列表（函数原型）的函数类型，则合成类型为有该形参类型列表的函数原型(C23前)
两个类型均为有形参类型列表的函数类型，合成类型的形参类型列表中的每个形参类型，是对应形参的合成类型，这些规则递归地应用到两个类型的派生来源类型
在一个作用域中声明的具有内部或外部链接的标识符，如果该标识符的先前声明可见并且先前的声明指定了内部或外部链接，那么在后续声明中该标识符的类型将变为合成类型

不完整类型
不完整类型是一种对象类型，它缺乏足够的信息来确定该类型对象的大小。不完整类型可能在翻译单元的某个时刻被补全。
void类型不完整：此类型不能完整
数组类型不完整：大小未知的数组之后指定大小的声明能使之完整
内容未知的结构体或联合体类型，可在同一作用域的后续声明中通过定义其内容的相同结构体或联合体声明来完成。

类型名
在除声明之外的语境中也可能需要指名某个类型，这些情况下使用类型名即类型说明符和类型限定符的列表，后随声明符它在文法上与会用来声明此类型的单个对象或函数的列表完全相同，除了省略掉其中的标识符
除了围绕标识符的冗余括号，其它在类型名中有意义并表示不指定形参的函数
类型名可用于下列场合，cast、sizeof、无名复合字面量(C99起)、_Alignof、_Alignas、_Atomic(用作类型说明符时)(C11起)
类型名称可以用来引入新类型
*/

/*
算术类型: 
布尔类型
_Bool（C23前可通过宏bool访问）、bool（C23起）
类型能够容纳两个值之一：1和0（在C23之前也可通过宏true和false访问），true和false（C23起）
_Bool(C23前)bool(C23起)的转换与到其他整数类型的转换不同：(bool)0.5求值为true，然而(int)0.5求值为​0​

字符类型
signed char用作有符号字符类型
unsigned char用作无符号字符类型亦可用于查看对象表示（无修饰内存）
char用于字符类型，与signed char或unsigned char等价（具体等价于哪个是实现定义的，并且可以通过编译器命令行开关控制），但char是独立的类型，与signed char及unsigned char都不相同
宽字符定义，标准亦定义了typedef名wchar_t、char16_t和char32_t(C11起)<uchar.h>以表示宽字符，以及表示UTF-8字符的char8_t(C23起)

整数类型
short int（亦可用作short可以用关键词 signed) 
unsigned short int（亦可用作unsigned short）
int（亦可用作signed int）这是平台的最理想整数类型，保证至少为16位。当前大多数平台使用32位（见后述的数据模型）
unsigned int（亦可用作 unsigned），int的无符号对应者，实现模算术，适合位操作
long int（亦可用作long）
unsigned long int（亦可用作unsigned long）
long long int（亦可用作long long）(C99起)
unsigned long long int（亦可用作unsigned long long）(C99起)
_BitInt(n)（亦可用作signed _BitInt(n)），位精确的有符号整数类型（其中n由代表精确宽度（包括符号位）的整数常量表达式替换，它不能大于<limits.h>中的BITINT_MAXWIDTH）(C23起)
unsigned _BitInt(n)位精确的无符号整数类型（其中n由代表精确宽度的整数常量表达式替换，它不能大于<limits.h>中的BITINT_MAXWIDTH）(C23起)
所有类型说明符允许任意顺序，unsigned long long int 和 long int unsigned long 指名同一类型
精确宽度整数类型，可从<stdint.h>中使用精确宽度的整数、int8~64_t、int_fast8~64_t、int_least8~64_t(C99起)
C标准规定，char至少8位、short至少16位、int至少16位、long至少32位、long long至少64位(C99起)，除了最小位数，C标准还保证1 == sizeof(char) ≤ sizeof(short) ≤ sizeof(int) ≤ sizeof(long) ≤ sizeof(long long)
允许出现极端情况，即字节大小为64位，所有类型（包括字符型）都是64位宽，并且对于每种类型，sizeof返回值为1
有符号和无符号整数类型的整数算术定义不同，参见算术运算符，特别是整数溢出

数据模型
每个实现关于基础类型的大小选择被统称为数据模型
32位系统，LP32或2/4/4（int为16位2字节，long与指针为32位4字节）Win16 API、ILP32或4/4/4（int、long及指针为32位4字节）Win32 API Unix及类Unix系统（Linux、MacOSX）
64位系统，LLP64或4/4/8（int及long为32位4字节，指针为64位8字节）Win64 API、LP64或4/8/8（int为32位4字节，long及指针为64位8字节）Unix与类Unix系统（Linux、MacOSX）
其他数据模型非常罕见，例如ILP64（8/8/8：int、long及指针均为64位8字节）仅出现于某些早期64位Unix系统（例如Cray上的Unicos）

实浮点数类型
float，单精度浮点类型，如果支持匹配IEEE-754 binary32格式（占用32位4字节的浮点数遵循IEEE-754 binary32标准）
double，双精度浮点类型，如果支持匹配IEEE-754 binary64格式（占用64位8字节的浮点数遵循IEEE-754 binary64标准）
long double，扩展精度浮点数类型，占用更多位数的浮点数具体多少位取决于实现，常见的是80位或128位，若支持则匹配IEEE-754 binary128格式（占用128位16字节），否则若支持则匹配IEEE-754 binary64扩展格式，否则匹配某种精度优于binary64而值域至少和binary64一样好的非IEEE-754扩展浮点数格式
若实现预定义宏常量 __STDC_IEC_60559_DFP__ 则下列十进制浮点数类型亦得到支持，否则，不支持这些十进制浮点数类型(C23 起)
_Decimal32 表示IEEE-754 decimal32格式
_Decimal64 表示IEEE-754 decimal64格式
_Decimal128 表示IEEE-754 decimal128格式
浮点数类型可以支持特殊值
INFINITY，无穷大（正与负）INFINITY
-0.0，负零，与正零比较相等，但对于某些算术运算有意义（例如1.0/0.0 == INFINITY ，但1.0/-0.0 == -INFINITY）
NaN，非数，与任何值比较不相等（包括其自身），有多种位模式表示nan、NAN，C语言不会特别关注有信号的NaN（由IEEE-754指定），而是将所有NaN视为安静的
实数浮点数可以与算术运算符+ - / *以及<math.h>中的各种数学函数一起使用，内置运算符和库函数都可能引发浮点异常并设置errno如math_errhandling中所述
实浮点数表达式可拥有大于其类型所指示的范围和精度，但是赋值、return和cast类型转换会将范围和精度强转成声明类型所关联者（即结果会被强制转换为目标类型的精度和范围），见FLT_EVAL_METHOD
实浮点数表达式可被缩略，编译器可能会对浮点数运算进行优化，即仿佛中间值拥有无限范围和精度一般计算，这种优化可以提高计算速度和精度，见 #pragma STDC FP_CONTRACT
某些实浮点数上的运算会受到运行环境的影响，比如舍入方向（向上舍入、向下舍入等）运行环境也可能被这些运算所改变
实浮点数与其他类型（例如整数、复数）之间有定义好的转换规则，可以在它们之间进行隐式转换
附加细节、极限和浮点数类型属性见浮点数类型极限与<math.h>库

复浮点数类型
复浮点数类型模仿数学的复数，即可以写成一个实数与一个实数乘虚数单位的和的数 a + bi，复数在内存中是按照对应的实数类型的数组来存储的
三种复数类型
float _Complex（若包含<complex.h>亦可用作float complex）
double _Complex（若包含<complex.h>亦可用作double complex）
long double _Complex（若包含<complex.h>亦可用作long double complex）
同所有类型说明符允许任意顺序，long double complex、complex long double甚至double complex long都指名同一类型
若实现定义了宏常量__STDC_NO_COMPLEX__，则不提供复数类型（还有库头文件<complex.h>）(C11起)
每个复数类型均与拥有两个对应实数类型元素的数组具有相同的对象表示和对齐要求（float之于float complex，double之于double complex，long double之于long double complex），数组第一元素保有实部，而第二个元素保有虚部
复数可用于算术运算符+ - * /使用，并可与虚数和实数混合运算，<complex.h>中为复数定义了许多数学函数，内建运算符和库函数都可能引发浮点数异常并按math_errhandling中描述的方式设置errno
复数类型中不定义自增和自减
复数类型中不定义关系运算符（没有'小于'的记号）
隐式转换定义于复数类型和其他算术类型
C为了支持复数算术的无穷大模型，将任何至少有一个无穷大部分的复数值视为无穷大，即使它的另一个部分是NaN，保证所有运算符和函数都尊重无穷大的基本属性，并提供cproj将所有无穷大映射到规范的无穷大（有关确切规则，请参阅算术运算符）
C也会处理多重无穷大，以在可能的地方保留方向信息，不管笛卡尔表示的固有限制，实无穷大乘虚数单位会给出对应符号的虚无穷大i × ∞ = i∞同理i × (∞ – i∞) = ∞ + i∞指示合理的象限

虚浮点数类型
虚浮点数类型模仿数学的虚数，即可以写成实数乘虚数单位的数：bi 
三种虚数类型是
float _Imaginary（若包含<complex.h>亦可用作float imaginary）
double _Imaginary（若包含<complex.h>亦可用作double imaginary）
long double _Imaginary（若包含<complex.h>亦可用作long double imaginary）
同所有类型说明符允许任意顺序，long double imaginary、imaginary long double、double imaginary long都指名同一类型
推荐实现定义 __STDC_IEC_559_COMPLEX__，但不要求支持虚数，POSIX推荐检查是否定义宏_Imaginary_I以鉴别是否支持虚数
三种虚数类型各拥有与其对应实数类型相同的对象表示和对齐要求（float之于float imaginary，double之于double imaginary，long double之于long double imaginary）尽管如此，虚数类型是独立的且与其对应实数类型不兼容，这禁止别名使用
虚数可用于算术运算符+ - * / 并且可与复数和实数混用，<complex.h>中为虚数类型定义多个数学函数，内建运算符和库函数都可能引发浮点数异常，并按描述于math_errhandling的方式设置errno
虚数类型中不定义自增和自减
隐式转换定义于虚数类型和其他算术类型
虚数使得可以使用自然表示法x + I*y来表达所有复数（其中I定义为_Imaginary_I）如果没有虚数类型，就无法自然地创建某些特殊的复数值。例如，如果I定义为_Complex_I则写入0.0+I*INFINITY会得到NaN作为实部，并且必须改用CMPLX(0.0,INFINITY)。对于具有负零虚部的数字也是如此，这在使用带有分支切割的库函数时很有意义例如，csqrt如果I定义为_Complex_I则1.0 - 0.0*I会产生正零虚部，而负数会产生正零虚部，零虚部需要使用 CMPLX 或 conj
虚数类型也简化了实现，如果支持虚数类型，那么一个虚数与一个复数的乘法可以直接用两次乘法实现，而不是四次乘法和两次加法

关键词
_Bool,bool, true, false
signed, unsigned 
char, int, short, long, _BitInt
float, double, _Decimal32, _Decimal64, _Decimal128
_Complex, _Imaginary

取值范围
常用数值表示的界限的参考
(C23前)在C23之前，C标准允许任何有符号整数表示，并且N位有符号整数的最小保证范围是从−(2^(n−1)−1)到+(2^(n−1)−1)（例如，对于有符号8位类型范围是-127到127），这对应于反码或原码的限制
(C23起)然而，所有通行数据模型（包括ILP32、LP32、LP64、LLP64全体）和几乎所有的C编译器（已知的仅有例外是UNISYS的一些编译器）均使用补码表示，而从C23起，这是标准所允许的唯一表示所保证的范围为从−(2^(n−1))到+(2^(n−1)−1)（例如有符号8位类型为-128到127）
实际（与保证最小值相对）的范围可在库头文件<limits.h>和<float.h>中获得
*/

/*
对象与对齐
C程序创建、销毁、访问并操作对象，一个对象是执行环境中数据存储的一个区域其内容可以表示值（值是对象的内容转译为特定类型时的含义）
每个对象拥有，大小（可由sizeof确定）、对齐要求（可由_Alignof确定） (C11起)、存储期（自动、静态、分配、线程局域）、生存期（等于存储期或临时）、有效类型、值（可以是不确定的）、可选项表示该对象的标识符
对象由声明、分配函数、字符串字面量、复合字面量，及返回拥有数组类型的结构体或联合体的非左值表达式创建

对象表示
有效类型
严格别名使用
对齐
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
  char32_t c3t = 'A';
  char16_t c1t = 'A';
  wchar_t wt = NUM;

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
