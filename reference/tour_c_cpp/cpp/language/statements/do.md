C++ do-while 循环

有条件地重复执行语句（至少一次）。

语法
attr（可选）do 语句 while （ 表达式 ）;		
属性	-	（从 C++11 开始） 任意数量的属性
表达	-	表达式
陈述	-	语句 （通常是复合语句）
解释
当控制到达 do 语句时，其语句将无条件执行。

每次语句完成执行时， 表达式都会被计算并在上下文中转换为布尔值 。如果结果为 true，则将再次执行语句 。

如果循环需要在语句内终止，则可以使用 break 语句作为终止语句。

如果当前迭代需要在语句内终止，则可以使用 continue 语句作为快捷方式。

笔记
作为 C++ 前向进度保证的一部分，如果没有可观察行为的循环不是平凡的无限循环 （自 C++26） 未终止，则行为未定义 。允许编译器删除此类循环。

关键字
do ， while

例
运行此代码
#include <algorithm>
#include <iostream>
#include <string>
 
int main()
{
    int j = 2;
    do // compound statement is the loop body
    {
        j += 2;
        std::cout << j << ' ';
    }
    while (j < 9);
    std::cout << '\n';
 
    // common situation where do-while loop is used
    std::string s = "aba";
    std::sort(s.begin(), s.end());
 
    do std::cout << s << '\n'; // expression statement is the loop body
    while (std::next_permutation(s.begin(), s.end()));
}
输出：

4 6 8 10
aab
aba
baa