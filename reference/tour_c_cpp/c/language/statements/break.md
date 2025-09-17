C break 语句

导致封闭 for、while 或 do-while 循环或 switch 语句终止。

当使用条件表达式和条件语句终止循环很尴尬时使用。

语法
attr-spec-seq（可选） 中断 ;		
attr-spec-seq	-	（C23） 属性的可选列表，应用于 break 语句
仅出现在循环体的语句 （while、do-while、for）或开关的语句中。

解释
在此语句之后，控制将立即转移到封闭循环或开关之后的语句或声明，就像通过 goto 一样。

关键字
break

笔记
break 语句不能用于断开多个嵌套循环。goto 语句可用于此目的。

例
运行此代码
#include <stdio.h>
 
int main(void)
{
    int i = 2;
    switch (i)
    {
        case 1: printf("1");
        case 2: printf("2");   // i==2, so execution starts at this case label
        case 3: printf("3");
        case 4:
        case 5: printf("45");
                break;         // execution of subsequent cases is terminated
        case 6: printf("6");
    }
    printf("\n");
 
    // Compare outputs from these two nested for loops.
    for (int j = 0; j < 2; j++)
        for (int k = 0; k < 5; k++)
            printf("%d%d ", j,k);
    printf("\n");
 
    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 5; k++) // only this loop is exited by break
        {
            if (k == 2)
                break;
            printf("%d%d ", j,k);
        }
    }
}
可能的输出：

2345
00 01 02 03 04 10 11 12 13 14
00 01 10 11
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.6.3 break 语句（第 111 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.6.3 中断语句（第 153 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.6.3 中断语句（第 138 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.6.3 break 语句
另请参阅
[[fallthrough]]
  
（C23）
 
表示从上一个案例标签中出现的失败是有意的，不应由在出现失败时发出警告的编译器诊断
（属性说明符）
break 语句的 C++ 文档
