/**
* @file              floating.c
* @brief             浮点类型代码文件，测试浮点类型包括 float、double、long double、_Decimal32、_Decimal64、_Decimal128、复数类型 _Complex、虚数类型 _Imaginary
* @version           0.2
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.12
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.12 <td>0.1             <td>brightl         <td>浮点类型分类、所占字节、取值范围
* <tr><td>2024.11.12 <td>0.2             <td>brightl         <td>浮点类型属性、计算处理
* </table>
*/

#include "c/variable/variable.h"
#include <float.h> // 浮点类型的极限头文件 
#include <math.h>  // 包含了大量用于数学运算的函数和宏的头文件，使用编译必须在其后加上 -lm，math.h 在 libm 中实现不默认链接 和 libc 默认链接的不同
#include <errno.h> // 定义了宏和变量，用于指示和描述运行时错误的类型
#include <fenv.h>  // 定义了更精确地控制浮点数运算的行为
#include <complex.h> // 定义了复数虚数头文件
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>

int is_inf_fn(void); // 浮点 无穷 定义
int is_nan_fn(void); // 浮点 非数值 定义
int is_err_fn(void); // 浮点计算 异常处理 定义
int evaluate_expression(void); // 浮点计算 性能和精度优化 定义
int demonstrate_rounding(void); // 浮点计算 浮点数环境影响 定义
int float_convert(void); // 浮点 隐式转换 定义 
int float_limits(void); // 浮点 极限 定义

#define NUMBER_F 3.456789102345456789102345

/**
* @brief             实浮点数类型 二进制浮点数 float、double、long double
*
* @note              实浮点二进制 IEEE-754、极限、特殊值 INFINITY 和 NAN、特性支持：浮点计算 浮点精度、浮点优化、浮点环境、异常处理
*/
#define FLOAT_DOUBLE_TYPE

/**
* @brief             实浮点数类型 十进制浮点数 _Decimal32、_Decimal64、_Decimal128(C23起)
*
* @note              Revision History
*/
#define DECIMAL32_128_TYPE

/**
* @brief             复浮点数类型 float _Complex、double _Complex、long double _Complex 若包含 <complex.h> 亦可用作float complex、double complex、long double complex
*
* @note              复浮点数类型模仿数学的复数，即可写成一个实数与一个实数乘虚数单位的和的数 a + bi
*/
#define COMPLEX_TYPE

/**
* @brief             虚浮点数类型 float _Imaginary、double _Imaginary、long double _Imaginary 若包含 <complex.h> 亦可用作float imaginary、double imaginary、long double imaginary 
*
* @note              虚浮点数类型模仿数学的虚数，即可以写成实数乘虚数单位的数 bi 
*/
#define IMAGINARY_TYPE

/**
* @brief             实浮点数类型 float 单精度浮点数类型、double 双精度浮点数类型为二进制浮点数类型、若实现预定义宏常量 __STDC_IEC_60559_DFP__ 则还包括 _Decimal32、_Decimal64、_Decimal128 为十进制浮点数类型(C23起)
* @return  int       Return Description
*
* @note              Revision History
*/
int floating_fn(void) {
#ifdef FLOAT_DOUBLE_TYPE
  /*
  float 单精度浮点数类型、4字节（32位）、大约为6位有效数字
  float 占用较少内存，适用于内存限制较严的应用，如嵌入式系统
  float 精度较低，运算可能会有明显的舍入误差
  float 若支持则匹配 IEEE-754 binary32 格式

  double 双精度浮点数类型、8字节（64位）、大约为15位有效数字
  double 在大多数应用中是浮点数运算的首选，因为其精度和范围通常足够
  double 提供了较好的精度，适用于绝大多数的科学计算和工程计算
  double 若支持则匹配 IEEE-754 binary64 格式

  long double 扩展精度浮点数类型、大小依赖于具体实现，通常为12字节、16字节，有时也可能为8字节、较 double 更大、更高。具体取决于编译器和平台。例如，在一些系统上可能为18位有效数字及更大的范围
  long double 提供了最高的精度和范围，但占用更多内存，使用时需权衡性能和内存占用
  long double 在需要极高精度的科学计算和金融计算中使用，但要考虑是否所有平台都支持
  long double 若支持则匹配 IEEE-754 binary128 格式，否则若支持则匹配 IEEE-754 binary64 扩展格式，否则匹配某种精度优于 binary64 而值域至少和 binary64 一样好的非 IEEE-754 扩展浮点数格式，否则匹配 IEEE-754 binary64 格式，一些 HP-UX、SPARC、 MIPS、 ARM64 和 z/OS 实现使用 binary128 格式。最知名的 IEEE-754 binary64 扩展格式是 80 位 x87 扩展精度格式。许多 x86 和 x86-64 实现使用它（一个典型的例外是 MSVC ，它将 long double 实现为与 double 相同的格式，即 binary 64）

  浮点数类型可以支持特殊值 INFINITY 和 NAN 是用于表示特殊浮点数值的宏，它们分别表示正无穷大和非数（NaN, Not-a-Number），这些宏在数学计算中常用于处理特殊情况。无穷大（正与负）见INFINITY、负零-0.0它与正零比较相等但对于某些算术运算有意义（例如1.0/0.0 == INFINITY ，但1.0/-0.0 == -INFINITY）、非数（NaN）与任何值比较不相等（包括其自身）。有多种位模式表示NaN，见nan 、NAN注意 C 对（IEEE-754所指定的）NaN信号不作任何留意，并安静处理所有NaN
  INFINITY 如果编译器和运行环境支持浮点无穷大，宏 INFINITY 将展开为一个正无穷大的 float 类型常量表达式这是一个可以被直接使用的特殊值，表示正无穷大、如果不支持浮点无穷大，宏 INFINITY 将展开成一个会在编译期间溢出的 float 类型正值，使用这种展开形式的宏时，编译器会生成警告，例如这种情况下 INFINITY 可能会被定义为一个极大的常量值，比如 FLT_MAX 但由于整数或浮点溢出，实际值会超出有限范围、当输出无穷大时不同的实现（编译器和标准库）可能会有不同的打印方式例如，有的可能打印为 inf，有的可能打印为 Infinity
  NAN 展开成求值为安静非数（QNaN）的 float 类型常量表达式，QNaN 是一种特殊的浮点数，用于表示未定义或不可表示的值，通常在数学计算中表示错误或异常情况。若实现不支持 QNaN，则不定义此宏，用于打印 NaN 的风格是实现定义的 有的可能打印为 NaN，有的可能打印为 nan 或其他变体
  INFINITY 和 NAN 是用于表示特殊浮点数值的宏。在底层，它们的值是根据IEEE 754标准来表示的。IEEE 754是浮点数表示的一个广泛使用的标准，定义了不同类型的浮点数，包括正无穷大、负无穷大和非数（NaN）

  实浮点数可与算术运算符 + - / * 和来自 <math.h> 的大量数学函数一同使用。内建运算符和库函数都可能引发浮点数异常，并以 math_errhandling 中描述的方式设置 errno
  浮点数表达式可拥有大于其类型所指示的范围和精度，见 FLT_EVAL_METHOD ，赋值、 return 和转型强制将范围和精度变成声明类型所关联者
  浮点数表达式亦可被缩略，即仿佛中间值拥有无限范围和精度一般计算，见 #pragma STDC FP_CONTRACT
  一些浮点数上的运算会受到浮点数环境的影响，或修改它（最值得注意的是舍入方向）
  实浮点数类型与整数、复数和虚数类型间的隐式转换有定义
  附加细节、极限和浮点数类型属性见浮点数类型极限与 <math.h> 库

  IEEE-754 是浮点数表示的标准，定义了不同精度的浮点数格式，常见的格式包括 binary32、binary64 和 binary128，分别用于表示 float、double 和 long double 类型
  格式名称	     类型	        位数	符号位	  指数位	尾数位	  最小值	      最大值     	  精度	                    指数范围
  binary32	   float	      32	 1	      8	       23	    1.4e-45	       3.4e+38	      ~7 位十进制有效数字	      -126 到 +127  
  binary64	   double	      64	 1	      11	   52	    4.9e-324	   1.8e+308	      ~15-17 位十进制有效数字	  -1022 到 +1023
  binary128	   long double	  128	 1	      15	   112	    6.475e-4966	   1.1897e+4932	  ~33-34 位十进制有效数字	  -16382 到 +16383
  */
  float cat = NUMBER_F;
  float dog = 3.34f;                                    // 单精度浮点数，注意f后缀
  double rabbit = 3.456789102345456789102345;           // 双精度浮点数，不需要后缀
  long double mouse = 3.456789102345456789102345L;      // 扩展精度浮点数，注意L后缀
  print_purple("cat is %.7f.\n", cat);                  
  print_purple("dog is %.7f.\n", dog);                  // %.7f 来保持7位有效数字
  print_purple("rabbit is %.15lf.\n", rabbit);          // %.15lf 来保持21位有效数字
  print_purple("mouse is %.21Lf.\n", mouse);            // %.21Lf 来保持21位有效数字     
  print_purple("float size of %d byte. minimum number = %e. maximum number = %e.\n", sizeof(float), FLT_MIN, FLT_MAX);
  print_purple("double size of %d byte. minimum number = %e. maximum number = %e.\n", sizeof(double), DBL_MIN, DBL_MAX);
  print_purple("long double size of %d byte. minimum number = %e. maximum number = %e.\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
  is_inf_fn();
  is_nan_fn(); 
  is_err_fn();
  evaluate_expression();
  demonstrate_rounding();
  float_convert();
  float_limits();

#endif // FLOAT_DOUBLE_TYPE float、double、long double 类型

#ifdef DECIMAL32_128_TYPE
  /*
  若实现预定义宏常量 __STDC_IEC_60559_DFP__ ，则下列十进制浮点数类型亦得到支持，否则，不支持这些十进制浮点数类型(C23起)
  _Decimal32 - 表示 IEEE-754 decimal32 格式、通常占用4字节（32位）、可用于需要中等精度但希望避免二进制浮点数误差的场景
  _Decimal64 - 表示 IEEE-754 decimal64 格式、通常占用8字节（64位）、提供比 _Decimal32 更高的精度和范围，适用于金融计算和其他对精度要求较高的应用
  _Decimal128 - 表示 IEEE-754 decimal128 格式、通常占用16字节（128位）、提供最高的精度和范围，适用于需要极高精度的应用

  C语言在某些实现中支持扩展数据类型以处理十进制浮点数。特别是 IEEE-754 标准定义了 decimal32、decimal64 和 decimal128 浮点格式，以便更精确地表示和处理十进制数
  */
  /*
  _Decimal32 raccoon = 123.456D32;                                             // 定义十进制浮点数变量
  _Decimal64 otter = 123.456789D64;
  _Decimal128 antelope = 123.456789012345678901234567890D128;
  print_purple("Decimal32: %Hf\n", raccoon);                                   // 输出十进制浮点数
  print_purple("Decimal64: %Hf\n", otter);
  print_purple("Decimal128: %Hf\n", antelope);
  
  _Decimal64 wildboar = otter * 2.0D64;                                        // 进行基本运算
  _Decimal64 yak = wildboar + otter;
  print_purple("yak: %Hf\n", yak);                                                   // 输出十进制浮点数 
  print_purple("wild boar: %Hf\n", wildboar);  
  */

#endif // DECIMAL32_128_TYPE _Decimal32、_Decimal64、_Decimal128 类型

#ifdef COMPLEX_TYPE
  /*
  复浮点数类型模仿数学的复数，即可以写成一个实数与一个实数乘虚数单位的和的数： a + bi
  三种复数类型是 float _Complex、double _Complex、long double _Complex，若包含 <complex.h> 亦可用作float complex、double complex、long double complex
  同所有类型说明符，允许任意顺序： long double complex 、 complex long double ，甚至 double complex long 都指名同一类型 
  若实现定义了宏常量 __STDC_NO_COMPLEX__ ，则不提供复数类型（还有库头文件 <complex.h>）(C11起)
  
  每个复数类型均与拥有两个对应实数类型（float 之于 float complex，double 之于 double complex，long double 之于 long double complex）元素的数组具有相同的对象表示和对齐要求。数组第一元素保有实部，而第二个元素保有虚部
  复数可用于算术运算符 + - * 和 / 使用，并可与虚数和实数混合运算。<complex.h> 中为复数定义了许多数学函数。内建运算符和库函数都可能引发浮点数异常，并按 math_errhandling 中描述的方式设置 errno
  复数类型中不定义自增和自减、复数类型中不定义关系运算符（没有“小于”的记号）
  隐式转换定义于复数类型和其他算术类型
  
  为了支持复数算术操作，C 标准规定了如何处理复数中的无穷大和 NaN（Not a Number）。这意味着 C 语言在处理复数算术操作时，遵循一定的规则来确保计算结果的一致性和正确性，即使遇到无穷大和 NaN 这样的特殊值时，也保证所有运算符和函数忠实于无穷大的基本属性，并提供 cproj 以映射所有无穷大到标准的一（准确规则见算术运算符）
  无穷大复数值 当复数的实部或虚部之一是无穷大（INFINITY），该复数值被视为无穷大复数值，即使另一部分是 NaN 例如，INFINITY + NaN*I 和 NaN + INFINITY*I 都被视为无穷大复数值
  忠实于无穷大的基本属性 复数算术操作和函数在处理无穷大复数值时，必须忠实于无穷大的基本数学属性，例如，复数加法、减法、乘法和除法等操作在涉及无穷大时，需要遵循标准的数学规则，以确保结果的一致性
  cproj 函数 C 标准库提供了 cproj 函数，用于将所有无穷大复数值映射到标准的一，cproj 函数的作用是将复数平面上的任意无穷大复数值映射到复数平面上的一个标准无穷大

  C 也会处理多重无穷大，以在可能的地方保留方向信息，不管笛卡尔表示的固有限制：实无穷大乘虚数单位，会给出对应符号的虚无穷大： i × ∞ = i∞ 。同理， i × (∞ – i∞) = ∞ + i∞ 指示合理的象限
  处理复数算术操作时，涉及到无穷大（INFINITY）和虚数单位（I）时，遵循特定的规则，以保留方向信息，同时考虑到笛卡尔表示的限制。这意味着即使在进行复杂的复数运算时，结果依然能够合理地反映相应的象限和符号
  实无穷大与虚数单位的乘法 当实无穷大与虚数单位相乘时，结果是对应符号的虚无穷大，例如：i × ∞ = i∞ 即 I * INFINITY 结果为虚无穷大
  复数乘法涉及无穷大和虚数单位 当复数运算涉及无穷大和虚数单位时，结果应合理地反映相应的象限，例如：i × (∞ – i∞) = ∞ + i∞，这表示结果在复数平面的第三象限
  */
  double complex pig = 1 + 2*I;
  pig = 1 / pig;
  print_blue("1/(1.0+2.0i) = %.1f%+.1fi\n", creal(pig), cimag(pig));

  float cow[4] = {1, 2, 3, 4};   
  float complex sheep, horse;                       // 由两个 float 元素组成
  memcpy(&sheep, cow, sizeof sheep);   // sheep 成为 1.0 + 2.0i 、sheep 第一元素 cow[0]、 第二元素 cow[1]
  memcpy(&horse, cow+2, sizeof horse); // horse 成为 3.0 + 4.0i horse 第一元素 cow[2]、 第二元素 cow[3]
  print_blue("sheep = %.1f%+.1fi\n", creal(sheep), cimag(sheep)); // creal 获取实部 、 cimag 获取虚部
  print_blue("horse = %.1f%+.1fi\n", creal(horse), cimag(horse));
  print_blue("float complex size of %d.\n", sizeof(float complex));    // 两倍 float
  print_blue("double complex size of %d.\n", sizeof(double complex));  // 两倍 double

  double complex monkey = INFINITY + 1.0*I;
  double complex panda = 1.0 + INFINITY*I;
  double complex lion = INFINITY + NAN*I;
  double complex tiger = NAN + INFINITY*I;
  print_blue("monkey: %.2f + %.2fi\n", creal(monkey), cimag(monkey));       // 打印原始复数值
  print_blue("panda: %.2f + %.2fi\n", creal(panda), cimag(panda));       
  print_blue("lion: %.2f + %.2fi\n", creal(lion), cimag(lion));
  print_blue("tiger: %.2f + %.2fi\n", creal(tiger), cimag(tiger)); 
  double complex pmonkey = cproj(monkey);                                      // 用 cproj 功能映射无穷大复数值
  double complex ppanda = cproj(panda);
  double complex plion = cproj(lion);
  double complex ptiger = cproj(tiger);
  print_blue("pmonkey: %.2f + %.2fi\n", creal(pmonkey), cimag(pmonkey));    // 打印映射后的复数值
  print_blue("ppanda: %.2f + %.2fi\n", creal(ppanda), cimag(ppanda));       
  print_blue("plion: %.2f + %.2fi\n", creal(plion), cimag(plion));
  print_blue("ptiger: %.2f + %.2fi\n", creal(ptiger), cimag(ptiger)); 

  double complex bear = INFINITY + 0.0*I;
  double complex kangaroo = INFINITY - INFINITY*I;
  double complex resultbear = I * bear;         // 实无穷大乘虚数单位
  print_blue("I * INFINITY: %.2f + %.2fi\n", creal(resultbear), cimag(resultbear));                    // 输出结果应该是 0.00 + INFINITYi
  double complex resultkangaroo = I * kangaroo;         // 虚数单位乘复数 (∞ - i∞)
  print_blue("I * (INFINITY - INFINITYi): %.2f + %.2fi\n", creal(resultkangaroo), cimag(resultkangaroo));      // 输出结果应该是 INFINITY + INFINITYi
  double complex elephant = -INFINITY + INFINITY*I;      // 虚数单位乘复数 (-∞ + i∞)
  double complex resultelephant = I * elephant;        
  print_blue("I * (-INFINITY + INFINITYi): %.2f + %.2fi\n", creal(resultelephant), cimag(resultelephant));     // 输出结果应该是 -INFINITY - INFINITYi
  
#endif // COMPLEX_TYPE complex 类型

#ifdef IMAGINARY_TYPE
  /*
  虚浮点数类型模仿数学的虚数，即可以写成实数乘虚数单位的数：bi 三种虚数类型
  三种虚数类型是 float _Imaginary、double _Imaginary、long double _Imaginary，若包含 <complex.h> 亦可用作float imaginary、double imaginary、long double imaginary
  同所有类型说明符，允许任意顺序： long double imaginary 、 imaginary long double ，甚至 double imaginary long 都指名同一类型
  推荐实现定义 __STDC_IEC_559_COMPLEX__ 但不要求支持虚数 POSIX 推荐检查是否定义宏 _Imaginary_I 以鉴别是否支持虚数，若定义 __STDC_IEC_559_COMPLEX__ (C23前)__STDC_IEC_60559_COMPLEX__ (C23起) ，则支持虚数。
  允许程序取消定义，而且可在之后重定义 imaginary 宏，如今，只有 Oracle C 编译器已知实现了虚部类型
  
  三种虚数类型各拥有与其对应实数类型（float 之于 float imaginary ， double 之于 double imaginary ， long double 之于 long double imaginary）相同的对象表示和对齐要求，尽管如此，虚数类型是独立的，且与其对应实数类型不兼容，这禁止别名使用
  虚数可用于算术运算符 + - * 及 / ，并且可与复数和实数混用。<complex.h> 中为虚数类型定义多个数学函数。内建运算符和库函数都可能引发浮点数异常，并按描述于 math_errhandling 的方式设置 errno
  自增和自减不定义于虚数类型
  隐式转换定义于虚数类型和其他算术类型之间

  虚数类型零通过自然记号 x + I*y（其中 I 定义为 _Imaginary_I）表示所有复数成为可能。若无虚数类型，则无法自然地创建一些特殊复数值。例如，若 I 被定义为 _Complex_I 则书写 0.0 + I*INFINITY 会给出有 NaN 实部的结果，而必须用 CMPLX(0.0, INFINITY) 替代之
  拥有负零虚部的数亦然，这对于使用存在分支的库函数有意义，例如 csqrt ：若 I 定义为 _Complex_I，则 1.0 - 0.0*I 结果有正零的虚部，并要求用 CMPLX 或 conj 获得负零虚部
  虚数类型亦会简化实现：若支持虚数则复数乘虚数可以直接实现为二次乘法，而非四次乘法和二次加法
  */

  /*
  double imaginary wolf = 2.0*I;                      // 纯虚数
  double fox = 1.0;                                   // 纯实数
  double complex deer = fox + wolf;                   // 复数
  double _Complex gorilla = 0.0 + I * INFINITY;       //  结果为 NaN + INFINITY*I  不是想要的
  double _Complex rhinoceros = CMPLX(0.0, INFINITY);  //  正确的表示应使用 CMPLX 宏 结果为 0.0 + INFINITY*I
  double _Complex hippopotamus = 1.0 - 0.0*I;         //  结果为 1.0 + 0.0*I       不是想要的
  double _Complex camel = CMPLX(1.0, -0.0);           //  获得负零虚部，可以使用 CMPLX 或 conj 函数 结果为 1.0 - 0.0*I
  double _Complex seal = conj(1.0 + 0.0*I);           //  获得负零虚部，可以使用 CMPLX 或 conj 函数 结果为 1.0 - 0.0*I

  double _Complex dolphin = 1.0 + 2.0*I;              // 如果支持虚数类型，复数乘虚数可以简化为二次乘法而非四次乘法和二次加法
  double _Imaginary whale = 3.0*I;
  double _Complex bat = dolphin * whale;              // 结果为-6.0 + 3.0*I

  double _Complex squirrel = 1.0 + 2.0*I;             // 对于没有虚数类型的情况，计算会复杂得多
  double _Complex pangolin = 0.0 + 3.0*I;
  double _Complex sloth = squirrel * pangolin;        // 结果为-6.0 + 3.0*I

  print_green("z = %.1f%+.1fi\n", creal(deer), cimag(deer));
  */
  
#endif // IMAGINARY_TYPE imaginary 类型

    return 0;
}

/**
* @brief             检测是否支持 INFINITY
* @return  int       Return Description
*
* @note              Revision History
*/
int is_inf_fn(void) {
  if (isinf(INFINITY)) {    // 检查是否支持无穷大
    printf("This implementation supports infinity.\n");
    printf("INFINITY = %f\n", INFINITY);
  } else {
    printf("This implementation does not support infinity.\n");
    printf("INFINITY = %e\n", FLT_MAX); // 使用一个非常大的值作为替代
  }

  float positive_infinity = INFINITY; // 进一步验证
  if (isinf(positive_infinity)) {
    printf("positive_infinity is recognized as infinity.\n");
  } else {
    printf("positive_infinity is NOT recognized as infinity.\n");
  }

  float fl0 = INFINITY;
  uint32_t fn0; 
  memcpy(&fn0, &fl0, sizeof fl0);
  printf("INFINITY:   %f %" PRIx32 "\n", fl0, fn0);

  float fl1 = -INFINITY;
  uint32_t fn1; 
  memcpy(&fn1, &fl1, sizeof fl1);
  printf("INFINITY:   %f %" PRIx32 "\n", fl1, fn1);

  double dl0 = INFINITY;
  uint64_t dn0; 
  memcpy(&dn0, &dl0, sizeof dl0);
  printf("INFINITY:   %f %" PRIx64 "\n", dl0, dn0);

  double dl1 = -INFINITY;
  uint64_t dn1; 
  memcpy(&dn1, &dl1, sizeof dl1);
  printf("INFINITY:   %f %" PRIx64 "\n", dl1, dn1);
  /*
  假设实现支持浮点无穷大：
  This implementation supports infinity.
  INFINITY = inf
  positive_infinity is recognized as infinity.
  
  假设实现不支持浮点无穷大：
  This implementation does not support infinity.
  INFINITY = 3.402823e+38 // FLT_MAX 的值
  positive_infinity is NOT recognized as infinity.
  */

  return 0;
}

/**
* @brief             检测是否支持 NAN
* @return  int       Return Description
*
* @note              Revision History
*/
int is_nan_fn(void) {
  float nan_value = NAN; // 假设编译器支持 QNaN
  printf("The value of NaN is: %f\n", nan_value);  // 打印 NaN 值

  if (isnan(nan_value)) {  // 检查是否为 NaN
    printf("nan_value is recognized as NaN.\n");
  } else {
    printf("nan_value is NOT recognized as NaN.\n");
  }

  const float f = NAN;
  uint32_t fn;
  memcpy(&fn, &f, sizeof f);
  printf("NAN:   %f %" PRIx32 "\n", f, fn);

  const double d = NAN;
  uint64_t dn;
  memcpy(&dn, &d, sizeof d);
  printf("NAN:   %f %" PRIx64 "\n", d, dn);
  /*
  假设实现支持 QNaN：
  The value of NaN is: nan
  nan_value is recognized as NaN.
  
  假设实现不支持 QNaN：
  编译时将产生错误或警告，因为 NAN 宏未定义
  */

  return 0;
}

/**
* @brief             浮点数可以与算术运算符（+, -, /, *）和许多来自 <math.h> 的数学函数一起使用。内建运算符和库函数可能会引发浮点数异常，并以 math_errhandling 中描述的方式设置 errno
* @return  int       Return Description
*
* @note              Revision History
*/
int is_err_fn(void) {
  // 清除先前的错误标志
  feclearexcept(FE_ALL_EXCEPT);
  errno = 0;

  // 定义两个浮点数
  double x = 1.0;
  double y = 0.0;

  // 执行除法操作，可能引起除零异常
  double result_div = x / y;
  if (fetestexcept(FE_DIVBYZERO)) {
    perror("Floating-point division by zero");
  } else {
    printf("Division result: %f\n", result_div);
  }

  // 使用 <math.h> 中的 sqrt 函数，可能引起域错误
  errno = 0; // 重置 errno
  double result_sqrt = sqrt(-1.0);
  if (errno == EDOM) {
    perror("Math domain error with sqrt");
  } else {
    printf("Square root result: %f\n", result_sqrt);
  }
  
  return 0;
}

/**
* @brief             浮点计算精度和性能优化计算过程 宏 FLT_EVAL_METHOD 编译器指令 #pragma STDC FP_CONTRACT
* @return  int       Return Description
*
* @note              FLT_EVAL_METHOD 决定了在表达式求值时可以使用的最大精度和范围、#pragma STDC FP_CONTRACT 决定了编译器是否可以将多个浮点运算合并，以提升计算效率
*/
int evaluate_expression(void) {
  printf("FLT_EVAL_METHOD: %d\n", FLT_EVAL_METHOD); // 打印 FLT_EVAL_METHOD 的值

  float a = 1.0f;
  float b = 1e-8f;
  float result;

  result = a + b; // 在计算 a + b 时，可能使用比 float 更高的精度
  printf("Result of a + b: %.8f\n", result); // 打印结果
  /*
  浮点数表达式的计算可能会在比其声明类型更高的精度或范围下进行。这种行为由 FLT_EVAL_METHOD 控制，它决定了在计算过程中使用的浮点数精度和范围。FLT_EVAL_METHOD 的值在 <float.h> 头文件中定义，它可以是以下之一:0：浮点表达式的计算遵循其类型所指示的精度和范围、1：浮点表达式的计算使用 double 类型的精度和范围、2：浮点表达式的计算使用 long double 类型的精度和范围
  变量 a 和 b 都是 float 类型。根据 FLT_EVAL_METHOD 的值，计算 a + b 的表达式可能使用更高的精度。无论 FLT_EVAL_METHOD 的值为 0、1 或 2，计算结果 c 最终会被强制转换回 float 类型，因为 c 声明为 float
  更高的中间精度：如果 FLT_EVAL_METHOD 为 1 或 2，中间计算可能会使用 double 或 long double 的精度。这意味着在中间计算步骤中，结果会比直接使用 float 更精确
  类型转换：无论中间计算使用何种精度，赋值操作 c = a + b 会将结果强制转换回 float 类型
  影响：这种机制有助于减少舍入误差，但在某些平台上可能表现不同
  */

  {
    #pragma STDC FP_CONTRACT ON   // #pragma STDC FP_CONTRACT 需要确保它出现在文件作用域或者复合语句的开头
    result = (a * b) - b;         // 这里可能会进行浮点数缩略
    printf("With FP_CONTRACT ON, result: %.8f\n", result);
  }

  {
    #pragma STDC FP_CONTRACT OFF  // #pragma STDC FP_CONTRACT 需要确保它出现在文件作用域或者复合语句的开头
    result = (a * b) - b;         // 这里不会进行浮点数缩略
    printf("With FP_CONTRACT OFF, result: %.8f\n", result);
  }
  /*
  浮点数表达式的计算不仅受到 FLT_EVAL_METHOD 的影响，还可以通过编译器指令（如 #pragma STDC FP_CONTRACT）来优化计算过程。#pragma STDC FP_CONTRACT 指示编译器可以将某些浮点运算合并，以提高性能，仿佛中间值拥有无限的范围和精度一样。这样做的结果是可能会得到更精确的结果，但也可能导致结果与逐步计算的结果不同。
  #pragma STDC FP_CONTRACT 是一个预处理命令，用于指定编译器是否可以进行浮点数表达式的缩略（contraction）。缩略是指将多个浮点运算合并为一个运算，从而提高计算效率。这通常发生在像 Fused Multiply-Add (FMA) 这样的操作中，可以将乘法和加法合并为一个硬件指令
  #pragma STDC FP_CONTRACT 可以设置为 ON 或 OFF，决定是否允许浮点运算的合并
  优化影响：#pragma STDC FP_CONTRACT ON 允许编译器进行更激进的优化，可能会带来更高的性能
  一致性：#pragma STDC FP_CONTRACT OFF 保证运算的逐步一致性，有助于调试和验证计算步骤
  平台相关：不同编译器和平台对 #pragma STDC FP_CONTRACT 的支持和行为可能不同，需要参考具体编译器文档
  */

  return 0;
}

/**
* @brief             浮点数运算的结果可能会受到当前浮点数环境的影响
* @return  int       Return Description
*
* @note              Revision History
*/
int demonstrate_rounding(void) {
  {
    #pragma STDC FENV_ACCESS ON  // 启用浮点数环境访问：这条指令允许程序访问和修改浮点数环境
    double value = 3.7;
    double result;
  
    fesetround(FE_TONEAREST);  // 舍入到最近的可表示值
    printf("Current rounding mode: %d\n", fegetround());
    result = rint(value);
    printf("Value: %.8f, Result with FE_DOWNWARD: %.8f\n", value, result);

    fesetround(FE_DOWNWARD);  // 舍入到负无穷方向
    printf("Current rounding mode: %d\n", fegetround());
    result = rint(value);
    printf("Value: %.8f, Result with FE_DOWNWARD: %.8f\n", value, result);

    fesetround(FE_UPWARD);  // 舍入到正无穷方向
    printf("Current rounding mode: %d\n", fegetround());
    result = rint(value);
    printf("Value: %.8f, Result with FE_DOWNWARD: %.8f\n", value, result);
  }  
  /*
  浮点数运算的结果可能会受到当前浮点数环境的影响。浮点数环境包括舍入模式、异常状态和其他浮点数控制设置。最常见的影响因素是舍入方向，它决定了当浮点数不能精确表示时，如何选择最接近的可表示值
  C语言标准库提供了一些函数来设置和获取当前的舍入模式。舍入模式可以通过 <fenv.h> 头文件中的 fesetround 和 fegetround 函数来设置和获取
  */

  return 0;
}

/**
* @brief             浮点数与其他类型的转换
* @return  int       Return Description
*
* @note              Revision History
*/
int float_convert(void) {
  int int_val = 3;
  float float_val = 3.7f;
  
  float result1 = int_val + float_val;  // 整数到浮点数的隐式转换
  printf("Result of int + float: %.2f\n", result1); // 输出 6.70

  int result2 = int_val + (int)float_val; // 浮点数到整数的隐式转换（可能会导致精度丢失）
  printf("Result of int + (int)float: %d\n", result2); // 输出 6

  return 0;
}

/**
* @brief             浮点数类型属性及浮点数类型极限
* @return  int       Return Description
*
* @note              Revision History
*/
int float_limits(void) {
  printf("DECIMAL_DIG     = %d\n", DECIMAL_DIG);
  printf("FLT_DECIMAL_DIG = %d\n", FLT_DECIMAL_DIG);
  printf("FLT_RADIX       = %d\n", FLT_RADIX);
  printf("FLT_MIN         = %e\n", FLT_MIN);
  printf("FLT_MAX         = %e\n", FLT_MAX);
  printf("FLT_EPSILON     = %e\n", FLT_EPSILON);
  printf("FLT_DIG         = %d\n", FLT_DIG);
  printf("FLT_MANT_DIG    = %d\n", FLT_MANT_DIG);
  printf("FLT_MIN_EXP     = %d\n", FLT_MIN_EXP);
  printf("FLT_MIN_10_EXP  = %d\n", FLT_MIN_10_EXP);
  printf("FLT_MAX_EXP     = %d\n", FLT_MAX_EXP);
  printf("FLT_MAX_10_EXP  = %d\n", FLT_MAX_10_EXP);
  printf("FLT_ROUNDS      = %d\n", FLT_ROUNDS);
  printf("FLT_EVAL_METHOD = %d\n", FLT_EVAL_METHOD);
  printf("FLT_HAS_SUBNORM = %d\n", FLT_HAS_SUBNORM);
  
  return 0;
}