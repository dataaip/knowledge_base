# Reference initialization

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | ****Reference initialization**** | | | | | |  | | | | | |

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
| ****Reference initialization**** | | | | |
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

Binds a reference to an object.

### Syntax

##### Non-list-initialization

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| T ﻿`&` ref `=` target `;`  T ﻿`&` ref `(` target `);` | (1) |  |
|  | | | | | | | | | |
| T ﻿`&&` ref `=` target `;`  T ﻿`&&` ref `(` target `);` | (2) | (since C++11) |
|  | | | | | | | | | |
| func-refpar `(` target `)` | (3) |  |
|  | | | | | | | | | |
| `return` target `;` | (4) | (inside the definition of func-refret ﻿) |
|  | | | | | | | | | |
| Class`::`Class`(`...`) :` ref-member `(` target `) {` ... `}` | (5) | (inside the definition of Class ﻿) |
|  | | | | | | | | | |

##### Ordinary list-initialization (since C++11)

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| T ﻿`&` ref `= {` arg1`,` arg2`,` ... `};`  T ﻿`&` ref `{` arg1`,` arg2`,` ... `};` | (1) |  |
|  | | | | | | | | | |
| T ﻿`&&` ref `= {` arg1`,` arg2`,` ... `};`  T ﻿`&&` ref `{` arg1`,` arg2`,` ... `};` | (2) |  |
|  | | | | | | | | | |
| func-refpar `({` arg1`,` arg2`,` ... `});` | (3) |  |
|  | | | | | | | | | |

##### Designated list-initialization (since C++20)

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| T ﻿`&` ref `= {.`des1 `=` arg1 `, .`des2 `{` arg2 `}` ... `};`  T ﻿`&` ref `{.`des1 `=` arg1 `, .`des2 `{` arg2 `}` ... `};` | (1) |  |
|  | | | | | | | | | |
| T ﻿`&&` ref `= {.`des1 `=` arg1 `, .`des2 `{` arg2 `}` ... `};`  T ﻿`&&` ref `{.`des1 `=` arg1 `, .`des2 `{` arg2 `}` ... `};` | (2) |  |
|  | | | | | | | | | |
| func-refpar `({.`des1 `=` arg1 `, .`des2 `{` arg2 `}` ... `});` | (3) |  |
|  | | | | | | | | | |

A reference to `T` can be initialized with an object of type `T`, a function of type `T`, or an object implicitly convertible to `T`. Once initialized, a reference cannot be reseated (changed) to refer to another object.

References are initialized in the following situations:

1) When a named lvalue reference variable is declared with an initializer.2) When a named rvalue reference variable is declared with an initializer.3) In a function call expression, when the function parameter has reference type.4) In the return statement, when the function returns a reference type. The program is ill-formed if the returned reference is bound to the result of a temporary expression.(since C++26)5) When a non-static data member of reference type is initialized using a member initializer.

### Explanation

|  |  |  |
| --- | --- | --- |
| T | - | the referenced type |
| ref | - | the reference variable to be initialized |
| target | - | the initializer expression being used |
| func-refpar | - | a function with a parameter of reference type (T ﻿`&` or T ﻿`&&`(since C++11)) |
| func-refret | - | a function whose returns type is a reference type (T ﻿`&` or T ﻿`&&`(since C++11)) |
| Class | - | a class name |
| ref-member | - | a non-static data member of reference type (T ﻿`&` or T ﻿`&&`(since C++11)) of Class |
| des1, des2, ... | - | designators |
| arg1, arg2, ... | - | the initializers in initializer lists |

### Definitions

For two types `T1` and `T2`:

- Given the cv-unqualified versions of `T1` and `T2` as `U1` and `U2` respectively, if `U1` is similar to `U2`, or `U1` is a base class of `U2`, `T1` is **reference-related** to `T2`.
- If a prvalue of type “pointer to `T2`” can be converted to the type “pointer to `T1`” via a standard conversion sequence, `T1` is **reference-compatible** with `T2`.

### Initialization rules

|  |  |
| --- | --- |
| If a reference initialization uses an ordinary or designated(since C++20) list-initialization, the rules of list-initialization are followed. | (since C++11) |

For non-list reference initialization, given the type of target as `U`, the reference either **binds directly** to target or binds to a value of type `T` converted from target. Direct binding is considered first, followed by indirect binding, if neither binding is available, the program is ill-formed.

In all cases where the reference-compatible relationship of two types is used to establish the validity of a reference binding and the standard conversion sequence would be ill-formed, a program that necessitates such a binding is ill-formed.

#### Direct binding

If all following conditions are satisfied:

- The reference to be initialized is an lvalue reference.
- target is a non-bit-field lvalue.
- `T` is reference-compatible with `U`.

Then the reference binds to target, or to its appropriate base class subobject:

```
double d = 2.0;
double& rd = d;        // rd refers to d
const double& rcd = d; // rcd refers to d
 
struct A {};
struct B : A {} b;
 
A& ra = b;             // ra refers to A subobject in b
const A& rca = b;      // rca refers to A subobject in b

```

Otherwise, if all following conditions are satisfied:

- The reference to be initialized is an lvalue reference.
- `U` is a class type.
- `T` is not reference-related to `U`.
- target can be converted to an lvalue of type `V` such that `T` is reference-compatible with `V`.

Then the reference binds to the lvalue result of the conversion, or to its appropriate base class subobject:

```
struct A {};
struct B : A { operator int&(); };
 
int& ir = B(); // ir refers to the result of B::operator int&

```

Otherwise, if the reference to be initialized is an lvalue reference, and `T` is not const-qualified or is volatile-qualified, the prorgram is ill-formed:

```
double& rd2 = 2.0; // error: not an lvalue and reference is not const
int i = 2;
double& rd3 = i;   // error: type mismatch and reference is not const

```

Otherwise, if all following conditions are satisfied:

- target is a value of any following category:

|  |  |
| --- | --- |
| - rvalue | (until C++11) |
| - non-bit-field xvalue - class prvalue - array prvalue - function lvalue | (since C++11) (until C++17) |
| - non-bit-field rvalue - function lvalue | (since C++17) |

- `T` is reference-compatible with `U`.

Then the reference binds to target, or to its appropriate base class subobject:

```
struct A {};
struct B : A {};
extern B f();
 
const A& rca2 = f(); // bound to the A subobject of the B rvalue.
A&& rra = f();       // same as above
 
int i2 = 42;
int&& rri = static_cast<int&&>(i2); // bound directly to i2

```

|  |  |
| --- | --- |
| If target is a prvalue, temporary materialization is applied to it, considering the type of the prvalue to be the adjusted type `P`.   - `P` is adjusted from the type of target (i.e. `U`) by adding the cv-qualification of `T` to it.   In this case, the reference binds to the result object, or to its appropriate base class subobject. | (since C++17) |

Otherwise, if all following conditions are satisfied:

- `U` is a class type.
- `T` is not reference-related to `U`.
- target can be converted to a value v of type `V` such that `T` is reference-compatible with `V`, where v is of any following category:

|  |  |
| --- | --- |
| - rvalue | (until C++11) |
| - xvalue - class prvalue - function lvalue | (since C++11) (until C++17) |
| - rvalue - function lvalue | (since C++17) |

Then the reference binds to the result of the conversion, or to its appropriate base class subobject:

```
struct A {};
struct B : A {};
struct X { operator B(); } x;
 
const A& r = x; // bound to the A subobject of the result of the conversion
B&& rrb = x;    // bound directly to the result of the conversion

```

|  |  |
| --- | --- |
| If the result of the conversion is a prvalue, temporary materialization is applied to it, considering the type of the prvalue to be the adjusted type `P`.   - `P` is adjusted from the type of the conversion result by adding the cv-qualification of `T` to it.   In this case, the reference binds to the result object, or to its appropriate base class subobject. | (since C++17) |

#### Indirect binding

If direct binding is not available, indirect binding is considered. In this case, `T` cannot be reference-related to `U`.

If `T` or `U` is a class type, user-defined conversions are considered using the rules for copy-initialization of an object of type `T` by user-defined conversion. The program is ill-formed if the corresponding non-reference copy-initialization would be ill-formed. The result of the call to the conversion function, as described for the non-reference copy-initialization, is then used to direct-initialize the reference. For this direct-initialization, user-defined conversions are not considered.

|  |  |
| --- | --- |
| Otherwise, a temporary of type `T` is created and copy-initialized from target. The reference is then bound to the temporary. | (until C++17) |
| Otherwise, target is implicitly converted to a prvalue of type “cv-unqualified `T`”. The temporary materialization conversion is applied, considering the type of the prvalue to be `T`, and the reference is bound to the result object. | (since C++17) |

```
const std::string& rs = "abc"; // rs refers to temporary copy-initialized from char array
const double& rcd2 = 2;        // rcd2 refers to temporary with value 2.0
int i3 = 2;
double&& rrd3 = i3;            // rrd3 refers to temporary with value 2.0

```

### Lifetime of a temporary

Whenever a reference is bound to a temporary object or to a subobject thereof, the lifetime of the temporary object is extended to match the lifetime of the reference (check temporary object lifetime exceptions), where the temporary object or its subobject is denoted by one of following expression:

|  |  |
| --- | --- |
| - a prvalue expression of an object type, | (until C++17) |
| - a temporary materialization conversion, | (since C++17) |

- a parenthesized expression (e), where e is one of these expressions,
- a built-in subscript expression of form a[n] or n[a], where a is an array and is one of these expressions,
- a class member access expression of form e.m, where e is one of these expressions and m designates a non-static data member of object type,
- a pointer-to-member operation of form e.\*mp, where e is one of these expressions and mp is a pointer to data member,
- a `const_cast`, `static_cast`, `dynamic_cast`, or `reinterpret_cast` conversion without a user-defined conversion that converts one of these expressions to the glvalue refers to the object designated by the operand, or to its complete object or a subobject thereof (an explicit cast expression is interpreted as a sequence of these casts),
- a conditional expression of form cond ? e1 : e2 that is a glvalue, where e1 or e2 is one of these expressions, or
- a built-in comma expression of form x, e that is a glvalue, where e is one of these expressions.

There are following exceptions to this lifetime rule:

|  |  |
| --- | --- |
| - a temporary bound to a return value of a function in a return statement is not extended: it is destroyed immediately at the end of the return expression. Such return statement always returns a dangling reference. | (until C++26) |

- a temporary bound to a reference parameter in a function call exists until the end of the full expression containing that function call: if the function returns a reference, which outlives the full expression, it becomes a dangling reference.

|  |  |
| --- | --- |
| - a temporary bound to a reference in the initializer used in a new-expression exists until the end of the full expression containing that new-expression, not as long as the initialized object. If the initialized object outlives the full expression, its reference member becomes a dangling reference. | (since C++11) |

|  |  |
| --- | --- |
| - a temporary bound to a reference in a reference element of an aggregate initialized using direct-initialization syntax ****(****parentheses****)**** exists until the end of the full expression containing the initializer, as opposed to list-initialization syntax ****{****braces****}****.  ```text struct A {     int&& r; };   A a1{7}; // OK, lifetime is extended A a2(7); // well-formed, but dangling reference ``` | (since C++20) |

In general, the lifetime of a temporary cannot be further extended by "passing it on": a second reference, initialized from the reference variable or data member to which the temporary was bound, does not affect its lifetime.

### Notes

References appear without initializers only in function parameter declaration, in function return type declaration, in the declaration of a class member, and with the `extern` specifier.

Until the resolution of CWG issue 1696, a temporary is permitted to bound to a reference member in a constructor initializer list, and it persists only until the constructor exits, not as long as the object exists. Such initialization is ill-formed since CWG 1696, although many compilers still support it (a notable exception is clang).

### Example

Run this code

```
#include <sstream>
#include <utility>
 
struct S
{
    int mi;
    const std::pair<int, int>& mp; // reference member
};
 
void foo(int) {}
 
struct A {};
 
struct B : A
{
    int n;
    operator int&() { return n; }
};
 
B bar() { return B(); }
 
//int& bad_r;      // error: no initializer
extern int& ext_r; // OK
 
int main()
{
//  Lvalues
    int n = 1;
    int& r1 = n;                    // lvalue reference to the object n
    const int& cr(n);               // reference can be more cv-qualified
    volatile int& cv{n};            // any initializer syntax can be used
    int& r2 = r1;                   // another lvalue reference to the object n
//  int& bad = cr;                  // error: less cv-qualified
    int& r3 = const_cast<int&>(cr); // const_cast is needed
 
    void (&rf)(int) = foo; // lvalue reference to function
    int ar[3];
    int (&ra)[3] = ar;     // lvalue reference to array
 
    B b;
    A& base_ref = b;        // reference to base subobject
    int& converted_ref = b; // reference to the result of a conversion
 
//  Rvalues
//  int& bad = 1;        // error: cannot bind lvalue ref to rvalue
    const int& cref = 1; // bound to rvalue
    int&& rref = 1;      // bound to rvalue
 
    const A& cref2 = bar(); // reference to A subobject of B temporary
    A&& rref2 = bar();      // same
 
    int&& xref = static_cast<int&&>(n); // bind directly to n
//  int&& copy_ref = n;                 // error: can't bind to an lvalue
    double&& copy_ref = n;              // bind to an rvalue temporary with value 1.0
 
//  Restrictions on temporary lifetimes
//  std::ostream& buf_ref = std::ostringstream() << 'a';
                     // the ostringstream temporary was bound to the left operand
                     // of operator<< but its lifetime ended at the semicolon so
                     // the buf_ref is a dangling reference
 
    S a {1, {2, 3}}; // temporary pair {2, 3} bound to the reference member
                     // a.mp and its lifetime is extended to match 
                     // the lifetime of object a
 
    S* p = new S{1, {2, 3}}; // temporary pair {2, 3} bound to the reference
                             // member p->mp, but its lifetime ended at the semicolon
                             // p->mp is a dangling reference
    delete p;
 
    // Imitate [[maybe_unused]] applied to the following variables:
    [](...){}
    (
        cv, r2, r3, rf, ra, base_ref, converted_ref,
        a, cref, rref, cref2, rref2, copy_ref, xref
    );
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 391 | C++98 | initialize a reference to const-qualified type with a class type rvalue might create a temporary, and a constructor of that class was required in order to copy the rvalue into that temporary | no temporary is created, constructor is not required |
| CWG 450 | C++98 | a reference to const-qualified array could not be initialized with a reference-compatible array rvalue | allowed |
| CWG 589 | C++98 | a reference could not bind directly to an array or class rvalue | allowed |
| CWG 656 | C++98 | a reference to const-qualified type initialized with a type which is not reference-compatible but has a conversion function to a reference- compatible type was bound to a temporary copied from the return value (or its base class subobject) of the conversion function | bound to the return value (or its base class subobject) directly |
| CWG 1287 | C++11 | the conversion from target of class type to another reference-compatible type could only be implicit | allow explicit conversions |
| CWG 1295 | C++11 | a reference could bind to a bit-field xvalue | prohibited |
| CWG 1299 | C++98 | the definition of temporary was unclear | made clear |
| CWG 1571 | C++98 | user-defined conversions in indirect binding did not consider the type of target | considered |
| CWG 1604 | C++98 | user-defined conversions were not considered in indirect binding | considered |
| CWG 2352 | C++98 | reference compatibility did not consider qualification conversions | considered |
| CWG 2481 | C++17 | cv-qualification was not added to the result type of temporary materialization in indirect binding | added |
| CWG 2657 | C++17 | cv-qualification was not added to the result type of temporary materialization in direct binding | added |
| CWG 2801 | C++98 | reference-related types were allowed for indirect binding | prohibited |

### See also

- constructor
- converting constructor
- copy assignment
- copy constructor
- `explicit`
- initialization
  - constant initialization
  - copy initialization
  - direct initialization
  - list initialization
- move assignment
- move constructor
- `new`
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/reference_initialization&oldid=171898>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 May 2024, at 18:25.