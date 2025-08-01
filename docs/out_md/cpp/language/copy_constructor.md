# Copy constructors

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default constructor | | | | | | ****Copy constructor**** | | | | | | Move constructor (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Copy assignment | | | | | | Move assignment (C++11) | | | | | | Destructor | | | | | |
| Templates | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class template | | | | | | Function template | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Template specialization | | | | | | Parameter packs (C++11) | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Inline assembly | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | History of C++ | | | | | |

 Classes

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| Overview | | | | |
| `class`/`struct` types | | | | |
| `union` types | | | | |
| Injected-class-name | | | | |
| Members | | | | |
| Data members | | | | |
| Static members | | | | |
| The `this` pointer | | | | |
| Nested classes | | | | |
| Member templates | | | | |
| Bit-fields | | | | |
| `using`-declarations | | | | |
| Member functions | | | | |
| Member access specifiers | | | | |
| Constructors and member initializer lists | | | | |
| Default member initializer (C++11) | | | | |
| `friend` specifier | | | | |
| `explicit` specifier | | | | |
| Converting constructor | | | | |
| Special member functions | | | | |
| Default constructor | | | | |
| ****Copy constructor**** | | | | |
| Move constructor (C++11) | | | | |
| Copy assignment operator | | | | |
| Move assignment operator (C++11) | | | | |
| Destructor | | | | |
| Inheritance | | | | |
| Base and derived classes | | | | |
| Empty base optimization (EBO) | | | | |
| Virtual member functions | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

A copy constructor is a constructor which can be called with an argument of the same class type and copies the content of the argument without mutating the argument.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| class-name ﻿`(`parameter-list ﻿`);` | (1) |  |
|  | | | | | | | | | |
| class-name ﻿`(`parameter-list ﻿`)` function-body | (2) |  |
|  | | | | | | | | | |
| class-name ﻿`(`single-parameter-list ﻿`) = default;` | (3) | (since C++11) |
|  | | | | | | | | | |
| class-name ﻿`(`parameter-list ﻿`) = delete;` | (4) | (since C++11) |
|  | | | | | | | | | |
| class-name ﻿`::`class-name ﻿`(`parameter-list ﻿`)` function-body | (5) |  |
|  | | | | | | | | | |
| class-name ﻿`::`class-name ﻿`(`single-parameter-list ﻿`) = default;` | (6) | (since C++11) |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| class-name | - | the class whose copy constructor is being declared |
| parameter-list | - | a non-empty parameter list satisfying all following conditions:  - given the class type as `T`, the first parameter is of type T&, const T&, volatile T& or const volatile T&, and - either there are no other parameters, or all other parameters have default arguments. |
| single-parameter-list | - | a parameter list of only one parameter, which is of type T&, const T&, volatile T& or const volatile T& and does not have a default argument |
| function-body | - | the function body of the copy constructor |

### Explanation

1) Declaration of a copy constructor inside of class definition.2-4) Definition of a copy constructor inside of class definition.3) The copy constructor is explicitly-defaulted.4) The copy constructor is deleted.5,6) Definition of a copy constructor outside of class definition (the class must contain a declaration (1)).6) The copy constructor is explicitly-defaulted.

```
struct X
{
    X(X& other); // copy constructor
//  X(X other);  // Error: incorrect parameter type
};
 
union Y
{
    Y(Y& other, int num = 1); // copy constructor with multiple parameters
//  Y(Y& other, int num);     // Error: `num` has no default argument
};

```

The copy constructor is called whenever an object is initialized (by direct-initialization or copy-initialization) from another object of the same type (unless overload resolution selects a better match or the call is elided), which includes

- initialization: T a = b; or T a(b);, where b is of type `T`;
- function argument passing: f(a);, where a is of type `T` and f is void f(T t);
- function return: return a; inside a function such as T f(), where a is of type `T`, which has no move constructor.

### Implicitly-declared copy constructor

If no user-defined copy constructors are provided for a class type, the compiler will always declare a copy constructor as a non-explicit inline public member of its class. This implicitly-declared copy constructor has the form T::T(const T&) if all of the following are true:

- each direct and virtual base `B` of `T` has a copy constructor whose parameters are of type const B& or const volatile B&;
- each non-static data member `M` of `T` of class type or array of class type has a copy constructor whose parameters are of type const M& or const volatile M&.

Otherwise, the implicitly-declared copy constructor is T::T(T&).

Due to these rules, the implicitly-declared copy constructor cannot bind to a volatile lvalue argument.

A class can have multiple copy constructors, e.g. both T::T(const T&) and T::T(T&).

|  |  |
| --- | --- |
| Even if some user-defined copy constructors are present, the user may still force the implicit copy constructor declaration with the keyword default. | (since C++11) |

The implicitly-declared (or defaulted on its first declaration) copy constructor has an exception specification as described in dynamic exception specification(until C++17)noexcept specification(since C++17).

### Implicitly-defined copy constructor

If the implicitly-declared copy constructor is not deleted, it is defined (that is, a function body is generated and compiled) by the compiler if odr-used or needed for constant evaluation(since C++11). For union types, the implicitly-defined copy constructor copies the object representation (as by std::memmove). For non-union class types, the constructor performs full member-wise copy of the object's direct base subobjects and member subobjects, in their initialization order, using direct initialization. For each non-static data member of a reference type, the copy constructor binds the reference to the same object or function to which the source reference is bound.

|  |  |
| --- | --- |
| If this satisfies the requirements of a constexpr constructor(until C++23)constexpr function(since C++23), the generated copy constructor is constexpr.  The generation of the implicitly-defined copy constructor is deprecated if `T` has a user-defined destructor or user-defined copy assignment operator. | (since C++11) |

### Deleted copy constructor

The implicitly-declared or explicitly-defaulted(since C++11) copy constructor for class `T` is undefined(until C++11)defined as deleted(since C++11) if any of the following conditions is satisfied:

|  |  |
| --- | --- |
| - `T` has a non-static data member of rvalue reference type. | (since C++11) |

- `T` has a potentially constructed subobject of class type `M` (or possibly multi-dimensional array thereof) such that

:   - `M` has a destructor that is deleted or(since C++11) inaccessible from the copy constructor, or
    - the overload resolution as applied to find `M`'s copy constructor

    :   - does not result in a usable candidate, or
        - in the case of the subobject being a variant member, selects a non-trivial function.

|  |  |
| --- | --- |
| The implicitly-declared copy constructor for class `T` is defined as deleted if `T` declares a move constructor or move assignment operator. | (since C++11) |

### Trivial copy constructor

The copy constructor for class `T` is trivial if all of the following are true:

- it is not user-provided (that is, it is implicitly-defined or defaulted);
- `T` has no virtual member functions;
- `T` has no virtual base classes;
- the copy constructor selected for every direct base of `T` is trivial;
- the copy constructor selected for every non-static class type (or array of class type) member of `T` is trivial;

A trivial copy constructor for a non-union class effectively copies every scalar subobject (including, recursively, subobject of subobjects and so forth) of the argument and performs no other action. However, padding bytes need not be copied, and even the object representations of the copied subobjects need not be the same as long as their values are identical.

TriviallyCopyable objects can be copied by copying their object representations manually, e.g. with std::memmove. All data types compatible with the C language (POD types) are trivially copyable.

### Eligible copy constructor

|  |  |
| --- | --- |
| A copy constructor is eligible if it is either user-declared or both implicitly-declared and definable. | (until C++11) |
| A copy constructor is eligible if it is not deleted. | (since C++11) (until C++20) |
| A copy constructor is eligible if all following conditions are satisfied:   - It is not deleted. - Its associated constraints (if any) are satisfied. - No copy constructor whose associated constraints are satisfied is more constrained. | (since C++20) |

Triviality of eligible copy constructors determines whether the class is an implicit-lifetime type, and whether the class is a trivially copyable type.

### Notes

In many situations, copy constructors are optimized out even if they would produce observable side-effects, see copy elision.

### Example

```
struct A
{
    int n;
    A(int n = 1) : n(n) {}
    A(const A& a) : n(a.n) {} // user-defined copy constructor
};
 
struct B : A
{
    // implicit default constructor B::B()
    // implicit copy constructor B::B(const B&)
};
 
struct C : B
{
    C() : B() {}
private:
    C(const C&); // non-copyable, C++98 style
};
 
int main()
{
    A a1(7);
    A a2(a1); // calls the copy constructor
 
    B b;
    B b2 = b;
    A a3 = b; // conversion to A& and copy constructor
 
    volatile A va(10);
    // A a4 = va; // compile error
 
    C c;
    // C c2 = c; // compile error
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1353 | C++98 | the conditions where implicitly-declared copy constructors are undefined did not consider multi-dimensional array types | consider these types |
| CWG 2094 | C++11 | volatile members make copy non-trivial (CWG issue 496) | triviality not affected |
| CWG 2171 | C++11 | X(X&) = default was non-trivial | made trivial |
| CWG 2595 | C++20 | a copy constructor was not eligible if there is another copy constructor which is more constrained but does not satisfy its associated constraints | it can be eligible in this case |

### See also

- converting constructor
- copy assignment
- copy elision
- default constructor
- destructor
- `explicit`
- initialization
  - aggregate initialization
  - constant initialization
  - copy initialization
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
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/copy_constructor&oldid=172237>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 June 2024, at 22:47.