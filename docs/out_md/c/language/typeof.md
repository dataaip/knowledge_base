# typeof operators (since C23)

From cppreference.com
< c‎ | language
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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| value category | | | | |
| evaluation order and sequence points | | | | |
| constant expressions | | | | |
| implicit conversions | | | | |
| generic selection (C11) | | | | |
| constants and literals | | | | |
| integer constant | | | | |
| floating constant | | | | |
| character constant | | | | |
| true/false(C23) | | | | |
| nullptr(C23) | | | | |
| string literal | | | | |
| compound literal (C99) | | | | |
| operators | | | | |
| operator precedence | | | | |
| member access and indirection | | | | |
| logical operators | | | | |
| comparison operators | | | | |
| arithmetic operators | | | | |
| assignment operators | | | | |
| increment and decrement | | | | |
| function call, comma, conditional operator | | | | |
| sizeof | | | | |
| _Alignof(C11\*) | | | | |
| cast operators | | | | |

Determines the type of an object.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `typeof(` type `)` | (1) |  |
|  | | | | | | | | | |
| `typeof(` expression `)` | (2) |  |
|  | | | | | | | | | |
| `typeof_unqual(` type `)` | (3) |  |
|  | | | | | | | | | |
| `typeof_unqual(` expression `)` | (4) |  |
|  | | | | | | | | | |

### Explanation

1) produces the type-name with any nested typeof-specifier evaluated2) yields the type-name representing the type of its operand. No implicit conversions are applied to expression.3,4) the same as (1) and (2) respectively but remove qualifiers

### Notes

`typeof` and `typeof_unqual` are collectively called the **typeof operators**. The `typeof` operators cannot be applied to bit-field members. If the type of the operand is a variably modified type, the operand is evaluated; otherwise, the operand is not evaluated. The result of the `typeof_unqual` operator is the non-atomic unqualified type that would result from the `typeof` operator. The `typeof` operator preserves all qualifiers.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.7.2.5 The typeof specifiers (p: 115-118)

### See also

|  |  |
| --- | --- |
| C++ documentation for decltype | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/typeof&oldid=159494>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 September 2023, at 05:09.