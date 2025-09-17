C return 语句

终止当前函数，并将指定值返回给调用方函数。

语法
attr-spec-seq（可选） 返回表达式 ;	(1)	
attr-spec-seq（可选） 返回 ;	(2)	
表达	-	用于初始化函数返回值的表达式
attr-spec-seq	-	（C23） 属性的可选列表，应用于 return 语句
解释
1） 计算表达式 ，终止当前函数并将表达式的结果返回给调用者（返回的值成为函数调用表达式的值）。仅当函数返回类型不为 void 时才有效。
2） 终止当前功能。仅当函数返回类型为 void 时才有效。
如果表达式的类型与函数的返回类型不同，则其值将像赋值一样转换为类型为函数返回类型的对象，但允许对象表示之间的重叠：

struct s { double i; } f(void); // function returning struct s
union { struct { int f1; struct s f2; } u1;
        struct { struct s f3; int f4; } u2; } g;
struct s f(void)
{
    return g.u1.f2;
}
int main(void)
{
// g.u2.f3 = g.u1.f2; // undefined behavior (overlap in assignment)
   g.u2.f3 = f();     // well-defined
}
如果返回类型是真正的浮动类型，则结果的表示范围和精度可能比新类型隐含的更大。

到达返回 void 的函数的末尾等同于 return;。如果函数的结果在表达式中使用，则到达任何其他值返回函数的末尾是未定义的行为（允许丢弃此类返回值）。对于 main，请参阅 main 函数 。

在 no-return 函数中执行 return 语句是未定义的行为。

（自 C11 起）
关键字
return

例
本节不完整
原因：提高
运行此代码
#include <stdio.h>
 
void fa(int i)
{
    if (i == 2)
       return;
    printf("fa():   %d\n", i);
} // implied return;
 
int fb(int i)
{
    if (i > 4)
       return 4;
    printf("fb():   %d\n", i);
    return 2;
}
 
int main(void)
{
    fa(2);
    fa(1);
    int i = fb(5);   // the return value 4 used to initializes i
    i = fb(i);       // the return value 2 used as rhs of assignment
    printf("main(): %d\n", i);
}
输出：

fa():   1
fb():   4
main(): 2
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.6.4 return 语句（第 111-112 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.6.4 return 语句（第 154 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.6.4 return 语句（第 139 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.6.4 return 语句
