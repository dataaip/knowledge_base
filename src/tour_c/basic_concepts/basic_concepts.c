/**
* @file              basic_concepts.c
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.01
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.01 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <stdio.h>  // 头文件

#define TOUR_C_BASIC_CONCEPTS

/*
### 基本概念

本节提供了描述 C 编程语言时使用的特定术语和概念的定义。

C 程序是包含声明的文本文件（通常是头文件和源文件）的序列。它们经过转换成为可执行程序，该程序在 OS 调用其 main 函数时执行（除非它本身是 OS 或其他独立程序，在这种情况下，入口点是实现定义的）。

C 程序中的某些单词具有特殊含义，它们是关键字。其他 S 可以用作标识符，可用于标识对象、函数、结构、联合或枚举标记、其成员、typedef 名称、标签或宏。

每个标识符（宏除外）仅在程序中称为其范围的部分内有效，并且属于四种名称空间之一。某些标识符具有链接，这使得它们在出现在不同的范围或翻译单元中时引用相同的实体。

函数的定义包括语句和声明的序列，其中一些包括表达式，这些表达式指定程序要执行的计算。

声明和表达式创建、销毁、访问和作对象。C 中的每个对象、函数和表达式都与一个类型相关联。
*/

/*
### 深入解析 C 语言基本概念

#### 1. **C 程序结构**
   - **本质**：C 程序是文本文件（`.c` 源文件 + `.h` 头文件）的集合，经编译器处理（预处理→编译→汇编→链接）生成可执行文件。
   - **执行入口**：操作系统调用 `main` 函数作为程序起点（独立程序如 OS 内核可能有自定义入口）。
   - **示例**：
     ```c
     // main.c
     #include <stdio.h>  // 头文件

     int main() {        // 入口函数
         printf("Hello, World!");
         return 0;
     }
     ```
     - 编译命令：`gcc main.c -o program && ./program`

#### 2. **关键字与标识符**
   - **关键字**：C 语言保留的 32 个特殊单词（如 `int`, `if`, `return`），不可用作标识符。
   - **标识符**：用户定义的名称（规则：字母/下划线开头 + 字母/数字/下划线），区分大小写。
     - **类型**：
       - 变量：`int count;`
       - 函数：`void calculate();`
       - 结构标记：`struct Point { int x, y; };`
       - 宏：`#define PI 3.14`

#### 3. **作用域 (Scope)**
   - **定义**：标识符的有效范围。
   - **类型**：
     - **块作用域**：`{}` 内声明（如函数内变量）
       ```c
       void func() {
           int x = 10;  // 作用域限于 func 函数内
       }
       ```
     - **文件作用域**：所有函数外声明（全局变量）
       ```c
       int global = 5;  // 作用域从声明处到文件结束
       ```

#### 4. **命名空间 (Name Spaces)**
   - **四大独立命名空间**（同名不冲突）：
     1. **标签名**：`goto` 标签（如 `error:`）
     2. **结构/联合/枚举标记**：`struct Tag` 中的 `Tag`
     3. **成员名**：结构/联合内部的成员名
        ```c
        struct Data {
            int id;    // 成员命名空间
            float val;
        };
        ```
     4. **普通标识符**：变量、函数、类型别名等
        ```c
        typedef struct Data Data;  // 普通标识符 "Data"
        ```

#### 5. **链接 (Linkage)**
   - **作用**：控制跨文件/作用域的实体共享。
   - **类型**：
     - **外部链接** (`extern`)：全局可访问
       ```c
       // file1.c
       extern int shared;  // 声明在其他文件定义

       // file2.c
       int shared = 100;   // 实际定义
       ```
     - **内部链接** (`static`)：仅当前文件可见
       ```c
       static int internal = 42;  // 其他文件无法访问
       ```
     - **无链接**：局部变量（如函数内 `auto` 变量）

#### 6. **函数定义**
   - **组成**：函数头 + 函数体（语句 + 声明 + 表达式）
     ```c
     int add(int a, int b) {  // 函数头
         int sum = a + b;     // 声明 + 表达式
         return sum;          // 语句
     }
     ```

#### 7. **对象与类型**
   - **对象**：内存中存储数据的区域（如变量）。
   - **类型系统**：
     - 基础类型：`int`, `float`, `char`
     - 派生类型：指针 `int*`, 数组 `int[5]`, 结构体
     - **示例**：
       ```c
       int num = 10;        // int 类型对象
       float *ptr = &num;   // 错误！类型不兼容
       ```

---

### 关键概念总结表
| **概念**       | **核心作用**                     | **示例**                     |
|----------------|----------------------------------|------------------------------|
| 翻译单元       | 编译器处理的独立单元（.c + .h） | `main.c` + `utils.h`         |
| 关键字         | 保留特殊含义的单词               | `for`, `break`, `typedef`    |
| 标识符作用域   | 控制标识符可见范围               | 块作用域 `{}`，文件作用域    |
| 四大命名空间   | 避免命名冲突                     | 结构成员名 vs 全局变量名     |
| 链接属性       | 管理跨文件实体共享               | `extern` 全局变量，`static`  |
| 类型系统       | 定义数据解释方式                 | `int`(整数), `float`(浮点数) |

### 总结
C 程序的核心是**文本文件集合**，通过**编译转换**为可执行文件。程序执行始于 `main` 函数（标准入口）。  
**关键字**（如 `if`/`int`）拥有固定含义，**标识符**（如变量名）需遵守作用域规则（局部/全局）和命名空间隔离（标签/成员/变量独立）。  
**链接属性**（`extern`/`static`）控制标识符的跨文件可见性。**函数**由语句和表达式构成，**类型系统**确保数据操作安全（如禁止 `int*` 指向 `float`）。  
理解这些基础概念是掌握 C 语言内存管理、指针操作等高级特性的基石。
*/

void func()
{
    int x = 10;  // 块作用域：作用域限于 func 函数内
}

int global = 5; // 文件作用域：作用域从声明处到文件结束

struct Data
{
    int id;    // 四大独立命名空间（同名不冲突）：成员命名空间
    float val;
};

typedef struct Data Data;  // 四大独立命名空间（同名不冲突）：普通标识符 "Data"

// file1.c
extern int shared; // 外部链接 (extern)：全局可访问 声明在其他文件定义
// file2.c
// int shared = 100;   // 实际定义

static int internal = 42;  // 内部链接 (static)：仅当前文件可见，其他文件无法访问

int add(int a, int b) {  // 函数定义：函数头
    int sum = a + b;     // 声明 + 表达式
    return sum;          // 语句
}

int num = 10;        // 对象与类型：int 类型对象
float *ptr = &num;   // 错误！类型不兼容

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int basic_concepts_fn()
{

    printf("basic concepts function begin...");

    return 0;
}