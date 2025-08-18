### fmtlib/fmt 详细使用指南
fmt 是一个现代 C++ 格式化库，提供高效、安全的格式化操作。以下是涵盖基础到高级的完整示例：

---

#### **1. 基础格式化**
```cpp
#include <fmt/core.h>

int main() {
    // 基本类型格式化
    fmt::print("Hello {}!\n", "world");  // Hello world!
    fmt::print("The answer is {}\n", 42); // The answer is 42

    // 位置参数
    fmt::print("{1} {0} {1}\n", "alpha", "beta"); // beta alpha beta

    // 命名参数 (C++20 起)
    fmt::print("{name} age: {age}\n", 
               fmt::arg("name", "Alice"), 
               fmt::arg("age", 30)); // Alice age: 30

    return 0;
}
```

---

#### **2. 数字格式化**
```cpp
#include <fmt/format.h>

int main() {
    // 整数格式化
    fmt::print("{:04d}\n", 42);    // 0042
    fmt::print("{:#x}\n", 255);    // 0xff

    // 浮点数格式化
    fmt::print("{:.2f}\n", 3.14159);   // 3.14
    fmt::print("{:e}\n", 123456789.0); // 1.234568e+08

    // 千位分隔符
    fmt::print("{:,}\n", 1000000);     // 1,000,000

    // 百分比显示
    fmt::print("{:.1%}\n", 0.85);      // 85.0%

    return 0;
}
```

---

#### **3. 字符串与容器**
```cpp
#include <fmt/ranges.h>
#include <vector>

struct Point {
    double x, y;
};

// 自定义类型格式化
template <> 
struct fmt::formatter<Point> {
    constexpr auto parse(format_parse_context& ctx) {
        return ctx.begin();
    }
    
    auto format(const Point& p, format_context& ctx) const {
        return fmt::format_to(ctx.out(), "({:.1f}, {:.1f})", p.x, p.y);
    }
};

int main() {
    // 字符串截断与填充
    fmt::print("{:.5}\n", "Hello world");  // Hello
    fmt::print("{:>10}\n", "right");       // "     right"

    // 容器格式化
    std::vector<int> vec{1, 2, 3};
    fmt::print("{}\n", vec);               // [1, 2, 3]

    // 自定义类型
    Point p{1.5, 2.5};
    fmt::print("Point: {}\n", p);          // Point: (1.5, 2.5)

    return 0;
}
```

---

#### **4. 编译时格式检查**
```cpp
// 使用 FMT_STRING 在编译时检查格式字符串
#include <fmt/core.h>

int main() {
    // 编译时错误检测
    fmt::print(FMT_STRING("{:d}\n"), "text"); // 编译错误: 无效的整数格式
    
    // 安全格式化
    try {
        fmt::format("{:d}", "text"); // 运行时抛出 format_error
    } catch (const fmt::format_error& e) {
        fmt::print("Error: {}\n", e.what());
    }
    
    return 0;
}
```

---

#### **5. 高级功能**
**内存缓冲区**
```cpp
#include <fmt/format.h>

int main() {
    fmt::memory_buffer buf;
    fmt::format_to(buf, "The answer is {}", 42);
    
    // 获取 C 风格字符串
    buf.push_back('\0');
    printf("%s\n", buf.data());
    
    return 0;
}
```

**文件输出**
```cpp
#include <fmt/os.h>

int main() {
    auto out = fmt::output_file("log.txt");
    out.print("Log entry: {}\n", "System started");
    out.close();
    return 0;
}
```

**时间格式化**
```cpp
#include <fmt/chrono.h>
#include <chrono>

int main() {
    using namespace std::chrono;
    auto now = system_clock::now();
    
    fmt::print("Date: {:%Y-%m-%d}\n", now); // 2023-10-05
    fmt::print("Time: {:%H:%M:%S}\n", now); // 14:30:45
    
    return 0;
}
```

---

#### **6. 替代 std::cout**
```cpp
#include <fmt/ostream.h>
#include <iostream>

struct User {
    std::string name;
    int id;
};

// 重载 << 运算符
std::ostream& operator<<(std::ostream& os, const User& u) {
    return os << fmt::format("{} (#{})", u.name, u.id);
}

int main() {
    // 直接使用 fmt 打印
    fmt::print(std::cout, "User: {}\n", User{"Alice", 42});
    
    // 兼容 std::ostream
    std::cout << fmt::format("Pi: {:.2f}\n", 3.14159);
    
    return 0;
}
```

---

#### **7. 编译与安装**
**安装方法**:
```bash
# 方法1: 包管理器 (Ubuntu)
sudo apt-get install libfmt-dev

# 方法2: 源码安装
git clone https://github.com/fmtlib/fmt.git
cd fmt
mkdir build && cd build
cmake -DFMT_TEST=OFF ..  # 禁用测试
make -j4
sudo make install
```

**CMake 集成**:
```cmake
cmake_minimum_required(VERSION 3.10)
project(FmtExample)

find_package(fmt REQUIRED)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE fmt::fmt)
```

**头文件模式** (仅包含头文件):
```cpp
// 在源码中定义
#define FMT_HEADER_ONLY
#include <fmt/core.h>
```

---

#### **性能对比**
```cpp
#include <fmt/core.h>
#include <benchmark/benchmark.h>

static void BM_printf(benchmark::State& state) {
    for (auto _ : state) {
        printf("%d %s %.2f\n", 42, "text", 3.14);
    }
}
BENCHMARK(BM_printf);

static void BM_fmt(benchmark::State& state) {
    for (auto _ : state) {
        fmt::print("{} {} {:.2f}\n", 42, "text", 3.14);
    }
}
BENCHMARK(BM_fmt);

BENCHMARK_MAIN();
```
**结果**: fmt 通常比 `printf` 快 2-5 倍

---

#### **关键特性总结**
| 功能               | 方法/类                     |
|--------------------|----------------------------|
| **基础格式化**     | `fmt::print()`, `fmt::format()` |
| **类型安全**       | 编译时/运行时格式检查       |
| **自定义格式化**   | 特化 `formatter` 模板       |
| **内存控制**       | `memory_buffer`            |
| **文件输出**       | `output_file`              |
| **时间格式化**     | `fmt/chrono.h`             |
| **容器支持**       | `fmt/ranges.h`             |
| **C++20 兼容**     | 实现 `std::format` 提案     |

---

#### **最佳实践**
1. **优先使用编译时检查**
```cpp
// 安全格式化 (C++14 起)
auto msg = fmt::format(FMT_STRING("Value: {}"), 42);
```

2. **高效连接字符串**
```cpp
fmt::memory_buffer buf;
for (const auto& item : items) {
    fmt::format_to(buf, "{}, ", item);
}
// 避免创建临时字符串
```

3. **自定义类型优化**
```cpp
template <> 
struct fmt::formatter<CustomType> {
    // 解析函数
    constexpr auto parse(format_parse_context& ctx) { /*...*/ }
    
    // 高效格式化
    template <typename Context>
    auto format(const CustomType& val, Context& ctx) const {
        return fmt::format_to(ctx.out(), "({}, {})", val.x, val.y);
    }
};
```

4. **错误处理**
```cpp
try {
    auto result = fmt::format("{:d}", "text");
} catch (const fmt::format_error& e) {
    fmt::print(stderr, "Format error: {}\n", e.what());
}
```

fmt 库在性能、安全性和功能上都优于传统方法，是 C++20 格式化库的基础。完整文档见 [fmt.dev](https://fmt.dev)。
