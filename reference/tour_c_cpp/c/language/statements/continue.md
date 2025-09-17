C continue 语句

导致跳过封闭 for、while 或 do-while 循环体的其余部分。

当使用条件语句忽略循环的其余部分很尴尬时使用。

语法
attr-spec-seq（可选） 继续 ;		
attr-spec-seq	-	（C23） 适用于 continue 语句的可选属性列表
解释
continue 语句会导致跳转到循环体的末尾，就像通过 goto 一样（它可能只出现在 for、while 和 do-while 循环的循环体中）。

对于 while 循环，它充当

while (/* ... */) {
   // ... 
   continue; // acts as goto contin;
   // ... 
   contin:;
}
对于 do-while 循环，它充当：

do {
    // ... 
    continue; // acts as goto contin;
    // ... 
    contin:;
} while (/* ... */);
For for 循环，它的作用是：

for (/* ... */) {
    // ... 
    continue; // acts as goto contin;
    // ... 
    contin:;
}
关键字
continue

例
运行此代码
#include <stdio.h>
 
int main(void) 
{
    for (int i = 0; i < 10; i++) {
        if (i != 5) continue;
        printf("%d ", i);             // this statement is skipped each time i != 5
    }
 
    printf("\n");
 
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 5; k++) { // only this loop is affected by continue
            if (k == 3) continue;
            printf("%d%d ", j, k);    // this statement is skipped each time k == 3
        }
    }
}
输出：

5
00 01 02 04 10 11 12 14
引用
C17 标准 （ISO/IEC 9899：2018）：
6.8.6.2 继续语句（第 111 页）
C11 标准 （ISO/IEC 9899：2011）：
6.8.6.2 继续语句（第 153 页）
C99 标准 （ISO/IEC 9899：1999）：
6.8.6.2 继续语句（第 138 页）
C89/C90 标准 （ISO/IEC 9899：1990）：
3.6.6.2 continue 语句
