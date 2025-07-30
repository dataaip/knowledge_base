# C 语言参考手册

来源：cppreference.com

---

## C 语言详细分类

| **C 语言标准** | **C 语言标准库** | **C 语言技术规范** |
| --- | --- | --- |
| C89, C95, C99, C11, C17, C23  │  编译器支持 C99, C23 | | |
| **语言**  基础概念  关键字  预处理器  表达式  声明  初始化  函数  语句  **头文件**  **类型支持** | **程序工具**  **可变参数函数**  **诊断库**  **动态内存管理**  **字符串库**  以空字符结尾的字符串：     字节 - 多字节 - 宽字符  **日期和时间库**  **本地化库**  **输入/输出库** | **算法库**  **数值库**  通用数学函数  浮点环境（C99）  伪随机数生成  复数运算（C99）  类型泛化数学（C99）  位操作（C23）  受检整数运算（C23）  **并发支持库**（C11） |
| **技术规范**  **动态内存扩展**（dynamic memory TR）     **浮点扩展，第 1 部分**（FP Ext 1 TS）     **浮点扩展，第 4 部分**（FP Ext 4 TS） | | |
| 外部链接 - 非 ANSI/ISO 库 - 索引 - 符号索引 | | |

---

## 知识扩展与专业说明

### 一、C 语言标准版本演进

#### 1. **C89 / C90**
- 正式名称：ISO/IEC 9899:1990（ANSI X3.159-1989）
- 是首个被广泛接受的 C 语言国际标准。
- 包含基本语法、类型系统、标准库等。

#### 2. **C95（修正案 1）**
- 对 C89 的技术修正，添加了对宽字符和多字节字符的支持。

#### 3. **C99**
- 添加了多项重要特性：
  - `//` 单行注释
  - 混合声明和代码
  - 可变长度数组（VLA）
  - 复数类型 `_Complex`
  - 内联函数（`inline`）
  - 64 位整数类型（`long long`）

#### 4. **C11**
- 加入对多线程的支持：
  - `<threads.h>` 头文件
  - `_Thread_local` 存储类说明符
  - `atomic` 类型和操作
- 引入静态断言 `_Static_assert`
- 支持匿名结构体/联合体

#### 5. **C17 / C18**
- 主要为技术勘误和修正，无重大新功能。

#### 6. **C23（进行中）**
- 引入新关键字（`typeof`, `alignas`, `alignof`）
- 增加 `constexpr` 支持
- 新增位操作函数
- 受检整数运算函数
- 改进宏定义和泛型选择机制

---

### 二、C 标准库核心模块详解

#### 1. **语言基础部分**

- **基础概念**：包括标识符、变量、存储期、作用域等。
- **关键字**：C 提供了 32 个保留关键字（C99 是 37 个）。
- **预处理器**：如 `#include`、`#define`、`#if` 等用于编译前文本替换。
- **表达式与语句**：构成程序逻辑的基本单位。

#### 2. **类型支持（Type support）**

- 包括基础类型（`char`, `int`, `float`, `double`）、派生类型（指针、数组、结构体）、枚举、`void` 类型。
- 使用 `sizeof` 获取对象或类型的大小。
- 使用 `alignof`（C11）检查对齐要求。

#### 3. **程序工具（Program utilities）**

- `<stdlib.h>` 中提供的工具，如：
  - 程序终止函数：`exit`, `atexit`, `_Exit`
  - 通用工具函数：`malloc`, `free`, `rand`, `qsort`, `bsearch`
  - 环境访问：`getenv`, `system`

#### 4. **可变参数函数（Variadic functions）**

- 允许函数接受可变数量的参数（如 `printf`）。
- 需要用到 `<stdarg.h>` 中的宏定义：
  - `va_start`, `va_arg`, `va_end`, `va_copy`

#### 5. **错误处理（Error handling）**

- 传统方式使用 `errno` 全局变量记录错误状态。
- `<errno.h>` 定义了错误码常量。
- C11 中引入 `static_assert` 和 `_Noreturn` 等新特性。

#### 6. **动态内存管理**

- 使用 `<stdlib.h>` 提供的函数：
  - 分配内存：`malloc`, `calloc`, `realloc`
  - 释放内存：`free`
- 需注意内存泄漏、重复释放、未初始化等风险。

#### 7. **字符串库（Strings library）**

- 主要处理以空字符（`\0`）结尾的字符串。
- `<string.h>` 提供了操作字符串的函数：
  - 字符串复制：`strcpy`, `strncpy`
  - 字符串连接：`strcat`, `strncat`
  - 字符串比较：`strcmp`, `strncmp`
  - 查找子串：`strstr`, `strchr`, `strrchr`
  - 字符串长度：`strlen`
- C23 对字符串处理进行了增强。

#### 8. **算法库（Algorithms library）**

- `<stdlib.h>` 中提供排序和搜索算法：
  - 快速排序：`qsort`
  - 二分查找：`bsearch`

#### 9. **数值库（Numerics library）**

- 包括数学运算、浮点处理、伪随机数生成等。
- `<math.h>` 提供了大量数学函数（如 `sin`, `cos`, `sqrt`）。
- `<float.h>` 定义了浮点数的精度与范围限制。
- `<complex.h>`（C99）提供复数运算支持。
- `<tgmath.h>`（C99）提供类型泛化数学函数支持。

#### 10. **日期和时间库（Date and time utilities）**

- `<time.h>` 提供日期时间处理功能：
  - 时间表示：`time_t`, `clock_t`, `struct tm`
  - 获取当前时间：`time`, `clock`
  - 时间格式化：`strftime`, `asctime`, `ctime`
  - 时间转换：`localtime`, `gmtime`, `mktime`

#### 11. **输入/输出支持（Input/Output support）**

- `<stdio.h>` 提供标准输入输出功能：
  - 文件操作：`fopen`, `fclose`, `fread`, `fwrite`
  - 格式化输入输出：`printf`, `scanf`, `fprintf`, `fscanf`
  - 字符/字符串操作：`getc`, `putc`, `fgets`, `fputs`

#### 12. **本地化支持（Localization support）**

- `<locale.h>` 用于本地化设置：
  - 设置区域信息：`setlocale`
  - 查询本地属性：`localeconv`

#### 13. **并发支持库（Concurrency support）**

- C11 引入多线程支持（`<threads.h>`）：
  - 线程创建与管理：`thrd_create`, `thrd_join`, `thrd_exit`
  - 互斥量：`mtx_lock`, `mtx_unlock`
  - 条件变量：`cnd_wait`, `cnd_signal`
  - 原子操作：`atomic_init`, `atomic_load`, `atomic_store`
  - 线程局部存储：`_Thread_local` 关键字

---

### 三、技术规范简介

#### 1. 动态内存扩展（Dynamic Memory TR）

- 提案用于扩展动态内存管理能力，但尚未正式纳入标准。

#### 2. 浮点扩展（Floating-point Extensions）

- 分为多个部分（第 1 部分和第 4 部分），主要用于增强浮点支持。

---

## 导航信息

来源页面：“<https://en.cppreference.com/mwiki/index.php?title=c&oldid=94077>”

##### 导航

- 在线版本  
- 离线版本获取时间：2025 年 2 月 9 日 16:39  
- 本页最后修改时间：2017 年 7 月 3 日 20:56