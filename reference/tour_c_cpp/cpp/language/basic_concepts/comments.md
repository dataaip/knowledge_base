# 注释（Comments）

> 来源：cppreference.com

注释（Comments）用于在源代码中嵌入说明性信息，是代码文档的一种形式。它们在程序编译过程中被编译器**完全忽略**，不会影响代码的执行逻辑。注释的目的是为阅读源代码的人（通常是开发者）提供辅助理解的说明信息。

尽管 C++ 标准本身**不规定**注释的具体格式，但存在许多第三方工具（如 Doxygen、Sphinx 等）能够解析特定格式的注释并生成文档。

---

## 语法（Syntax）

| 语法格式                | 类型编号 | 说明                     |
|-------------------------|----------|--------------------------|
| `/*` 注释内容 `*/`      | (1)      | C 风格或多行注释         |
| `//` 注释内容           | (2)      | C++ 风格或单行注释       |

1) 常被称为“C 风格”或“多行注释”（C-style or multi-line comments）。  
2) 常被称为“C++ 风格”或“单行注释”（C++-style or single-line comments）。

> ✅ **重要规则**：在翻译阶段3，所有注释都会被**移除**，并将注释内容替换为**单个空格字符**。

---

## C 风格注释（C-style Comments）

C 风格注释以 `/*` 开始，以 `*/` 结束，可以跨越**多行**，也可以用在**单行上**。

### 特点：

- 被 `/*` 和 `*/` 包围的文本内容会被编译器完全忽略。
- 虽然不是 C++ 标准的一部分，但在注释中使用 `/**` 和 `*/` 通常被解释为**文档注释块**（如 Doxygen），因为其第二个星号 `*` 会被视为注释内容的一部分，这是合法的。
- **不支持嵌套**：一个 `/* ... */` 注释中不能包含另一个 `/* ... */`。

### 示例：

```cpp
/**************
 *  you can insert any *, but
 *  you can't make comments nested
 */
```

---

## C++ 风格注释（C++-style Comments）

C++ 风格注释从 `//` 开始，到**行尾结束**。这种注释通常用于**单行注释**，但多个连续的 `//` 行也可以构成多行注释的效果。

### 示例：

```cpp
// C++-style comments can comment one line

// or, they can
// be strung together
```

> ❗ **注意**：这种风格的注释从 `//` 开始直到行尾，**不能跨行**，除非使用多个 `//` 行。

---

## 注意事项（Notes）

由于注释在**预处理**之前就被移除，因此：

1. **宏无法生成注释**：尝试用宏构造注释不会成功。
2. **未闭合的 C 风格注释不会从 `#include` 的文件中延续**：每个源文件的注释独立处理。

### 代码排除机制

除了使用注释，还可以使用以下方式屏蔽或排除代码：

#### 方法一：使用 `#if 0` 条件编译

```cpp
#if 0
    std::cout << "this will not be executed or even compiled\n";
#endif
```

- 该部分代码不会被编译或执行。

#### 方法二：使用 `if (false)` 条件语句

```cpp
if (false)
{
    std::cout << "this will not be executed\n";
}
```

- 代码**会被编译**，但**不会执行**。

---

## 示例代码（Example）

```cpp
#include <iostream>

/* C-style comments can contain
multiple lines */
/* or just one */

/**************
 *  you can insert any *, but
 *  you can't make comments nested
 */

// C++-style comments can comment one line

// or, they can
// be strung together

int main()
{
    // 注释在预处理前被移除，因此 ABC 将被展开为 1，而不是 1//2134，
    // 最终输出为：1 hello world
#define ABC 1//2134
    std::cout << ABC << " hello world\n";

    // The below code won't be run
    // return 1;

    // The below code will be run
    return 0;
}
```

### 输出结果（Output）：

```
1 hello world
```

---

## 参见（See also）

| 主题               | 链接                                      |
|--------------------|-------------------------------------------|
| C 语言中的注释文档 | [C documentation for comment]             |

---

来源：<https://en.cppreference.com/mwiki/index.php?title=cpp/comment&oldid=172112>  
页面最后修改时间：2024年5月28日 07:35  
离线版本获取时间：2025年2月9日 16:39

---