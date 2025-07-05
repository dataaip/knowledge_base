/**
* @file              character_encodings.cpp
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.03
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.03 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <iostream>

#define TOUR_CPP_BASIC_CONCEPTS_CHARACTER_ENCODINGS

/*
### 字符集和编码 C++ C++ 语言 基本概念

本页介绍了 C++ 标准指定的几个字符集。

翻译字符集翻译字符集由以下元素组成：

每个抽象字符在 Unicode 代码空间中分配了一个码位，并且未分配给抽象字符的每个 Unicode 标量值的不同字符。翻译字符集是基本字符集和基本文字字符集的超集（见下文）。（自 C++23 起）
基本字符集 基本字符集由以下 96 个字符（直到 C++26）99（自 C++26 起）字符组成：

代码单元	字符	字形
U+0009	字符制表	
U+000B	线制表	
U+000C	换页 （FF）	
U+0020	空间	
U+000A	换行 （LF）	换行符
U+0021	感叹号	!
U+0022	引号	"
U+0023	数字符号	#
U+0025	百分号	%
U+0026	符号	&
U+0027	省略符号	'
U+0028	左括号	(
U+0029	右括号	)
U+002A	星号	*
U+002B	加号	+
U+002C	逗点	,
U+002D	连字符减号	-
U+002E	句点	.
U+002F	固相线	/
U+0030 ..U+0039	数字零 ..九	0 1 2 3 4 5 6 7 8 9
U+003A	结肠	:
U+003B	分号	;
U+003C	小于号	<
U+003D	等号	=
U+003E	大于号	>
U+003F	问号	?
U+0041 ..U+005A	拉丁文大写字母 A ..Z	A B C D E F G H I J K L M
N O P Q R S T U V W X Y Z

U+005B	左方括号	[
U+005C	反向实线	\
U+005D	右方括号	]
U+005E	Circumflex 口音	^
U+005F	低线	_
U+0061 ..U+007A	拉丁语小写字母 a ..z	a b c d e f g h i j k l m
n o p q r s t u v w x y z

U+007B	左大括号	{
U+007C	垂直线	|
U+007D	右大括号	}
U+007E	波浪号	~
自 C++26 以来，将以下字符添加到基本字符集中：

代码单元	字符	字形
U+0024	美元符号	$
U+0040	商业价格	@
U+0060	重音符	`
（自 C++26 起）
基本文本字符集
基本文本字符集由基本字符集的所有字符以及以下控制字符组成：

代码单元	字符
U+0000	零
U+0007	钟
U+0008	退格键
U+000D	回车 （CR）
执行字符集 执行字符集和执行宽字符集是基本文本的超集 字符集。执行字符集和其他元素集的编码 （如果有）是特定于区域设置的。执行宽字符集的每个元素都必须可表示为不同的 wchar_t 代码单元。

代码单元和文字编码
代码单元是字符类型的整数值。除多字符或不可编码字符文本以外的字符文本或字符串文本中的字符编码为一个或多个代码单元的序列，由编码前缀确定;这称为相应的 Literal Encoding。

其中一个执行字符集的文字编码或特定于区域设置的编码对 基本文本字符集的每个元素都设置为具有非负值的单个代码单元，与任何其他此类元素的代码单元不同。不在基本文本字符集中的字符可以使用多个代码单元进行编码;此类 Code Unit 的值可以与 Basic Literal 字符集的元素的 Code Unit 的值相同。执行字符集的编码可以与任何 Literals 编码无关。

普通文本编码是应用于普通字符或字符串文本的编码。宽文本编码是应用于宽字符或字符串文本的编码。

U+0000 NULL 字符编码为值 0。翻译字符集的其他元素均未使用值为 0 的代码单元进行编码。数字 0 （U+0030） 后的每个十进制数字字符的代码单位值应比前一个值大 1。普通和宽 Literals 编码是实现定义的。

对于 UTF-8、UTF-16 或 UTF-32 文本，与转换字符集的每个字符对应的 UCS 标量值将按照 ISO/IEC 10646 中针对相应 UCS 编码形式的指定进行编码。

笔记
某些字符集的标准名称在 C++23 中通过 P2314R4 更改。

新名称	旧名称
基本字符集	基本源字符集
基本文本字符集	基本执行字符集
基本执行宽字符集
在转换阶段 1 期间，从源文件（UTF-8 源文件除外）（自 C++23 起）字符到基本字符集（直到 C++23）转换字符集（自 C++23 起）的映射是实现定义的，因此需要一个实现来记录基本源字符在源文件中的表示方式。

缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。

博士	应用对象	发布时的行为	纠正行为
CWG 788	C++98	执行字符集
的成员的值是实现定义的，但不特定于区域设置	它们是特定于区域设置的
CWG 1796 年	C++98	基本执行 （Wide-） 字符集中
的 Null （Wide） 字符表示形式全部为零位	只需要值为零
*/

/*
我们正在处理C++的字符集和编码概念。需要深入解释并举例说明以下内容：
 1. 翻译字符集（Translation Character Set）
 2. 基本字符集（Basic Character Set）及其在C++26的变化
 3. 基本文本字符集（Basic Text Character Set）
 4. 执行字符集（Execution Character Set）和执行宽字符集（Execution Wide Character Set）
 5. 文字编码（Literal Encoding）和代码单元（Code Unit）
 6. 普通文本编码（Ordinary Literal Encoding）和宽文本编码（Wide Literal Encoding）
 7. C++23和C++26的新特性

 我们将按照以下结构进行：
 一、核心概念分层
 二、详细解释每个概念并举例
 三、总结

 注意：C++标准中的术语在C++23有更新，我们将使用新术语。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto character_encodings_fn() -> int
{

    std::cout << "character_encodings function begin..." << std::endl;
    
    return 0;
}