C++ 复合语句

复合语句或块将一系列语句分组为单个语句。

attr（可选）{ 语句...（可选） 标签...（可选）（ 自 C++23 起）}		
当需要一个语句，但需要按顺序执行多个语句时（例如， 在 if 语句或循环中），可以使用复合语句：

if (x > 5)          // start of if statement
{                   // start of block
    int n = 1;      // declaration statement
    std::cout << n; // expression statement
}                   // end of block, end of if statement
每个复合语句都引入了自己的块作用域 ;在块内声明的变量在右大括号处以相反的顺序销毁：

int main()
{ // start of outer block
    {                                // start of inner block
        std::ofstream f("test.txt"); // declaration statement
        f << "abc\n";                // expression statement
    }                                // end of inner block, f is flushed and closed
    std::ifstream f("test.txt"); // declaration statement
    std::string str;             // declaration statement
    f >> str;                    // expression statement
} // end of outer block, str is destroyed, f is closed
复合语句末尾的标签被视为后跟 null 语句。

（自 C++23 起）
