/**
* @file              comments.c
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.02
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.02 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <stdio.h>  // 头文件

#define TOUR_C_BASIC_CONCEPTS_COMMENTS

/*
### 注释

注释（Comments）是一种代码内文档。当它们插入到程序中时，编译器实际上会忽略它们;它们仅用于读取源代码的人类用作注释。

语法
  / * 评论 * /  (1)
  // 评论       (2) （自 C99 起）
1)通常称为 “C 样式” 或 “多行” 注释。
2)通常称为 “C++ 样式” 或 “单行” 注释。
在翻译阶段 3 中，通过将每个注释替换为单个空格字符，从程序中删除所有注释。

C样式注释通常用于注释大块文本或小代码片段;但是，它们可用于注释单行。要将文本作为C样式注释插入，只需用 和 将文本括起来即可。C 样式的注释告诉编译器忽略 和之间的所有内容。虽然它不是 C标准的一部分，并且经常被用来表示文档块;这是合法的，因为第二个星号只是被视为注释的一部分。/////**** /
除了在字符常量、字符串文本或注释中外，字符会引入注释。检查此类注释的内容只是为了识别多字节字符并查找终止注释的字符。C样式的注释不能嵌套。/ ** /

C++样式的注释通常用于注释单行文本或代码;但是，它们可以放在一起以形成多行注释。要将文本作为C++样式的注释插入，只需在文本前面和后面加上换行符即可。C++样式的注释告诉编译器忽略 和 新行之间的所有内容。////
除了在字符常量、字符串文本或注释中外，这些字符会引入一个注释，该注释包括所有多字节字符，但不包括下一个换行符。检查此类注释的内容仅用于识别multibyte 字符，并查找终止注释的换行符。

C++样式的注释可以嵌套：// // y = f(x); // invoke algorithm
C样式的注释可能会出现在 C++ 样式的注释中： // y = f(x); / * invoke algorithm *
/ C++ 样式的注释可能会出现在 C 样式的注释中;这是一种排除一小块源代码的机制： / *
y = f(x); // invoke algorithms
z = g(x);
* /（自 C99 起）

笔记：由于注释在预处理器阶段之前被删除，因此不能使用宏来形成注释，并且未终止的 C 样式注释不会从 #include 文件中溢出。

/ * An attempt to use a macro to form a comment. /
/ But, a space replaces characters "//". * /
#ifndef DEBUG
#define PRINTF //
#else
#define PRINTF printf
#endif
...
PRINTF("Error in file %s at line %i\n", FILE, LINE);

除了注释掉之外，用于源代码排除的其他机制包括：

#if 0
puts("this will not be compiled");
/ * no conflict with C-style comments * /
// no conflict with C++-style comments
#endif

和

if(0) {
puts("this will be compiled but not be executed");
/ * no conflict with C-style comments * /
// no conflict with C++-style comments
}

在一些罕见的情况下，C99 中引入 // 注释是一个突破性的变化：

a = b // *divisor:* / c

d; / * C89 compiles a = b / c + d;
C99 compiles a = b + d; * /

例:运行此代码

#include <stdio.h>
/ *
C-style comments can contain
multiple lines.
* /
/ * Or, just one line. * /

// C++-style comments can comment one line.

// Or, they can
// be strung together.

int main(void)
{
// The below code won't be run
// puts("Hello");

// The below code will be run
puts("World");

// A note regarding backslash + newline.
// Despite belonging to translation phase 2 (vs phase 3 for comments),
// '' still determines which portion of the source code is considered
// as 'comments':
// This comment will be promoted to the next line
puts("Won't be run"); // may issue a warning "multi-line comment"
puts("Hello, again");
}

输出：

World
Hello, again
*/

/*
我们被要求深入完整地解释C语言中的注释（Comments）概念，并举例说明和总结。根据提供的材料，注释是代码中的文档，编译器会忽略它们，仅用于人类阅读。

 注释有两种形式：C风格（多行注释）和C++风格（单行注释，自C99起引入）。
 我们将按照以下结构组织：
 1. 语法和类型
 2. 行为（包括翻译阶段、嵌套规则等）
 3. 注意事项
 4. 示例分析
 5. 总结

 注意：虽然问题中提到了C++风格的注释在C99中引入，但我们的焦点是C语言。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int comments_fn()
{

    printf("comments function begin...");

    return 0;
}