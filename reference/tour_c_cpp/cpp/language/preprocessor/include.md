C++ 源文件包含
 
在指令后面的行中包括其他源文件。

语法
#include <h-char-sequence> 换行符	(1)	
#include “q-char-sequence” 换行符	(2)	
#includepp-tokens 换行符	(3)	
__has_include（“q-字符序列 ”）
__has_include（<h-char-序列 >）	(4)	（从 C++17 开始）
__has_include（ 字符串文字 ）
__has_include（<h-pp-tokens>）	(5)	（从 C++17 开始）
1） 搜索由 h-char-sequence 唯一标识的标头，并将指令替换为标头的全部内容。
2） 搜索由 q-char-sequence 标识的源文件，并将指令替换为源文件的全部内容。它可以回退到 （1） 并将 q-char-sequence 视为标头标识符。
3） 如果 （1） 和 （2） 都不匹配，则 pp-token 将进行宏替换。替换后的指令将再次尝试与 （1） 或 （2） 匹配。
4） 检查标头文件或源文件是否可供包含。
5） 如果 （4） 不匹配，h-pp-tokens 将进行宏替换。替换后的指令将再次尝试与 （4） 匹配。
换行符	-	换行符
h-char 序列	-	一个或多个 h-char 的序列，其中以下任何一个的出现都由实现定义的语义有条件地支持：
字符 '
角色 ”
字符 \
字符序列
字符序列 /*
H-字符	-	源字符集的任何成员（直到 C++23） 翻译字符集 （从 C++23 开始） 除换行符和 >
q-char 序列	-	一个或多个 q-char 的序列，其中以下任何一个的出现都由实现定义的语义有条件地支持：
字符 '
字符 \
字符序列
字符序列 /*
q-字符	-	源字符集 （直到 C++23） 翻译字符集 （自 C++23 起） 的任何成员，换行符和 ”
pp 代币	-	一个或多个预处理令牌的序列
字符串文字	-	字符串文字
h-pp 代币	-	一个或多个预处理标记的序列，>
解释
1） 在位置序列中搜索由 h-char-sequence 唯一标识的标头，并导致该指令被标头的全部内容替换。如何指定地点或标识标头是实现定义的。
2） 导致该指令被 q-char-sequence 标识的源文件的全部内容替换。以实现定义的方式搜索命名源文件。
如果不支持此搜索，或者搜索失败，则会重新处理指令，就像它从原始指令中读取具有相同包含序列（包括 > 字符，如果有）的语法 （1） 一样。
3） 在指令中包含之后的预处理标记的处理方式与在普通文本中一样（即，当前定义为宏名称的每个标识符都被其预处理标记的替换列表替换）。
如果在所有替换后产生的指令与前两种形式之一不匹配，则行为未定义。
将 < 和 > 预处理标记对或一对 “ 字符之间的预处理标记序列组合成单个标头名称预处理标记的方法是实现定义的。
4） 搜索由 h-char-sequence 或 q-char-sequence 标识的头文件或源文件，就好像该预处理标记序列是语法 （3） 中的 pp-tokens 一样，只是没有执行进一步的宏扩展。
如果这样的指令不能满足 #include 指令的语法要求，则程序格式不正确。
否则，如果搜索源文件成功，则 __has_include 表达式的计算结果为 1，如果搜索失败，则计算结果为 0。
5） 仅当语法 （4） 不匹配时才考虑此形式，在这种情况下，预处理标记的处理方式与普通文本相同。
如果由 header-name 标识的标头（即 <h-char-sequence> 或 “q-char-sequence”） 表示可导入的标头，则是否将 #include 预处理指令替换为以下形式的导入指令是实现定义的

导入标头名称 ; 换行符

（从 C++20 开始）
__has_include 可以用 和 #elif 的 #if 表达式进行扩展。它被 ， #ifndef ， #elifdef ， （ #elifndef （从 C++23 开始） 视 #ifdef 为定义的宏， defined 但不能在其他任何地方使用。

笔记
典型实现仅标准搜索语法 （1） 的目录。标准 C++ 库和标准 C 库隐式包含在这些标准包含目录中。标准包含目录通常可以由用户通过编译器选项进行控制。

语法 （2） 的目的是搜索不受实现控制的文件。典型的实现首先搜索当前文件所在的目录，然后回退到 （1）。

包含文件后，它由转换阶段 1-4 处理，其中可能包括递归地扩展嵌套 #include 指令，直至实现定义的嵌套限制。为了避免重复包含同一文件以及当文件包含自身时（可能是传递的）无休止的递归，通常使用标头保护： 整个标头被包装在

#ifndef FOO_H_INCLUDED /* any name uniquely mapped to file name */
#define FOO_H_INCLUDED
// contents of the file are here
#endif
许多编译器也实现了一次具有类似效果的非标准 pragma #pragma：如果已经包含相同的文件（其中文件标识以特定于作系统的方式确定），它会禁用文件的处理。

类似于 q-char-sequence 或 h-char-sequence 中的转义序列的字符序列可能会导致错误，被解释为与转义序列对应的字符，或者具有完全不同的含义，具体取决于实现。

__has_include 结果为 1 仅表示存在具有指定名称的标头文件或源文件。这并不意味着包含标头文件或源文件时不会导致错误或包含任何有用内容。例如，在同时支持 C++14 和 C++17 模式（并在其 C++14 模式下提供 __has_include 作为符合的扩展）的 C++实现上，__has_include（<optional>） 在 C++14 模式下可能是 1，但实际上 #include <optional> 可能会导致错误。

例
运行此代码
#if __has_include(<optional>)
    #include <optional>
    #define has_optional 1
    template<class T>
    using optional_t = std::optional<T>;
#elif __has_include(<experimental/optional>)
    #include <experimental/optional>
    #define has_optional -1
    template<class T>
    using optional_t = std::experimental::optional<T>;
#else
    #define has_optional 0
    template<class V>
    class optional_t
    {
        V v{};
        bool has{};
 
    public:
        optional_t() = default;
        optional_t(V&& v) : v(v), has{true} {}
        V value_or(V&& alt) const&
        {
            return has ? v : alt;
        }
        // etc.
    };
#endif
 
#include <iostream>
 
int main()
{
    if (has_optional > 0)
        std::cout << "<optional> is present\n";
    else if (has_optional < 0)
        std::cout << "<experimental/optional> is present\n";
    else
        std::cout << "<optional> is not present\n";
 
    optional_t<int> op;
    std::cout << "op = " << op.value_or(-1) << '\n';
    op = 42;
    std::cout << "op = " << op.value_or(-1) << '\n';
}
输出：

<optional> is present
op = -1
op = 42
缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

DR	应用对象	已发布的行为	正确的行为
CWG 787	C++98	如果转义序列为
类似于 q-char-sequence 或 h-char-sequence	它是有条件支持的
另请参阅
资源包含 （从 C++26 开始）
C++ 标准库头文件列表
用于包含源文件的 C 文档
