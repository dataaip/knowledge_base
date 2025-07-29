# `if` statement

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****if**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | switch | | | | | |
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

 Statements

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Labels | | | | |
| label : statement | | | | |
| Expression statements | | | | |
| expression ; | | | | |
| Compound statements | | | | |
| `{` statement... `}` | | | | |
| Selection statements | | | | |
| ****if**** | | | | |
| switch | | | | |
| Iteration statements | | | | |
| while | | | | |
| do while | | | | |
| for | | | | |
| range for (C++11) | | | | |
| Jump statements | | | | |
| break | | | | |
| continue | | | | |
| return | | | | |
| goto | | | | |
| Declaration statements | | | | |
| declaration ; | | | | |
| Try blocks | | | | |
| try block | | | | |
| Transactional memory | | | | |
| `synchronized`, `atomic_commit`, etc (TM TS) | | | | |

Conditionally executes another statement.

Used where code needs to be executed based on a condition, or whether the if statement is evaluated in a manifestly constant-evaluated context(since C++23).

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr ﻿(optional) `if` `constexpr`(optional) `(` init-statement ﻿(optional) condition `)` statement-true | (1) |  |
|  | | | | | | | | | |
| attr ﻿(optional) `if` `constexpr`(optional) `(` init-statement ﻿(optional) condition `)` statement-true `else` statement-false | (2) |  |
|  | | | | | | | | | |
| attr ﻿(optional) `if` `!`(optional) `consteval` compound-statement | (3) | (since C++23) |
|  | | | | | | | | | |
| attr ﻿(optional) `if` `!`(optional) `consteval` compound-statement `else` statement | (4) | (since C++23) |
|  | | | | | | | | | |

1) if statement without an else branch2) if statement with an else branch3) consteval if statement without an else branch4) consteval if statement with an else branch

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) any number of attributes |
| `constexpr` | - | (since C++17) if present, the statement becomes a constexpr if statement |
| init-statement | - | (since C++17) either  - an expression statement (which may be a null statement ;) - a simple declaration, typically a declaration of a variable with initializer, but it may declare arbitrary many variables or be a structured binding declaration  |  |  | | --- | --- | | - an alias declaration | (since C++23) |   Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon. |
| condition | - | a condition |
| statement-true | - | the statement to be executed if condition yields true |
| statement-false | - | the statement to be executed if condition yields false |
| compound-statement | - | the compound statement to be executed if the if statement is evaluated in a manifestly constant-evaluated context (or is not evaluated in such a context if `!` is preceding consteval) |
| statement | - | the statement (must be a compound statement, see below) to be executed if the if statement is not evaluated in a manifestly constant-evaluated context (or is evaluated in such a context if `!` is preceding consteval) |

### Condition

A condition can either be an expression or a simple declaration.

|  |  |
| --- | --- |
| - If it can be syntactically resolved as a structured binding declaration, it is interpreted as a structured binding declaration. | (since C++26) |

- If it can be syntactically resolved as an expression, it is treated as an expression. Otherwise, it is treated as a declaration that is not a structured binding declaration(since C++26).

When control reaches condition, the condition will yield a value, which is used to determine which branch the control will go to.

#### Expression

If condition is an expression, the value it yields is the the value of the expression contextually converted to bool. If that conversion is ill-formed, the program is ill-formed.

#### Declaration

If condition is a simple declaration, the value it yields is the value of the decision variable (see below) contextually converted to bool. If that conversion is ill-formed, the program is ill-formed.

##### Non-structured binding declaration

The declaration has the following restrictions:

- Syntactically conforms to the following form:

|  |  |
| --- | --- |
| - type-specifier-seq declarator `=` assignment-expression | (until C++11) |
| - attribute-specifier-seq(optional) decl-specifier-seq declarator brace-or-equal-initializer | (since C++11) |

- The declarator cannot specify a function or an array.
- The type specifier sequence(until C++11)declaration specifier sequence can only contain type specifiers and constexpr, and it(since C++11) cannot define a class or enumeration.

The decision variable of the declaration is the declared variable.

|  |  |
| --- | --- |
| Structured binding declaration The declaration has the following restrictions:   - The expression in its initializer cannot be of an array type. - The declaration specifier sequence can only contain type specifiers and constexpr.   The decision variable of the declaration is the invented variable e introduced by the declaration. | (since C++26) |

### Branch selection

If the condition yields true, statement-true is executed.

If the else part of the if statement is present and condition yields false, statement-false is executed.

If the else part of the if statement is present and statement-true is also an if statement, then that inner if statement must contain an else part as well (in other words, in nested if statements, the else is associated with the closest if that does not yet have an associated else).

Run this code

```
#include <iostream>
 
int main()
{
    // simple if-statement with an else clause
    int i = 2;
    if (i > 2)
        std::cout << i << " is greater than 2\n";
    else
        std::cout << i << " is not greater than 2\n";
 
    // nested if-statement
    int j = 1;
    if (i > 1)
        if (j > 2)
            std::cout << i << " > 1 and " << j << " > 2\n";
        else // this else is part of if (j > 2), not of if (i > 1)
            std::cout << i << " > 1 and " << j << " <= 2\n";
 
    // declarations can be used as conditions with dynamic_cast
    struct Base
    {
        virtual ~Base() {}
    };
 
    struct Derived : Base
    {
        void df() { std::cout << "df()\n"; }
    };
 
    Base* bp1 = new Base;
    Base* bp2 = new Derived;
 
    if (Derived* p = dynamic_cast<Derived*>(bp1)) // cast fails, returns nullptr
        p->df(); // not executed
 
    if (auto p = dynamic_cast<Derived*>(bp2)) // cast succeeds
        p->df(); // executed
}

```

Output:

```
2 is not greater than 2
2 > 1 and 1 <= 2
df()

```

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| if statements with initializer If init-statement is used, the if statement is equivalent to   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{`  init-statement  attr ﻿(optional) `if` `constexpr`(optional) `(` condition `)`  statement-true  `}` |  |  | |  | | | | | | | | | |   or   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{`  init-statement  attr ﻿(optional) `if` `constexpr`(optional) `(` condition `)`  statement-true  `else` statement-false  `}` |  |  | |  | | | | | | | | | |   Except that names declared by the init-statement (if init-statement is a declaration) and names declared by condition (if condition is a declaration) are in the same scope, which is also the scope of both statement ﻿s.   ```text std::map<int, std::string> m; std::mutex mx; extern bool shared_flag; // guarded by mx   int demo() {     if (auto it = m.find(10); it != m.end())         return it->second.size();       if (char buf[10]; std::fgets(buf, 10, stdin))         m[0] += buf;       if (std::lock_guard lock(mx); shared_flag)     {         unsafe_ping();         shared_flag = false;     }       if (int s; int count = ReadBytesWithSignal(&s))     {         publish(count);         raise(s);     }       if (const auto keywords = {"if", "for", "while"};         std::ranges::any_of(keywords, &tok { return tok == kw; }))     {         std::cerr << "Token must not be a keyword\n";     } } ``` | (since C++17) |

|  |  |  |  |
| --- | --- | --- | --- |
| Constexpr if The statement that begins with if constexpr is known as the **constexpr if statement**. All substatements of a constexpr if statement are control-flow-limited statements.  In a constexpr if statement, condition must be a contextually converted constant expression of type bool(until C++23)an expression contextually converted to bool, where the conversion is a constant expression(since C++23).  If condition yields true, then statement-false is discarded (if present), otherwise, statement-true is discarded.  The return statements in a discarded statement do not participate in function return type deduction:   ```text template<typename T> auto get_value(T t) {     if constexpr (std::is_pointer_v<T>)         return *t; // deduces return type to int for T = int*     else         return t;  // deduces return type to int for T = int } ```   The discarded statement can ODR-use a variable that is not defined:   ```text extern int x; // no definition of x required   int f() {     if constexpr (true)         return 0;     else if (x)         return x;     else         return -x; } ```   Outside a template, a discarded statement is fully checked. if constexpr is not a substitute for the #if preprocessing directive:   ```text void f() {     if constexpr(false)     {         int i = 0;         int *p = i; // Error even though in discarded statement     } } ```   If a constexpr if statement appears inside a templated entity, and if condition is not value-dependent after instantiation, the discarded statement is not instantiated when the enclosing template is instantiated.   ```text template<typename T, typename ... Rest> void g(T&& p, Rest&& ...rs) {     // ... handle p     if constexpr (sizeof...(rs) > 0)         g(rs...); // never instantiated with an empty argument list } ```   The condition remains value-dependent after instantiation is a nested template:   ```text template<class T> void g() {     auto lm = =     {         if constexpr (sizeof(T) == 1 && sizeof p == 1)         {             // this condition remains value-dependent after instantiation of g<T>,             // which affects implicit lambda captures             // this compound statement may be discarded only after             // instantiation of the lambda body         }     }; } ```   The discarded statement cannot be ill-formed for every possible specialization:   ```text template<typename T> void f() {     if constexpr (std::is_arithmetic_v<T>)         // ...     else {         using invalid_array = int[-1]; // ill-formed: invalid for every T         static_assert(false, "Must be arithmetic"); // ill-formed before CWG2518     } } ```   The common workaround before the implementation of CWG issue 2518 for such a catch-all statement is a type-dependent expression that is always false:   ```text template<typename> constexpr bool dependent_false_v = false;   template<typename T> void f() {     if constexpr (std::is_arithmetic_v<T>)         // ...     else {         // workaround before CWG2518         static_assert(dependent_false_v<T>, "Must be arithmetic");     } } ```   A typedef declaration or alias declaration(since C++23) can be used as the init-statement of a constexpr if statement to reduce the scope of the type alias.   |  |  | | --- | --- | |  | This section is incomplete Reason: no example | | (since C++17) |

|  |  |
| --- | --- |
| Consteval if The statement that begins with if consteval is known as the **consteval if statement**. All substatements of a consteval if statement are control-flow-limited statements.  statement must be a compound statement, and it will still be treated as a part of the consteval if statement even if it is not a compound statement (and thus results in a compilation error): Run this code  ```text constexpr void f(bool b) {     if (true)         if consteval {}         else ; // error: not a compound-statement                // else not associated with outer if } ```   If a consteval if statement is evaluated in a manifestly constant-evaluated context, compound-statement is executed. Otherwise, statement is executed if it is present.  If the statement begins with if !consteval, the compound-statement and statement (if any) must both be compound statements. Such statements are not considered consteval if statements, but are equivalent to consteval if statements:   - if !consteval {/\* stmt \*/ } is equivalent to   if consteval {} else {/\* stmt \*/}.   - if !consteval {/\* stmt-1 \*/} else {/\* stmt-2 \*/} is equivalent to   if consteval {/\* stmt-2 \*/} else {/\* stmt-1 \*/}.  compound-statement in a consteval if statement (or statement in the negative form) is in an immediate function context, in which a call to an immediate function needs not to be a constant expression. Run this code  ```text #include <cmath> #include <cstdint> #include <cstring> #include <iostream>   constexpr bool is_constant_evaluated() noexcept {     if consteval { return true; } else { return false; } }   constexpr bool is_runtime_evaluated() noexcept {     if not consteval { return true; } else { return false; } }   consteval std::uint64_t ipow_ct(std::uint64_t base, std::uint8_t exp) {     if (!base) return base;     std::uint64_t res{1};     while (exp)     {         if (exp & 1) res *= base;         exp /= 2;         base *= base;     }     return res; }   constexpr std::uint64_t ipow(std::uint64_t base, std::uint8_t exp) {     if consteval // use a compile-time friendly algorithm     {         return ipow_ct(base, exp);     }     else // use runtime evaluation     {         return std::pow(base, exp);     } }   int main(int, const char* argv[]) {     static_assert(ipow(0, 10) == 0 && ipow(2, 10) == 1024);     std::cout << ipow(std::strlen(argv[0]), 3) << '\n'; } ``` | (since C++23) |

### Notes

If statement-true or statement-false is not a compound statement, it is treated as if it were:

```
if (x)
    int i;
// i is no longer in scope

```

is the same as

```
if (x)
{
    int i;
}
// i is no longer in scope

```

The scope of the name introduced by condition, if it is a declaration, is the combined scope of both statements' bodies:

```
if (int x = f())
{
    int x; // error: redeclaration of x
}
else
{
    int x; // error: redeclaration of x
}

```

If statement-true is entered by `goto` or longjmp, condition is not evaluated and statement-false is not executed.

|  |  |
| --- | --- |
| Built-in conversions are not allowed in the condition of a constexpr if statement, except for non-narrowing integral conversions to bool. | (since C++17) (until C++23) |

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_if_constexpr` | `201606L` | (C++17) | constexpr `if` |
| `__cpp_if_consteval` | `202106L` | (C++23) | consteval `if` |

### Keywords

if,
else,
constexpr,
consteval

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 631 | C++98 | the control flow was unspecified if the first substatement is reached via a label | the condition is not evaluated and the second substatement is not executed (same as in C) |

### See also

|  |  |
| --- | --- |
| is_constant_evaluated(C++20) | detects whether the call occurs within a constant-evaluated context   (function) |
| C documentation for if statement | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/if&oldid=177112>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 October 2024, at 08:37.