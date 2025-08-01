# Identifier

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

 Basic Concepts

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Comments | | | | |
| ASCII | | | | |
| Character sets | | | | |
| Translation phases | | | | |
| Punctuation | | | | |
| ****Identifier**** | | | | |
| Scope | | | | |
| Lifetime | | | | |
| Lookup and name spaces | | | | |
| Type | | | | |
| Arithmetic types | | | | |
| Objects and alignment | | | | |
| The main() function | | | | |
| The as-if rule | | | | |
| Undefined behavior | | | | |
| Memory model and data races | | | | |

An **identifier** is an arbitrarily long sequence of digits, underscores, lowercase and uppercase Latin letters, and Unicode characters specified using `\u` and `\U` escape notation(since C99), of class XID_Continue(since C23). A valid identifier must begin with a non-digit character (Latin letter, underscore, or Unicode non-digit character(since C99)(until C23), or Unicode character of class XID_Start)(since C23)). Identifiers are case-sensitive (lowercase and uppercase letters are distinct). Every identifier must conform to Normalization Form C.(since C23)

|  |  |
| --- | --- |
| It is implementation-defined if raw (not escaped) Unicode characters are allowed in identifiers:  ```text char *\U0001f431 = "cat"; // supported char *🐱 = "cat"; // implementation-defined                   // (e.g. works with Clang, but not GCC prior to version 10)                   // both are ill formed in C23. Emoji are not XID_Start characters ``` | (since C99) (until C23) |
| Implementation-defined characters whose corresponding code points in ISO/IEC 10646 (Unicode) have the XID_Start or XID_Continue property can appear in the beginning or after the first character of an identifier respectively. | (since C23) |

Identifiers can denote the following types of entities:

- objects
- functions
- tags (struct, union, or enumerations)
- structure or union members
- enumeration constants
- typedef names
- label names
- macro names
- macro parameter names

Every identifier other than macro names or macro parameter names has scope, belongs to a name space, and may have linkage. The same identifier can denote different entities at different points in the program, or may denote different entities at the same point if the entities are in different name spaces.

### Reserved identifiers

The following identifiers are **reserved** and may not be declared in a program (doing so invokes undefined behavior):

1. The identifiers that are keywords cannot be used for other purposes. In particular #define or #undef of an identifier that is identical to a keyword is not allowed.
2. All external identifiers that begin with an underscore.
3. All identifiers that begin with an underscore followed by a capital letter or by another underscore (these reserved identifiers allow the library to use numerous behind-the-scenes non-external macros and functions).
4. All external identifiers defined by the standard library (in hosted environment). This means that no user-supplied external names are allowed to match any library names, not even if declaring a function that is identical to a library function.
5. Identifiers declared as reserved for the implementation or future use by the standard library (see below).
6. Identifiers declared as potentially reserved and provided by the implementation (see below). (since C23)

All other identifiers are available. Identifiers that are not reserved or potentially reserved(since C23) can be used with no fear of unexpected collisions when moving programs from one compiler and library to another.

Note: in C++, identifiers with a double underscore anywhere are reserved everywhere; in C, only the ones that begin with a double underscore are reserved.

#### Reserved and potentially reserved identifiers in the library

The standard library reserves every identifier it provides. Reserved identifiers that have external linkage (e.g. name of every standard function) are reserved regardless which header is included. Other reserved identifiers are reserved when any of its associated headers is included.

|  |  |
| --- | --- |
| Potentially reserved identifiers are intended to be used by the implementation and future revision of standard. If a potentially reserved identifier is provided by the implementation, it becomes reserved.  Implementations are only allowed to provide external definitions of potentially reserved identifiers that are reserved as function names.  Potentially reserved identifiers that are not provided by the implementation are not reserved. They can be declared or defined by the user without undefined behavior. However, such usage is not portable. | (since C23) |

Following identifiers are reserved or potentially reserved(since C23) for the implementation or future use by the standard library.

- **function names**, all of which are potentially reserved(since C23)
  - `cerf`, `cerfc`, `cexp2`, `cexpm1`, `clog10`, `clog1p`, `clog2`, `clgamma`, `ctgamma`, `csinpi`, `ccospi`, `ctanpi`, `casinpi`, `cacospi`, `catanpi`, `ccompoundn`, `cpown`, `cpowr`, `crootn`, `crsqrt`, `cexp10m1`, `cexp10`, `cexp2m1`, `clog10p1`, `clog2p1`, `clogp1`(since C23) and their -f and -l suffixed variants, in <complex.h> (since C99)
  - beginning with `is` or `to` followed by a lowercase letter, in <ctype.h> and <wctype.h>(since C95)
  - beginning with `str` or `wcs`(since C23) followed by a lowercase letter, in <stdlib.h> and <inttypes.h>(since C23)
  - beginning with `cr_`, in <math.h> (since C23)
  - beginning with `wcs` followed by a lowercase letter, in <wchar.h> (since C95)
  - beginning with `atomic_` followed by a lowercase letter, in <stdatomic.h> (since C11)
  - beginning with `cnd_`, `mtx_`, `thrd_` or `tss_` followed by a lowercase letter, in <threads.h> (since C11)
- **typedef names**, all of which are potentially reserved(since C23)
  - beginning with `int` or `uint` and ending with `_t`, in <stdint.h> (since C99)
  - beginning with `atomic_` or `memory_` followed by a lowercase letter, in <stdatomic.h> (since C11)
  - beginning with `cnd_`, `mtx_`, `thrd_` or `tss_` followed by a lowercase letter, in <threads.h> (since C11)
- **macro names**
  - beginning with `E` followed by a digit or an uppercase letter, in <errno.h>
  - beginning with `FE_` followed by an uppercase letter, in <fenv.h> (since C99)
  - beginning with `DBL_`, `DEC32_`, `DEC64_`, `DEC128_`, `DEC_`, `FLT_`, or `LDBL_` followed by an uppercase letter, in <float.h>; these identifiers are potentially reserved (since C23)
  - beginning with `INT` or `UINT` and ending with `_MAX`, `_MIN`, `_WIDTH`(since C23), or `_C`, in <stdint.h>; these identifiers are potentially reserved(since C23) (since C99)
  - beginning with `PRI` or `SCN` followed by lowercase letter or the letter `X`, in <inttypes.h>; these identifiers are potentially reserved(since C23) (since C99)
  - beginning with `LC_` followed by an uppercase letter, in <locale.h>
  - beginning with `FP_` followed by an uppercase letter, in <math.h> (since C23)
  - beginning with `MATH_` followed by an uppercase letter, in <math.h>; these identifiers are potentially reserved (since C23)
  - beginning with `SIG` or `SIG_` followed by an uppercase letter, in <signal.h>
  - beginning with `TIME_` followed by an uppercase letter, in <time.h> (since C11)
  - beginning with `ATOMIC_` followed by an uppercase letter, in <stdatomic.h>; these identifiers are potentially reserved(since C23) (since C11)
- **enumeration constants**, all of which are potentially reserved(since C23)
  - beginning with `memory_order_` followed by a lowercase letter, in <stdatomic.h> (since C11)
  - beginning with `cnd_`, `mtx_`, `thrd_` or `tss_` followed by a lowercase letter, in <threads.h> (since C11)

|  |  |
| --- | --- |
| Implementations are recommended to warn when on declaration or definition of potentially reserved identifiers, except when   - the declaration is a non-definition declaration of an identifier with external linkage provided by the implementation, and - the type used in the declaration is compatible with that used in the definition. | (since C23) |

### Translation limits

Even though there is no specific limit on the length of identifiers, early compilers had limits on the number of significant initial characters in identifiers and the linkers imposed stricter limits on the names with external linkage. C requires that at least the following limits are supported by any standard-compliant implementation:

|  |  |
| --- | --- |
| - 31 significant initial characters in an internal identifier or a macro name - 6 significant initial characters in an external identifier - 511 external identifiers in one translation unit - 127 identifiers with block scope declared in one block - 1024 macro identifiers simultaneously defined in one preprocessing translation unit | (until C99) |
| - 63 significant initial characters in an internal identifier or a macro name - 31 significant initial characters in an external identifier - 4095 external identifiers in one translation unit - 511 identifiers with block scope declared in one block - 4095 macro identifiers simultaneously defined in one preprocessing translation unit | (since C99) |

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 5.2.5.2 Translation limits (p: TBD)

:   - 6.4.2 Identifiers (p: TBD)

:   - 6.10.10 Predefined macro names (p: TBD)

:   - 6.11.7 Predefined macro names (p: TBD)

:   - 7.33 Future library directions (p: TBD)

:   - K.3.1.2 Reserved identifiers (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 5.2.4.1 Translation limits (p: 19-20)

:   - 6.4.2 Identifiers (p: 43)

:   - 6.10.8 Predefined macro names (p: 127-129)

:   - 6.11.9 Predefined macro names (p: 130)

:   - 7.31 Future library directions (p: 332-333)

:   - K.3.1.2 Reserved identifiers (p: 425)

- C11 standard (ISO/IEC 9899:2011):

:   - 5.2.4.1 Translation limits (p: 25-26)

:   - 6.4.2 Identifiers (p: 59-60)

:   - 6.10.8 Predefined macro names (p: 175-176)

:   - 6.11.9 Predefined macro names (p: 179)

:   - 7.31 Future library directions (p: 455-457)

:   - K.3.1.2 Reserved identifiers (p: 584)

- C99 standard (ISO/IEC 9899:1999):

:   - 5.2.4.1 Translation limits (p: 20-21)

:   - 6.4.2 Identifiers (p: 51-52)

:   - 6.10.8 Predefined macro names (p: 160-161)

:   - 6.11.9 Predefined macro names (p: 163)

:   - 7.26 Future library directions (p: 401-402)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 2.2.4.1 Translation limits

:   - 3.1.2 Identifiers

:   - 3.8.8 Predefined macro names

### See also

|  |  |
| --- | --- |
| C++ documentation for Identifiers | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/identifier&oldid=179340>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 January 2025, at 22:56.