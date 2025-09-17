C++ continue 语句

导致跳过封闭 for、range-for、while 或 do-while 循环体的其余部分。

当使用条件语句忽略循环的其余部分很尴尬时使用。

语法
attr（可选）continue;		
解释
continue 语句会导致跳转，就像通过 goto 到循环体的末尾一样（它可能只出现在 for、range-for、while 和 do-while 循环的循环体中）。

更准确地说，

对于 while 循环，它充当

while (/* ... */)
{
   // ...
   continue; // acts as goto contin;
   // ...
   contin:;
}
对于 do-while 循环，它充当：

do
{
    // ...
    continue; // acts as goto contin;
    // ...
    contin:;
} while (/* ... */);
对于 for 和 range-for 循环，它充当：

for (/* ... */)
{
    // ...
    continue; // acts as goto contin;
    // ...
    contin:;
}
关键字
continue

例
运行此代码
#include <iostream>
 
int main()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i != 5)
            continue;
        std::cout << i << ' ';      // this statement is skipped each time i != 5
    }
    std::cout << '\n';
 
    for (int j = 0; 2 != j; ++j)
        for (int k = 0; k < 5; ++k) // only this loop is affected by continue
        {
            if (k == 3)
                continue;
            // this statement is skipped each time k == 3:
            std::cout << '(' << j << ',' << k << ") ";
        }
    std::cout << '\n';
}
输出：

5
(0,0) (0,1) (0,2) (0,4) (1,0) (1,1) (1,2) (1,4)
另请参阅
C 文档以继续
