C while 循环

重复执行语句 ，直到 expression 的值等于零。测试在每次迭代之前进行。

语法
attr-spec-seq（可选）while （expression） 语句		
表达	-	标量类型的任何表达式 。在每次迭代之前计算此表达式，如果它等于零，则退出循环。
陈述	-	任何语句 ，通常是复合语句，用作循环的主体
attr-spec-seq	-	（C23） 可选属性列表，应用于循环语句
解释
while 语句导致语句 （也称为循环体 ）重复执行，直到表达式 （也称为控制表达式 ）比较等于零。无论循环体是正常输入还是通过转到语句中间输入，都会发生重复。

表达式的计算在每次执行语句之前进行（除非由 goto 输入）。如果需要在循环体之后计算控制表达式，则可以使用 do-while 循环 。

如果循环的执行需要在某个时间点终止，则可以使用 break 语句作为终止语句。

如果需要在循环体的末尾继续执行循环，可以使用 continue 语句作为快捷方式。

如果具有无限循环的程序在其语句或表达式的任何部分中没有可观察的行为（I/O、易失性访问、原子或同步作），则该程序具有未定义的行为。这允许编译器优化所有不可观察的循环，而无需证明它们终止。唯一的例外是循环，其中 expression 是一个常量表达式;while（true） 始终是一个无限循环。

与所有其他选择和迭代语句一样，while 语句建立块作用域 ： 表达式中引入的任何标识符都会在语句之后超出作用域。

（自 C99 起）
笔记
布尔表达式和指针表达式通常用作循环控制表达式。布尔值 false 和任何指针类型的 null 指针值的比较等于零。

关键字
while

例
运行此代码
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum { SIZE = 8 };
int main(void)
{
    // trivial example
    int array[SIZE], n = 0;
    while(n < SIZE) array[n++] = rand() % 2;
    puts("Array filled!");
    n = 0;
    while(n < SIZE) printf("%d ", array[n++]);
    printf("\n");
 
    // classic strcpy() implementation
    // (copies a null-terminated string from src to dst)
    char src[] = "Hello, world", dst[sizeof src], *p = dst, *q = src;
    while((*p++ = *q++)) // double parentheses (that are not strictly necessary)
                         // used to suppress warnings, ensuring that this is an
                         // assignment (as opposed to a comparison) by intention,
                         // whose result is used as a truth value
        ; // null statement
    puts(dst);
}
输出：

Array filled!
1 0 1 1 1 1 0 0 
Hello, world
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.5.1 while 语句（第 109 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.5.1 while 语句（第 151 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.5.1 while 语句（第 136 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.5.1 while 语句
