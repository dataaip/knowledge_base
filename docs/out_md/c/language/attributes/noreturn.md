# C attribute: noreturn, _Noreturn (since C23)

From cppreference.com
< c‎ | language‎ | attributes
 C

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Language | | | | |
| Headers | | | | |
| Type support | | | | |
| Program utilities | | | | |
| Variadic function support | | | | |
| Error handling | | | | |
| Dynamic memory management | | | | |
| Strings library | | | | |
| Algorithms | | | | |
| Numerics | | | | |
| Date and time utilities | | | | |
| Input/output support | | | | |
| Localization support | | | | |
| Concurrency support (C11) | | | | |
| Technical Specifications | | | | |
| Symbol index | | | | |

 C language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Basic concepts | | | | |
| Keywords | | | | |
| Preprocessor | | | | |
| Statements | | | | |
| Expressions | | | | |
| Initialization | | | | |
| Declarations | | | | |
| Functions | | | | |
| Miscellaneous | | | | |
| History of C | | | | |
| Technical Specifications | | | | |

 Declarations

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Pointer | | | | |
| Array | | | | |
| enum | | | | |
| struct | | | | |
| union | | | | |
| Bit-field | | | | |
| Atomic types (C11) | | | | |
| const | | | | |
| constexpr(C23) | | | | |
| volatile | | | | |
| restrict(C99) | | | | |
| Alignment specifiers | | | | |
| Storage duration and linkage | | | | |
| External and tentative definitions | | | | |
| typedef | | | | |
| Static assertions | | | | |
| Attributes (C23) | | | | |

 Attributes

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| deprecated(C23) | | | | |
| fallthrough(C23) | | | | |
| nodiscard(C23) | | | | |
| maybe_unused(C23) | | | | |
| ****noreturn_Noreturn****(C23)(C23)(deprecated) | | | | |
| unsequenced(C23) | | | | |
| reproducible(C23) | | | | |

Indicates that the function does not return.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `[[` `noreturn` `]]` `[[` `__noreturn__` `]]` |  |  |
|  | | | | | | | | | |
| `[[` `_Noreturn` `]]` `[[` `___Noreturn__` `]]` |  | (deprecated) |
|  | | | | | | | | | |

### Explanation

Indicates that the function does not return.

This attribute applies to the name of the function and specifies that the function does not return by executing the return statement or by reaching the end of the function body (it may return by executing longjmp). The behavior is undefined if the function with this attribute actually returns. A compiler diagnostic is recommended if this can be detected.

It has been previously denoted by the keyword _Noreturn until it was deprecated since C23 and replaced by this attribute.

### Standard library

The following standard functions are declared with `noreturn` attribute (they used to be declared with _Noreturn specifier until C23):

- abort()
- exit()
- _Exit()
- quick_exit()
- thrd_exit()
- longjmp()

### See also

|  |  |
| --- | --- |
| C documentation for _Noreturn | |
| C++ documentation for `[[noreturn]]` | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/attributes/noreturn&oldid=145161>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 November 2022, at 17:20.