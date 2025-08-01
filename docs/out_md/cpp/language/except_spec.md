# Dynamic exception specification (until C++17)

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
| ****Dynamic exception specifications**** (until C++17\*) | | | | |
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

 Exceptions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| try block | | | | |
| Throwing exceptions | | | | |
| Handling exceptions | | | | |
| Exception specification | | | | |
| noexcept specification (C++11) | | | | |
| ****dynamic specification**** (until C++17\*) | | | | |
| noexcept operator (C++11) | | | | |

Lists the exceptions that a function might directly or indirectly throw.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `throw(`type-id-list ﻿(optional)`)` | (1) | (deprecated in C++11) (removed in C++17) |
|  | | | | | | | | | |

1) Explicit dynamic exception specification.

|  |  |  |
| --- | --- | --- |
| type-id-list | - | comma-separated list of type-ids, a type-id representing a pack expansion is followed by an ellipsis (...)(since C++11) |

An explicit dynamic exception specification shall appear only on a function declarator for a function type, pointer to function type, reference to function type, or pointer to member function type that is the top-level type of a declaration or definition, or on such a type appearing as a parameter or return type in a function declarator.

```
void f() throw(int);            // OK: function declaration
void (*pf)() throw (int);       // OK: pointer to function declaration
void g(void pfa() throw(int));  // OK: pointer to function parameter declaration
typedef int (*pf)() throw(int); // Error: typedef declaration

```

### Explanation

If a function is declared with type `T` listed in its dynamic exception specification, the function may throw exceptions of that type or a type derived from it.

Incomplete types, pointers or references to incomplete types other than cv `void*`, and rvalue reference types(since C++11) are not allowed in the exception specification. Array and function types, if used, are adjusted to corresponding pointer types, top level cv-qualifications are also dropped. parameter packs are allowed(since C++11).

A dynamic exception specification whose set of adjusted types is empty (after any packs are expanded)(since C++11) is non-throwing. A function with a non-throwing dynamic exception specification does not allow any exceptions.

A dynamic exception specification is not considered part of a function’s type.

If the function throws an exception of the type not listed in its exception specification, the function std::unexpected is called. The default function calls std::terminate, but it may be replaced by a user-provided function (via std::set_unexpected) which may call std::terminate or throw an exception. If the exception thrown from std::unexpected is accepted by the exception specification, stack unwinding continues as usual. If it isn't, but std::bad_exception is allowed by the exception specification, std::bad_exception is thrown. Otherwise, std::terminate is called.

#### Instantiation

The dynamic exception specification of a function template specialization is not instantiated along with the function declaration; it is instantiated only when **needed** (as defined below).

The dynamic exception specification of an implicitly-declared special member function is also evaluated only when needed (in particular, implicit declaration of a member function of a derived class does not require the exception-specification of a base member function to be instantiated).

When the dynamic exception specification of a function template specialization is **needed**, but has not yet been instantiated, the dependent names are looked up and any templates used in the expression are instantiated as if for the declaration of the specialization.

A dynamic exception specification of a function is considered to be **needed** in the following contexts:

- in an expression, where the function is selected by overload resolution
- the function is odr-used
- the function would be odr-used but appears in an unevaluated operand

```
template<class T>
T f() throw(std::array<char, sizeof(T)>);
 
int main()
{
    decltype(f<void>()) *p; // f unevaluated, but exception specification is needed
                            // error because instantiation of the exception specification
                            // calculates sizeof(void)
}

```

- the specification is needed to compare to another function declaration (e.g. on a virtual function overrider or on an explicit specialization of a function template)
- in a function definition
- the specification is needed because a defaulted special member function needs to check it in order to decide its own exception specification (this takes place only when the specification of the defaulted special member function is, itself, needed).

### Potential exceptions

Each function `f`, pointer to function `pf`, and pointer to member function `pmf` has a **set of potential exceptions**, which consists of types that might be thrown. Set of all types indicates that any exception may be thrown. This set is defined as follows:

1) If the declaration of `f`, `pf`, or `pmf` uses a dynamic exception specification that does not allow all exceptions(until C++11), the set consists of the types listed in that specification.

|  |  |
| --- | --- |
| 2) Otherwise, if the declaration of `f`, `pf`, or `pmf` uses `noexcept(true)`, the set is empty. | (since C++11) |

3) Otherwise, the set is the set of all types.

Note: for implicitly-declared special member functions (constructors, assignment operators, and destructors) and for the inheriting constructors(since C++11), the set of potential exceptions is a combination of the sets of the potential exceptions of everything they would call: constructors/assignment operators/destructors of non-variant non-static data members, direct bases, and, where appropriate, virtual bases (including default argument expressions, as always).

Each expression `e` has a **set of potential exceptions**. The set is empty if `e` is a core constant expression, otherwise, it is the union of the sets of potential exceptions of all immediate subexpressions of `e` (including default argument expressions), combined with another set that depends on the form of `e`, as follows:

1) If `e` is a function call expression, let `g` denote the function, function pointer, or pointer to member function that is that is called, then

:   - if the declaration of `g` uses a dynamic exception specification, the set of potential exceptions of `g` is added to the set;

|  |  |
| --- | --- |
| - if the declaration of `g` uses `noexcept(true)`, the set is empty; | (since C++11) |

:   - otherwise, the set is the set of all types.

2) If `e` calls a function implicitly (it's an operator expression and the operator is overloaded, it is a new-expression and the allocation function is overloaded, or it is a full expression and the destructor of a temporary is called), then the set is the set of that function.3) If `e` is a throw-expression, the set is the exception that would be initialized by its operand, or the set of all types for the re-throwing throw-expression (with no operand).4) If `e` is a `dynamic_cast` to a reference to a polymorphic type, the set consists of std::bad_cast.5) If `e` is a `typeid` applied to a dereferenced pointer to a polymorphic type, the set consists of std::bad_typeid.

|  |  |
| --- | --- |
| 6) If `e` is a new-expression with a non-constant array size, and the selected allocation function has a non-empty set of potential exceptions, the set consists of std::bad_array_new_length. | (since C++11) |

```
void f() throw(int); // f()'s set is "int"
void g();            // g()'s set is the set of all types
 
struct A { A(); };                  // "new A"'s set is the set of all types
struct B { B() noexcept; };         // "B()"'s set is empty
struct D() { D() throw (double); }; // new D's set is the set of all types

```

All implicitly-declared member functions and inheriting constructors (since C++11)have exception specifications, selected as follows:

- If the set of potential exceptions is the set of all types, the implicit exception specification allows all exceptions (the exception specification is considered present, even though it is inexpressible in code and behaves as if there is no exception specification)(until C++11)is noexcept(false)(since C++11).
- Otherwise, If the set of potential exceptions is not empty, the implicit exception specification lists every type from the set.
- Otherwise, the implicit exception specification is throw()(until C++11)noexcept(true)(since C++11).

```
struct A
{
    A(int = (A(5), 0)) noexcept;
    A(const A&) throw();
    A(A&&) throw();
    ~A() throw(X);
};
 
struct B
{
    B() throw();
    B(const B&) = default; // exception specification is "noexcept(true)"
    B(B&&, int = (throw Y(), 0)) noexcept;
    ~B() throw(Y);
};
 
int n = 7;
struct D : public A, public B
{
    // May throw an exception of a type that would match a handler of type
    // std​::​bad_array_new_length, but does not throw a bad allocation exception
    (void*) new (std::nothrow) int[n];
 
    // D may have the following implicitly-declared members:
    // D::D() throw(X, std::bad_array_new_length);
    // D::D(const D&) noexcept(true);
    // D::D(D&&) throw(Y);
    // D::~D() throw(X, Y);
};

```

### Notes

Clang considers the rule of instantiation of dynamic exception specification is changed in C++11 by CWG1330, see LLVM #56349.

### Keywords

throw

### Example

Note: best be compiled in C++98 mode to avoid warnings. Incompatible with C++17 and newer revisions.

Run this code

```
#include <cstdlib>
#include <exception>
#include <iostream>
 
class X {};
class Y {};
class Z : public X {};
class W {};
 
void f() throw(X, Y) 
{
    bool n = false;
 
    if (n)
        throw X(); // OK, would call std::terminate()
    if (n)
        throw Z(); // also OK
 
    throw W(); // will call std::unexpected()
}
 
void handler()
{
    std::cerr << "That was unexpected!\n"; // flush needed
    std::abort();
}
 
int main()
{
    std::set_unexpected(handler);
    f();
}

```

Output:

```
That was unexpected!

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 25 | C++98 | the behavior of assignment and initialization between pointers to members with different exception specifications was unspecified | apply the restriction for function pointers and references |
| CWG 973 | C++98 | exception specification may contain functions types, but the corresponding function pointer conversion was not specified | specified |
| CWG 1330 | C++98 | an exception specification might be eagerly instantiated | it is only instantiated only if needed |
| CWG 1267 | C++11 | rvalue reference types were allowed in exception specifications | not allowed |
| CWG 1351 | C++98 C++11 | default argument (C++98) and default member initializer (C++11) were ignored in implicit exception specification | made considered |
| CWG 1777 | C++11 | throw(T...) was not a non-throwing specification even if T is an empty pack | it is non-throwing if the pack is empty |
| CWG 2191 | C++98 | the set of potential exceptions of a `typeid` expression might contain `bad_typeid` even if it cannot be thrown | contains `bad_typeid` only if it can be thrown |

### See also

|  |  |
| --- | --- |
| `noexcept` specifier(C++11) | specifies whether a function could throw exceptions |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/except_spec&oldid=174586>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 August 2024, at 23:41.