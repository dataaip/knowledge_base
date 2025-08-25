# C 语言基础概念

  [1. C 程序的构成](#1-c-程序的构成)
  
  [2. 关键字与标识符](#2-关键字与标识符)
  
  [3. 作用域与命名空间](#3-作用域与命名空间)
  
  [4. 链接性（Linkage）](#4-链接性linkage)
  
  [5. 函数定义与语句](#5-函数定义与语句)
  
  [6. 对象、类型与操作](#6-对象类型与操作)
  
  [7. 总结](#7-总结)
  
  [参考资料](#参考资料)

## 概述

本节提供了描述 C 编程语言时所使用的特定术语和概念的定义。

---

## 1. C 程序的构成

### 1.1 程序结构定义

C 程序是一系列文本文件的序列（通常是头文件和源文件），这些文件包含声明。它们经过翻译过程成为可执行程序，当操作系统调用其`main`函数时执行（除非它本身就是操作系统或其他独立程序，在这种情况下入口点是由实现定义的）。

### 1.2 详细解释

**程序文件类型**：

- 头文件（Header Files）：通常以`.h`扩展名结尾，包含函数声明、宏定义、类型定义等
- 源文件（Source Files）：通常以`.c`扩展名结尾，包含函数实现和变量定义

**翻译过程（Translation Process）**：

C 程序的翻译过程包括以下阶段：

- 预处理（Preprocessing）：处理预处理指令（如`#include`、`#define`等）
- 编译（Compilation）：将预处理后的源代码转换为汇编代码
- 汇编（Assembly）：将汇编代码转换为目标文件（机器代码）
- 链接（Linking）：将多个目标文件和库文件链接成可执行程序

**示例代码**：

```c
// hello.h (头文件)
#ifndef HELLO_H
#define HELLO_H

void print_hello(void);

#endif

// hello.c (源文件)
#include <stdio.h>
#include "hello.h"

void print_hello(void) {
    printf("Hello, World!\n");
}

// main.c (主程序文件)
#include "hello.h"

int main(void) {
    print_hello();
    return 0;
}
```

---

## 2. 关键字与标识符

### 2.1 关键字（Keywords）

C 程序中的某些单词具有特殊含义，它们是关键字。关键字是 C 语言的保留字，不能用作标识符。

**C 语言关键字列表**：

| 类型 | 关键字 |
|------|--------|
| 数据类型 | `char`, `int`, `float`, `double`, `void` |
| 存储类说明符 | `auto`, `register`, `static`, `extern` |
| 类型限定符 | `const`, `volatile` |
| 控制流 | `if`, `else`, `switch`, `case`, `default`, `for`, `while`, `do`, `break`, `continue`, `goto`, `return` |
| 结构化类型 | `struct`, `union`, `enum` |
| 其他 | `sizeof`, `typedef` |

### 2.2 标识符（Identifiers）

其他单词可以用作标识符，用于标识以下元素：

- 对象（Objects）：变量和数组
- 函数（Functions）：用户定义的函数
- 结构、联合或枚举标签：`struct`、`union`、`enum`的标签
- 成员：结构或联合的成员
- typedef 名称：类型别名
- 标签（Labels）：`goto`语句的目标
- 宏（Macros）：预处理器宏

**标识符命名规则**：

- 由字母、数字和下划线组成
- 必须以字母或下划线开头
- 区分大小写
- 不能与关键字重名

**示例**：

```c
// 有效的标识符
int age;              // 变量
char name[50];        // 数组
void calculate(void); // 函数
struct Student {      // 结构标签
    int id;           // 成员
    char grade;       // 成员
};
typedef int Integer;  // typedef名称

// 无效的标识符
int 2age;    // 错误：以数字开头
int int;     // 错误：与关键字重名
```

---

## 3. 作用域与命名空间

### 3.1 作用域（Scope）

每个标识符（宏除外）仅在程序的一部分内有效，这部分称为其作用域。

**作用域类型**：

- 文件作用域（File Scope）：在所有函数外部声明的标识符
- 函数作用域（Function Scope）：标签具有函数作用域
- 块作用域（Block Scope）：在块内声明的标识符
- 函数原型作用域（Function Prototype Scope）：函数原型中的参数名

**示例**：

```c
int global_var = 10;    // 文件作用域

void function1(void) {
    int local_var = 20; // 块作用域
    
    if (global_var > 5) {
        int block_var = 30; // 更小的块作用域
        // block_var在此块内有效
    }
    // block_var在此处无效
    
    label1:  // 函数作用域（整个函数内可见）
    // ...
}

void function2(int param) { // param具有函数原型作用域
    // 无法访问function1中的local_var
}
```

### 3.2 命名空间（Name Spaces）

C 语言中有四种命名空间：

- 标签命名空间：`goto`标签
- 标签、成员命名空间：`struct`、`union`、`enum`的标签
- 成员命名空间：结构和联合的成员（每个结构/联合有自己的命名空间）
- 普通标识符命名空间：变量、函数、typedef 名称、枚举常量

**示例**：

```c
// 不同命名空间中的同名标识符
struct point {     // 标签命名空间中的"point"
    int x;         // 成员命名空间中的"x"
    int y;         // 成员命名空间中的"y"
};

int point;         // 普通标识符命名空间中的"point"

void function(void) {
    point:         // 标签命名空间中的"point"
    struct point p; // 使用标签命名空间中的"point"
    p.x = point;   // 使用普通标识符命名空间中的"point"
}
```

---

## 4. 链接性（Linkage）

### 4.1 链接性概念

某些标识符具有链接性，使它们在不同作用域或翻译单元中出现时引用相同的实体。

**链接性类型**：

- 外部链接性（External Linkage）：可以在其他翻译单元中访问
- 内部链接性（Internal Linkage）：只能在当前翻译单元中访问
- 无链接性（No Linkage）：只在当前作用域中有效

### 4.2 链接性规则

```c
// file1.c
int global_var = 10;        // 外部链接性
static int static_var = 20; // 内部链接性
extern int extern_var;      // 外部链接性（声明）

void function1(void) {      // 外部链接性
    int local_var = 30;     // 无链接性
    static int func_static = 40; // 无链接性（但存储期是静态的）
}

static void internal_func(void) { // 内部链接性
    // ...
}

// file2.c
extern int global_var;      // 引用file1.c中的global_var
// extern int static_var;   // 错误：无法访问file1.c中的static_var

void function2(void) {
    // 可以调用function1，但不能调用internal_func
}
```

---

## 5. 函数定义与语句

### 5.1 函数定义结构

函数的定义包括语句和声明的序列，其中一些包含表达式，这些表达式指定了程序要执行的计算。

**函数定义组成部分**：

```c
返回类型 函数名(参数列表) {
    // 局部变量声明
    // 执行语句
    // 表达式
    return 返回值; // 可选
}
```

**示例**：

```c
#include <stdio.h>

// 函数定义示例
int calculate_sum(int a, int b) {
    int result;           // 局部变量声明
    result = a + b;       // 赋值语句（包含表达式）
    printf("计算结果: %d\n", result); // 函数调用语句
    return result;        // 返回语句
}

int main(void) {
    int x = 5, y = 3;     // 声明和初始化
    int sum;              // 声明
    
    sum = calculate_sum(x, y); // 函数调用表达式
    
    if (sum > 10) {       // 条件语句
        printf("和大于10\n");
    } else {
        printf("和不大于10\n");
    }
    
    return 0;
}
```

---

## 6. 对象、类型与操作

### 6.1 基本概念

声明和表达式用于创建、销毁、访问和操作对象。C 语言中的每个对象、函数和表达式都与一个类型相关联。

### 6.2 对象（Objects）

在 C 语言中，对象是存储中的一个区域，可以保存值。

**对象的特征**：

- 存储期（Storage Duration）：对象存在的时间
- 类型（Type）：决定对象可以保存的值的集合
- 值（Value）：对象当前保存的内容
- 标识符（Identifier）：对象的名称（可选）

**存储期类型**：

```c
// 自动存储期（栈上分配）
void function(void) {
    int auto_var = 10; // 函数结束时销毁
}

// 静态存储期（程序运行期间存在）
static int static_var = 20;    // 内部链接
int global_var = 30;           // 外部链接

// 动态存储期（手动管理）
#include <stdlib.h>
void dynamic_example(void) {
    int *ptr = malloc(sizeof(int)); // 动态分配
    *ptr = 40;
    free(ptr); // 手动释放
}
```

### 6.3 类型系统

C 语言的类型系统包括

**基本类型**：

```c
// 整数类型
char c = 'A';           // 字符类型
int i = 42;             // 整数类型
long l = 1000000L;      // 长整数类型

// 浮点类型
float f = 3.14f;        // 单精度浮点
double d = 3.141592;    // 双精度浮点

// 特殊类型
void *ptr;              // 无类型指针
```

**派生类型**：

```c
// 数组类型
int arr[10];            // 整数数组
char str[50];           // 字符数组

// 指针类型
int *int_ptr;           // 指向整数的指针
char *char_ptr;         // 指向字符的指针

// 函数类型
int add(int, int);      // 函数声明
int (*func_ptr)(int, int); // 函数指针

// 结构类型
struct Point {
    int x, y;
};

// 联合类型
union Data {
    int i;
    float f;
    char c;
};

// 枚举类型
enum Color {
    RED,
    GREEN,
    BLUE
};
```

### 6.4 表达式与操作

表达式指定要执行的计算，可以包含：

**运算符类型**：

```c
int a = 5, b = 3, result;

// 算术运算符
result = a + b;    // 加法
result = a - b;    // 减法
result = a * b;    // 乘法
result = a / b;    // 除法
result = a % b;    // 取模

// 关系运算符
int compare = (a > b);  // 大于
compare = (a == b);     // 等于
compare = (a != b);     // 不等于

// 逻辑运算符
int logic = (a > 0) && (b > 0); // 逻辑与
logic = (a > 10) || (b > 10);   // 逻辑或
logic = !(a > b);               // 逻辑非

// 位运算符
result = a & b;    // 按位与
result = a | b;    // 按位或
result = a ^ b;    // 按位异或
result = ~a;       // 按位取反
result = a << 2;   // 左移
result = a >> 1;   // 右移

// 赋值运算符
a += b;    // 等价于 a = a + b
a -= b;    // 等价于 a = a - b
a *= b;    // 等价于 a = a * b
```

---

## 7. 总结

C语言的基础概念构成了整个语言的理论基础：

- 程序结构：由头文件和源文件组成，经过翻译过程成为可执行程序
- 词法元素：关键字具有特殊含义，标识符用于命名各种程序实体
- 作用域机制：控制标识符的可见性和生命周期
- 命名空间：避免不同类型标识符之间的命名冲突
- 链接性：决定标识符在不同翻译单元间的可访问性
- 类型系统：为所有对象、函数和表达式提供类型信息
- 对象模型：定义了数据的存储和操作方式

这些概念相互关联，共同构成了C语言强大而灵活的编程框架，为系统级编程和高效的程序开发提供了坚实的理论基础。

---

## 参考资料

- ISO/IEC 9899:2018 (C18) - Programming languages — C
- K&R《The C Programming Language》
- C 语言标准库文档
