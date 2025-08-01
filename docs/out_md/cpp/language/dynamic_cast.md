# `dynamic_cast` conversion

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | static_cast | | | | | | const_cast | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Explicit conversions | | | | | | ****dynamic_cast**** | | | | | | reinterpret_cast | | | | | |
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | ****`dynamic_cast`**** | | | | | | `reinterpret_cast` | | | | | |

Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `dynamic_cast<` target-type `>(` expression `)` |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| target-type | - | pointer to complete class type, reference to complete class type, or pointer to (optionally cv-qualified) void |
| expression | - | lvalue(until C++11)glvalue(since C++11) of a complete class type if target-type is a reference, prvalue of a pointer to complete class type if target-type is a pointer |

### Explanation

For the convenience of description, “expression or the result is a reference to `T`” means that “it is a glvalue of type `T`”, which follows the convention of `decltype`(since C++11).

Only the following conversions can be done with dynamic_cast, except when such conversions would cast away constness (or volatility).

1) If the type of expression is exactly target-type or a less cv-qualified version of target-type, the result is the value of expression with type target-type.[[1]](dynamic_cast.html#cite_note-1)2) If target-type is “pointer to (possibly cv-qualified) `Base`” and the type of expression is “pointer to (possibly cv-qualified) `Derived`” such that `Base` is a base class of `Derived`, the result is

- a null pointer value if expression is a null pointer value, or
- a pointer to the unique `Base` subobject of the `Derived` object pointed to by expression otherwise.[[2]](dynamic_cast.html#cite_note-upcast-2)
3) If target-type is “reference to (possibly cv-qualified) `Base`” and the type of expression is “(possibly cv-qualified) `Derived`” such that `Base` is a base class of `Derived`, the result is the unique `Base` subobject of the `Derived` object referred to by expression.[[2]](dynamic_cast.html#cite_note-upcast-2)4) Otherwise, expression is a pointer or reference to a polymorphic type.a) If expression is a pointer:i) If expression is a null pointer value, the result is the null pointer value of type target-type.ii) Otherwise, if target-type is “pointer to (possibly cv-qualified) void”, the result is a pointer to the most derived object pointed to by expression.iii) Otherwise, if the type of expression is “pointer to (possibly cv-qualified) `U`”, expression must point to an object whose type is similar to `U` and that is within its lifetime or within its period of construction or destruction, otherwise the behavior is undefined.b) If the type of expression is “reference to (possibly cv-qualified) `U`”, expression must refer to an object whose type is similar to `U` and that is within its lifetime or within its period of construction or destruction, otherwise the behavior is undefined.c) Otherwise (expression points/refers to a proper object), a runtime check is applied to see if the object pointed/referred to by expression can be converted to the type pointed or referred to by target-type. Let `C` be the class type to which target-type points or refers. The runtime check logically executes as follows:i) If, in the most derived object pointed/referred to by expression, expression points/refers to a public base class subobject of a `C` object, and if only one object of type `C` is derived from the subobject pointed/referred to by expression, the result points/refers to that `C` object.[[3]](dynamic_cast.html#cite_note-3)ii) Otherwise, if expression points/refers to a public base class subobject of the most derived object, and the type of the most derived object has an unambiguous and public base class of type `C`, the result points/refers to the `C` subobject of the most derived object.[[4]](dynamic_cast.html#cite_note-4)iii) Otherwise, the runtime check fails.

- If target-type is a pointer type, the result is the null pointer value of target-type.
- If target-type is a reference type, an exception of a type that would match a handler of type std::bad_cast is thrown.

When dynamic_cast is used in a constructor or a destructor (directly or indirectly), and expression refers to the object that's currently under construction/destruction, the object is considered to be the most derived object. If target-type is not a pointer or reference to the constructor's/destructor's own class or one of its bases, the behavior is undefined.

1. ↑ In other words, dynamic_cast can be used to add constness. An implicit conversion and static_cast can perform this conversion as well.
2. ↑ 2.0 2.1 An implicit conversion and static_cast can perform this conversion as well.
3. ↑ This is known as a “downcast”.
4. ↑ This is known as a “sidecast”.

Similar to other cast expressions, the result is:

|  |  |
| --- | --- |
| - an lvalue if target-type is a reference type - an rvalue if target-type is a pointer type | (until C++11) |
| - an lvalue if target-type is an lvalue reference type (expression must be an lvalue) - an xvalue if target-type is an rvalue reference type (expression may be lvalue or rvalue(until C++17)must be a glvalue (prvalues are materialized)(since C++17) of a complete class type) - a prvalue if target-type is a pointer type | (since C++11) |

### Notes

A downcast can also be performed with static_cast, which avoids the cost of the runtime check, but it is only safe if the program can guarantee (through some other logic) that the object pointed to by expression is definitely `Derived`.

Some forms of dynamic_cast rely on run-time type identification (RTTI), that is, information about each polymorphic class in the compiled program. Compilers typically have options to disable the inclusion of this information.

### Keywords

dynamic_cast

### Example

Run this code

```
#include <iostream>
 
struct V
{
    virtual void f() {} // must be polymorphic to use runtime-checked dynamic_cast
};
 
struct A : virtual V {};
 
struct B : virtual V
{
    B(V* v, A* a)
    {
        // casts during construction (see the call in the constructor of D below)
        dynamic_cast<B*>(v); // well-defined: v of type V*, V base of B, results in B*
        dynamic_cast<B*>(a); // undefined behavior: a has type A*, A not a base of B
    }
};
 
struct D : A, B
{
    D() : B(static_cast<A*>(this), this) {}
};
 
struct Base
{
    virtual ~Base() {}
};
 
struct Derived : Base
{
    virtual void name() {}
};
 
int main()
{
    D d; // the most derived object
    A& a = d; // upcast, dynamic_cast may be used, but unnecessary
 
    [[maybe_unused]]
    D& new_d = dynamic_cast<D&>(a); // downcast
    [[maybe_unused]]
    B& new_b = dynamic_cast<B&>(a); // sidecast
 
    Base* b1 = new Base;
    if (Derived* d = dynamic_cast<Derived*>(b1); d != nullptr)
    {
        std::cout << "downcast from b1 to d successful\n";
        d->name(); // safe to call
    }
 
    Base* b2 = new Derived;
    if (Derived* d = dynamic_cast<Derived*>(b2); d != nullptr)
    {
        std::cout << "downcast from b2 to d successful\n";
        d->name(); // safe to call
    }
 
    delete b1;
    delete b2;
}

```

Output:

```
downcast from b2 to d successful

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1269 | C++11 | the runtime check was not performed for xvalue expression ﻿s if target-type is an rvalue reference type | performed |
| CWG 2861 | C++98 | expression could point/refer to a type-inaccessible object | the behavior is undefined in this case |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 7.6.1.7 Dynamic cast [expr.dynamic.cast]

- C++20 standard (ISO/IEC 14882:2020):

:   - 7.6.1.6 Dynamic cast [expr.dynamic.cast]

- C++17 standard (ISO/IEC 14882:2017):

:   - 8.2.7 Dynamic cast [expr.dynamic.cast]

- C++14 standard (ISO/IEC 14882:2014):

:   - 5.2.7 Dynamic cast [expr.dynamic.cast]

- C++11 standard (ISO/IEC 14882:2011):

:   - 5.2.7 Dynamic cast [expr.dynamic.cast]

- C++98 standard (ISO/IEC 14882:1998):

:   - 5.2.7 Dynamic cast [expr.dynamic.cast]

- C++03 standard (ISO/IEC 14882:2003):

:   - 5.2.7 Dynamic cast [expr.dynamic.cast]

### See also

- `const_cast`
- `static_cast`
- `reinterpret_cast`
- explicit cast
- implicit conversions
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/dynamic_cast&oldid=174965>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 August 2024, at 23:32.