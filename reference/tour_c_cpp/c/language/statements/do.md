C do-while 循环

重复执行语句 ，直到条件表达式的值变为 false。每次迭代后都会进行测试。

语法
attr-spec-seq（可选）do 语句 while （ 表达式 ）;		
attr-spec-seq	-	（C23） 应用于 loop 语句的可选属性列表。
陈述	-	任何语句 ，通常是复合语句，它是循环的主体。
表达	-	标量类型的任何表达式 。每次迭代后都会计算此表达式，如果比较等于零，则退出循环。
解释
 do-while 语句导致语句（也称为循环体 ）重复执行，直到表达式 （也称为控制表达式 ）等于 0。无论循环体是正常输入还是通过转到语句中间输入，都会发生重复。

表达式的计算在每次执行语句 （无论是正常输入还是通过 goto 输入）之后进行。如果需要在循环体之前计算控制表达式，则可以使用 while 循环或 for 循环 。

如果循环的执行需要在某个时候终止，可以使用 break 语句作为终止语句。

如果需要在循环体的末尾继续执行循环，可以使用 continue 语句作为快捷方式。

如果具有无限循环的程序在其语句或表达式的任何部分中没有可观察的行为（I/O、易失性访问、原子或同步作），则该程序具有未定义的行为。这允许编译器优化所有不可观察的循环，而无需证明它们终止。唯一的例外是循环，其中 expression 是一个常量表达式;做 {...} while（true）; 永远是一个无限循环。

与所有其他选择和迭代语句一样，do-while 语句建立块作用域 ： 表达式中引入的任何标识符都会在语句之后超出作用域。

（自 C99 起）
笔记
布尔表达式和指针表达式通常用作循环控制表达式。布尔值 false 和任何指针类型的 null 指针值的比较等于零。

关键字
do ， while

例
运行此代码
#include <stdio.h>
#include <stdlib.h>
 
enum { SIZE = 8 };
 
int main(void)
{
    // trivial example
    int array[SIZE], n = 0;
 
    do array[n++] = rand() % 2; // the loop body is a single expression statement
    while(n < SIZE);
 
    puts("Array filled!");
    n = 0;
 
    do
    { // the loop body is a compound statement
        printf("%d ", array[n]);
        ++n;
    } while (n < SIZE);
 
    printf("\n");
 
    // the loop from K&R itoa(). The do-while loop is used
    // because there is always at least one digit to generate
    int num = 1234, i=0;
    char s[10];
 
    do s[i++] = num % 10 + '0'; // get next digit in reverse order
    while ((num /= 10) > 0);
 
    s[i] = '\0';
    puts(s);
}
可能的输出：

Array filled!
1 0 1 1 1 1 0 0
4321
引用
C23 标准 （ISO/IEC 9899：2024）：
6.8.6.3 do 语句（第 156 页）
C17 标准 （ISO/IEC 9899：2018）：
6.8.5.2 do 语句（第 109 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.5.2 do 语句（第 151 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.5.2 do 语句（第 136 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.5.2 do 语句
