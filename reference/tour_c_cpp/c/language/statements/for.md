C for 循环

执行循环。

用作 while 循环的较短等效项。

语法
attr-spec-seq（自 C23 起）（ 可选）for（init-clause;cond-expression; 迭代表达式 ） 循环语句		
解释
行为如下：

init-clause 可以是表达式或声明 （从 C99 开始）。
init-clause 是一个表达式，在第一次计算 cond-expression 之前计算一次，其结果被丢弃。
init-clause 是一个声明，在整个循环体的范围内，包括 init-clause 的其余部分、整个 cond-expression、整个迭代表达式和整个循环语句 。此声明中声明的变量只允许使用 auto 和 register 存储类说明符 。
（自 C99 起）
cond-expression 在循环体之前计算。如果表达式的结果为零，则立即退出循环语句。
iteration-expression 在循环体之后计算，其结果被丢弃。在评估迭代表达式后，控制权将转移到 cond-expression。
init-clause、cond-expression 和 iteration-expression 都是可选的。如果省略 cond-expression，则将其替换为非零整数常量，这使得循环无休止：

for(;;) {
   printf("endless loop!");
}
loop-statement 不是可选的，但它可能是一个 null 语句：

for(int n = 0; n < 10; ++n, printf("%d\n", n))
    ; // null statement
如果循环的执行需要在某个时候终止，则可以在循环语句中的任何位置使用 break 语句 。

在循环语句中任何位置使用的 continue 语句将控制权转移到迭代表达式 。

如果循环在其 cond-expression、iteration-expression 或 loop-statement 的任何部分都没有可观察的行为（I/O、易失性访问、原子或同步作），则具有无限循环的程序具有未定义的行为。这允许编译器优化所有不可观察的循环，而无需证明它们终止。唯一的例外是循环，其中 cond-expression 被省略或是一个常量表达式;for（;;） 始终是一个无限循环。

与所有其他选择和迭代语句一样，for 语句建立块作用域 ：init-clause、cond-expression 或 iteration-expression 中引入的任何标识符在 loop-statement 之后都超出了作用域。

（自 C99 起）
attr-spec-seq 是一个可选的属性列表，应用于 for 语句。

（自 C23 起）
关键字
for

笔记
与 C++ 不同，用作循环语句的表达式语句建立了自己的块作用域，与 init-clause 的作用域不同：

for (int i = 0; ; ) {
    long i = 1;   // valid C, invalid C++
    // ...
}
可以使用 goto 进入循环的主体。以这种方式进入循环时，不会执行 init-clause 和 cond-expression。（如果控制到达循环体的末尾，则可能会发生重复，包括执行 cond-expression。

例
运行此代码
#include <stdio.h>
#include <stdlib.h>
enum { SIZE = 8 };
int main(void)
{
    int array[SIZE];
    for(size_t i = 0 ; i < SIZE; ++i)
        array [i] = rand() % 2;
    printf("Array filled!\n");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%d ", array[i]);
    putchar('\n');
}
可能的输出：

Array filled!
1 0 1 1 1 1 0 0
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.5.3 for 语句（第 110 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.5.3 for 语句（第 151 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.5.3 for 语句（第 136 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.5.3 for 语句
