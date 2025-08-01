# Replacing text macros

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
| #if#ifdef#ifndef#else#elif#elifdef#elifndef#endif(C++23)(C++23) | | | | |
| ****#define#undef#,## operators**** | | | | |
| #include__has_include(C++17) | | | | |
| #error#warning(C++23) | | | | |
| #pragma_Pragma(C++11) | | | | |
| #line | | | | |

The preprocessor supports text macro replacement. Function-like text macro replacement is also supported.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `#define` identifier replacement-list ﻿(optional) | (1) |  |
|  | | | | | | | | | |
| `#define` identifier ﻿`(`parameters ﻿`)` replacement-list ﻿(optional) | (2) |  |
|  | | | | | | | | | |
| `#define` identifier ﻿`(`parameters ﻿`, ...)` replacement-list ﻿(optional) | (3) | (since C++11) |
|  | | | | | | | | | |
| `#define` identifier ﻿`(...)` replacement-list ﻿(optional) | (4) | (since C++11) |
|  | | | | | | | | | |
| `#undef` identifier | (5) |  |
|  | | | | | | | | | |

### Explanation

#### #define directives

The #define directives define the identifier as macro, that is instruct the compiler to replace most successive occurrences of identifier with replacement-list, which will be additionally processed. Exceptions arise from the rules of scanning and replacement. If the identifier is already defined as any type of macro, the program is ill-formed unless the definitions are identical.

##### Object-like macros

Object-like macros replace every occurrence of defined identifier with replacement-list. Version (1) of the #define directive behaves exactly like that.

##### Function-like macros

Function-like macros replace each occurrence of defined identifier with replacement-list, additionally taking a number of arguments, which then replace corresponding occurrences of any of the parameters in the replacement-list.

The syntax of a function-like macro invocation is similar to the syntax of a function call: each instance of the macro name followed by a ( as the next preprocessing token introduces the sequence of tokens that is replaced by the replacement-list. The sequence is terminated by the matching ) token, skipping intervening matched pairs of left and right parentheses.

For version (2), the number of arguments must be the same as the number of parameters in macro definition. For versions (3,4), the number of arguments must not be less than the number of parameters (not(since C++20) counting `...`). Otherwise the program is ill-formed. If the identifier is not in functional-notation, i.e. does not have parentheses after itself, it is not replaced at all.

Version (2) of the #define directive defines a simple function-like macro.

Version (3) of the #define directive defines a function-like macro with variable number of arguments. The additional arguments (called **variable arguments**) can be accessed using `__VA_ARGS__` identifier, which is then replaced with arguments, supplied with the identifier to be replaced.

Version (4) of the #define directive defines a function-like macro with variable number of arguments, but no regular arguments. The arguments (called **variable arguments**) can be accessed only with `__VA_ARGS__` identifier, which is then replaced with arguments, supplied with the identifier to be replaced.

|  |  |
| --- | --- |
| For versions (3,4), replacement-list may contain the token sequence `__VA_OPT__(`content ﻿`)`, which is replaced by content if `__VA_ARGS__` is non-empty, and expands to nothing otherwise.   ```text #define F(...) f(0 __VA_OPT__(,) __VA_ARGS__) F(a, b, c) // replaced by f(0, a, b, c) F()        // replaced by f(0)   #define G(X, ...) f(0, X __VA_OPT__(,) __VA_ARGS__) G(a, b, c) // replaced by f(0, a, b, c) G(a, )     // replaced by f(0, a) G(a)       // replaced by f(0, a)   #define SDEF(sname, ...) S sname __VA_OPT__(= { __VA_ARGS__ }) SDEF(foo);       // replaced by S foo; SDEF(bar, 1, 2); // replaced by S bar = { 1, 2 }; ``` | (since C++20) |

Note: if an argument of a function-like macro includes commas that are not protected by matched pairs of left and right parentheses (most commonly found in template argument lists, as in assert(std::is_same_v<int, int>); or BOOST_FOREACH(std::pair<int, int> p, m)), the comma is interpreted as macro argument separator, causing a compilation failure due to argument count mismatch.

##### Scanning and Replacement

- Scanning keeps track of macros they replaced. If scan finds text matching such macro, it marks it "to be ignored" (all scans will ignore it). This prevents recursion.
- If scanning found function-like macro, arguments are scanned before put inside replacement-list. Except # and ## operators take argument without scan.
- After macro was replaced, result text is scanned.

Note, it is possible to define pseudo recursive macro:

Run this code

```
#define EMPTY
#define SCAN(x)     x
#define EXAMPLE_()  EXAMPLE
#define EXAMPLE(n)  EXAMPLE_ EMPTY()(n-1) (n)
EXAMPLE(5)
SCAN(EXAMPLE(5))

```

Output:

```
EXAMPLE_ ()(5 -1) (5)
EXAMPLE_ ()(5 -1 -1) (5 -1) (5)

```

#### Reserved macro names

A translation unit that includes a standard library header may not #define or #undef names declared in any standard library header.

A translation unit that uses any part of the standard library is not allowed to #define or #undef names lexically identical to:

- keywords

|  |  |
| --- | --- |
| - identifiers with special meaning - any standard attribute token, except that likely and unlikely may be defined as function-like macros(since C++20) | (since C++11) |

Otherwise, the behavior is undefined.

#### # and ## operators

In function-like macros, a # operator before an identifier in the replacement-list runs the identifier through parameter replacement and encloses the result in quotes, effectively creating a string literal. In addition, the preprocessor adds backslashes to escape the quotes surrounding embedded string literals, if any, and doubles the backslashes within the string as necessary. All leading and trailing whitespace is removed, and any sequence of whitespace in the middle of the text (but not inside embedded string literals) is collapsed to a single space. This operation is called "stringification". If the result of stringification is not a valid string literal, the behavior is undefined.

|  |  |
| --- | --- |
| When # appears before `__VA_ARGS__`, the entire expanded `__VA_ARGS__` is enclosed in quotes:   ```text #define showlist(...) puts(#__VA_ARGS__) showlist();            // expands to puts("") showlist(1, "x", int); // expands to puts("1, \"x\", int") ``` | (since C++11) |

A ## operator between any two successive identifiers in the replacement-list runs parameter replacement on the two identifiers (which are not macro-expanded first) and then concatenates the result. This operation is called "concatenation" or "token pasting". Only tokens that form a valid token together may be pasted: identifiers that form a longer identifier, digits that form a number, or operators `+` and `=` that form a `+=`. A comment cannot be created by pasting `/` and `*` because comments are removed from text before macro substitution is considered. If the result of concatenation is not a valid token, the behavior is undefined.

Note: some compilers offer an extension that allows ## to appear after a comma and before `__VA_ARGS__`, in which case the ## does nothing when the variable arguments are present, but removes the comma when the variable arguments are not present: this makes it possible to define macros such as fprintf (stderr, format, ##__VA_ARGS__). This can also be achieved in a standard manner using `__VA_OPT__`, such as fprintf (stderr, format __VA_OPT__(, ) __VA_ARGS__).(since C++20)

#### #undef directive

The #undef directive undefines the identifier, that is cancels previous definition of the identifier by #define directive. If the identifier does not have associated macro, the directive is ignored.

### Predefined macros

The following macro names are predefined in every translation unit:

|  |  |
| --- | --- |
| __cplusplus | denotes the version of C++ standard that is being used, expands to value  - 199711L(until C++11), - 201103L(C++11), - 201402L(C++14), - 201703L(C++17), - 202002L(C++20), or - 202302L(C++23)   (macro constant) |
| __STDC_HOSTED__(C++11) | expands to the integer constant 1 if the implementation is hosted (runs under an OS), ​0​ if freestanding (runs without an OS)   (macro constant) |
| __FILE__ | expands to the name of the current file, as a character string literal, can be changed by the `#line` directive   (macro constant) |
| __LINE__ | expands to the line number of the current physical source line, an integer constant, can be changed by the `#line` directive   (macro constant) |
| __DATE__ | expands to the date of translation, a character string literal of the form "Mmm dd yyyy". The first character of "dd" is a space if the day of the month is less than 10. The name of the month is as if generated by std::asctime()   (macro constant) |
| __TIME__ | expands to the time of translation, a character string literal of the form "hh:mm:ss"   (macro constant) |
| __STDCPP_DEFAULT_NEW_ALIGNMENT__(C++17) | expands to an std::size_t literal whose value is the alignment guaranteed by a call to alignment-unaware operator new (larger alignments will be passed to alignment-aware overload, such as operator new(std::size_t, std::align_val_t))   (macro constant) |
| __STDCPP_­BFLOAT16_­T____STDCPP_­FLOAT16_­T____STDCPP_FLOAT32_T____STDCPP_FLOAT64_T____STDCPP_FLOAT128_T__(C++23) | expands to 1 if and only if the implementation supports corresponding extended floating-point type   (macro constant) |

The following additional macro names may be predefined by the implementations:

|  |  |
| --- | --- |
| __STDC__ | implementation-defined value, if present, typically used to indicate C conformance   (macro constant) |
| __STDC_VERSION__(C++11) | implementation-defined value, if present   (macro constant) |
| __STDC_ISO_10646__(C++11) | |  |  | | --- | --- | | expands to an integer constant of the form yyyymmL, if wchar_t uses Unicode, the date indicates the latest revision of Unicode supported | (until C++23) | | implementation-defined value, if present | (since C++23) |    (macro constant) |
| __STDC_MB_MIGHT_NEQ_WC__(C++11) | expands to 1 if 'x' == L'x' might be false for a member of the basic character set, such as on EBCDIC-based systems that use Unicode for wchar_t   (macro constant) |
| __STDCPP_THREADS__(C++11) | expands to 1 if the program can have more than one thread of execution   (macro constant) |

|  |  |
| --- | --- |
| __STDCPP_STRICT_POINTER_SAFETY__(C++11)(removed in C++23) | expands to 1 if the implementation has strict std::pointer_safety   (macro constant) |

The values of these macros (except for `__FILE__` and `__LINE__`) remain constant throughout the translation unit. Attempts to redefine or undefine these macros result in undefined behavior.

|  |  |
| --- | --- |
| Language feature-testing macros The standard defines a set of preprocessor macros corresponding to C++ language features introduced in C++11 or later. They are intended as a simple and portable way to detect the presence of said features.  See Feature testing for details. | (since C++20) |

|  |  |
| --- | --- |
| Notes The function-local predefined variable __func__ is not a predefined macro, but it is usually used together with __FILE__ and __LINE__, e.g. by assert. | (since C++11) |

### Example

Run this code

```
#include <iostream>
 
// Make function factory and use it
#define FUNCTION(name, a) int fun_##name() { return a; }
 
FUNCTION(abcd, 12)
FUNCTION(fff, 2)
FUNCTION(qqq, 23)
 
#undef FUNCTION
#define FUNCTION 34
#define OUTPUT(a) std::cout << "output: " #a << '\n'
 
// Using a macro in the definition of a later macro
#define WORD "Hello "
#define OUTER(...) WORD #__VA_ARGS__
 
int main()
{
    std::cout << "abcd: " << fun_abcd() << '\n';
    std::cout << "fff: " << fun_fff() << '\n';
    std::cout << "qqq: " << fun_qqq() << '\n';
 
    std::cout << FUNCTION << '\n';
    OUTPUT(million); //note the lack of quotes
 
    std::cout << OUTER(World) << '\n';
    std::cout << OUTER(WORD World) << '\n';
}

```

Output:

```
abcd: 12
fff: 2
qqq: 23
34
output: million
Hello World
Hello WORD World

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 2908 | C++98 | it was unclear whether `__LINE__` expands to the current physical line number or the current logical line number | expands to the current physical line number |
| LWG 294 | C++98 | a translation unit that includes a standard library header could contain macros that define names declared in other standard library headers | prohibited |
| P2621R2 | C++23 | universal character names were not allowed to be formed by token concatenation | allowed |

### See also

|  |  |
| --- | --- |
| C++ documentation for Macro Symbol Index | |
| C documentation for Replacing text macros | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/preprocessor/replace&oldid=179803>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 January 2025, at 18:18.