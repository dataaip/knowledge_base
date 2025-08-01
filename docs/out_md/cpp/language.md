# C++ language

From cppreference.com
< cpp
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Freestanding and hosted | | | | |
| ****Language**** | | | | |
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

****C++ language****

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

This is a reference of the core C++ language constructs.

|  |  |  |
| --- | --- | --- |
| ****Basic concepts****  Comments  ASCII chart  Punctuation  Names and identifiers  Types – Fundamental types  Object – Scope – Lifetime  Definitions and ODR  Name lookup      qualified – unqualified (ADL)  As-if rule  Undefined behavior (UB)  Memory – Multithread (C++11)  Character sets and encodings  Phases of translation  The `main` function  Modules (C++20)  ****Keywords****  ****Preprocessor****  `#if` - `#ifdef` - `#ifndef` - `#elif`  `#elifdef` - `#elifndef` (C++23)  `#define` - `#` - `##`  `#include` - `#pragma`  `#line` - `#error`  `#warning` (C++23)  ****Expressions****  Value categories  Evaluation order  Constant expressions  Operators      assignment – arithmetic      increment and decrement      logical – comparison      member access      call, comma, ternary      `sizeof` – `alignof` (C++11)      `new` – `delete` – `typeid`      alternative representation  Default comparisons (C++20)  Operator precedence  Conversions      implicit – explicit      user-defined      Usual arithmetic conversions      `static_cast` – `dynamic_cast`      `const_cast`      `reinterpret_cast`  Literals (Escape sequences)      boolean – integer – floating      character – string      `nullptr` (C++11)      user-defined (UDL) (C++11) | ****Declarations****  Conflicting declarations  Storage duration and linkage  Translation-unit-local (C++20)  Language linkage  Namespace declaration  Namespace alias  References – Pointers – Arrays  Structured bindings (C++17)  Enumerations and enumerators  `inline` specifier  Inline assembly  `const`/`volatile`  `constexpr` (C++11)  `consteval` (C++20)  `constinit` (C++20)  `decltype` (C++11)  `auto` (C++11)  `typedef` – Type alias (C++11)  Elaborated type specifiers  Attributes (C++11)  `alignas` (C++11)  `static_assert` (C++11)  ****Initialization****  Default-initialization  Value-initialization  Copy-initialization  Direct-initialization  Aggregate initialization  List-initialization (C++11)  Reference initialization  Static non-local initialization      zero – constant  Dynamic non-local initialization      ordered – unordered  Copy elision (RVO)  ****Functions****  Function declaration  Default arguments  Variadic arguments  Lambda expression (C++11)  Overload resolution  Operator overloading  Address of an overload set  Coroutines (C++20)  ****Statements****  `if` – `switch`  `for` – range-`for` (C++11)  `while` – `do`-`while`  `continue` – `break`  `goto` – `return`  `synchronized`/`atomic` (TM TS) | ****Classes****  Class types – Union types  injected-class-name  Data members – Bit-fields  Member functions – The `this` pointer  Static members – Nested classes  Derived class – `using`-declaration  Empty base optimization (EBO)  Virtual function – Abstract class (ABC)  `override` (C++11) – `final` (C++11)  Member access – `friend`  Constructors and member initializer lists  Default constructor – Destructor  Copy constructor – Copy assignment  Move constructor (C++11)  Move assignment (C++11)  Converting constructor  `explicit` specifier  ****Templates****  Template parameters and arguments  Class template – Function template  Variable template (C++14)  Class member template  ****Template argument deduction****      function – class (CTAD) (C++17)  Explicit specialization – Partial specialization  Parameter packs (C++11)  `sizeof...` (C++11)  Fold expressions (C++17)  Pack indexing (C++26)  Dependent names – SFINAE  Constraints and concepts (C++20)  Requires expression (C++20)  ****Exceptions****  `try` block  Throwing exceptions  Handling exceptions  ****Exception specification****      `noexcept` specification (C++11)      Dynamic specification (until C++17\*)  `noexcept` operator (C++11)  ****Miscellaneous****  History of C++  Extending the namespace std  Acronyms: AFO, CPO, IFNDR, NDR,  NTBS, NTTP, RAO, SOCCC, TMP, TU  ****Idioms****  Curiously Recurring Template Pattern (CRTP)  Pointer to implementation (PIMPL)  Resource acquisition is initialization (RAII)  Rule of three/five/zero  Zero-overhead principle |

### See also

|  |  |
| --- | --- |
| C documentation for C language constructs | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language&oldid=178480>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 December 2024, at 19:28.