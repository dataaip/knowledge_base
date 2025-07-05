/**
* @file              translation_phases.cpp
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

#include <iostream>

#define TOUR_CPP_BASIC_CONCEPTS_TRANSLATION_PHASES

/*
### 翻译阶段 C++ C++ 语言 基本概念 

C++ 源文件由编译器处理以生成 C++ 程序。

翻译流程
C++ 程序的文本保存在称为源文件的单元中。
C++ 源文件经过翻译后成为翻译单元，包括以下步骤：
  1. 将每个源文件映射到字符序列。
  2. 将每个字符序列转换为预处理标记序列，以空格分隔。
  4. 将每个预处理令牌转换为令牌，从而形成令牌序列。
  5. 将每个标记序列转换为翻译单元。
C++ 程序可以由翻译的翻译单元组成。翻译单元可以单独翻译，然后链接以生成可执行程序。
上述过程可以分为 9 个翻译阶段。

预处理令牌
预处理标记是翻译阶段 3 到 6 中语言的最小词法元素。
预处理令牌的类别包括：
  标头名称（例如<iostream>或“我的文件.h”)
  预处理 import 和 module 指令（即进口 XXX;和模块 XXX;)（自 C++20 起）
  标识符
  预处理数字（见下文）
  字符文本，包括用户定义的字符文本（自 C++11 起）
  字符串文本，包括用户定义的字符串文本（自 C++11 起）
  运算符和标点符号，包括替代标记
  不属于任何其他类别的单个非空白字符
  如果与此类别匹配的字符是
  撇号 （， U+0027），'
  引号 （， U+0022） 或"
  不在 Basic 字符集中的字符。

预处理数字
预处理 number 的预处理标记集是整数 Literals 和浮点 Literals 的标记集的并集的超集：
.（可选） 数字 pp-continue-seq（可选）		
数字 - 数字 0-9 之一pp-continue-seq - pp-continue s 序列 每个 pp-continue 都是以下之一：
  (1)	标识符继续
  (2)	exp-char sign-char	
  (3)       .		
  (4)       ’ 数字	（自 C++14 起）
  (5)       ’ 非数字		（自 C++14 起）
标识符继续	-	有效标识符的任何非第一个字符
exp-char 函数	-	P、p、（自 C++11 起）和Ee
sign-char （符号字符）	-	和 之一+-
数字	-	数字 0-9 之一
非数字	-	拉丁字母 A/a-Z/z 和下划线之一
预处理数字没有类型或值;它在成功转换后获取整数/浮点 Literal 标记。

空白
空格由注释和/或空格字符组成。
以下字符是空白字符：
  字符制表 （U+0009）
  换行符 / 换行符 （U+000A）
  线制表 （U+000B）
  换表 （U+000C）
  空格 （U+0020）
空格通常用于分隔预处理标记，但以下情况除外：
  它不是 Header Name、character literal 和 string literal 中的分隔符。
  由包含换行符的空格分隔的预处理标记不能形成预处理指令。

#include "my header"        // OK, using a header name containing whitespace
#include/ *hello* /<iostream> // OK, using a comment as whitespace
#include
<iostream> // Error: #include cannot span across multiple lines
"str ing"  // OK, a single preprocessing token (string literal)
' '        // OK, a single preprocessing token (character literal)

Maximal munch
如果输入已解析为最多给定字符的预处理标记，则通常将下一个预处理标记视为可以构成预处理标记的最长字符序列，即使这会导致后续分析失败。这通常称为最大蒙克。
int foo = 1;
int bar = 0xE+foo;   // Error: invalid preprocessing number 0xE+foo
int baz = 0xE + foo; // OK
换句话说，最大 munch 规则有利于多字符运算符和标点符号：
int foo = 1;
int bar = 2;
int num1 = foo+++++bar; // Error: treated as “foo++ ++ +baz”, not “foo++ + ++baz”
int num2 = -----foo;    // Error: treated as “-- -- -foo”, not “- -- --foo”

最大咀嚼规则有以下例外：
标头名称预处理令牌仅在以下情况下形成：
  在包括预处理 #include 指令中的 Token
  在 __has_include 表达式中（自 C++17 起）
  在进口在 import 指令中预处理 token（自 C++20 起）
  std::vector<int> x; // OK, “int” is not a header name
如果接下来的三个字符是<::而后面的字符既不是:NOR ，则将其本身视为预处理标记，而不是替代标记的第一个字符>< <:.
  struct Foo { static const int v = 1; };
  std::vector<::Foo> x;  // OK, <: not taken as the alternative token for [
  extern int y<::>;      // OK, same as “extern int y[];”
  int z<:::Foo::value:>; // OK, same as “int z[::Foo::value];”
如果接下来的两个字符是，并且其中一个字符可以完成模板标识符，则该字符将单独视为预处理令牌，而不是作为预处理令牌的一部分。>>>>>
  template<int i> class X { / * ... * / };
  template<class T> class Y { / * ... * / };
  Y<X<1>> x3;      // OK, declares a variable “x3” of type “Y<X<1> >”
  Y<X<6>>1>> x4;   // Syntax error
  Y<X<(6>>1)>> x5; // OK
如果下一个字符开始一个字符序列，该字符序列可以是原始字符串文本的前缀和初始双引号，则下一个预处理标记是原始字符串文本。文本由与原始字符串模式匹配的最短字符序列组成。
  #define R "x"
  const char* s = R"y";         // ill-formed raw string literal, not "x" "y"
  const char* s2 = R"(a)" "b)"; // a raw string literal followed by a normal string literal（自 C++11 起）

令 牌
标记是翻译阶段 7 中语言的最小词法元素。
令牌的类别是：
  标识符
  关键字
  文字
  运算符和标点符号（预处理运算符除外）

翻译阶段
转换的执行方式与从阶段 1 到阶段 9 的顺序相同。实现的行为就像这些单独的阶段一样，尽管在实践中不同的阶段可以折叠在一起。

第 1 阶段：映射源角色
1)源代码文件的各个字节被 （以实现定义的方式） 映射到基本源字符集的字符。特别是，依赖于 OS 的行尾指示符被换行符替换。
2) 接受的源文件字符集是实现定义的（自 C++11 起）。任何无法映射到基本源字符集中的字符的源文件字符都将替换为其通用字符名称（用 或 转义）或以等效方式处理的某种实现定义形式。\u\U
3) 三合字母序列将替换为相应的单字符表示形式。（直到 C++17）（直到 C++23）
保证支持 UTF-8 代码单元序列 （UTF-8 文件） 的输入文件。其他受支持类型的 input 文件集是 implementation defined 的。如果该集不为空，则以 implementation-defined 方式确定 input 文件的种类，其中包括将 input 文件指定为 UTF-8 文件的方法，独立于其内容（识别字节 order 标记是不够的）。
  如果输入文件被确定为 UTF-8 文件，则它应为格式正确的 UTF-8 代码单元序列，并对其进行解码以生成 Unicode 标量值序列。然后，通过将每个 Unicode 标量值映射到相应的翻译字符集元素来形成翻译字符集元素序列。在生成的序列中，输入序列中由回车 （U+000D） 后跟换行符 （U+000A） 以及每个回车符 （U+000D） 组成的每对字符（由回车符 （U+000D） 组成，后面没有紧跟换行符 （U+000A），都将被单个换行符替换。
  对于实现支持的任何其他类型的 input 文件，字符将 （以实现定义的方式） 映射到翻译字符集元素序列。特别是，依赖于 OS 的行尾指示符将替换为换行符。（自 C++23 起）

第 2 阶段：拼接线
1) 如果第一个转换字符是字节顺序标记 （U+FEFF），则会将其删除。 （自 C++23 起）每当反斜杠 （） 出现在行尾（紧跟着零个或多个空格字符，而不是换行符后跟（自 C++23 起）换行符），这些字符就会被删除，将两个物理源行合并为一个逻辑源行。这是单通道作;以两个反斜杠结尾的行后跟一个空行不会将三行合并为一行。\
2)如果在此步骤后非空源文件未以换行符结尾（此时行尾反斜杠不再是拼接），则会添加终止换行符。

第 3 阶段：词法
1)源文件被分解为预处理标记和空格：
// The following #include directive can de decomposed into 5 preprocessing tokens:
//     punctuators (#, < and >)
//          │
// ┌────────┼────────┐
// │        │        │
   #include <iostream>
//     │        │
//     │        └── header name (iostream)
//     │
//     └─────────── identifier (include)
如果源文件以部分预处理令牌或部分注释结尾，则程序格式不正确：
// Error: partial string literal
"abc
// Error: partial comment
/* comment
当源文件中的字符被用来形成下一个预处理令牌时（即，不作为注释或其他形式的空格的一部分被使用），通用字符名称将被识别并替换为翻译字符集的指定元素，除非在以下预处理令牌之一中匹配字符序列：
字符字面量 （c-char-sequence)
字符串文字 （s-char-sequence 和 r-char-sequence），不包括分隔符 （d-char-sequence)
标头名称（h-char-sequence 和 q-char-sequence)（自 C++23 起）
2)在阶段 1 和阶段 2（直到 C++23）在任何原始字符串文本的初始和最终双引号之间执行的任何转换都将被还原。（自 C++11 起）
3)空格被转换：
每个注释都替换为一个空格字符。
保留换行符。
未指定是保留除换行符以外的每个非空空白字符序列还是替换为一个空格字符。

第 4 阶段：预处理
1)执行预处理器。
2)#include 指令引入的每个文件都以递归方式经历阶段 1 到 4。
3)在此阶段结束时，所有预处理器指令都将从源中删除。

第 5 阶段：确定常见的字符串文字编码
1)字符 Literals 和字符串 Literals 中的所有字符都从源字符集转换为编码（可以是多字节字符编码，例如 UTF-8，只要基本字符集的 96 个字符具有单字节表示形式）。
2) 字符 Literals 和非原始字符串 Literals 中的转义序列和通用字符名称被扩展并转换为 Literals 编码。
如果通用字符名称指定的字符无法编码为相应文本编码中的单个代码点，则结果是实现定义的，但保证不是 null （宽） 字符。（直到 C++23）
对于两个或多个相邻字符串文字标记的序列，将按此处所述确定通用编码前缀。然后，每个此类字符串文字标记都被视为具有该通用编码前缀。（字符转换移至第 3 阶段）（自 C++23 起）

第 6 阶段：连接字符串文本
相邻的字符串文本是串联的。

第 7 阶段：编译
进行编译：每个预处理标记都转换为一个标记。标记在语法和语义上进行分析，并将其翻译为翻译单元。

第 8 阶段：实例化模板
检查每个翻译单元以生成所需模板实例化的列表，包括显式实例化请求的实例化。找到模板的定义，并执行所需的实例化以生成实例化单元。

第 9 阶段：链接
满足外部引用所需的翻译单元、实例化单元和库组件被收集到一个程序映像中，其中包含在其执行环境中执行所需的信息。

笔记
源文件、翻译单元和翻译的翻译单元不必存储为文件，这些实体与任何外部表示之间也不需要任何一一对应的关系。该描述只是概念性的，没有指定任何特定的实现。
在某些实施中，可以通过命令行选项控制在阶段 5 执行的转换： gcc 和 clang 使用-finput-字符集要指定源字符集的编码，请执行以下作：-fexec-字符集和-fwide-exec-字符集分别指定普通和宽文本编码，而 Visual Studio 2015 Update 2 及更高版本使用/source-charset和/execution-charset分别指定源字符集和文字编码。（直到 C++23）
某些编译器不实现实例化单元 （也称为模板存储库或模板注册表） ，而只是在阶段 7 编译每个模板实例化，将代码存储在隐式或显式请求的对象文件中，然后链接器在阶段 9 将这些编译的实例化折叠为一个实例。

缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

博士	应用对象	发布时的行为	纠正行为
CWG 787	C++98	如果非空源文件在阶段 2 结束时不以换行符结尾，则行为为 UNDEFINED	在这种情况下，添加终止换行符
CWG 1104	C++98	替代代币<:造成std：：vector<：：std：：string>被视为std：：vector[：std：：string>	添加了额外的词法规则来解决这种情况
CWG 1775	C++11	在阶段 2 中，在原始字符串文本中形成通用字符名称会导致未定义的行为	定义明确
CWG 2747	C++98	Phase 2 拼接后检查文件结尾拼接，这是不必要的删除了检查 
P2621R3	C++98	不允许通过线路拼接或标记连接形成通用字符名称	允许

引用
C++23 标准 （ISO/IEC 14882：2024）：5.2 翻译阶段 [lex.phases]
C++20 标准 （ISO/IEC 14882：2020）：5.2 翻译阶段 [lex.phases]
C++17 标准 （ISO/IEC 14882：2017）：5.2 翻译阶段 [lex.phases]
C++14 标准 （ISO/IEC 14882：2014）：2.2 翻译阶段 [lex.phases]
C++11 标准 （ISO/IEC 14882：2011）：2.2 翻译阶段 [lex.phases]
C++03 标准 （ISO/IEC 14882：2003）：2.1 翻译阶段 [lex.phases]
C++98 标准 （ISO/IEC 14882：1998）：2.1 翻译阶段 [lex.phases]
*/

/*
我们正在处理C++的翻译阶段（编译过程）。C++标准将编译过程分为9个阶段，按顺序执行。尽管实际编译器可能会合并某些阶段，但行为必须与按顺序执行这些阶段一致。

 以下是9个阶段的详细解释和示例：

 阶段1：映射源字符
   - 将源文件的字节映射到基本源字符集的字符（例如，将操作系统的行尾符替换为换行符）。
   - 对于无法映射的字符，使用通用字符名（如\uXXXX）替换或实现定义的方式处理。
   - 在C++23之前，支持三字符序列（trigraphs）替换，但C++23移除了三字符序列。
   - 自C++23起，明确支持UTF-8文件，并规定如何将文件内容转换为翻译字符集（包括处理回车换行等）。

 示例：
   - 源文件使用UTF-8编码，其中包含一个换行符（在Windows中是CRLF，即\r\n），在阶段1中，CRLF会被替换为单个换行符（LF，即\n）。
   - 如果源文件中有三字符序列（如??=代表#），在C++17及之前会被替换，但C++23后不再支持。

 阶段2：行拼接
   - 删除反斜杠（\）后紧跟换行符（可能中间有空格）的情况，将两行拼接成一行。
   - 如果文件非空且不以换行符结尾，则添加一个换行符。

 示例：
   ```cpp
   // 阶段2前
   #define MESSAGE "Hello, \
   World!"
   ```
   阶段2后，上述代码变为：
   ```cpp
   #define MESSAGE "Hello, World!"
   ```

 阶段3：词法分解（分解为预处理记号）
   - 将源文件分解为预处理记号（preprocessing tokens）和空白字符（包括注释）。
   - 注释被替换为一个空格。
   - 保留换行符，其他空白字符序列可能被替换为一个空格（具体由实现定义）。
   - 此阶段应用“最大咀嚼”规则（maximal munch）来形成记号。

 示例：
   ```cpp
   int a = 10;
   ```
   分解为：标识符（int）、标识符（a）、运算符（=）、预处理数字（10）、分号（;）。

 阶段4：预处理
   - 执行预处理指令（如#include, #define, #ifdef等）。
   - 递归处理#include引入的文件（这些文件同样经历阶段1到4）。
   - 删除所有预处理指令（如#define等），保留宏展开后的内容。

 示例：
   ```cpp
   #define PI 3.14159
   double area = PI * r * r;
   ```
   阶段4后，宏展开为：
   ```cpp
   double area = 3.14159 * r * r;
   ```

 阶段5：确定字符串字面值的编码（C++23之前）/ 字符转换（C++23及之后）
   - 在C++23之前：将字符字面值和字符串字面值中的字符从源字符集转换为执行字符集，并处理转义序列。
   - 在C++23及之后：将字符转换移至阶段3（但转义序列扩展仍在此阶段？根据C++23标准，阶段5现在主要是确定相邻字符串字面值的公共编码前缀，并将每个字符串字面值视为具有该编码前缀。

 示例（C++23之前）：
   ```cpp
   const char* str = "你好"; // 源字符集（如UTF-8）转换为执行字符集（如UTF-8或GBK，取决于编译器设置）
   ```

 阶段6：连接相邻字符串字面值
   - 相邻的字符串字面值会被连接成一个字符串。

 示例：
   ```cpp
   const char* s = "Hello" " World!";
   ```
   阶段6后，变为：
   ```cpp
   const char* s = "Hello World!";
   ```

 阶段7：编译
   - 将预处理记号转换为记号（token），进行语法和语义分析，生成翻译单元（目标代码或中间表示）。

 示例：此阶段会检查语法，如变量声明、函数定义等，并生成抽象语法树（AST）等。

 阶段8：模板实例化
   - 处理模板实例化。编译器根据模板的使用生成具体的实例（如类模板、函数模板的实例）。

 示例：
   ```cpp
   template<typename T>
   T max(T a, T b) { return a > b ? a : b; }

   int m = max(10, 20); // 实例化max<int>
   ```

 阶段9：链接
   - 将多个翻译单元（可能包括库）链接在一起，生成可执行程序或库。

 示例：将多个.o文件链接成一个可执行文件。

 总结：
   C++的翻译过程分为9个阶段，从字符映射到链接，每个阶段有特定任务。理解这些阶段有助于调试编译和预处理问题。例如：
   - 行拼接（阶段2）可能导致反斜杠后换行符被删除，从而改变代码结构。
   - 最大咀嚼规则（阶段3）可能导致多个字符被解释为一个运算符（如“++”被解释为自增运算符，而不是两个加号）。
   - 预处理（阶段4）展开宏，处理条件编译。
   - 模板实例化（阶段8）在编译后期生成具体代码。

 实际开发中，可以通过编译器选项查看中间结果（如预处理后的代码：g++ -E）。

 注意：C++23标准在阶段1和阶段5有重要变化，特别是移除了三字符序列，并明确了UTF-8支持。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto translation_phases_fn() -> int
{

    std::cout << "translation_phases function begin..." << std::endl;

    return 0;
}