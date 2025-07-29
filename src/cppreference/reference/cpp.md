# C++ 语言参考手册

> 来源：[cppreference.com](https://en.cppreference.com/w/cpp)

---

## 📘 C++ 核心内容

### 版本支持
- **C++ 标准**：C++11, C++14, C++17, C++20, C++23, C++26
- **编译器支持**：C++11, C++14, C++17, C++20, C++23, C++26

---

## 🧱 语言基础

| 类别 | 内容 |
|------|------|
| 基础概念 | 关键字、预处理器、ASCII 表、注释、命名（查找）、类型（基本类型）、main 函数 |
| 表达式 | 值类别、求值顺序、运算符（优先级）、转换、字面量 |
| 语句 | `if`, `switch`, `for`, `range-for` (C++11), `while`, `do-while` |
| 声明与初始化 | 声明、初始化、函数、重载、类（联合体）、模板、异常处理、独立实现 |
| 标准库 | 头文件、命名要求、特性测试宏 (C++20) |

---

## 📚 标准库模块

### 语言支持库
- 程序工具：信号、非局部跳转、基础内存管理、可变参数函数、`source_location` (C++20)、协程支持 (C++20)、比较工具 (C++20)
- 类型支持：`type_info`, `numeric_limits`, `exception`, `initializer_list` (C++11), 概念库 (C++20)

### 诊断库
- 断言、系统错误 (C++11)、异常类型、错误编号、`basic_stacktrace` (C++23)、调试支持 (C++26)

### 内存管理库
- 分配器、智能指针、内存资源 (C++17)

### 元编程库 (C++11)
- 类型特征、`ratio`, `integer_sequence` (C++14)

### 工具库
- 函数对象、哈希 (C++11)、交换、类型操作 (C++11)、整数比较 (C++20)、`pair`, `tuple` (C++11)、`optional` (C++17)、`expected` (C++23)、`variant` (C++17)、`any` (C++17)、`bitset`、位操作 (C++20)

### 容器库
- 序列容器：`vector`, `deque`, `array` (C++11), `list`, `forward_list` (C++11)
- 关联容器：`map`, `multimap`, `set`, `multiset`
- 无序关联容器：`unordered_map` (C++11), `unordered_multimap` (C++11), `unordered_set` (C++11), `unordered_multiset` (C++11)
- 容器适配器：`span` (C++20), `mdspan` (C++23)

### 迭代器与范围库
- 迭代器库、范围库 (C++20)、范围工厂、范围适配器、生成器 (C++23)

### 算法库
- 算法、数值算法、执行策略 (C++17)、约束算法 (C++20)

### 字符串库
- `basic_string`, `char_traits`, `basic_string_view` (C++17)

### 文本处理库
- 原始数值转换 (C++17)、格式化 (C++20)、本地化 (`locale`)、字符分类、`text_encoding` (C++26)、正则表达式 (C++11)

### 数值库
- 常见数学函数、特殊数学函数 (C++17)、数学常量 (C++20)、基础线性代数算法 (C++26)、数据并行类型 (SIMD) (C++26)、伪随机数生成、浮点环境 (C++11)、复数 (`complex`)、数组 (`valarray`)

### 时间库
- 日期与时间、日历 (C++20)、时区 (C++20)

### 输入/输出库
- 打印函数 (C++23)、基于流的 I/O、I/O 操纵符、`basic_istream`, `basic_ostream`、同步输出 (C++20)、文件系统 (C++17)

### 并发支持库 (C++11)
- 线程 (`thread`, `jthread` (C++20))、原子操作 (`atomic`, `atomic_flag`, `atomic_ref` (C++20)), 内存顺序 (`memory_order`)、互斥锁、信号量 (C++20)、条件变量、期货 (`futures`)、门闩 (`latch` (C++20))、屏障 (`barrier` (C++20))、安全回收 (C++26)

### 执行支持库 (C++26)

---

## ⚙️ 技术规范扩展（Technical Specifications）

### 标准库扩展
- **Library Fundamentals TS**
  - `resource_adaptor`, `invocation_type`

- **Library Fundamentals TS v2**
  - `propagate_const`, `ostream_joiner`, `randint`, `observer_ptr`, 检测惯用法

- **Library Fundamentals TS v3**
  - `scope_exit`, `scope_fail`, `scope_success`, `unique_resource`

### 并行与并发扩展
- **Parallelism TS v2**
  - `simd`

- **Concurrency TS**
  - 事务内存 (TM TS)、反射 (Reflection TS)

---

## 🔗 外部链接

- [非 ANSI/ISO 库](https://en.cppreference.com/w/cpp/links)
- [索引](https://en.cppreference.com/w/cpp/index)
- [std 符号索引](https://en.cppreference.com/w/cpp/symbol_index)

---

## 📰 页面信息

> 页面最后修改于：2017年12月16日 22:24  
> 离线版本获取时间：2025年2月9日 16:39

--- 

如需访问在线版本，请前往：[cppreference.com - C++ 语言参考](https://en.cppreference.com/w/cpp)