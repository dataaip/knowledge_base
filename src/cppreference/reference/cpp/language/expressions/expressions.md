# C++ 表达式（Expressions）

来源：cppreference.com

## 表达式概览

| 表达式类别 | 相关内容 |
|------------|----------|
| **通用概念** | 值类别、求值顺序、常量表达式、主表达式、Lambda表达式 |
| **字面量** | 整数字面量、浮点字面量、布尔字面量、字符字面量、字符串字面量、空指针字面量 |
| **运算符** | 赋值、算术、逻辑、比较、成员访问等运算符，以及特殊运算符 |
| **转换机制** | 隐式转换、显式转换（static_cast等）、用户定义转换 |
| **内存管理** | new表达式、delete表达式 |
| **其他特性** | sizeof、typeid、noexcept、折叠表达式、约束表达式等 |

表达式是由**运算符**及其**操作数**组成的序列，用于指定计算。

表达式求值可能：
- 产生结果（如 `2 + 2` 产生结果4）
- 产生副作用（如 `std::printf("%d", 4)` 向标准输出打印字符'4'）

每个C++表达式都有两个独立属性：**类型**和**值类别**。

---

## 表达式核心概念

### 一、值类别（Value Categories）

表达式按其值进行分类（C++11起）：

| 值类别 | 说明 |
|--------|------|
| **lvalue** | 可标识的对象（左值） |
| **prvalue** | 纯右值（临时对象） |
| **xvalue** | 将亡值（可移动的左值） |
| **glvalue** | 泛左值（lvalue + xvalue） |
| **rvalue** | 右值（prvalue + xvalue） |

```cpp
int x = 42;           // x是lvalue
int func();           // func()是prvalue
std::move(x);         // std::move(x)是xvalue
```

### 二、求值顺序（Order of Evaluation）

指定获取中间结果的顺序，涉及序列点和副作用概念。

```cpp
int i = 0;
int a = i++ + i++;    // 未定义行为（多个未排序的修改）
int b = (++i, ++i);   // 明确定义（逗号运算符有顺序）
```

---

## 运算符详解

### 常用运算符表

| 运算符类型 | 运算符 | 示例 |
|------------|--------|------|
| **赋值运算符** | `= += -= *= /= %= &= |= ^= <<= >>=` | `a = b`, `a += b` |
| **自增自减** | `++ --` | `++a`, `a++` |
| **算术运算符** | `+ - * / % ~ & ^ << >>` | `a + b`, `a & b` |
| **逻辑运算符** | `! && ||` | `!a`, `a && b` |
| **比较运算符** | `== != < > <= >= <=>` | `a == b`, `a <=> b`(C++20) |
| **成员访问** | `[] * & -> . ->* .*` | `a[b]`, `a->b`, `a.*ptr` |
| **其他运算符** | `() , ?: sizeof typeid noexcept` | `a()`, `a, b`, `sizeof a` |

### 特殊运算符

| 运算符 | 功能 |
|--------|------|
| `static_cast<T>(expr)` | 基本类型转换 |
| `dynamic_cast<T>(expr)` | 继承层次转换 |
| `const_cast<T>(expr)` | 添加/移除cv限定符 |
| `reinterpret_cast<T>(expr)` | 无关类型转换 |
| `new` | 动态内存分配 |
| `delete` | 动态内存释放 |
| `sizeof...` | 参数包大小（C++11） |
| `alignof` | 对齐要求（C++11） |
| `noexcept` | 异常检查（C++11） |

### C++20运算符增强

```cpp
// 三路比较运算符（太空船运算符）
auto result = a <=> b;  // 返回strong_ordering, weak_ordering, partial_ordering
```

---

## 转换机制

### 一、标准转换（Implicit Conversions）

自动进行的类型转换：

```cpp
int a = 5;
double b = a;  // int到double的隐式转换
```

### 二、显式转换

#### 1. C++风格转换
```cpp
int i = 42;
double d = static_cast<double>(i);     // 静态转换
const int* p = &i;
int* q = const_cast<int*>(p);          // 常量转换
Base* base = dynamic_cast<Base*>(ptr); // 动态转换
void* vptr = reinterpret_cast<void*>(i); // 重解释转换
```

#### 2. C风格转换
```cpp
int i = 42;
double d = (double)i;  // C风格转换
```

### 三、用户定义转换

通过转换构造函数或转换运算符实现：

```cpp
class String {
public:
    String(int size);           // 转换构造函数
    operator const char*() const; // 转换运算符
};
```

---

## 内存分配

### new表达式

```cpp
int* p = new int(42);              // 分配并初始化
int* arr = new int[10];            // 数组分配
String* s = new String("hello");   // 对象分配
```

### delete表达式

```cpp
delete p;        // 释放单个对象
delete[] arr;    // 释放数组
```

---

## 主表达式（Primary Expressions）

运算符的操作数可以是其他表达式或**主表达式**。

### 主表达式包括：

1. **this指针**
2. **字面量**（如 `2` 或 `"Hello, world"`）
3. **标识符表达式**
4. **Lambda表达式**（C++11起）
5. **折叠表达式**（C++17起）
6. **约束表达式**（C++20起）
7. **参数包索引表达式**（C++26起）

```cpp
int result = (2 + 3) * 4;  // 括号内表达式是主表达式
auto lambda = [](int x) { return x * 2; };  // Lambda表达式
```

---

## 字面量详解

### 一、整数字面量

```cpp
int decimal = 42;        // 十进制
int octal = 052;         // 八进制（以0开头）
int hex = 0x2A;          // 十六进制（以0x开头）
int binary = 0b101010;   // 二进制（C++14，以0b开头）
```

### 二、浮点字面量

```cpp
float f = 3.14f;         // float类型
double d = 3.14;         // double类型
long double ld = 3.14L;  // long double类型
```

### 三、字符字面量

```cpp
char ch = 'A';           // char类型
wchar_t wch = L'A';      // 宽字符
char16_t u16 = u'A';     // UTF-16字符（C++11）
char32_t u32 = U'A';     // UTF-32字符（C++11）
char8_t u8 = u8'A';      // UTF-8字符（C++20）
```

### 四、字符串字面量

```cpp
const char* str = "Hello";           // C风格字符串
const wchar_t* wstr = L"Hello";      // 宽字符串
const char16_t* u16str = u"Hello";   // UTF-16字符串（C++11）
const char32_t* u32str = U"Hello";   // UTF-32字符串（C++11）
const char8_t* u8str = u8"Hello";    // UTF-8字符串（C++20）
```

### 五、布尔字面量

```cpp
bool flag = true;        // 布尔真值
bool empty = false;      // 布尔假值
```

### 六、空指针字面量（C++11）

```cpp
std::nullptr_t np = nullptr;  // 空指针字面量
int* ptr = nullptr;           // 指针初始化
```

### 七、用户定义字面量（C++11）

```cpp
constexpr long double operator"" _km(long double x) {
    return x * 1000.0;
}

auto distance = 42.0_km;  // 用户定义字面量
```

---

## 高级表达式概念

### 一、完整表达式（Full-expressions）

#### 构成表达式（Constituent Expression）
```cpp
int arr[2] = {2, 22};  // 构成表达式是2和22
```

#### 立即子表达式（Immediate Subexpressions）
- 运算符操作数的构成表达式
- Lambda表达式的捕获初始化表达式
- 隐式调用的函数调用

#### 完整表达式定义
1. 未求值操作数
2. 常量表达式
3. 简单声明的初始化表达式
4. 对象析构调用
5. 非其他表达式子表达式的表达式

### 二、潜在求值表达式（Potentially-evaluated Expressions）

表达式在以下情况为**未求值操作数**：
- `sizeof` 运算符的操作数
- `typeid` 运算符的操作数（非多态左值）
- `noexcept` 运算符的操作数
- `decltype` 说明符的操作数

其余表达式为**潜在求值表达式**。

### 三、丢弃值表达式（Discarded-value Expressions）

仅用于副作用的表达式，其值被丢弃：

```cpp
void func() {
    printf("Hello");  // 函数调用值被丢弃
    (void)getValue(); // 显式丢弃返回值
}
```

### 四、表达式等价（Expression-equivalence）(C++20)

表达式等价需满足：
1. 相同效果
2. 都是常量子表达式或都不是
3. 都是noexcept或都不是

---

## 扩展知识详解

### 一、Lambda表达式（C++11）

```cpp
// 基本Lambda
auto lambda = [](int x, int y) { return x + y; };

// 带捕获的Lambda
int multiplier = 10;
auto lambda2 = [multiplier](int x) { return x * multiplier; };

// 通用Lambda（C++14）
auto lambda3 = [](auto x, auto y) { return x + y; };

// 泛型Lambda（C++20）
auto lambda4 = []<typename T>(T x) { return x; };
```

### 二、折叠表达式（C++17）

```cpp
template<typename... Args>
auto sum(Args... args) {
    return (args + ...);  // 右折叠
}

template<typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << '\n';  // 折叠表达式
}
```

### 三、约束表达式（Requires Expressions）(C++20)

```cpp
template<typename T>
concept Addable = requires(T a, T b) {
    a + b;  // 要求支持加法运算
};

template<typename T>
requires std::is_integral_v<T>  // 约束子句
void func(T value) {
    // 实现
}
```

### 四、三路比较运算符（C++20）

```cpp
class Point {
    int x, y;
public:
    auto operator<=>(const Point&) const = default;
    // 自动生成所有比较运算符
};
```

---

## 缺陷报告（Defect Reports）

| 报告编号 | 应用于 | 发布行为 | 修正行为 |
|----------|--------|----------|----------|
| CWG 1054 | C++98 | volatile变量赋值可能因左值到右值转换产生不必要读取 | 引入丢弃值表达式，排除此情况 |
| CWG 1343 | C++98 | 聚合初始化中析构函数调用顺序未明确指定 | 聚合初始化中的完整表达式明确定义 |
| CWG 1383 | C++98 | 丢弃值表达式的左值到右值转换列表包含重载运算符 | 仅包含内置含义运算符 |
| CWG 1576 | C++11 | 丢弃值的volatile将亡值表达式未应用左值到右值转换 | 在此情况下应用转换 |
| CWG 2249 | C++98 | 声明符中待声明标识符不是id表达式 | 它们是id表达式 |
| CWG 2431 | C++11 | 绑定到引用的临时对象析构调用不是完整表达式 | 它们是完整表达式 |

---

## 标准参考文献

### 相关C++标准章节：

- C++23标准
  - 7 Expressions
- C++20标准
  - 7 Expressions
- C++17标准
  - 8 Expressions
- C++14标准
  - 5 Expressions
- C++11标准
  - 5 Expressions
- C++98/C++03标准
  - 5 Expressions

---

## 相关页面

| 页面名称 | 说明 |
|----------|------|
| [C表达式文档] | C语言表达式对照学习 |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=cpp/language/expressions&oldid=175971>
- 最后修改时间：2024年9月9日 07:23
- 离线版本获取时间：2025年2月9日 16:39

---

✅ C++表达式系统是语言核心，从基本算术运算到现代Lambda表达式，体现了语言的演进历程。掌握表达式的值类别、转换机制和求值顺序是编写高效、正确C++代码的基础。特别是C++11/14/17/20引入的移动语义、泛型Lambda、折叠表达式、约束表达式等特性，极大地增强了表达式的表达能力和性能表现。