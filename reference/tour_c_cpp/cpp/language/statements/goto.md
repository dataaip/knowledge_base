C++ goto 语句

无条件转移控制权。

当无法使用其他语句将控制权转移到所需位置时使用。

语法
attr（可选）goto 标签 ;		
解释
goto 语句将控制权转移到 label 指定的位置。goto 语句必须与它所引用的标签处于同一函数中，它可以出现在标签之前或之后。

如果控制权的转移退出了任何自动变量的作用域（例如，通过向后跳转到此类变量声明之前的点或通过向前跳出变量作用域的复合语句），则将对作用域退出的所有变量调用析构函数，顺序与其构造顺序相反。

goto 语句不能将控制权转移到 control-flow-limited 语句中，但可以将控制权转移到 control-flow-limited 语句中（遵循上述有关作用域中自动变量的规则）。

如果控制权的转移进入任何自动变量的作用域（例如，通过向前跳转到声明语句），则程序格式错误（无法编译），除非输入作用域的所有变量都具有以下类型：

声明不带初始值设定项的标量类型
具有简单默认构造函数和简单析构函数的类类型，声明时没有初始值设定项
上述之一的简历合格版本
上述之一的数组
（注：所有形式的控制权转让均适用相同的规则）

笔记
在 C 编程语言中，goto 语句的限制较少，可以输入除可变长度数组或可变修改指针之外的任何变量的作用域。

关键字
goto

例
运行此代码
#include <iostream>
 
struct Object
{
    // non-trivial destructor
    ~Object() { std::cout << 'd'; }
};
 
struct Trivial
{
    double d1;
    double d2;
}; // trivial ctor and dtor
 
int main()
{
    int a = 10;
 
    // loop using goto
label:
    Object obj;
    std::cout << a << ' ';
    a -= 2;
 
    if (a != 0)
        goto label;  // jumps out of scope of obj, calls obj destructor
    std::cout << '\n';
 
    // goto can be used to efficiently leave a multi-level (nested) loops
    for (int x = 0; x < 3; ++x)
        for (int y = 0; y < 3; ++y)
        {
            std::cout << '(' << x << ',' << y << ") " << '\n';
            if (x + y >= 3)
                goto endloop;
        }
 
endloop:
    std::cout << '\n';
 
    goto label2; // jumps into the scope of n and t
 
    [[maybe_unused]] int n; // no initializer
 
    [[maybe_unused]] Trivial t; // trivial ctor/dtor, no initializer
 
//  int x = 1;   // error: has initializer
//  Object obj2; // error: non-trivial dtor
 
label2:
    {
        Object obj3;
        goto label3; // jumps forward, out of scope of obj3
    }
 
label3:
    std::cout << '\n';
}
输出：

10 d8 d6 d4 d2
(0,0)
(0,1)
(0,2)
(1,0)
(1,1)
(1,2)
 
d
d
另请参阅
goto 的 C 文档
外部链接
流行的 Edsger W. Dijkstra 文章 “Goto 被认为有害”（最初，在“ACM （CACM） 的通信信”，第 11 卷 #3,1968 年 3 月，第 147-148 页）中，对不小心使用这个关键字可能引入的许多微妙问题进行了调查。
