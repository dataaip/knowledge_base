C++ break 语句
 
导致封闭 for、range-for、while 或 do-while 循环或 switch 语句终止。

当使用条件表达式和条件语句终止循环很尴尬时使用。

语法
attr（可选） 中断 ;		
属性	-	（从 C++11 开始） 任意数量的属性
解释
仅出现在循环体的语句 （while、do-while、for）或开关的语句中。在此语句之后，控制将转移到紧跟在封闭循环或开关之后的语句。与任何块出口一样，在执行封闭循环后的第一行之前，在封闭复合语句或循环/开关条件下声明的所有自动存储对象都会以相反的构造顺序销毁。

笔记
break 语句不能用于断开多个嵌套循环。goto 语句可用于此目的。

关键字
break

例
运行此代码
#include <iostream>
 
int main()
{
    int i = 2;
    switch (i)
    {
        case 1: std::cout << "1";   // <---- maybe warning: fall through
        case 2: std::cout << "2";   // execution starts at this case label (+warning)
        case 3: std::cout << "3";   // <---- maybe warning: fall through
        case 4:                     // <---- maybe warning: fall through
        case 5: std::cout << "45";  //
                break;              // execution of subsequent statements is terminated
        case 6: std::cout << "6";
    }
    std::cout << '\n';
 
    for (char c = 'a'; c < 'c'; c++)
    {
        for (int i = 0; i < 5; i++)      // only this loop is affected by break
        {                                //
            if (i == 2)                  //
                break;                   //
            std::cout << c << i << ' ';  //
        }
    }
    std::cout << '\n';
}
可能的输出：

2345
a0 a1 b0 b1
另请参阅
[[fallthrough]]
  
（C++17）
 
表示从上一个案例标签中出现的失败是有意的，不应由在出现失败时发出警告的编译器诊断
（属性说明符）
中断的 C 文档