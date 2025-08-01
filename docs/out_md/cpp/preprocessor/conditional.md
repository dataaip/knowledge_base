# Conditional inclusion

From cppreference.com
< cpp‎ | preprocessor
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

Preprocessor

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| ****#if#ifdef#ifndef#else#elif#elifdef#elifndef#endif****(C++23)(C++23) | | | | |
| #define#undef#,## operators | | | | |
| #include__has_include(C++17) | | | | |
| #error#warning(C++23) | | | | |
| #pragma_Pragma(C++11) | | | | |
| #line | | | | |

The preprocessor supports conditional compilation of parts of source file. This behavior is controlled by `#if`, `#else`, `#elif`, `#ifdef`, `#ifndef`, `#elifdef`, `#elifndef`(since C++23), and `#endif` directives.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `#if` expression |  |  |
|  | | | | | | | | | |
| `#ifdef` identifier |  |  |
|  | | | | | | | | | |
| `#ifndef` identifier |  |  |
|  | | | | | | | | | |
| `#elif` expression |  |  |
|  | | | | | | | | | |
| `#elifdef` identifier |  | (since C++23) |
|  | | | | | | | | | |
| `#elifndef` identifier |  | (since C++23) |
|  | | | | | | | | | |
| `#else` |  |  |
|  | | | | | | | | | |
| `#endif` |  |  |
|  | | | | | | | | | |

### Explanation

The conditional preprocessing block starts with `#if`, `#ifdef` or `#ifndef` directive, then optionally includes any number of `#elif`, `#elifdef`, or `#elifndef`(since C++23) directives, then optionally includes at most one `#else` directive and is terminated with `#endif` directive. Any inner conditional preprocessing blocks are processed separately.

Each of `#if`, `#ifdef`, `#ifndef`, `#elif`, `#elifdef`, `#elifndef`(since C++23), and `#else` directives control the code block until the first `#elif`, `#elifdef`, `#elifndef`(since C++23), `#else`, `#endif` directive not belonging to any inner conditional preprocessing blocks.

`#if`, `#ifdef` and `#ifndef` directives test the specified condition (see below) and if it evaluates to true, compiles the controlled code block. In that case subsequent `#else`, `#elifdef`, `#elifndef`,(since C++23) and `#elif` directives are ignored. Otherwise, if the specified condition evaluates false, the controlled code block is skipped and the subsequent `#else`, `#elifdef`, `#elifndef`,(since C++23) or `#elif` directive (if any) is processed. If the subsequent directive is `#else`, the code block controlled by the `#else` directive is unconditionally compiled. Otherwise, the `#elif`, `#elifdef`, or `#elifndef`(since C++23) directive acts as if it was `#if` directive: checks for condition, compiles or skips the controlled code block based on the result, and in the latter case processes subsequent `#elif`, `#elifdef`, `#elifndef`,(since C++23) and `#else` directives. The conditional preprocessing block is terminated by `#endif` directive.

### Condition evaluation

#### #if, #elif

The expression may contain:

- unary operators in form `defined` identifier or `defined (`identifier`)`. The result is 1 if the identifier was defined as a macro name, otherwise the result is ​0​. `__has_­include` and `__has_cpp_attribute`(since C++20) are treated as if they were the names of defined macros in this context.(since C++17)
- (since C++17) __has_include expressions, which detects whether a header or source file exists.
- (since C++20) __has_cpp_attribute expressions, which detects whether a given attribute token is supported and its supported version.

After all macro expansion and evaluation of `defined`, `__has_include`(since C++17), and `__has_cpp_attribute`(since C++20) expressions, any identifier which is not a boolean literal is replaced with the number ​0​ (this includes identifiers that are lexically keywords, but not alternative tokens like and).

Then the expression is evaluated as an integral constant expression.

If the expression evaluates to nonzero value, the controlled code block is included and skipped otherwise.

Note: Until the resolution of CWG issue 1955, `#if cond1` ... `#elif cond2` is different from `#if cond1` ... `#else` followed by `#if cond2` because if `cond1` is true, the second `#if` is skipped and `cond2` does not need to be well-formed, while `#elif`'s `cond2` must be a valid expression. As of CWG 1955, `#elif` that leads the skipped code block is also skipped.

#### Combined directives

Checks if the identifier was defined as a macro name.

`#ifdef` identifier is essentially equivalent to `#if defined` identifier.

`#ifndef` identifier is essentially equivalent to `#if !defined` identifier.

|  |  |
| --- | --- |
| `#elifdef` identifier is essentially equivalent to `#elif defined` identifier.  `#elifndef` identifier is essentially equivalent to `#elif !defined` identifier. | (since C++23) |

### Notes

While `#elifdef` and `#elifndef` directives target C++23, implementations are encouraged to backport them to the older language modes as conforming extensions.

### Example

Run this code

```
#define ABCD 2
#include <iostream>
 
int main()
{
 
#ifdef ABCD
    std::cout << "1: yes\n";
#else
    std::cout << "1: no\n";
#endif
 
#ifndef ABCD
    std::cout << "2: no1\n";
#elif ABCD == 2
    std::cout << "2: yes\n";
#else
    std::cout << "2: no2\n";
#endif
 
#if !defined(DCBA) && (ABCD < 2*4-3)
    std::cout << "3: yes\n";
#endif
 
 
// Note that if a compiler does not support C++23's #elifdef/#elifndef
// directives then the "unexpected" block (see below) will be selected.
#ifdef CPU
    std::cout << "4: no1\n";
#elifdef GPU
    std::cout << "4: no2\n";
#elifndef RAM
    std::cout << "4: yes\n"; // expected block
#else
    std::cout << "4: no!\n"; // unexpectedly selects this block by skipping
                             // unknown directives and "jumping" directly
                             // from "#ifdef CPU" to this "#else" block
#endif
 
// To fix the problem above we may conditionally define the
// macro ELIFDEF_SUPPORTED only if the C++23 directives
// #elifdef/#elifndef are supported.
#if 0
#elifndef UNDEFINED_MACRO
#define ELIFDEF_SUPPORTED
#else
#endif
 
#ifdef ELIFDEF_SUPPORTED
    #ifdef CPU
        std::cout << "4: no1\n";
    #elifdef GPU
        std::cout << "4: no2\n";
    #elifndef RAM
        std::cout << "4: yes\n"; // expected block
    #else
        std::cout << "4: no3\n";
    #endif
#else // when #elifdef unsupported use old verbose `#elif defined`
    #ifdef CPU
        std::cout << "4: no1\n";
    #elif defined GPU
        std::cout << "4: no2\n";
    #elif !defined RAM
        std::cout << "4: yes\n"; // expected block
    #else
        std::cout << "4: no3\n";
    #endif
#endif
}

```

Possible output:

```
1: yes
2: yes
3: yes
4: no!
4: yes

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1955 | C++98 | failed #elif's expression was required to be valid | failed #elif is skipped |

### See also

|  |  |
| --- | --- |
| C documentation for Conditional inclusion | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/preprocessor/conditional&oldid=154413>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 June 2023, at 02:47.