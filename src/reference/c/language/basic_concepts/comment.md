# 注释（Comments）

> 来源：cppreference.com

注释（Comments）是程序源代码中用于提供说明或文档的文本。它们在程序编译时会被编译器忽略，不参与最终可执行程序的生成，主要用于帮助程序员阅读和理解代码逻辑。

---

## 语法（Syntax）

| 语法格式                    | 类型编号 | 说明（自 C99 标准起） |
|-----------------------------|----------|------------------------|
| `/*` 注释内容 `*/`          | (1)      |                        |
| `//` 注释内容               | (2)      | (自 C99 起支持)        |

- (1) 通常称为“C 风格”或“多行”注释（C-style or multi-line comments）。
- (2) 通常称为“C++ 风格”或“单行”注释（C++-style or single-line comments）。

---

## 处理规则

所有注释在翻译阶段的第3阶段都会被移除，每个注释会用一个空格字符代替。

---

## C 风格注释（C-style Comments）

C 风格注释常用于注释大段文本或小段代码，也可用于单行。语法为使用 `/*` 开始注释，用 `*/` 结束注释。

编译器会忽略 `/*` 和 `*/` 之间的所有内容。虽然不是 C 标准的一部分，但 `/**` 和 `**/` 常用于表示文档块，因为第二个 `*` 会被视为注释的一部分，这是合法的。

### C 风格注释的特点：

- 注释内容中的字符仅用于识别多字节字符和查找结束标记 `*/`。
- **不支持嵌套**：不能在 C 风格注释内包含另一个 `/* ... */` 注释。

---

## C++ 风格注释（C++-style Comments，自 C99 支持）

C++ 风格注释一般用于单行文本或代码注释，也可以将多个 C++ 注释拼接为多行注释。语法为使用 `//` 开始注释直到行尾。

### C++ 风格注释的特点：

- 注释内容包括所有多字节字符直到（但不包括）下一个换行符。
- 注释中内容仅用于识别多字节字符和查找换行符。
- **支持嵌套**示例：
  ```c
  // y = f(x);   // invoke algorithm
  ```

### 注释混合使用：

- 在 C++ 风格注释中可以使用 C 风格注释：
  ```c
  // y = f(x); /* invoke algorithm */
  ```

- 同样地，在 C 风格注释中可以使用 C++ 风格注释，用以排除小段代码：
  ```c
  /*
     y = f(x);
  // invoke algorithms
     z = g(x);
  */
  ```

---

## 注意事项（Notes）

由于注释在预处理器之前被移除，因此：

- 宏不能用于构造注释。
- 未闭合的 C 风格注释不会从 `#include` 的文件中延伸到当前文件。

### 示例：宏无法用于构造注释

```c
/* An attempt to use a macro to form a comment. */
/* But, a space replaces characters "//".       */
#ifndef DEBUG
    #define PRINTF //
#else
    #define PRINTF printf
#endif
...
PRINTF("Error in file %s at line %i\n", __FILE__, __LINE__);
```

### 代码排除机制

除注释外，还可以使用以下方式屏蔽代码块：

#### 使用条件编译 `#if 0`

```c
#if 0
    puts("this will not be compiled");
    /* no conflict with C-style comments */
    // no conflict with C++-style comments
#endif
```

#### 使用永不执行的条件语句 `if(0)`（仅屏蔽执行，不屏蔽编译）

```c
if(0) {
    puts("this will be compiled but not be executed");
    /* no conflict with C-style comments */
    // no conflict with C++-style comments
}
```

### C99 注释引入的不兼容问题

虽然 `//` 注释自 C99 引入，但在某些特殊场景下可能造成不兼容：

```c
a = b //*divisor:*/ c
+ d; /* C89 compiles a = b / c + d;
        C99 compiles a = b + d; */
```

该写法在 C89 中会被当作注释 `/* ... */` 处理，但在 C99 及之后版本中，`//` 会作为 C++ 风格注释处理，导致逻辑发生改变。

---

## 示例代码（Example）

```c
#include <stdio.h>

/*
C-style comments can contain
multiple lines.
*/

/* Or, just one line. */

// C++-style comments can comment one line.

// Or, they can
// be strung together.

int main(void)
{
  // The below code won't be run
  // puts("Hello");

  // The below code will be run
  puts("World");

  // A note regarding backslash + newline.
  // Despite belonging to translation phase 2 (vs phase 3 for comments),
  // '\' still determines which portion of the source code is considered
  // as 'comments':
  // This comment will be promoted to the next line \
  puts("Won't be run"); // may issue a warning "multi-line comment"
  puts("Hello, again");
}
```

### 输出结果（Output）：

```
World
Hello, again
```

---

## 参考标准（References）

- **C17 标准 (ISO/IEC 9899:2018)**: 第 6.4.9 节，注释（p: 54）
- **C11 标准 (ISO/IEC 9899:2011)**: 第 6.4.9 节，注释（p: 75）
- **C99 标准 (ISO/IEC 9899:1999)**: 第 6.4.9 节，注释（p: 66）
- **C89/C90 标准 (ISO/IEC 9899:1990)**: 第 3.1.9 节，注释

---

## 参见（See also）

| 主题             | 链接                             |
|------------------|----------------------------------|
| C++ 注释文档     | [C++ documentation for Comments] |

---

来源：<https://en.cppreference.com/mwiki/index.php?title=c/comment&oldid=146308>  
页面最后修改时间：2023年1月11日 00:14  
离线版本获取时间：2025年2月9日 16:39

---