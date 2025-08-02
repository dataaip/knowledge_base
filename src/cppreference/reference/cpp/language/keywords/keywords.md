# C++ 关键字

来源：cppreference.com

## C++ 关键字列表

### 标准关键字（Standard Keywords）

| 关键字 | C++标准版本 | 用途说明 |
|--------|-------------|----------|
| `alignas` | C++11 | 指定对象对齐方式 |
| `alignof` | C++11 | 查询类型的对齐要求 |
| `and` | 预定义宏 | 等价于 `&&` |
| `and_eq` | 预定义宏 | 等价于 `&=` |
| `asm` | 所有版本 | 内联汇编指令（编译器扩展） |
| `auto` | 所有版本→C++11增强 | 自动类型推导 |
| `bitand` | 预定义宏 | 等价于 `&` |
| `bitor` | 预定义宏 | 等价于 `|` |
| `bool` | 所有版本 | 布尔类型 |
| `break` | 所有版本 | 跳出循环或switch |
| `case` | 所有版本 | switch分支标签 |
| `catch` | 所有版本 | 异常处理捕获 |
| `char` | 所有版本 | 字符类型 |
| `char8_t` | C++20 | UTF-8字符类型 |
| `char16_t` | C++11 | UTF-16字符类型 |
| `char32_t` | C++11 | UTF-32字符类型 |
| `class` | 所有版本 | 类定义关键字 |
| `compl` | 预定义宏 | 等价于 `~` |
| `concept` | C++20 | 概念定义（泛型约束） |
| `const` | 所有版本 | 常量限定符 |
| `consteval` | C++20 | 立即函数（编译期求值） |
| `constexpr` | C++11 | 编译期常量表达式 |
| `constinit` | C++20 | 初始化时必须为常量 |
| `const_cast` | 所有版本 | 去除const属性 |
| `continue` | 所有版本 | 跳过当前循环迭代 |
| `co_await` | C++20 | 协程挂起点 |
| `co_return` | C++20 | 协程返回 |
| `co_yield` | C++20 | 协程产出值 |
| `decltype` | C++11 | 类型推导 |
| `default` | 所有版本 | switch默认分支/默认构造函数 |
| `delete` | 所有版本 | 删除指针/禁用函数 |
| `do` | 所有版本 | do-while循环 |
| `double` | 所有版本 | 双精度浮点数 |
| `dynamic_cast` | 所有版本 | 运行时类型转换 |
| `else` | 所有版本 | if语句的分支 |
| `enum` | 所有版本 | 枚举类型 |
| `explicit` | 所有版本 | 显式构造函数 |
| `export` | 所有版本→C++11弃用→C++20恢复 | 模块导出（历史遗留） |
| `extern` | 所有版本 | 外部链接声明 |
| `false` | 所有版本 | 布尔假值 |
| `float` | 所有版本 | 单精度浮点数 |
| `for` | 所有版本 | for循环 |
| `friend` | 所有版本 | 友元声明 |
| `goto` | 所有版本 | 无条件跳转 |
| `if` | 所有版本 | 条件语句 |
| `inline` | 所有版本 | 内联建议 |
| `int` | 所有版本 | 整数类型 |
| `long` | 所有版本 | 长整型修饰符 |
| `mutable` | 所有版本 | 可变成员变量 |
| `namespace` | 所有版本 | 命名空间 |
| `new` | 所有版本 | 动态内存分配 |
| `noexcept` | C++11 | 异常规格说明 |
| `not` | 预定义宏 | 等价于 `!` |
| `not_eq` | 预定义宏 | 等价于 `!=` |
| `nullptr` | C++11 | 空指针常量 |
| `operator` | 所有版本 | 运算符重载 |
| `or` | 预定义宏 | 等价于 `\|\|` |
| `or_eq` | 预定义宏 | 等价于 `\|=` |
| `private` | 所有版本 | 私有访问权限 |
| `protected` | 所有版本 | 受保护访问权限 |
| `public` | 所有版本 | 公共访问权限 |
| `register` | 所有版本→C++17弃用 | 寄存器存储建议 |
| `reinterpret_cast` | 所有版本 | 重新解释类型转换 |
| `requires` | C++20 | 概念需求子句 |
| `return` | 所有版本 | 函数返回 |
| `short` | 所有版本 | 短整型 |
| `signed` | 所有版本 | 有符号类型 |
| `sizeof` | 所有版本 | 计算大小 |
| `static` | 所有版本 | 静态存储期 |
| `static_assert` | C++11 | 编译期断言 |
| `static_cast` | 所有版本 | 静态类型转换 |
| `struct` | 所有版本 | 结构体定义 |
| `switch` | 所有版本 | switch语句 |
| `template` | 所有版本 | 模板定义 |
| `this` | 所有版本 | 当前对象指针 |
| `thread_local` | C++11 | 线程本地存储 |
| `throw` | 所有版本 | 抛出异常 |
| `true` | 所有版本 | 布尔真值 |
| `try` | 所有版本 | 异常处理尝试 |
| `typedef` | 所有版本 | 类型别名 |
| `typeid` | 所有版本 | 类型信息 |
| `typename` | 所有版本 | 模板中的类型参数 |
| `union` | 所有版本 | 联合体 |
| `unsigned` | 所有版本 | 无符号类型 |
| `using` | 所有版本 | using声明/别名 |
| `virtual` | 所有版本 | 虚函数 |
| `void` | 所有版本 | 空类型 |
| `volatile` | 所有版本 | 易变变量 |
| `wchar_t` | 所有版本 | 宽字符类型 |
| `while` | 所有版本 | while循环 |
| `xor` | 预定义宏 | 等价于 `^` |
| `xor_eq` | 预定义宏 | 等价于 `^=` |

---

### 标识符特殊含义（Identifiers with Special Meaning）

这些不是严格意义上的关键字，但在特定上下文中具有特殊意义：

| 标识符 | C++版本 | 特殊含义 |
|--------|---------|----------|
| `final` | C++11 | 禁止派生或覆盖 |
| `override` | C++11 | 显式覆盖虚函数 |
| `import` | C++20 | 模块导入 |
| `module` | C++20 | 模块定义 |
| `transaction_safe` | TM TS | 事务安全函数 |
| `transaction_safe_dynamic` | TM TS | 动态事务安全函数 |
| `reflexpr` | Reflection TS | 反射表达式 |

---

### 预处理器关键字

#### 预处理指令内识别：

| 指令 | 功能 |
|------|------|
| `if` | 条件编译 |
| `elif` | else if分支 |
| `else` | else分支 |
| `endif` | 结束条件编译 |
| `ifdef` | 如果宏定义 |
| `ifndef` | 如果宏未定义 |
| `elifdef` | C++23 else if defined |
| `elifndef` | C++23 else if not defined |
| `define` | 定义宏 |
| `undef` | 取消宏定义 |
| `include` | 包含文件 |
| `line` | 设置行号 |
| `error` | 编译错误 |
| `warning` | 编译警告（C++23） |
| `pragma` | 编译器特定指令 |
| `defined` | 判断宏是否定义 |
| `__has_include` | C++17 检查包含文件 |
| `__has_cpp_attribute` | C++20 检查属性 |
| `export` | C++20 模块导出 |
| `import` | C++20 模块导入 |
| `module` | C++20 模块声明 |

#### 预处理指令外识别：

| 指令 | 功能 |
|------|------|
| `_Pragma` | C++11 pragma替代写法 |

---

## 版本变迁说明

### 语义变化标记：

- (1) — 在 C++11 中改变或新增含义
- (2) — 在 C++14 中新增含义
- (3) — 在 C++17 中改变或新增含义
- (4) — 在 C++20 中改变或新增含义
- (5) — 在 C++23 中新增含义

---

## 扩展知识详解

### 一、替代符号（Alternative Tokens）

为兼容某些键盘输入，C++ 支持以下替代符号：

| 原符号 | 替代符号 | 原符号 | 替代符号 |
|--------|----------|--------|----------|
| `&&`   | `and`    | `\|\|` | `or`     |
| `!`    | `not`    | `&`    | `bitand` |
| `\|`   | `bitor`  | `~`    | `compl`  |
| `^`    | `xor`    | `&=`   | `and_eq` |
| `\|=`  | `or_eq`  | `^=`   | `xor_eq` |
| `!=`   | `not_eq` |        |          |

> 🧪 示例：
```cpp
bool flag1 = true;
bool flag2 = false;

if (flag1 and not flag2) {     // 等价于 if (flag1 && !flag2)
    // ...
}
```

### 二、预留标识符（Reserved Identifiers）

以下命名约定保留给系统使用：

| 规则 | 描述 |
|------|------|
| `__identifier` | 包含双下划线的标识符 |
| `_Uppercase` | 下划线后跟大写字母 |
| `_identifier` | 全局命名空间中以下划线开头的标识符 |

### 三、命名空间规范

| 命名空间 | 用途 |
|----------|------|
| `std` | 标准库命名空间 |
| `posix` | C++11起保留用于未来扩展（程序中定义行为未定义） |

### 四、现代C++关键字详解

#### 1. `auto`（C++11增强）

```cpp
auto x = 42;           // int
auto y = 3.14;         // double
auto z = std::vector<int>{1, 2, 3}; // vector<int>
```

#### 2. `constexpr`（C++11）

```cpp
constexpr int square(int x) {
    return x * x;
}

int arr[square(5)]; // 合法：编译期计算
```

#### 3. `nullptr`（C++11）

```cpp
void func(int);
void func(char*);
func(nullptr); // 明确调用 func(char*)
```

#### 4. `decltype`（C++11）

```cpp
int x = 5;
decltype(x) y = 10; // y 也是 int 类型
```

#### 5. `noexcept`（C++11）

```cpp
void func() noexcept {
    // 保证不抛出异常
}
```

#### 6. `static_assert`（C++11）

```cpp
static_assert(sizeof(int) >= 4, "int must be at least 4 bytes");
```

#### 7. 协程关键字（C++20）

```cpp
#include <coroutine>

generator<int> fibonacci() {
    int a = 0, b = 1;
    while (true) {
        co_yield a;
        auto next = a + b;
        a = b;
        b = next;
    }
}
```

#### 8. 概念与约束（C++20）

```cpp
template<typename T>
concept Integral = std::is_integral_v<T>;

template<Integral T>
void func(T value) {
    // 只接受整数类型
}
```

---

## 相关页面

| 页面名称 | 链接 |
|----------|------|
| [C 关键字文档] | C语言关键字对照学习 |

---

## 页面信息

- 来源地址：<https://en.cppreference.com/mwiki/index.php?title=cpp/keyword&oldid=177570>
- 最后修改时间：2024年11月7日 20:45
- 离线版本获取时间：2025年2月9日 16:39

---

✅ 熟练掌握 C++ 关键字是深入理解语言特性的基础。从传统的控制流到现代的泛型编程和并发支持，关键字的发展体现了 C++ 语言的演进历程。特别是在 C++11/14/17/20 各版本中引入的大量新关键字，极大地提升了语言的表现力和安全性。