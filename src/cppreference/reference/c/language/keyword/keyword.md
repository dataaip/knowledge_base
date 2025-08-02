# C语言关键字

来源：cppreference.com

## C语言关键字列表

### 标准关键字（Standard Keywords）

| 关键字 | C标准版本 | 说明 |
|--------|-----------|------|
| `auto` | C89 | 声明自动存储期变量（默认） |
| `break` | C89 | 跳出循环或switch语句 |
| `case` | C89 | switch语句中的分支标签 |
| `char` | C89 | 字符类型 |
| `const` | C89 | 声明只读变量 |
| `continue` | C89 | 跳过当前循环迭代 |
| `default` | C89 | switch语句默认分支 |
| `do` | C89 | do-while循环开始 |
| `double` | C89 | 双精度浮点数 |
| `else` | C89 | if语句的可选分支 |
| `enum` | C89 | 枚举类型 |
| `extern` | C89 | 声明外部链接变量/函数 |
| `float` | C89 | 单精度浮点数 |
| `for` | C89 | for循环语句 |
| `goto` | C89 | 无条件跳转语句 |
| `if` | C89 | 条件判断语句 |
| `int` | C89 | 整数类型 |
| `long` | C89 | 长整型修饰符 |
| `register` | C89 | 建议寄存器存储（现代编译器忽略） |
| `return` | C89 | 函数返回语句 |
| `short` | C89 | 短整型修饰符 |
| `signed` | C89 | 有符号类型修饰符 |
| `sizeof` | C89 | 计算对象大小的运算符 |
| `static` | C89 | 静态存储期/内部链接 |
| `struct` | C89 | 结构体类型 |
| `switch` | C89 | 多路分支语句 |
| `typedef` | C89 | 类型别名定义 |
| `union` | C89 | 联合体类型 |
| `unsigned` | C89 | 无符号类型修饰符 |
| `void` | C89 | 空类型/无返回值 |
| `volatile` | C89 | 易变变量（防止优化） |
| `while` | C89 | while循环语句 |

---

### C99新增关键字

| 关键字 | 说明 |
|--------|------|
| `inline` (C99) | 建议函数内联展开 |
| `_Bool` (C99) | 布尔类型（后被`bool`替代） |
| `_Complex` (C99) | 复数类型 |
| `_Imaginary` (C99) | 虚数类型 |
| `restrict` (C99) | 指针限制限定符 |

---

### C11新增关键字

| 关键字 | 说明 |
|--------|------|
| `_Alignas` (C11) | 对象对齐指定（后被`alignas`替代） |
| `_Alignof` (C11) | 查询类型对齐要求（后被`alignof`替代） |
| `_Atomic` (C11) | 原子类型限定符 |
| `_Generic` (C11) | 泛型选择表达式 |
| `_Noreturn` (C11) | 函数不返回属性（后被`noreturn`替代） |
| `_Static_assert` (C11) | 编译期静态断言（后被`static_assert`替代） |
| `_Thread_local` (C11) | 线程局部存储（后被`thread_local`替代） |

---

### C23新增关键字（现代C特性）

| 关键字 | 说明 |
|--------|------|
| `alignas` (C23) | 对象对齐指定（替代`_Alignas`） |
| `alignof` (C23) | 查询类型对齐要求（替代`_Alignof`） |
| `bool` (C23) | 布尔类型（替代`_Bool`） |
| `constexpr` (C23) | 常量表达式函数/变量 |
| `false` (C23) | 布尔假值 |
| `nullptr` (C23) | 空指针常量 |
| `static_assert` (C23) | 编译期静态断言（替代`_Static_assert`） |
| `thread_local` (C23) | 线程局部存储（替代`_Thread_local`） |
| `true` (C23) | 布尔真值 |
| `typeof` (C23) | 类型推导运算符 |
| `typeof_unqual` (C23) | 去除限定符的类型推导 |
| `_BitInt` (C23) | 任意精度整数类型 |
| `_Decimal32` (C23) | 十进制浮点数类型 |
| `_Decimal64` (C23) | 十进制浮点数类型 |
| `_Decimal128` (C23) | 十进制浮点数类型 |

---

## 关键字使用详解

### 一、关键字与宏的关系

一些以下划线开头的关键字通过宏提供更易用的别名：

| 关键字 | 宏别名 | 定义头文件 | 说明 |
|--------|--------|------------|------|
| `_Alignas` | `alignas` | `<stdalign.h>` | C23起弃用 |
| `_Alignof` | `alignof` | `<stdalign.h>` | C23起弃用 |
| `_Atomic` | `atomic_int`等 | `<stdatomic.h>` | 原子类型 |
| `_Bool` | `bool` | `<stdbool.h>` | C23起弃用 |
| `_Complex` | `complex` | `<complex.h>` | 复数支持 |
| `_Imaginary` | `imaginary` | `<complex.h>` | 虚数支持 |
| `_Noreturn` | `noreturn` | `<stdnoreturn.h>` | C23起弃用 |
| `_Static_assert` | `static_assert` | `<assert.h>` | C23起弃用 |
| `_Thread_local` | `thread_local` | `<threads.h>` | C23起弃用 |

---

### 二、关键字替代拼写

为保证向后兼容，一些旧关键字被保留为新关键字的替代拼写：

| 新关键字 | 替代拼写 | 状态 |
|----------|----------|------|
| `alignas` | `_Alignas` | C23起弃用 |
| `alignof` | `_Alignof` | C23起弃用 |
| `bool` | `_Bool` | C23起弃用 |
| `static_assert` | `_Static_assert` | C23起弃用 |
| `thread_local` | `_Thread_local` | C23起弃用 |

---

### 三、标识符命名规范

以下命名约定具有特殊含义，需避免使用：

- **双下划线开头**：`__identifier`（保留给实现）
- **下划线+大写字母开头**：`_Identifier`（保留给实现）
- **单下划线开头**：建议避免在用户代码中使用

---

### 四、预处理器关键字

#### 预处理指令内识别的关键字：

| 指令关键字 | 功能说明 |
|------------|----------|
| `if` | 条件编译开始 |
| `elif` | else if分支 |
| `else` | else分支 |
| `endif` | 结束条件编译 |
| `ifdef` | 如果定义 |
| `ifndef` | 如果未定义 |
| `elifdef` (C23) | else if defined |
| `elifndef` (C23) | else if not defined |
| `define` | 定义宏 |
| `undef` | 取消宏定义 |
| `include` | 包含文件 |
| `embed` (C23) | 嵌入文件内容 |
| `line` | 设置行号信息 |
| `error` | 产生编译错误 |
| `warning` (C23) | 产生编译警告 |
| `pragma` | 编译器特定指令 |
| `defined` | 检查宏是否定义 |
| `__has_include` (C23) | 检查是否可包含文件 |
| `__has_embed` (C23) | 检查是否可嵌入文件 |
| `__has_c_attribute` (C23) | 检查C属性支持 |

#### 预处理指令外识别的关键字：

| 关键字 | 功能说明 |
|--------|----------|
| `_Pragma` (C99) | pragma指令的替代写法 |

---

### 五、扩展关键字（条件性支持）

| 扩展关键字 | 说明 |
|------------|------|
| `asm` | 内联汇编（编译器扩展） |
| `fortran` | FORTRAN语言兼容（很少使用） |

---

## 扩展知识详解

### 一、关键字分类总结

#### 1. **存储类说明符**
```c
auto      // 自动存储（默认）
static    // 静态存储
extern    // 外部链接
register  // 寄存器建议
typedef   // 类型别名
```

#### 2. **类型限定符**
```c
const     // 只读
volatile  // 易变
restrict  // 限制指针
_Atomic   // 原子操作
```

#### 3. **函数相关**
```c
inline    // 内联建议
_Noreturn // 不返回函数
```

#### 4. **对齐控制（C11/C23）**
```c
_Alignas / alignas  // 指定对齐
_Alignof / alignof  // 查询对齐
```

---

### 二、现代C语言发展趋势

C23标准显著增强了语言表达能力：

> 📌 **示例：布尔类型与空指针**
```c
#include <stdbool.h>  // C99-C23
bool flag = true;     // C23可以直接使用 true/false

#include <stddef.h>
void *ptr = NULL;     // 传统写法
void *ptr2 = nullptr; // C23推荐写法
```

> 📌 **示例：类型推导**
```c
typeof(int) x = 10;           // 等价于 int x = 10;
typeof_unqual(const int) y = 5; // 等价于 int y = 5;
```

> 📌 **示例：编译期断言**
```c
static_assert(sizeof(int) >= 4, "int must be at least 4 bytes"); // C23
```

---

### 三、Digraphs（图形替代符）

为兼容某些键盘输入，C语言支持以下图形替代符：

| 原符号 | 替代符 |
|--------|--------|
| `{`    | `<%`   |
| `}`    | `%>`   |
| `[`    | `<:`   |
| `]`    | `:>`   |
| `#`    | `%:`   |
| `##`   | `%:%:` |

---

## 标准参考文献

### 各版本C标准对关键字的定义：

- **C23标准 (ISO/IEC 9899:2024)**
  - 6.4.1 关键字
  - J.5.9 fortran关键字
  - J.5.10 asm关键字

- **C17标准 (ISO/IEC 9899:2018)**
  - 6.4.1 关键字 (p: 42-43)
  - J.5.9 fortran关键字 (p: 422)

- **C11标准 (ISO/IEC 9899:2011)**
  - 6.4.1 关键字 (p: 58-59)
  - J.5.9 fortran关键字 (p: 580)

- **C99标准 (ISO/IEC 9899:1999)**
  - 6.4.1 关键字 (p: 50)
  - J.5.9 fortran关键字 (p: 514)

- **C89/C90标准 (ISO/IEC 9899:1990)**
  - 3.1.1 关键字
  - G.5.9 fortran关键字

---

## 相关页面

| 页面名称 | 内容说明 |
|----------|----------|
| [C++ 关键字文档] | C++语言关键字对照学习 |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=c/keyword&oldid=177805>
- 最后修改时间：2024年11月22日 14:22
- 离线版本获取时间：2025年2月9日 16:39

---

✅ 熟悉并正确使用C语言关键字是编写高质量代码的基础。特别是随着C23标准的引入，许多现代化特性极大增强了语言的表现力和安全性。