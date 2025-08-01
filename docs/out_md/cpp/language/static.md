# `static` members

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Virtual function | | | | | | `override` specifier (C++11) | | | | | | `final` specifier (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | explicit (C++11) | | | | | | ****static**** | | | | | |  | | | | | |
| Special member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default constructor | | | | | | Copy constructor | | | | | | Move constructor (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Copy assignment | | | | | | Move assignment (C++11) | | | | | | Destructor | | | | | |
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
| ****Static members**** | | | | |
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
| Copy constructor | | | | |
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

Inside a class definition, the keyword static declares members that are not bound to class instances.

Outside a class definition, it has a different meaning: see storage duration.

### Syntax

A declaration for a static member is a member declaration whose declaration specifiers contain the keyword static. The keyword static usually appears before other specifiers (which is why the syntax is often informally described as static data-member or static member-function), but may appear anywhere in the specifier sequence.

The name of any static data member and static member function must be different from the name of the containing class.

### Explanation

Static members of a class are not associated with the objects of the class: they are independent variables with static or thread(since C++11) storage duration or regular functions.

The static keyword is only used with the declaration of a static member, inside the class definition, but not with the definition of that static member:

```
class X { static int n; }; // declaration (uses 'static')
int X::n = 1;              // definition (does not use 'static')

```

The declaration inside the class body is not a definition and may declare the member to be of incomplete type (other than void), including the type in which the member is declared:

```
struct Foo;
 
struct S
{
    static int a[]; // declaration, incomplete type
    static Foo x;   // declaration, incomplete type
    static S s;     // declaration, incomplete type (inside its own definition)
};
 
int S::a[10]; // definition, complete type
struct Foo {};
Foo S::x;     // definition, complete type
S S::s;       // definition, complete type

```

|  |  |
| --- | --- |
| However, if the declaration uses constexpr or inline(since C++17) specifier, the member must be declared to have complete type. | (since C++11) |

To refer to a static member `m` of class `T`, two forms may be used: qualified name `T::m` or member access expression `E.m` or `E->m`, where `E` is an expression that evaluates to `T` or `T*` respectively. When in the same class scope, the qualification is unnecessary:

```
struct X
{
    static void f(); // declaration
    static int n;    // declaration
};
 
X g() { return X(); } // some function returning X
 
void f()
{
    X::f();  // X::f is a qualified name of static member function
    g().f(); // g().f is member access expression referring to a static member function
}
 
int X::n = 7; // definition
 
void X::f() // definition
{
    n = 1; // X::n is accessible as just n in this scope
}

```

Static members obey the class member access rules (private, protected, public).

#### Static member functions

Static member functions are not associated with any object. When called, they have no this pointer.

Static member functions cannot be virtual, const, volatile, or ref-qualified.

The address of a static member function may be stored in a regular pointer to function, but not in a pointer to member function.

#### Static data members

Static data members are not associated with any object. They exist even if no objects of the class have been defined. There is only one instance of the static data member in the entire program with static storage duration, unless the keyword thread_local is used, in which case there is one such object per thread with thread storage duration(since C++11).

Static data members cannot be mutable.

Static data members of a class in namespace scope have external linkage if the class itself has external linkage (is not a member of unnamed namespace). Local classes (classes defined inside functions) and unnamed classes, including member classes of unnamed classes, cannot have static data members.

|  |  |
| --- | --- |
| A static data member may be declared inline. An inline static data member can be defined in the class definition and may specify an initializer. It does not need an out-of-class definition:   ```text struct X {     inline static int fully_usable = 1; // No out-of-class definition required, ODR-usable     inline static const std::string class_name{"X"}; // Likewise       static const int non_addressable = 1; // C.f. non-inline constants, usable                                           // for its value, but not ODR-usable     // static const std::string class_name{"X"}; // Non-integral declaration of this                                                  // form is disallowed entirely }; ``` | (since C++17) |

#### Constant static members

If a static data member of integral or enumeration type is declared const (and not volatile), it can be initialized with an initializer in which every expression is a constant expression, right inside the class definition:

```
struct X
{
    const static int n = 1;
    const static int m{2}; // since C++11
    const static int k;
};
const int X::k = 3;

```

|  |  |
| --- | --- |
| If a static data member of LiteralType is declared constexpr, it must be initialized with an initializer in which every expression is a constant expression, right inside the class definition:   ```text struct X {     constexpr static int arr[] = { 1, 2, 3 };        // OK     constexpr static std::complex<double> n = {1,2}; // OK     constexpr static int k; // Error: constexpr static requires an initializer }; ``` | (since C++11) |

If a const non-inline(since C++17) static data member or a constexpr static data member(since C++11)(until C++17) is ODR-use, a definition at namespace scope is still required, but it cannot have an initializer.

|  |  |
| --- | --- |
| A constexpr static data member is implicitly inline and does not need to be redeclared at namespace scope. This redeclaration without an initializer (formerly required) is still permitted, but is deprecated. | (since C++17) |

```
struct X
{
    static const int n = 1;
    static constexpr int m = 4;
};
 
const int *p = &X::n, *q = &X::m; // X::n and X::m are ODR-used
const int X::n;             // … so a definition is necessary
constexpr int X::m;         // … (except for X::m in C++17)

```

### Keywords

static

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 194 | C++98 | (static) member function names can be the same as the class name | naming restriction added (including non-static member functions) |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 11.4.9 Static members [class.static]

- C++20 standard (ISO/IEC 14882:2020):

:   - 11.4.8 Static members [class.static]

- C++17 standard (ISO/IEC 14882:2017):

:   - 12.2.3 Static members [class.static]

- C++14 standard (ISO/IEC 14882:2014):

:   - 9.4 Static members [class.static]

- C++11 standard (ISO/IEC 14882:2011):

:   - 9.4 Static members [class.static]

- C++98 standard (ISO/IEC 14882:1998):

:   - 9.4 Static members [class.static]

### See also

- `static` storage specifier
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/static&oldid=175069>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 August 2024, at 01:34.