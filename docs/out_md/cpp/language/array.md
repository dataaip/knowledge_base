# Array declaration

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

Declarations

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Overview | | | | | | Declaration syntax | | | | | | **decl-specifier-seq** | | | | | | Declarator | | | | | | Conflicting declarations | | | | | | Specifiers | | | | | | typedef | | | | | | inline | | | | | | virtual function specifier | | | | | | explicit function specifier | | | | | | friend | | | | | | constexpr(C++11) | | | | | | consteval(C++20) | | | | | | constinit(C++20) | | | | | | Storage class specifiers | | | | | | Translation-unit-local (C++20) | | | | | | class/struct | | | | | | union | | | | | | enum | | | | | | decltype(C++11) | | | | | | auto(C++11) | | | | | | alignas(C++11) | | | | | | constvolatile | | | | | | Pack indexing specifier (C++26) | | | | | | Elaborated type specifier | | | | | | Attributes (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Declarators | | | | | | Reference | | | | | | Pointer | | | | | | ****Array**** | | | | | | Block declarations | | | | | | Simple-declaration | | | | | | →Structured binding declaration (C++17) | | | | | | Alias declaration (C++11) | | | | | | Namespace alias definition | | | | | | using declaration | | | | | | `using` directive | | | | | | static_assert declaration (C++11) | | | | | | asm declaration | | | | | | Opaque enum declaration (C++11) | | | | | | Other declarations | | | | | | Namespace definition | | | | | | Function declaration | | | | | | Class template declaration | | | | | | Function template declaration | | | | | | Explicit template instantiation (C++11) | | | | | | Explicit template specialization | | | | | | Linkage specification | | | | | | Attribute declaration (C++11) | | | | | | Empty declaration | | | | | |  | | | | | |

Declares an object of array type.

### Syntax

An array declaration is any simple declaration whose declarator has the form

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| noptr-declarator `[`expr ﻿(optional)`]` attr ﻿(optional) |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| noptr-declarator | - | any valid declarator, but if it begins with `*`, `&`, or `&&`, it has to be surrounded by parentheses (otherwise the whole declarator is treated as a pointer declarator or reference declarator). |
| expr | - | an integral constant expression(until C++14)a converted constant expression of type std::size_t(since C++14), which evaluates to a value greater than zero |
| attr | - | (since C++11) list of attributes |

A declaration of the form T a[N];, declares a as an array object that consists of N contiguously allocated objects of type `T`. The elements of an array are numbered ​0​, …, N - 1, and may be accessed with the [subscript operator []](operator_member_access.html#Built-in_subscript_operator "cpp/language/operator member access"), as in a[0], …, a[N - 1].

Arrays can be constructed from any fundamental type (except void), pointers, pointers to members, classes, enumerations, or from other arrays of known bound (in which case the array is said to be multi-dimensional). In other words, only object types except for array types of unknown bound can be element types of array types. Array types of incomplete element type are also incomplete types.

|  |  |
| --- | --- |
| The possibly constrained(since C++20) `auto` specifier can be used as array element type in the declaration of a pointer or reference to array, which deduces the element type from the initializer or the function argument(since C++14), e.g. auto (\*p)[42] = &a; is valid if a is an lvalue of type int[42]. | (since C++11) |

There are no arrays of references or arrays of functions.

Applying cv-qualifiers to an array type (through typedef or template type manipulation) applies the qualifiers to the element type, but any array type whose elements are of cv-qualified type is considered to have the same cv-qualification.

```
// a and b have the same const-qualified type "array of 5 const char"
 
typedef const char CC;
CC a[5] = {};
 
typedef char CA[5];
const CA b = {};

```

When used with [new[]-expression](new.html "cpp/language/new"), the size of an array may be zero; such an array has no elements:

```
int* p = new int[0]; // accessing p[0] or *p is undefined
delete[] p; // cleanup still required

```

#### Assignment

Objects of array type cannot be modified as a whole: even though they are lvalues (e.g. an address of array can be taken), they cannot appear on the left hand side of an assignment operator:

```
int a[3] = {1, 2, 3}, b[3] = {4, 5, 6};
int (*p)[3] = &a; // okay: address of a can be taken
a = b;            // error: a is an array
 
struct { int c[3]; } s1, s2 = {3, 4, 5};
s1 = s2; // okay: implicitly-defined copy assignment operator
         // can assign data members of array type

```

#### Array-to-pointer decay

There is an implicit conversion from lvalues and rvalues of array type to rvalues of pointer type: it constructs a pointer to the first element of an array. This conversion is used whenever arrays appear in context where arrays are not expected, but pointers are:

Run this code

```
#include <iostream>
#include <iterator>
#include <numeric>
 
void g(int (&a)[3])
{
    std::cout << a[0] << '\n';
}
 
void f(int* p)
{
    std::cout << *p << '\n';
}
 
int main()
{
    int a[3] = {1, 2, 3};
    int* p = a;
 
    std::cout << sizeof a << '\n'  // prints size of array
              << sizeof p << '\n'; // prints size of a pointer
 
    // where arrays are acceptable, but pointers aren't, only arrays may be used
    g(a); // okay: function takes an array by reference
//  g(p); // error
 
    for (int n : a)            // okay: arrays can be used in range-for loops
        std::cout << n << ' '; // prints elements of the array
//  for (int n : p)            // error
//      std::cout << n << ' ';
 
    std::iota(std::begin(a), std::end(a), 7); // okay: begin and end take arrays
//  std::iota(std::begin(p), std::end(p), 7); // error
 
    // where pointers are acceptable, but arrays aren't, both may be used:
    f(a); // okay: function takes a pointer
    f(p); // okay: function takes a pointer
 
    std::cout << *a << '\n' // prints the first element
              << *p << '\n' // same
              << *(a + 1) << ' ' << a[1] << '\n'  // prints the second element
              << *(p + 1) << ' ' << p[1] << '\n'; // same
}

```

#### Multidimensional arrays

When the element type of an array is another array, it is said that the array is multidimensional:

```
// array of 2 arrays of 3 int each
int a[2][3] = {{1, 2, 3},  // can be viewed as a 2 × 3 matrix
               {4, 5, 6}}; // with row-major layout

```

Note that when array-to-pointer decay is applied, a multidimensional array is converted to a pointer to its first element (e.g., a pointer to its first row or to its first plane): array-to-pointer decay is applied only once.

```
int a[2];            // array of 2 int
int* p1 = a;         // a decays to a pointer to the first element of a
 
int b[2][3];         // array of 2 arrays of 3 int
// int** p2 = b;     // error: b does not decay to int**
int (*p2)[3] = b;    // b decays to a pointer to the first 3-element row of b
 
int c[2][3][4];      // array of 2 arrays of 3 arrays of 4 int
// int*** p3 = c;    // error: c does not decay to int***
int (*p3)[3][4] = c; // c decays to a pointer to the first 3 × 4-element plane of c

```

#### Arrays of unknown bound

If expr is omitted in the declaration of an array, the type declared is "array of unknown bound of T", which is a kind of incomplete type, except when used in a declaration with an aggregate initializer:

```
extern int x[];      // the type of x is "array of unknown bound of int"
int a[] = {1, 2, 3}; // the type of a is "array of 3 int"

```

Because array elements cannot be arrays of unknown bound, multidimensional arrays cannot have unknown bound in a dimension other than the first:

```
extern int a[][2]; // okay: array of unknown bound of arrays of 2 int
extern int b[2][]; // error: array has incomplete element type

```

If there is a preceding declaration of the entity in the same scope in which the bound was specified, an omitted array bound is taken to be the same as in that earlier declaration, and similarly for the definition of a static data member of a class:

```
extern int x[10];
struct S
{
    static int y[10];
};
 
int x[];               // OK: bound is 10
int S::y[];            // OK: bound is 10
 
void f()
{
    extern int x[];
    int i = sizeof(x); // error: incomplete object type
}

```

References and pointers to arrays of unknown bound can be formed, but cannot(until C++20)and can(since C++20) be initialized or assigned from arrays and pointers to arrays of known bound. Note that in the C programming language, pointers to arrays of unknown bound are compatible with pointers to arrays of known bound and are thus convertible and assignable in both directions.

```
extern int a1[];
 
int (&r1)[] = a1;  // okay
int (*p1)[] = &a1; // okay
int (*q)[2] = &a1; // error (but okay in C)
 
int a2[] = {1, 2, 3};
int (&r2)[] = a2;  // okay (since C++20)
int (*p2)[] = &a2; // okay (since C++20)

```

Pointers to arrays of unknown bound cannot participate in pointer arithmetic and cannot be used on the left of the subscript operator, but can be dereferenced.

#### Array rvalues

Although arrays cannot be returned from functions by value and cannot be targets of most cast expressions, array prvalues may be formed by using a type alias to construct an array temporary using brace-initialized functional cast.

|  |  |
| --- | --- |
| Like class prvalues, array prvalues convert to xvalues by temporary materialization when evaluated. | (since C++17) |

Array xvalues may be formed directly by accessing an array member of a class rvalue or by using std::move or another cast or function call that returns an rvalue reference.

Run this code

```
#include <iostream>
#include <type_traits>
#include <utility>
 
void f(int (&&x)[2][3])
{
    std::cout << sizeof x << '\n';
}
 
struct X
{
    int i[2][3];
} x;
 
template<typename T>
using identity = T;
 
int main()
{
    std::cout << sizeof X().i << '\n';           // size of the array
    f(X().i);                                    // okay: binds to xvalue
//  f(x.i);                                      // error: cannot bind to lvalue
 
    int a[2][3];
    f(std::move(a));                             // okay: binds to xvalue
 
    using arr_t = int[2][3];
    f(arr_t{});                                  // okay: binds to prvalue
    f(identity<int[][3]>{{1, 2, 3}, {4, 5, 6}}); // okay: binds to prvalue
 
}

```

Output:

```
24
24
24
24
24

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 393 | C++98 | a pointer or reference to an array of unknown bound could not be a function parameter | allowed |
| CWG 619 | C++98 | when omitted, the bound of an array could not be inferred from a previous declaration | inference allowed |
| CWG 2099 | C++98 | the bound of an array static data member could not be omitted even if an initializer is provided | omission allowed |
| CWG 2397 | C++11 | auto could not be used as element type | allowed |

### See also

|  |  |
| --- | --- |
| C documentation for Array declaration | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/array&oldid=170589>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 April 2024, at 06:41.