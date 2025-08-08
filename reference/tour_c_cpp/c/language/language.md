# C语言

来源：[cppreference.com](https://en.cppreference.com)

## C语言概述

本页面是关于C语言核心语法构造的权威参考手册。

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| 基本概念 | 关键字 | 预处理器 | 语句 | 表达式 |
| 初始化 | 声明 | 函数 | 其他 | C语言历史 |
| 技术规范 |  |  |  |  |

---

## 核心内容概览

### 基本概念 (Basic Concepts)

- 注释 (Comments)
- ASCII 字符表 (ASCII chart)
- 字符集与编码 (Character sets and encodings)
- 翻译阶段 (Translation phases)
- 标点符号 (Punctuation)
- 标识符 (Identifier)
  - 作用域 (Scope)
  - 生命周期 (Lifetime)
- 名称查找与命名空间 (Lookup and Name Spaces)
- 类型 (Type)
  - 算术类型 (Arithmetic types)
- 对象与对齐 (Objects and Alignment)
- 主函数 `main` (The `main` function)
- 如同规则 (As-if rule)
- 未定义行为 (Undefined behavior)
- 内存模型与数据竞争 (Memory model and Data races)

---

### 关键字 (Keywords)

C语言中预定义的保留字，具有特殊含义。例如：
- `int`, `char`, `float`：基本数据类型
- `if`, `else`, `while`：控制结构
- `return`, `goto`：跳转语句
- `const`, `volatile`：类型修饰符

---

### 预处理器 (Preprocessor)

用于在编译前进行文本替换和条件编译。主要包括：

| 指令 | 描述 |
| --- | --- |
| `#if`, `#ifdef`, `#ifndef`, `#elif` | 条件编译指令 |
| `#elifdef`, `#elifndef` (C23) | C23新增的条件判断关键字 |
| `#define`, `#`, `##` | 宏定义与字符串化/粘贴操作 |
| `#include` | 包含文件 |
| `#pragma` | 编译器特定指令 |
| `#line` | 修改行号与文件名 |
| `#error` | 在预处理时引发错误 |
| `#warning` (C23) | C23新增的警告提示指令 |
| `#embed` (C23) | C23新增的资源嵌入支持 |

---

### 语句 (Statements)

用于控制程序流程的构造：

| 语句类型 | 描述 |
| --- | --- |
| `if`, `switch` | 分支选择 |
| `for` | 循环结构 |
| `while`, `do-while` | 循环结构 |
| `continue`, `break` | 跳转语句 |
| `goto` | 无条件跳转（不推荐使用） |
| `return` | 返回函数值 |

---

### 表达式 (Expressions)

表达式是一系列运算符和操作数组成的式子。

#### 表达式相关特性

- 值类别 (Value categories)：左值与右值
- 求值顺序与序列点 (Evaluation order and sequencing)
- 常量与字面量 (Constants and literals)
  - 整型常量 (Integer constants)
  - 浮点常量 (Floating constants)
  - 字符常量 (Character constants)
  - 布尔值 `true`/`false` (C23)
  - 空指针 `nullptr` (C23)
  - 字符串字面量 (String literals)
  - 复合字面量 (Compound literals) (C99引入)

#### 运算符分类

- 成员访问与间接寻址 (Member access and indirection)
- 逻辑与比较运算 (Logical - Comparison)
- 算术运算 (Arithmetic)
- 赋值运算 (Assignment)
- 自增/自减 (Increment and Decrement)
- 函数调用、逗号、三元运算符 (Call, Comma, Ternary)
- `sizeof`, `alignof` (C11)
- 强制类型转换 (Cast operators)
- 运算符优先级 (Operator precedence)
- 泛型选择 (Generic selection) (C11)

---

### 初始化 (Initialization)

不同类型的变量如何初始化：

| 类型 | 描述 |
| --- | --- |
| 标量初始化 (Scalar) | 单个变量赋初值 |
| 数组初始化 (Array) | 列表方式初始化 |
| 结构体/联合体初始化 (Structure/Union) | 按成员顺序或带字段名初始化 |

---

### 声明 (Declarations)

描述变量、函数等的声明方式：

| 特性 | 描述 |
| --- | --- |
| 指针与数组 (Pointers - Arrays) | 变量声明中的复合类型 |
| 枚举 (Enumerations) | 用户自定义整数集合 |
| 存储期与链接性 (Storage duration and Linkage) | 决定变量存在时间和可见性范围 |
| 类型修饰符 (`const`, `volatile`, `restrict`) | 类型限定符 |
| 结构体与联合体 (`struct`, `union`) | 复杂数据类型 |
| 位域 (Bit-fields) | 以位为单位分配内存 |
| 对齐说明符 (`alignas`) (C11) | 明确指定对象对齐方式 |
| 类型别名 (`typedef`) | 为现有类型起新名字 |
| 静态断言 (`static_assert`) (C11) | 编译期检查断言 |
| 原子类型 (Atomic types) (C11) | 支持原子操作 |
| 外部与临时定义 (External and tentative definitions) | 全局变量声明规则 |
| 属性 (Attributes) (C23) | 扩展语法用于标注代码元信息 |

---

### 函数 (Functions)

函数是执行任务的基本单位。

| 组件 | 描述 |
| --- | --- |
| 函数声明 (Function declaration) | 在使用前声明函数接口 |
| 函数定义 (Function definition) | 提供函数实现 |
| 内联函数 (`inline`) (C99) | 请求编译器优化函数调用开销 |
| 不返回函数 (`_Noreturn`) (C11，C23已废弃) | 标识函数不会正常返回 |
| 可变参数 (Variadic arguments) | 支持不确定数量参数的函数 |

---

### 其他 (Miscellaneous)

| 内容 | 描述 |
| --- | --- |
| C语言历史 (History of C) | C的发展历程 |
| 合规性 (Conformance) | 实现与标准的符合程度 |
| 内联汇编 (Inline assembly) | 嵌入汇编代码 |
| 信号处理 (Signal handling) | 程序异常处理机制 |
| 可分析性 (Analyzability) (C11) | 便于静态分析的特性支持 |

---

## 相关资料

| 项目 | 描述 |
| --- | --- |
| [C++ 语言文档](https://en.cppreference.com/w/cpp/language) | C++语言构造的详细文档 |

---

## 页面信息

- 获取来源：<https://en.cppreference.com/mwiki/index.php?title=c/language&oldid=177716>
- 离线版本获取时间：2025年2月9日 16:39
- 最后修改时间：2024年11月20日 04:45
