# C 语言当前状态

来源：cppreference.com

## 版本历程

| C89 | C95 | C99 | C11 | C17 | C23 |
|-----|-----|-----|-----|-----|-----|
|     |     |     |     |     | ✓   |

### 最近里程碑：C23 正式发布

C23 标准已经正式发布。

> **注意**：此部分内容仍不完整  
> 原因：与 C++ 页面中的表述存在重复

当前的标准化时间表可参考文档 [N2984](https://open-std.org/)。

您还可以访问 [open-std.org](https://open-std.org/) 获取最新的 C 标准委员会提案文件。通过阅读这些提案，您可以追踪 C 语言的发展趋势，并了解一个优秀想法是如何逐步成为标准的。然而，请注意，**这些提案文件既不是标准文档本身，也不应被视为等同于标准文档**。

---

## 扩展知识详解

### 一、C语言各版本简介

#### 1. **C89 / ANSI C**
- **发布时间**：1989年（由 ANSI 美国国家标准协会发布）
- **重要性**：首次将 C 语言进行了系统化标准化
- **特点**：
  - 引入函数原型声明语法（如 `int func(int a);`）
  - 支持 `void *` 指针类型
  - 定义了标准库的基本结构

> 📌 **示例**：
```c
#include <stdio.h>

void print_hello(void) {
    printf("Hello, World!\n");
}
```

#### 2. **C95 (ISO/IEC 9899/AMD1:1995)**
- **发布时间**：1995年
- **性质**：C89 的修正版，也称“Normative Addendum 1”
- **改进**：
  - 多字节字符支持增强
  - 新增 `<iso646.h>` 头文件提供替代运算符（如 and, or）

#### 3. **C99**
- **发布时间**：1999年
- **重大变化**：
  - 支持变量定义中间插入代码块中
  - 增加 `_Bool` 类型和 `<stdbool.h>` 头文件
  - 引入复数类型：`_Complex`, `_Imaginary`
  - 可变长数组（VLA）：`int arr[n];`
  - 内联函数：`inline`
  - 注释方式增加 C++ 风格单行注释 `//`

> 📌 示例：可变长数组
```c
void process_array(int n) {
    int arr[n]; // VLA 特性
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }
}
```

#### 4. **C11**
- **发布时间**：2011年
- **新增功能**：
  - 多线程支持库 `<threads.h>`
  - 原子操作支持 `<stdatomic.h>`
  - 静态断言 `_Static_assert`
  - 泛型选择 `_Generic`

> 📌 **示例：_Generic 使用**
```c
#define get_type(x) _Generic((x), \
    int: "int", \
    float: "float", \
    default: "other")

int main() {
    int a = 5;
    float b = 3.14f;
    printf("%s\n", get_type(a));  // 输出 "int"
    printf("%s\n", get_type(b));  // 输出 "float"
}
```

#### 5. **C17**
- **发布时间**：2018年
- **特点**：主要为维护性更新，无重大语言特性变更
- **目标**：消除歧义与不一致之处，提升兼容性

#### 6. **C23**
- **发布时间**：2024年正式发布
- **重要更新**：
  - 支持 `<stdbit.h>` 标准位操作库
  - 删除隐式函数声明警告（提高安全性和一致性）
  - 引入 `nullptr` 替代 `NULL`
  - 增加属性语法：`[[attribute]]`
  - 字符串字面量支持 UTF-8 编码默认设置

> 📌 示例：`nullptr` 和 `[[deprecated]]`
```c
int *p = nullptr;  // 推荐写法，明确表示空指针

[[deprecated("Use new_api instead")]]
void old_api(void) {
    // ...
}
```

---

## 相关资源链接

### 参见页面

| 主题                  | 链接                                     |
|-----------------------|------------------------------------------|
| C++ 当前状态文档     | [C++ documentation for Current status]   |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=c/current_status&oldid=179932>
- 最后修改时间：2025年1月28日 15:50
- 离线版获取时间：2025年2月9日 16:39

--- 

> ⚠️ **提示**：标准提案（Working Papers）仅供学习和参考之用，不能替代 ISO 官方发布的正式标准文档。若需权威依据，请查阅 ISO/IEC 9899 标准文本。