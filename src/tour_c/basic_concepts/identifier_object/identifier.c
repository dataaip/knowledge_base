/**
* @file              identifier.c
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.05
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.05 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <stdio.h>  // 头文件

#define TOUR_C_BASIC_CONCEPTS_IDENTIFIER_OBJECT

/*
### 标识符C C 语言 基本概念 

标识符是使用 XID_Continue 类（自 C23 起）的 \u 和 \U 转义表示法（自 C99 起）指定的任意长度的数字、下划线、小写和大写拉丁字母以及 Unicode 字符的序列。有效标识符必须以非数字字符（拉丁字母、下划线或 Unicode 非数字字符（自 C99 起）（C23 之前）或类 XID_Start 的 Unicode 字符（自 C23 起））开头。标识符区分大小写（小写字母和大写字母不同）。每个标识符都必须符合规范化表单 C。（自 C23 起）

如果标识符中允许原始（未转义）Unicode 字符，则它是实现定义的：
char *\U0001f431 = "cat"; // supported
char *🐱 = "cat"; // implementation-defined
                  // (e.g. works with Clang, but not GCC prior to version 10)
                  // both are ill formed in C23. Emoji are not XID_Start characters（自 C99 年起）（至 C23）
在 ISO/IEC 10646 （Unicode） 中，其相应码位具有 XID_Start 或 XID_Continue 属性的实现定义字符可以分别出现在标识符的第一个字符的开头或之后。	（自 C23 起）

标识符可以表示以下类型的实体：
  对象
  功能
  标记（struct、union 或 enumerations)
  结构或联合成员
  枚举常量
  typedef 名称
  标签名称
  宏名称
  宏参数名称
除宏名称或宏参数名称以外的每个标识符都具有范围，属于名称空间，并且可能具有链接。相同的标识符可以表示程序中不同点的不同实体，或者如果实体位于不同的命名空间中，则可以在同一点表示不同的实体。

保留标识符
以下标识符是保留的，不能在程序中声明（这样做会调用未定义的行为）：
  作为关键字的标识符不能用于其他目的。特别是，不允许 #define 或 #undef 与关键字相同的标识符。
  所有以下划线开头的外部标识符。
  所有以下划线开头，后跟大写字母或其他下划线的标识符（这些保留的标识符允许库使用许多幕后非外部宏和函数）。
  由标准库定义的所有外部标识符（在托管环境中）。这意味着不允许用户提供的外部名称匹配任何库名称，即使声明的函数与库函数相同也是如此。
  声明为保留供标准库实现或将来使用的标识符（请参阅下文）。
  声明为可能保留并由实现提供的标识符（见下文）。 （自 C23 起）
所有其他标识符都可用。在将程序从一个编译器和库移动到另一个编译器和库时，可以使用未保留或可能保留的标识符（自 C23 起），而不必担心意外冲突。
注意：在 C++ 中，任何位置带有双下划线的标识符在所有位置都保留;在 C 中，仅保留以双下划线开头的 MissAV.com |

库中的保留标识符和可能保留的标识符
standard 库保留它提供的每个标识符。具有外部链接的保留标识符（例如每个标准函数的名称）被保留，无论包含哪个 Headers。当包含其任何关联的 Headers 时，将保留其他保留标识符。
潜在保留的标识符旨在供 standard 的实现和未来修订版使用。如果实现提供了潜在保留的标识符，则该标识符将成为保留的标识符。
只允许 implementations 提供保留为函数名称的潜在保留标识符的外部定义。
未由实现提供的潜在保留标识符不会保留。用户可以声明或定义它们，而不会产生未定义的行为。但是，此类用法是不可移植的。（自 C23 起）
以下标识符是保留的或可能保留的（自 C23 起），供标准库实现或将来使用。
1）函数名称，所有这些名称都可能被保留（自 C23 起）
  cerf， cerfc， cexp2， cexpm1， clog10， clog1p， clog2， clgamma， ctgamma， csinpi， ccospi， ctanpi， casinpi， cacospi， catanpi， ccompoundn， cpown， <b48&gt;cpowr</b48>、crootn、crsqrt、cexp10m1、cexp10、cexp2m1、clog10p1、clog2p1、clogp1（自 C23 起）及其后缀为 -f 和 -l 的变体，在 <complex.h 中>（自 C99 起）
  以小写字母开头或后跟小写字母，在 <ctype.h> 和 <wctype.h> 中（自 C95 起）isto
  以 或 wcs 开头（自 C23 起），后跟小写字母，在 <stdlib.h> 和 <inttypes.h>（自 C23 起）str
  从 cr_ 开始，在 <math.h> 中（自 C23 起）
  以 wcs 开头，后跟小写字母，在 <wchar.h> 中（自 C95 起）
  以 atomic_ 开头，后跟一个小写字母，在 <stdatomic.h> 中（自 C11 起）
  以 cnd_ 开头，mtx_、thrd_ 或 tss_ 后跟一个小写字母，在 <threads.h> 中（自 C11 起）
2）typedef 名称，所有这些名称都可能被保留（自 C23 起）
  以 int 或 uint 开头，以 _t 结尾，在 <stdint.h> 中（自 C99 起）
  以 atomic_ 开头或 memory_ 后跟小写字母，在 <stdatomic.h> 中（自 C11 起）
  以 cnd_ 开头，mtx_、thrd_ 或 tss_ 后跟一个小写字母，在 <threads.h> 中（自 C11 起）
3) 宏名称
  以 开头，后跟数字或大写字母，在 <errno.h>E
  以 FE_ 开头，后跟大写字母，在 <fenv.h> 中（自 C99 起）
  在 <float.h> 中，以 DBL_、DEC32_、DEC64_、DEC128_、DEC_、FLT_ 或 LDBL_ 开头，后跟大写字母，这些标识符可能是保留的（自 C23 起）
  以 INT 或 UINT 开头，以 _MAX、_MIN、_WIDTH（自 C23 起）或 _C 结尾，在 <stdint.h>;这些标识符可能是保留的（自 C23 起）（自 C99 起）
  以 PRI 或 SCN 开头，后跟小写字母或字母 X，在 <inttypes.h>; 这些标识符可能是保留的（自 C23 起）（自 C99 起）
  以 开头，后跟大写字母，在 <locale.h>LC_
  以 FP_ 开头，后跟大写字母，在 <math.h> 中（自 C23 起）
  在 <math.h> 中，这些标识符可能MATH_开头，后跟大写字母（自 C23 起）
  在 <signal.h 中，以大写字母开头或后跟大写字母>SIGSIG_
  以 TIME_ 开头，后跟大写字母，在 <time.h> 中（自 C11 起）
  以 ATOMIC_ 开头，后跟一个大写字母，在 <stdatomic.h>; 这些标识符可能是保留的（自 C23 起）（自 C11 起）
4) 枚举常量，所有这些常量都可能被保留（自 C23 起）
  以 memory_order_ 开头，后跟一个小写字母，在 <stdatomic.h> 中（自 C11 起）
  以 cnd_ 开头，mtx_、thrd_ 或 tss_ 后跟一个小写字母，在 <threads.h> 中（自 C11 起）
建议实现在声明或定义可能保留的标识符时发出警告，除非
  该声明是标识符的非定义声明，具有 implementation 提供的外部链接，并且
  声明中使用的类型与定义中使用的类型兼容。（自 C23 起）

翻译限制
尽管对标识符的长度没有具体限制，但早期编译器对标识符中有效初始字符的数量有限制，并且链接器对具有外部链接的名称施加了更严格的限制。C 要求任何符合标准的实现至少支持以下限制：
  内部标识符或宏名称中的 31 个有效初始字符
  外部标识符中的 6 个有效初始字符
  一个翻译单元中有 511 个外部标识符
  127 个标识符，在一个块中声明了块范围
  在一个预处理翻译单元中同时定义 1024 个宏标识符（至 C99）
  内部标识符或宏名称中的 63 个有效初始字符
  外部标识符中的 31 个有效初始字符
  一个翻译单元中有 4095 个外部标识符
  在一个块中声明了 511 个具有块范围的标识符
  在一个预处理翻译单元中同时定义 4095 个宏标识符（自 C99 起）

引用
C23 标准 （ISO/IEC 9899：2024）：
5.2.5.2 翻译限制 （p： TBD）
6.4.2 标识符 （p： TBD）
6.10.10 预定义的宏名称 （p： TBD）
6.11.7 预定义的宏名称 （p： TBD）
7.33 未来的图书馆方向 （p： TBD）
K.3.1.2 保留标识符 （p： TBD）

C17 标准 （ISO/IEC 9899：2018）：
5.2.4.1 翻译限制 （p： 19-20）
6.4.2 标识符 （p： 43）
6.10.8 预定义的宏名称 （p： 127-129）
6.11.9 预定义的宏名称 （p： 130）
7.31 未来的图书馆方向（第 332-333 页）
K.3.1.2 保留标识符 （p： 425）

C11 标准 （ISO/IEC 9899：2011）：
5.2.4.1 翻译限制 （p： 25-26）
6.4.2 标识符 （p： 59-60）
6.10.8 预定义的宏名称 （p： 175-176）
6.11.9 预定义的宏名称 （p： 179）
7.31 未来的图书馆方向（第 455-457 页）
K.3.1.2 保留标识符 （p： 584）

C99 标准 （ISO/IEC 9899：1999）：
5.2.4.1 翻译限制 （p： 20-21）
6.4.2 标识符 （p： 51-52）
6.10.8 预定义的宏名称 （p： 160-161）
6.11.9 预定义的宏名称 （p： 163）
7.26 未来的图书馆方向（第 401-402 页）

C89/C90 标准 （ISO/IEC 9899：1990）：
2.2.4.1 翻译限制
3.1.2 标识符
3.8.8 预定义的宏名称
*/

/*
我们面对的是一个关于C语言标识符的详细描述。我将按照要求，深入完整地解释这个概念，并通过举例说明，最后进行总结。

### 核心概念解析

1. **标识符定义**：
   - 标识符是程序中用于命名变量、函数、结构体、枚举等实体的名称。
   - 允许的字符：数字、下划线、大小写拉丁字母以及Unicode字符（从C99开始支持，但具体支持程度由实现定义）。
   - 必须以非数字字符开头（拉丁字母、下划线或Unicode非数字字符，C23起要求是XID_Start类字符）。
   - 区分大小写。
   - C23新增要求：必须符合Unicode规范化形式C。

2. **Unicode标识符示例**：
   ```c
   char *\U0001f431 = "cat"; // 使用Unicode转义序列，C99起支持
   char *🐱 = "cat";         // 直接使用Unicode字符（如emoji），由实现定义（C23前），C23中无效（因为emoji不是XID_Start字符）
   ```

3. **保留标识符（用户不能使用）**：
   - 关键字（如`int`, `for`等）。
   - 所有以下划线开头的外部标识符（如`_external`）。
   - 所有以下划线开头后跟大写字母或另一个下划线的标识符（如`_MAX`, `__func`）。
   - 标准库定义的所有外部标识符（在托管环境中）。
   - 标准库保留的标识符（即使未包含头文件，外部链接的保留标识符也保留）。

4. **可能保留的标识符（C23引入）**：
   - 标准库未来可能使用的标识符。
   - 实现可以选择提供这些标识符（此时它们成为保留标识符）。
   - 如果实现没有提供，用户可以使用，但不可移植。

5. **翻译限制**：
   - C99后要求实现至少支持：
     - 内部标识符：63个有效初始字符。
     - 外部标识符：31个有效初始字符。
     - 一个翻译单元中4095个外部标识符。
     - 一个块中511个块作用域标识符。
     - 4095个同时定义的宏。

### 深入解释与举例

#### 1. 合法与非法标识符示例
```c
int myVar;        // 合法
int _private;     // 合法（但具有文件作用域时，可能与其他保留标识符冲突）
int 123var;       // 非法：以数字开头
int var@name;     // 非法：包含不允许字符'@'
int \u03B1;       // 合法（希腊字母α），C99起支持
int α;            // 实现定义（C23前），C23要求必须是XID_Start字符
```

#### 2. 保留标识符冲突示例
```c
#define int long  // 未定义行为：不能重新定义关键字
int _MAX;         // 可能冲突，因为标准库宏通常是大写，但以下划线开头后跟大写字母是保留的
printf("Hello");  // 如果声明自己的printf函数，在托管环境中是未定义行为
```

#### 3. 可能保留的标识符使用（C23）
```c
// 假设实现没有提供atomic_my_flag
int atomic_my_flag; // 允许，但不可移植（其他实现可能保留它）
```

#### 4. 块作用域标识符限制
```c
void func() {
    int a1, a2, ... , a511; // 合法，最多511个块作用域标识符
    int a512; // 可能超过限制（取决于编译器支持）
}
```

### 总结

1. **标识符规则**：
   - 由允许的字符构成，不能以数字开头，区分大小写。
   - C23起必须符合Unicode规范化形式C，且首字符必须是XID_Start类。

2. **保留标识符**：
   - 用户代码禁止使用关键字和特定模式的标识符（如`_`开头后跟大写字母）。
   - 避免使用标准库名称（尤其是外部链接的函数名如`printf`）。

3. **可能保留标识符（C23）**：
   - 增加了灵活性，但使用非实现提供的可能保留标识符会降低可移植性。

4. **翻译限制**：
   - 现代C编译器支持较长的标识符（内部63字符，外部31字符）和较多的标识符数量（外部4095个），但应避免接近这些限制。

5. **最佳实践**：
   - 使用清晰、描述性的名称。
   - 避免以下划线开头（除非是系统级编程且了解规则）。
   - 不使用与标准库相似的名称。
   - 在跨平台代码中避免使用可能保留的标识符。

通过深入理解标识符规则，开发者可以写出更健壮、可移植的C代码。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int identifier_fn()
{

    printf("identifier function begin...");

    return 0;
}