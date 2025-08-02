# C语言语句（Statements）

来源：cppreference.com

## 语句概览

| 语句类型 | 语法格式 |
|----------|----------|
| **标签语句** | `label : statement` |
| **表达式语句** | `expression ;` |
| **复合语句** | `{ statement... }` |
| **选择语句** | `if`、`switch` |
| **迭代语句** | `while`、`do-while`、`for` |
| **跳转语句** | `break`、`continue`、`return`、`goto` |

语句是C程序的执行单元，按顺序执行。任何函数体都是一个**复合语句**，包含一系列语句和声明。

```c
int main(void)
{
    int n = 1;          // 声明（不是语句）
    n = n+1;            // 表达式语句
    printf("n = %d\n", n); // 表达式语句
    return 0;           // return语句
}
```

---

## 语句类型详解

### 一、语句的五大类

1. **复合语句**（Compound Statements）
2. **表达式语句**（Expression Statements）
3. **选择语句**（Selection Statements）
4. **迭代语句**（Iteration Statements）
5. **跳转语句**（Jump Statements）

> 🆕 **C23新增特性**：
> 属性说明符序列（attr-spec-seq）可应用于未标记语句

---

## 一、标签语句（Labels）

标签用于标识语句位置，可作为跳转目标。

### 标签类型：

| 语法 | 类型 | 说明 |
|------|------|------|
| `identifier :` | 普通标签 | `goto`跳转目标 |
| `case 常量表达式 :` | case标签 | `switch`语句分支 |
| `default :` | 默认标签 | `switch`默认分支 |

### 标签规则：

- 标签名在函数内唯一（函数作用域）
- 标签声明本身不影响控制流
- 标签后必须跟语句（C23前）
- C23起，标签可独立存在（视为空语句）

```c
start:                  // 普通标签
    printf("Hello\n");
    goto start;

switch(value) {
    case 1:             // case标签
        printf("One\n");
        break;
    default:            // 默认标签
        printf("Other\n");
}
```

> 🆕 **C23标签增强**：
```c
label:                  // 可独立存在
int x = 10;             // 标签后接声明
```

---

## 二、复合语句（Compound Statements / Blocks）

由花括号包围的语句和声明序列。

### 语法格式：

```c
{ 
    statement | declaration... (optional) 
}
```

> 🆕 **C23增强**：
```c
attr-spec-seq(optional) { 
    unlabeled-statement | label | declaration... (optional) 
}
```

### 特点：

- 创建新的**块作用域**
- 可在任何需要单条语句的地方使用
- 自动存储期变量在声明时初始化

```c
if (condition) {
    int n = 1;              // 块内声明
    printf("%d\n", n);
}                           // 作用域结束
```

### 变量初始化时机：

```c
int main(void) {
    {
        puts("hello");              // 表达式语句
        int n = printf("abc\n");    // 声明并初始化（打印"abc"）
        int a[n*printf("1\n")];     // VLA声明（打印"1"）
        printf("%zu\n", sizeof(a)); // 打印数组大小
    } // n和a的作用域结束
    int n = 7; // 可重用变量名
}
```

---

## 三、表达式语句（Expression Statements）

表达式后加分号构成语句。

### 语法：

```c
expression(optional) ;
```

> 🆕 **C23增强**：
```c
attr-spec-seq expression ;
```

### 常见表达式语句：

```c
x = 5;              // 赋值语句
printf("Hello");    // 函数调用语句
i++;                // 自增语句
```

### 空语句（Null Statement）：

没有表达式的语句，常用于循环或标签：

```c
while (*s++ != '\0')
    ; // 空语句，等待字符串结束

label: ;            // 空语句带标签
int x = 10;         // 标签后接声明（C23）
```

> ⚠️ **C23注意**：
```c
[[deprecated]] ;    // 不是表达式语句，而是属性声明
```

---

## 四、选择语句（Selection Statements）

根据表达式值选择执行路径。

### 语法格式：

| 语句 | 语法 |
|------|------|
| if语句 | `if (expression) statement` |
| if-else语句 | `if (expression) statement else statement` |
| switch语句 | `switch (expression) statement` |

> 🆕 **C23增强**：
所有选择语句支持属性说明符。

### if语句示例：

```c
if (x > 0) {
    printf("Positive\n");
} else if (x < 0) {
    printf("Negative\n");
} else {
    printf("Zero\n");
}
```

### switch语句示例：

```c
switch (grade) {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    default:
        printf("Unknown\n");
}
```

---

## 五、迭代语句（Iteration Statements）

重复执行语句。

### 语法格式：

| 循环类型 | 语法 |
|----------|------|
| while循环 | `while (expression) statement` |
| do-while循环 | `do statement while (expression);` |
| for循环 | `for (init-clause; expression; expression) statement` |

> 🆕 **C23增强**：
所有循环语句支持属性说明符。

### 循环示例：

```c
// while循环
int i = 0;
while (i < 10) {
    printf("%d ", i++);
}

// do-while循环
do {
    printf("Enter number: ");
    scanf("%d", &num);
} while (num <= 0);

// for循环（传统）
for (int j = 0; j < 5; j++) {
    printf("%d ", j);
}

// for循环（C99+声明）
for (int k = 10; k > 0; k--) {
    printf("%d ", k);
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
| goto | `goto identifier ;` |

> 🆕 **C23增强**：
所有跳转语句支持属性说明符。

### 跳转语句示例：

```c
// break语句
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    printf("%d ", i);  // 输出: 0 1 2 3 4
}

// continue语句
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;
    printf("%d ", i);  // 输出: 0 1 3 4
}

// return语句
int func(int x) {
    if (x < 0) return -1;
    return x * 2;
}

// goto语句
start:
    printf("Loop\n");
    goto start;  // 无限循环
```

---

## 扩展知识详解

### 一、作用域规则

```c
void func() {
    int x = 1;          // 外层作用域
    {
        int x = 2;      // 内层作用域，遮蔽外层
        printf("%d\n", x); // 输出: 2
    }
    printf("%d\n", x);  // 输出: 1
}
```

### 二、VLA（变长数组）初始化

```c
void func(int n) {
    int arr[n];         // VLA声明
    for (int i = 0; i < n; i++) {
        arr[i] = i;     // 初始化
    }
}
```

### 三、循环控制流程

```c
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (j == 1) continue;  // 跳过内层循环当前迭代
        if (i == 2) break;     // 跳出内层循环
        printf("i=%d j=%d\n", i, j);
    }
}
```

### 四、switch语句深入

```c
switch (value) {
    case 1:
    case 2:             // 贯穿执行
        printf("Small\n");
        // fallthrough
    case 3:
        printf("Medium\n");
        break;
    default:
        printf("Large\n");
}
```

---

## 标准参考文献

### 各版本C标准对语句的定义：

- **C23标准 (ISO/IEC 9899:2024)**
  - 6.8 语句和块

- **C17标准 (ISO/IEC 9899:2018)**
  - 6.8 语句和块 (p: 106-112)

- **C11标准 (ISO/IEC 9899:2011)**
  - 6.8 语句和块 (p: 146-154)

- **C99标准 (ISO/IEC 9899:1999)**
  - 6.8 语句和块 (p: 131-139)

- **C89/C90标准 (ISO/IEC 9899:1990)**
  - 3.6 语句

---

## 相关页面

| 页面名称 | 说明 |
|----------|------|
| [C++语句文档] | C++语言语句对照学习 |

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=c/language/statements&oldid=179343>
- 最后修改时间：2025年1月7日 23:07
- 离线版本获取时间：2025年2月9日 16:39

---

✅ 熟练掌握C语言各类语句是编写结构化程序的基础。从简单的表达式语句到复杂的控制结构，每种语句都有其特定用途和语法规则。特别是C23标准引入的属性支持和标签增强，进一步提升了语言的表达能力和代码质量。