/**
* @file              translation_phases.c
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

#define TOUR_C_BASIC_CONCEPTS_TRANSLATION_PHASES

/*
### 翻译阶段 C C 语言 基本概念

C 源文件由编译器处理，就像以下阶段按此确切顺序发生一样。只要行为相同，实际实现可能会组合这些作或以不同的方式处理它们。

第一阶段
1)源代码文件（通常是采用某些多字节编码（如 UTF-8）的文本文件）的各个字节以实现定义的方式映射到*源字符集*的字符。特别是，依赖于 OS 的行尾指示符被换行符替换。
  a)5 个空白字符（空格、水平制表符、垂直制表符、换页符、换行符）
  b)10 位字符'0'自'9'
  c)52 封信'一个'自'z'和 从'A'自'Z'
  d)29 个标点符号字符：_ { } [ ] # ( ) < > % : ; .?* + - / ^ & |~ != , \ " '
2) 三合字母序列将替换为相应的单字符表示形式。（直到 C23）

第 2 阶段
1)每当反斜杠出现在行尾（紧跟换行符）时，反斜杠和换行符都会被删除，从而将两个物理源行合并为一个逻辑源行。这是一个单行作：以两个反斜杠结尾的行后跟一个空行不会将三行合并为一行。
运行此代码
```
#include <stdio.h>
 
#define PUTS p\
u\
t\
s
/ * Line splicing is in phase 2 while macros
 * are tokenized in phase 3 and expanded in phase 4,
 * so the above is equivalent to #define PUTS puts
 * /
 
int main(void)
{
 / * Use line splicing to call puts * / PUT\
S\
("Output ends here\\
0Not printed" / * After line splicing, the remaining backslash
               * escapes the 0, ending the string early.
               * /
);
}
```
2)如果非空源文件在此步骤后未以换行符结尾（无论它最初没有换行符，还是以反斜杠结尾），则行为未定义。

第 3 阶段
1)源文件被分解为注释、空白字符序列（空格、水平制表符、换行符、垂直制表符和换页）和预处理标记，如下所示
  a)标头名称：<stdio.h>或“我的文件.h”
  b) 标识符
  c)预处理 Numbers，它包括整数常量和浮点常量，但也包括一些无效的标记，例如1..E+3 的。foo或0JBK
  d)字符常量和字符串文本
  e)运算符和标点符号，如 、 、 或 。+<<=<%##
  f)不属于任何其他类别的单个非空白字符
2)每条注释都替换为一个空格字符
3)保留换行符，并且非换行符的空格序列是否可以折叠为单个空格字符是实现定义的。
如果 Importing 已解析为最多给定字符的预处理标记，则通常将下一个预处理标记视为可以构成预处理标记的最长字符序列，即使这会导致后续分析失败。这通常被称为*最大咀嚼*。
```
int foo = 1;
// int bar = 0xE+foo; // error: invalid preprocessing number 0xE+foo
int bar = 0xE/ *Comment expands to a space* /+foo; // OK: 0xE + foo
int baz = 0xE + foo; // OK: 0xE + foo
int pub = bar+++baz; // OK: bar++ + baz
int ham = bar++-++baz; // OK: bar++ - ++baz
// int qux = bar+++++baz; // error: bar++ ++ +baz, not bar++ + ++baz
int qux = bar+++/ *Saving comment* /++baz; // OK: bar++ + ++baz
```
最大蒙克规则的唯一例外是：

- 标头名称预处理令牌仅在 #include 或 #embed（自 C23 起）指令中、__has_include和 __has_embed 表达式（自 C23 起）以及 #pragma指令中的实现定义位置中形成。
```
#define MACRO_1 1
#define MACRO_2 2
#define MACRO_3 3
#define MACRO_EXPR (MACRO_1 <MACRO_2> MACRO_3) // OK: <MACRO_2> is not a header-name
```

第 4 阶段
1) 执行 Preprocessor 的 Preprocessor执行。
2)#include指令引入的每个文件都以递归方式经历阶段 1 到 4。
3)在此阶段结束时，所有预处理器指令都将从源中删除。

第 5 阶段
1)字符常量和字符串文本中的所有字符和转义序列都从*源字符集*转换为*执行字符集*（可以是多字节字符集，例如 UTF-8，只要阶段 1 中列出的*基本源字符集中*的所有 96 个字符都具有单字节表示形式）。如果转义序列指定的字符不是执行字符集的成员，则结果是实现定义的，但保证不是 null （宽） 字符。
注意：在某些实现中，此阶段执行的转换可以通过命令行选项进行控制：gcc 和 clang 使用-finput-字符集要指定源字符集的编码，请执行以下作：-fexec-字符集和-fwide-exec-字符集指定没有编码前缀的字符串字面量和字符常量中执行字符集的编码（C11 起）。

第 6 阶段
相邻的字符串文本是串联的。

第 7 阶段
进行编译：对标记进行句法和语义分析，并将其翻译为翻译单元。

第 8 阶段
进行链接：满足外部引用所需的翻译单元和库组件被收集到程序映像中，其中包含在其执行环境 （OS） 中执行所需的信息。

引用
- C23 标准 （ISO/IEC 9899：2024）：
- C17 标准 （ISO/IEC 9899：2018）：
- C11 标准 （ISO/IEC 9899：2011）：
- C99 标准 （ISO/IEC 9899：1999）：
- C89/C90 标准 （ISO/IEC 9899：1990）：
*/

/*
我们被要求深入解释C语言中的翻译阶段（translation phases）概念，并结合附件内容进行举例说明和总结。附件内容详细描述了C语言源代码从物理文件到可执行程序的完整翻译过程，共分为8个阶段。

### 深入解析C语言翻译阶段

#### 1. **翻译阶段概述**
C标准明确定义了源代码必须经历的8个处理阶段。这些阶段确保了编译过程的可预测性，尽管编译器可以合并某些阶段，但必须产生与按顺序执行相同的结果。

#### 2. **各阶段详解**

**阶段1：物理源文件到多字节字符的映射**
- **操作**：将源文件的字节序列映射到源字符集的字符（如UTF-8）。特别处理行尾指示符（如Windows的CRLF转换为LF）。
- **源字符集**：包含96个基本字符（5个空白字符、10个数字、52个字母、29个标点符号）。
- **三字符序列替换（C23前）**：如??=替换为#（附件未强调，但标准提及）。
- **示例**：
  ```c
  // 源文件字节序列：'i','n','t',' ','m','a','i','n','(','\r','\n','{','}'
  // 阶段1后：行尾'\r\n'被替换为'\n'，形成有效字符序列
  ```

**阶段2：行合并（Line Splicing）**
- **操作**：删除行尾的反斜杠`\`和紧随的换行符，将两行合并为一行。
- **关键点**：仅当反斜杠位于行尾（紧跟换行符）时才触发。
- **示例**（附件代码）：
  ```c
  #define PUTS p\   // 阶段2合并后：p u t s → puts
  u\
  t\
  s
  ```

**阶段3：分解为预处理记号**
- **操作**：将源文件分解为：
  - 注释（被替换为一个空格）
  - 空白序列（可能折叠为一个空格）
  - 预处理记号：头名、标识符、预处理数字、字符/字符串字面量、运算符、其他字符。
- **最大咀嚼规则（Max Munch）**：尽可能长的序列构成一个记号（如`0xE+foo`被视为无效的预处理数字）。
- **例外**：头名`<stdio.h>`仅在`#include`等指令中识别。
- **示例**：
  ```c
  int bar = 0xE+foo; // 错误：0xE+ 被解析为无效预处理数字
  int bar = 0xE + foo; // 正确：0xE 和 + 是独立记号
  ```

**阶段4：预处理**
- **操作**：
  - 执行预处理指令（如`#include`、`#define`）。
  - 递归处理`#include`引入的文件（阶段1-4）。
  - 删除所有预处理指令。
- **示例**：
  ```c
  #define MACRO 42
  int x = MACRO; // 替换为 int x = 42;
  ```

**阶段5：字符集转换**
- **操作**：字符/字符串字面量中的字符和转义序列从源字符集转换为执行字符集。
- **处理规则**：
  - 基本源字符集中的96个字符保证有单字节表示。
  - 无法映射的转义序列产生实现定义值（非空字符）。
- **编译器选项示例**：GCC的`-finput-charset`指定源字符集编码，`-fexec-charset`指定执行字符集编码。

**阶段6：字符串字面量连接**
- **操作**：相邻字符串字面量被连接为单个字符串。
- **示例**：
  ```c
  char* s = "Hello" " World"; // 变为 "Hello World"
  ```

**阶段7：编译**
- **操作**：对记号进行语法和语义分析，生成目标代码（翻译单元）。

**阶段8：链接**
- **操作**：解析外部引用，组合翻译单元和库，生成可执行文件。

### 关键概念举例说明

#### 示例1：行合并（阶段2）
```c
#include <stdio.h>
#define MESSAGE "Hello \
World"   // 阶段2合并为 "Hello World"

int main() {
    puts(MESSAGE);
}
```
**输出**：`Hello World`

#### 示例2：最大咀嚼规则（阶段3）
```c
int x = 1;
int y = 2;
int z = x+++y; // 解析为 x++ + y → z = 1+2=3, x变为2
```
- 错误案例：`int z = x+++++y;` → 解析为`x++ ++ +y`（无效）。

#### 示例3：字符集转换（阶段5）
假设执行字符集为ISO-8859-1：
```c
char euro = '\u20AC'; // €符号
// 若执行字符集不支持Unicode，值是实现定义的（如0x80）。
```

### 总结

1. **阶段顺序性**：8个阶段严格顺序执行，确保编译确定性。
2. **核心处理阶段**：
   - **阶段1-3**：源码物理形式到逻辑记号的转换（字符映射、行合并、词法分解）。
   - **阶段4**：宏处理和文件包含。
   - **阶段5-6**：字面量处理（字符集转换、字符串连接）。
   - **阶段7-8**：编译和链接。
3. **关键规则**：
   - **行合并**：反斜杠换行符的删除实现多行逻辑行。
   - **最大咀嚼**：最长有效记号优先，避免歧义。
   - **字符集转换**：保证基本字符可移植性，非基本字符实现定义。
4. **现代实践**：
   - 使用UTF-8源文件避免编码问题。
   - 利用编译器选项控制字符集转换（如GCC的`-fexec-charset`）。
   - 避免依赖实现定义行为（如非基本字符的字面量值）。

> **最终结论**：理解C翻译阶段对于处理跨平台问题、调试预处理错误和编写健壮代码至关重要。开发者应特别注意阶段2（行合并）、阶段3（记号化）和阶段5（字符集转换）的细节，这些是常见错误来源。现代C开发中，推荐使用Unicode（UTF-8）编码并明确字符集转换设置，以确保代码可移植性。
*/

#define PUTS p\
u\
t\
s
/* Line splicing is in phase 2 while macros
 * are tokenized in phase 3 and expanded in phase 4,
 * so the above is equivalent to #define PUTS puts
 */

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int maximal_munch()
{
    int foo = 1;
    // int bar = 0xE+foo; // error: invalid preprocessing number 0xE+foo
    int bar = 0xE/*Comment expands to a space*/+foo; // OK: 0xE + foo
    int baz = 0xE + foo; // OK: 0xE + foo
    int pub = bar+++baz; // OK: bar++ + baz
    int ham = bar++-++baz; // OK: bar++ - ++baz
    // int qux = bar+++++baz; // error: bar++ ++ +baz, not bar++ + ++baz
    int qux = bar++ + /*Saving comment*/ ++baz; // OK: bar++ + ++baz

    return 0;
}

#define MACRO_1 1
#define MACRO_2 2
#define MACRO_3 3
#define MACRO_EXPR (MACRO_1 <MACRO_2> MACRO_3) // OK: <MACRO_2> is not a header-name

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int translation_phases_fn()
{

    printf("translation_phases function begin...");
    // /* Use line splicing to call puts */ PUT \
    // S \

    PUTS
    ("Output ends here\\
    0Not printed" /* After line splicing, the remaining backslash
                   * escapes the 0, ending the string early.
                   */
    );  
    return 0;
}