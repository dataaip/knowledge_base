# Order of evaluation

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | ****Order of evaluation**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operators | | | | | | Operator precedence | | | | | |
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | ****Order of evaluation**** | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Order of evaluation of any part of any expression, including order of evaluation of function arguments is **unspecified** (with some exceptions listed below). The compiler can evaluate operands and other subexpressions in any order, and may choose another order when the same expression is evaluated again.

There is no concept of left-to-right or right-to-left evaluation in C++. This is not to be confused with left-to-right and right-to-left associativity of operators: the expression a() + b() + c() is parsed as (a() + b()) + c() due to left-to-right associativity of operator+, but c() may be evaluated first, last, or between a() or b() at run time:

Run this code

```
#include <cstdio>
 
int a() { return std::puts("a"); }
int b() { return std::puts("b"); }
int c() { return std::puts("c"); }
 
void z(int, int, int) {}
 
int main()
{
    z(a(), b(), c());       // all 6 permutations of output are allowed
    return a() + b() + c(); // all 6 permutations of output are allowed
}

```

Possible output:

```
b
c
a
c
a 
b

```

### "Sequenced before" rules (since C++11)

#### Evaluation of Expressions

Evaluation of each expression includes:

- **Value computations**: calculation of the value that is returned by the expression. This may involve determination of the identity of the object (glvalue evaluation, e.g. if the expression returns a reference to some object) or reading the value previously assigned to an object (prvalue evaluation, e.g. if the expression returns a number, or some other value).
- Initiation of **side effects**: access (read or write) to an object designated by a volatile glvalue, modification (writing) to an object, calling a library I/O function, or calling a function that does any of those operations.

#### Ordering

**Sequenced before** is an asymmetric, transitive, pair-wise relationship between evaluations within the same thread.

- If A is sequenced before B (or, equivalently, B is **sequenced after** A), then evaluation of A will be complete before evaluation of B begins.
- If A is not sequenced before B and B is sequenced before A, then evaluation of B will be complete before evaluation of A begins.
- If A is not sequenced before B and B is not sequenced before A, then two possibilities exist:
  - Evaluations of A and B are **unsequenced**: they may be performed in any order and may overlap (within a single thread of execution, the compiler may interleave the CPU instructions that comprise A and B).
  - Evaluations of A and B are **indeterminately sequenced**: they may be performed in any order but may not overlap: either A will be complete before B, or B will be complete before A. The order may be the opposite the next time the same expression is evaluated.

#### Rules

1) Each value computation and side effect of a full-expression is sequenced before each value computation and side effect of the next full-expression.2) The value computations (but not the side effects) of the operands to any operator are sequenced before the value computation of the result of the operator (but not its side effects).3) When calling a function (whether or not the function is inline, and whether or not explicit function call syntax is used), every value computation and side effect associated with any argument expression, or with the postfix expression designating the called function, is sequenced before execution of every expression or statement in the body of the called function.4) The value computation of the built-in post-increment and post-decrement operators is sequenced before its side effect.5) The side effect of the built-in pre-increment and pre-decrement operators is sequenced before its value computation (implicit rule due to definition as compound assignment).6) Every value computation and side effect of the first (left) argument of the built-in logical AND operator &&, the built-in logical OR operator || and the built-in comma operator , is sequenced before every value computation and side effect of the second (right) argument.7) Every value computation and side effect associated with the first expression in the conditional operator ?: is sequenced before every value computation and side effect associated with the second or third expression.8) The side effect (modification of the left argument) of the built-in assignment operator and of all built-in compound assignment operators is sequenced after the value computation (but not the side effects) of both left and right arguments, and is sequenced before the value computation of the assignment expression (that is, before returning the reference to the modified object).9) In list-initialization, every value computation and side effect of a given initializer clause is sequenced before every value computation and side effect associated with any initializer clause that follows it in the brace-enclosed comma-separated list of initializers.10) A function call that is not sequenced before or sequenced after another expression evaluation outside of the function (possibly another function call) is indeterminately sequenced with respect to that evaluation (the program must behave as if the CPU instructions that constitute a function call were not interleaved with instructions constituting evaluations of other expressions, including other function calls, even if the function was inlined).

|  |  |
| --- | --- |
| The rule 10 has one exception: function calls made by a standard library algorithm executing under std::execution::par_unseq execution policy are unsequenced and may be arbitrarily interleaved with each other. | (since C++17) |

11) The call to the allocation function (operator new) is indeterminately sequenced with respect to(until C++17)sequenced before(since C++17) the evaluation of the constructor arguments in a new expression.12) When returning from a function, copy-initialization of the temporary that is the result of evaluating the function call is sequenced before the destruction of all temporaries at the end of the operand of the return statement, which, in turn, is sequenced before the destruction of local variables of the block enclosing the return statement.

|  |  |
| --- | --- |
| 13) In a function-call expression, the expression that names the function is sequenced before every argument expression and every default argument.14) In a function call, value computations and side effects of the initialization of every parameter are indeterminately sequenced with respect to value computations and side effects of any other parameter.15) Every overloaded operator obeys the sequencing rules of the built-in operator it overloads when called using operator notation.16) In a subscript expression E1[E2], every value computation and side effect of E1 is sequenced before every value computation and side effect of E2.17) In a pointer-to-member expression E1.\*E2 or E1->\*E2, every value computation and side effect of E1 is sequenced before every value computation and side effect of E2 (unless the dynamic type of E1 does not contain the member to which E2 refers).18) In a shift operator expression E1 << E2 and E1 >> E2, every value computation and side effect of E1 is sequenced before every value computation and side effect of E2.19) In every simple assignment expression E1 = E2 and every compound assignment expression E1 @= E2, every value computation and side effect of E2 is sequenced before every value computation and side effect of E1.20) Every expression in a comma-separated list of expressions in a parenthesized initializer is evaluated as if for a function call (indeterminately-sequenced). | (since C++17) |

#### Undefined behavior

The behavior is undefined in the following cases:

1) A side effect on a memory location is unsequenced relative to another side effect on the same memory location:

```
i = ++i + 2;       // well-defined
i = i++ + 2;       // undefined behavior until C++17
f(i = -2, i = -2); // undefined behavior until C++17
f(++i, ++i);       // undefined behavior until C++17, unspecified after C++17
i = ++i + i++;     // undefined behavior

```

2) A side effect on a memory location is unsequenced relative to a value computation using the value of any object in the same memory location:

```
cout << i << i++; // undefined behavior until C++17
a[i] = i++;       // undefined behavior until C++17
n = ++i + i;      // undefined behavior

```

3) Starting or ending the lifetime of an object in a memory location is unsequenced relative to any of the following operations:

- a side effect on the same memory location
- a value computation using the value of any object in the same memory location
- starting or ending the lifetime of an object occupying storage that overlaps with the memory location

```
union U { int x, y; } u;
(u.x = 1, 0) + (u.y = 2, 0); // undefined behavior

```

### Sequence point rules (until C++11)

#### Pre-C++11 Definitions

Evaluation of an expression might produce side effects, which are: accessing an object designated by a volatile lvalue, modifying an object, calling a library I/O function, or calling a function that does any of those operations.

A **sequence point** is a point in the execution sequence where all side effects from the previous evaluations in the sequence are complete, and no side effects of the subsequent evaluations started.

#### Pre-C++11 Rules

1) There is a sequence point at the end of each full-expression (typically, at the semicolon).2) When calling a function (whether or not the function is inline and whether or not function call syntax was used), there is a sequence point after the evaluation of all function arguments (if any) which takes place before execution of any expressions or statements in the function body.3) When returning from a function, there is a sequence point after the copy-initialization of the result of the function call, and before the destruction of all temporary objects at the end of expression in the return statement (if any).4) There is a sequence point after the copying of a returned value of a function and before the execution of any expressions outside the function.5) Once the execution of a function begins, no expressions from the calling function are evaluated until execution of the called function has completed (functions cannot be interleaved).6) In the evaluation of each of the following four expressions, using the built-in (non-overloaded) operators, there is a sequence point after the evaluation of the expression a.

```
a && b
a || b
a ? b : c
a , b

```

#### Pre-C++11 Undefined behavior

The behavior is undefined in the following cases:

1) Between the previous and next sequence point, the value of any object in a memory location is modified more than once by the evaluation of an expression:

```
i = ++i + i++;     // undefined behavior
i = i++ + 1;       // undefined behavior
i = ++i + 1;       // undefined behavior
++ ++i;            // undefined behavior
f(++i, ++i);       // undefined behavior
f(i = -1, i = -1); // undefined behavior

```

2) Between the previous and next sequence point, for an object whose value is modified by the evaluation of an expression, its prior value is accessed in a way other than to determine the value to be stored:

```
cout << i << i++; // undefined behavior
a[i] = i++;       // undefined behavior

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1885 | C++11 | sequencing of the destruction of automatic variables on function return was not explicit | sequencing rules added |
| CWG 1949 | C++11 | “sequenced after” was used but not defined in the C++ standard | defined as the inverse of “sequenced before” |
| CWG 1953 | C++11 | side effects and value computations involving a memory location could be unsequenced relative to starting or ending the lifetime of an object in the same memory location | the behavior is undefined in this case |
| CWG 2146 | C++98 | the cases involving undefined behaviors did not consider bit-fields | considered |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 6.9.1 Program execution [intro.execution]

:   - 7.6.1.6 Increment and decrement [expr.post.incr]

:   - 7.6.2.8 New [expr.new]

:   - 7.6.14 Logical AND operator [expr.log.and]

:   - 7.6.15 Logical OR operator [expr.log.or]

:   - 7.6.16 Conditional operator [expr.cond]

:   - 7.6.19 Assignment and compound assignment operators [expr.ass]

:   - 7.6.20 Comma operator [expr.comma]

:   - 9.4.5 List-initialization [dcl.init.list]

- C++20 standard (ISO/IEC 14882:2020):

:   - 6.9.1 Program execution [intro.execution]

:   - 7.6.1.5 Increment and decrement [expr.post.incr]

:   - 7.6.2.7 New [expr.new]

:   - 7.6.14 Logical AND operator [expr.log.and]

:   - 7.6.15 Logical OR operator [expr.log.or]

:   - 7.6.16 Conditional operator [expr.cond]

:   - 7.6.19 Assignment and compound assignment operators [expr.ass]

:   - 7.6.20 Comma operator [expr.comma]

:   - 9.4.4 List-initialization [dcl.init.list]

- C++17 standard (ISO/IEC 14882:2017):

:   - 4.6 Program execution [intro.execution]

:   - 8.2.6 Increment and decrement [expr.post.incr]

:   - 8.3.4 New [expr.new]

:   - 8.14 Logical AND operator [expr.log.and]

:   - 8.15 Logical OR operator [expr.log.or]

:   - 8.16 Conditional operator [expr.cond]

:   - 8.18 Assignment and compound assignment operators [expr.ass]

:   - 8.19 Comma operator [expr.comma]

:   - 11.6.4 List-initialization [dcl.init.list]

- C++14 standard (ISO/IEC 14882:2014):

:   - 1.9 Program execution [intro.execution]

:   - 5.2.6 Increment and decrement [expr.post.incr]

:   - 5.3.4 New [expr.new]

:   - 5.14 Logical AND operator [expr.log.and]

:   - 5.15 Logical OR operator [expr.log.or]

:   - 5.16 Conditional operator [expr.cond]

:   - 5.17 Assignment and compound assignment operators [expr.ass]

:   - 5.18 Comma operator [expr.comma]

:   - 8.5.4 List-initialization [dcl.init.list]

- C++11 standard (ISO/IEC 14882:2011):

:   - 1.9 Program execution [intro.execution]

:   - 5.2.6 Increment and decrement [expr.post.incr]

:   - 5.3.4 New [expr.new]

:   - 5.14 Logical AND operator [expr.log.and]

:   - 5.15 Logical OR operator [expr.log.or]

:   - 5.16 Conditional operator [expr.cond]

:   - 5.17 Assignment and compound assignment operators [expr.ass]

:   - 5.18 Comma operator [expr.comma]

:   - 8.5.4 List-initialization [dcl.init.list]

### See also

- Operator precedence which defines how expressions are built from their source code representation.

|  |  |
| --- | --- |
| C documentation for Order of evaluation | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/eval_order&oldid=179723>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 January 2025, at 19:25.