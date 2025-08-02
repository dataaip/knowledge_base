# C++ 语句（Statements）

来源：cppreference.com

## 语句概览

| 语句类型 | 语法格式 |
|----------|----------|
| **标签语句** | `label : statement` |
| **表达式语句** | `expression ;` |
| **复合语句** | `{ statement... }` |
| **选择语句** | `if`、`switch` |
| **迭代语句** | `while`、`do-while`、`for`、`range-for`(C++11) |
| **跳转语句** | `break`、`continue`、`return`、`goto` |
| **声明语句** | `declaration ;` |
| **try块** | `try block` |
| **事务内存** | `synchronized`、`atomic_*`(TM TS) |

语句是C++程序的执行单元，按顺序执行。函数体就是语句序列。

```cpp
int main()
{
    int n = 1;                        // 声明语句
    n = n + 1;                        // 表达式语句
    std::cout << "n = " << n << '\n'; // 表达式语句
    return 0;                         // 返回语句
}
```

C++包括以下语句类型：

1. 标签语句
2. 表达式语句
3. 复合语句
4. 选择语句
5. 迭代语句
6. 跳转语句
7. 声明语句
8. try块
9. 原子和同步块(TM TS)

---

## 一、标签语句（Labeled Statements）

为控制流目的而标记的语句。

### 语法格式：
```cpp
label statement
```

### 标签类型：

| 标签语法 | 类型 | 说明 |
|----------|------|------|
| `identifier :` | 普通标签 | `goto`跳转目标 |
| `case constexpr :` | case标签 | `switch`分支 |
| `default :` | 默认标签 | `switch`默认分支 |

> 🆕 **C++11起支持属性**：
```cpp
[[deprecated]] label: statement
```

### 标签规则：

- 函数内标签名唯一
- 标签可出现在复合语句任何位置（C++23）
- 标签不参与名称查找（可与其它标识符同名）

```cpp
void f()
{
    {
        goto label; // 即使后面声明也可跳转
        label:      // C++23起可独立存在
    }
    goto label;     // 忽略块作用域
}

void g()
{
    goto label;     // 错误：不在g的作用域内
}
```

### 控制流受限语句：

以下语句中的标签仅在语句内有效：

- try块的复合语句
- 异常处理程序的复合语句
- `constexpr if`的子语句（C++17）
- `consteval if`的子语句（C++23）

---

## 二、表达式语句（Expression Statements）

表达式后加分号构成语句。

### 语法格式：
```cpp
attr(optional) expression(optional) ;
```

### 常见表达式语句：

```cpp
x = 5;              // 赋值语句
func();             // 函数调用
i++;                // 自增语句
std::cout << x;     // 流操作
```

### 空语句（Null Statement）：

没有表达式的语句：

```cpp
while (condition)
    ; // 空循环体

label: ;            // 带标签的空语句（C++23前需在复合语句末尾）
```

---

## 三、复合语句（Compound Statements / Blocks）

由花括号包围的语句序列。

### 语法格式：
```cpp
attr(optional) { 
    statement... (optional) 
    label... (optional) (C++23) 
}
```

### 特点：

- 创建新的**块作用域**
- 块内声明的变量在结束时按逆序销毁

```cpp
int main()
{
    {                                // 内层块开始
        std::ofstream f("test.txt"); // 声明语句
        f << "abc\n";                // 表达式语句
    }                                // 块结束，f被刷新并关闭
    std::ifstream f("test.txt");     // 重新声明
    std::string str;                 // 声明语句
    f >> str;                        // 表达式语句
}                                    // 外层块结束，str销毁，f关闭
```

> 🆕 **C++23增强**：
- 块末尾的标签视为后跟空语句
- 标签可出现在块内任意位置

---

## 四、选择语句（Selection Statements）

根据条件选择执行路径。

### 语法格式：

| 语句类型 | 语法 |
|----------|------|
| if语句 | `if (condition) statement` |
| if-else语句 | `if (condition) statement else statement` |
| switch语句 | `switch (condition) statement` |
| constexpr if | `if constexpr (condition) statement` (C++17) |
| consteval if | `if consteval statement` (C++23) |

### if语句示例：

```cpp
// 传统if
if (x > 0) {
    std::cout << "Positive\n";
} else if (x < 0) {
    std::cout << "Negative\n";
} else {
    std::cout << "Zero\n";
}

// C++17初始化if
if (auto result = getValue(); result.has_value()) {
    std::cout << result.value() << '\n';
}

// C++23 consteval if
if consteval {
    // 编译期执行
} else {
    // 运行期执行
}
```

### switch语句示例：

```cpp
switch (grade) {
    case 'A':
        std::cout << "Excellent\n";
        [[fallthrough]];  // C++17属性
    case 'B':
        std::cout << "Good\n";
        break;
    default:
        std::cout << "Unknown\n";
}
```

---

## 五、迭代语句（Iteration Statements）

重复执行代码。

### 语法格式：

| 循环类型 | 语法 |
|----------|------|
| while循环 | `while (condition) statement` |
| do-while循环 | `do statement while (expression);` |
| for循环 | `for (init; condition; expression) statement` |
| range-for循环 | `for (decl : range) statement` (C++11) |

### 循环示例：

```cpp
// while循环
int i = 0;
while (i < 10) {
    std::cout << i++ << " ";
}

// do-while循环
int num;
do {
    std::cout << "Enter number: ";
    std::cin >> num;
} while (num <= 0);

// 传统for循环
for (int j = 0; j < 5; j++) {
    std::cout << j << " ";
}

// 范围for循环（C++11）
std::vector<int> vec = {1, 2, 3, 4, 5};
for (const auto& elem : vec) {
    std::cout << elem << " ";
}

// C++20初始化for
for (int k = 10; k > 0; k--) {
    std::cout << k << " ";
}
```

---

## 六、跳转语句（Jump Statements）

无条件转移控制流。

### 语法格式：

| 语句 | 语法 |
|------|------|
| break | `break ;` |
| continue | `continue ;` |
| return | `return expression(optional) ;` |
| return | `return braced-init-list ;` (C++11) |
| goto | `goto identifier ;` |

### 跳转语句示例：

```cpp
// break语句
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    std::cout << i << " ";  // 输出: 0 1 2 3 4
}

// continue语句
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;
    std::cout << i << " ";  // 输出: 0 1 3 4
}

// return语句
int func(int x) {
    if (x < 0) return -1;
    return x * 2;
}

// 列表初始化返回（C++11）
std::vector<int> getVector() {
    return {1, 2, 3, 4, 5};
}

// goto语句
start:
    std::cout << "Loop\n";
    goto start;  // 无限循环
```

### 对象销毁规则：

跳转时会销毁作用域内但目标处不存在的对象：

```cpp
void func() {
    goto label;         // 跳过obj声明
    Object obj;         // 构造函数调用
label:
    // obj在此处未定义
}
```

---

## 七、声明语句（Declaration Statements）

在块中引入一个或多个标识符。

### 语法格式：
```cpp
block-declaration ;
```

详见[声明和初始化](https://en.cppreference.com/w/cpp/language/declarations)章节。

---

## 八、try块（Try Blocks）

捕获执行其他语句时抛出的异常。

### 语法格式：
```cpp
attr(optional) try compound-statement handler-sequence
```

详见[异常处理](https://en.cppreference.com/w/cpp/language/try_catch)章节。

```cpp
try {
    throw std::runtime_error("Error");
} catch (const std::exception& e) {
    std::cout << "Caught: " << e.what() << '\n';
}
```

---

## 九、事务内存语句（Transactional Memory）

提供事务内存支持（TM TS技术规范）。

### 语法格式：

| 语句 | 说明 |
|------|------|
| `synchronized compound-statement` | 同步块 |
| `atomic_noexcept compound-statement` | 异常时中止的原子块 |
| `atomic_cancel compound-statement` | 异常时回滚的原子块 |
| `atomic_commit compound-statement` | 异常时提交的原子块 |

```cpp
// 同步块示例
synchronized {
    shared_data = new_value;  // 原子操作
}
```

---

## 扩展概念

### 子语句（Substatements）：

语句的组成部分：

- 标签语句的语句部分
- 复合语句中的任意语句
- 选择/迭代语句的语句子句

### 包含关系：

语句S1**包含**语句S2当满足以下条件之一：

1. S2是S1的子语句
2. S1是选择/迭代语句，S2是其初始化语句
3. S1是try块，S2是其复合语句或处理程序
4. 存在S3使得S1包含S3且S3包含S2

---

## 标准参考文献

### 相关C++标准章节：

- C++23标准
  - 8 Statements (p: TBD)
- C++20标准
  - 8 Statements (p: 183-203)
- C++17标准
  - 8 Statements (p: 171-189)
- C++14标准
  - 6 Statements (p: 147-163)
- C++11标准
  - 6 Statements (p: 135-151)
- C++98/C++03标准
  - 6 Statements

---

## 相关页面

| 页面名称 | 说明 |
|----------|------|
| [C语句文档] | C语言语句对照学习 |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=cpp/language/statements&oldid=179323>
- 最后修改时间：2025年1月6日 23:57
- 离线版本获取时间：2025年2月9日 16:39

---

✅ C++语句系统在C语言基础上进行了大量扩展，增加了异常处理、范围for循环、constexpr if等现代特性。掌握各类语句的使用方法和语法规则是编写高效、安全C++代码的基础。特别是C++11/14/17/20/23各版本引入的新特性，极大提升了语言的表现力和编程效率。