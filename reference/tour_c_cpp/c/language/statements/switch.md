C switch 语句

根据整数参数的值执行代码。

用于需要根据整数值执行多个代码分支中的一个或多个。

语法
attr-spec-seq（可选）switch （expression） 语句		
attr-spec-seq	-	（C23） 可选属性列表，应用于 switch 语句
表达	-	整数类型的任何表达式 （char、有符号或无符号整数或枚举）
陈述	-	any 语句 （通常是复合语句）。case： 和 default： 标签在语句中被允许使用，而 break; 语句具有特殊含义。
case 常量表达式 ： 语句	(1)	（直到 C23）
attr-spec-seq（可选）caseconstant-expression：statement（可选）	(1)	（自 C23 起）
default： 语句	(2)	（直到 C23）
attr-spec-seq（可选）default：statement（可选）	(2)	（自 C23 起）
常量表达式	-	任何整数常量表达式
attr-spec-seq	-	（C23） 可选的属性列表，应用于标签
解释
switch 语句的正文可以有任意数量的 case： labels，只要所有常量表达式的值都是唯一的（在转换为提升的表达式类型之后）。最多可以存在一个 default： label（尽管嵌套的 switch 语句可以使用自己的 default： labels 或 have case： 标签，其常量与封闭开关中使用的常量相同）。

如果表达式在转换为提升的表达式类型后计算结果等于常量表达式之一的值，则控制权将转移到使用该常量表达式标记的语句。

如果表达式的计算结果与任何 case： labels 都不匹配的值，并且存在 default： label，则控制权将转移到标有 default： label 的语句。

如果表达式的计算结果为与任何 case： labels 都不匹配的值，并且默认 ： label 不存在，则不会执行任何开关正文。

break 语句在语句中的任何位置遇到时，退出 switch 语句：

switch(1) {
    case 1 : puts("1"); // prints "1",
    case 2 : puts("2"); // then prints "2" ("fall-through")
}
switch(1) {
    case 1 : puts("1"); // prints "1"
             break;     // and exits the switch
    case 2 : puts("2");
             break;
}
与所有其他选择和迭代语句一样，switch 语句建立块作用域 ： 表达式中引入的任何标识符都会在语句之后超出作用域。

如果 VLA 或其他具有可变修改类型的标识符在其范围内具有 case： 或 default： 标签，则整个 switch 语句必须在其作用域内（换句话说，必须在整个交换机之前或最后一个标签之后声明 VLA）：

switch (expr)
{
        int i = 4; // not a VLA; OK to declare here
        f(i); // never called
//      int a[i]; // error: VLA cannot be declared here
    case 0:
        i = 17;
    default:
        int a[i]; // OK to declare VLA here
        printf("%d\n", i); // prints 17 if expr == 0, prints indeterminate value otherwise
}
（自 C99 起）
关键字
switch ， case ， default

例
运行此代码
#include <stdio.h>
 
void func(int x)
{
   printf("func(%d): ", x);
   switch(x)
   {
      case 1: printf("case 1, ");
      case 2: printf("case 2, ");
      case 3: printf("case 3.\n"); break;
      case 4: printf("case 4, ");
      case 5:
      case 6: printf("case 5 or case 6, ");
      default: printf("default.\n");
   }
}
 
int main(void)
{
   for(int i = 1; i < 9; ++i) func(i);
}
输出：

func(1): case 1, case 2, case 3.
func(2): case 2, case 3.
func(3): case 3.
func(4): case 4, case 5 or case 6, default.
func(5): case 5 or case 6, default.
func(6): case 5 or case 6, default.
func(7): default.
func(8): default.
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.4.2 switch 语句（第 108-109 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.4.2 switch 语句（第 149-150 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.4.2 switch 语句（第 134-135 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.4.2 switch 语句
