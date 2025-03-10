# C语言编译器学习大纲

---

## **一、基础概念与背景**
### 1. 编译器的作用与分类
   - **定义**：编译器的作用（源代码→目标代码）
   - **分类**：
     - 解释器 vs 编译器
     - 单趟编译器 vs 多趟编译器
     - 交叉编译器（如`arm-none-eabi-gcc`编译嵌入式程序）
   - **典型编译器链**：预处理器→编译器→汇编器→链接器

### 2. 编译流程的七个阶段
   - **流程图**：
     
     ```
     词法分析 → 语法分析 → 语义分析 → 中间代码生成 → 代码优化 → 目标代码生成 → 链接
     ```
   - **示例**：
     
     ```c
     // 输入代码
     int a = 10 + 5 * 2;
     // 词法分析后：INT, ID(a), EQ, NUM(10), PLUS, NUM(5), MULT, NUM(2)
     ```

### 3. C语言标准与编译器实现
   - **ANSI C (C89/C90)** vs **C99** vs **C11** vs **C17**
   - **编译器差异**：
     - GCC的`-std=c11`选项
     - MSVC对C99支持的限制（如变长数组）

---

## **二、词法分析（Lexical Analysis）**
### 1. 正则表达式与词法单元（Token）
   - **实践工具**：Lex/Flex
   - **案例**：编写`.l`文件识别C语言基础语法
     ```lex
     %%
     "int"   { return INT; }
     [0-9]+  { yylval = atoi(yytext); return NUMBER; }
     "+"     { return PLUS; }
     ```

### 2. 手写词法分析器
   - **状态机实现**：
     ```c
     typedef enum { START, IN_NUM, IN_ID } State;
     State current_state = START;
     while ((c = getchar()) != EOF) {
         switch(current_state) {
             case START:
                 if (isdigit(c)) current_state = IN_NUM;
                 ...
         }
     }
     ```

### 3. 常见问题与调试
   - **边界情况**：`0x1F`（十六进制数）、`123UL`（后缀）
   - **错误处理**：未闭合的字符串（`"Hello`）

---

## **三、语法分析（Syntax Analysis）**
### 1. 上下文无关文法（CFG）
   - **BNF表示法**：
     ```
     <expression> ::= <term> | <expression> "+" <term>
     <term>       ::= <factor> | <term> "*" <factor>
     <factor>     ::= NUMBER | "(" <expression> ")"
     ```

### 2. 自顶向下 vs 自底向上分析
   - **递归下降分析器**：
     ```c
     void parse_expression() {
         parse_term();
         while (lookahead == '+') {
             match('+');
             parse_term();
             // 生成中间代码：ADD
         }
     }
     ```
   - **工具实践**：Yacc/Bison
     ```bison
     %token INT NUMBER PLUS
     %%
     expression: term | expression PLUS term;
     ```

### 3. 语法错误恢复
   - **恐慌模式恢复**：跳过到下一个分号
   - **案例**：缺失分号的错误提示
     ```
     error: expected ';' before 'return'
     ```

---

## **四、语义分析与中间代码**
### 1. 符号表管理
   - **数据结构设计**：
     ```c
     typedef struct Symbol {
         char *name;
         int type;    // INT, FLOAT, etc.
         int scope;
         struct Symbol *next;
     } Symbol;
     ```

### 2. 类型检查与转换
   - **隐式转换规则**：
     ```c
     int a = 10;
     float b = a + 3.14; // int→float转换
     ```

### 3. 中间表示（IR）
   - **三地址码示例**：
     ```
     t1 = 5 * 2
     t2 = 10 + t1
     a = t2
     ```
   - **抽象语法树（AST）**：
     ```c
     typedef struct ASTNode {
         int op;       // 操作符（如ADD、MUL）
         struct ASTNode *left, *right;
         int value;    // 叶子节点值
     } ASTNode;
     ```

---

## **五、代码优化与目标代码生成**
### 1. 优化技术
   - **常量折叠**：
     ```c
     // 优化前
     int a = 10 + 5 * 2;  // 计算为20
     // 优化后
     int a = 20;
     ```
   - **死代码消除**：
     ```c
     if (0) { /* 代码块 */ } // 直接删除
     ```

### 2. 目标代码生成
   - **x86汇编示例**：
     ```asm
     ; C代码: int a = 10 + 5*2
     mov eax, 5
     imul eax, 2    ; 5*2=10
     add eax, 10    ; 10+10=20
     mov [a], eax
     ```

### 3. 寄存器分配算法
   - **图着色算法**：解决寄存器冲突
   - **示例**：对表达式`(a+b)*(c+d)`的寄存器分配

---

## **六、实践项目**
### 1. 实现微型C编译器（TCC-like）
   - **功能范围**：
     - 支持`int`、`if/else`、`while`循环
     - 生成x86汇编或LLVM IR
   - **代码结构**：
     ```
     /src
       ├── lexer.c     # 词法分析
       ├── parser.c    # 递归下降解析
       ├── codegen.c   # 生成汇编
       └── symbol.c    # 符号表管理
     ```

### 2. 使用LLVM框架
   - **关键步骤**：
     1. 创建LLVM模块与函数
     2. 生成IR代码：
        ```llvm
        define i32 @main() {
          %1 = add i32 10, 20
          ret i32 %1
        }
        ```
     3. 调用`lli`执行IR或生成目标文件

### 3. 交叉编译器开发
   - **案例**：为RISC-V架构生成代码
     ```bash
     clang -target riscv32-unknown-elf -S input.c
     ```

---

## **七、高级主题**
### 1. JIT编译技术
   - **LibJIT示例**：动态编译执行代码
     ```c
     jit_context_t context = jit_context_create();
     jit_function_t func = jit_function_create(context, signature);
     // 生成指令：jit_insn_add(func, a, b);
     jit_function_compile(func);
     jit_function_apply(func, args, &result);
     ```

### 2. 编译器安全漏洞
   - **缓冲区溢出检测**：
     ```c
     // 开启GCC栈保护
     gcc -fstack-protector-all program.c
     ```

### 3. 现代编译器架构
   - **GCC的GIMPLE中间表示**：
     ```c
     // 原始代码：a = b + c * d;
     // GIMPLE表示：
     t1 = c * d;
     a = b + t1;
     ```

---

## **八、学习资源**
### 1. 推荐书籍
   - 《Compilers: Principles, Techniques, and Tools》（龙书）
   - 《Modern Compiler Implementation in C》（虎书）
   - 《Engineering a Compiler》

### 2. 开源项目
   - **TinyCC**（适合学习的微型C编译器）
   - **LLVM官方教程**（实现Kaleidoscope语言）
   - **GCC源码分析**（研究GIMPLE和RTL）

### 3. 工具链
   - **Flex/Bison**：词法/语法分析生成器
   - **ANTLR**：多语言支持的解析器生成器
   - **Clang AST Viewer**：可视化C代码的AST

---

## **九、学习路径建议**
```mermaid
graph LR
  A[基础语法] --> B[词法分析]
  B --> C[语法分析]
  C --> D[语义分析]
  D --> E[中间代码生成]
  E --> F[优化与目标代码]
  F --> G[实战项目]
  G --> H[LLVM/GCC研究]
```

通过这个大纲，学习者可以逐步掌握从理论到实践的完整编译器开发技能，最终具备修改或开发真实编译器的能力。



学习编译原理和C/C++编译器开发可以通过实践小项目快速掌握核心概念。以下是分阶段的实践建议和项目推荐，涵盖从基础到进阶的内容：

---

### **阶段一：基础理解**

#### 项目1：手工实现四则运算计算器

- **目标**：实现支持加减乘除和括号的表达式计算
- **技术点**：
  - 词法分析（手工编写正则表达式或逐字符解析）
  - 语法分析（递归下降或算符优先分析法）
  - 直接解释执行（无需生成中间代码）
- **扩展**：
  - 支持变量赋值（如 `a = 2 + 3*5`）
  - 错误处理（如括号不匹配、除零错误）
- **推荐实现**：纯C/C++手动解析，不使用工具如Flex/Bison

---

### **阶段二：解析器生成与AST**

#### 项目2：JSON解析器

- **目标**：将JSON字符串转换为内存中的数据结构（如C++的`unordered_map`）
- **技术点**：
  - 递归下降解析（处理嵌套结构）
  - 抽象语法树（AST）构建
  - 内存管理（处理字符串、数组、对象）
- **扩展**：
  - 生成JSON字符串（反向操作）
  - 支持注释（非标准扩展）

---

### **阶段三：代码生成**

#### 项目3：表达式到汇编的编译器

- **目标**：将算术表达式编译为x86汇编或LLVM IR

- **技术点**：

  - 中间表示（如三地址码）
  - 寄存器分配（简单策略如直接映射）
  - 目标代码生成（如NASM汇编或LLVM API）

- **示例**：

  ```c
  // 输入：2 + 3*(5 - 1)
  // 输出汇编：
  mov eax, 2
  mov ebx, 3
  mov ecx, 5
  sub ecx, 1
  imul ebx, ecx
  add eax, ebx
  ```

---

### **阶段四：虚拟机与字节码**

#### 项目4：栈式虚拟机

- **目标**：设计自定义字节码并实现解释执行

- **技术点**：

  - 指令集设计（如PUSH/POP/ADD/MUL/JMP）
  - 虚拟机循环（fetch-decode-execute）
  - 运行时栈管理

- **示例字节码**：

  ```
  PUSH 2
  PUSH 3
  ADD     // 栈顶结果5
  ```

---

### **阶段五：完整编译器子集**

#### 项目5：Tiny-C编译器

- **目标**：支持C语言子集（变量、函数、控制流）
- **技术点**：
  - 符号表管理
  - 类型系统（至少支持int/float）
  - 控制流图生成（if/for/while）
- **推荐参考**：  
  - 开源项目`8cc`（小型C编译器）
  - 《低负担的C编译器实现》（豆瓣评分9.0）

---

### **阶段六：进阶挑战**

#### 项目6：代码优化器

- **目标**：对中间代码进行优化
- **技术点**：
  - 常量传播
  - 死代码消除
  - 循环不变式外提
- **推荐方法**：基于SSA（静态单赋值形式）

---

### **学习资源推荐**

1. **书籍**：
   - 《Compilers: Principles, Techniques, and Tools》（龙书）
   - 《Engineering a Compiler》（偏重实践）
2. **工具链**：
   - Flex/Bison（词法/语法生成器）
   - LLVM（用于后端代码生成）
3. **开源项目**：
   - [TinyCC](https://github.com/TinyCC/tinycc)（轻量级C编译器）
   - [Chibicc](https://github.com/rui314/chibicc)（Rui Ueyama的教学编译器）

---

### **关键理论补充**

- 正则表达式与有限自动机（词法分析）
- 上下文无关文法与LL/LR解析（语法分析）
- 语法制导翻译（语义分析）
- 寄存器分配算法（图着色）

建议从200行左右的小项目起步，逐步迭代复杂度。例如先实现`1+2*3`的解析，再逐步添加变量、函数等特性。



学习编译原理和实现编译器相关的小项目是深入理解编程语言底层机制的好方法。以下是一些适合初学者的C/C++编译原理小项目，分阶段从易到难排列：

---

### **阶段一：基础词法 & 语法分析**
#### 1. **简易计算器（词法分析器 Lexer）**
   - **目标**：实现一个能够解析数学表达式（如 `3 + 5 * (2 - 4)`）的词法分析器。
   - **技术点**：
     - 使用正则表达式或手动编写状态机识别数字、运算符、括号等 Token。
     - 输出 Token 序列（如 `NUMBER(3), PLUS, NUMBER(5), MULTIPLY, LPAREN, ...`）。
   - **扩展**：
     - 支持变量名（如 `x = 3 + y`）。
     - 支持注释和错误提示。

#### 2. **递归下降语法分析器（Parser）**
   - **目标**：实现一个支持优先级和括号的表达式解析器。
   - **技术点**：
     - 根据文法规则（如 BNF）编写递归下降解析器。
     - 生成抽象语法树（AST）或直接计算表达式结果。
   - **示例文法**：
     ```bnf
     expr   → term + expr | term - expr | term
     term   → factor * term | factor / term | factor
     factor → NUMBER | ( expr )
     ```

---

### **阶段二：简单语言解释器**
#### 3. **支持变量和赋值的解释器**
   - **目标**：扩展计算器项目，支持变量声明和赋值（如 `a = 3 + 5; b = a * 2;`）。
   - **技术点**：
     - 符号表（Symbol Table）管理变量。
     - 实现作用域（局部变量 vs 全局变量）。
   - **扩展**：
     - 支持条件语句（如 `if (a > 0) { ... }`）。
     - 支持循环（如 `while (x < 10) { x = x + 1; }`）。

#### 4. **Tiny 语言解释器**
   - **目标**：实现一个类似以下语法的解释器：
     ```c
     // 示例代码
     int main() {
       int a = 5;
       print(a + 3);
       return 0;
     }
     ```
   - **技术点**：
     - 实现函数调用栈。
     - 支持基础数据类型（整数、浮点数）。
     - 简单的输入/输出（如 `print` 函数）。

---

### **阶段三：代码生成与编译器**
#### 5. **汇编代码生成器**
   - **目标**：将算术表达式或简单语句转换为汇编代码（如 x86 或 RISC-V）。
   - **示例输入**：
     ```c
     a = (3 + 5) * 2;
     ```
   - **输出汇编**：
     ```asm
     mov eax, 3
     add eax, 5
     imul eax, 2
     mov [a], eax
     ```
   - **技术点**：
     - 寄存器分配（简单场景下固定寄存器即可）。
     - 汇编指令映射。

#### 6. **C 子集编译器（编译到 LLVM IR 或 WASM）**
   - **目标**：将 Tiny-C 代码（如支持函数、循环）编译到 LLVM IR 或 WebAssembly。
   - **技术点**：
     - 使用 LLVM API 生成中间代码。
     - 内存管理和类型系统。
   - **工具推荐**：
     - LLVM 官方教程（[Kaleidoscope 示例](https://llvm.org/docs/tutorial/)）。
     - Emscripten（编译到 WASM）。

---

### **阶段四：进阶挑战**
#### 7. **实现 Markdown 到 HTML 的转换器（Transpiler）**
   - **目标**：理解编译前端技术（词法、语法分析）的实际应用。
   - **技术点**：
     - 设计 Markdown 的文法规则。
     - 生成 HTML 标签树。

#### 8. **微型优化编译器**
   - **目标**：在生成代码时实现简单优化（如常量折叠、死代码消除）。
   - **示例优化**：
     - 将 `3 + 5 * 2` 直接计算为 `13`。
     - 删除无用的赋值语句（如 `a = 5; a = 10;` → `a = 10;`）。

---

### **学习资源推荐**
1. **书籍**：
   - 《编译器设计》（Engineering a Compiler）—— 实践性强。
   - 《现代编译原理》（Modern Compiler Implementation in C）—— 著名的“虎书”。
   - 《龙书》（Compilers: Principles, Techniques, and Tools）—— 经典理论教材。

2. **在线课程**：
   - [Coursera: Stanford Compilers](https://www.coursera.org/learn/compilers)（Alex Aiken 的经典课程）。
   - [LLVM 官方教程](https://llvm.org/docs/tutorial/)。

3. **工具**：
   - Flex/Bison（自动生成词法/语法分析器）。
   - ANTLR（强大的解析器生成工具）。
   - LLVM（代码生成框架）。

---

### **项目开发建议**
- **逐步迭代**：从词法分析 → 语法分析 → 语义分析 → 代码生成分阶段实现。
- **测试驱动**：为每个模块编写测试用例（如解析 `2 + 3 * 4` 是否生成正确的 AST）。
- **参考开源项目**：
  - [TCC（Tiny C Compiler）](https://bellard.org/tcc/)：轻量级 C 编译器。
  - [Chibicc](https://github.com/rui314/chibicc)：一个教学级 C 编译器。

通过这些项目，你可以逐步掌握编译原理的核心概念（如有限状态机、上下文无关文法、中间表示等），并最终实现自己的小型编译器！









以下是 **GCC/Clang 编译器选项的全面详细说明**，涵盖开发、优化、调试、安全、跨平台等场景，按功能分类整理：

---

## 一、**编译流程与阶段控制**
### 1. **分阶段编译**
- **`-E`**：仅预处理，输出 `.i` 文件（展开宏、包含头文件）。
  ```bash
  gcc -E main.c -o main.i  # 查看预处理后的代码（调试宏问题）
  clang -E -P main.c       # 预处理后不保留行标记（-P）
  ```
- **`-S`**：生成汇编代码（`.s` 文件），可结合 `-masm=intel` 输出 Intel 格式汇编。
  ```bash
  gcc -S -masm=intel main.c -o main.s
  ```
- **`-c`**：编译为对象文件（`.o`），不链接。
  ```bash
  gcc -c main.c -o main.o  # 分步编译，常用于 Makefile
  ```

### 2. **链接控制**
- **`-o <output>`**：指定输出文件名。
- **`-l<library>`**：链接动态库（如 `-lpthread` 链接线程库）。
- **`-L<path>`**：指定库搜索路径。
  ```bash
  gcc main.c -L./lib -lmylib -o app
  ```
- **`-static`**：强制静态链接（`.a` 文件）。
  ```bash
  gcc main.c -static -lgmp -o app  # 静态链接 GMP 库
  ```
- **`-shared`**：生成动态库（`.so`/`.dll`）。
  ```bash
  gcc -shared -fPIC lib.c -o libmylib.so
  ```
- **`-nostdlib`**：不链接标准库（用于裸机开发）。
  ```bash
  gcc -nostdlib -ffreestanding boot.s -o kernel.elf
  ```

---

## 二、**代码优化与生成**
### 1. **优化级别**
- **`-O0`**：禁用优化（默认，调试用）。
- **`-O1`**：基础优化（减少代码大小，提高速度）。
- **`-O2`**：推荐优化（包括循环展开、指令调度）。
- **`-O3`**：激进优化（可能增加代码体积，向量化）。
- **`-Os`**：优化代码体积（嵌入式场景）。
- **`-Ofast`**：打破严格标准，激进优化（可能影响精度）。
  ```bash
  gcc -O3 -march=native -ffast-math main.c -o app  # 高性能计算
  ```

### 2. **架构与指令集优化**
- **`-march=<arch>`**：指定目标架构（如 `skylake`, `znver3`）。
- **`-mtune=<arch>`**：优化代码以适应流水线。
- **`-msse4.2`**, **`-mavx2`**：启用特定 SIMD 指令集。
  ```bash
  gcc -mavx2 -mfma main.c -o app  # 使用 AVX2 和 FMA 指令
  ```

### 3. **浮点与数学优化**
- **`-ffast-math`**：放宽浮点精度要求（加速数学运算）。
- **`-fno-trapping-math`**：假设无浮点异常陷阱。
- **`-funsafe-math-optimizations`**：允许不安全的数学优化。

---

## 三、**调试与诊断**
### 1. **调试信息**
- **`-g`**：生成调试符号（默认 `dwarf` 格式）。
- **`-g3`**：包含宏定义等额外调试信息。
- **`-ggdb`**：生成 GDB 专用格式。
- **`-gsplit-dwarf`**：分离调试信息到 `.dwo` 文件（减少体积）。
- **`-fno-omit-frame-pointer`**：保留帧指针（方便调试栈）。

### 2. **动态分析工具**
- **`-fsanitize=address`**：启用 AddressSanitizer（检测内存错误）。
- **`-fsanitize=undefined`**：检测未定义行为（除零、空指针等）。
- **`-fsanitize=thread`**：检测多线程数据竞争。
- **`-fsanitize=leak`**：检测内存泄漏（需结合 ASan）。
  ```bash
  clang -fsanitize=address,undefined main.c -o app
  ```

### 3. **性能分析**
- **`-pg`**：生成 `gprof` 性能分析数据。
- **`-fprofile-arcs`**：生成代码覆盖率数据（`gcov` 使用）。
- **`-ftest-coverage`**：生成 `.gcno` 和 `.gcda` 覆盖率文件。
  ```bash
  gcc -fprofile-arcs -ftest-coverage main.c -o app
  ```

---

## 四、**警告与错误处理**
### 1. **警告控制**
- **`-Wall`**：启用所有常见警告（未使用变量、函数未返回等）。
- **`-Wextra`**（GCC）/**`-Weverything`**（Clang）：启用额外警告。
- **`-Werror`**：将警告视为错误（严格模式）。
- **`-Wshadow`**：警告变量遮蔽。
- **`-Wconversion`**：警告隐式类型转换。
  ```bash
  clang -Weverything -Wno-unused-parameter main.c
  ```

### 2. **错误信息增强**
- **`-fdiagnostics-show-option`**：显示触发警告的选项。
- **`-fdiagnostics-color=always`**：彩色输出（Clang 默认启用）。
- **`-fmax-errors=5`**：最多显示 5 个错误后停止。

---

## 五、**语言标准与扩展**
### 1. **标准版本**
- **`-std=<standard>`**：指定语言标准。
  - C: `c89`, `c99`, `c11`, `c17`, `c2x`
  - C++: `c++98`, `c++11`, `c++14`, `c++17`, `c++20`, `c++23`
  ```bash
  clang++ -std=c++20 -stdlib=libc++ main.cpp
  ```

### 2. **扩展与兼容性**
- **`-pedantic`**：严格遵循 ISO 标准，禁用 GNU 扩展。
- **`-fms-extensions`**（Clang）：支持 MSVC 扩展语法。
- **`-fopenmp`**：启用 OpenMP 并行支持。
  ```bash
  gcc -fopenmp -lgomp main.c  # 编译 OpenMP 并行代码
  ```

---

## 六、**预处理与宏**
### 1. **宏定义**
- **`-D<NAME>[=VALUE]`**：定义预处理宏。
  ```bash
  gcc -DDEBUG=1 -DVERSION=\"1.0\" main.c
  ```
- **`-U<NAME>`**：取消宏定义。

### 2. **头文件与路径**
- **`-I<dir>`**：添加头文件搜索路径。
- **`-iquote<dir>`**：仅对 `#include "..."` 生效的路径。
- **`-isystem<dir>`**：指定系统头文件路径（抑制警告）。
- **`-include <file>`**：强制包含头文件。
  ```bash
  gcc -I./include -include config.h main.c
  ```

---

## 七、**代码生成与安全**
### 1. **安全加固**
- **`-fstack-protector-strong`**：栈溢出保护（GCC 默认启用）。
- **`-D_FORTIFY_SOURCE=2`**：启用运行时缓冲区检查。
- **`-Wl,-z,relro,-z,now`**：启用完整 RELRO（链接器选项）。
  ```bash
  gcc -fstack-protector-strong -D_FORTIFY_SOURCE=2 main.c
  ```

### 2. **位置无关代码**
- **`-fPIC`**：生成位置无关代码（动态库必须）。
- **`-fPIE`**：生成位置无关可执行文件（配合 `-pie`）。
  ```bash
  gcc -fPIE -pie main.c -o app  # 增强 ASLR 保护
  ```

---

## 八、**跨平台与交叉编译**
### 1. **目标平台指定**
- **`-m32`**/**`-m64`**：生成 32 位或 64 位代码。
- **`-target <triple>`**（Clang）：指定目标平台（如 `arm-linux-gnueabihf`）。
  ```bash
  clang -target arm-linux-gnueabihf -mcpu=cortex-a72 main.c
  ```

### 2. **交叉编译工具链**
- **`--sysroot=<dir>`**：指定目标系统的根目录。
  ```bash
  clang --sysroot=/opt/arm-sysroot -target arm-linux main.c
  ```

---

## 九、**其他高级选项**
### 1. **内联控制**
- **`-finline-functions`**：允许函数内联。
- **`-fno-inline`**：禁用所有内联（调试时使用）。

### 2. **链接器控制**
- **`-Wl,<option>`**：传递选项给链接器。
  ```bash
  gcc main.c -Wl,--as-needed,-rpath,/usr/local/lib
  ```

### 3. **代码生成细节**
- **`-fverbose-asm`**：在汇编代码中添加注释。
- **`-save-temps`**：保留所有中间文件（`.i`, `.s`, `.o`）。
  ```bash
  gcc -save-temps main.c  # 保留预处理、汇编、目标文件
  ```

---

## 十、**Clang 特有功能**
### 1. **静态分析**
- **`--analyze`**：运行 Clang 静态分析器。
  ```bash
  clang --analyze main.c  # 生成静态分析报告
  ```

### 2. **代码格式化**
- **`-Xclang -format=<style>`**：指定 AST 转储格式。

### 3. **模块支持**
- **`-fmodules`**：启用 C++/Objective-C 模块（需要 `-std=c++20`）。

---

## 十一、**实际场景组合示例**
### 1. **安全敏感项目**
```bash
clang -O2 -flto -fstack-protector-strong -D_FORTIFY_SOURCE=2 \
      -Wl,-z,relro,-z,now -fsanitize=address,undefined main.c -o app
```
- `-flto`：启用链接时优化。
- `-fsanitize`：内存和未定义行为检查。

### 2. **嵌入式开发**
```bash
arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -specs=nosys.specs \
                 -ffunction-sections -fdata-sections \
                 -Wl,--gc-sections main.c -o firmware.elf
```
- `-ffunction-sections`：按函数分段（方便链接器优化）。
- `-specs=nosys.specs`：禁用系统库依赖。

### 3. **高性能计算**
```bash
gcc -O3 -march=native -fopenmp -ffast-math -funroll-loops \
    -lm -lgomp main.c -o solver
```
- `-funroll-loops`：循环展开优化。
- `-fopenmp`：启用多线程并行。

---

掌握这些选项后，您可以根据需求灵活组合，优化代码性能、增强安全性或适配特定平台！