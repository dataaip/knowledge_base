# `for` loop

From cppreference.com
< cpp‎ | language
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Freestanding and hosted | | | | |
| Language | | | | |
| Standard library | | | | |
| Standard library headers | | | | |
| Named requirements | | | | |
| Feature test macros (C++20) | | | | |
| Language support library | | | | |
| Concepts library (C++20) | | | | |
| Diagnostics library | | | | |
| Memory management library | | | | |
| Metaprogramming library (C++11) | | | | |
| General utilities library | | | | |
| Containers library | | | | |
| Iterators library | | | | |
| Ranges library (C++20) | | | | |
| Algorithms library | | | | |
| Strings library | | | | |
| Text processing library | | | | |
| Numerics library | | | | |
| Date and time library | | | | |
| Input/output library | | | | |
| Filesystem library (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

C++ language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General topics | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Preprocessor | | | | | | Comments | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Keywords | | | | | | Escape sequences | | | | | |
| Flow control | | | | |
| Conditional execution statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | switch | | | | | |
| Iteration statements (loops) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****for**** | | | | | | range-`for` (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | while | | | | | | `do-while` | | | | | |
| Jump statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | continue - break | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | goto - return | | | | | |
| Functions | | | | |
| Function declaration | | | | |
| Lambda function expression | | | | |
| `inline` specifier | | | | |
| Dynamic exception specifications (until C++17\*) | | | | |
| `noexcept` specifier (C++11) | | | | |
| Exceptions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `throw`-expression | | | | | | `try` block | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | `catch` handler | | | | | |
| Namespaces | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace declaration | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace aliases | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Fundamental types | | | | | | Enumeration types | | | | | | Function types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class/struct types | | | | | | Union types | | | | | |  | | | | | |
| Specifiers | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const`/`volatile` | | | | | | decltype (C++11) | | | | | | auto (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | constexpr (C++11) | | | | | | consteval (C++20) | | | | | | constinit (C++20) | | | | | |
| Storage duration specifiers | | | | |
| Initialization | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Expressions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operators | | | | | | Operator precedence | | | | | |
| Alternative representations | | | | |
| Literals | | | | |
| Boolean - Integer - Floating-point | | | | |
| Character - String - nullptr (C++11) | | | | |
| User-defined (C++11) | | | | |
| Utilities | | | | |
| Attributes (C++11) | | | | |
| Types | | | | |
| `typedef` declaration | | | | |
| Type alias declaration (C++11) | | | | |
| Casts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | static_cast | | | | | | const_cast | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Explicit conversions | | | | | | dynamic_cast | | | | | | reinterpret_cast | | | | | |
| Memory allocation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `new` expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `delete` expression | | | | | |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class declaration | | | | | | Constructors | | | | | | `this` pointer | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Access specifiers | | | | | | `friend` specifier | | | | | |  | | | | | |
| Class-specific function properties | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Virtual function | | | | | | `override` specifier (C++11) | | | | | | `final` specifier (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | explicit (C++11) | | | | | | static | | | | | |  | | | | | |
| Special member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default constructor | | | | | | Copy constructor | | | | | | Move constructor (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Copy assignment | | | | | | Move assignment (C++11) | | | | | | Destructor | | | | | |
| Templates | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class template | | | | | | Function template | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Template specialization | | | | | | Parameter packs (C++11) | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Inline assembly | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | History of C++ | | | | | |

 Statements

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Labels | | | | |
| label : statement | | | | |
| Expression statements | | | | |
| expression ; | | | | |
| Compound statements | | | | |
| `{` statement... `}` | | | | |
| Selection statements | | | | |
| if | | | | |
| switch | | | | |
| Iteration statements | | | | |
| while | | | | |
| do while | | | | |
| ****for**** | | | | |
| range for (C++11) | | | | |
| Jump statements | | | | |
| break | | | | |
| continue | | | | |
| return | | | | |
| goto | | | | |
| Declaration statements | | | | |
| declaration ; | | | | |
| Try blocks | | | | |
| try block | | | | |
| Transactional memory | | | | |
| `synchronized`, `atomic_commit`, etc (TM TS) | | | | |

Conditionally executes a statement repeatedly, where the statement does not need to manage the loop condition.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr ﻿(optional) `for (` init-statement condition ﻿(optional) `;` expression ﻿(optional) `)` statement |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) any number of attributes |
| init-statement | - | one of  - an expression statement (which may be a null statement ;) - a simple declaration (typically a declaration of a loop counter variable with initializer), it may declare arbitrary many variables or structured bindings(since C++17)  |  |  | | --- | --- | | - an alias declaration | (since C++23) |   Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon. |
| condition | - | a condition |
| expression | - | an expression (typically an expression that increments the loop counter) |
| statement | - | a statement (typically a compound statement) |

### Condition

A condition can either be an expression or a simple declaration.

|  |  |
| --- | --- |
| - If it can be syntactically resolved as a structured binding declaration, it is interpreted as a structured binding declaration. | (since C++26) |

- If it can be syntactically resolved as an expression, it is treated as an expression. Otherwise, it is treated as a declaration that is not a structured binding declaration(since C++26).

When control reaches condition, the condition will yield a value, which is used to determine whether statement will be executed.

#### Expression

If condition is an expression, the value it yields is the the value of the expression contextually converted to bool. If that conversion is ill-formed, the program is ill-formed.

#### Declaration

If condition is a simple declaration, the value it yields is the value of the decision variable (see below) contextually converted to bool. If that conversion is ill-formed, the program is ill-formed.

##### Non-structured binding declaration

The declaration has the following restrictions:

- Syntactically conforms to the following form:

|  |  |
| --- | --- |
| - type-specifier-seq declarator `=` assignment-expression | (until C++11) |
| - attribute-specifier-seq(optional) decl-specifier-seq declarator brace-or-equal-initializer | (since C++11) |

- The declarator cannot specify a function or an array.
- The type specifier sequence(until C++11)declaration specifier sequence can only contain type specifiers and constexpr, and it(since C++11) cannot define a class or enumeration.

The decision variable of the declaration is the declared variable.

|  |  |
| --- | --- |
| Structured binding declaration The declaration has the following restrictions:   - The expression in its initializer cannot be of an array type. - The declaration specifier sequence can only contain type specifiers and constexpr.   The decision variable of the declaration is the invented variable e introduced by the declaration. | (since C++26) |

### Explanation

A for statement equivalent to:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `{`  init-statement  `while (` condition `)`  `{`  statement  expression `;`  `}`  `}` |  |  |
|  | | | | | | | | | |

Except that

- The scope of init-statement and the scope of condition are the same.
- The scope of statement and the scope of expression are disjoint and nested within the scope of init-statement and condition.
- Executing a continue statement in statement will evaluate expression.
- Empty condition is equivalent to true.

If the loop needs to be terminated within statement, a break statement can be used as terminating statement.

If the current iteration needs to be terminated within statement, a continue statement can be used as shortcut.

### Notes

As is the case with `while` loop, if statement is not a compound statement, the scope of variables declared in it is limited to the loop body as if it was a compound statement.

```
for (;;)
    int n;
// n goes out of scope

```

As part of the C++ forward progress guarantee, the behavior is undefined if a loop that is not a trivial infinite loop(since C++26) without observable behavior does not terminate. Compilers are permitted to remove such loops.

While in C names declared in the scope of init-statement and condition can be shadowed in the scope of statement, it is forbidden in C++:

```
for (int i = 0;;)
{
    long i = 1;   // valid C, invalid C++
    // ...
}

```

### Keywords

for

### Example

Run this code

```
#include <iostream>
#include <vector>
 
int main()
{
    std::cout << "1) typical loop with a single statement as the body:\n";
    for (int i = 0; i < 10; ++i)
        std::cout << i << ' ';
 
    std::cout << "\n\n" "2) init-statement can declare multiple names, as\n"
                 "long as they can use the same decl-specifier-seq:\n";
    for (int i = 0, *p = &i; i < 9; i += 2)
        std::cout << i << ':' << *p << ' ';
 
    std::cout << "\n\n" "3) condition may be a declaration:\n";
    char cstr[] = "Hello";
    for (int n = 0; char c = cstr[n]; ++n)
        std::cout << c;
 
    std::cout << "\n\n" "4) init-statement can use the auto type specifier:\n";
    std::vector<int> v = {3, 1, 4, 1, 5, 9};
    for (auto iter = v.begin(); iter != v.end(); ++iter)
        std::cout << *iter << ' ';
 
    std::cout << "\n\n" "5) init-statement can be an expression:\n";
    int n = 0;
    for (std::cout << "Loop start\n";
         std::cout << "Loop test\n";
         std::cout << "Iteration " << ++n << '\n')
    {
        if (n > 1)
            break;
    }
 
    std::cout << "\n" "6) constructors and destructors of objects created\n"
                 "in the loop's body are called per each iteration:\n";
    struct S
    {
        S(int x, int y) { std::cout << "S::S(" << x << ", " << y << "); "; }
        ~S() { std::cout << "S::~S()\n"; }
    };
    for (int i{0}, j{5}; i < j; ++i, --j)
        S s{i, j};
 
    std::cout << "\n" "7) init-statement can use structured bindings:\n";
    long arr[]{1, 3, 7};
    for (auto [i, j, k] = arr; i + j < k; ++i)
        std::cout << i + j << ' ';
    std::cout << '\n';
}

```

Output:

```
1) typical loop with a single statement as the body:
0 1 2 3 4 5 6 7 8 9
 
2) init-statement can declare multiple names, as
long as they can use the same decl-specifier-seq:
0:0 2:2 4:4 6:6 8:8
 
3) condition may be a declaration:
Hello
 
4) init-statement can use the auto type specifier:
3 1 4 1 5 9
 
5) init-statement can be an expression:
Loop start
Loop test
Iteration 1
Loop test
Iteration 2
Loop test
 
6) constructors and destructors of objects created
in the loop's body are called per each iteration:
S::S(0, 5); S::~S()
S::S(1, 4); S::~S()
S::S(2, 3); S::~S()
 
7) init-statement can use structured bindings:
4 5 6

```

### See also

|  |  |
| --- | --- |
| range-`for` loop(C++11) | executes loop over range |
| C documentation for for | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/for&oldid=173814>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 July 2024, at 00:07.