# C++ 语言当前状态

来源：cppreference.com

## 版本发展历程

| C++98 | C++03 | C++11 | C++14 | C++17 | C++20 | C++23 | C++26 |
|-------|-------|-------|-------|-------|-------|-------|-------|
|       |       |       |       |       |       | ✓     | 🔧    |

### 最近里程碑

- **C++23 已正式发布**
- **C++26 正在开发中**

---

## 开发模式演变

自 2012 年起，C++ 标准委员会采用“解耦”模型（Decoupled Model），允许重要特性的开发可以与标准主干相对独立地推进，并以“功能分支”的形式交付为**技术规范**（Technical Specifications，简称 **TS**）。

这种模式的优势在于：

### 一、独立推进与实践经验积累

- **厂商可选择性实现**：编译器厂商可以在技术规范阶段就实现新特性。
- **社区实验与验证**：开发者可通过 `std::experimental` 命名空间体验该特性。
- **基于经验优化设计**：在特性被正式纳入标准之前，可根据实际使用反馈进行调整和完善。

> 🧪 示例：`std::experimental::filesystem` -> `std::filesystem`

### 二、标准交付节奏优化

- 标准按更规律、更小批量的方式发布。
- 便于编译器跟进标准进展。
- 提升新特性上线的连续性和可预测性。

### 三、编译器支持同步

- 编译器能更准确地跟踪标准演进。
- 支持以一致顺序加入 experimental 特性和 draft-final 特性。

> 📌 当前标准化进度表请参考提案文档 [P1000](https://wg21.link/P1000)。

---

## 扩展知识详解

### 一、各版本 C++ 标准核心特性回顾

#### 1. **C++98**
- **发布时间**：1998年
- **核心内容**：
  - STL（标准模板库）正式纳入标准
  - 异常处理机制
  - 命名空间（`namespace`）
  - RTTI（运行时类型识别）
  - 模板语法基础确立

> 🧱 **示例代码片段**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 8, 1};
    std::sort(vec.begin(), vec.end());
    for (int n : vec) {
        std::cout << n << " ";
    }
}
```

#### 2. **C++03**
- 实质是对 C++98 的修补版本
- 主要改进：
  - 解决模板导出问题
  - 增加部分新库组件
  - 增强标准库兼容性

#### 3. **C++11（现代C++起点）**
- **发布时间**：2011年
- **关键变革**：
  - 自动类型推导：`auto`
  - Lambda 表达式
  - 右值引用与移动语义
  - 智能指针：`std::unique_ptr`, `std::shared_ptr`
  - 线程支持库 `<thread>`
  - 统一初始化语法：`T obj{...}`
  - 委托构造函数、继承构造函数
  - `nullptr` 替代 `NULL`
  - 范围 for 循环：`for (auto& x : container)`

> 📌 示例：Lambda 表达式 + 智能指针
```cpp
#include <memory>
#include <algorithm>
#include <vector>

int main() {
    auto ptr = std::make_unique<std::vector<int>>(std::initializer_list<int>{1, 2, 3});
    
    std::for_each(ptr->begin(), ptr->end(), [](int& n) {
        n *= 2;
    });
}
```

#### 4. **C++14**
- **发布时间**：2014年
- **核心更新**：
  - 泛型 Lambda：`[](auto x) {}`
  - 返回类型后置语法泛化
  - constexpr 支持更多语句
  - 变量模板：`template<typename T> constexpr T pi = T(3.1415926535897932385L);`

> 🧪 示例：泛型 Lambda
```cpp
auto lambda = [](const auto& a, const auto& b) {
    return a + b;
};

auto result = lambda(1, 2.5);  // 推断为 double
```

#### 5. **C++17**
- **发布时间**：2017年
- **重要特性**：
  - 结构化绑定：`auto [x, y] = make_pair(1, 2);`
  - if constexpr（编译期分支）
  - 内联变量：`inline static` 成员变量
  - 文件系统库：`<filesystem>`
  - 折叠表达式（用于可变参数模板）
  - 类模板参数推导（CTAD）

> 🧮 示例：结构化绑定 + 文件系统库
```cpp
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

for (const auto& entry : fs::directory_iterator(".")) {
    std::cout << entry.path().filename() << '\n';
}

std::tuple<int, double, std::string> t{1, 2.3, "hello"};
auto [a, b, c] = t;
```

#### 6. **C++20**
- **发布时间**：2020年
- **革命性功能**：
  - 概念（Concepts）引入泛型编程约束
  - 范围（Ranges）库简化容器操作
  - 协程（Coroutines）支持异步编程
  - 模块（Modules）替代头文件机制
  - 三向比较运算符（Spaceship operator）：`<=>`
  - `std::format` 替代 `printf`

> 📌 示例：概念 + 范围库
```cpp
#include <ranges>
#include <vector>
#include <concepts>
#include <iostream>

template<std::integral T>
void print_square(T value) {
    std::cout << value * value << '\n';
}

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    auto even_nums = nums | std::views::filter([](int n){ return n % 2 == 0; });
    for (int n : even_nums) {
        print_square(n);
    }
}
```

#### 7. **C++23**
- **发布时间**：2023年
- **亮点特性**：
  - `std::expected` 替代异常返回模式
  - `<print>` 头文件支持 `std::print`
  - `if consteval` 编译期检测
  - 扩展 `std::format` 支持更多格式
  - 支持 `#embed` 预处理器指令

> 🧪 示例：`std::expected`
```cpp
#include <expected>
#include <iostream>

std::expected<int, std::string> safe_divide(int a, int b) {
    if (b == 0) {
        return std::unexpected("Division by zero!");
    }
    return a / b;
}

int main() {
    auto result = safe_divide(10, 2);
    if (result) {
        std::cout << *result << '\n';  // 输出 5
    } else {
        std::cout << result.error() << '\n';  // 错误信息
    }
}
```

#### 8. **C++26（正在制定中）**
- 当前正在积极开发中
- 关注焦点：
  - 更强的反射能力（Reflection）
  - 并发与网络编程标准化
  - 进一步简化语法糖和模板编程
  - AI 编程辅助相关工具链整合方向

---

## 获取标准文档与提案

建议访问 [open-std.org](https://open-std.org/) 获取最新 C++ 委员会提案文档（Working Papers）。

💡 **技巧提示**：
- 浏览提案可深入了解 C++ 发展趋势
- 查看提案编号或关键词快速定位所需内容
- 如：[P0000R0](https://wg21.link/P0000R0) 可直接跳转提案原文

⚠️ **注意**：
- **提案 ≠ 正式标准文档**
- 不应将提案作为标准权威引用依据
- 正式标准需参考 ISO/IEC 14882 发布版本

---

## 相关页面导航

| 目标页面 | 链接 |
|---------|------|
| C 语言当前状态文档 | [C documentation for Current status] |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=cpp/current_status&oldid=179944>
- 最后修改时间：2025年1月28日 16:23
- 离线版本获取时间：2025年2月9日 16:39

--- 

✅ 每一位 C++ 开发者都应当熟悉并掌握当前版本发展状况，以便在项目中合理使用现代 C++ 特性，提升代码质量与开发效率。