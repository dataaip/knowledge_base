C++ 实现定义的行为控制

实现定义的行为由 #pragma 指令控制。

语法
#pragma 编译指示参数	(1)	
_Pragma（ 字符串文字 ）	(2)	（从 C++11 开始）
1） 以实现定义的方式行事。
2） 从字符串文字中删除 L 前缀（如果有）、外引号和前导/尾随空格，将每个 \“ 替换为 ”，将每个 \\ 替换为 \，然后标记结果（如翻译阶段 3），然后使用结果，就好像输入 #pragma （1） 中一样。
解释
Pragma 指令控制编译器的特定于实现的行为，例如禁用编译器警告或更改对齐要求。任何未识别的编译指示都将被忽略。

非标准编译指示
ISO C++ 语言标准不要求编译器支持任何编译指示。但是，多个实现支持几个非标准编译指示：

#pragma STDC
ISO C 语言标准要求 C 编译器支持以下三个编译指示，并且一些 C++ 编译器供应商在其 C++ 前端中不同程度地支持它们：

#pragma STDC FENV_ACCESS arg	(1)	
#pragma STDC FP_CONTRACT arg	(2)	
#pragma STDC CX_LIMITED_RANGE 精 氨 酸	(3)	
其中 arg 为 ON、OFF 或 DEFAULT。

1） 如果设置为 ON， 则通知编译器程序将访问或修改浮点环境 ，这意味着禁止可能破坏标志测试和模式更改的优化（例如，全局通用子表达式消除、代码运动和常量折叠）。默认值是实现定义的，通常为 OFF。
2） 允许对浮点表达式进行收缩 ，即省略舍入误差和浮点异常的优化，如果表达式完全按照编写方式进行计算，则会观察到这些异常。例如，允许使用单个融合乘加 CPU 指令实现 （x * y） + z。默认值是实现定义的，通常是 ON。
3) Informs the compiler that multiplication, division, and absolute value of complex numbers may use simplified mathematical formulas (x+iy)×(u+iv) = (xu-yv)+i(yu+xv), (x+iy)/(u+iv) = [(xu+yv)+i(yu-xv)]/(u3） 告知编译器，复数的乘法、除法和绝对值可以使用简化的数学公式 （x+iy）×（u+iv） = （xu-yv）+i（yu+xv）， （x+iy）/（u+iv） = [（xu+yv）+i（yu-xv）]/（u2
+v2
), and |x+iy| = √x）和 |x+iy|= √x2
+y2
，尽管存在中间溢出的可能性。换句话说，程序员保证将传递给这些函数的值的范围是有限的。默认值为 OFF。
如果上述三个编译指示中的任何一个出现在所有外部声明之外或复合语句内所有显式声明和语句之前以外的任何上下文中，则程序的行为是未定义的。

注意：不支持这些编译指示的编译器可能会提供等效的编译时选项，例如 gcc 的 -fcx-limited-range 和 -ffp-contract。

#pragma 一次
#pragma Once 是一种非标准编译指示，绝大多数现代编译器都支持它。如果它出现在头文件中，则表示它只能解析一次，即使它（直接或间接）在同一源文件中多次包含在其中。

防止多个包含同一标头的标准方法是使用包含保护：

#ifndef LIBRARY_FILENAME_H
#define LIBRARY_FILENAME_H
// contents of the header
#endif /* LIBRARY_FILENAME_H */
因此，除了第一个包含任何翻译单元中的标头之外，所有内容都将排除在编译之外。所有现代编译器都记录了头文件使用包含保护的事实，并且如果再次遇到该文件，只要仍然定义了保护，就不会重新解析该文件（例如参见 gcc）。

#pragma 一次，相同的标题显示为

#pragma once
// contents of the header
与标头保护不同，此编译指示使得不可能在多个文件中错误地使用相同的宏名称。另一方面，由于 #pragma 一次文件会根据其文件系统级身份被排除，因此如果标头存在于项目中的多个位置，则无法防止两次包含标头。

#pragma 包
此编译指示系列控制后续定义的类和联合成员的最大对齐方式。

#pragma pack(arg)	(1)	
#pragma pack()	(2)	
#pragma pack(push)	(3)	
#pragma pack(push, arg)	(4)	
#pragma pack(pop)	(5)	
其中 arg 是 2 的小幂，以字节为单位指定新的对齐方式。

1） 将当前对齐设置为值 arg。
2） 将当前对齐设置为默认值（由命令行选项指定）。
3） 将当前对齐的值推送到内部堆栈上。
4） 将当前对齐的值推送到内部堆栈上，然后将当前对齐设置为值 arg。
5） 从内部堆栈中弹出顶部条目，然后将当前对齐方式设置（恢复）为该值。
#pragma 包可能会减少类的对齐方式，但是，它不能使类过度对齐。

另请参阅 GCC 和 MSVC 的具体详细信息。

本节不完整
原因：解释此编译指示对数据成员的影响以及使用它们的利弊。参考来源：
堆栈溢出
本节不完整
原因：没有例子
引用
C++23 标准 （ISO/IEC 14882：2024）：
15.9 编译指示 [cpp.pragma]
C++20 标准 （ISO/IEC 14882：2020）：
15.9 编译指示 [cpp.pragma]
C++17 标准 （ISO/IEC 14882：2017）：
19.6 编译指示 [cpp.pragma]
C++14 标准 （ISO/IEC 14882：2014）：
16.6 编译指示 [cpp.pragma]
C++11 标准 （ISO/IEC 14882：2011）：
16.6 编译指示 [cpp.pragma]
C++98 标准 （ISO/IEC 14882：1998）：
16.6 编译指示 [cpp.pragma]
另请参阅
实现定义的行为控制的 C 文档
外部链接
1. 	Visual Studio 中的 C++ 编译指示
2. 	GCC 接受的编译指示
3. 	IBM AIX XL C 16.1 中的单个编译指示描述和标准编译指示
4. 	附录 B. Sun Studio 11 C++ 用户指南中的译注
5. 	英特尔 C++ 编译器编译指示
6. 	HP aCC A.06.25 的发布节点（包括编译指示）
