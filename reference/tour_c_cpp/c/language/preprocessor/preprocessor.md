# C语言预处理器

来源：cppreference.com

## 预处理器概览

| 条件编译指令 | 宏定义指令 | 文件包含指令 | 错误控制指令 | 其他控制指令 |
|--------------|------------|--------------|--------------|--------------|
| `#if` `#ifdef` `#ifndef` `#else` `#elif` `#elifdef`(C23) `#elifndef`(C23) `#endif` | `#define` `#undef` `#` `##` 运算符 | `#include` `__has_include`(C23) | `#error` `#warning`(C23) | `#pragma` `_Pragma`(C99) `#line` `#embed`(C23) `__has_embed`(C23) |

---

## 预处理器基础概念

预处理器在**翻译阶段4**执行，即在编译之前运行。其处理结果是一个单一文件，随后传递给实际的编译器。

---

## 预处理指令详解

### 一、指令格式

每条预处理指令占一行，格式如下：

```
# 指令名称 参数列表 换行符
```

> 📌 **空指令**
```c
#  // 空指令，无效果
```

### 二、标准预处理指令

| 指令 | 功能说明 | C标准版本 |
|------|----------|-----------|
| `#if` | 条件编译开始 | C89 |
| `#ifdef` | 如果宏已定义 | C89 |
| `#ifndef` | 如果宏未定义 | C89 |
| `#else` | else分支 | C89 |
| `#elif` | else if分支 | C89 |
| `#elifdef` | else if defined | C23 |
| `#elifndef` | else if not defined | C23 |
| `#endif` | 结束条件编译 | C89 |
| `#define` | 定义宏 | C89 |
| `#undef` | 取消宏定义 | C89 |
| `#include` | 包含文件 | C89 |
| `#error` | 产生编译错误 | C89 |
| `#warning` | 产生编译警告 | C23 |
| `#pragma` | 编译器特定指令 | C89 |
| `#line` | 设置行号信息 | C89 |
| `#embed` | 嵌入文件内容 | C23 |
| `_Pragma` | pragma替代写法 | C99 |
| `__has_include` | 检查文件是否可包含 | C23 |
| `__has_embed` | 检查文件是否可嵌入 | C23 |

---

## 预处理器功能详解

### 一、条件编译

控制源文件部分代码的编译：

```c
#define DEBUG 1

#if DEBUG
    printf("Debug mode enabled\n");
#endif

#ifdef VERBOSE
    printf("Verbose output\n");
#else
    printf("Normal output\n");
#endif

#ifndef MAX_SIZE
    #define MAX_SIZE 100
#endif
```

> 🆕 **C23新增指令**
```c
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
    #elifdef FEATURE_X
        // C23支持 elifdef
    #elifndef FEATURE_Y
        // C23支持 elifndef
#endif
```

### 二、文本宏替换

#### 1. 对象宏
```c
#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))
```

#### 2. 函数宏
```c
#define SQUARE(x) ((x) * (x))
int result = SQUARE(5);  // 展开为 ((5) * (5))
```

#### 3. 字符串化运算符 `#`
```c
#define STRINGIFY(x) #x
const char* str = STRINGIFY(Hello World);  // "Hello World"
```

#### 4. 标记连接运算符 `##`
```c
#define CONCAT(a,b) a##b
int xy = 10;
int result = CONCAT(x,y);  // result = xy = 10
```

### 三、文件包含

```c
#include <stdio.h>      // 系统头文件
#include "myheader.h"   // 用户头文件
```

> 🆕 **C23文件检查**
```c
#if __has_include(<threads.h>)
    #include <threads.h>
    // 使用线程功能
#endif
```

### 四、错误与警告

```c
#if __STDC_VERSION__ < 201112L
    #error "C11 or later required"
#endif

#if defined(EXPERIMENTAL)
    #warning "Experimental feature enabled"
#endif
```

### 五、编译器控制

```c
#pragma once                    // 防止头文件重复包含
#pragma pack(1)                 // 设置结构体对齐
_Pragma("pack(1)")              // _Pragma替代写法
```

### 六、行号控制

```c
#line 100                       // 设置当前行号为100
#line 200 "myfile.c"           // 设置行号和文件名
```

### 七、文件嵌入（C23新特性）

```c
// C23支持直接嵌入文件内容
const char shader_source[] = {
    #embed "vertex_shader.glsl"
};
```

---

## 扩展知识详解

### 一、预处理阶段划分

C语言翻译分为多个阶段：

| 阶段 | 描述 |
|------|------|
| 1-3 | 字符映射、行拼接、注释删除 |
| **4** | **预处理器执行** |
| 5-8 | 词法分析、语法分析、语义分析、代码生成 |

### 二、宏展开机制

#### 1. 替换序列
```c
#define N 100
#define M N+1
int arr[M];  // 实际为 int arr[100+1];
```

#### 2. 递归展开限制
```c
#define A B
#define B A  // 防止无限递归展开
```

#### 3. 参数保护
```c
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int x = MIN(1, 2);  // 展开为 ((1) < (2) ? (1) : (2))
```

### 三、条件编译应用场景

#### 1. 跨平台兼容
```c
#ifdef _WIN32
    #include <windows.h>
#elif __linux__
    #include <unistd.h>
#endif
```

#### 2. 调试版本控制
```c
#ifdef DEBUG
    #define DBG_PRINT(x) printf x
#else
    #define DBG_PRINT(x)
#endif

DBG_PRINT(("Debug info: %d\n", value));
```

#### 3. 特性检测
```c
#if __STDC_VERSION__ >= 201112L
    // 使用C11特性
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
| `__STDC__` | 是否符合ANSI C标准 |
| `__STDC_VERSION__` | C标准版本号 |

---

## 实际应用示例

### 一、头文件保护
```c
// header.h
#ifndef HEADER_H
#define HEADER_H

// 头文件内容

#endif // HEADER_H
```

### 二、调试宏
```c
#ifdef DEBUG
    #define DEBUG_PRINT(fmt, ...) \
        fprintf(stderr, "[%s:%d] " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
    #define DEBUG_PRINT(fmt, ...)
#endif
```

### 三、平台相关代码
```c
#if defined(_MSC_VER)
    // Microsoft Visual C++
    #define ALIGNED(x) __declspec(align(x))
#elif defined(__GNUC__)
    // GCC
    #define ALIGNED(x) __attribute__((aligned(x)))
#endif
```

---

## 标准参考文献

### 各版本C标准对预处理器的定义：

- **C23标准 (ISO/IEC 9899:2024)**
  - 6.10 预处理指令

- **C17标准 (ISO/IEC 9899:2018)**
  - 6.10 预处理指令 (p: 117-129)

- **C11标准 (ISO/IEC 9899:2011)**
  - 6.10 预处理指令 (p: 160-178)

- **C99标准 (ISO/IEC 9899:1999)**
  - 6.10 预处理指令 (p: 145-162)

- **C89/C90标准 (ISO/IEC 9899:1990)**
  - 3.8 预处理指令

---

## 相关页面

| 页面名称 | 链接 |
|----------|------|
| [预定义宏符号文档] | |
| [宏符号索引文档] | |
| [C++预处理器文档] | |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=c/preprocessor&oldid=179530>
- 最后修改时间：2025年1月12日 14:20
- 离线版本获取时间：2025年2月9日 16:39

---

✅ 预处理器是C语言编译流程中的重要环节，掌握其使用技巧对编写可移植、可维护的代码至关重要。特别是C23标准新增的特性，如`#embed`、`#warning`、`elifdef`等，进一步增强了预处理器的功能和灵活性。