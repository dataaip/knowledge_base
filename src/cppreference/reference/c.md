# C 语言参考手册

> 来源：[cppreference.com](https://en.cppreference.com/w/c)

---

## 📘 C 语言核心内容

### 版本支持
- **C 标准**：C89, C95, C99, C11, C17, C23
- **编译器支持**：C99, C23

---

## 🧱 语言基础

| 类别 | 内容 |
|------|------|
| 基础概念 | 关键字、预处理器、表达式、声明、初始化、函数、语句、头文件 |
| 类型支持 | 基本数据类型与类型转换 |
| 程序工具 | 程序控制、命令行参数等 |
| 可变参数函数 | 支持 `stdarg.h` 的可变参数处理 |
| 错误处理 | 使用 `errno` 和标准错误码进行错误检测 |
| 动态内存管理 | 使用 `malloc`, `calloc`, `realloc`, `free` 等管理堆内存 |

---

## 📚 标准库模块

### 字符串处理
- **空终止字符串操作**
  - 字节字符串（`char`）
  - 多字节字符串（`mblen`, `mbtowc` 等）
  - 宽字符串（`wchar_t`）

### 算法支持
- 提供通用算法接口，如排序、查找等

### 数值计算
| 类别 | 内容 |
|------|------|
| 常见数学函数 | `math.h` 中的三角函数、指数函数、对数函数等 |
| 浮点环境 (C99) | 控制浮点运算行为和异常处理 |
| 伪随机数生成 | `rand`, `srand`, `random` 等 |
| 复数运算 (C99) | 使用 `_Complex` 类型支持复数运算 |
| 泛型数学 (C99) | `tgmath.h` 提供类型无关的数学函数调用 |
| 位操作 (C23) | 新增位操作函数，如 `popcount`, `clz` 等 |
| 整数溢出检查 (C23) | 提供安全的整数运算函数，避免溢出 |

### 时间与本地化
- **时间处理**：使用 `time.h` 处理日期和时间
- **本地化支持**：使用 `locale.h` 实现国际化支持

### 输入/输出
- **标准 I/O**：`stdio.h` 提供文件和控制台输入输出功能

### 并发支持 (C11)
- 引入线程支持库，包括：
  - 线程创建与管理（`thrd_create`, `thrd_join`）
  - 原子操作（`atomic_int`, `atomic_load`, `atomic_store`）
  - 互斥量（`mtx_lock`, `mtx_unlock`）
  - 条件变量（`cnd_wait`, `cnd_signal`）

---

## ⚙️ 技术规范扩展（Technical Specifications）

| 名称 | 描述 |
|------|------|
| 动态内存扩展 (Dynamic Memory TR) | 扩展了动态内存管理的功能 |
| 浮点扩展第 1 部分 (FP Ext 1 TS) | 提供更高级的浮点数处理能力 |
| 浮点扩展第 4 部分 (FP Ext 4 TS) | 进一步增强浮点计算的支持 |

---

## 🔗 外部链接

- [非 ANSI/ISO 库](https://en.cppreference.com/w/c/links)
- [索引](https://en.cppreference.com/w/c/index)
- [符号索引](https://en.cppreference.com/w/c/symbol_index)

---

## 📰 页面信息

> 页面最后修改于：2017年7月3日 20:56  
> 离线版本获取时间：2025年2月9日 16:39

--- 

如需访问在线版本，请前往：[cppreference.com - C 语言参考](https://en.cppreference.com/w/c)