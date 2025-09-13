C 诊断指令

显示给定的错误消息，并在不影响程序有效性的情况下呈现格式错误或给定的警告消息 （ 自 C23 起）。

语法
#error 诊断消息	(1)	
#warning 诊断消息	(2)	（自 C23 起）
解释
1） 遇到 #error 指令后，实现会显示消息 diagnostic-message 并使程序格式错误（编译停止）。
2） 与 （1） 相同，只是程序的有效性不受影响，编译继续进行。
diagnostic-message 可以由几个单词组成，不一定用引号括起来。

笔记
在 C23 标准化之前，许多编译器已将 #warning 作为符合的扩展以所有模式提供。

例
运行此代码
#if __STDC__ != 1
#  error "Not a standard compliant compiler"
#endif
 
#if __STDC_VERSION__ >= 202311L
#  warning "Using #warning as a standard feature"
#endif
 
#include <stdio.h>
 
int main (void)
{
    printf("The compiler used conforms to the ISO C Standard !!");
}
可能的输出：

The compiler used conforms to the ISO C Standard !!
引用
C23 标准 （ISO/IEC 9899：2024）：
6.10.5 错误指令（p：待定）
C17 标准 （ISO/IEC 9899：2018）：
6.10.5 错误指令（第 126-127 页）
C11 标准 （ISO/IEC 9899：2011）：
6.10.5 错误指令（第 174 页）
C99 标准 （ISO/IEC 9899：1999）：
6.10.5 错误指令（第 159 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.8.5 错误指令
