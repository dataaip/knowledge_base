# C 与 C++ 参考手册

---

## C++ 参考手册

本参考手册面向 C++ 编程语言的开发者与学习者，旨在提供全面、系统的语言标准、编译器支持、语言概念、标准库头文件、命名要求、功能测试、技术规格与有用资源的介绍与解释。

### 一、语言标准（Language Standards）

| 标准 | 描述 |
|------|------|
| C++98 | 1998 年发布的首个正式 C++ 国际标准，奠定了现代 C++ 的语法与语义基础。 |
| C++03 | C++98 的小幅修订版本，主要修复了语言中的缺陷与不一致性，未引入新特性。 |
| C++11 | 重大修订，引入了自动类型推导（`auto`）、右值引用、lambda 表达式、智能指针等。 |
| C++14 | 对 C++11 的小幅增强，如泛型 lambda、二进制字面量、返回类型后置语法等。 |
| C++17 | 引入结构化绑定、`std::optional`、`std::variant`、`if constexpr` 等现代特性。 |
| C++20 | 引入模块（Modules）、协程（Coroutines）、概念（Concepts）、范围（Ranges）等。 |
| C++23 | 计划中的版本，将引入更多现代化与安全增强特性，仍在发展中。 |
| C++26 | 尚未发布的标准，计划中将继续推动语言现代化与库扩展。 |

**知识扩展**：
语言标准的演进反映了 C++ 的不断进化。例如，C++11 被誉为现代 C++ 的起点，它使语言更具表达力与安全性。C++20 引入的 `std::ranges` 是对容器操作的抽象升级，提升了算法复用与可读性。

---

### 二、编译器支持（Compiler Support）

| 版本 | 支持状态 |
|------|----------|
| C++11 | 主流编译器已完全支持，如 GCC 4.8+, Clang 3.3+, MSVC 2015+。 |
| C++14 | 广泛支持，GCC 5+, Clang 3.4+, MSVC 2017+ 均已覆盖。 |
| C++17 | 大部分编译器已支持，如 GCC 7+, Clang 5+, MSVC 2017 v15.7+。 |
| C++20 | 逐步支持中，部分特性需要开启 `-std=c++20` 或 `/std:c++20`。 |
| C++23 | 初步支持，GCC 12+, Clang 15+ 开始支持部分特性。 |
| C++26 | 实验性支持阶段，编译器厂商正在跟进标准草案。 |

**知识扩展**：
编译器支持的成熟度往往滞后于语言标准的发布时间。如 C++20 的模块特性在 GCC 和 Clang 中仍为实验性支持，需要使用 `-fmodules-ts` 开启。开发中建议查阅 [cppreference.com](https://en.cppreference.com/w/cpp/compiler_support) 获取实时支持状态。

---

### 三、语言概念（Language Concepts）

| 概念 | 说明 |
|------|------|
| 基础概念 | 包括变量、作用域、生命周期、对象模型等核心概念。 |
| 关键字 | C++ 预定义的关键字，如 `class`, `template`, `const`, `virtual` 等。 |
| 预处理器 | 如 `#include`, `#define`, 条件编译指令等。 |
| 表达式 | 由操作数与运算符组成的代码片段，如 `a + b`。 |
| 声明 | 定义变量、函数、类等的语法结构。例如：`int x;` |
| 初始化 | 对象创建时赋予初始值的过程，支持列表初始化、默认初始化等。 |
| 函数 | 包括函数声明、定义、重载、lambda 表达式等。 |
| 语句 | 控制程序流程的语法结构，如 `if`, `for`, `while`, `switch` 等。 |
| 类 | 面向对象编程的核心概念，支持封装、继承、多态等。 |
| 模板 | 泛型编程的核心工具，支持模板函数与模板类。 |
| 异常 | 使用 `try`, `catch`, `throw` 实现异常处理机制。 |
| 杂项与习语 | 包括 RAII、CRTP、SFINAE 等常见编程技巧与设计模式。 |

**知识扩展**：
- **RAII**（Resource Acquisition Is Initialization）：资源在构造函数中获取，在析构函数中释放，极大提高了资源安全性。例如智能指针 `std::unique_ptr`。
- **SFINAE**（Substitution Failure Is Not An Error）：允许模板重载中出现类型替换失败而不报错，常用于类型检查。

---

### 四、标准库头文件（Standard Library Headers）

| 分类 | 内容 |
|------|------|
| 语言支持库 | 如 `typeinfo`, `type_traits` 等，支持类型检查和元编程。 |
| 概念库 | C++20 引入 `concepts` 头文件，用于约束模板参数。 |
| 诊断库 | 如 `stdexcept`, `cassert`，用于错误处理与断言。 |
| 内存管理库 | 包括 `new`, `memory`, `allocator` 等。 |
| 元编程库 | 如 `type_traits`, `ratio` 等，用于编译期计算。 |
| 通用实用程序库 | 如 `utility`, `tuple`, `optional`, `variant` 等。 |
| 容器库 | 如 `vector`, `map`, `set`, `array` 等标准容器。 |
| 迭代器库 | 包括 `iterator_traits`, `begin`, `end` 等。 |
| 范围库 | C++20 的 `ranges`，用于更直观地操作序列。 |
| 算法库 | 如 `sort`, `find`, `transform` 等标准算法。 |
| 字符串库 | 如 `string`, `string_view` 等。 |
| 文本处理库 | 如正则表达式 `<regex>`。 |
| 数字库 | 如 `<cmath>`, `<random>`, `<complex>` 等。 |
| 日期和时间库 | `<chrono>`，C++11 引入的标准时间处理库。 |
| 输入/输出库 | 如 `<iostream>`, `<fstream>`, `<sstream>`。 |
| 并发支持库 | 如 `<thread>`, `<mutex>`, `<future>`。 |
| 执行控制库 | C++20 引入 `<execution>`，控制并行算法执行策略。 |
| C 兼容头文件 | 如 `<cstdio>`, `<cstdlib>` 等，提供 C 标准库兼容支持。 |

**知识扩展**：
标准库是 C++ 强大特性的体现。例如 `<ranges>` 是对 `<algorithm>` 的改进，使代码更具可读性：

```cpp
#include <ranges>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v | std::views::filter([](int n){ return n % 2 == 0; })) {
        std::cout << i << ' ';
    }
}
```

---

### 五、命名要求（Naming Requirements）

| 类别 | 要求 |
|------|------|
| 基本要求 | 如 `CopyConstructible`, `MoveAssignable` 等。 |
| 类型属性 | 如 `is_integral`, `is_pointer` 等特征。 |
| Library-wide | 适用于所有标准库组件的通用要求。 |
| 容器 | 如 `Container`, `ReversibleContainer`，定义容器行为。 |
| 迭代器 | 如 `InputIterator`, `RandomAccessIterator`。 |
| 流 I/O 函数 | 如 `operator<<`, `operator>>`。 |
| 格式化程序 | C++20 中 `<format>` 的格式化要求。 |
| 随机数生成 | 如 `UniformRandomBitGenerator`。 |
| 并发 | 如 `BasicLockable`, `Lockable`，定义锁行为。 |
| 范围 | 如 `Range`, `View`，定义范围操作。 |
| 多维视图定制 | C++23 引入，支持多维视图扩展。 |
| 其他 | 如分配器、比较器等通用要求。 |

**知识扩展**：
这些要求是模板编程中类型约束的基础，如 C++20 的 `concept` 可更清晰地表达这些要求。

---

### 六、功能测试（Feature Testing）

| 类别 | 内容 |
|------|------|
| 属性 | 如 `[[nodiscard]]`, `[[likely]]`，用于优化与语义说明。 |
| 语言功能 | 如 `consteval`, `constinit`, `spaceship operator` 等。 |
| 库功能 | 如 `std::format`, `std::span` 等新库特性。 |
| 编译器功能转储 | 如 `__has_cpp_attribute`, `__cpp_lib_format` 等宏。 |

**知识扩展**：
功能测试宏允许开发者根据编译器支持选择性启用代码片段，提升代码兼容性与移植性。

---

### 七、技术规格（Technical Specifications）

| 内容 | 描述 |
|------|------|
| 实验性 - 功能标准库扩展（Library Fundamentals TS） | 扩展标准库，引入实验性特性如 `any`, `optional`。 |
| TR/TS 规格 | 技术报告（TR）与技术规格（TS）草案，用于标准提案。 |
| 非 TS 提案 | 非正式或已撤回的扩展提案。 |

---

### 八、有用资源（Useful Resources）

| 资源 | 描述 |
|------|------|
| 标准 C++ 基础 isocpp.org | 官方社区网站，提供权威资源与建议。 |
| C++ 常见问题解答 | 经典问题解答与经验总结。 |
| C++ 标准文档与草稿 | 参见 [open-std.org](http://www.open-std.org/jtc1/sc22/wg21/) |
| C++ 语言与库参考 | 如 cppreference.com |
| C++ ABI | 应用二进制接口标准，用于兼容性控制。 |
| 模式、习语、提示和技巧 | 如 RAII、SFINAE、CRTP 等编程技巧。 |
| 相关标准 | ISO C++ 标准文档。 |
| 非 ANSI/ISO C++ 库列表 | 如 Boost、Qt、POCO 等第三方库。 |

---

## C 参考手册

以下为 C 语言的参考手册内容。

### 一、语言标准（Language Standards）

| 标准 | 描述 |
|------|------|
| C89 | 第一个 ANSI C 标准，亦称 C90。 |
| C95 | C89 的小幅修订。 |
| C99 | 引入变长数组、复数类型、布尔类型、内联函数等。 |
| C11 | 引入并发支持、泛型选择、对齐支持等。 |
| C17 | 修复缺陷的小修订版本。 |
| C23 | 即将发布的标准，引入更多现代化特性。 |

**知识扩展**：
C99 引入了 `//` 单行注释，使得代码可读性提升；C11 的 `_Generic` 语句提供了类似 C++ 模板的类型选择能力。

---

### 二、编译器支持（Compiler Support）

| 版本 | 支持状态 |
|------|----------|
| C99 | 大部分主流编译器已支持。 |
| C23 | 部分实验性支持，GCC 13+, Clang 15+ 已开始支持。 |

---

### 三、语言概念（Language Concepts）

| 概念 | 描述 |
|------|------|
| 基础概念 | 包括变量、类型、存储类别、表达式等。 |
| 关键字 | 如 `int`, `void`, `if`, `for` 等。 |
| 预处理器 | 如 `#include`, `#define`。 |
| 语句 | 如选择语句（`if`）、循环语句（`for`, `while`）等。 |
| 表达式 | 如算术表达式、逻辑表达式、赋值表达式等。 |
| 声明 | 如 `int x;` 或 `extern int y;` |
| 初始化 | 包括静态初始化、自动初始化等。 |
| 函数 | 支持递归、内联、可变参数等。 |
| 杂项与习语 | 如状态机、宏技巧等。 |

---

### 四、标准库头文件（Standard Library Headers）

| 分类 | 示例头文件 |
|------|-------------|
| 语言支持库 | `<stddef.h>`, `<stdarg.h>` 等 |
| 通用实用程序库 | `<stdlib.h>`, `<assert.h>` |
| 诊断库 | `<errno.h>`, `<signal.h>` |
| 内存管理库 | `<stdlib.h>`（`malloc`, `free`） |
| 字符串库 | `<string.h>`, `<ctype.h>` |
| 日期和时间库 | `<time.h>` |
| 本地化库 | `<locale.h>` |
| 输入/输出库 | `<stdio.h>` |
| 算法库 | `<stdlib.h>` 中的 `qsort` 等 |
| 数字库 | `<math.h>`, `<complex.h>` |
| 并发支持库 | C11 引入 `<threads.h>`, `<stdatomic.h>` |

---

### 五、功能测试（Feature Test Macros）

| 宏 | 描述 |
|----|------|
| `__STDC_VERSION__` | 表示使用的 C 标准版本，如 `199901L` 代表 C99。 |
| `__STDC_NO_THREADS__` | 若定义，表示不支持线程功能。 |

---

### 六、技术规格（Technical Specifications）

| 内容 | 描述 |
|------|------|
| 实验性 - 功能标准库扩展（Library Fundamentals TS） | 尝试在 C 中引入一些 C++ 风格特性。 |
| TR/TS 规格 | 同 C++，为标准化流程的一部分。 |
| 非 TS 提案 | 如 `_Static_assert` 提案等。 |

---

### 七、有用资源（Useful Resources）

| 资源 | 描述 |
|------|------|
| C 常见问题 | 如 comp.lang.c FAQ |
| C 语言与库参考 | 如 cppreference 的 C 部分 |
| C ABI | 系统调用与库接口标准 |
| 相关标准 | ISO C 标准 |
| 开源实现 | 如 musl libc |
| 非 ANSI/ISO C库列表 | 如 libc、uClibc 等 |

---

> 来源：[cppreference.com](https://en.cppreference.com/index.html)

--- 

**注**：本文档内容基于权威来源整理，确保准确性与权威性。所有翻译与解释均符合当前技术标准。如需更深入学习，建议查阅官方文档或权威书籍。
