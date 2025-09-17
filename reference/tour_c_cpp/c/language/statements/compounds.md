C 复合语句

复合语句或块是用大括号括起来的语句和声明序列。

{ 声明 | 声明 ...（可选）}		（直到 C23）
attr-spec-seq（可选）{unlabeled-statement| 标签 | 声明 ...（可选）}		（自 C23 起）
复合语句允许将一组声明和语句分组到一个单元中，该单元可以在任何需要单个语句的地方使用（例如， 在 if 语句或迭代语句中）：

if (expr) // start of if-statement
{ // start of block
  int n = 1; // declaration
  printf("%d\n", n); // expression statement
} // end of block, end of if-statement
每个复合语句都引入了自己的块作用域 。

当控制流按顺序传递这些声明时，在块内声明的具有自动存储持续时间的变量的初始值设定项和 VLA 声明符将执行，就好像它们是语句一样：

int main(void)
{ // start of block
  { // start of block
       puts("hello"); // expression statement
       int n = printf("abc\n"); // declaration, prints "abc", stores 4 in n
       int a[n*printf("1\n")]; // declaration, prints "1", allocates 8*sizeof(int)
       printf("%zu\n", sizeof(a)); // expression statement
  } // end of block, scope of n and a ends
  int n = 7; // n can be reused
}