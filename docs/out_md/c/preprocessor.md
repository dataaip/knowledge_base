# Preprocessor

From cppreference.com
< c
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
| ****Preprocessor**** | | | | |
| Statements | | | | |
| Expressions | | | | |
| Initialization | | | | |
| Declarations | | | | |
| Functions | | | | |
| Miscellaneous | | | | |
| History of C | | | | |
| Technical Specifications | | | | |

 ****Preprocessor****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| #if#ifdef#ifndef#else#elif#elifdef#elifndef#endif(C23)(C23) | | | | |
| #define#undef#,## operators | | | | |
| #include__has_include(C23) | | | | |
| #error#warning(C23) | | | | |
| #pragma_Pragma(C99) | | | | |
| #line | | | | |
| #embed__has_embed(C23)(C23) | | | | |

The preprocessor is executed at translation phase 4, before the compilation. The result of preprocessing is a single file which is then passed to the actual compiler.

### Directives

The preprocessing directives control the behavior of the preprocessor. Each directive occupies one line and has the following format:

- `#` character
- preprocessing instruction (one of `define`, `undef`, `include`, `if`, `ifdef`, `ifndef`, `else`, `elif`, `elifdef`, `elifndef`(since C23), `endif`, `line`, `embed`(since C23), `error`, `warning`(since C23), `pragma`) [[1]](preprocessor.html#cite_note-1)
- arguments (depends on the instruction)
- line break.

The null directive (`#` followed by a line break) is allowed and has no effect.

### Capabilities

The preprocessor has the source file translation capabilities:

- ****conditionally**** compile of parts of source file (controlled by directive `#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, `#elifdef`, `#elifndef`(since C23) and `#endif`).
- ****replace**** text macros while possibly concatenating or quoting identifiers (controlled by directives `#define` and `#undef`, and operators `#` and `##`)
- ****include**** other files (controlled by directive `#include` and checked with `__has_include`(since C23))
- cause an ****error**** or ****warning****(since C23) (controlled by directive `#error` or `#warning` respectively(since C23))

The following aspects of the preprocessor can be controlled:

- ****implementation defined**** behavior (controlled by directive `#pragma` and operator `_Pragma`(since C99))
- ****file name and line information**** available to the preprocessor (controlled by directives `#line`)

### Footnotes

1. ↑ These are the directives defined by the standard. The standard does not define behavior for other directives: they might be ignored, have some useful meaning, or make the program ill-formed. Even if otherwise ignored, they are removed from the source code when the preprocessor is done. A common non-standard extension is the directive #warning which emits a user-defined message during compilation.(until C23)

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.10 Preprocessing directives (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.10 Preprocessing directives (p: 117-129)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.10 Preprocessing directives (p: 160-178)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.10 Preprocessing directives (p: 145-162)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.8 Preprocessing directives

### See also

|  |  |
| --- | --- |
| C documentation for Predefined Macro Symbols | |
| C documentation for Macro Symbol Index | |
| C++ documentation for Preprocessor | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/preprocessor&oldid=179530>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 January 2025, at 14:20.