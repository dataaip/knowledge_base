# 科学计算器的多种实现方法

本文实现一个能解析复杂数学表达式的科学计算器，支持：

- 基本运算（`+`, `-`, `*`, `/`）

- 高级运算（乘方 `^`, 阶乘 `!`）

- 函数调用（`sin()`, `cos()`等）

- 括号优先级

- 嵌套表达式（如 `(2+3)*sin(4^2)!`）

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

- 遇到操作数：压入栈
- 遇到运算符：从栈顶弹出所需数量的操作数（二元运算符弹出两个，一元函数弹出一个），进行运算，将结果压回栈

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

构建一个自顶向下的语法分析器，将输入的符号序列（如源代码）转换为抽象语法树(AST)，用于编译器/解释器的前端处理。核心目标是直接映射文法规则到代码结构，实现语法验证和树形结构构建。

### 2. 核心原理

**基于上下文无关文法（CFG）设计解析器**

- CFG 是一种形式文法，用规则描述语言结构（如数学表达式），与上下文无关（规则不依赖周围符号）

**递归函数映射-每个文法规则对应一个解析函数**

- `expression()` 函数处理 expression 规则，`term()` 函数处理 term 规则，以此类推
- 函数通过递归调用处理嵌套结构，函数内部可能调用其他规则函数（如 `expression()` 调用 `term()`），形成递归，处理嵌套结构（如 `(1+2)*3`）

**自顶向下分析**

- 从最高层表达式开始逐级分解，从最高层开始先尝试匹配 expression，逐步拆解到 term → factor → base
- 示例分析 `1 + 2 * 3`：调用 `expression()` → 匹配 `term（1）`，遇到 `+` → 继续匹配 `term（2*3）`，在 term 中递归匹配 `factor（2`）和 `* factor（3）`

**LL(1)解析**

- 简单高效仅需预读一个 Token 即可决策，即单 Token 预读（Lookahead=1）根据当前 Token（如 +、*）决定使用哪条规则，无需回溯

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
- 先尝试匹配一个 term，然后检查后续是否是 + 或 -，循环匹配
- 执行：调用 term() 解析第一个 term

(2) 进入 term() 规则：term → factor { ('*' | '/') factor }
- 先匹配一个 factor，然后检查后续是否是 * 或 /，循环匹配
- 执行：调用 factor() 解析第一个 factor

(3) 进入 factor() 规则：factor → base [ '^' factor ] | '!' factor
- 先匹配一个 base，然后检查后续是否是 ^（幂）或 !（阶乘）
- 执行：调用 base() 解析 base

(4) 进入 base() 规则：base → number | '(' expression ')' | function '(' expression ')' 可能是数字、括号表达式或函数调用
- 当前 Token：number(3)：匹配 number，消耗 number(3)，返回 3
- 返回到 factor()：base 返回 3，后续无 ^ 或 !，因此 factor() 返回 3
- 返回到 term()：factor 返回 3，检查下一个 Token 是 *，进入 * 分支

(5) 处理 *
- 当前 Token：'*' 消耗 '*'，继续调用 factor() 解析右侧

(6) 再次进入 factor()
- 当前 Token：'(' 匹配 base 的 '(' expression ')' 分支：
- 消耗 '('
- 调用 expression() 解析括号内的内容

(7) 解析括号内 (1 + 2)
- 进入 expression()：调用 term() → factor() → base() → number(1)，返回 1
- 下一个 Token '+'，进入 + 分支：消耗 '+'，调用 term() → factor() → base() → number(2)，返回 2
- 组合结果：1 + 2
- 消耗 ')'，括号表达式返回 3（因为 1 + 2 = 3）

(8) 处理 ! 阶乘
- 返回到 factor()：base 返回 3，下一个 Token 是 '!'，进入 '!' factor 分支：
- 消耗 '!'，调用 factor() 解析阶乘的右侧（但阶乘是单目运算符，无需右侧）
- 直接计算 3!（阶乘），结果为 6

(9) 完成 term()
- 左侧 factor 是 3，右侧 * 和 factor 是 6，组合为 3 * 6
- term() 返回 18

(10) 完成 expression()
- expression() 返回 term() 的结果 18

关键点总结：

优先级与结合性
- `*` 比 `+` 优先级高，但这里通过文法层级（`term` vs `expression`）隐式实现
- `!` 是后缀运算符，优先级最高（在 `factor` 层处理）
递归与回溯
- 无回溯（LL(1) 特性），每一步仅需预读一个 Token 即可决策
括号处理
- `(` 触发子表达式解析，递归调用 `expression()`，直到遇到 `)`
函数扩展性：
- 如需支持函数（如 `sin(1+2)`），只需在 `base` 规则中添加 `function '(' expression ')'` 分支
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

## 三、 抽象语法树 (Abstract Syntax Tree, AST)

### 1. 核心目的

抽象语法树（AST）是数学表达式在计算机中的结构化表示，它将表达式的 **语法结构** 和 **运算逻辑** 分离，是科学计算器的核心数据结构。AST 的主要作用是为数学表达式提供一种 中间表示，便于后续处理：

**复杂表达式解析**：处理嵌套结构（如 `sin(2^(x+1))`）、多级运算符优先级（如 `1 + 2 * 3`）。

**多阶段处理**：解析阶段（字符串 → AST）和 求值阶段（AST → 计算结果）分离，提高灵活性。

**高级功能扩展**：支持 变量绑定（如 `x = 5`）、符号微分（如 `d/dx (x^2)`）、方程求解。

**表达式优化**：常量折叠（`2 * 3 → 6`）、代数化简（`x + 0 → x`）。

### 2. 核心原理

**输入字符串 → Token 流（词法分析 Lexer）**

- 任务：将原始字符串拆分成有意义的 Token（最小语法单元）

- 关键点：识别数字、运算符、括号、函数名（如 `sin`）。忽略空格、处理负数（`-5` vs `5 - 3`）

- 示例：

  ```text
  输入："3 * (1 + 2)!"
  Token 流：
  [
      { type: 'NUMBER', value: 3 },
      { type: 'OPERATOR', value: '*' },
      { type: 'LPAREN', value: '(' },
      { type: 'NUMBER', value: 1 },
      { type: 'OPERATOR', value: '+' },
      { type: 'NUMBER', value: 2 },
      { type: 'RPAREN', value: ')' },
      { type: 'OPERATOR', value: '!' }
  ]
  ```

**Token 流 → AST（语法分析 Parser）**

- 任务：按照 文法规则 将 Token 流转换成 树形结构（AST）

- 示例（`3 * (1 + 2)! `的 AST）：

  ```text
          *
       / \
      3   !
         /
        +
       / \
      1   2
  ```

- 文法规则（递归下降解析）：

  ```text
  expression → term { ('+' | '-') term }
  term → factor { ('*' | '/') factor }
  factor → base [ '^' factor ] | '!' factor
  base → number | '(' expression ')' | function '(' expression ')'
  ```

- 解析过程：从 `expression` 开始，递归匹配 `term`、`factor`、`base`。遇到 ( 进入子表达式，遇到 ) 返回。运算符优先级通过 文法层级 隐式实现（如 `*` 比 `+` 优先级高）

**AST → 求值（树遍历求值）**

- 任务：递归遍历 AST，计算表达式结果

- 示例（计算 `3 * (1 + 2)!`）：

  ```text
  1. 访问 * 节点 → 先计算左子树 3，再计算右子树 !
  2. 计算 ! → 先计算子节点 +
  3. 计算 + → 1 + 2 = 3
  4. 计算 3! = 6
  5. 最终结果：3 * 6 = 18
  ```

**高级功能实现**

- 变量绑定：AST 扩展，增加 VARIABLE 节点（如 `x`）、环境（Environment）存储变量值的字典 { `'x': 5` }、求值阶段遇到变量时从环境中查找值

- 符号微分：对 AST 进行规则匹配（如 `d/dx (x^2) → 2 * x`），示例规则 `d/dx (x) → 1`、`d/dx (sin(x)) → cos(x)`

- 常量折叠优化：AST 遍历：在求值前优化树结构，示例 `2 * 3 → 6`（直接替换为 NUMBER 节点）、`x + 0 → x`（删除冗余操作）

**原理流程总结**

|     阶段     |      输入      |     输出     |      关键组件      |
| :----------: | :------------: | :----------: | :----------------: |
| **词法分析** | `"3 * (1+2)!"` |   Token 流   | Lexer（正则匹配）  |
| **语法分析** |    Token 流    |     AST      | Parser（递归下降） |
|   **求值**   |      AST       |   计算结果   |  Tree Interpreter  |
|   **优化**   |      AST       | 优化后的 AST |  Constant Folding  |

### 3. 实现步骤 (C语言)

**节点类型定义**

```c
typedef enum {
    NODE_NUMBER,
    NODE_BINARY_OP,
    NODE_UNARY_OP,
    NODE_FUNCTION,
    NODE_PAREN // 实际可省略，用于可视化
} NodeType;

typedef enum {
    OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_POW, OP_FACT
} OperatorType;

typedef struct ASTNode {
    NodeType type;
    union {
        double number;  // 数值节点
        struct {        // 操作符节点
            OperatorType op_type;
            struct ASTNode *left;
            struct ASTNode *right;
        };
        struct {        // 函数节点
            char func_name[10];
            struct ASTNode *argument;
        };
    };
} ASTNode;
```

---

**词法分析器 (Lexer)**

```c
typedef enum {
    TOK_NUMBER, TOK_PLUS, TOK_MINUS, TOK_MULT, TOK_DIV,
    TOK_POW, TOK_FACT, TOK_LPAREN, TOK_RPAREN,
    TOK_FUNCTION, TOK_END, TOK_ERROR
} TokenType;

typedef struct {
    TokenType type;
    double value;
    char func[10];
    int position;  // 错误定位
} Token;

Token get_next_token(const char **input) {
    static int pos = 0;
    while (isspace(**input)) { (*input)++; pos++; }
    
    if (**input == '\0') 
        return (Token){TOK_END, 0, "", pos};
    
    // 数字解析
    if (isdigit(**input) || **input == '.') {
        char *end;
        double val = strtod(*input, &end);
        int len = end - *input;
        *input = end;
        Token tok = {TOK_NUMBER, val, "", pos};
        pos += len;
        return tok;
    }
    
    // 函数解析
    if (isalpha(**input)) {
        Token tok = {TOK_FUNCTION, 0, "", pos};
        int i = 0;
        while (isalpha(**input)) 
            tok.func[i++] = *(*input)++;
        tok.func[i] = '\0';
        pos += i;
        return tok;
    }
    
    // 运算符解析
    char c = *(*input)++;
    pos++;
    switch(c) {
        case '+': return (Token){TOK_PLUS, 0, "", pos-1};
        case '-': return (Token){TOK_MINUS, 0, "", pos-1};
        case '*': return (Token){TOK_MULT, 0, "", pos-1};
        case '/': return (Token){TOK_DIV, 0, "", pos-1};
        case '^': return (Token){TOK_POW, 0, "", pos-1};
        case '!': return (Token){TOK_FACT, 0, "", pos-1};
        case '(': return (Token){TOK_LPAREN, 0, "", pos-1};
        case ')': return (Token){TOK_RPAREN, 0, "", pos-1};
        default:  return (Token){TOK_ERROR, 0, "", pos-1};
    }
}
```

---

**语法分析器 (Parser)**

```c
ASTNode* parse_expression(const char **input);
ASTNode* parse_term(const char **input);
ASTNode* parse_factor(const char **input);
ASTNode* parse_base(const char **input);

// 表达式解析: term { (+|-) term }
ASTNode* parse_expression(const char **input) {
    ASTNode *left = parse_term(input);
    Token tok;
    
    while (1) {
        tok = get_next_token(input);
        if (tok.type != TOK_PLUS && tok.type != TOK_MINUS) {
            *input -= 1; // 回退token
            break;
        }
        
        ASTNode *node = malloc(sizeof(ASTNode));
        node->type = NODE_BINARY_OP;
        node->op_type = (tok.type == TOK_PLUS) ? OP_ADD : OP_SUB;
        node->left = left;
        node->right = parse_term(input);
        left = node;
    }
    return left;
}

// 因子解析: base [ '^' factor ] | '!' factor
ASTNode* parse_factor(const char **input) {
    Token tok = get_next_token(input);
    
    // 处理阶乘（后缀操作符）
    if (tok.type == TOK_FACT) {
        ASTNode *node = malloc(sizeof(ASTNode));
        node->type = NODE_UNARY_OP;
        node->op_type = OP_FACT;
        node->left = parse_factor(input); // 递归解析操作数
        node->right = NULL;
        return node;
    }
    
    // 回退并解析底数
    *input -= 1;
    ASTNode *base = parse_base(input);
    
    // 检查指数
    tok = get_next_token(input);
    if (tok.type == TOK_POW) {
        ASTNode *node = malloc(sizeof(ASTNode));
        node->type = NODE_BINARY_OP;
        node->op_type = OP_POW;
        node->left = base;
        node->right = parse_factor(input); // 右递归处理指数
        return node;
    }
    
    *input -= 1; // 回退非指数token
    return base;
}

// 基础元素解析
ASTNode* parse_base(const char **input) {
    Token tok = get_next_token(input);
    
    if (tok.type == TOK_NUMBER) {
        ASTNode *node = malloc(sizeof(ASTNode));
        node->type = NODE_NUMBER;
        node->number = tok.value;
        return node;
    }
    
    if (tok.type == TOK_LPAREN) {
        ASTNode *expr = parse_expression(input);
        Token next = get_next_token(input);
        if (next.type != TOK_RPAREN) {
            fprintf(stderr, "Error: Mismatched parenthesis at position %d\n", next.position);
            exit(EXIT_FAILURE);
        }
        
        // 可选：创建括号节点用于可视化
        ASTNode *paren = malloc(sizeof(ASTNode));
        paren->type = NODE_PAREN;
        paren->left = expr;
        return paren;
    }
    
    if (tok.type == TOK_FUNCTION) {
        Token next = get_next_token(input);
        if (next.type != TOK_LPAREN) {
            fprintf(stderr, "Error: Expected '(' after function at %d\n", next.position);
            exit(EXIT_FAILURE);
        }
        
        ASTNode *arg = parse_expression(input);
        next = get_next_token(input);
        if (next.type != TOK_RPAREN) {
            fprintf(stderr, "Error: Expected ')' after function argument at %d\n", next.position);
            exit(EXIT_FAILURE);
        }
        
        ASTNode *node = malloc(sizeof(ASTNode));
        node->type = NODE_FUNCTION;
        strncpy(node->func_name, tok.func, 10);
        node->argument = arg;
        return node;
    }
    
    fprintf(stderr, "Error: Unexpected token at position %d\n", tok.position);
    exit(EXIT_FAILURE);
}
```

---

**AST求值器**

```c
double evaluate_ast(ASTNode *node) {
    if (!node) return NAN;
    
    switch (node->type) {
        case NODE_NUMBER:
            return node->number;
            
        case NODE_BINARY_OP:
            double left = evaluate_ast(node->left);
            double right = evaluate_ast(node->right);
            switch (node->op_type) {
                case OP_ADD: return left + right;
                case OP_SUB: return left - right;
                case OP_MUL: return left * right;
                case OP_DIV: 
                    if (right == 0) {
                        fprintf(stderr, "Division by zero\n");
                        return NAN;
                    }
                    return left / right;
                case OP_POW: return pow(left, right);
            }
            break;
            
        case NODE_UNARY_OP:
            if (node->op_type == OP_FACT) {
                double val = evaluate_ast(node->left);
                if (val < 0 || floor(val) != val) {
                    fprintf(stderr, "Invalid factorial operand: %f\n", val);
                    return NAN;
                }
                long result = 1;
                for (int i = 1; i <= (long)val; i++) result *= i;
                return (double)result;
            }
            break;
            
        case NODE_FUNCTION:
            double arg = evaluate_ast(node->argument);
            if (strcmp(node->func_name, "sin") == 0) return sin(arg);
            if (strcmp(node->func_name, "cos") == 0) return cos(arg);
            if (strcmp(node->func_name, "tan") == 0) return tan(arg);
            if (strcmp(node->func_name, "log") == 0) return log(arg);
            if (strcmp(node->func_name, "exp") == 0) return exp(arg);
            fprintf(stderr, "Unknown function: %s\n", node->func_name);
            return NAN;
            
        case NODE_PAREN:
            return evaluate_ast(node->left);
    }
    return NAN;
}
```

---

**内存管理**

```c
void free_ast(ASTNode *node) {
    if (!node) return;
    
    switch (node->type) {
        case NODE_BINARY_OP:
            free_ast(node->left);
            free_ast(node->right);
            break;
        case NODE_UNARY_OP:
        case NODE_FUNCTION:
        case NODE_PAREN:
            free_ast(node->left);
            break;
        default: break;
    }
    free(node);
}
```

---

**高级扩展实现**

```c
// 变量支持
typedef struct {
    char name[20];
    double value;
} Variable;

ASTNode* create_variable_node(const char *name) {
    ASTNode *node = malloc(sizeof(ASTNode));
    node->type = NODE_VARIABLE;
    strncpy(node->var_name, name, 20);
    return node;
}

// 符号微分
ASTNode* differentiate(ASTNode *node, const char *var) {
    if (node->type == NODE_VARIABLE) {
        if (strcmp(node->var_name, var) == 0) 
            return create_number_node(1);
        return create_number_node(0);
    }
    
    if (node->type == NODE_BINARY_OP) {
        switch (node->op_type) {
            case OP_ADD: case OP_SUB:
                return create_binary_node(
                    node->op_type,
                    differentiate(node->left, var),
                    differentiate(node->right, var)
                );
            case OP_MUL: // 乘积法则
                return create_binary_node(OP_ADD,
                    create_binary_node(OP_MUL,
                        differentiate(node->left, var),
                        copy_ast(node->right)),
                    create_binary_node(OP_MUL,
                        copy_ast(node->left),
                        differentiate(node->right, var))
                );
        }
    }
}

// 常量折叠优化
ASTNode* optimize_ast(ASTNode *node) {
    if (!node) return NULL;
    
    node->left = optimize_ast(node->left);
    node->right = optimize_ast(node->right);
    
    if (node->type == NODE_BINARY_OP) {
        if (node->left->type == NODE_NUMBER && 
            node->right->type == NODE_NUMBER) {
            double result = evaluate_ast(node);
            ASTNode *num = create_number_node(result);
            free_ast(node);
            return num;
        }
    }
    return node;
}
```

---

**性能优化技术**

```c
// 对象池管理
#define POOL_SIZE 1000
ASTNode node_pool[POOL_SIZE];
int node_count = 0;

ASTNode* alloc_node() {
    if (node_count < POOL_SIZE) 
        return &node_pool[node_count++];
    return malloc(sizeof(ASTNode));
}

// 迭代遍历
double iterative_eval(ASTNode *root) {
    Stack stack; // 自定义栈实现
    push(stack, root);
    
    while (!empty(stack)) {
        ASTNode *current = top(stack);
        
        if (current->visited) {
            pop(stack);
            // 处理操作符...
        } else {
            current->visited = 1;
            if (current->right) push(stack, current->right);
            if (current->left) push(stack, current->left);
        }
    }
}

// LRU缓存
#define CACHE_SIZE 50
typedef struct {
    char expr[100];
    double value;
} ExprCache;

double cached_eval(const char *expr) {
    // 查找缓存...
    // 未命中时构建AST并求值
    // 结果存入缓存
}
```

### 4. 实例解析

**例1：解析输入表达式 3 + sin(4^2)!**

词法分析：

```text
[NUM:3] [+] [FUNC:sin] [(] [NUM:4] [^] [NUM:2] [)] [!]
```

AST构建：

```text
       +
      / \
     3   !
        /
       sin
       /   
      ^
     / \
    4   2
```

求值过程：

```text
后序遍历：3 → 4 → 2 → ^ → sin → ! → +

计算步骤：
4^2 = 16
sin(16) ≈ -0.2879
(-0.2879)! → 错误（阶乘需整数）
```

**例2：解析输入表达式 sin(2 * x) + 1**

AST结构：

```text
        +
       / \
     sin  1
      /
     *
    / \
   2   x
```

求值过程：

```text
后序遍历：2 → x → * → sin → 1 → +

计算 sin → 先计算 2 * x（假设 x = 3 → 6）
计算 sin(6) ≈ -0.279
计算 -0.279 + 1 ≈ 0.721
```

### 5. 优缺点

**优点**

- 结构化表示：清晰表达运算符优先级和嵌套关系，支持复杂语法分析

- 多阶段架构：分离解析、优化与求值

- 可视化能力：可生成中间代码，直观表达式表示

- 灵活扩展：支持变量、函数、符号计算等高级功能

- 高效优化：便于实现常量折叠、代数化简

- 错误定位：精确到具体节点

**缺点**

- 实现复杂：需完整解析器架构

- 内存开销：节点动态分配

- 性能开销：树遍历额外成本

- 递归风险：深度嵌套可能栈溢出

### 6. 算法特性

**优先级处理**：优先级：^ > ! > 函数 > +

**结合性实现**：左结合 `1-2-3 → (1-2)-3`、右结合 `2^3^4 → 2^(3^4)`

**错误处理**：位置感知错误报告、类型安全求值、边界检查（除零/阶乘）

**空间复杂度**：解析阶段 O(d)（d=语法嵌套深度）、AST 存储 O(n)、优化后 O(min(d, n))

**时间复杂度**：解析阶段 O(n)、求值阶段 O(n)、优化后 O(n)（理想）

通过合理设计文法规则和遍历算法，AST 能在 线性时间和可控空间 内高效处理复杂数学表达式，满足科学计算器的实时性要求

### 7. 典型应用场景

**科学计算引擎**：MATLAB、Mathematica数值模拟软件

**编译器前端**：编程语言解析（Python、Julia）、DSL（领域特定语言）

**公式处理系统**：LaTeX公式渲染、表格计算（Excel公式）

**符号计算系统**：代数化简、符号微分/积分

**AI表达式解析**：规则引擎、自动定理证明

**最佳实践建议**：对于性能敏感场景，可结合以下技术

- AST池分配器：减少内存碎片

- JIT编译：将AST编译为机器码

- GPU卸载：将并行计算部分转移到GPU

**典型应用**：Wolfram Mathematica、MATLAB 符号数学工具箱

## 4. 表驱动解析 (Table-Driven Parsing)

表驱动解析（Table-Driven Parsing）是一种基于 状态机 和 查表机制 的解析方法，它通过预定义的数据表（如状态转换表、优先级表）来控制解析流程，而非硬编码语法规则。在科学计算器中，这种方法能高效处理复杂数学表达式，同时保持代码的模块化和可扩展性。

### 1. 核心目的

**高性能求值**：通过状态机和双栈结构实现 O(n) 时间复杂度的表达式解析与求值。

**动态运算符扩展**：新增运算符只需更新优先级表和语义动作表，无需修改核心解析逻辑。

**确定性执行**：基于有限状态机（FSM）的解析流程，行为完全由表格驱动，无歧义。

**适配资源受限环境**：双栈结构内存占用固定，适合嵌入式设备（如低内存单片机）。

### 2. 核心原理

**输入字符串 → Token流（词法分析）**

- 任务：将原始字符串拆分为有意义的 Token（如数字、运算符、括号）

- 示例：
  ```text
  输入："3 + 4 * 2"
  Token流：[
      { type: 'NUMBER', value: 3 },
      { type: 'OPERATOR', value: '+' },
      { type: 'NUMBER', value: 4 },
      { type: 'OPERATOR', value: '*' },
      { type: 'NUMBER', value: 2 }
  ]
  ```

**Token流 → 计算结果（表驱动解析）**

解析过程依赖以下核心组件：

- 状态转换表：定义当前状态和输入 Token 如何触发状态迁移

- 优先级表：决定运算符的运算顺序（如 * 优先于 +）

- 语义动作表：关联运算符与对应的计算函数（如 + 执行加法）

- 双栈结构：操作数栈存储数字和中间结果、运算符栈存储未处理的运算符和括号

**关键组件详解**

状态转换表：指导解析器在不同状态下如何处理输入的 Token

| 当前状态 | 输入 Token |     动作     | 下一状态 |
| :------: | :--------: | :----------: | :------: |
|  Start   |   NUMBER   | 压入操作数栈 | Operand  |
| Operand  |  OPERATOR  | 压入运算符栈 | Operator |
| Operator |   NUMBER   | 压入操作数栈 | Operand  |
| Operator |   LPAREN   | 压入运算符栈 |  Start   |

运算符优先级表：解决运算符优先级和结合性问题（如 * 优先于 +）

符号说明：`<`：栈顶运算符优先级低于当前 Token，压栈、`>`：栈顶运算符优先级高于当前 Token，弹栈计算、`=`：匹配括号，弹栈（不计算）

| 运算符 | `+`  | `*`  | `^`  | `(`  |
| :----: | :--: | :--: | :--: | :--: |
|  `+`   |  ≤   |  <   |  <   |  <   |
|  `*`   |  >   |  ≤   |  <   |  <   |
|  `^`   |  >   |  >   |  ≤   |  <   |
|  `(`   |  <   |  <   |  <   |  =   |

语义动作表：为每个运算符绑定具体的计算逻辑

| 运算符 |    语义动作（函数）     |
| :----: | :---------------------: |
|  `+`   |  `lambda a, b: a + b`   |
|  `*`   |  `lambda a, b: a * b`   |
|  `^`   |  `lambda a, b: a ** b`  |
| `sin`  | `lambda a: math.sin(a)` |

### 3. 实现步骤 (C语言)

**数据结构定义**

```c
// 运算符类型
typedef enum {
    OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_POW, OP_FACT,
    OP_LPAREN, OP_RPAREN, OP_FUNC, OP_END
} Operator;

// 状态类型
typedef enum {
    STATE_EXPECT_OPERAND,    // 期待操作数
    STATE_EXPECT_OPERATOR,   // 期待运算符
    STATE_FUNCTION_ARG,      // 函数参数处理
    STATE_ERROR              // 错误状态
} ParserState;

// 优先级关系
typedef enum {
    REL_LOWER,      // 当前优先级低
    REL_HIGHER,     // 当前优先级高
    REL_EQUAL,      // 优先级相等
    REL_REDUCE,     // 需要规约
    REL_ERROR       // 错误关系
} PrecedenceRelation;

// 运算符属性
typedef struct {
    Operator op;
    int precedence;          // 优先级数值
    int is_right_assoc;      // 是否右结合
    int operand_count;       // 操作数数量
} OperatorInfo;

// 状态表条目
typedef struct {
    ParserState current_state;
    Operator op;
    ParserState next_state;
} StateTransition;
```

---

**优先级表实现**

```c
// 优先级关系表 (PRT)
PrecedenceRelation precedence_table[OP_END][OP_END] = {
    /*           +     -     *     /     ^     !     (     )     func  end */
    /* + */  { REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER },
    /* - */  { REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER },
    /* * */  { REL_HIGHER, REL_HIGHER, REL_LOWER, REL_LOWER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER },
    /* / */  { REL_HIGHER, REL_HIGHER, REL_LOWER, REL_LOWER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER },
    /* ^ */  { REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_HIGHER },
    /* ! */  { REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_HIGHER, REL_ERROR, REL_HIGHER, REL_ERROR, REL_HIGHER },
    /* ( */  { REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_EQUAL, REL_LOWER, REL_ERROR },
    /* ) */  { REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR },
    /* func*/{ REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_LOWER, REL_HIGHER, REL_LOWER, REL_ERROR, REL_LOWER, REL_ERROR },
    /* end */{ REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR, REL_ERROR }
};

// 运算符信息表
OperatorInfo op_info[] = {
    {OP_ADD, 10, 0, 2},   // 左结合，优先级10
    {OP_SUB, 10, 0, 2},
    {OP_MUL, 20, 0, 2},
    {OP_DIV, 20, 0, 2},
    {OP_POW, 30, 1, 2},   // 右结合，优先级30
    {OP_FACT, 40, 0, 1},  // 一元运算符
    {OP_LPAREN, 0, 0, 0},
    {OP_RPAREN, 0, 0, 0},
    {OP_FUNC, 40, 0, 1},
    {OP_END, 0, 0, 0}
};

// 状态转换表
StateTransition state_transitions[] = {
    {STATE_EXPECT_OPERAND, OP_ADD, STATE_ERROR},
    {STATE_EXPECT_OPERAND, OP_SUB, STATE_EXPECT_OPERAND},  // 处理一元负号
    {STATE_EXPECT_OPERAND, OP_LPAREN, STATE_EXPECT_OPERAND},
    {STATE_EXPECT_OPERAND, OP_FUNC, STATE_FUNCTION_ARG},
    {STATE_EXPECT_OPERAND, OP_END, STATE_ERROR},
    
    {STATE_EXPECT_OPERATOR, OP_ADD, STATE_EXPECT_OPERAND},
    {STATE_EXPECT_OPERATOR, OP_SUB, STATE_EXPECT_OPERAND},
    {STATE_EXPECT_OPERATOR, OP_MUL, STATE_EXPECT_OPERAND},
    {STATE_EXPECT_OPERATOR, OP_DIV, STATE_EXPECT_OPERAND},
    {STATE_EXPECT_OPERATOR, OP_POW, STATE_EXPECT_OPERAND},
    {STATE_EXPECT_OPERATOR, OP_FACT, STATE_EXPECT_OPERATOR},
    {STATE_EXPECT_OPERATOR, OP_RPAREN, STATE_EXPECT_OPERATOR},
    {STATE_EXPECT_OPERATOR, OP_FUNC, STATE_ERROR},
    {STATE_EXPECT_OPERATOR, OP_END, STATE_END},
    
    {STATE_FUNCTION_ARG, OP_LPAREN, STATE_EXPECT_OPERAND},
    {STATE_FUNCTION_ARG, OP_END, STATE_ERROR}
};
```

---

**解析器核心实现**

```c
double evaluate_expression(const char *input) {
    // 双栈结构
    double operand_stack[100];
    Operator operator_stack[100];
    int operand_top = -1;
    int operator_top = -1;
    
    // 初始状态
    ParserState state = STATE_EXPECT_OPERAND;
    Token token = get_next_token(&input);
    
    // 特殊处理：表达式以负号开头
    if (token.type == TOK_SUB && state == STATE_EXPECT_OPERAND) {
        push_operator(operator_stack, &operator_top, OP_SUB);
        token = get_next_token(&input);
    }
    
    while (state != STATE_END && state != STATE_ERROR) {
        Operator current_op = convert_token_to_op(token);
        
        // 状态转移
        ParserState next_state = get_next_state(state, current_op);
        if (next_state == STATE_ERROR) {
            handle_error("Invalid state transition");
            return NAN;
        }
        state = next_state;
        
        if (state == STATE_EXPECT_OPERAND) {
            if (token.type == TOK_NUM) {
                push_operand(operand_stack, &operand_top, token.value);
                token = get_next_token(&input);
            } else if (token.type == TOK_LPAREN) {
                push_operator(operator_stack, &operator_top, OP_LPAREN);
                token = get_next_token(&input);
            } else if (token.type == TOK_FUNC) {
                push_operator(operator_stack, &operator_top, OP_FUNC);
                // 存储函数名
                strncpy(func_name, token.func, MAX_FUNC_LEN);
                token = get_next_token(&input);
            }
        } else if (state == STATE_EXPECT_OPERATOR) {
            // 优先级处理
            while (operator_top >= 0) {
                Operator top_op = operator_stack[operator_top];
                PrecedenceRelation rel = 
                    precedence_table[top_op][current_op];
                
                if (rel == REL_HIGHER || rel == REL_EQUAL) {
                    // 执行栈顶运算符
                    execute_operator(&operand_stack, &operand_top, 
                                    &operator_stack, &operator_top);
                } else {
                    break;
                }
            }
            
            if (current_op == OP_RPAREN) {
                if (operator_stack[operator_top] == OP_LPAREN) {
                    pop_operator(&operator_stack, &operator_top);
                    token = get_next_token(&input);
                } else {
                    handle_error("Mismatched parentheses");
                    return NAN;
                }
            } else if (current_op == OP_END) {
                // 处理结束
                state = STATE_END;
            } else {
                push_operator(operator_stack, &operator_top, current_op);
                token = get_next_token(&input);
            }
        }
    }
    
    // 清理剩余运算符
    while (operator_top >= 0) {
        execute_operator(&operand_stack, &operand_top, 
                        &operator_stack, &operator_top);
    }
    
    if (operand_top == 0) {
        return operand_stack[operand_top];
    } else {
        handle_error("Invalid expression");
        return NAN;
    }
}
```

---

**运算符执行函数**

```c
void execute_operator(double *operand_stack, int *operand_top,
                     Operator *operator_stack, int *operator_top) {
    Operator op = pop_operator(operator_stack, operator_top);
    OperatorInfo info = get_op_info(op);
    
    if (*operand_top < info.operand_count - 1) {
        handle_error("Insufficient operands");
        return;
    }
    
    double result = 0;
    switch (op) {
        case OP_ADD: {
            double b = pop_operand(operand_stack, operand_top);
            double a = pop_operand(operand_stack, operand_top);
            result = a + b;
            break;
        }
        case OP_SUB: {
            double b = pop_operand(operand_stack, operand_top);
            double a = pop_operand(operand_stack, operand_top);
            result = a - b;
            break;
        }
        case OP_MUL: {
            double b = pop_operand(operand_stack, operand_top);
            double a = pop_operand(operand_stack, operand_top);
            result = a * b;
            break;
        }
        case OP_DIV: {
            double b = pop_operand(operand_stack, operand_top);
            double a = pop_operand(operand_stack, operand_top);
            if (fabs(b) < 1e-10) {
                handle_error("Division by zero");
                return;
            }
            result = a / b;
            break;
        }
        case OP_POW: {
            double exp = pop_operand(operand_stack, operand_top);
            double base = pop_operand(operand_stack, operand_top);
            result = pow(base, exp);
            break;
        }
        case OP_FACT: {
            double a = pop_operand(operand_stack, operand_top);
            if (a < 0 || fmod(a, 1.0) != 0.0) {
                handle_error("Invalid factorial operand");
                return;
            }
            long fact = 1;
            for (int i = 1; i <= (int)a; i++) fact *= i;
            result = (double)fact;
            break;
        }
        case OP_FUNC: {
            double arg = pop_operand(operand_stack, operand_top);
            // 根据存储的函数名执行
            if (strcmp(current_func, "sin") == 0) result = sin(arg);
            else if (strcmp(current_func, "cos") == 0) result = cos(arg);
            // ... 其他函数处理
            break;
        }
    }
    
    push_operand(operand_stack, operand_top, result);
}
```

---

**性能优化技术**

```c
// 静态表存储
const PrecedenceRelation PRT[OP_COUNT][OP_COUNT] = {
    // 编译期初始化的优先级表
};

// 栈预分配
#define MAX_STACK_SIZE 128
double operand_stack[MAX_STACK_SIZE];
Operator operator_stack[MAX_STACK_SIZE];

// 内联函数
static inline void push_operand(double stack[], int *top, double value) {
    stack[++(*top)] = value;
}

// 位压缩存储
// 使用1字节存储优先级关系
typedef uint8_t PrecedenceRelation;
#define REL_LOWER 0
#define REL_HIGHER 1
```

---

**扩展实现**

```c
// 变量支持
typedef struct {
    char name[20];
    double value;
} Variable;

Variable variables[MAX_VARS];
int var_count = 0;

double get_variable_value(const char *name) {
    for (int i = 0; i < var_count; i++) {
        if (strcmp(variables[i].name, name) == 0) {
            return variables[i].value;
        }
    }
    return NAN; // 未找到变量
}

// 错误恢复机制
void handle_error(const char *msg) {
    // 错误处理策略：
    // 1. 记录错误位置
    // 2. 清空栈
    // 3. 重置状态机
    operand_top = -1;
    operator_top = -1;
    state = STATE_EXPECT_OPERAND;
    
    // 4. 跳过错误token
    while (current_token.type != TOK_END && 
           current_token.type != TOK_SEMICOLON) {
        current_token = get_next_token();
    }
}

// 内存保护
// 栈操作安全检查
void push_operator(Operator stack[], int *top, Operator op) {
    if (*top >= MAX_STACK_SIZE - 1) {
        handle_error("Operator stack overflow");
        return;
    }
    stack[++(*top)] = op;
}
```

### 4. 实例解析

**例1：解析输入表达式 实例解析：3 + 4 * 2 ^ (1 + 1)**

Token流拆分：

```text
[3, '+', 4, '*', 2, '^', '(', 1, '+', 1, ')']
```

双栈过程：

| 步骤 | Token |    操作数栈     |    运算符栈     |         动作说明         |
| :--: | :---: | :-------------: | :-------------: | :----------------------: |
|  1   |   3   |       [3]       |       []        |      数字入操作数栈      |
|  2   |   +   |       [3]       |       [+]       |        运算符入栈        |
|  3   |   4   |     [3, 4]      |       [+]       |         数字入栈         |
|  4   |   *   |     [3, 4]      |     [+, *]      | `*` 优先级 > `+`，不弹栈 |
|  5   |   2   |    [3, 4, 2]    |     [+, *]      |         数字入栈         |
|  6   |   ^   |    [3, 4, 2]    |    [+, *, ^]    | `^` 优先级 > `*`，不弹栈 |
|  7   |   (   |    [3, 4, 2]    |  [+, *, ^, (]   |         '(' 入栈         |
|  8   |   1   |  [3, 4, 2, 1]   |  [+, *, ^, (]   |         数字入栈         |
|  9   |   +   |  [3, 4, 2, 1]   | [+, *, ^, (, +] |         '+' 入栈         |
|  10  |   1   | [3, 4, 2, 1, 1] | [+, *, ^, (, +] |         数字入栈         |
|  11  |   )   |  [3, 4, 2, 2]   |    [+, *, ^]    | 计算 `1 + 1`，弹栈至 '(' |
|  12  |   -   |    [3, 4, 4]    |       [+]       | 计算 `2 ^ 2`，弹栈至 `*` |
|  13  |   -   |     [3, 16]     |       [+]       | 计算 `4 * 4`，弹栈至 `+` |
|  14  |   -   |      [19]       |       []        |   计算 `3 + 16`，结束    |

最终结果：19

### 5. 优点缺点

**优点**：

- 高效性能：O(n)时间复杂度
  
- 确定性行为：状态机驱动可预测

- 易扩展性：添加运算符只需更新表

- 内存效率：栈结构内存占用小

- 无递归风险：避免栈溢出问题

**缺点**：

- 表结构复杂：需精心设计状态表和优先级表

- 函数支持有限：多参数函数处理困难

- 错误恢复困难：难以从错误状态恢复

- 可读性差：表驱动逻辑不如递归下降直观

- 灵活性受限：语法变更需重构表结构

### 6. 算法特性

**时间复杂度**：O(n)（每个 Token 仅处理一次）。

**空间复杂度**：O(n)（双栈最大深度与表达式长度线性相关）。

**动态扩展性**：新增运算符只需更新优先级表和语义动作表，无需修改解析逻辑。

**确定性**：状态机和表格驱动，无回溯，行为完全可预测。

### 7. 典型应用场景

**嵌入式计算器**：资源受限设备（如单片机）

**高性能计算库**：需要快速表达式求值

**工业控制系统**：确定性行为要求高的场景

**数据库引擎**：SQL条件表达式解析

**金融交易系统**：低延迟公式计算

**最佳实践建议**：

- 使用代码生成器创建状态表和优先级表

- 为嵌入式系统实现固定大小栈

- 添加详细的错误日志记录

- 对用户输入进行预验证

表驱动解析在科学计算器中提供了：卓越性能 → 线性时间复杂度处理表达式、确定行为 → 状态机驱动的可预测执行、资源效率低 → 内存占用适合嵌入式系统、工业级可靠性 → 避免递归风险。

**典型应用**：HP计算器系列、金融终端公式引擎、工业PLC控制器。

## 六. 基于词法分析的直接求值 (Lexer-Based Direct Evaluation)

基于词法分析的直接求值的这种算法是一种 轻量级、低内存占用 的计算方案，适用于嵌入式设备或需要极速响应的场景。其核心思想是 边解析边计算，不构建中间数据结构（如 AST 或双栈），直接在词法分析过程中完成求值。

### 1. 核心目的

**低资源环境适配**：无递归、无复杂数据结构（仅需维护当前值和运算符状态）。

**极速响应**：单次扫描输入字符串，边解析边计算，时间复杂度 O(n)。

**简单表达式支持**：直接处理基本算术（+-*/）和优先级（如 * 优先于 +）。

**最小化实现**：代码量极少（<100 行），适合嵌入式系统或硬件描述语言（如 Verilog）。

### 2. 核心原理

**输入字符串 → 词法分析（Lexer）**

- 任务：逐个字符读取输入，识别数字、运算符、括号等 Token。

- 特性：无回溯 每个字符仅处理一次、即时处理 遇到完整 Token 后立即参与计算（如读完数字 123 后直接压入值栈）。

**即时求值引擎**

核心状态：

- current_value：当前累积的计算结果。

- pending_operator：待处理的运算符（如 +、*）。

- pending_value：与待处理运算符关联的右操作数（部分延迟计算）。

优先级处理：

- 默认左结合（如 `1 + 2 + 3 → (1 + 2) + 3`）。

- 遇到高优先级运算符（如 *）时，立即计算当前 pending 表达式。

**关键特性**

- 单次扫描：边解析边计算，不构建中间表示

- 状态驱动：维护当前值和待处理运算符

- 左结合优先：天然支持左结合运算

- 即时计算：遇到高优先级运算符时立即计算

### 3. 实现步骤 (C语言)

**数据结构定义**

```c
typedef enum {
    TOK_NUM,    // 数字
    TOK_ADD,    // +
    TOK_SUB,    // -
    TOK_MUL,    // *
    TOK_DIV,    // /
    TOK_LPAREN, // (
    TOK_RPAREN, // )
    TOK_END     // 结束
} TokenType;

typedef struct {
    TokenType type;
    double value;  // 数字值
} Token;

// 解析状态
typedef struct {
    double current_value;  // 当前累计值
    Token pending_op;      // 待处理运算符
    int in_parenthesis;    // 括号嵌套计数
} EvalState;
```

---

**词法分析器**

```c
Token get_next_token(const char **input) {
    while (isspace(**input)) (*input)++;  // 跳过空白
    
    if (**input == '\0') 
        return (Token){TOK_END, 0};
    
    // 数字解析
    if (isdigit(**input) || **input == '.') {
        char *end;
        double val = strtod(*input, &end);
        *input = end;
        return (Token){TOK_NUM, val};
    }
    
    // 运算符解析
    char op = *(*input)++;
    switch(op) {
        case '+': return (Token){TOK_ADD};
        case '-': return (Token){TOK_SUB};
        case '*': return (Token){TOK_MUL};
        case '/': return (Token){TOK_DIV};
        case '(': return (Token){TOK_LPAREN};
        case ')': return (Token){TOK_RPAREN};
        default: return (Token){TOK_END}; // 无效字符
    }
}
```

---

**核心求值引擎**

```c
double evaluate(const char *input) {
    EvalState state = {0, {TOK_ADD}, 0}; // 初始状态
    Token token;
    
    while ((token = get_next_token(&input)).type != TOK_END) {
        switch (token.type) {
            case TOK_NUM:
                process_number(&state, token.value);
                break;
                
            case TOK_ADD: case TOK_SUB:
                process_add_sub(&state, token);
                break;
                
            case TOK_MUL: case TOK_DIV:
                process_mul_div(&state, token);
                break;
                
            case TOK_LPAREN:
                state.in_parenthesis++;
                break;
                
            case TOK_RPAREN:
                if (state.in_parenthesis > 0) state.in_parenthesis--;
                break;
        }
    }
    
    // 处理最后一个待定操作
    apply_pending(&state);
    return state.current_value;
}

void process_number(EvalState *state, double value) {
    // 如果没有待处理操作符，直接更新当前值
    if (state->pending_op.type == TOK_ADD && state->pending_op.value == 0) {
        state->current_value = value;
        return;
    }
    
    // 应用待处理操作
    switch (state->pending_op.type) {
        case TOK_ADD:
            state->current_value += value;
            break;
        case TOK_SUB:
            state->current_value -= value;
            break;
        case TOK_MUL:
            state->current_value *= value;
            break;
        case TOK_DIV:
            if (fabs(value) < 1e-10) {
                printf("Division by zero error\n");
                exit(1);
            }
            state->current_value /= value;
            break;
    }
    
    // 重置待处理操作符
    state->pending_op = (Token){TOK_ADD, 0};
}

void process_add_sub(EvalState *state, Token op) {
    // 如果存在待处理的高优先级操作，先执行
    if (state->pending_op.type == TOK_MUL || state->pending_op.type == TOK_DIV) {
        apply_pending(state);
    }
    state->pending_op = op;
}

void process_mul_div(EvalState *state, Token op) {
    // 乘法/除法立即设置为待处理操作
    state->pending_op = op;
}

void apply_pending(EvalState *state) {
    // 处理特殊场景：表达式以操作符开始
    if (state->pending_op.type == TOK_ADD && state->pending_op.value == 0) 
        return;
    
    // 应用操作（已处理数字时自动应用）
    state->pending_op = (Token){TOK_ADD, 0};
}
```

---

**优先级问题解决方案**

```c
// 增强版处理函数（支持基本优先级）
void process_operator(EvalState *state, Token op) {
    // 高优先级运算符 (*,/) 立即处理
    if (op.type == TOK_MUL || op.type == TOK_DIV) {
        state->pending_high_op = op;
        return;
    }
    
    // 低优先级运算符 (+,-) 先处理待定的高优先级操作
    if (state->pending_high_op.type != TOK_ADD) {
        apply_high_pending(state);
    }
    state->pending_low_op = op;
}

// 状态结构增强
typedef struct {
    double current_value;
    Token pending_low_op;   // +, -
    Token pending_high_op;  // *, /
    double last_number;     // 存储上一个数字
} EvalState;
```

---

**扩展实现**

```c
// 基本函数支持 函数解析扩展
Token get_next_token(const char **input) {
    // ... 数字和操作符解析 ...
    
    // 函数解析
    if (isalpha(**input)) {
        char func[10] = {0};
        int i = 0;
        while (isalpha(**input)) func[i++] = *(*input)++;
        return (Token){TOK_FUNC, 0, func};
    }
}

// 函数处理
void process_function(EvalState *state, const char *func) {
    // 获取参数
    double arg = parse_simple_expression(input); // 递归解析参数
    
    // 执行函数
    double result = 0;
    if (strcmp(func, "sqrt") == 0) result = sqrt(arg);
    else if (strcmp(func, "abs") == 0) result = fabs(arg);
    // ...
    
    // 作为操作数处理
    process_number(state, result);
}

// 错误恢复增强
#define MAX_ERROR_LEN 50
char error_msg[MAX_ERROR_LEN] = {0};

double evaluate(const char *input) {
    // ... 解析过程 ...
    
    if (state.in_parenthesis != 0) {
        snprintf(error_msg, MAX_ERROR_LEN, "Mismatched parentheses");
        return NAN;
    }
    
    if (state.pending_op.type != TOK_ADD || state.pending_op.value != 0) {
        snprintf(error_msg, MAX_ERROR_LEN, "Dangling operator");
        return NAN;
    }
    // ...
}

// 变量支持
typedef struct {
    char name[20];
    double value;
} Variable;

Variable variables[10];
int var_count = 0;

double get_variable(const char *name) {
    for (int i = 0; i < var_count; i++) {
        if (strcmp(variables[i].name, name) == 0) {
            return variables[i].value;
        }
    }
    return NAN;
}

// 在词法分析器中
Token get_next_token(const char **input) {
    // ... 
    
    // 变量解析
    if (isalpha(**input)) {
        char var[20] = {0};
        int i = 0;
        while (isalnum(**input)) var[i++] = *(*input)++;
        double value = get_variable(var);
        if (!isnan(value)) {
            return (Token){TOK_NUM, value};
        }
        // 否则视为函数...
    }
}
```

---

**性能优化技术**

```c
// 内联函数
static inline void apply_add(EvalState *s, double val) {
    s->current_value += val;
}

// 循环展开
// 处理连续数字
while (isdigit(**input)) {
    val = val*10 + (**input - '0');
    (*input)++;
    // 展开4次迭代
    if (isdigit(**input)) {
        val = val*10 + (**input - '0');
        (*input)++;
        // ... 重复 ...
    }
}

// 查表法
// 运算符处理函数表
typedef void (*OpHandler)(EvalState*, double);

OpHandler op_handlers[] = {
    [TOK_ADD] = apply_add,
    [TOK_SUB] = apply_sub,
    [TOK_MUL] = apply_mul,
    [TOK_DIV] = apply_div
};

void process_number(EvalState *state, double value) {
    if (state->pending_op.type != TOK_ADD || state->pending_op.value != 0) {
        op_handlers[state->pending_op.type](state, value);
    } else {
        state->current_value = value;
    }
}
```

### 4. 实例解析

**例1：解析输入表达式 实例解析：3 + 4 * 2 - 1**

执行步骤：

| 步骤 | Token | `current_value` | `pending_operator` | `pending_value` |       动作说明       |
| :--: | :---: | :-------------: | :----------------: | :-------------: | :------------------: |
|  1   |   3   |        3        |        '+'         |        -        |        初始值        |
|  2   |   +   |        3        |        '+'         |        -        |      更新运算符      |
|  3   |   4   |        7        |        '+'         |        -        |     计算 `3 + 4`     |
|  4   |   *   |        7        |        '*'         |        2        | 高优先级，暂存 `* 2` |
|  5   |   2   |       14        |        '*'         |        -        |     计算 `7 * 2`     |
|  6   |   -   |       14        |        '-'         |        1        |      更新运算符      |
|  7   |   1   |       13        |        '-'         |        -        |    计算 `14 - 1`     |
| 结果 |   -   |       13        |         -          |        -        | 返回 `current_value` |

最终结果：13

注意：此实现简化了优先级处理，实际计算顺序为 `((3+4)*2)-1`，而非标准优先级 `3+(4*2)-1`。

### 5. 优点缺点

**优点**：

- 极致高效：O(n)时间复杂度（单次扫描输入字符串），O(1)（仅需维护几个状态变量）

- 内存高效：常数级空间复杂度，极低（无栈、无递归、无中间表示）

- 实现简单：代码量少（<100行）

- 快速响应：单次扫描即时求值

- 无递归风险：避免栈溢出

**缺点**：

- 优先级处理有限：难以处理复杂优先级

- 括号支持弱：无法处理嵌套括号

- 右结合问题：无法处理指数运算等

- 函数不支持：难以扩展函数调用

- 错误恢复难：遇到错误需重启解析

### 6. 算法特性

**状态转移**：该算法通过 有限状态机（FSM） 控制解析流程

|   当前状态   | 输入 Token |              动作              | 下一状态 |
| :----------: | :--------: | :----------------------------: | :------: |
|  **Start**   |    数字    | 读取数字，存入 `current_value` | Operand  |
| **Operand**  |   运算符   |    更新 `pending_operator`     | Operator |
| **Operator** |    数字    |  根据 `pending_operator` 计算  | Operand  |
| **Operator** |    结束    |      返回 `current_value`      |   End    |

**求值流程**：

- 词法分析：逐字符读取输入，生成 Token（数字或运算符）

- 立即求值：遇到数字直接参与当前运算（如 `3 → current_value = 3`）、遇到运算符更新 pending_operator（如 `+` → 等待下一个数字）

- 结果输出：遍历结束后返回 current_value

**优先级处理**:

- 乘除优先于加减：遇到 `*` 或 `/` 时，立即计算当前表达式，而非延迟到后续操作

- 左结合运算天然支持：同级运算符按从左到右顺序计算（如 `1 - 2 - 3 → (1 - 2) - 3`）

### 7. 典型应用场景

**嵌入式计算器**：单片机、IoT设备

**命令行计算工具**：简单算术计算

**工业控制器**：PLC简单公式计算

**教育玩具**：儿童计算器

**性能敏感环境**：实时系统简单计算

基于词法分析的直接求值算法在科学计算器中提供了：

- 极限效率：单次扫描即时求值

- 最小资源：常数级内存占用

- 实现简洁：<100行核心代码

- 实时响应：无延迟计算结果

**最佳实践建议**：

- 适用于简单算术表达式（无嵌套括号/函数）

- 在资源受限设备（MCU）首选此方案

- 配合硬件加速器实现极致性能

- 添加输入验证防止无效表达式

**典型应用**：德州仪器基础计算器、Linux bc命令简化版、嵌入式设备控制面板

## 六、混合方法 (Hybrid Approach)

**栈 + 递归**：主表达式用栈处理，函数参数递归计算

**AST + 访客模式**：构建AST后使用访客模式求值

**递归下降 + 优先级爬升**：结合递归下降和运算符优先级

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

**通用科学计算器**：栈求值法或递归下降法

**高性能需求**：表驱动或直接求值

**教育目的**：递归下降（易于理解）

**专业应用**：AST方法（最大灵活性）

**嵌入式系统**：表驱动或直接求值

实际实现中，栈求值法和递归下降法最为常用，它们平衡了实现复杂度、性能和功能扩展性。本文第一个实现使用的就是栈求值法，而混合方法在专业计算软件中也很常见。