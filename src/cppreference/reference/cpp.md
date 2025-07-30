# C++ 参考手册

来源：cppreference.com

---

## C++ 详细分类

| --- | --- | --- |
| C++11, C++14, C++17, C++20, C++23, C++26  │  **编译器支持** C++11, C++14, C++17, C++20, C++23, C++26 | | |
| **语言**  关键字 - 预处理器  ASCII 表  基础概念      注释      名称（查找）      类型（基础类型）      `main` 函数  表达式      值类别      求值顺序      运算符（优先级）      转换 - 字面值  语句      if - switch      for - 范围 for（C++11）      while - `do`-`while`  声明 - 初始化  函数 - 重载  类（联合体）  模板 - 异常  独立实现  **标准库（头文件）**  **命名要求**  **功能测试宏**（C++20）  语言 - 标准库  **语言支持库**  程序工具      信号 - 非局部跳转  基础内存管理  可变参数函数  source_location（C++20）  协程支持（C++20）  比较工具（C++20）  类型支持 - type_info  numeric_limits - exception  initializer_list（C++11）  **概念库**（C++20） | **诊断库**  断言 - 系统错误（C++11）  异常类型 - 错误码  basic_stacktrace（C++23）  调试支持（C++26）  **内存管理库**  分配器 - 智能指针  内存资源（C++17）  **元编程库**（C++11）  类型特征 - ratio  integer_sequence（C++14）  **通用工具库**  函数对象 - 哈希（C++11）  交换 - 类型操作（C++11）  整数比较（C++20）  pair - tuple（C++11）  optional（C++17）  expected（C++23）  variant（C++17） - any（C++17）  bitset - 位操作（C++20）  **容器库**  vector - deque - array（C++11）  list - forward_list（C++11）  map - multimap - set - multiset  unordered_map（C++11） unordered_multimap（C++11）  unordered_set（C++11） unordered_multiset（C++11）  容器适配器  span（C++20） - mdspan（C++23）  **迭代器库**  **范围库**（C++20）  范围工厂 - 范围适配器  generator（C++23）  **算法库**  数值算法  执行策略（C++17）  约束算法（C++20） | **字符串库**  basic_string - char_traits  basic_string_view（C++17）  **文本处理库**  原始数值转换（C++17）  格式化（C++20）  locale - 字符分类  text_encoding（C++26）  正则表达式（C++11）      basic_regex - 算法      默认正则表达式语法  以空字符结尾的序列工具：      字节 - 多字节 - 宽字符  **数值库**  通用数学函数  特殊数学函数（C++17）  数学常量（C++20）  基础线性代数算法（C++26）  数据并行类型（SIMD）（C++26）  伪随机数生成  浮点环境（C++11）  complex - valarray  **日期和时间库**  日历（C++20） - 时区（C++20）  **输入/输出库**  打印函数（C++23）  基于流的 I/O - I/O 操纵器  basic_istream - basic_ostream  同步输出（C++20）  文件系统（C++17）  **并发支持库**（C++11）  thread - jthread（C++20）  atomic - atomic_flag  atomic_ref（C++20） - memory_order  互斥 - 信号量（C++20）  条件变量 - 期约（Futures）  latch（C++20） - barrier（C++20） 安全回收（Safe Reclamation）（C++26）  **执行支持库**（C++26） |
| **技术规范**  **标准库扩展**（library fundamentals TS）  resource_adaptor - invocation_type  **标准库扩展第 2 版**（library fundamentals TS v2）  propagate_const - ostream_joiner - randint      observer_ptr - Detection idiom  **标准库扩展第 3 版**（library fundamentals TS v3）  scope_exit - scope_fail - scope_success - unique_resource | | **并行库扩展第 2 版**（parallelism TS v2）  simd  **并发库扩展**（concurrency TS）  **事务内存**（TM TS）  **反射**（reflection TS） |
| 外部链接 - 非 ANSI/ISO 库 - 索引 - std 符号索引 | | |

---

## 知识扩展与专业说明

### 一、C++ 标准版本演进

#### 1. **C++11**
- 引入现代C++基础特性，如：
  - 自动类型推导（`auto`）
  - 右值引用和移动语义
  - Lambda 表达式
  - 智能指针（`shared_ptr`, `unique_ptr`）
  - 并发支持（`std::thread`, `std::mutex`）
  - 新容器（如 `std::array`, `std::unordered_map`）

#### 2. **C++14**
- 对 C++11 的增强和补充，包括：
  - 泛型 Lambda
  - 返回类型推导（`decltype(auto)`）
  - 二进制字面量
  - 更好的 `constexpr` 支持

#### 3. **C++17**
- 重大更新，包含：
  - 结构化绑定（Structured Bindings）
  - `std::optional`, `std::variant`, `std::any`
  - 文件系统库（`<filesystem>`）
  - 折叠表达式
  - `if constexpr` 语句

#### 4. **C++20**
- 引入划时代特性：
  - 概念（Concepts）
  - 范围（Ranges）
  - 协程（Coroutines）
  - 模块（Modules）
  - 三向比较运算符（`<=>`）

#### 5. **C++23**
- 最新标准，正在发展中，包含：
  - `std::expected`
  - 格式化库扩展
  - `mdspan`（多维视图）
  - `generator`（协程生成器）

#### 6. **C++26**
- 未来版本，计划中包括：
  - 执行支持库
  - 安全回收机制
  - 更多现代化语言特性

---

### 二、C++ 标准库核心模块详解

#### 1. **语言支持库（Language Support Library）**
- 提供语言运行时支持，包括：
  - 类型信息（`type_info`）
  - 异常处理支持（`exception`）
  - 初始化列表（`initializer_list`）
  - 源代码位置（`source_location`）C++20
  - 协程支持（`coroutine`）C++20

#### 2. **诊断库（Diagnostics Library）**
- 用于程序诊断和错误处理：
  - 断言（`assert`）
  - 系统错误（`system_error`）C++11
  - 异常类型（`exception`, `bad_alloc`, 等）
  - 栈追踪（`basic_stacktrace`）C++23

#### 3. **内存管理库（Memory Management Library）**
- 现代内存管理工具：
  - 智能指针：`unique_ptr`, `shared_ptr`, `weak_ptr`
  - 分配器：`allocator`, `polymorphic_allocator`（C++17）
  - 内存资源：`memory_resource`（C++17）

#### 4. **元编程库（Metaprogramming Library）**
- 编译时计算和类型操作：
  - 类型特征（Type Traits）
  - 比率（`ratio`）C++11
  - 整数序列（`integer_sequence`）C++14

#### 5. **通用工具库（General Utilities Library）**
- 基础工具类和函数：
  - 函数对象（`function`, `bind`）
  - 哈希支持（`hash`）C++11
  - 交换操作（`swap`）
  - 类型操作（`declval`, `forward`）C++11
  - 成对和元组（`pair`, `tuple`）C++11
  - 可选值（`optional`）C++17
  - 预期值（`expected`）C++23
  - 变体类型（`variant`）C++17
  - 任意类型（`any`）C++17
  - 位集和位操作（`bitset`, 位操作函数）C++20

#### 6. **容器库（Containers Library）**
- 各种数据结构：
  - 序列容器：`vector`, `deque`, `array`（C++11）, `list`, `forward_list`（C++11）
  - 关联容器：`map`, `multimap`, `set`, `multiset`
  - 无序容器：`unordered_map`, `unordered_multimap`, `unordered_set`, `unordered_multiset`（C++11）
  - 容器适配器：`stack`, `queue`, `priority_queue`
  - 视图容器：`span`（C++20）, `mdspan`（C++23）

#### 7. **迭代器库（Iterators Library）**
- 提供统一的数据访问接口：
  - 输入/输出迭代器
  - 前向/双向/随机访问迭代器
  - 插入/流迭代器

#### 8. **范围库（Ranges Library）**
- C++20 引入的现代迭代方式：
  - 范围视图（View）
  - 范围适配器
  - 管道操作符（`|`）
  - 生成器（`generator`）C++23

#### 9. **算法库（Algorithms Library）**
- STL 算法集合：
  - 非修改序列操作：`find`, `count`, `mismatch`
  - 修改序列操作：`copy`, `transform`, `sort`
  - 分区操作：`partition`, `stable_partition`
  - 排序和相关操作：`sort`, `binary_search`
  - 数值算法：`accumulate`, `inner_product`
  - 执行策略（C++17）
  - 约束算法（C++20）

#### 10. **字符串库（Strings Library）**
- 字符串处理：
  - 基本字符串类：`basic_string`
  - 字符特征：`char_traits`
  - 字符串视图：`basic_string_view`（C++17）

#### 11. **文本处理库（Text Processing Library）**
- 文本和字符处理：
  - 数值转换：原始转换函数（C++17）
  - 格式化：`format`（C++20）
  - 本地化：`locale`
  - 字符分类
  - 文本编码（`text_encoding`）C++26
  - 正则表达式：`basic_regex`（C++11）

#### 12. **数值库（Numerics Library）**
- 数学和数值计算：
  - 通用数学函数
  - 特殊数学函数（C++17）
  - 数学常量（C++20）
  - 线性代数（C++26）
  - SIMD 类型（C++26）
  - 随机数生成
  - 浮点环境处理
  - 复数和数值数组（`complex`, `valarray`）

#### 13. **日期和时间库（Date and Time Library）**
- 时间处理：
  - 日历系统（C++20）
  - 时区支持（C++20）
  - 时间点和持续时间
  - 时钟系统

#### 14. **输入/输出库（Input/Output Library）**
- 数据输入输出：
  - 打印函数（`print`, `println`）C++23
  - 流式 I/O：`iostream`, `fstream`, `sstream`
  - I/O 操纵器
  - 同步输出（C++20）
  - 文件系统（`filesystem`）C++17

#### 15. **并发支持库（Concurrency Support Library）**
- 多线程支持：
  - 线程管理（`thread`, `jthread`）C++20
  - 原子操作（`atomic`, `atomic_flag`, `atomic_ref`）C++20
  - 内存序（`memory_order`）
  - 互斥量（`mutex`, `shared_mutex`）
  - 信号量（C++20）
  - 条件变量（`condition_variable`）
  - 异步操作（`future`, `promise`, `async`）
  - 同步原语（`latch`, `barrier`）C++20
  - 安全回收（C++26）

#### 16. **执行支持库（Execution Support Library）**
- C++26 计划特性：
  - 高级执行控制
  - 资源管理增强

---

### 三、技术规范（Technical Specifications）

#### 1. **标准库扩展**
- Library Fundamentals TS 系列
- 包括：`propagate_const`, `observer_ptr`, 检测技法等

#### 2. **并行库扩展**
- Parallelism TS v2
- SIMD 支持

#### 3. **并发库扩展**
- Concurrency TS

#### 4. **事务内存**
- Transactional Memory TS

#### 5. **反射**
- Reflection TS

---

## 导航信息

来源页面："https://en.cppreference.com/mwiki/index.php?title=cpp&oldid=97601"

##### 导航

- 在线版本  
- 离线版本获取时间：2025 年 2 月 9 日 16:39  
- 本页最后修改时间：2017 年 12 月 16 日 22:24