# C语言表达式（Expressions）

来源：cppreference.com

## 表达式概览

| 表达式类别 | 相关内容 |
|------------|----------|
| **通用概念** | 值类别、求值顺序、常量表达式、隐式转换、泛型选择 |
| **常量和字面量** | 整数字面量、浮点字面量、字符常量、字符串字面量、复合字面量 |
| **运算符** | 运算符优先级、成员访问、逻辑运算、比较运算、算术运算等 |
| **特殊表达式** | sizeof、_Alignof(alignof)、强制类型转换 |

表达式是由**运算符**及其**操作数**组成的序列，用于指定计算。

表达式求值可能：
- 产生结果（如 `2 + 2` 产生结果4）
- 产生副作用（如 `printf("%d", 4)` 向标准输出发送字符'4'）
- 指定对象或函数

---

## 表达式核心概念

### 一、值类别（Value Categories）

表达式按其值进行分类：

- **左值**（lvalue）：可标识的对象
- **非左值对象**：临时对象
- **函数指示符**：函数名

### 二、求值顺序（Evaluation Order）

指定获取中间结果的顺序，涉及序列点概念。

---

## 运算符详解

### 常用运算符表

| 运算符类型 | 运算符 | 示例 |
|------------|--------|------|
| **赋值运算符** | `= += -= *= /= %= &= |= ^= <<= >>=` | `a = b`, `a += b` |
| **自增自减** | `++ --` | `++a`, `a++` |
| **算术运算符** | `+ - * / % ~ & ^ << >>` | `a + b`, `a & b` |
| **逻辑运算符** | `! && ||` | `!a`, `a && b` |
| **比较运算符** | `== != < > <= >=` | `a == b`, `a < b` |
| **成员访问** | `[] * & -> .` | `a[b]`, `*a`, `a->b` |
| **其他运算符** | `() , ?: sizeof _Alignof(alignof)` | `a()`, `a, b`, `sizeof a` |

### 运算符优先级

运算符优先级定义运算符与其参数绑定的顺序。

### 替代表示法

某些运算符有替代拼写（如 `and`, `or`, `not` 等）。

---

## 转换机制

### 一、隐式转换

当操作数类型不匹配运算符期望时自动进行：

```c
int a = 5;
double b = a;  // int隐式转换为double
```

### 二、显式转换（强制类型转换）

使用强制类型转换显式转换值：

```c
double d = 3.14;
int i = (int)d;  // 显式转换为int
```

---

## 其他重要概念

### 一、常量表达式

可在编译时求值并用于编译时上下文：

```c
int arr[10];              // 编译时常量表达式
static int x = 5 + 3;     // 静态初始化
```

### 二、泛型选择（Generic Selection）(C11)

根据参数类型执行不同表达式：

```c
#define PRINT(x) _Generic((x), \
    int: print_int, \
    float: print_float, \
    default: print_unknown)(x)
```

### 三、浮点运算控制(C99)

浮点运算可能引发异常，由以下控制：

- `math_errhandling` 错误报告
- `#pragma FENV_ACCESS` 浮点环境访问
- `#pragma FP_CONTRACT` 浮点收缩
- `#pragma CX_LIMITED_RANGE` 复数范围限制

---

## 主表达式（Primary Expressions）

运算符的操作数可以是其他表达式或**主表达式**。

### 主表达式包括：

1. **常量和字面量**（如 `2` 或 `"Hello, world"`）
2. **适当声明的标识符**（如 `n` 或 `printf`）
3. **泛型选择**（C11起）
4. **括号表达式**（保证括号优先级最高）

```c
int result = (2 + 3) * 4;  // 括号内表达式是主表达式
```

### 一、常量和字面量

在C程序源代码中嵌入特定类型的常量值：

#### 1. 整数常量
```c
int decimal = 42;       // 十进制
int octal = 052;        // 八进制（以0开头）
int hex = 0x2A;         // 十六进制（以0x开头）
```

#### 2. 字符常量
```c
int ch = 'A';           // 字符常量（类型为int）
char8_t u8 = u8'A';     // C23 UTF-8字符
char16_t u16 = u'A';    // C11 UTF-16字符
char32_t u32 = U'A';    // C11 UTF-32字符
wchar_t wc = L'A';      // 宽字符
```

> 🆕 **C23新增**：
```c
bool flag = true;       // 布尔常量
nullptr_t np = nullptr; // 空指针常量
```

#### 3. 浮点常量
```c
float f = 3.14f;        // float类型
double d = 3.14;        // double类型
long double ld = 3.14L; // long double类型
```

#### 4. 字符串字面量
```c
char str[] = "Hello";           // char数组
char8_t u8str[] = u8"Hello";    // C23 UTF-8字符串
char16_t u16str[] = u"Hello";   // C11 UTF-16字符串
char32_t u32str[] = U"Hello";   // C11 UTF-32字符串
wchar_t wstr[] = L"Hello";      // 宽字符串
```

#### 5. 复合字面量（C99）
```c
struct Point { int x, y; };
struct Point p = (struct Point){.x = 1, .y = 2};

int *arr = (int[]){1, 2, 3, 4, 5};
```

---

## 未求值表达式（Unevaluated Expressions）

某些运算符的操作数不会被实际求值：

### 一、sizeof运算符

```c
size_t n = sizeof(printf("%d", 4));  // 不执行printf
```

> 🆕 **C99起**：VLA（变长数组）的sizeof会求值

### 二、_Alignof/alignof运算符

```c
size_t align = _Alignof(int);  // C11起不求值
size_t align2 = alignof(int);  // C23起使用alignof
```

### 三、泛型选择的控制表达式

```c
_GenericClass((x), int: 1, float: 2.0);  // x不被求值
```

### 四、VLA的对齐表达式

```c
int n = 5;
_Alignof(int[n]);  // n被求值（VLA）
```

---

## 扩展知识详解

### 一、表达式分类示例

```c
int a = 5;              // 左值表达式
int b = a + 1;          // 右值表达式
int *p = &a;            // 取地址表达式
int c = *p;             // 解引用表达式
int arr[10];            // 数组名是左值
int func(void);         // 函数名是函数指示符
```

### 二、运算符优先级实例

```c
int result = 2 + 3 * 4;     // 14 (乘法优先)
int result2 = (2 + 3) * 4;  // 20 (括号优先)
```

### 三、序列点示例

```c
int i = 0;
int a = i++ + i++;  // 未定义行为（多个修改）
int b = (++i, ++i); // 明确定义（逗号运算符）
```

### 四、泛型选择应用

```c
#define abs(x) _Generic((x), \
    int: abs_int, \
    float: abs_float, \
    double: abs_double)(x)

int abs_int(int x) { return x < 0 ? -x : x; }
float abs_float(float x) { return x < 0 ? -x : x; }
double abs_double(double x) { return x < 0 ? -x : x; }
```

---

## 标准参考文献

### 各版本C标准对表达式的定义：

- **C23标准 (ISO/IEC 9899:2024)**
  - 6.5 表达式
  - 6.6 常量表达式

- **C17标准 (ISO/IEC 9899:2018)**
  - 6.5 表达式 (p: 55-75)
  - 6.6 常量表达式 (p: 76-77)

- **C11标准 (ISO/IEC 9899:2011)**
  - 6.5 表达式 (p: 76-105)
  - 6.6 常量表达式 (p: 106-107)

- **C99标准 (ISO/IEC 9899:1999)**
  - 6.5 表达式 (p: 67-94)
  - 6.6 常量表达式 (p: 95-96)

- **C89/C90标准 (ISO/IEC 9899:1990)**
  - 3.3 表达式
  - 3.4 常量表达式

---

## 相关页面

| 页面名称 | 说明 |
|----------|------|
| [C++表达式文档] | C++语言表达式对照学习 |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=c/language/expressions&oldid=178465>
- 最后修改时间：2024年12月17日 22:22
- 离线版本获取时间：2025年2月9日 16:39

---

✅ 掌握C语言表达式是理解程序执行机制的基础。从简单的算术运算到复杂的泛型选择，表达式系统体现了C语言简洁而强大的特性。特别是C99/C11/C23标准引入的复合字面量、泛型选择、UTF-8支持等新特性，进一步扩展了表达式的能力和应用范围。