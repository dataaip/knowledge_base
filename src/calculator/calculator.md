# 科学计算器的多种实现方法

本文实现一个能解析复杂数学表达式的科学计算器，支持：

- 基本运算（+, -, *, /）

- 高级运算（乘方 ^, 阶乘 !）

- 函数调用（sin(), cos()等）

- 括号优先级

- 嵌套表达式（如 (2+3)*sin(4^2)!）

以下是实现完整科学计算器的几种主要方法，每种方法都有其独特的特点和适用场景：

## 一、栈求值法- 基于调度场算法 (Shunting Yard Algorithm)

### 1. 核心目的

**将人类易读的中缀表达式转换为计算机易处理的后缀表达式（逆波兰表示法），然后使用栈计算后缀表达式值**

- 中缀表达式：`3 + 4 * (5 - 2)`

- 后缀表达式：`3 4 5 2 - * +`

**转换目的**：

- 消除括号需求：后缀表达式无需括号即可明确运算顺序

- 简化计算过程：计算机可通过栈结构高效计算后缀表达式

- 统一处理规则：为编译器/解释器提供标准化的表达式处理方案

### 2. 核心原理

**数据结构与功能**：

- 输入序列：存储待处理的中缀表达式标记流（tokens）包含操作数、运算符、括号等基本元素，按原始表达式顺序排列
- 运算符栈：临时存储运算符和括号，处理优先级和结合性的核心容器
- 输出队列：存放最终的后缀表达式，接收操作数和有序运算符，队列顺序即后缀表达式顺序

**优先级与结合性规则**：

- 优先级：`^` > `*/` > `+-`（指数>乘除>加减）
- 结合性：左结合：`+ - * /`（当优先级相同时，从左向右计算）、右结合：`^`（当优先级相同时，从右向左计算）

### 3. 实现步骤

**数据结构**

- 输出队列：存放最终后缀表达式
- 运算符栈：临时存放运算符和括号

**处理规则（从左到右扫描表达式）**

- 遇到操作数（数字、变量）→ 直接加入输出队列。*例：`3` → 输出 `[3]`*

- 遇到运算符（`+ - * / ^`）。*例：处理 `+` 时，若栈顶有优先级更高的 `\*`，先弹出 `\*`*

  ```c
  // while (栈非空 and 栈顶不是左括号 and (栈顶优先级 > 当前优先级 or (优先级相同 and 左结合))) {
  //    弹出栈顶运算符加入输出队列
  // }
  // 当前运算符入栈
  ```

- 遇到左括号 `(` → 直接压入运算符栈。*例：`(` 入栈，标记子表达式开始*

- 遇到右括号 `)` 。*例：遇到 `)` 时，弹出 `(` 之前所有运算符*

  ```c
  // while 栈顶不是左括号 {
  //   弹出栈顶运算符加入输出队列 
  // }
  // 弹出左括号（丢弃不输出）
  ```

- 扫描结束 → 将栈中剩余运算符全部弹出加入输出队列

### 4. 实例解析

**例1：基础表达式 `3 + 4 * 5`**

| 当前符号 | 操作                | 输出队列      | 运算符栈 | 说明               |
| -------- | ------------------- | ------------- | -------- | ------------------ |
| `3`      | 加入输出            | `[3]`         | `[]`     | 数字直接输出       |
| `+`      | 入栈                | `[3]`         | `[+]`    | 栈空直接入栈       |
| `4`      | 加入输出            | `[3,4]`       | `[+]`    |                    |
| `*`      | 入栈（优先级>栈顶） | `[3,4]`       | `[+,*]`  | `*` 优先级高于 `+` |
| `5`      | 加入输出            | `[3,4,5]`     | `[+,*]`  |                    |
| **结束** | 弹出栈中所有运算符  | `[3,4,5,*,+]` | `[]`     | 先弹 `*` 后弹 `+`  |

**结果**：`3 4 5 * +`

---

**例2：带括号表达式 `(3 + 4) * 5`**

| 当前符号 | 操作           | 输出队列      | 运算符栈 | 说明              |
| -------- | -------------- | ------------- | -------- | ----------------- |
| `(`      | 入栈           | `[]`          | `[(]`    |                   |
| `3`      | 加入输出       | `[3]`         | `[(]`    |                   |
| `+`      | 入栈           | `[3]`         | `[(,+]`  | 栈顶是 `(` 可入栈 |
| `4`      | 加入输出       | `[3,4]`       | `[(,+]`  |                   |
| `)`      | 弹出直到 `(`   | `[3,4,+]`     | `[]`     | 弹出 `+` 丢弃 `(` |
| `*`      | 入栈           | `[3,4,+]`     | `[*]`    |                   |
| `5`      | 加入输出       | `[3,4,+,5]`   | `[*]`    |                   |
| **结束** | 弹出栈中运算符 | `[3,4,+,5,*]` | `[]`     |                   |

**结果**：`3 4 + 5 *`

---

**例3：复杂表达式 `3 * 2 ^ 3 + 4`**（假设 `^` 优先级最高且右结合）

| 当前符号 | 操作                    | 输出队列          | 运算符栈 | 说明               |
| -------- | ----------------------- | ----------------- | -------- | ------------------ |
| `3`      | 加入输出                | `[3]`             | `[]`     |                    |
| `*`      | 入栈                    | `[3]`             | `[*]`    |                    |
| `2`      | 加入输出                | `[3,2]`           | `[*]`    |                    |
| `^`      | 入栈（优先级>栈顶）     | `[3,2]`           | `[*,^]`  | `^` 优先级高于 `*` |
| `3`      | 加入输出                | `[3,2,3]`         | `[*,^]`  |                    |
| `+`      | 弹出栈顶直到优先级<当前 | `[3,2,3,^,*]`     | `[+]`    | 先弹 `^` 再弹 `*`  |
| `4`      | 加入输出                | `[3,2,3,^,*,4]`   | `[+]`    |                    |
| **结束** | 弹出栈中运算符          | `[3,2,3,^,*,4,+]` | `[]`     |                    |

**结果**：`3 2 3 ^ * 4 +`  计算顺序：`2^3=8 → 3*8=24 → 24+4=28`

---

**例4：函数处理 `max(3, 5) + 2`**

| 当前符号 | 操作               | 输出队列        | 运算符栈  | 说明           |
| -------- | ------------------ | --------------- | --------- | -------------- |
| `max`    | 入栈               | `[]`            | `[max]`   | 函数视为运算符 |
| `(`      | 入栈               | `[]`            | `[max,(]` |                |
| `3`      | 加入输出           | `[3]`           | `[max,(]` |                |
| `,`      | 忽略（参数分隔符） | `[3]`           | `[max,(]` |                |
| `5`      | 加入输出           | `[3,5]`         | `[max,(]` |                |
| `)`      | 弹出直到 `(`       | `[3,5]`         | `[max]`   | 丢弃 `(`       |
|          | 弹出栈顶函数       | `[3,5,max]`     | `[]`      | 函数加入输出   |
| `+`      | 入栈               | `[3,5,max]`     | `[+]`     |                |
| `2`      | 加入输出           | `[3,5,max,2]`   | `[+]`     |                |
| **结束** | 弹出栈中运算符     | `[3,5,max,2,+]` | `[]`      |                |

**结果**：`3 5 max 2 +`

---

**例5：将中缀表达式 `3 + 4 \* 2 / (1 - 5) ^ 2 ^ 3` 转换为后缀表达式**

| 当前符号 (Token)   | 操作                                         | 输出队列                | 运算符栈  | 解释说明                                                     |
| :----------------- | :------------------------------------------- | :---------------------- | :-------- | :----------------------------------------------------------- |
| `3`                | 操作数 -> 输出队列                           | `3`                     | ` `       |                                                              |
| `+`                | 栈空 -> 入栈                                 | `3`                     | `+`       |                                                              |
| `4`                | 操作数 -> 输出队列                           | `3 4`                   | `+`       |                                                              |
| `*`                | `*` > `+` (栈顶) -> 入栈                     | `3 4`                   | `+ *`     | `*` 优先级高于栈顶的 `+`                                     |
| `2`                | 操作数 -> 输出队列                           | `3 4 2`                 | `+ *`     |                                                              |
| `/`                | `/` == `*` (优先级), 左结合 -> 弹出 `*` 入队 | `3 4 2 *`               | `+`       | 优先级相同且 `/` 左结合。弹出 `*` 到输出。                   |
|                    | `/` > `+` (新栈顶) -> 入栈                   | `3 4 2 *`               | `+ /`     |                                                              |
| `(`                | 左括号 -> 入栈                               | `3 4 2 *`               | `+ / (`   |                                                              |
| `1`                | 操作数 -> 输出队列                           | `3 4 2 * 1`             | `+ / (`   |                                                              |
| `-`                | 栈顶是 `(`, 直接入栈                         | `3 4 2 * 1`             | `+ / ( -` | 括号内优先级最高                                             |
| `5`                | 操作数 -> 输出队列                           | `3 4 2 * 1 5`           | `+ / ( -` |                                                              |
| `)`                | 遇到 `)` -> 弹出栈顶到输出直到 `(`           | `3 4 2 * 1 5 -`         | `+ /`     | 弹出 `-` 到输出，遇到 `(`, 弹出并丢弃 `(`                    |
| `^`                | 栈顶 `/` < `^` -> 入栈                       | `3 4 2 * 1 5 -`         | `+ / ^`   | `^` 优先级高于 `/`                                           |
| `2`                | 操作数 -> 输出队列                           | `3 4 2 * 1 5 - 2`       | `+ / ^`   |                                                              |
| `^`                | `^` == `^` (优先级), **右结合** -> **入栈**  | `3 4 2 * 1 5 - 2`       | `+ / ^ ^` | **关键：`^` 是右结合！** 优先级相同但右结合时，不弹出栈顶 `^`，直接将当前 `^` 入栈。 |
| `3`                | 操作数 -> 输出队列                           | `3 4 2 * 1 5 - 2 3`     | `+ / ^ ^` |                                                              |
| **结束**           | 弹出栈中所有剩余运算符到输出队列             | `3 4 2 * 1 5 - 2 3 ^ ^` | ` `       | 依次弹出 `^`, `^`, `/`, `+` (顺序：栈顶先弹出) -> `2 3 ^ ^` -> `2 3 ^ ^ /` -> `2 3 ^ ^ / +` |
| **最终后缀表达式** | `3 4 2 * 1 5 - 2 3 ^ ^ / +`                  |                         |           |                                                              |

**如何计算后缀表达式？**

得到后缀表达式 `3 4 2 * 1 5 - 2 3 ^ ^ / +` 后，计算就很简单了：

初始化一个空栈。

从左到右扫描后缀表达式：

- 遇到操作数：压入栈。
- 遇到运算符：从栈顶弹出所需数量的操作数（二元运算符弹出两个，一元函数弹出一个），进行运算，将结果压回栈。

扫描结束后，栈顶元素就是最终结果。

### 5. 优缺点

**优点**：结构清晰、易于处理运算符优先级、支持复杂表达式

**缺点**：需要显式处理括号、函数处理较复杂

### 6. 算法特性

**时间复杂度**：O(n) 线性扫描表达式

**空间复杂度**：O(n) 栈和队列的存储需求

**确定性**：同一表达式每次转换结果相同

**可扩展性**：支持自定义函数和运算符

### 7. 典型应用场景

- 编程语言编译器（表达式解析阶段）
- 科学计算器软件（如Windows计算器）
- 数据库查询优化器（SQL条件表达式处理）
- 电子表格公式计算（Excel等）
- 数学软件（MATLAB, Mathematica）

通过调度场算法，计算机得以高效处理人类直观的数学表达式，架起了自然数学表示与机器高效执行之间的关键桥梁。其设计体现了迪杰斯特拉"分而治之"的思想精髓，是算法设计中栈结构应用的经典范例。

## 二、递归下降解析 (Recursive Descent Parsing)

### 1. 核心目的

构建一个自顶向下的语法分析器，将输入的符号序列（如源代码）转换为抽象语法树(AST)，用于编译器/解释器的前端处理。核心目标是直接映射文法规则到代码结构，实现语法验证和树形结构构建

### 2. 核心原理

**基于上下文无关文法（CFG）设计解析器**

- CFG 是一种形式文法，用规则描述语言结构（如数学表达式），与上下文无关（规则不依赖周围符号）。

**递归函数映射-每个文法规则对应一个解析函数**

- `expression()` 函数处理 expression 规则，`term()` 函数处理 term 规则，以此类推。
- 函数通过递归调用处理嵌套结构，函数内部可能调用其他规则函数（如 `expression()` 调用 `term()`），形成递归，处理嵌套结构（如 `(1+2)*3`）。

**自顶向下分析**

- 从最高层表达式开始逐级分解，从最高层开始先尝试匹配 expression，逐步拆解到 term → factor → base。
- 示例分析 `1 + 2 * 3`：调用 `expression()` → 匹配 `term（1）`，遇到 `+` → 继续匹配 `term（2*3）`，在 term 中递归匹配 `factor（2`）和 `* factor（3）`。

**LL(1)解析**

- 简单高效仅需预读一个 Token 即可决策，即单 Token 预读（Lookahead=1）根据当前 Token（如 +、*）决定使用哪条规则，无需回溯。

**CFG 设计解析器**

```text
表示一个 expression 由 term 组成，后跟零或多个 +/- 和 term

expression → term { ('+' | '-') term }  // 加减运算（左结合）
term → factor { ('*' | '/') factor }    // 乘除运算（左结合）
factor → base [ '^' factor ] | '!' factor  // 幂（右结合）或阶乘
base → number | '(' expression ')' | function '(' expression ')'  // 数字/子表达式/函数调用

// 优先级控制：从低到高：expression（加减）→ term（乘除）→ factor（幂/阶乘）→ base。
// 结合性：+ - * / 左结合`1+2+3 → (1+2)+3`。^ 右结合`2^3^2 → 2^(3^2)`。
```

**决策表**

| 当前 Token |       动作        |
| :--------: | :---------------: |
|  `+`/`-`   |  继续匹配 `term`  |
|  `*`/`/`   | 继续匹配 `factor` |
|    `(`     |   进入子表达式    |

### 3. 实现步骤（C语言）

**词法分析器（Lexer）**

```c
typedef enum {
    TOK_NUM, TOK_ADD, TOK_SUB, TOK_MUL, TOK_DIV,
    TOK_POW, TOK_FACT, TOK_LPAREN, TOK_RPAREN,
    TOK_FUNC, TOK_END, TOK_ERR
} TokenType;

typedef struct {
    TokenType type;
    double value;    // 数字值
    char func[10];   // 函数名
} Token;

Token get_next_token(const char **input) {
    while (isspace(**input)) (*input)++;  // 跳过空白
    
    if (**input == '\0') return (Token){TOK_END, 0};
    
    // 数字解析
    if (isdigit(**input) || **input == '.') {
        char *end;
        double val = strtod(*input, &end);
        *input = end;
        return (Token){TOK_NUM, val};
    }
    
    // 函数解析
    if (isalpha(**input)) {
        Token tok = {TOK_FUNC};
        int i = 0;
        while (isalpha(**input)) 
            tok.func[i++] = *(*input)++;
        tok.func[i] = '\0';
        return tok;
    }
    
    // 运算符解析
    switch (*(*input)++) {
        case '+': return (Token){TOK_ADD};
        case '-': return (Token){TOK_SUB};
        case '*': return (Token){TOK_MUL};
        case '/': return (Token){TOK_DIV};
        case '^': return (Token){TOK_POW};
        case '!': return (Token){TOK_FACT};
        case '(': return (Token){TOK_LPAREN};
        case ')': return (Token){TOK_RPAREN};
        default:  return (Token){TOK_ERR};
    }
}
```

---

**递归下降解析器**

```c
double parse_expression(const char **input);
double parse_term(const char **input);
double parse_factor(const char **input);
double parse_base(const char **input);

// expression → term { ('+' | '-') term }
double parse_expression(const char **input) {
    double left = parse_term(input);
    Token tok;
    
    while ((tok = get_next_token(input)).type == TOK_ADD || 
           tok.type == TOK_SUB) {
        double right = parse_term(input);
        left = (tok.type == TOK_ADD) ? left + right : left - right;
    }
    return left;
}

// term → factor { ('*' | '/') factor }
double parse_term(const char **input) {
    double left = parse_factor(input);
    Token tok;
    
    while ((tok = get_next_token(input)).type == TOK_MUL || 
           tok.type == TOK_DIV) {
        double right = parse_factor(input);
        if (tok.type == TOK_MUL) left *= right;
        else if (right != 0) left /= right;
        else { printf("Division by zero!"); exit(1); }
    }
    return left;
}

// factor → base [ '^' factor ] | '!' factor
double parse_factor(const char **input) {
    Token tok = get_next_token(input);
    
    // 处理阶乘（前缀形式）
    if (tok.type == TOK_FACT) {
        double val = parse_factor(input);
        int n = (int)val;
        if (n < 0 || n != val) {
            printf("Invalid factorial operand!");
            exit(1);
        }
        int fact = 1;
        for (int i = 1; i <= n; i++) fact *= i;
        return fact;
    }
    
    // 回退并解析底数
    *input -= (tok.type != TOK_END);  // 回退token
    double base = parse_base(input);
    
    // 处理指数
    tok = get_next_token(input);
    if (tok.type == TOK_POW) {
        double exp = parse_factor(input);
        return pow(base, exp);
    }
    
    *input -= (tok.type != TOK_END);  // 回退token
    return base;
}

// base → number | '(' expression ')' | function '(' expression ')'
double parse_base(const char **input) {
    Token tok = get_next_token(input);
    
    if (tok.type == TOK_NUM) return tok.value;
    
    if (tok.type == TOK_LPAREN) {
        double expr = parse_expression(input);
        if (get_next_token(input).type != TOK_RPAREN) {
            printf("Mismatched parentheses!");
            exit(1);
        }
        return expr;
    }
    
    if (tok.type == TOK_FUNC) {
        if (get_next_token(input).type != TOK_LPAREN) {
            printf("Expected '(' after function!");
            exit(1);
        }
        double arg = parse_expression(input);
        if (get_next_token(input).type != TOK_RPAREN) {
            printf("Expected ')' after function argument!");
            exit(1);
        }
        
        // 函数实现
        if (strcmp(tok.func, "sin") == 0) return sin(arg);
        if (strcmp(tok.func, "cos") == 0) return cos(arg);
        if (strcmp(tok.func, "exp") == 0) return exp(arg);
        printf("Unknown function: %s", tok.func);
        exit(1);
    }
    
    printf("Unexpected token in expression");
    exit(1);
}

double evaluate_expression(const char *expr) {
    return parse_expression(&expr);
}
```

### 4. 实例解析

**例1：解析输入表达式 3 * (1 + 2)!**

按照 递归下降解析器 的工作流程，逐步拆解这个表达式的解析过程。以下是对每个步骤的详细说明

初始状态：

```text
输入表达式：3 * (1 + 2)!

当前 Token 流（假设已分词）：[number(3), '*', '(', number(1), '+', number(2), ')', '!']

解析入口：从最高层规则 expression() 开始
```

解析步骤分解：

```text
(1) 进入 expression() 规则：expression → term { ('+' | '-') term }
- 先尝试匹配一个 term，然后检查后续是否是 + 或 -，循环匹配。
- 执行：调用 term() 解析第一个 term。

(2) 进入 term() 规则：term → factor { ('*' | '/') factor }
- 先匹配一个 factor，然后检查后续是否是 * 或 /，循环匹配。
- 执行：调用 factor() 解析第一个 factor。

(3) 进入 factor() 规则：factor → base [ '^' factor ] | '!' factor
- 先匹配一个 base，然后检查后续是否是 ^（幂）或 !（阶乘）。
- 执行：调用 base() 解析 base。

(4) 进入 base() 规则：base → number | '(' expression ')' | function '(' expression ')' 可能是数字、括号表达式或函数调用。
- 当前 Token：number(3)：匹配 number，消耗 number(3)，返回 3。
- 返回到 factor()：base 返回 3，后续无 ^ 或 !，因此 factor() 返回 3。
- 返回到 term()：factor 返回 3，检查下一个 Token 是 *，进入 * 分支。

(5) 处理 *
- 当前 Token：'*' 消耗 '*'，继续调用 factor() 解析右侧。

(6) 再次进入 factor()
- 当前 Token：'(' 匹配 base 的 '(' expression ')' 分支：
- 消耗 '('。
- 调用 expression() 解析括号内的内容。

(7) 解析括号内 (1 + 2)
- 进入 expression()：调用 term() → factor() → base() → number(1)，返回 1。
- 下一个 Token '+'，进入 + 分支：消耗 '+'，调用 term() → factor() → base() → number(2)，返回 2。
- 组合结果：1 + 2。
- 消耗 ')'，括号表达式返回 3（因为 1 + 2 = 3）。

(8) 处理 ! 阶乘
- 返回到 factor()：base 返回 3，下一个 Token 是 '!'，进入 '!' factor 分支：
- 消耗 '!'，调用 factor() 解析阶乘的右侧（但阶乘是单目运算符，无需右侧）。
- 直接计算 3!（阶乘），结果为 6。

(9) 完成 term()
- 左侧 factor 是 3，右侧 * 和 factor 是 6，组合为 3 * 6。
- term() 返回 18。

(10) 完成 expression()
- expression() 返回 term() 的结果 18。

关键点总结：

优先级与结合性
- `*` 比 `+` 优先级高，但这里通过文法层级（`term` vs `expression`）隐式实现。
- `!` 是后缀运算符，优先级最高（在 `factor` 层处理）。
递归与回溯
- 无回溯（LL(1) 特性），每一步仅需预读一个 Token 即可决策。
括号处理
- `(` 触发子表达式解析，递归调用 `expression()`，直到遇到 `)`。
函数扩展性：
- 如需支持函数（如 `sin(1+2)`），只需在 `base` 规则中添加 `function '(' expression ')'` 分支。
```

解析过程总结：

| 步骤 |    当前规则    |    处理内容    |                        动作                         |   结果/返回值    |
| :--: | :------------: | :------------: | :-------------------------------------------------: | :--------------: |
|  1   | `expression()` | `3 * (1 + 2)!` |                    调用 `term()`                    |        -         |
|  2   |    `term()`    |   `3 * ...`    |                   调用 `factor()`                   |        -         |
|  3   |   `factor()`   |      `3`       |          调用 `base()` → 匹配 `number(3)`           |       `3`        |
|  4   |    `term()`    |  `* (1 + 2)!`  |            遇到 `*`，继续调用 `factor()`            |        -         |
|  5   |   `factor()`   |   `(1 + 2)!`   |   调用 `base()` → 匹配 `'('`，进入 `expression()`   |        -         |
|  6   | `expression()` |    `1 + 2`     | 调用 `term()` → `factor()` → `base()` → `number(1)` |       `1`        |
|  7   | `expression()` |     `+ 2`      |        遇到 `+`，调用 `term()` → `number(2)`        |   `1 + 2 = 3`    |
|  8   |   `factor()`   |      `)!`      |      `base` 返回 `3`，遇到 `!`，计算阶乘 `3!`       |       `6`        |
|  9   |    `term()`    |     `* 6`      |                    组合 `3 * 6`                     |       `18`       |
|  10  | `expression()` |       -        |                返回 `term()` 的结果                 | 最终结果：18 |

可视化解析树：

```text
expression
│
└── term (3 * ...)
    │
    ├── factor (3)
    │   └── base (number 3)
    │
    └── * factor ((1 + 2)!)
        │
        ├── base ( (1 + 2) )
        │   └── expression (1 + 2)
        │       │
        │       ├── term (1)
        │       │   └── factor (1)
        │       │       └── base (number 1)
        │       │
        │       └── + term (2)
        │           └── factor (2)
        │               └── base (number 2)
        │
        └── ! factor
            └── (阶乘计算 3! = 6)
```

---

**例2：解析输入表达式 3 + sin(4^2)!**

初始化状态-词法分析：

分解表达式 `3 + sin(4^2)!` 为 TOKEN `[3] [+] [sin] [(] [4] [^] [2] [)] [!]`

解析过程：

```text
(1) parse_expression → parse_term → parse_factor

(2) parse_factor：遇到!，解析后续因子得sin(4^2)

(3) parse_base：识别函数sin(

(4) 内部解析4^2：

(5) parse_base → 4

(6) parse_factor → parse_base → 2

(7) 计算4^2=16

(8) 计算sin(16)≈0.2879

(9) 计算阶乘0.2879!（实际应校验为整数，此处简化）

(10) 回到parse_expression：3 + 0.2879!
```

### 5. 优缺点

**优点**：代码结构清晰易读、文法规则直接映射函数、易于扩展新语法（如新增运算符）、天然支持嵌套结构

**缺点**：递归深度受限（栈溢出风险）、需手动处理左递归问题、错误恢复机制复杂、回溯效率低（非预测文法）

### 6. 算法特性

**优先级处理**：优先级从低到高：`+-` < `*/` < `^!` expression -> term +- -> factor */ -> base ^ !

**结合性处理**：左结合如加减乘除（循环实现）、右结合如乘方（递归实现）

**方向性**：自顶向下（Top-down）

**错误检测**：括号不匹配、函数调用格式错误、除零操作、非法阶乘操作

**文法类型**：严格LL(k)（通常k=1）文法规则直接转换为代码结构

**空间复杂度**：O(d)（d=语法嵌套深度）

**时间复杂度**：O(n)（无回溯时）O(n)时间复杂度处理表达式

**灵活扩展**：新增运算符只需修改局部函数

**关键优化策略**：

- 尾递归优化：将递归转换为循环（如表达式/项解析）
- 左递归消除：改写文法规则避免无限递归
- 错误恢复：同步令牌集（Synchronization Tokens）、错误提示精确定位
- 语法树生成（替代直接计算）

### 7. 典型应用场景

- 科学计算器：处理复杂数学表达式
- 编译器前端：编程语言语法分析
- 配置文件解析：JSON/XML解析器
- 查询引擎：SQL查询解析
- 数学公式解释器：MATLAB/Excel等表格软件
- 领域特定语言：Jinja模板引擎
- 网络协议：HTTP/DNS报文解码

**经典案例**：SQLite的SQL解析器使用手工编写的递归下降解析器

**实际应用建议**：对于超复杂表达式，可结合运算符优先级表（Operator-Precedence Parsing）或生成语法树进行多次求值，避免递归深度限制问题。

## 3. 抽象语法树 (Abstract Syntax Tree, AST)

### 原理
1. 词法分析：将输入分解为token流
2. 语法分析：构建语法树
3. 树遍历求值

### 节点类型
- 操作符节点：+, -, *, /, ^
- 函数节点：sin, cos, log等
- 数值节点
- 括号节点

### 优点
- 最灵活的方法
- 支持复杂语法分析
- 易于优化和转换
- 可生成中间代码

### 缺点
- 实现最复杂
- 内存开销较大
- 需要完整解析器

## 4. 表驱动解析 (Table-Driven Parsing)

### 原理
- 使用**有限状态机**(FSM)
- 状态转换表驱动解析
- 结合运算符优先级表

### 组件
- 状态表：定义状态转换
- 优先级表：处理运算符优先级
- 语义动作：执行计算

### 优点
- 高效且可预测
- 易于添加新运算符
- 适合嵌入式系统

### 缺点
- 表结构可能复杂
- 函数支持有限
- 错误恢复困难

## 5. 混合方法 (Hybrid Approach)

### 常见组合
1. **栈 + 递归**：主表达式用栈处理，函数参数递归计算
2. **AST + 访客模式**：构建AST后使用访客模式求值
3. **递归下降 + 优先级爬升**：结合递归下降和运算符优先级

### 示例实现
```c
double expression() {
    double result = term();
    while (current_token == '+' || current_token == '-') {
        char op = current_token;
        next_token();
        double right = term();
        result = (op == '+') ? result + right : result - right;
    }
    return result;
}

double term() {
    double result = factor();
    while (current_token == '*' || current_token == '/') {
        char op = current_token;
        next_token();
        double right = factor();
        result = (op == '*') ? result * right : result / right;
    }
    return result;
}

double factor() {
    double result = base();
    while (current_token == '^') {
        next_token();
        double exponent = factor();
        result = pow(result, exponent);
    }
    if (current_token == '!') {
        next_token();
        result = factorial(result);
    }
    return result;
}
```

## 6. 基于词法分析的直接求值 (Lexer-Based Direct Evaluation)

### 原理
- 单次扫描输入
- 即时计算部分结果
- 维护当前值和运算符状态

### 特点
- 高效但有限
- 仅支持左结合运算
- 难以处理优先级和括号

## 方法比较

| 方法 | 复杂度 | 灵活性 | 性能 | 适合场景 |
|------|--------|--------|------|----------|
| 栈求值 | 中等 | 中等 | 高 | 通用计算器 |
| 递归下降 | 中等 | 高 | 中 | 教学/扩展型计算器 |
| AST | 高 | 很高 | 中 | 编译器/复杂系统 |
| 表驱动 | 中高 | 低 | 很高 | 嵌入式系统 |
| 混合方法 | 可变 | 高 | 高 | 专业计算器 |
| 直接求值 | 低 | 很低 | 很高 | 简单计算器 |

## 选择建议

1. **通用科学计算器**：栈求值法或递归下降法
2. **高性能需求**：表驱动或直接求值
3. **教育目的**：递归下降（易于理解）
4. **专业应用**：AST方法（最大灵活性）
5. **嵌入式系统**：表驱动或直接求值

实际实现中，栈求值法和递归下降法最为常用，它们平衡了实现复杂度、性能和功能扩展性。本文第一个实现使用的就是栈求值法，而混合方法在专业计算软件中也很常见。