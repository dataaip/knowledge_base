/**
* @file              character.c
* @brief             character 字符类型代码文件，测试char类型变量包括 char 单字节字符、多字节字符、wchar_t 宽字符
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.08
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.08 <td>0.1             <td>brightl         <td>字符类型分类、所占字节、取值范围
* </table>
*/

#include "c/variable/variable.h"
#include <stdint.h>
#include <limits.h> // 字符char 取值极限定义头文件
#include <locale.h> // 包含区域设置函数的头文件，因为宽字符的正确处理依赖于合适的区域设置
#include <string.h> // 包含了一组处理字符串和内存块的函数原型。这些函数用于执行各种字符串操作，如复制、连接、比较、搜索以及内存操作等
#include <wchar.h>  // 字符串操作、字符串检验、宽字符数组操作、转换成数值格式
#include <wctype.h> // 字符分类、字符操作
#include <stddef.h> // 定义各种变量类型和宏的头文件
#include <uchar.h>  // 提供了对 Unicode 字符类型 char16_t 和 char32_t 以及相关函数的支持

#include <stdlib.h> 
#include <stdio.h>

void utf16_to_utf8(char *dest, const char16_t *src, size_t dest_size);
void utf32_to_utf8(char *dest, const char32_t *src, size_t dest_size);

/**
* @brief             单字节字符类型 char、signed char、unsigned char
*
* @note              char 是一个 8 位字符类型，适用于处理 ASCII 和其他单字节字符集
*/
#define CHAR_TYPE

/**
* @brief             多字节字符类型 char* 、char[]
*
* @note              多字节字符 是指使用一个或多个字节来表示一个字符的编码方式、变长编码(每个字符使用的字节数可能不一样长)、向后兼容 ASCII、节省空间、效率低
*/
#define MULTIBYTE_CHAR_TYPE

/**
* @brief             宽字符，c 标准亦定义了 typedef 名 wchar_t、char16_t 和 char32_t(C11起)以表示宽字符，以及表示 UTF-8 字符的 char8_t(C23 起)
*
* @note              宽字符是固定长度的字符类型 由多个固定的字节构成 wchar_t、wint_t、wctrans_t、wctype_t 是用于处理宽字符和宽字符类型的定义。这些类型是为了支持国际化和多字节字符集处理而设计的、固定长度、直接支持 Unicode、宽字符并不一定是Unicode，Unicode只是宽字符编码的一种实现，它有三种常见的编码方式：UTF-8（1个字节表示）、UTF-16(2个字节表示)、UTF-32(4个字节表示)
*/
#define WCHAR_T_TYPE

/**
* @brief             char16_t、char32_t 在 C11 中引入了 char16_t 和 char32_t，分别用于表示 UTF-16 和 UTF-32 编码的字符，char8_t 在 C11 没有引入 char8_t（这是 C++20 的特性），但可以使用 typedef 来模拟 char8_t 的功能
*
* @note              char16_t 和 char32_t 类型的字符和字符串并不像打印 char 类型的字符串那样简单，因为它们的编码宽度不同。为了打印这些类型，我们通常需要将其转换为适合打印的形式
*/
#define CHART8_32_T

/**
* @brief             打印 ascii 码
*
* @note              Revision History
*/
#define PRINT_ASCII

/**
* @brief             字符类型 signed char 用作有符号字符类型、unsigned char 用作无符号字符类型亦可用于查看对象表示（无修饰内存）、char 用于字符类型
* @return  int       Return Description
*
* @note              char 与 signed char 或 unsigned char 等价（具体等价于哪个是实现定义的，并且可以通过编译器命令行开关控制），但 char 是独立的类型，与 signed char 及 unsigned char 都不相同
*/
int character_fn(void) {
#ifdef CHAR_TYPE
  /*
  可以看出 char 与 signed char 取值范围一样，在 linux 64 位 gcc 编译器实现中 等价
  char <=> signed char 用作有符号字符类型
  unsigned char 用作无符号字符类型。亦可用于查看对象表示（无修饰内存）
  字符类型 1个字节 8位，按%c格式化时输出位字符、按%d格式化时输出位整数相应的ascii码
  */
  char cat = 'A';
  char dog = 65; 
  signed char rabbit = 'A';
  signed char mouse = 65;
  unsigned char pig = 'A';
  unsigned char cow = 65;
  print_purple("cat is %c. number is %d.\n", cat, cat);
  print_purple("dog is %c. number is %d.\n", dog, dog);
  print_purple("rabbit is %c. number is %d.\n", rabbit, rabbit);
  print_purple("mouse is %c. number is %d.\n", mouse, mouse);
  print_purple("pig is %c. number is %d.\n", pig, pig);
  print_purple("cow is %c. number is %d.\n", cow, cow);
  print_purple("char size of %d. minimum = %d. maximum = %d \n", sizeof(char), CHAR_MIN, CHAR_MAX);
  print_purple("signed char size of %d. minimum = %d. maximum = %d \n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
  print_purple("unsigned char size of %d. maximum = %d \n", sizeof(unsigned char), UCHAR_MAX);

#endif // CHAR_TYPE char 类型

#ifdef MULTIBYTE_CHAR_TYPE
  /*
  char *  这是一个指向字符串常量的指针、字符串常量通常存储在只读内存区域，尝试修改它的内容会导致未定义行为 字符常量指针表示声明多字节 
  char [] 这是一个字符数组并初始化为一个字符串、字符数组存储在栈上，并且内容是可修改的 字符数组表示声明多字节
  char * 只是一个指针，指向已存在于内存中的字符串常量。这种情况下没有额外的内存分配
  char [] 是一个数组，编译器会为它分配足够的内存来存储字符串（包括终止空字符 \0）  
  */
  char *bear = "Hello, 你好";
  char kangaroo[] = "Hello, 世界";
  print_blue("bear is %s.\n", bear);
  print_blue("kangaroo is %s.\n", kangaroo);
  for (size_t i = 0; i < strlen(bear); ++i) {
      print_blue("byte %zu: %x,  ", i, (unsigned char)bear[i]);
  }
  print_blue("\n");
  for (size_t i = 0; i < strlen(bear); ++i) {
      print_blue("byte %zu: %x,  ", i, (unsigned char)kangaroo[i]);
  }
  print_blue("\n");
  print_blue("bear sizeof is %d. strlen = %d.\n", sizeof(bear), strlen(bear)); 
  print_blue("kangaroo sizeof is %d. strlen = %d.\n", sizeof(kangaroo), strlen(kangaroo)); 

#endif // MULTIBYTE_CHAR_TYPE multibyte char 多字节字符

#ifdef WCHAR_T_TYPE
  /*
  wchat_t 是一种用于表示宽字符的类型，宽字符主要用于支持国际化，能够表示多种字符集（如 Unicode 字符）。宽字符通常比 char 类型占用更多的存储空间（例如，一个 wchar_t 通常占用 2 或 4 个字节）可以看到是一个 int 的宏定义
  wint_t 是一种用于表示宽字符码点的类型，通常用于处理单个宽字符，特别是在与标准库函数（如 getwc、putwc）交互时，通常是一个比 wchar_t 更大的整数类型，以便能够表示所有可能的宽字符值以及特殊的 WEOF 值 可以看到是一个 unsigned int 的宏定义
  wctrans_t 是一种用于表示宽字符转换类型的类型。它通常用于指定宽字符的某种转换（如大小写转换），通过调用 wctrans 获取特定转换类型，然后使用 towctrans 函数执行转换 可以看到是一个 signed int 指针 的宏定义
  wctype_t 是一种用于表示宽字符分类的类型。它通常用于指定宽字符的某种分类（如是否是数字、字母等），调用 wctype 获取特定分类类型，然后使用 iswctype 函数进行分类检查 可以看到是一个 unsigned long int 的宏定义
  
  setlocale(LC_ALL, "");：设置程序的区域设置为当前环境的默认区域设置。这一步非常重要，因为宽字符的正确处理依赖于合适的区域设置。LC_ALL 参数表示影响所有类别的区域设置
  wprintf 函数输出宽字符字符串。wprintf 是一个专门用于处理宽字符的格式化输出函数、L"%ls\n"：%ls 是用于宽字符字符串的格式说明符，L 表示这是一个宽字符字符串格式串
  根据 C 标准，每个 FILE 流都有一个与之关联的“方向”(“字节”或“宽”)，这是由对其执行的第一个操作设置的，并且可以使用 fwide 函数进行检查。调用方向与流的方向冲突的任何函数都会导致未定义的行为
  printf 和 wprintf 混用，仅一个有效果，另一个写返回 -1，无 errno 信息，但是写失败，c 流格式化和非格式的输入输出是 locale 敏感的，可以宽字符或多字节的转换输出，和 C++ 流不一样，C++ 每个流关联自己的 locale，所有的 C 流获得相同的 locale object，通过调用 selocale 加载
  一个新打开的流没有取向，第一次调用 std::fwide 或者其他的 I/O函数 建立取向：宽I/O函数设置流定宽，窄I/O函数使流定窄，一旦设置，取向只能通过 std::freopen 改变，窄I/O函数不可以调用定宽流，宽I/O函数不可以调用定窄流，宽I/O函数使用 std::mbrtowc 和 std::wcrtomb 完成宽字符和多字节字符的转换
  wprintf 和 printf 不能同时针对同一个文件，wprintf 是宽流，窄串在内部被转为宽字符打印，printf 是窄流，宽字符在内部被转为窄串打印，wprinitf 字符串格式包含非ascii宽字符，程序只有在运行时的本区 LC_CTYPE 类型 和编译时本区 LC_CTYPE 类型一致时才能正常工作
  
  wchat_t 定义：wchar_t 是一个宽字符类型，在 C 和 C++ 中都有定义，用于表示宽字符
  wchat_t 大小：wchar_t 的大小取决于具体的平台。例如，在 Windows 上，wchar_t 通常是 2 字节（16 位），而在大多数 Unix 和 Linux 系统上，wchar_t 通常是 4 字节（32 位），这种不一致性可能导致跨平台编程时的复杂性和不确定性
  wchat_t 用途：在 Windows 上，wchar_t 通常用来表示 UTF-16 编码的字符；在 Unix 和 Linux 系统上，通常用来表示 UTF-32 编码的字符
  wchat_t 标准化：wchar_t 是在更早的 C 标准中引入的，用于表示宽字符，但其具体大小和编码并不固定
  */
  setlocale(LC_ALL, "en_US.UTF-8");    // 设置区域
  wchar_t sheep = L'A';
  wchar_t horse[] = L"Hello, 世界";
  wint_t monkey = L'世'; 

  wctrans_t lower = wctrans("toupper"); // 获取转换类型
  wchar_t lion = L'a'; // 定义一个宽字符
  wchar_t lionupper = towctrans(lion, lower); // 转换宽字符

  wctype_t is_digit = wctype("digit"); // 获取分类类型
  wchar_t digit_tiger_char = L'5';   // 定义一个宽字符
  wchar_t non_digit_tiger_char = L'A';  // 定义一个宽字符
  int result_digit = iswctype(digit_tiger_char, is_digit); // 分类检查
  int result_non_digit = iswctype(non_digit_tiger_char, is_digit); // 分类检查

  int direction = fwide(stdout, 0);  // 查询文件流的宽度模式 一旦文件流的宽度模式被设置，后续的 fwide 调用不能改变它
  if (direction > 0) {
    wprintf(L"Stream is wide-oriented\n");
    wprintf(L"sheep is %lc\n", sheep);
    wprintf(L"horse is %ls\n", horse);
    wprintf(L"monkey is %lc\n", (wchar_t)monkey);  
    wprintf(L"monkey is %ld\n", monkey);
    wprintf(L"lion is %lc, towctrans is %lc\n", lion, lionupper);
    wprintf(L"digit_tiger_char is %lc, is_digit is %d\n", digit_tiger_char, result_digit);
    wprintf(L"digit_tiger_char is %lc, is_digit is %d\n", non_digit_tiger_char, result_non_digit);
  } else if (direction < 0) {
    printf("Stream is byte-oriented\n");
    printf("sheep is %lc. unicode number = %d.\n", sheep, sheep);
    printf("horse is %ls\n", horse);
    printf("monkey is %lc. unicode number = %u.\n", (wchar_t)monkey, monkey);
    printf("lion is %lc, towctrans is %lc\n", lion, lionupper);
    printf("digit_tiger_char is %lc, is_digit is %d\n", digit_tiger_char, result_digit);
    printf("digit_tiger_char is %lc, is_digit is %d\n", non_digit_tiger_char, result_non_digit);
  } else {
    return -1;
  }
  printf("wchar_t size of %lu. minimum = %d. maximum = %d.\n", sizeof(wchar_t), WCHAR_MIN, WCHAR_MAX);
  printf("wint_t size of %lu.\n", sizeof(wint_t));
  printf("wctrans_t size of %lu.\n", sizeof(wctrans_t));
  printf("wctype_t size of %lu.\n", sizeof(wctype_t));

#endif // WCHAR_T_TYPE wchar_t 类型

#ifdef CHART8_32_T
  /*
  char16_t、char32_t 在 C11 中引入了 char16_t 和 char32_t，分别用于表示 UTF-16 和 UTF-32 编码的字符
  char8_t 在 C11 没有引入 char8_t（这是 C++20 的特性），但可以使用 typedef 来模拟 char8_t 的功能，表示 UTF-8 编码的字符
  使用这些类型时，可以通过相应的字符串字面量前缀（如 u 和 U）来定义 UTF-16 和 UTF-32 编码的字符串
  char16_t 和 char32_t 类型的字符串不能直接使用 printf 打印，需要转换为适合打印的形式。可以通过逐个字符打印它们的十六进制值

  char8_t <=> unsigned char 
  char16_t <=> uint_least16_t
  char32_t <=> uint_least32_t

  char16_t 定义：char16_t 是在 C11 和 C++11 标准中引入的，用于表示 16 位的 Unicode 字符，目的是为了提供一致的、标准化的字符类型，这种一致性有助于跨平台编程和数据交换
  char16_t 大小：char16_t 固定为 2 字节（16 位）
  char16_t 用途：主要用于表示 UTF-16 编码的字符
  char16_t 标准化：char16_t 是 C11 和 C++11 标准的一部分，专门用于表示 UTF-16 编码的字符，具有明确的大小，使用明确的字符类型（如 char16_t）可以提高类型安全性，避免因为不同大小的 wchar_t 导致的潜在错误

  char32_t 定义：char32_t 也是在 C11 和 C++11 标准中引入的，用于表示 32 位的 Unicode 字符，目的是为了提供一致的、标准化的字符类型，这种一致性有助于跨平台编程和数据交换
  char32_t 大小：char32_t 固定为 4 字节（32 位）
  char32_t 用途：主要用于表示 UTF-32 编码的字符
  char32_t 标准化：char32_t 是 C11 和 C++11 标准的一部分，专门用于表示 UTF-32 编码的字符，具有明确的大小，使用明确的字符类型（如 char32_t）可以提高类型安全性，避免因为不同大小的 wchar_t 导致的潜在错误
  */
  typedef unsigned char char8_t;
  const char8_t* elephant = (const char8_t*)"Hello, UTF-8 世界";
  char16_t wolf[] = u"Hello, UTF-16 世界";
  char32_t fox[] = U"Hello, UTF-32 世界";
  
  print_green("elephant UTF-8 string: %s\n", elephant);
  
  print_green("wolf UTF-16 string:\n"); // 打印 UTF-16 16进制
  for (size_t i = 0; i < sizeof(wolf) / sizeof(wolf[0]); ++i) {
      print_green("%04x ", wolf[i]);
  }
  size_t dest_size = 256;
  char utf16to8str[dest_size];
  utf16_to_utf8(utf16to8str, wolf, dest_size);  // UTF-16 转为 UTF-8 打印 
  print_green("\nwolf convert utf8 is %s. chart16 size of %d.\n", utf16to8str, sizeof(char16_t));
 
  print_green("fox UTF-32 string\n");  // 打印 UTF-32 16进制
  for (size_t i = 0; i < sizeof(fox) / sizeof(fox[0]); ++i) {
      print_green("%08x ", fox[i]);
  }
  char utf32to8str[dest_size];
  utf32_to_utf8(utf32to8str, fox, dest_size); // UTF-32 转为 UTF-8 打印 
  print_green("\nfox convert utf8 is %s. chart32 size of %d.\n", utf32to8str, sizeof(char32_t));  

#endif // CHART8_32_T char8~32_t 类型

#ifdef PRINT_ASCII
  puts("Printable ASCII:");
  for (int i = 32; i < 127; ++i) {
      putchar(i);
      putchar(i % 16 == 15 ? '\n' : ' ');
  }
  puts("\n");
#endif // PRINT_ASCII

  return 0;
}

/**
* @brief             utf16 转为 utf8
* @param   dest      Param Description
* @param   src       Param Description
* @param   dest_size Param Description
*
* @note              Revision History
*/
void utf16_to_utf8(char *dest, const char16_t *src, size_t dest_size) {
  size_t i = 0;
  while (*src && i < dest_size - 1) {
    uint32_t codepoint;
    if (*src >= 0xD800 && *src <= 0xDBFF) {  // 高代理项
      if (*(src + 1) >= 0xDC00 && *(src + 1) <= 0xDFFF) {  // 低代理项
        codepoint = 0x10000 + (((*src - 0xD800) << 10) | (*(src + 1) - 0xDC00));
        src += 2;
      } else {
        // 错误处理：孤立的高代理项
        codepoint = *src++;
      }
    } else {
      codepoint = *src++;
    }

    if (codepoint < 0x80) {
      dest[i++] = (char) codepoint;
    } else if (codepoint < 0x800) {
      if (i + 2 >= dest_size) break;  // 保证不会越界
      dest[i++] = (char) (0xC0 | (codepoint >> 6));
      dest[i++] = (char) (0x80 | (codepoint & 0x3F));
    } else if (codepoint < 0x10000) {
      if (i + 3 >= dest_size) break;  // 保证不会越界
      dest[i++] = (char) (0xE0 | (codepoint >> 12));
      dest[i++] = (char) (0x80 | ((codepoint >> 6) & 0x3F));
      dest[i++] = (char) (0x80 | (codepoint & 0x3F));
    } else {
      if (i + 4 >= dest_size) break;  // 保证不会越界
      dest[i++] = (char) (0xF0 | (codepoint >> 18));
      dest[i++] = (char) (0x80 | ((codepoint >> 12) & 0x3F));
      dest[i++] = (char) (0x80 | ((codepoint >> 6) & 0x3F));
      dest[i++] = (char) (0x80 | (codepoint & 0x3F));
    }
  }
  dest[i] = '\0';
}

/**
* @brief             utf32 转为 utf8
* @param   dest      Param Description
* @param   src       Param Description
* @param   dest_size Param Description
*
* @note              Revision History
*/
void utf32_to_utf8(char *dest, const char32_t *src, size_t dest_size) {
  size_t i = 0;
  while (*src && i < dest_size - 1) {
    if (*src < 0x80) {
      dest[i++] = (char) *src;
    } else if (*src < 0x800) {
      dest[i++] = (char) (0xC0 | (*src >> 6));
      dest[i++] = (char) (0x80 | (*src & 0x3F));
    } else if (*src < 0x10000) {
      dest[i++] = (char) (0xE0 | (*src >> 12));
      dest[i++] = (char) (0x80 | ((*src >> 6) & 0x3F));
      dest[i++] = (char) (0x80 | (*src & 0x3F));
    } else {
      dest[i++] = (char) (0xF0 | (*src >> 18));
      dest[i++] = (char) (0x80 | ((*src >> 12) & 0x3F));
      dest[i++] = (char) (0x80 | ((*src >> 6) & 0x3F));
      dest[i++] = (char) (0x80 | (*src & 0x3F));
    }
    src++;
  }
  dest[i] = '\0';
}