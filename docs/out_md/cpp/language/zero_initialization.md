# Zero-initialization

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | ****Zero-initialization**** | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

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

 Initialization

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Initializer | | | | |
| Default initialization | | | | |
| Value initialization | | | | |
| Direct initialization | | | | |
| Copy-initialization | | | | |
| List initialization (C++11) | | | | |
| Aggregate initialization | | | | |
| Reference initialization | | | | |
| Copy elision | | | | |
| Static initialization | | | | |
| ****Zero initialization**** | | | | |
| Constant initialization | | | | |
| Dynamic non-local initialization | | | | |
| Ordered dynamic initialization | | | | |
| Unordered dynamic initialization | | | | |
| Class member initialization | | | | |
| Member initializer list | | | | |
| Default member initializer (C++11) | | | | |

Sets the initial value of an object to zero.

### Syntax

Note that this is not the syntax for zero-initialization, which does not have a dedicated syntax in the language. These are examples of other types of initializations, which might perform zero-initialization.

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `static` T object `;` | (1) |  |
|  | | | | | | | | | |
| T `()` `;` T t `=` `{}` `;`  T `{}` `;` (since C++11) | (2) |  |
|  | | | | | | | | | |
| CharT array `[` n `]` `=` `"` short-sequence `";` | (3) |  |
|  | | | | | | | | | |

### Explanation

Zero-initialization is performed in the following situations:

1) For every named variable with static or thread-local(since C++11) storage duration that is not subject to constant initialization, before any other initialization.2) As part of value-initialization sequence for non-class types and for members of value-initialized class types that have no constructors, including value initialization of elements of aggregates for which no initializers are provided.3) When an array of any character type is initialized with a string literal that is too short, the remainder of the array is zero-initialized.

The effects of zero-initialization are:

- If `T` is a scalar type, the object is initialized to the value obtained by explicitly converting the integer literal ​0​ (zero) to `T`.
- If `T` is a non-union class type:

:   - all padding bits are initialized to zero bits,
    - each non-static data member is zero-initialized,
    - each non-virtual base class subobject is zero-initialized, and
    - if the object is not a base class subobject, each virtual base class subobject is zero-initialized.

- If `T` is a union type:

:   - all padding bits are initialized to zero bits, and
    - the object’s first non-static named data member is zero-initialized.

- If `T` is array type, each element is zero-initialized.
- If `T` is reference type, nothing is done.

### Notes

As described in non-local initialization, static and thread-local(since C++11) variables that aren't constant-initialized are zero-initialized before any other initialization takes place. If the definition of a non-class non-local variable has no initializer, then default initialization does nothing, leaving the result of the earlier zero-initialization unmodified.

A zero-initialized pointer is the null pointer value of its type, even if the value of the null pointer is not integral zero.

### Example

Run this code

```
#include <iostream>
#include <string>
 
struct A
{
    int a, b, c;
};
 
double f[3];   // zero-initialized to three 0.0's
 
int* p;        // zero-initialized to null pointer value
               // (even if the value is not integral 0)
 
std::string s; // zero-initialized to indeterminate value, then
               // default-initialized to "" by the std::string default constructor
 
int main(int argc, char*[])
{
    delete p; // safe to delete a null pointer
 
    static int n = argc; // zero-initialized to 0 then copy-initialized to argc
    std::cout << "n = " << n << '\n';
 
    A a = A(); // the effect is same as: A a{}; or A a = {};
    std::cout << "a = {" << a.a << ' ' << a.b << ' ' << a.c << "}\n";
}

```

Possible output:

```
n = 1
a = {0 0 0}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 277 | C++98 | pointers might be initialized with a non-constant expression of value 0, which is not a null pointer constant | must initialize with an integral constant expression of value 0 |
| CWG 694 | C++98 | zero-initialization for class types ignored padding | padding is initialized to zero bits |
| CWG 903 | C++98 | zero-initialization for scalar types set the initial value to the value converted from an integral constant expression with value 0 | the object is initialized to the value converted from the integer literal ​0​ |
| CWG 2026 | C++98 | zero-initialization was specified to always occur first, even before constant initialization | no zero-initialization if constant initialization applies |
| CWG 2196 | C++98 | zero-initialization for class types ignored base class subobjects | they are also zero-initialized |
| CWG 2253 | C++98 | it was unclear whether zero-initialization applies to unnamed bit-fields | it applies (all padding bits are initialized to zero bits) |

### See also

- constructor
- copy assignment
- default constructor
- initialization
  - aggregate initialization
  - constant initialization
  - copy initialization
  - default initialization
  - direct initialization
  - list initialization
  - value initialization
- move assignment
- `new`
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/zero_initialization&oldid=151936>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 May 2023, at 06:52.