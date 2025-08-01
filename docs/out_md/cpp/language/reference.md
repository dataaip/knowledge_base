# Reference declaration

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Overview | | | | | | Declaration syntax | | | | | | **decl-specifier-seq** | | | | | | Declarator | | | | | | Conflicting declarations | | | | | | Specifiers | | | | | | typedef | | | | | | inline | | | | | | virtual function specifier | | | | | | explicit function specifier | | | | | | friend | | | | | | constexpr(C++11) | | | | | | consteval(C++20) | | | | | | constinit(C++20) | | | | | | Storage class specifiers | | | | | | Translation-unit-local (C++20) | | | | | | class/struct | | | | | | union | | | | | | enum | | | | | | decltype(C++11) | | | | | | auto(C++11) | | | | | | alignas(C++11) | | | | | | constvolatile | | | | | | Pack indexing specifier (C++26) | | | | | | Elaborated type specifier | | | | | | Attributes (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Declarators | | | | | | ****Reference**** | | | | | | Pointer | | | | | | Array | | | | | | Block declarations | | | | | | Simple-declaration | | | | | | →Structured binding declaration (C++17) | | | | | | Alias declaration (C++11) | | | | | | Namespace alias definition | | | | | | using declaration | | | | | | `using` directive | | | | | | static_assert declaration (C++11) | | | | | | asm declaration | | | | | | Opaque enum declaration (C++11) | | | | | | Other declarations | | | | | | Namespace definition | | | | | | Function declaration | | | | | | Class template declaration | | | | | | Function template declaration | | | | | | Explicit template instantiation (C++11) | | | | | | Explicit template specialization | | | | | | Linkage specification | | | | | | Attribute declaration (C++11) | | | | | | Empty declaration | | | | | |  | | | | | |

Declares a named variable as a reference, that is, an alias to an already-existing object or function.

### Syntax

A reference variable declaration is any simple declaration whose declarator has the form

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `&` attr ﻿(optional) declarator | (1) |  |
|  | | | | | | | | | |
| `&&` attr ﻿(optional) declarator | (2) | (since C++11) |
|  | | | | | | | | | |

1) ****Lvalue reference declarator****: the declaration S& D; declares `D` as an **lvalue reference** to the type determined by decl-specifier-seq `S`.2) ****Rvalue reference declarator****: the declaration S&& D; declares `D` as an **rvalue reference** to the type determined by decl-specifier-seq `S`.

|  |  |  |
| --- | --- | --- |
| declarator | - | any declarator except another reference declarator (there are no references to references) |
| attr | - | (since C++11) list of attributes |

A reference is required to be initialized to refer to a valid object or function: see reference initialization.

The type “reference to (possibly cv-qualified) void” cannot be formed.

Reference types cannot be cv-qualified at the top level; there is no syntax for that in declaration, and if a qualification is added to a typedef-name or `decltype` specifier,(since C++11) or type template parameter, it is ignored.

References are not objects; they do not necessarily occupy storage, although the compiler may allocate storage if it is necessary to implement the desired semantics (e.g. a non-static data member of reference type usually increases the size of the class by the amount necessary to store a memory address).

Because references are not objects, there are no arrays of references, no pointers to references, and no references to references:

```
int& a[3]; // error
int&* p;   // error
int& &r;   // error

```

|  |  |
| --- | --- |
| Reference collapsing It is permitted to form references to references through type manipulations in templates or typedefs, in which case the **reference collapsing** rules apply: rvalue reference to rvalue reference collapses to rvalue reference, all other combinations form lvalue reference:   ```text typedef int&  lref; typedef int&& rref; int n;   lref&  r1 = n; // type of r1 is int& lref&& r2 = n; // type of r2 is int& rref&  r3 = n; // type of r3 is int& rref&& r4 = 1; // type of r4 is int&& ```   (This, along with special rules for template argument deduction when `T&&` is used in a function template, forms the rules that make std::forward possible.) | (since C++11) |

### Lvalue references

Lvalue references can be used to alias an existing object (optionally with different cv-qualification):

Run this code

```
#include <iostream>
#include <string>
 
int main()
{
    std::string s = "Ex";
    std::string& r1 = s;
    const std::string& r2 = s;
 
    r1 += "ample";           // modifies s
//  r2 += "!";               // error: cannot modify through reference to const
    std::cout << r2 << '\n'; // prints s, which now holds "Example"
}

```

They can also be used to implement pass-by-reference semantics in function calls:

Run this code

```
#include <iostream>
#include <string>
 
void double_string(std::string& s)
{
    s += s; // 's' is the same object as main()'s 'str'
}
 
int main()
{
    std::string str = "Test";
    double_string(str);
    std::cout << str << '\n';
}

```

When a function's return type is lvalue reference, the function call expression becomes an lvalue expression:

Run this code

```
#include <iostream>
#include <string>
 
char& char_number(std::string& s, std::size_t n)
{
    return s.at(n); // string::at() returns a reference to char
}
 
int main()
{
    std::string str = "Test";
    char_number(str, 1) = 'a'; // the function call is lvalue, can be assigned to
    std::cout << str << '\n';
}

```

|  |  |
| --- | --- |
| Rvalue references Rvalue references can be used to extend the lifetimes of temporary objects (note, lvalue references to const can extend the lifetimes of temporary objects too, but they are not modifiable through them): Run this code  ```text #include <iostream> #include <string>   int main() {     std::string s1 = "Test"; //  std::string&& r1 = s1;           // error: can't bind to lvalue       const std::string& r2 = s1 + s1; // okay: lvalue reference to const extends lifetime //  r2 += "Test";                    // error: can't modify through reference to const       std::string&& r3 = s1 + s1;      // okay: rvalue reference extends lifetime     r3 += "Test";                    // okay: can modify through reference to non-const     std::cout << r3 << '\n'; } ```   More importantly, when a function has both rvalue reference and lvalue reference overloads, the rvalue reference overload binds to rvalues (including both prvalues and xvalues), while the lvalue reference overload binds to lvalues: Run this code  ```text #include <iostream> #include <utility>   void f(int& x) {     std::cout << "lvalue reference overload f(" << x << ")\n"; }   void f(const int& x) {     std::cout << "lvalue reference to const overload f(" << x << ")\n"; }   void f(int&& x) {     std::cout << "rvalue reference overload f(" << x << ")\n"; }   int main() {     int i = 1;     const int ci = 2;       f(i);  // calls f(int&)     f(ci); // calls f(const int&)     f(3);  // calls f(int&&)            // would call f(const int&) if f(int&&) overload wasn't provided     f(std::move(i)); // calls f(int&&)       // rvalue reference variables are lvalues when used in expressions     int&& x = 1;     f(x);            // calls f(int& x)     f(std::move(x)); // calls f(int&& x) } ```   This allows move constructors, move assignment operators, and other move-aware functions (e.g. std::vector::push_back()) to be automatically selected when suitable.  Because rvalue references can bind to xvalues, they can refer to non-temporary objects:   ```text int i2 = 42; int&& rri = std::move(i2); // binds directly to i2 ```   This makes it possible to move out of an object in scope that is no longer needed:   ```text std::vector<int> v{1, 2, 3, 4, 5}; std::vector<int> v2(std::move(v)); // binds an rvalue reference to v assert(v.empty()); ```  Forwarding references Forwarding references are a special kind of references that preserve the value category of a function argument, making it possible to **forward** it by means of std::forward. Forwarding references are either: 1) function parameter of a function template declared as rvalue reference to cv-unqualified type template parameter of that same function template:  ```text template<class T> int f(T&& x)                      // x is a forwarding reference {     return g(std::forward<T>(x)); // and so can be forwarded }   int main() {     int i;     f(i); // argument is lvalue, calls f<int&>(int&), std::forward<int&>(x) is lvalue     f(0); // argument is rvalue, calls f<int>(int&&), std::forward<int>(x) is rvalue }   template<class T> int g(const T&& x); // x is not a forwarding reference: const T is not cv-unqualified   template<class T> struct A {     template<class U>     A(T&& x, U&& y, int* p); // x is not a forwarding reference: T is not a                              // type template parameter of the constructor,                              // but y is a forwarding reference }; ```  2) auto&& except when deduced from a brace-enclosed initializer list or, when representing a template parameter of a class template during class template argument deduction(since C++17):  ```text auto&& vec = foo();       // foo() may be lvalue or rvalue, vec is a forwarding reference auto i = std::begin(vec); // works either way (*i)++;                   // works either way   g(std::forward<decltype(vec)>(vec)); // forwards, preserving value category   for (auto&& x: f()) {     // x is a forwarding reference; this is a common way to use range for in generic code }   auto&& z = {1, 2, 3}; // *not* a forwarding reference (special case for initializer lists) ```   See also template argument deduction and std::forward. | (since C++11) |

### Dangling references

Although references always refer to valid objects or functions upon initialization, it is possible to create a program where the lifetime of the referred-to object ends, but the reference remains accessible (**dangling**).

Given an expression expr of reference type and let target be the object or function denoted by the reference:

- If a pointer to target would be valid in the context of the evalution of expr, the result designates target.
- Otherwise, the behavior is undefined.

```
std::string& f()
{
    std::string s = "Example";
    return s; // exits the scope of s:
              // its destructor is called and its storage deallocated
}
 
std::string& r = f(); // dangling reference
std::cout << r;       // undefined behavior: reads from a dangling reference
std::string s = f();  // undefined behavior: copy-initializes from a dangling reference

```

Note that rvalue references and lvalue references to const extend the lifetimes of temporary objects (see Reference initialization for rules and exceptions).

If the referred-to object was destroyed (e.g. by explicit destructor call), but the storage was not deallocated, a reference to the out-of-lifetime object may be used in limited ways, and may become valid if the object is recreated in the same storage (see Access outside of lifetime for details).

### Type-inaccessible references

Attempting to bind a reference to an object where the converted initializer is an lvalue(until C++11)a glvalue(since C++11) through which the object is not type-accessible results in undefined behavior:

```
char x alignas(int);
 
int& ir = *reinterpret_cast<int*>(&x); // undefined behavior:
                                       // initializer refers to char object

```

### Call-incompatible references

Attempting to bind a reference to a function where the converted initializer is an lvalue(until C++11)a glvalue(since C++11) whose type is not call-compatible with the type of the function's definition results in undefined behavior:

```
void f(int);
 
using F = void(float);
F& ir = *reinterpret_cast<F*>(&f); // undefined behavior:
                                   // initializer refers to void(int) function

```

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_rvalue_references` | `200610L` | (C++11) | Rvalue references |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 453 | C++98 | it was unclear which object or function a reference cannot be bound to | made clear |
| CWG 1510 | C++11 | cv-qualified references could not be formed in the operand of decltype | allowed |
| CWG 2550 | C++98 | parameters could have type “reference to void” | disallowed |
| CWG 2933 | C++98 | the behavior of accessing dangling references was unclear | made clear |

### External links

|  |
| --- |
| Thomas Becker, 2013 - C++ Rvalue References Explained |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference&oldid=180198>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 February 2025, at 00:37.