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

#define ASCII_PRINT
#define LIMIT_PRINT
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
    printf(
      "float min num is %f, float max num is %f, size num %lu byte.\n\n",
      FLT_MIN, FLT_MAX, sizeof(ft));

  double de = DEC_NUM;
  printf(
      "double min num is %f, double max num is %f, size num %lu byte.\n\n",
      DBL_MIN, DBL_MAX, sizeof(i6t));

  long double lde = DEC_NUM;
    printf(
      "long double min num is %Lf, long double max num is %Lf, size num %lu byte.\n\n",
      LDBL_MIN, LDBL_MAX, sizeof(i6t));

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
