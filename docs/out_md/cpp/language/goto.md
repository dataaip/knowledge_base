# `goto` statement

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | for | | | | | | range-`for` (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | while | | | | | | `do-while` | | | | | |
| Jump statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | continue - break | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****goto**** - return | | | | | |
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
| for | | | | |
| range for (C++11) | | | | |
| Jump statements | | | | |
| break | | | | |
| continue | | | | |
| return | | | | |
| ****goto**** | | | | |
| Declaration statements | | | | |
| declaration ; | | | | |
| Try blocks | | | | |
| try block | | | | |
| Transactional memory | | | | |
| `synchronized`, `atomic_commit`, etc (TM TS) | | | | |

Transfers control unconditionally.

Used when it is otherwise impossible to transfer control to the desired location using other statements.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr ﻿(optional) `goto` label `;` |  |  |
|  | | | | | | | | | |

### Explanation

The goto statement transfers control to the location specified by label. The goto statement must be in the same function as the label it is referring, it may appear before or after the label.

If transfer of control exits the scope of any automatic variables (e.g. by jumping backwards to a point before the declarations of such variables or by jumping forward out of a compound statement where the variables are scoped), the destructors are called for all variables whose scope was exited, in the order opposite to the order of their construction.

The goto statement cannot transfer control into a control-flow-limited statement, but can transfer control out of a control-flow-limited statement (the rules above regarding automatic variables in scope are followed).

If transfer of control enters the scope of any automatic variables (e.g. by jumping forward over a declaration statement), the program is ill-formed (cannot be compiled), unless all variables whose scope is entered have the following types:

- scalar types declared without initializers
- class types with trivial default constructors and trivial destructors declared without initializers
- cv-qualified versions of one of the above
- arrays of one of the above

(Note: the same rules apply to all forms of transfer of control)

### Notes

In the C programming language, the goto statement has fewer restrictions and can enter the scope of any variable other than variable-length array or variably-modified pointer.

### Keywords

goto

### Example

Run this code

```
#include <iostream>
 
struct Object
{
    // non-trivial destructor
    ~Object() { std::cout << 'd'; }
};
 
struct Trivial
{
    double d1;
    double d2;
}; // trivial ctor and dtor
 
int main()
{
    int a = 10;
 
    // loop using goto
label:
    Object obj;
    std::cout << a << ' ';
    a -= 2;
 
    if (a != 0)
        goto label;  // jumps out of scope of obj, calls obj destructor
    std::cout << '\n';
 
    // goto can be used to efficiently leave a multi-level (nested) loops
    for (int x = 0; x < 3; ++x)
        for (int y = 0; y < 3; ++y)
        {
            std::cout << '(' << x << ',' << y << ") " << '\n';
            if (x + y >= 3)
                goto endloop;
        }
 
endloop:
    std::cout << '\n';
 
    goto label2; // jumps into the scope of n and t
 
    [[maybe_unused]] int n; // no initializer
 
    [[maybe_unused]] Trivial t; // trivial ctor/dtor, no initializer
 
//  int x = 1;   // error: has initializer
//  Object obj2; // error: non-trivial dtor
 
label2:
    {
        Object obj3;
        goto label3; // jumps forward, out of scope of obj3
    }
 
label3:
    std::cout << '\n';
}

```

Output:

```
10 d8 d6 d4 d2
(0,0)
(0,1)
(0,2)
(1,0)
(1,1)
(1,2)
 
d
d

```

### See also

|  |  |
| --- | --- |
| C documentation for goto | |

### External links

|  |
| --- |
| The popular Edsger W. Dijkstra essay, “Goto Considered Harmful” (originally, in "Letter to Communications of the ACM (CACM)", vol. 11 #3, March 1968, pp. 147-148.), presents a survey of the many subtle problems the careless use of this keyword can introduce. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/goto&oldid=174302>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 August 2024, at 11:20.