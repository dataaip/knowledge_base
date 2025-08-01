# C attribute: maybe_unused (since C23)

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
| ****maybe_unused****(C23) | | | | |
| noreturn_Noreturn(C23)(C23)(deprecated) | | | | |
| unsequenced(C23) | | | | |
| reproducible(C23) | | | | |

Suppresses warnings on unused entities.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `[[` `maybe_unused` `]]` `[[` `__maybe_unused__` `]]` |  |  |
|  | | | | | | | | | |

### Explanation

This attribute can appear in the declaration of the following entities:

- struct/union: struct [[maybe_unused]] S;,
- typedef name: [[maybe_unused]] typedef S\* PS;,
- object: [[maybe_unused]] int x;,
- struct/union member: union U { [[maybe_unused]] int n; };,
- function: [[maybe_unused]] void f(void);,
- enumeration: enum [[maybe_unused]] E {};,
- enumerator: enum { A [[maybe_unused]], B [[maybe_unused]] = 42 };.

If the compiler issues warnings on unused entities, that warning is suppressed for any entity declared `maybe_unused`.

### Example

Run this code

```
#include <assert.h>
 
[[maybe_unused]] void f([[maybe_unused]] _Bool cond1, [[maybe_unused]] _Bool cond2)
{
   [[maybe_unused]] _Bool b = cond1 && cond2;
   assert(b); // in release mode, assert is compiled out, and b is unused
              // no warning because it is declared [[maybe_unused]]
} // parameters cond1 and cond2 are not used, no warning
 
int main(void)
{
    f(1, 1);
}

```

### See also

|  |  |
| --- | --- |
| C++ documentation for maybe_unused | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/attributes/maybe_unused&oldid=124539>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2020, at 10:54.