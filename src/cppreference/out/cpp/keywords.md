# C++ keywords

From cppreference.com
< cpp
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Preprocessor | | | | | | Comments | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Keywords**** | | | | | | Escape sequences | | | | | |
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

****Keywords****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | alignas(C++11) | | | | | | alignof(C++11) | | | | | | and | | | | | | and_eq | | | | | | asm | | | | | | auto(\*) | | | | | | bitand | | | | | | bitor | | | | | | bool | | | | | | break | | | | | | case | | | | | | catch | | | | | | char | | | | | | char8_t(C++20) | | | | | | char16_t(C++11) | | | | | | char32_t(C++11) | | | | | | class | | | | | | compl | | | | | | concept(C++20) | | | | | | const | | | | | | consteval(C++20) | | | | | | constexpr(C++11) | | | | | | constinit(C++20) | | | | | | const_cast | | | | | | continue | | | | | | co_await(C++20) | | | | | | co_return(C++20) | | | | | | co_yield(C++20) | | | | | | decltype(C++11) | | | | | | default | | | | | | delete | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | do | | | | | | double | | | | | | dynamic_cast | | | | | | else | | | | | | enum | | | | | | explicit | | | | | | export | | | | | | extern | | | | | | false | | | | | | float | | | | | | for | | | | | | friend | | | | | | goto | | | | | | if | | | | | | inline | | | | | | int | | | | | | long | | | | | | mutable | | | | | | namespace | | | | | | new | | | | | | noexcept(C++11) | | | | | | not | | | | | | not_eq | | | | | | nullptr(C++11) | | | | | | operator | | | | | | or | | | | | | or_eq | | | | | | private | | | | | | protected | | | | | | public | | | | | | register | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reinterpret_cast | | | | | | requires(C++20) | | | | | | return | | | | | | short | | | | | | signed | | | | | | sizeof(\*) | | | | | | static | | | | | | static_assert(C++11) | | | | | | static_cast | | | | | | struct | | | | | | switch | | | | | | template | | | | | | this | | | | | | thread_local(C++11) | | | | | | throw | | | | | | true | | | | | | try | | | | | | typedef | | | | | | typeid | | | | | | typename | | | | | | union | | | | | | unsigned | | | | | | using | | | | | | virtual | | | | | | void | | | | | | volatile | | | | | | wchar_t | | | | | | while | | | | | | xor | | | | | | xor_eq | | | | | |  | | | | | |
| Identifiers with special meaning | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | final(C++11) | | | | | | import(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | module(C++20) | | | | | | override(C++11) | | | | | |

This is a list of reserved keywords in C++. Since they are used by the language, these keywords are not available for re-definition or overloading. As an exception, they are not considered reserved in attributes (excluding attribute argument lists).(since C++11)

| A – C | D – P | R – Z |
| --- | --- | --- |
| `alignas` (C++11)  `alignof` (C++11)  `and`  `and_eq`  `asm`  `atomic_cancel` (TM TS)  `atomic_commit` (TM TS)  `atomic_noexcept` (TM TS)  `auto` (1) (3) (4) (5)  `bitand`  `bitor`  `bool`  `break`  `case`  `catch`  `char`  `char8_t` (C++20)  `char16_t` (C++11)  `char32_t` (C++11)  `class` (1)  `compl`  `concept` (C++20)  `const`  `consteval` (C++20) (5)  `constexpr` (C++11) (3)  `constinit` (C++20)  `const_cast`  `continue`  `co_await` (C++20)  `co_return` (C++20)  `co_yield` (C++20) | `decltype` (C++11) (2)  `default` (1)  `delete` (1)  `do`  `double`  `dynamic_cast`  `else`  `enum` (1)  `explicit`  `export` (1) (4)  `extern` (1)  `false`  `float`  `for` (1)  `friend`  `goto`  `if` (3) (5)  `inline` (1) (3)  `int` (1)  `long`  `mutable` (1)  `namespace`  `new`  `noexcept` (C++11)  `not`  `not_eq`  `nullptr` (C++11)  `operator` (1)  `or`  `or_eq`  `private` (4)  `protected`  `public` | `reflexpr` (reflection TS)  `register` (3)  `reinterpret_cast`  `requires` (C++20)  `return`  `short`  `signed`  `sizeof` (1)  `static`  `static_assert` (C++11)  `static_cast`  `struct` (1)  `switch`  `synchronized` (TM TS)  `template`  `this` (5)  `thread_local` (C++11)  `throw` (3) (4)  `true`  `try`  `typedef`  `typeid`  `typename` (3) (4)  `union`  `unsigned`  `using` (1) (4)  `virtual`  `void`  `volatile`  `wchar_t`  `while`  `xor`  `xor_eq` |

- (1) — meaning changed or new meaning added in C++11.
- (2) — new meaning added in C++14.
- (3) — meaning changed or new meaning added in C++17.
- (4) — meaning changed or new meaning added in C++20.
- (5) — new meaning added in C++23.

Note that: `and`, `bitor`, `or`, `xor`, `compl`, `bitand`, `and_eq`, `or_eq`, `xor_eq`, `not` and `not_eq` (along with digraphs: <%, %>, <:, :>, %:, %:%: and trigraphs: ??<, ??>, ??(, ??), ??=, ??/, ??', ??!, ??-(until C++17)) provide an alternative way to represent standard tokens. These keywords are also considered reserved in attributes (excluding attribute argument lists), but some implementations handle them the same as the others.(since C++11)

In addition to keywords, there are **identifiers with special meaning**, which may be used as names of objects or functions, but have special meaning in certain contexts.

|  |
| --- |
| `final` (C++11)  `override` (C++11)  `transaction_safe` (TM TS)  `transaction_safe_dynamic` (TM TS)  `import` (C++20)  `module` (C++20) |

Also, all identifiers that contain a double underscore `__` in any position and each identifier that begins with an underscore followed by an uppercase letter is always reserved, and all identifiers that begin with an underscore are reserved for use as names in the global namespace. See identifiers for more details.

The namespace `std` is used to place names of the standard C++ library. See Extending namespace std for the rules about adding names to it.

|  |  |
| --- | --- |
| The name `posix` is reserved for a future top-level namespace. The behavior is undefined if a program declares or defines anything in that namespace. | (since C++11) |

The following tokens are recognized by the preprocessor when in context of a preprocessor directive:

|  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- |
| if  elif  else  endif | ifdef  ifndef  elifdef (C++23)  elifndef (C++23) | define  undef  include  line | error  warning (C++23)  pragma | defined  __has_include (C++17)  __has_cpp_attribute (C++20) | `export` (C++20)  `import` (C++20)  `module` (C++20) |

The following tokens are recognized by the preprocessor **outside** the context of a preprocessor directive:

|  |
| --- |
| _Pragma (C++11) |

### See also

|  |  |
| --- | --- |
| C documentation for C keywords | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/keyword&oldid=177570>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 November 2024, at 20:45.