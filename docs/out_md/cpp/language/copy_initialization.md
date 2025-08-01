# Copy-initialization

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | ****Copy-initialization**** | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

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
| ****Copy-initialization**** | | | | |
| List initialization (C++11) | | | | |
| Aggregate initialization | | | | |
| Reference initialization | | | | |
| Copy elision | | | | |
| Static initialization | | | | |
| Zero initialization | | | | |
| Constant initialization | | | | |
| Dynamic non-local initialization | | | | |
| Ordered dynamic initialization | | | | |
| Unordered dynamic initialization | | | | |
| Class member initialization | | | | |
| Member initializer list | | | | |
| Default member initializer (C++11) | | | | |

Initializes an object from another object.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| T object `=` other`;` | (1) |  |
|  | | | | | | | | | |
| T object `=` `{`other`};` | (2) | (until C++11) |
|  | | | | | | | | | |
| f`(`other`)` | (3) |  |
|  | | | | | | | | | |
| `return` other`;` | (4) |  |
|  | | | | | | | | | |
| `throw` object`;` `catch (`T object`)` | (5) |  |
|  | | | | | | | | | |
| T array`[`N`] = {`other-sequence`};` | (6) |  |
|  | | | | | | | | | |

### Explanation

Copy-initialization is performed in the following situations:

1) When a named variable (automatic, static, or thread-local) of a non-reference type `T` is declared with the initializer consisting of an equals sign followed by an expression.2) (until C++11) When a named variable of a scalar type `T` is declared with the initializer consisting of an equals sign followed by a brace-enclosed expression (Note: as of C++11, this is classified as list initialization, and narrowing conversion is not allowed).3) When passing an argument to a function by value.4) When returning from a function that returns by value.5) When throwing or catching an exception by value.6) As part of aggregate initialization, to initialize each element for which an initializer is provided.

The effects of copy-initialization are:

|  |  |
| --- | --- |
| - First, if `T` is a class type and the initializer is a prvalue expression whose cv-unqualified type is the same class as `T`, the initializer expression itself, rather than a temporary materialized from it, is used to initialize the destination object: see copy elision. | (since C++17) |

- Otherwise, if `T` is a class type and the cv-unqualified version of the type of other is `T` or a class derived from `T`, the non-explicit constructors of `T` are examined and the best match is selected by overload resolution. That constructor is then called to initialize the object.

- Otherwise, if `T` is a class type, and the cv-unqualified version of the type of other is not `T` or derived from `T`, or if `T` is non-class type, but the type of other is a class type, user-defined conversion sequences that can convert from the type of other to `T` (or to a type derived from `T` if `T` is a class type and a conversion function is available) are examined and the best one is selected through overload resolution. The result of the conversion, which is a rvalue temporary(until C++11)prvalue temporary(since C++11)(until C++17)prvalue expression(since C++17) of the cv-unqualified version of `T` if a converting constructor was used, is then used to direct-initialize the object. The last step is usually optimized out and the result of the conversion is constructed directly in the memory allocated for the target object, but the appropriate constructor (move or copy) is required to be accessible even though it's not used.(until C++17)

- Otherwise (if neither `T` nor the type of other are class types), standard conversions are used, if necessary, to convert the value of other to the cv-unqualified version of `T`.

### Notes

Copy-initialization is less permissive than direct-initialization: explicit constructors are not converting constructors and are not considered for copy-initialization.

```
struct Exp { explicit Exp(const char*) {} }; // not convertible from const char*
Exp e1("abc");  // OK
Exp e2 = "abc"; // Error, copy-initialization does not consider explicit constructor
 
struct Imp { Imp(const char*) {} }; // convertible from const char*
Imp i1("abc");  // OK
Imp i2 = "abc"; // OK

```

In addition, the implicit conversion in copy-initialization must produce `T` directly from the initializer, while, e.g. direct-initialization expects an implicit conversion from the initializer to an argument of `T`'s constructor.

```
struct S { S(std::string) {} }; // implicitly convertible from std::string
S s("abc");   // OK: conversion from const char[4] to std::string
S s = "abc";  // Error: no conversion from const char[4] to S
S s = "abc"s; // OK: conversion from std::string to S

```

If other is an rvalue expression, a move constructor will be selected by overload resolution and called during copy-initialization. This is still considered copy-initialization; there is no special term (e.g., move-initialization) for this case.

Implicit conversion is defined in terms of copy-initialization: if an object of type `T` can be copy-initialized with expression `E`, then `E` is implicitly convertible to `T`.

The equals sign, `=`, in copy-initialization of a named variable is not related to the assignment operator. Assignment operator overloads have no effect on copy-initialization.

### Example

Run this code

```
#include <memory>
#include <string>
#include <utility>
 
struct A
{
    operator int() { return 12;}
};
 
struct B
{
    B(int) {}
};
 
int main()
{
    std::string s = "test";        // OK: constructor is non-explicit
    std::string s2 = std::move(s); // this copy-initialization performs a move
 
//  std::unique_ptr<int> p = new int(1); // error: constructor is explicit
    std::unique_ptr<int> p(new int(1));  // OK: direct-initialization
 
    int n = 3.14;    // floating-integral conversion
    const int b = n; // const doesn't matter
    int c = b;       // ...either way
 
    A a;
    B b0 = 12;
//  B b1 = a;       // < error: conversion from 'A' to non-scalar type 'B' requested
    B b2{a};        // < identical, calling A::operator int(), then B::B(int)
    B b3 = {a};     // <
    auto b4 = B{a}; // <
 
//  b0 = a;         // < error, assignment operator overload needed
 
    [](...){}(c, b0, b3, b4); // pretend these variables are used
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 5 | C++98 | the cv-qualification of the destination type is applied to the temporary initialized by a converting constructor | the temporary is not cv-qualified |
| CWG 177 | C++98 | the value category of the temporary created during copy-initialization of a class object is unspecified | specified as rvalue |

### See also

- copy elision
- converting constructor
- copy assignment
- copy constructor
- default constructor
- destructor
- `explicit`
- initialization
  - aggregate initialization
  - constant initialization
  - default initialization
  - direct initialization
  - initializer list
  - list initialization
  - reference initialization
  - value initialization
  - zero initialization
- move assignment
- move constructor
- `new`
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/copy_initialization&oldid=172259>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 June 2024, at 22:17.