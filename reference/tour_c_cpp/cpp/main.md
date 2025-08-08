# C 与 C++ 参考手册

来源：cppreference.com

---

## C++ 参考手册

| C++ 参考手册  C++11, C++14, C++17, C++20, C++23, C++26  │  编译器支持 C++11, C++14, C++17, C++20, C++23, C++26 | | |
| --- | --- | --- |
| **语言**  关键字 - 预处理器  ASCII 表  基础概念      注释      名称（查找）      类型（基础类型）      `main` 函数  表达式      值类别      求值顺序      运算符（优先级）      转换 - 字面值  语句      if - switch      for - 范围 for（C++11）      while - `do`-`while`  声明 - 初始化  函数 - 重载  类（联合体）  模板 - 异常  独立实现  **标准库（头文件）**  **命名要求**  **功能测试宏**（C++20）  语言 - 标准库  **语言支持库**  程序工具      信号 - 非局部跳转  基础内存管理  可变参数函数  source_location（C++20）  协程支持（C++20）  比较工具（C++20）  类型支持 - type_info  numeric_limits - exception  initializer_list（C++11）  **概念库**（C++20） | **诊断库**  断言 - 系统错误（C++11）  异常类型 - 错误码  basic_stacktrace（C++23）  调试支持（C++26）  **内存管理库**  分配器 - 智能指针  内存资源（C++17）  **元编程库**（C++11）  类型特征 - ratio  integer_sequence（C++14）  **通用工具库**  函数对象 - 哈希（C++11）  交换 - 类型操作（C++11）  整数比较（C++20）  pair - tuple（C++11）  optional（C++17）  expected（C++23）  variant（C++17） - any（C++17）  bitset - 位操作（C++20）  **容器库**  vector - deque - array（C++11）  list - forward_list（C++11）  map - multimap - set - multiset  unordered_map（C++11） unordered_multimap（C++11）  unordered_set（C++11） unordered_multiset（C++11）  容器适配器  span（C++20） - mdspan（C++23）  **迭代器库**  **范围库**（C++20）  范围工厂 - 范围适配器  generator（C++23）  **算法库**  数值算法  执行策略（C++17）  约束算法（C++20） | **字符串库**  basic_string - char_traits  basic_string_view（C++17）  **文本处理库**  原始数值转换（C++17）  格式化（C++20）  locale - 字符分类  text_encoding（C++26）  正则表达式（C++11）      basic_regex - 算法      默认正则表达式语法  以空字符结尾的序列工具：      字节 - 多字节 - 宽字符  **数值库**  通用数学函数  特殊数学函数（C++17）  数学常量（C++20）  基础线性代数算法（C++26）  数据并行类型（SIMD）（C++26）  伪随机数生成  浮点环境（C++11）  complex - valarray  **日期和时间库**  日历（C++20） - 时区（C++20）  **输入/输出库**  打印函数（C++23）  基于流的 I/O - I/O 操纵器  basic_istream - basic_ostream  同步输出（C++20）  文件系统（C++17）  **并发支持库**（C++11）  thread - jthread（C++20）  atomic - atomic_flag  atomic_ref（C++20） - memory_order  互斥 - 信号量（C++20）  条件变量 - 期约（Futures）  latch（C++20） - barrier（C++20） 安全回收（Safe Reclamation）（C++26）  **执行支持库**（C++26） |
| **技术规范**  **标准库扩展**（library fundamentals TS）  resource_adaptor - invocation_type  **标准库扩展第 2 版**（library fundamentals TS v2）  propagate_const - ostream_joiner - randint      observer_ptr - Detection idiom  **标准库扩展第 3 版**（library fundamentals TS v3）  scope_exit - scope_fail - scope_success - unique_resource | | **并行库扩展第 2 版**（parallelism TS v2）  simd  **并发库扩展**（concurrency TS）  **事务内存**（TM TS）  **反射**（reflection TS） |
| 外部链接 - 非 ANSI/ISO 库 - 索引 - std 符号索引 | | |

---

## C 参考手册
|  C89, C95, C99, C11, C17, C23  │  编译器支持 C99, C23 | | |
| --- | --- | --- |
| **语言**  基础概念  关键字  预处理器  表达式  声明  初始化  函数  语句  **头文件**  **类型支持** | **程序工具**  **可变参数函数**  **诊断库**  **动态内存管理**  **字符串库**  以空字符结尾的字符串：     字节 - 多字节 - 宽字符  **日期和时间库**  **本地化库**  **输入/输出库** | **算法库**  **数值库**  通用数学函数  浮点环境（C99）  伪随机数生成  复数运算（C99）  类型泛化数学（C99）  位操作（C23）  受检整数运算（C23）  **并发支持库**（C11） |
| **技术规范**  **动态内存扩展**（dynamic memory TR）     **浮点扩展，第 1 部分**（FP Ext 1 TS）     **浮点扩展，第 4 部分**（FP Ext 4 TS） | | |
| 外部链接 - 非 ANSI/ISO 库 - 索引 - 符号索引 | | |

---

## 新闻

- 2019 年 6 月 7 日：新的离线归档版本  
- 2018 年 10 月 28 日：新的离线归档版本  
- 2018 年 3 月 11 日：新的离线归档版本  

来源页面：“<https://en.cppreference.com/mwiki/index.php?title=Main_Page&oldid=170150>”

---

##### 导航

- 在线版本  
- 离线版本获取时间：2025 年 2 月 9 日 16:39  
- 本页最后修改时间：2024 年 3 月 12 日 22:40

---

## 知识扩展与专业说明

### 一、C++ 版本演进与特性支持

- **C++11**：引入 `auto` 关键字、右值引用、移动语义、lambda 表达式、并行库等重要特性。
- **C++14**：对 C++11 的补充，如泛型 lambda、返回类型推导等。
- **C++17**：增加了 `std::optional`, `std::variant`, 结构化绑定等。
- **C++20**：引入概念（Concepts）、协程（Coroutines）、模块（Modules）、范围（Ranges）等。
- **C++23**：正在发展中，预计引入更多现代化语言和库特性。
- **C++26**：未来计划中的版本，持续拓展语言能力。

### 二、标准库核心模块说明

#### 1. 容器库（Container Library）

- **序列容器**：`std::vector`、`std::deque`、`std::array`（C++11）等。
- **关联容器**：`std::map`、`std::set` 及其多重版本。
- **无序容器**（哈希表）：`std::unordered_map`、`std::unordered_set`（C++11）等。
- **容器适配器**：如 `std::stack`、`std::queue` 等。

#### 2. 算法库（Algorithms Library）

- 提供通用算法如 `std::sort`、`std::find`、`std::transform` 等。
- 支持自定义谓词与执行策略（C++17）。

#### 3. 并发支持库（Concurrency Support Library）

- 包括线程管理（`std::thread`）、互斥（`std::mutex`）、原子操作（`std::atomic`）、条件变量（`std::condition_variable`）等。
- C++20 引入 `std::jthread` 和信号量（Semaphores）。

#### 4. 内存管理（Memory Management）

- 提供智能指针如 `std::unique_ptr`、`std::shared_ptr`（C++11）。
- C++17 引入内存资源（`std::pmr`）。

### 三、语言核心要素

- **表达式与语句**：控制程序逻辑执行的基本单位。
- **函数重载**：根据参数类型自动选择调用的函数。
- **模板**：泛型编程基础，支持类型参数化。
- **异常处理**：使用 `try`、`catch` 和 `throw` 构建健壮程序。

### 四、C 的标准版本

- **C89/C90**：首个 ANSI/ISO C 标准。
- **C99**：增加了 `//` 注释、混合声明与代码、复数类型等。
- **C11**：增加了多线程支持、静态断言 `_Static_assert`、匿名结构体等。
- **C17/C18**：修正小问题，无重大新特性。
- **C23**：新增位操作函数、受检整数运算等现代语言特性。

---

## 总结

本内容为 **C 和 C++ 参考手册** 的目录导航，涵盖了从语言基础到标准库、从核心特性到最新扩展的全面技术参考。适合开发者用于学习、查阅和深入研究 C/C++ 编程语言及其标准库。