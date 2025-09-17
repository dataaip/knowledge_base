C if 语句

有条件地执行代码。

仅当某些条件为真时才需要执行代码时使用。

语法
attr-spec-seq（可选）if （ 表达式 ）statement-true	(1)	
attr-spec-seq（可选）if （ 表达式 ）statement-trueelsestatement-false	(2)	
attr-spec-seq	-	（C23） 应用于 if 语句的可选属性列表
表达	-	任何标量类型的表达式
语句-true	-	任何语句 （通常是复合语句），如果表达式比较不等于 0，则执行该语句
语句-false	-	任何语句 （通常是复合语句），如果表达式比较等于 0，则执行该语句
解释
expression 必须是任何标量类型的表达式。

如果表达式比较不等于整数零，则执行 statement-true。

在 （2） 的形式中，如果表达式等于整数零，则执行 statement-false。

与所有其他选择和迭代语句一样，整个 if 语句有自己的块作用域：

enum {a, b};
 
int different(void)
{
    if (sizeof(enum {b, a}) != sizeof(int))
        return a; // a == 1
    return b; // b == 0 in C89, b == 1 in C99
}
（自 C99 起）
笔记
else 始终与最接近的前面 if 相关联（换句话说，如果 statement-true 也是 if 语句，则该内部 if 语句也必须包含 else 部分）：

int j = 1;
if (i > 1)
    if(j > 2)
        printf("%d > 1 and %d > 2\n", i, j);
    else // this else is part of if (j > 2), not part of if (i > 1)
        printf("%d > 1 and %d <= 2\n", i, j);
如果通过 goto 输入 statement-true，则不会执行 statement-false。

关键字
if ， else

例
运行此代码
#include <stdio.h>
 
int main(void)
{
    int i = 2;
    if (i > 2)
    {
        printf("i > 2 is true\n");
    }
    else
    {
        printf("i > 2 is false\n");
    }
 
    i = 3;
    if (i == 3)
        printf("i == 3\n");
 
    if (i != 3)
        printf("i != 3 is true\n");
    else
        printf("i != 3 is false\n");
}
输出：

i > 2 is false
i == 3
i != 3 is false
引用
C23 标准 （ISO/IEC 9899：2024）：
6.8.5.2 if 语句（第 154 页）
C17 标准 （ISO/IEC 9899：2018）：
6.8.4.1 if 语句（第 108-109 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.4.1 if 语句（第 148-149 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.4.1 if 语句（第 133-134 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.4.1 if 语句
