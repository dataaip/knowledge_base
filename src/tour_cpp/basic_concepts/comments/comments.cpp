/**
* @file              comments.cpp
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

#include <iostream>

#define TOUR_CPP_BASIC_CONCEPTS_COMMENTS

/*
### 注释

注释用作一种代码内文档。当插入到程序中时，编译器实际上会忽略它们;它们仅用于阅读源代码的人类用作注释。尽管特定文档不是 C++ 标准的一部分，但存在多个实用程序，可以解析具有不同文档格式的注释。

语法
  / * 评论 * /	(1)	
  // 评论	    (2)	
1)通常称为 “C 样式” 或 “多行” 注释。
2)通常称为“C++ 样式”或“单行”注释。
在翻译阶段 3 中，通过将每个注释替换为单个空格字符，从程序中删除所有注释。

C 样式注释通常用于注释大块文本，但是，它们可用于注释单行。要插入 C 样式注释，只需将文本括起来即可 和 ;这将导致编译器忽略注释的内容。虽然它不是 C++ 标准的一部分，并且通常用于表示文档块;这是合法的，因为第二个星号被简单地视为注释的一部分。C 样式注释不能嵌套。/ ** / / *** /

C++ 样式的注释通常用于注释单行，但是，可以将多个 C++ 样式的注释放在一起以形成多行注释。C++ 样式的注释告诉编译器忽略新行之间的所有内容。//

笔记：由于注释在预处理器阶段之前被删除，因此不能使用宏来形成注释，并且未终止的 C 样式注释不会从 #include 文件中溢出。

除了注释掉之外，用于源代码排除的其他机制包括

#if 0
    std::cout << "this will not be executed or even compiled\n";
#endif

和

if (false)
{
    std::cout << "this will not be executed\n";
}

例：运行此代码

#include <iostream>
 
/ * C-style comments can contain
multiple lines * /
/ * or just one * /
 
/ **************
 *  you can insert any *, but
 *  you can't make comments nested
 * /
 
// C++-style comments can comment one line
 
// or, they can
// be strung together
 
int main()
{
    // comments are removed before preprocessing,
    // so ABC is "1", not "1//2134", and "1 hello world"
    // will be printed
#define ABC 1//2134
    std::cout << ABC << " hello world\n";
 
    // The below code won't be run
    // return 1;
 
    // The below code will be run
    return 0;
}
    
输出：

1 hello world
*/

/*
我们正在讨论C++中的注释机制。根据提供的材料，C++支持两种注释：C风格的多行注释（/ * ... * /）和C++风格的单行注释（// ...）。注释在预处理阶段之前被移除，每个注释被替换为一个空格字符。注释仅用于开发者阅读，编译器会忽略它们。

关键点：
1. C风格注释：以`/ *`开始，以`* /`结束，可以跨越多行。不能嵌套（即不能在C风格注释内再使用`/ * ... * /`）。
2. C++风格注释：以`//`开始，直到行末。可以连续使用多个单行注释来实现多行注释的效果。C++风格注释内可以包含C风格注释（但不会被视为注释嵌套，因为整个C风格注释都被视为单行注释的一部分）。
3. 注释移除发生在翻译阶段3，在预处理（阶段4）之前。因此，注释中的内容不会被预处理处理，也不能用宏来生成注释。
4. 提供了其他排除代码的方法，例如使用预处理指令`#if 0 ... #endif`和运行时条件`if(false) { ... }`。

示例代码分析：
- 示例中展示了两种注释的使用方式。
- 特别指出，在宏定义中使用注释要注意，因为注释在预处理之前被移除，所以宏定义中若包含注释，则注释部分会被移除，仅留下有效代码。
  例如：`#define ABC 1//2134` 在预处理后，`//2134`被移除，所以ABC被定义为`1`。

现在，我们按照要求进行深入完整的解释并举例说明，最后总结。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto comments_fn() -> int
{
    std::cout << "comments function begin..." << std::endl;

    return 0;
}