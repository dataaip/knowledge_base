C++ 诊断指令
 
显示给定的错误消息并呈现格式错误的程序 ，或显示给定的警告消息而不影响程序的有效性 （自 C++23 起）。

语法
#error 诊断消息	(1)	
#warning 诊断消息	(2)	（自 C++23 起）
解释
1） 遇到 #error 指令后，实现会显示消息 diagnostic-message 并使程序格式错误（编译停止）。
2） 与 （1） 相同，只是程序的有效性不受影响，编译继续进行。
diagnostic-message 可以由几个单词组成，不一定用引号括起来。

笔记
在 C++23 标准化之前，许多编译器都以所有模式提供 #warning 作为符合要求的扩展。

例
运行此代码
#if __STDC_HOSTED__ != 1
#   error "Not a hosted implementation"
#endif
 
#if __cplusplus >= 202302L
#   warning "Using #warning as a standard feature"
#endif
 
#include <iostream>
 
int main()
{
    std::cout << "The implementation used is hosted\n";
}
可能的输出：

The implementation used is hosted
引用
C++23 标准 （ISO/IEC 14882：2024）：
15.8 错误指令 [cpp.error]
C++20 标准 （ISO/IEC 14882：2020）：
15.8 错误指令 [cpp.error]
C++17 标准 （ISO/IEC 14882：2017）：
19.5 错误指令 [cpp.error]
C++14 标准 （ISO/IEC 14882：2014）：
16.5 错误指令 [cpp.error]
C++11 标准 （ISO/IEC 14882：2011）：
16.5 错误指令 [cpp.error]
C++03 标准 （ISO/IEC 14882：2003）：
16.5 错误指令 [cpp.error]
C++98 标准 （ISO/IEC 14882：1998）：
16.5 错误指令 [cpp.error]
