# `sizeof` operator

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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | ****`sizeof`**** | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Queries size of the object or type.

Used when actual size of the object must be known.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `sizeof(` type `)` | (1) |  |
|  | | | | | | | | | |
| `sizeof` expression | (2) |  |
|  | | | | | | | | | |

1) Yields the size in bytes of the object representation of type.2) Yields the size in bytes of the object representation of the type of expression, if that expression is evaluated.

|  |  |  |
| --- | --- | --- |
| type | - | a type-id (see type naming) |
| expression | - | an expression whose operator precedence is not lower than `sizeof` (e.g. sizeof a + b is parsed as (sizeof a) + b instead of sizeof (a + b)) |

The result of a `sizeof` expression is a constant expression of type std::size_t.

### Notes

Depending on the computer architecture, a byte may consist of 8 or more bits, the exact number being recorded in CHAR_BIT.

The following `sizeof` expressions always evaluate to 1:

- sizeof(char)
- sizeof(signed char)
- sizeof(unsigned char)

|  |  |
| --- | --- |
| - sizeof(std::byte) | (since C++17) |
| - sizeof(char8_t) | (since C++20) |

`sizeof` cannot be used with function types, incomplete types, or bit-field lvalues(until C++11)glvalues(since C++11).

When applied to a reference type, the result is the size of the referenced type.

When applied to a class type, the result is the number of bytes occupied by a complete object of that class, including any additional padding required to place such object in an array. The number of bytes occupied by a potentially-overlapping subobject may be less than the size of that object.

The result of `sizeof` is always nonzero, even if applied to an empty class type.

When applied to an expression, `sizeof` does not evaluate the expression (i.e. the expression is an unevaluated operand)(since C++11), and even if the expression designates a polymorphic object, the result is the size of the static type of the expression. Lvalue-to-rvalue, array-to-pointer, or function-to-pointer conversions are not performed. Temporary materialization, however, is (formally) performed for prvalue arguments: the program is ill-formed if the argument is not destructible.(since C++17)

### Keywords

sizeof

### Example

The example output corresponds to a system with 64-bit pointers and 32-bit int (a.k.a. ****LP64**** or ****LLP64****).

Run this code

```
#include <cstdlib>
#include <iostream>
 
struct Empty          { };
struct Base           { int a; };
struct Derived : Base { int b; };
struct Bit            { unsigned bit: 1; };
struct CharChar       { char c; char c2; };
struct CharCharInt    { char c; char c2; int i; };
struct IntCharChar    { int i;  char c;  char c2; };
struct CharIntChar    { char c; int i;   char c2; };
struct CharShortChar  { char c; short s; char c2; };
 
int main()
{
    Empty e;
    Derived d;
    Base& b = d;
    [[maybe_unused]] Bit bit;
    int a[10];
 
    auto f = [&]() { return sizeof(int[10]) == sizeof a ? throw 1 : e; };
//  f(); // the return type is Empty, but always throws 1
 
    auto println = [](auto rem, std::size_t size) { std::cout << rem << size << '\n'; };
 
    println( "1) sizeof empty class:              ", sizeof e                     );
    println( "2) sizeof pointer:                  ", sizeof &e                    );
    println( "3) sizeof(Bit) class:               ", sizeof(Bit)                  );
    println( "4) sizeof(int[10]) array of 10 int: ", sizeof(int[10])              );
    println( "5) sizeof a        array of 10 int: ", sizeof a                     );
    println( "6) length of array of 10 int:       ", ((sizeof a) / (sizeof *a))   );
    println( "7) length of array of 10 int (2):   ", ((sizeof a) / (sizeof a[0])) );
    println( "8) sizeof the Derived class:        ", sizeof d                     );
    println( "9) sizeof the Derived through Base: ", sizeof b                     );
    println( "A) sizeof(unsigned):                ", sizeof(unsigned)             );
    println( "B) sizeof(int):                     ", sizeof(int)                  );
    println( "C) sizeof(short):                   ", sizeof(short)                );
    println( "D) sizeof(char):                    ", sizeof(char)                 );
    println( "E) sizeof(CharChar):                ", sizeof(CharChar)             );
    println( "F) sizeof(CharCharInt):             ", sizeof(CharCharInt)          );
    println( "G) sizeof(IntCharChar):             ", sizeof(IntCharChar)          );
    println( "H) sizeof(CharIntChar):             ", sizeof(CharIntChar)          );
    println( "I) sizeof(CharShortChar):           ", sizeof(CharShortChar)        );
    println( "J) sizeof f():                      ", sizeof f()                   );
    println( "K) sizeof Base::a:                  ", sizeof Base::a               );
 
//  println( "sizeof function:        ", sizeof(void()) ); // error
//  println( "sizeof incomplete type: ", sizeof(int[])  ); // error
//  println( "sizeof bit-field:       ", sizeof bit.bit ); // error
}

```

Possible output:

```
1) sizeof empty class:              1
2) sizeof pointer:                  8
3) sizeof(Bit) class:               4
4) sizeof(int[10]) array of 10 int: 40
5) sizeof a        array of 10 int: 40
6) length of array of 10 int:       10
7) length of array of 10 int (2):   10
8) sizeof the Derived class:        8
9) sizeof the Derived through Base: 4
A) sizeof(unsigned):                4
B) sizeof(int):                     4
C) sizeof(short):                   2
D) sizeof(char):                    1
E) sizeof(CharChar):                2
F) sizeof(CharCharInt):             8
G) sizeof(IntCharChar):             8
H) sizeof(CharIntChar):             12
I) sizeof(CharShortChar):           6
J) sizeof f():                      1
K) sizeof Base::a:                  4

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1553 | C++11 | `sizeof` could be used with bit-field xvalues | prohibited |

### See also

|  |  |
| --- | --- |
| `alignof` (C++11) | queries alignment requirements of a type (operator) |
| `sizeof...` operator (C++11) | queries the number of elements in a pack |
| numeric_limits | provides an interface to query properties of all fundamental numeric types   (class template) |
| C documentation for sizeof | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/sizeof&oldid=178871>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 December 2024, at 18:23.