# C++语言

来源：[cppreference.com](https://en.cppreference.com)

## C++语言概述

本页面是关于C++语言核心语法构造的权威参考手册。

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| 通用主题 | 预处理器 | 流程控制 | 条件执行语句 | 循环语句 |
| 跳转语句 | 函数 | Lambda函数表达式 | 内联说明符 | 异常规范 |
| 异常处理 | 命名空间 | 类型系统 | 说明符 | 存储期说明符 |
| 初始化 | 表达式 | 替代表示法 | 字面量 | 工具 |
| 类型定义 | 类型别名 | 类型转换 | 内存分配 | 类 |
| 类特定函数属性 | 特殊成员函数 | 模板 | 其他 |  |

---

## 核心内容概览

### 基本概念 (Basic Concepts)

- 注释 (Comments)
- ASCII字符表 (ASCII chart)
- 标点符号 (Punctuation)
- 名称与标识符 (Names and identifiers)
- 类型 (Types)
  - 基本类型 (Fundamental types)
- 对象 (Object)
  - 作用域 (Scope)
  - 生命周期 (Lifetime)
- 定义与一次定义规则 (Definitions and ODR)
- 名称查找 (Name lookup)
  - 限定查找 (qualified)
  - 非限定查找 (unqualified, ADL)
- 如同规则 (As-if rule)
- 未定义行为 (Undefined behavior, UB)
- 内存 (Memory)
  - 多线程支持 (Multithread, C++11)
- 字符集与编码 (Character sets and encodings)
- 翻译阶段 (Phases of translation)
- 主函数 (The `main` function)
- 模块 (Modules, C++20)

---

### 关键字 (Keywords)

预定义的保留词，具有特殊含义。

示例：
- 基本类型：`int`, `char`, `bool`, `double`
- 控制结构：`if`, `else`, `for`, `while`
- 访问控制：`public`, `private`, `protected`
- 类型特性：`const`, `volatile`, `static`, `mutable`
- 函数相关：`inline`, `virtual`, `explicit`, `friend`

---

### 预处理器 (Preprocessor)

在编译之前执行文本替换和条件编译。

| 指令 | 描述 |
| --- | --- |
| `#if`, `#ifdef`, `#ifndef`, `#elif` | 条件编译指令 |
| `#elifdef`, `#elifndef` (C++23) | C++23新增条件判断关键字 |
| `#define`, `#`, `##` | 宏定义及字符串化/粘贴操作符 |
| `#include` | 文件包含 |
| `#pragma` | 编译器特定指令 |
| `#line` | 设置行号和文件名 |
| `#error` | 引发预处理错误 |
| `#warning` (C++23) | 发出警告信息 |

---

### 表达式 (Expressions)

由运算符和操作数组成的式子。

#### 特性
- 值类别 (Value categories): 左值(lvalue)、右值(rvalue)
- 求值顺序 (Evaluation order)
- 常量表达式 (Constant expressions)

#### 运算符类别
- 赋值运算 (`=`, `+=`, `-=` 等)
- 算术运算 (`+`, `-`, `*`, `/`, `%`)
- 自增/自减 (`++`, `--`)
- 逻辑与比较 (`&&`, `||`, `!`, `<`, `>`, `==`)
- 成员访问 (`.` , `->`)
- 函数调用、逗号、三元表达式 (`()`, `,`, `?:`)
- 内存管理 (`new`, `delete`, `typeid`)
- 对齐查询 (`sizeof`, `alignof` C++11)
- 替代表达式 (Alternative representations)
- 默认比较 (Default comparisons, C++20)

#### 运算符优先级 (Operator precedence)

规定了表达式中各运算的计算顺序。

#### 类型转换
- 隐式转换 (Implicit conversions)
- 显式转换 (Explicit conversions)
  - 用户自定义转换
  - 算术转换 (Usual arithmetic conversions)
  - 四种强制类型转换 (`static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast`)

#### 字面量 (Literals)
- 转义序列 (Escape sequences)
- 布尔、整型、浮点型
- 字符、字符串
- 空指针 (`nullptr`, C++11)
- 用户自定义字面量 (User-defined literals, UDL, C++11)

---

### 声明 (Declarations)

声明变量、函数等实体的信息。

#### 冲突声明 (Conflicting declarations)
当多个声明相互矛盾时的处理方式。

#### 存储期与链接性
- 存储期：确定对象何时创建和销毁
- 链接性：确定名称在整个程序中的可见范围
- 翻译单元局部性 (Translation-unit-local, C++20)

#### 语言链接 (Language linkage)
支持与C等其他语言的互操作。

#### 命名空间
- 声明 (Namespace declaration)
- 别名 (Namespace alias)

#### 数据对象声明
- 引用 (References)
- 指针 (Pointers)
- 数组 (Arrays)
- 结构化绑定 (Structured bindings, C++17)

#### 类型枚举
- 枚举与枚举子 (Enumerations and enumerators)

#### 函数说明符
- `inline` 说明符
- 内联汇编 (Inline assembly)

#### 类型限定符
- `const`/`volatile`
- `constexpr` (C++11)
- `consteval` (C++20)
- `constinit` (C++20)

#### 类型推导
- `decltype` (C++11)
- `auto` (C++11)

#### 类型别名
- `typedef` 声明
- 类型别名声明 (Type alias, C++11)

#### 详细类型说明符
- 覆盖类型定义 (`class`, `struct`, `union`, `enum`)

#### 属性 (Attributes, C++11)
提供附加元信息。

#### 对齐说明符 (`alignas`, C++11)
显式指定对象对齐要求。

#### 静态断言 (`static_assert`, C++11)
在编译期进行断言检查。

---

### 初始化 (Initialization)

设置变量初始值的方式。

| 初始化类型 | 描述 |
| --- | --- |
| 默认初始化 (Default-initialization) | 使用默认构造器 |
| 值初始化 (Value-initialization) | 初始化为零值或默认值 |
| 拷贝初始化 (Copy-initialization) | 使用赋值风格初始化 |
| 直接初始化 (Direct-initialization) | 显式调用构造器 |
| 聚合初始化 (Aggregate initialization) | 用于数组和类类型 |
| 列表初始化 (List-initialization, C++11) | 使用花括号语法 |
| 引用初始化 (Reference initialization) | 引用绑定 |
| 静态非局部初始化 | 零初始化 / 常量初始化 |
| 动态非局部初始化 | 有序/无序初始化 |
| 拷贝省略 (Copy elision / RVO) | 优化机制 |

---

### 函数 (Functions)

执行特定任务的代码封装。

| 组件 | 描述 |
| --- | --- |
| 函数声明 | 定义函数接口 |
| 默认参数 | 提供默认实参 |
| 可变参数列表 | 支持不定数量参数 |
| Lambda表达式 (C++11) | 匿名函数对象 |
| 重载解析 | 决定哪个函数被调用 |
| 运算符重载 | 为用户类型重定义运算符 |
| 地址重载集合 | 获取重载函数地址 |
| 协程 (Coroutines, C++20) | 支持异步/惰性计算 |

---

### 语句 (Statements)

控制程序流程的基本构建块。

| 类型 | 描述 |
| --- | --- |
| `if`, `switch` | 条件分支语句 |
| `for`, 范围for (C++11) | 循环语句 |
| `while`, `do-while` | 循环语句 |
| `continue`, `break` | 跳转语句 |
| `goto`, `return` | 控制转移语句 |
| `synchronized`/`atomic` (TM TS) | 事务内存支持 |

---

### 类 (Classes)

面向对象编程的核心组成部分。

#### 基础
- 类与联合体 (Class/Union types)
- 注入类名 (injected-class-name)
- 数据成员与位域
- 成员函数与 `this` 指针
- 静态成员与嵌套类
- 派生类与 using 声明
- 空基类优化 (EBO)

#### 多态性
- 虚函数
- 抽象类 (ABC)
- override (C++11)
- final (C++11)
- 成员访问权限 (`private`, `protected`, `public`)
- 友元 (`friend`)

#### 构造与析构
- 构造函数与成员初始化列表
- 默认构造函数
- 析构函数
- 拷贝构造函数
- 拷贝赋值运算符
- 移动构造函数 (C++11)
- 移动赋值运算符 (C++11)
- 转换构造函数
- `explicit` 说明符

---

### 模板 (Templates)

支持泛型编程的强大工具。

#### 基础模板
- 类模板
- 函数模板
- 成员模板
- 变量模板 (C++14)

#### 参数推导
- 函数模板参数推导
- 类模板参数推导 (CTAD, C++17)

#### 特化
- 显式特化
- 部分特化

#### 参数包 (C++11)
- 可变模板参数
- sizeof... (C++11)
- 折叠表达式 (C++17)
- 参数包索引 (C++26)

#### 依赖名称与SFINAE
- 模板中的名称查找
- 替换失败不是错误 (SFINAE)

#### 约束与概念 (C++20)
- requires 表达式 (C++20)

---

### 异常处理 (Exceptions)

处理运行时错误的机制。

| 组件 | 描述 |
| --- | --- |
| `try` 块 | 异常捕获区域 |
| 抛出异常 | 使用 `throw` 抛出异常对象 |
| 异常处理 | `catch` 捕获并处理异常 |

#### 异常规范
- `noexcept` 规范 (C++11)
- 动态异常规范 (C++17前弃用)
- `noexcept` 运算符 (C++11)

---

### 其他 (Miscellaneous)

| 内容 | 描述 |
| --- | --- |
| C++历史 | 编程语言演进时间线 |
| 扩展 std 命名空间 | 如何安全扩展标准库 |
| 术语缩写 | 常见专业术语如 AFO, CPO, IFNDR 等解释 |

---

### 设计模式与惯用法 (Idioms)

| 模式 | 描述 |
| --- | --- |
| CRTP | 奇异递归模板模式 |
| PIMPL | 指针到实现（编译防火墙） |
| RAII | 资源获取即初始化 |
| Rule of Three/Five/Zero | 对象生命周期管理准则 |
| 零开销原则 | 性能优先原则 |

---

## 相关资料

| 项目 | 描述 |
| --- | --- |
| [C语言文档](https://en.cppreference.com/w/c/language) | C语言构造的详细文档 |

---

## 页面信息

- 获取来源：<https://en.cppreference.com/mwiki/index.php?title=cpp/language&oldid=178480>
- 离线版本获取时间：2025年2月9日 16:39
- 最后修改时间：2024年12月18日 19:28
