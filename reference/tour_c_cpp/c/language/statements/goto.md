C goto 语句

无条件地将控制权转移到所需位置。

当无法使用传统构造将控制权转移到所需位置时使用。

语法
attr-spec-seq（可选）goto 标签 ;		
标签	-	goto 语句的目标标签
attr-spec-seq	-	（C23） 可选属性列表，应用于 goto 语句
解释
goto 语句会导致无条件跳转到以命名标签为前缀的语句（必须与 goto 语句出现在同一函数中）， 除非此跳转将进入可变长度数组或其他可变修改类型的范围。（自 C99 起）

标签是一个标识符，后跟冒号 （：） 和语句 （直到 C23）。 标签是唯一具有函数作用域的标识符：它们可以在它们出现的同一函数的任何地方使用（在 goto 语句中）。任何语句之前可能有多个标签。

允许输入不可变修改变量的作用域：

goto lab1; // OK: going into the scope of a regular variable
    int n = 5;
lab1:; // Note, n is uninitialized, as if declared by int n;
 
//   goto lab2;   // Error: going into the scope of two VM types
     double a[n]; // a VLA
     int (*p)[n]; // a VM pointer
lab2:
如果 goto 离开 VLA 的作用域，则将其释放（如果再次执行其初始化，则可能会重新分配）：

{
   int n = 1;
label:;
   int a[n]; // re-allocated 10 times, each with a different size
   if (n++ < 10) goto label; // leaving the scope of a VM
}
（自 C99 起）
关键字
goto

笔记
由于声明不是语句，因此声明之前的标签必须使用 null 语句（紧接在冒号后面的分号）。这同样适用于块末尾之前的标签。

（直到 C23）
C++ 对 goto 语句施加了额外的限制，但允许在声明（C++ 中的语句）之前使用标签。

例
运行此代码
#include <stdio.h>
 
int main(void)
{
    // goto can be used to leave a multi-level loop easily
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("(%d;%d)\n",x,y);
            if (x + y >= 3) goto endloop;
        }
    }
endloop:;
}
输出：

(0;0)
(0;1)
(0;2)
(1;0)
(1;1)
(1;2)
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.6.1 goto 语句（第 110-111 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.6.1 goto 语句（第 152-153 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.6.1 goto 语句（第 137-138 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.6.1 goto 语句
