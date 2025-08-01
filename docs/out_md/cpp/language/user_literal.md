# User-defined literals (since C++11)

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
| ****User-defined**** (C++11) | | | | |
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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | ****User-defined literal**** (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Allows integer, floating-point, character, and string literals to produce objects of user-defined type by defining a user-defined suffix.

### Syntax

A user-defined literal is an expression of any of the following forms

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| decimal-literal ud-suffix | (1) |  |
|  | | | | | | | | | |
| octal-literal ud-suffix | (2) |  |
|  | | | | | | | | | |
| hex-literal ud-suffix | (3) |  |
|  | | | | | | | | | |
| binary-literal ud-suffix | (4) |  |
|  | | | | | | | | | |
| fractional-constant exponent-part ﻿(optional) ud-suffix | (5) |  |
|  | | | | | | | | | |
| digit-sequence exponent-part ud-suffix | (6) |  |
|  | | | | | | | | | |
| character-literal ud-suffix | (7) |  |
|  | | | | | | | | | |
| string-literal ud-suffix | (8) |  |
|  | | | | | | | | | |

1-4) user-defined integer literals, such as 12_km5-6) user-defined floating-point literals, such as 0.5_Pa7) user-defined character literal, such as 'c'_X8) user-defined string literal, such as "abd"_L or u"xyz"_M

|  |  |  |
| --- | --- | --- |
| decimal-literal | - | same as in integer literal, a non-zero decimal digit followed by zero or more decimal digits |
| octal-literal | - | same as in integer literal, a zero followed by zero or more octal digits |
| hex-literal | - | same as in integer literal, `0x` or `0X` followed by one or more hexadecimal digits |
| binary-literal | - | same as in integer literal, `0b` or `0B` followed by one or more binary digits |
| digit-sequence | - | same as in floating literal, a sequence of decimal digits |
| fractional-constant | - | same as in floating literal, either a digit-sequence followed by a dot (123.) or an optional digit-sequence followed by a dot and another digit-sequence (1.0 or .12) |
| exponent-part | - | same as in floating literal, the letter `e` or the letter `E` followed by optional sign, followed by digit-sequence |
| character-literal | - | same as in character literal |
| string-literal | - | same as in string literal, including raw string literals |
| ud-suffix | - | an identifier, introduced by a **literal operator** or a **literal operator template** declaration (see below) |

|  |  |
| --- | --- |
| In the integer and floating-point digit sequences, optional separators `'` are allowed between any two digits. | (since C++14) |

If a token matches a user-defined literal syntax and a regular literal syntax, it is assumed to be a regular literal (that is, it's impossible to overload `LL` in 123LL).

When the compiler encounters a user-defined literal with ud-suffix `X`, it performs unqualified name lookup, looking for a function with the name operator""X. If the lookup does not find a declaration, the program is ill-formed. Otherwise,

1) For user-defined integer literals,a) if the overload set includes a literal operator with the parameter type unsigned long long, the user-defined literal expression is treated as a function call operator ""X(n ﻿ULL), where n is the literal without ud-suffix;b) otherwise, the overload set must include either, but not both, a raw literal operator or a numeric literal operator template. If the overload set includes a raw literal operator, the user-defined literal expression is treated as a function call operator""X("n ﻿");c) otherwise, if the overload set includes a numeric literal operator template, the user-defined literal expression is treated as a function call operator""X<'c1 ﻿', 'c2 ﻿', 'c3 ﻿'..., 'ck ﻿'>(), where c1..ck are the individual characters of n and all of them are from the basic character set.2) For user-defined floating-point literals,a) If the overload set includes a literal operator with the parameter type long double, the user-defined literal expression is treated as a function call operator ""X(f ﻿ ﻿L), where f is the literal without ud-suffix;b) otherwise, the overload set must include either, but not both, a raw literal operator or a numeric literal operator template. If the overload set includes a raw literal operator, the user-defined literal expression is treated as a function call operator ""X("f ﻿ ﻿");c) otherwise, if the overload set includes a numeric literal operator template, the user-defined literal expression is treated as a function call operator""X<'c1 ﻿', 'c2 ﻿', 'c3 ﻿'..., 'ck ﻿'>(), where c1..ck are the individual characters of f and all of them are from the basic character set.3) For user-defined string literals, let str be the literal without ud-suffix:

|  |  |
| --- | --- |
| a) If the overload set includes a string literal operator template with a non-type template parameter for which str is a well-formed template argument, then the user-defined literal expression is treated as a function call operator ""X<str>(); | (since C++20) |

b) otherwise, the user-defined literal expression is treated as a function call operator ""X (str, len), where len is the length of the string literal, excluding the terminating null character.4) For user-defined character literals, the user-defined literal expression is treated as a function call operator ""X(ch), where ch is the literal without ud-suffix.

```
long double operator ""_w(long double);
std::string operator ""_w(const char16_t*, size_t);
unsigned    operator ""_w(const char*);
 
int main()
{
    1.2_w;    // calls operator ""_w(1.2L)
    u"one"_w; // calls operator ""_w(u"one", 3)
    12_w;     // calls operator ""_w("12")
    "two"_w;  // error: no applicable literal operator
}

```

When string literal concatenation takes place in translation phase 6, user-defined string literals are concatenated as well, and their ud-suffixes are ignored for the purpose of concatenation, except that only one suffix may appear on all concatenated literals:

```
int main()
{
    L"A" "B" "C"_x;  // OK: same as L"ABC"_x
    "P"_x "Q" "R"_y; // error: two different ud-suffixes (_x and _y)
}

```

### Literal operators

The function called by a user-defined literal is known as **literal operator** (or, if it's a template, **literal operator template**). It is declared just like any other function or function template at namespace scope (it may also be a friend function, an explicit instantiation or specialization of a function template, or introduced by a using-declaration), except for the following restrictions:

The name of this function can have one of the two forms:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `operator ""` identifier | (1) | (deprecated) |
|  | | | | | | | | | |
| `operator` user-defined-string-literal | (2) |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| identifier | - | the identifier to use as the ud-suffix for the user-defined literals that will call this function |
| user-defined-string-literal | - | the character sequence `""` followed, without a space, by the character sequence that becomes the ud-suffix |

1) Declares a literal operator.2) Declares a literal operator. This syntax makes it possible to use language keywords and reserved identifiers as ud-suffix ﻿es, for example, operator ""if from the header <complex>.

ud-suffix must begin with the underscore `_`: the suffixes that do not begin with the underscore are reserved for the literal operators provided by the standard library. It cannot contain double underscores `__` as well: such suffixes are also reserved.

If the literal operator is a template, it must have an empty parameter list and can have only one template parameter, which must be a non-type template parameter pack with element type char (in which case it is known as a **numeric literal operator template**):

```
template<char...>
double operator ""_x();

```

|  |  |
| --- | --- |
| or a non-type template parameter of class type (in which case it is known as a **string literal operator template**):   ```text struct A { constexpr A(const char*); };   template<A a> A operator ""_a(); ``` | (since C++20) |

Only the following parameter lists are allowed on literal operators:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `(` const char\* `)` | (1) |  |
|  | | | | | | | | | |
| `(` unsigned long long int `)` | (2) |  |
|  | | | | | | | | | |
| `(` long double `)` | (3) |  |
|  | | | | | | | | | |
| `(` char `)` | (4) |  |
|  | | | | | | | | | |
| `(` wchar_t `)` | (5) |  |
|  | | | | | | | | | |
| `(` char8_t `)` | (6) | (since C++20) |
|  | | | | | | | | | |
| `(` char16_t `)` | (7) |  |
|  | | | | | | | | | |
| `(` char32_t `)` | (8) |  |
|  | | | | | | | | | |
| `(` const char\*`,` std::size_t `)` | (9) |  |
|  | | | | | | | | | |
| `(` const wchar_t\*`,` std::size_t `)` | (10) |  |
|  | | | | | | | | | |
| `(` const char8_t\*`,` std::size_t `)` | (11) | (since C++20) |
|  | | | | | | | | | |
| `(` const char16_t\*`,` std::size_t `)` | (12) |  |
|  | | | | | | | | | |
| `(` const char32_t\*`,` std::size_t `)` | (13) |  |
|  | | | | | | | | | |

1) Literal operators with this parameter list are the **raw literal operators**, used as fallbacks for integer and floating-point user-defined literals (see above)2) Literal operators with these parameter lists are the first-choice literal operator for user-defined integer literals3) Literal operators with these parameter lists are the first-choice literal operator for user-defined floating-point literals4-8) Literal operators with these parameter lists are called by user-defined character literals9-13) Literal operators with these parameter lists are called by user-defined string literals

Default arguments are not allowed.

C language linkage is not allowed.

Other than the restrictions above, literal operators and literal operator templates are normal functions (and function templates), they can be declared inline or constexpr, they may have internal or external linkage, they can be called explicitly, their addresses can be taken, etc.

Run this code

```
#include <string>
 
void        operator ""_km(long double); // OK, will be called for 1.0_km
void        operator "" _km(long double); // same as above, deprecated
std::string operator ""_i18n(const char*, std::size_t); // OK
 
template<char...>
double operator ""_pi(); // OK
float  operator ""_e(const char*); // OK
 
// error: suffix must begin with underscore
float operator ""Z(const char*);
 
// error: all names that begin with underscore followed by uppercase
// letter are reserved (NOTE: a space between "" and _).
double operator"" _Z(long double);
 
// OK. NOTE: no space between "" and _.
double operator""_Z(long double);
 
// OK: literal operators can be overloaded
double operator ""_Z(const char* args);
 
int main() {}

```

### Notes

Since the introduction of user-defined literals, the code that uses format macro constants for fixed-width integer types with no space after the preceding string literal became invalid: std::printf("%"PRId64"\n",INT64_MIN); has to be replaced by std::printf("%" PRId64"\n",INT64_MIN);.

Due to maximal munch, user-defined integer and floating point literals ending in `p`, `P`,(since C++17) `e` and `E`, when followed by the operators `+` or `-`, must be separated from the operator with whitespace or parentheses in the source:

```
long double operator""_E(long double);
long double operator""_a(long double);
int operator""_p(unsigned long long);
 
auto x = 1.0_E+2.0;   // error
auto y = 1.0_a+2.0;   // OK
auto z = 1.0_E +2.0;  // OK
auto q = (1.0_E)+2.0; // OK
auto w = 1_p+2;       // error
auto u = 1_p +2;      // OK

```

Same applies to dot operator following an integer or floating-point user-defined literal:

```
#include <chrono>
 
using namespace std::literals;
 
auto a = 4s.count();   // Error
auto b = 4s .count();  // OK
auto c = (4s).count(); // OK

```

Otherwise, a single invalid preprocessing number token (e.g., 1.0_E+2.0 or 4s.count) is formed, which causes compilation to fail.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_user_defined_literals` | `200809L` | (C++11) | User-defined literals |

### Keywords

operator

### Examples

Run this code

```
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <numbers>
#include <string>
 
// used as conversion from degrees (input param) to radians (returned output)
constexpr long double operator""_deg_to_rad(long double deg)
{
    long double radians = deg * std::numbers::pi_v<long double> / 180;
    return radians;
}
 
// used with custom type
struct mytype
{
    unsigned long long m;
};
 
constexpr mytype operator""_mytype(unsigned long long n)
{
    return mytype{n};
}
 
// used for side-effects
void operator""_print(const char* str)
{
    std::cout << str << '\n';
}
 
#if __cpp_nontype_template_args < 201911
 
std::string operator""_x2 (const char* str, std::size_t)
{
    return std::string{str} + str;
}
 
#else // C++20 string literal operator template
 
template<std::size_t N>
struct DoubleString
{
    char p[N + N - 1]{};
 
    constexpr DoubleString(char const(&pp)[N])
    {
        std::ranges::copy(pp, p);
        std::ranges::copy(pp, p + N - 1);
    }
};
 
template<DoubleString A>
constexpr auto operator""_x2()
{
    return A.p;
}
 
#endif // C++20
 
int main()
{
    double x_rad = 90.0_deg_to_rad;
    std::cout << std::fixed << x_rad << '\n';
 
    mytype y = 123_mytype;
    std::cout << y.m << '\n';
 
    0x123ABC_print;
    std::cout << "abc"_x2 << '\n';
}

```

Output:

```
1.570796
123
0x123ABC
abcabc

```

### Standard library

The following literal operators are defined in the standard library:

|  |  |
| --- | --- |
| Defined in inline namespace `std::literals::complex_literals` | |
| operator""ifoperator""ioperator""il(C++14) | a std::complex literal representing purely imaginary number   (function) |
| Defined in inline namespace `std::literals::chrono_literals` | |
| operator""h(C++14) | a std::chrono::duration literal representing hours   (function) |
| operator""min(C++14) | a std::chrono::duration literal representing minutes   (function) |
| operator""s(C++14) | a std::chrono::duration literal representing seconds   (function) |
| operator""ms(C++14) | a std::chrono::duration literal representing milliseconds   (function) |
| operator""us(C++14) | a std::chrono::duration literal representing microseconds   (function) |
| operator""ns(C++14) | a std::chrono::duration literal representing nanoseconds   (function) |
| operator""y(C++20) | a std::chrono::year literal representing a particular year   (function) |
| operator""d(C++20) | a std::chrono::day literal representing a day of a month   (function) |
| Defined in inline namespace `std::literals::string_literals` | |
| operator""s(C++14) | converts a character array literal to `basic_string`   (function) |
| Defined in inline namespace `std::literals::string_view_literals` | |
| operator""sv(C++17) | creates a string view of a character array literal   (function) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1473 | C++11 | whitespace between "" and ud-suffix was required in the declaration of literal operators | made optional |
| CWG 1479 | C++11 | literal operators could have default arguments | prohibited |
| CWG 2521 | C++11 | operator"" _Bq was ill-formed (no diagnostic required) because it uses the reserved identifier `_Bq` | deprecated the literal operator syntax with whitespace between "" and ud-suffix |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/user_literal&oldid=175045>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 August 2024, at 01:10.