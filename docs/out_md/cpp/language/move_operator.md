# Move assignment operator

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
| Copy constructor | | | | |
| Move constructor (C++11) | | | | |
| Copy assignment operator | | | | |
| ****Move assignment operator**** (C++11) | | | | |
| Destructor | | | | |
| Inheritance | | | | |
| Base and derived classes | | | | |
| Empty base optimization (EBO) | | | | |
| Virtual member functions | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

A move assignment operator is a non-template non-static member function with the name operator= that can be called with an argument of the same class type and copies the content of the argument, possibly mutating the argument.

### Syntax

For the formal move assignment operator syntax, see function declaration. The syntax list below only demonstrates a subset of all valid move assignment operator syntaxes.

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| return-type `operator=(`parameter-list ﻿`);` | (1) |  |
|  | | | | | | | | | |
| return-type `operator=(`parameter-list ﻿`)` function-body | (2) |  |
|  | | | | | | | | | |
| return-type `operator=(`parameter-list-no-default ﻿`) = default;` | (3) |  |
|  | | | | | | | | | |
| return-type `operator=(`parameter-list ﻿`) = delete;` | (4) |  |
|  | | | | | | | | | |
| return-type class-name ﻿`::``operator=(`parameter-list ﻿`)` function-body | (5) |  |
|  | | | | | | | | | |
| return-type class-name ﻿`::``operator=(`parameter-list-no-default ﻿`) = default;` | (6) |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| class-name | - | the class whose move assignment operator is being declared, the class type is given as `T` in the descriptions below |
| parameter-list | - | a parameter list of only one parameter, which is of type `T&&`, const T&&, volatile T&& or const volatile T&& |
| parameter-list-no-default | - | a parameter list of only one parameter, which is of type `T&&`, const T&&, volatile T&& or const volatile T&& and does not have a default argument |
| function-body | - | the function body of the move assignment operator |
| return-type | - | any type, but `T&` is favored in order to be consistent with scala types |

### Explanation

1) Declaration of a move assignment operator inside of class definition.2-4) Definition of a move assignment operator inside of class definition.3) The move assignment operator is explicitly-defaulted.4) The move assignment operator is deleted.5,6) Definition of a move assignment operator outside of class definition (the class must contain a declaration (1)).6) The move assignment operator is explicitly-defaulted.

```
struct X
{
    X& operator=(X&& other);    // move assignment operator
//  X operator=(const X other); // Error: incorrect parameter type
};
 
union Y
{
    // move assignment operators can have syntaxes not listed above,
    // as long as they follow the general function declaration syntax
    // and do not viloate the restrictions listed above
    auto operator=(Y&& other) -> Y&;       // OK: trailing return type
    Y& operator=(this Y&& self, Y& other); // OK: explicit object parameter
//  Y& operator=(Y&&, int num = 1);        // Error: has other non-object parameters
};

```

The move assignment operator is called whenever it is selected by overload resolution, e.g. when an object appears on the left-hand side of an assignment expression, where the right-hand side is an rvalue of the same or implicitly convertible type.

Move assignment operators typically transfer the resources held by the argument (e.g. pointers to dynamically-allocated objects, file descriptors, TCP sockets, thread handles, etc.), rather than make copies of them, and leave the argument in some valid but otherwise indeterminate state. Since move assignment doesn’t change the lifetime of the argument, the destructor will typically be called on the argument at a later point. For example, move-assigning from a std::string or from a std::vector may result in the argument being left empty. A move assignment is less, not more restrictively defined than ordinary assignment; where ordinary assignment must leave two copies of data at completion, move assignment is required to leave only one.

### Implicitly-declared move assignment operator

If no user-defined move assignment operators are provided for a class type, and all of the following is true:

- there are no user-declared copy constructors;
- there are no user-declared move constructors;
- there are no user-declared copy assignment operators;
- there is no user-declared destructor,

then the compiler will declare a move assignment operator as an inline public member of its class with the signature T& T::operator=(T&&).

A class can have multiple move assignment operators, e.g. both T& T::operator=(const T&&) and T& T::operator=(T&&). If some user-defined move assignment operators are present, the user may still force the generation of the implicitly declared move assignment operator with the keyword `default`.

The implicitly-declared move assignment operator has an exception specification as described in dynamic exception specification(until C++17)noexcept specification(since C++17).

Because some assignment operator (move or copy) is always declared for any class, the base class assignment operator is always hidden. If a using-declaration is used to bring in the assignment operator from the base class, and its argument type could be the same as the argument type of the implicit assignment operator of the derived class, the using-declaration is also hidden by the implicit declaration.

### Implicitly-defined move assignment operator

If the implicitly-declared move assignment operator is neither deleted nor trivial, it is defined (that is, a function body is generated and compiled) by the compiler if odr-used or needed for constant evaluation(since C++14).

For union types, the implicitly-defined move assignment operator copies the object representation (as by std::memmove).

For non-union class types, the move assignment operator performs full member-wise move assignment of the object's direct bases and immediate non-static members, in their declaration order, using built-in assignment for the scalars, memberwise move-assignment for arrays, and move assignment operator for class types (called non-virtually).

|  |  |
| --- | --- |
| The implicitly-defined move assignment operator for a class `T` is `constexpr` if   - `T` is a literal type, and - the assignment operator selected to move each direct base class subobject is a constexpr function, and - for each non-static data member of `T` that is of class type (or array thereof), the assignment operator selected to move that member is a constexpr function. | (since C++14) (until C++23) |
| The implicitly-defined move assignment operator for a class `T` is `constexpr`. | (since C++23) |

As with copy assignment, it is unspecified whether virtual base class subobjects that are accessible through more than one path in the inheritance lattice, are assigned more than once by the implicitly-defined move assignment operator:

```
struct V
{
    V& operator=(V&& other)
    {
        // this may be called once or twice
        // if called twice, 'other' is the just-moved-from V subobject
        return *this;
    }
};
 
struct A : virtual V {}; // operator= calls V::operator=
struct B : virtual V {}; // operator= calls V::operator=
struct C : B, A {};      // operator= calls B::operator=, then A::operator=
                         // but they may only call V::operator= once
 
int main()
{
    C c1, c2;
    c2 = std::move(c1);
}

```

### Deleted move assignment operator

The implicitly-declared or defaulted move assignment operator for class `T` is defined as deleted if any of the following conditions is satisfied:

- `T` has a non-static data member of a const-qualified non-class type (or possibly multi-dimensional array thereof).
- `T` has a non-static data member of a reference type.
- `T` has a potentially constructed subobject of class type `M` (or possibly multi-dimensional array thereof) such that the overload resolution as applied to find `M`'s move assignment operator

:   - does not result in a usable candidate, or
    - in the case of the subobject being a variant member, selects a non-trivial function.

A deleted implicitly-declared move assignment operator is ignored by overload resolution.

### Trivial move assignment operator

The move assignment operator for class `T` is trivial if all of the following is true:

- It is not user-provided (meaning, it is implicitly-defined or defaulted);
- `T` has no virtual member functions;
- `T` has no virtual base classes;
- the move assignment operator selected for every direct base of `T` is trivial;
- the move assignment operator selected for every non-static class type (or array of class type) member of `T` is trivial.

A trivial move assignment operator performs the same action as the trivial copy assignment operator, that is, makes a copy of the object representation as if by std::memmove. All data types compatible with the C language are trivially move-assignable.

### Eligible move assignment operator

|  |  |
| --- | --- |
| A move assignment operator is eligible if it is not deleted. | (until C++20) |
| A move assignment operator is eligible if all following conditions are satisfied:   - It is not deleted. - Its associated constraints (if any) are satisfied. - No move assignment operator whose associated constraints are satisfied is more constrained. | (since C++20) |

Triviality of eligible move assignment operators determines whether the class is a trivially copyable type.

### Notes

If both copy and move assignment operators are provided, overload resolution selects the move assignment if the argument is an **rvalue** (either a **prvalue** such as a nameless temporary or an **xvalue** such as the result of std::move), and selects the copy assignment if the argument is an **lvalue** (named object or a function/operator returning lvalue reference). If only the copy assignment is provided, all argument categories select it (as long as it takes its argument by value or as reference to const, since rvalues can bind to const references), which makes copy assignment the fallback for move assignment, when move is unavailable.

It is unspecified whether virtual base class subobjects that are accessible through more than one path in the inheritance lattice, are assigned more than once by the implicitly-defined move assignment operator (same applies to copy assignment).

See assignment operator overloading for additional detail on the expected behavior of a user-defined move-assignment operator.

### Example

Run this code

```
#include <iostream>
#include <string>
#include <utility>
 
struct A
{
    std::string s;
 
    A() : s("test") {}
 
    A(const A& o) : s(o.s) { std::cout << "move failed!\n"; }
 
    A(A&& o) : s(std::move(o.s)) {}
 
    A& operator=(const A& other)
    {
         s = other.s;
         std::cout << "copy assigned\n";
         return *this;
    }
 
    A& operator=(A&& other)
    {
         s = std::move(other.s);
         std::cout << "move assigned\n";
         return *this;
    }
};
 
A f(A a) { return a; }
 
struct B : A
{
    std::string s2; 
    int n;
    // implicit move assignment operator B& B::operator=(B&&)
    // calls A's move assignment operator
    // calls s2's move assignment operator
    // and makes a bitwise copy of n
};
 
struct C : B
{
    ~C() {} // destructor prevents implicit move assignment
};
 
struct D : B
{
    D() {}
    ~D() {} // destructor would prevent implicit move assignment
    D& operator=(D&&) = default; // force a move assignment anyway 
};
 
int main()
{
    A a1, a2;
    std::cout << "Trying to move-assign A from rvalue temporary\n";
    a1 = f(A()); // move-assignment from rvalue temporary
    std::cout << "Trying to move-assign A from xvalue\n";
    a2 = std::move(a1); // move-assignment from xvalue
 
    std::cout << "\nTrying to move-assign B\n";
    B b1, b2;
    std::cout << "Before move, b1.s = \"" << b1.s << "\"\n";
    b2 = std::move(b1); // calls implicit move assignment
    std::cout << "After move, b1.s = \"" << b1.s << "\"\n";
 
    std::cout << "\nTrying to move-assign C\n";
    C c1, c2;
    c2 = std::move(c1); // calls the copy assignment operator
 
    std::cout << "\nTrying to move-assign D\n";
    D d1, d2;
    d2 = std::move(d1);
}

```

Output:

```
Trying to move-assign A from rvalue temporary
move assigned
Trying to move-assign A from xvalue
move assigned
 
Trying to move-assign B
Before move, b1.s = "test"
move assigned
After move, b1.s = ""
 
Trying to move-assign C
copy assigned
 
Trying to move-assign D
move assigned

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1353 | C++11 | the conditions where defaulted move assignment operators are defined as deleted did not consider multi-dimensional array types | consider these types |
| CWG 1402 | C++11 | a defaulted move assignment operator that would call a non-trivial copy assignment operator was deleted; a defaulted move assignment operator that is deleted still participated in overload resolution | allows call to such copy assignment operator; made ignored in overload resolution |
| CWG 1806 | C++11 | specification for a defaulted move assignment operator involving a virtual base class was missing | added |
| CWG 2094 | C++11 | a volatile subobject made of a defaulted move assignment operator non-trivial (CWG issue 496) | triviality not affected |
| CWG 2180 | C++11 | a defaulted move assignment operator for class `T` was not defined as deleted if `T` is abstract and has non-move-assignable direct virtual base classes | the operator is defined as deleted in this case |
| CWG 2595 | C++20 | a move assignment operator was not eligible if there is another move assignment operator which is more constrained but does not satisfy its associated constraints | it can be eligible in this case |
| CWG 2690 | C++11 | the implicitly-defined move assignment operator for union types did not copy the object representation | they copy the object representation |

### See also

- constructor
- converting constructor
- copy assignment
- copy constructor
- default constructor
- destructor
- initialization
  - aggregate initialization
  - constant initialization
  - copy initialization
  - default initialization
  - direct initialization
  - list initialization
  - reference initialization
  - value initialization
  - zero initialization
- move constructor
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/move_assignment&oldid=175721>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 September 2024, at 06:11.