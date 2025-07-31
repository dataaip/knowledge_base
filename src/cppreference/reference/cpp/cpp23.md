# C++23 标准

来源：cppreference.com < cpp

## 标准概览

C++23 是当前的 C++ 标准修订版。

### C++ 语言版本演进

| 版本 | 发布年份 | 主要特点 |
|---|---|---|
| C++98 | 1998 | 第一个正式标准 |
| C++03 | 2003 | 对 C++98 的小幅修订 |
| C++11 | 2011 | 引入自动类型推导、移动语义、lambda 表达式、智能指针等 |
| C++14 | 2014 | 对 C++11 的小幅修订，增强泛型编程 |
| C++17 | 2017 | 结构化绑定、`if constexpr`、文件系统库等 |
| C++20 | 2020 | 概念、模块、协程、范围等 |
| **C++23** | **开发中** | **标准化了更多现代 C++ 实践** |
| C++26 | 开发中 | 下一个主要版本 |

> **注意**：C++23 是一个持续发展的标准，专注于完善和增强现有特性，并引入一些新的实用功能。

## 新增核心语言特性

### 新的语言特性测试宏

- **说明**：为 C++23 的新特性提供标准化的特性测试宏。

### 显式对象参数和显式对象成员函数（"deducing this"） (P0847R7)

- **说明**：允许在成员函数中显式声明 `this` 参数的类型，从而实现更灵活的通用编程，特别是与 CRTP 和混入 (mixin) 一起使用。
- **语法**：`void func(this const Self& self, ...)`。`Self` 可以是具体的类名或模板参数。
- **示例**：
  ```cpp
  template<typename T>
  class Mixin {
  public:
      void interface(this const T& self) {
          self.implementation(); // 调用派生类的实现
      }
  };
  struct MyClass : Mixin<MyClass> {
      void implementation() { /* ... */ }
  };
  ```

### 多维下标运算符 (`Multidimensional subscript operator`) (P2128R6)

- **说明**：允许重载 `operator[]` 以接受多个参数，模拟多维数组的访问。
- **示例**：
  ```cpp
  class Matrix {
  public:
      double& operator[](std::size_t row, std::size_t col) {
          return data_[row * cols_ + col];
      }
  private:
      std::vector<double> data_;
      std::size_t rows_, cols_;
  };

  Matrix m(3, 4);
  m[1, 2] = 3.14; // 调用 operator[](1, 2)
  ```

### 静态 `operator[]`, `operator()` 和静态 Lambda (P2589R1, P1169R4)

- **说明**：允许将 `operator[]` 和 `operator()` 声明为 `static`，使其行为类似于自由函数，但可以通过对象调用。静态 Lambda 也是这一概念的一部分。
- **用途**：提供更清晰的语法和潜在的性能优化。

### `auto(x)` 和 `auto{x}`：语言中的衰变拷贝 (P0849R8)

- **说明**：
  - `auto(x)`: 创建 `x` 的衰变拷贝（decayed copy），相当于 `std::decay_t<decltype(x)>(x)`。
  - `auto{x}`: 创建 `x` 的拷贝，但不会衰变（数组不转指针，函数不转指针），相当于直接初始化。
- **示例**：
  ```cpp
  int arr[5] = {1,2,3,4,5};
  auto a1 = arr;     // 类型是 int*
  auto a2 = auto(arr); // 类型是 int*
  auto a3 = auto{arr}; // 类型是 int[5] (在初始化上下文中可能退化)
  ```

### 通过新属性 `[[assume(expression)]]` 进行假设 (P1774R8)

- **说明**：向编译器提供一个表达式在运行时必定为真的假设。如果假设不成立，行为是未定义的。编译器可以利用此信息进行优化。
- **示例**：
  ```cpp
  void func(int* ptr, size_t size) {
      [[assume(ptr != nullptr)]];
      [[assume(size > 0)]];
      // 编译器可以假设 ptr 不为空且 size > 0
  }
  ```

### Lambda 表达式上的属性 (P2173R1)

- **说明**：允许为 Lambda 表达式本身添加属性。
- **示例**：
  ```cpp
  auto lambda = []() [[nodiscard]] { return 42; };
  ```

### 可选的扩展浮点类型 (P1467R9)

- **说明**：标准定义了 `std::float16_t`, `std::float32_t`, `std::float64_t`, `std::float128_t`, `std::bfloat16_t` 等类型，但它们的可用性是可选的，取决于实现。

### 新的预处理指令：`#elifdef`, `#elifndef`, `#warning` (P2334R1, P2437R1)

- **`#elifdef` / `#elifndef`**：
  - **说明**：`#elif defined(...)` 和 `#elif !defined(...)` 的简化写法。
  - **示例**：
    ```cpp
    #if defined(MACRO_A)
    // ...
    #elifdef MACRO_B // 等价于 #elif defined(MACRO_B)
    // ...
    #endif
    ```
- **`#warning`**：
  - **说明**：在编译时生成警告信息。
  - **示例**：
    ```cpp
    #if COMPILER_VERSION < 5
    #warning "Using an old compiler, performance may be affected."
    #endif
    ```

### 字面量后缀 '`Z`'/'`z`' 用于 `(signed) std::size_t` 字面量 (P0330R8)

- **说明**：创建 `std::size_t` 或 `std::ptrdiff_t` 类型的字面量。
- **示例**：
  ```cpp
  auto sz = 100uz; // 类型是 std::size_t
  auto diff = -5z; // 类型是 std::ptrdiff_t
  ```

### 行拼接前的空白字符修剪 (P2223R2)

- **说明**：在预处理阶段，续行符 `\` 之前的空白字符（空格、制表符、换页符）将被忽略，使代码格式更灵活。

### 更简单的隐式移动 (P2266R3)

- **说明**：放宽了触发隐式移动的规则，使某些返回语句和 `throw` 表达式更容易按值类别正确处理。

### 扩展 range-based for 循环初始化器中临时对象的生命周期 (P2718R0)

- **说明**：在 range-based for 循环的初始化器中创建的临时对象，其生命周期会延长到整个 for 循环结束。

### 从继承构造函数进行 CTAD (P2582R1)

- **说明**：允许类模板在使用继承的构造函数时进行模板参数推导 (CTAD)。

### 复合语句末尾的标签 (P2324R2)

- **说明**：允许标签出现在复合语句（如函数体或代码块）的末尾。
- **示例**：
  ```cpp
  void f(int& x) {
      if (x)
          goto END;
      x = 42;
  END: // C++23 合法
  }
  ```

### Init-语句中的别名声明 (`using`) (P2360R0)

- **说明**：允许在 `for` 循环或 `if`/`switch` 语句的初始化部分使用 `using` 声明。
- **示例**：
  ```cpp
  for (using T = int; T e : v) {
      /* ... */
  }
  ```

### 使 Lambda 表达式的 `()` 更可选 (P1102R2)

- **说明**：如果 Lambda 表达式没有参数，可以省略 `()`。
- **示例**：
  ```cpp
  auto lambda1 = []() { return 42; }; // C++11
  auto lambda2 = [] { return 42; };   // C++23 也合法
  ```

### `static_assert` 和 `if constexpr` 中对 `bool` 的窄化上下文转换 (P1401R5)

- **说明**：在 `static_assert` 的条件和 `if constexpr` 的条件中，允许将整型值窄化转换为 `bool`（例如 `static_assert(1);`）。

### 强制非静态类数据成员的声明顺序布局 (P1847R4)

- **说明**：标准现在要求编译器必须按照类中声明的顺序在内存中布局非静态数据成员，除非有特定的优化（如 EBO）。

### 文本编码更改

- **字符集和编码 (P2314R4)**
- **一致的字符字面量编码 (P2316R2)**
- **命名的通用字符转义，如 `"\N{CAT FACE}"` 表示 `"🐱"` (P2071R2)**
- **带分隔符的转义序列，如 `"\o{7777}", "\x{C0DE}", "\u{CAFE}"` (P2290R3)**
- **支持 UTF-8 作为可移植的源文件编码 (P2295R6)**

### `if consteval` / `if not consteval` (P1938R3)

- **说明**：在 `if` 语句中检查当前上下文是否处于常量求值 (`constexpr`) 中。
- **示例**：
  ```cpp
  consteval int f(int i) {
      if consteval {
          return i * 2; // 编译时常量上下文
      } else {
          return i + 1; // 这部分代码永远不会执行，因为函数是 consteval
      }
  }

  constexpr int g(int i) {
      if consteval {
          return i * 2; // 编译时
      } else {
          return i + 1; // 运行时
      }
  }
  ```

### `constexpr` 更改

- **允许 `constexpr` 函数中有非字面量变量、标签和 `goto` (P2242R3)**
- **允许 `constexpr` 函数中有 `static` 和 `thread_local` 变量 (P2647R1)**
- **`constexpr` 函数不再要求其返回类型和参数类型必须是字面量类型 (P2448R2)**

## 新增标准库特性

### 新的库特性测试宏

### 新模块

- `std` 和 `std.compat` (P2465R3)

### 新头文件

#### 核心功能

- `<expected>`：`std::expected` 类型，用于返回函数结果或错误。
- `<flat_map>`：扁平映射容器。
- `<flat_set>`：扁平集合容器。
- `<generator>`：同步协程生成器。
- `<mdspan>`：非拥有的多维数组引用。
- `<print>`：格式化输出函数 `std::print` 和 `std::println`。
- `<spanstream>`：基于 `std::span` 的字符串流。
- `<stacktrace>`：堆栈跟踪库。
- `<stdfloat>`：标准浮点类型别名。

#### C 兼容性头文件

- `<stdatomic.h>`：C 风格原子操作。

### 标准库功能增强

#### 通用工具 (General Utilities)

- `std::expected` (P0323R12, P2549R1)：返回函数结果的新词汇类型。
- `std::move_only_function` (P0288R9)：只移动的可调用包装器。
- `std::bind_back` (P2387R3)：调用包装器。
- `std::byteswap` (P1272R4)：反转字节顺序。
- `std::forward_like` (P2445R1)：转发值，同时匹配另一个值的值类别（左值/右值）。
- `std::invoke_r` (P2136R3)：调用可调用对象并指定返回类型。
- `std::to_underlying` (P1682R3)：获取枚举的底层值。
- `std::unreachable` (P0627R6)：标记不可达代码。
- `std::optional` 和 `std::expected` 的一元操作 (`transform`, `or_else`, `and_then`) (P0798R8, P2505R5)。
- `std::tuple` 与其他类似元组的对象兼容 (P2165R4)。
- 为 `std::pair` 的转发构造函数添加默认参数 (P2718R0)。

#### 协程库 (Coroutine Library)

- `std::generator` (P2502R2, P2787R0)：用于范围的同步协程生成器。

#### 诊断 (Diagnostic)

- 堆栈跟踪库 (P0881R7)。

#### 算法、迭代器和范围 (Algorithm, Iterators, and Ranges)

- **新的范围适配器**：
  - `views::adjacent` 和 `views::adjacent_transform`
  - `views::as_const`
  - `views::as_rvalue`
  - `views::cartesian_product`
  - `views::chunk_by`
  - `views::chunk`
  - `views::enumerate`
  - `views::join_with`
  - `views::repeat`
  - `views::slide`
  - `views::stride`
  - `views::zip`, `views::zip_transform`
- `ranges::range_adaptor_closure`：用于程序定义范围适配器闭包的帮助函数。
- `ranges::to`：范围转换函数。
- **新的受约束范围算法**：
  - `ranges::starts_with` 和 `ranges::ends_with`
  - `ranges::contains` 和 `ranges::contains_subrange`
  - `ranges::find_last`, `ranges::find_last_if`, `ranges::find_last_if_not`
  - `ranges::iota`, `ranges::shift_left`, `ranges::shift_right` (非约束算法的范围化版本)
  - `ranges::fold_left` 等：范围折叠算法
- 保证常量迭代器、哨兵和范围的正确性。
- 使一些视图的多参数构造函数变为显式 (P2711R1)。
- 范围迭代器作为非范围算法的输入 (P2408R5)。
- 放宽范围适配器以允许移动-only 类型 (P2494R2)。

#### 容器 (Containers)

- `std::mdspan` (P0009R18 等)：非拥有的多维数组引用。
- 使容器可以从其他兼容范围构造 (P1206R7)。
- `std::flat_set`, `std::flat_multiset` (P1222R4), `std::flat_map`, `std::flat_multimap` (P0429R9)：扁平集合和映射，是包装底层排序随机访问容器的容器适配器。
- 允许在 `std::stack` 和 `std::queue` 中使用迭代器对构造 (P1425R4)。

#### 编译时支持 (Compile-time support)

- **`constexpr` 支持**：
  - `std::bitset`
  - `std::unique_ptr`
  - `std::type_info::operator==`
  - 一些 `<cmath>` 函数
  - `std::to_chars` 和 `std::from_chars` 的整型重载
- **元编程工具**：
  - 为比较概念添加对移动-only 类型的支持
  - **类型特征**：
    - `std::is_scoped_enum`
    - `std::is_implicit_lifetime`
    - `std::reference_constructs_from_temporary`, `std::reference_converts_from_temporary`

#### 内存管理 (Memory Management)

- `std::out_ptr` 和 `std::inout_ptr`：用于 C 互操作的智能指针适配器。
- `std::allocate_at_least` 和 `std::allocator::allocate_at_least`。
- `std::start_lifetime_as`：用于隐式生命周期类型的显式生命周期管理函数。
- 禁止用户特化 `std::allocator_traits`。

#### 字符串和文本处理 (String and Text Processing)

- **字符串类型的新成员函数和更改**：
  - `std::basic_string::contains` 和 `std::basic_string_view::contains`
  - 禁止从 `nullptr` 构造 `std::basic_string` 和 `std::basic_string_view`
  - `std::basic_string_view` 的显式范围构造函数
  - `std::basic_string::resize_and_overwrite`
- **格式化**：范围、元组、字符和字符串的转义表示、`std::thread::id` 和堆栈跟踪的格式化。

#### I/O 和打印 (I/O and print)

- `<print>` 头文件中提供的格式化输出函数 `std::print` 和 `std::println`。
- `<spanstream>` 头文件中的 `spanstream` 库（基于 `std::span` 的字符串流）。
- 在 `std::fstream` 中支持独占模式。
- 支持打印 `volatile T*`。

## 已废弃/移除的特性

### 被移除的特性 (Removed features)

- **垃圾回收支持和基于可达性的泄漏检测 (P2186R2)**：C++11 引入但从未被广泛实现的 GC 接口被正式移除。
- **混合宽字符串字面量连接支持 (P2201R1)**：`const auto* no = u"q" U"p";` 这样的代码变为非法。
- **不可编码的宽字符字面量和多字符宽字符字面量 (P2362R3)**：`wchar_t x = 'db';` 这样的代码变为非法。

### 被弃用的特性 (Deprecated features)

- `std::aligned_storage` 和 `std::aligned_union` (P1413R3)：它们的使用被标记为不安全或难以正确使用。
- `std::numeric_limits::has_denorm` (P2614R2)：浮点类型次正规数的查询被弃用。

### 恢复的弃用 (Reverted deprecations)

- 下标表达式中的逗号运算符（但语义已改变以支持可重载的多维下标 `operator[]`）。
- 一些 C 头文件（用于与 C 兼容的 `<*.h>` 形式头文件）的弃用被撤销。

## 缺陷报告 (Defect Reports)

（此部分在原文中为空）

## 编译器支持情况

### C++23 核心语言特性支持

（表格展示了 GCC、Clang、MSVC 等编译器对各项 C++23 特性的支持情况。）

### C++23 标准库特性支持

（表格展示了 GCC libstdc++、Clang libc++、MSVC STL 等标准库实现对各项 C++23 库特性的支持情况。）

---

**信息来源**：[https://en.cppreference.com/mwiki/index.php?title=cpp/23&oldid=179940](https://en.cppreference.com/mwiki/index.php?title=cpp/23&oldid=179940)

**最后修改时间**：2025年1月28日 16:13

**离线版本获取时间**：2025年2月9日 16:39
