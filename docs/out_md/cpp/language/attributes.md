# Attribute specifier sequence (since C++11)

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
| ****Attributes**** (C++11) | | | | |
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Overview | | | | | | Declaration syntax | | | | | | **decl-specifier-seq** | | | | | | Declarator | | | | | | Conflicting declarations | | | | | | Specifiers | | | | | | typedef | | | | | | inline | | | | | | virtual function specifier | | | | | | explicit function specifier | | | | | | friend | | | | | | constexpr(C++11) | | | | | | consteval(C++20) | | | | | | constinit(C++20) | | | | | | Storage class specifiers | | | | | | Translation-unit-local (C++20) | | | | | | class/struct | | | | | | union | | | | | | enum | | | | | | decltype(C++11) | | | | | | auto(C++11) | | | | | | alignas(C++11) | | | | | | constvolatile | | | | | | Pack indexing specifier (C++26) | | | | | | Elaborated type specifier | | | | | | ****Attributes**** (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Declarators | | | | | | Reference | | | | | | Pointer | | | | | | Array | | | | | | Block declarations | | | | | | Simple-declaration | | | | | | →Structured binding declaration (C++17) | | | | | | Alias declaration (C++11) | | | | | | Namespace alias definition | | | | | | using declaration | | | | | | `using` directive | | | | | | static_assert declaration (C++11) | | | | | | asm declaration | | | | | | Opaque enum declaration (C++11) | | | | | | Other declarations | | | | | | Namespace definition | | | | | | Function declaration | | | | | | Class template declaration | | | | | | Function template declaration | | | | | | Explicit template instantiation (C++11) | | | | | | Explicit template specialization | | | | | | Linkage specification | | | | | | Attribute declaration (C++11) | | | | | | Empty declaration | | | | | |  | | | | | |

****Attributes****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| assume(C++23) | | | | |
| carries_dependency(C++11) | | | | |
| deprecated(C++14) | | | | |
| fallthrough(C++17) | | | | |
| indeterminate(C++26) | | | | |
| likely(C++20) | | | | |
| maybe_unused(C++17) | | | | |
| nodiscard(C++17) | | | | |
| noreturn(C++11) | | | | |
| no_unique_address(C++20) | | | | |
| optimize_for_synchronized(TM TS) | | | | |
| unlikely(C++20) | | | | |

Introduces implementation-defined attributes for types, objects, code, etc.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `[[` attribute-list `]]` |  | (since C++11) |
|  | | | | | | | | | |
| `[[` `using` attribute-namespace `:` attribute-list `]]` |  | (since C++17) |
|  | | | | | | | | | |

where attribute-list is a comma-separated sequence of zero or more attribute ﻿s (possibly ending with an ellipsis `...` indicating a pack expansion)

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| identifier | (1) |  |
|  | | | | | | | | | |
| attribute-namespace `::` identifier | (2) |  |
|  | | | | | | | | | |
| identifier `(` argument-list ﻿(optional) `)` | (3) |  |
|  | | | | | | | | | |
| attribute-namespace `::` identifier `(` argument-list ﻿(optional) `)` | (4) |  |
|  | | | | | | | | | |

where attribute-namespace is an identifier and argument-list is a sequence of tokens where parentheses, brackets and braces are balanced (balanced-token-seq).

1) Simple attribute, such as [[noreturn]].2) Attribute with a namespace, such as [[gnu::unused]].3) Attribute with arguments, such as [[deprecated("because")]].4) Attribute with both a namespace and an argument list.

|  |  |
| --- | --- |
| If `using namespace:` appears in the beginning of an attribute list, no other attributes in the attribute list can specify a namespace: the namespace specified in a using applies to them all:   ```text [[using CC: opt(1), debug]] // same as [[CC::opt(1), CC::debug]] [[using CC: CC::opt(1)]] // error: cannot combine using and scoped attribute ``` | (since C++17) |

### Explanation

Attributes provide the unified standard syntax for implementation-defined language extensions, such as the GNU and IBM language extensions `__attribute__((...))`, Microsoft extension `__declspec()`, etc.

An attribute can be used almost everywhere in the C++ program, and can be applied to almost everything: to types, to variables, to functions, to names, to code blocks, to entire translation units, although each particular attribute is only valid where it is permitted by the implementation: `[[expect_true]]` could be an attribute that can only be used with an if, and not with a class declaration. `[[omp::parallel()]]` could be an attribute that applies to a code block or to a for loop, but not to the type int, etc (note these two attributes are fictional examples, see below for the standard and some non-standard attributes).

In declarations, attributes may appear both before the whole declaration and directly after the name of the entity that is declared, in which case they are combined. In most other situations, attributes apply to the directly preceding entity.

The alignas specifier is a part of the attribute specifier sequence, although it has different syntax. It may appear where the `[[...]]` attributes appear and may mix with them (provided it is used where alignas is permitted).

Two consecutive left square bracket tokens (`[[`) may only appear when introducing an attribute-specifier or inside an attribute argument.

```
void f()
{
    int y[3];
    y[[] { return 0; }()] = 1;  // error
    int i [[cats::meow([[]])]]; // OK
}

```

Besides the standard attributes listed below, implementations may support arbitrary non-standard attributes with implementation-defined behavior. All attributes unknown to an implementation are ignored without causing an error.(since C++17)

|  |  |
| --- | --- |
| An attribute without attribute-namespace and an attribute-namespace whose name is either `std` or `std` followed by one or more digits is reserved for future standardization. That is, every non-standard attribute is in the attribute-namespace provided by the implementation, e.g. `[[gnu::may_alias]]`, `[[clang::trivial_abi]]`, and `[[msvc::noop_dtor]]`. | (since C++20) |

### Standard attributes

The following attributes are defined by the C++ standard.

Standard attributes cannot be syntactically ignored: they cannot contain syntax errors, must be applied to the correct target, and entities in the arguments must be ODR-use.

Standard attributes cannot be semantically ignored either: the behavior with all instances of a particular standard attribute removed would have been a conforming behavior for the original program with the attribute present.

|  |  |
| --- | --- |
| `[[noreturn]]`(C++11) | indicates that the function does not return (attribute specifier) |
| `[[carries_dependency]]`(C++11) | indicates that dependency chain in release-consume std::memory_order propagates in and out of the function (attribute specifier) |
| `[[deprecated]]`(C++14) `[[deprecated("reason")]]`(C++14) | indicates that the use of the name or entity declared with this attribute is allowed, but discouraged for some reason (attribute specifier) |
| `[[fallthrough]]`(C++17) | indicates that the fall through from the previous case label is intentional and should not be diagnosed by a compiler that warns on fall-through (attribute specifier) |
| `[[maybe_unused]]`(C++17) | suppresses compiler warnings on unused entities, if any (attribute specifier) |
| `[[nodiscard]]`(C++17) `[[nodiscard("reason")]]`(C++20) | encourages the compiler to issue a warning if the return value is discarded (attribute specifier) |
| `[[likely]]`(C++20) `[[unlikely]]`(C++20) | indicates that the compiler should optimize for the case where a path of execution through a statement is more or less likely than any other path of execution (attribute specifier) |
| `[[no_unique_address]]`(C++20) | indicates that a non-static data member need not have an address distinct from all other non-static data members of its class (attribute specifier) |
| `[[assume(expression)]]`(C++23) | specifies that the **expression** will always evaluate to true at a given point (attribute specifier) |
| `[[indeterminate]]`(C++26) | specifies that an object has an indeterminate value if it is not initialized (attribute specifier) |
| `[[optimize_for_synchronized]]`(TM TS) | indicates that the function definition should be optimized for invocation from a synchronized statement (attribute specifier) |

### Notes

The presence of each individual attribute on a given platform can be checked with `__has_cpp_attribute` preprocessor macro.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_attributes` | `200809L` | (C++11) | Attributes |
| `__cpp_namespace_attributes` | `201411L` | (C++17) | Attributes for namespaces |

### Example

Run this code

```
[[gnu::always_inline]] [[gnu::hot]] [[gnu::const]] [[nodiscard]]
inline int f(); // declare f with four attributes
 
[[gnu::always_inline, gnu::const, gnu::hot, nodiscard]]
int f(); // same as above, but uses a single attr specifier that contains four attributes
 
// C++17:
[[using gnu : const, always_inline, hot]] [[nodiscard]]
int f[[gnu::always_inline]](); // an attribute may appear in multiple specifiers
 
int f() { return 0; }
 
int main() {}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 2079 | C++11 | `[` could not appear inside an attribute argument | allowed |
| [CWG 2538 | C++11 | it was unclear whether standard attributes can be syntactically ignored | prohibited |
| CWG 2695 | C++11 | it was unclear whether standard attributes can be semantically ignored | prohibited |
| P2156R1 | C++11 | every standard attribute was required to appear at most once in an attribute-list | not required |

### See also

|  |  |
| --- | --- |
| `__has_cpp_attribute` - checks for the presence of an attribute | |
| C documentation for Attributes specifier sequence | |

### External links

|  |  |
| --- | --- |
| 1. | Attributes in GCC. These attributes can be used as `[[gnu::...]]`, See SO. |
| 2. | Attributes in Clang. |
| 3. | Attributes in MSVC. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/attributes&oldid=179437>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 January 2025, at 14:36.