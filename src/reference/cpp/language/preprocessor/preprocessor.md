# C++ 预处理器

来源：cppreference.com

## 预处理器概览

| 条件编译指令 | 宏定义指令 | 文件包含指令 | 错误控制指令 | 其他控制指令 |
|--------------|------------|--------------|--------------|--------------|
| `#if` `#ifdef` `#ifndef` `#else` `#elif` `#elifdef`(C++23) `#elifndef`(C++23) `#endif` | `#define` `#undef` `#` `##` 运算符 | `#include` `__has_include`(C++17) | `#error` `#warning`(C++23) | `#pragma` `_Pragma`(C++11) `#line` |

---

## 预处理器基础概念

预处理器在**翻译阶段4**执行，即在编译之前运行。其处理结果是一个单一文件，随后传递给实际的编译器。

---

## 预处理指令详解

### 一、指令格式

每条预处理指令占一行，格式如下：

```
# 指令内容 换行符
```

#### 指令内容类型：

1. **标准定义的指令** + 对应参数
2. **条件性支持的非标准指令**（实现定义语义）
3. **空指令**（无效果）

> ⚠️ **重要限制**：
> 预处理指令**不能来自宏展开**

```cpp
#define EMPTY
EMPTY   #   include <file.h> // ❌ 不是预处理指令
```

> ✅ **C++20 模块相关**：
> `module` 和 `import` 指令也属于预处理指令

---

## 预处理器功能详解

### 一、条件编译

控制源文件部分代码的编译：

```cpp
#define DEBUG 1

#if DEBUG
    std::cout << "Debug mode enabled\n";
#endif

#ifdef VERBOSE
    std::cout << "Verbose output\n";
#else
    std::cout << "Normal output\n";
#endif

#ifndef MAX_SIZE
    #define MAX_SIZE 100
#endif
```

> 🆕 **C++23新增指令**
```cpp
#if __cplusplus >= 202302L
    #elifdef FEATURE_X
        // C++23支持 elifdef
    #elifndef FEATURE_Y
        // C++23支持 elifndef
#endif
```

### 二、文本宏替换

#### 1. 对象宏
```cpp
#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))
```

#### 2. 函数宏
```cpp
#define SQUARE(x) ((x) * (x))
int result = SQUARE(5);  // 展开为 ((5) * (5))
```

#### 3. 字符串化运算符 `#`
```cpp
#define STRINGIFY(x) #x
const char* str = STRINGIFY(Hello World);  // "Hello World"
```

#### 4. 标记连接运算符 `##`
```cpp
#define CONCAT(a,b) a##b
int xy = 10;
int result = CONCAT(x,y);  // result = xy = 10
```

### 三、文件包含

```cpp
#include <iostream>         // 系统头文件
#include "myheader.h"       // 用户头文件
```

> 🆕 **C++17文件检查**
```cpp
#if __has_include(<filesystem>)
    #include <filesystem>
    namespace fs = std::filesystem;
#endif
```

### 四、错误与警告

```cpp
#if __cplusplus < 201103L
    #error "C++11 or later required"
#endif

#if defined(EXPERIMENTAL)
    #warning "Experimental feature enabled"
#endif
```

### 五、编译器控制

```cpp
#pragma once                    // 防止头文件重复包含
#pragma pack(1)                 // 设置结构体对齐
_Pragma("pack(1)")              // _Pragma替代写法

// 非标准扩展（部分编译器支持）
__pragma(pack(1))               // Microsoft扩展
```

### 六、行号控制

```cpp
#line 100                       // 设置当前行号为100
#line 200 "myfile.cpp"         // 设置行号和文件名
```

---

## 扩展知识详解

### 一、预处理阶段划分

C++语言翻译分为多个阶段：

| 阶段 | 描述 |
|------|------|
| 1-3 | 字符映射、行拼接、注释删除 |
| **4** | **预处理器执行** |
| 5-8 | 词法分析、语法分析、语义分析、代码生成 |

### 二、宏展开机制

#### 1. 替换序列
```cpp
#define N 100
#define M N+1
int arr[M];  // 实际为 int arr[100+1];
```

#### 2. 递归展开限制
```cpp
#define A B
#define B A  // 防止无限递归展开
```

#### 3. 参数保护
```cpp
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int x = MIN(1, 2);  // 展开为 ((1) < (2) ? (1) : (2))
```

### 三、条件编译应用场景

#### 1. 跨平台兼容
```cpp
#ifdef _WIN32
    #include <windows.h>
#elif __linux__
    #include <unistd.h>
#endif
```

#### 2. 调试版本控制
```cpp
#ifdef DEBUG
    #define DBG_PRINT(x) std::cerr << x << std::endl
#else
    #define DBG_PRINT(x)
#endif
```

#### 3. 特性检测
```cpp
#if __cplusplus >= 201103L
    // 使用C++11特性
    static_assert(sizeof(int) >= 4, "int too small");
#endif
```

### 四、常见预定义宏

| 宏名称 | 含义 |
|--------|------|
| `__LINE__` | 当前行号 |
| `__FILE__` | 当前文件名 |
| `__DATE__` | 编译日期 |
| `__TIME__` | 编译时间 |
| `__cplusplus` | C++标准版本号 |
| `__STDCPP_DEFAULT_NEW_ALIGNMENT__` | 默认new对齐值 |

---

## 标准合规性说明

### 缺陷报告（Defect Reports）

| 报告编号 | 应用于 | 发布行为 | 修正行为 |
|----------|--------|----------|----------|
| CWG 2001 | C++98 | 非标准指令行为不明确 | 明确为条件性支持 |

---

## 实际应用示例

### 一、头文件保护
```cpp
// header.h
#ifndef HEADER_H
#define HEADER_H

// 头文件内容

#endif // HEADER_H
```

### 二、调试宏
```cpp
#ifdef DEBUG
    #define DEBUG_PRINT(fmt, ...) \
        fprintf(stderr, "[%s:%d] " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
    #define DEBUG_PRINT(fmt, ...)
#endif
```

### 三、平台相关代码
```cpp
#if defined(_MSC_VER)
    // Microsoft Visual C++
    #define ALIGNED(x) __declspec(align(x))
#elif defined(__GNUC__)
    // GCC
    #define ALIGNED(x) __attribute__((aligned(x)))
#endif
```

### 四、现代C++特性检测
```cpp
#if __cplusplus >= 201703L
    // C++17特性
    if constexpr (std::is_integral_v<T>) {
        // 编译期条件判断
    }
#endif

#if __has_include(<format>)
    #include <format>
    // 使用std::format
#endif
```

---

## 相关页面

| 页面名称 | 链接 |
|----------|------|
| [预定义宏符号文档] | |
| [宏符号索引文档] | |
| [C预处理器文档] | |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=cpp/preprocessor&oldid=156005>
- 最后修改时间：2023年8月1日 00:04
- 离线版本获取时间：2025年2月9日 16:39

---

✅ C++预处理器继承了C语言的强大功能，并随着标准演进而不断扩展。掌握预处理器的使用技巧，特别是条件编译、宏定义和现代特性检测，对编写高效、可移植的C++代码至关重要。