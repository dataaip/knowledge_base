# History of C

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
| ****History of C**** | | | | |
| Technical Specifications | | | | |

## Early C

- 1969: B created, based on BCPL, to replace PDP-7 assembler as the system programming language for Unix

:   - added operators ++, --, compound assignment, remained a typeless language like BCPL

- 1971: NB ("new B") created when porting B to PDP-11

:   - types (int, char, arrays and pointers), array-to-pointer conversion, compilation to machine code

- 1972: Language renamed to C

:   - struct, operators && and ||, preprocessor, portable I/O

- 1973: Unix re-written in C

:   - unsigned, long, union, enumerations, increased type safety

- 1978: The C Programming Language, 1st edition

## Standard C

- 1983: ANSI established X3J11 committee
- 1988: The C Programming Language, 2nd edition
- 1989: ****C89****, the ANSI C standard published

1. codified existing practices
2. new features: volatile, enum, signed, void, locales
3. From C++: const, function prototypes

- 1990: ****C90****, the ANSI C standard accepted as ISO/IEC 9899:1990
- 1994: Technical corrigendum 1 (ISO/IEC 9899:1990/Cor.1:1994)

:   - 44 small changes

- 1995: ****C95**** (ISO/IEC 9899:1990/Amd.1:1995) (online store)

1. greatly expanded wide and multibyte character support (<wctype.h>, <wchar.h>, additions and changes to stream I/O, etc)
2. digraphs, <iso646.h>,

- 1996: Technical corrigendum 2 (ISO/IEC 9899:1990/Cor.2:1996)

:   - 24 small changes

- 1999: ****C99**** (ISO/IEC 9899:1999)

1. new features: bool, long long, <stdint.h>, <inttypes.h>, restrict, compound literals, variable length arrays, flexible array members, designated initializers, <fenv.h>, variadic macros, complex numbers, __func__, hexadecimal floating-point format (%a), monetary formatting in lconv, isblank, concatenation of narrow and wide string literals, trailing comma in enumerations, empty arguments in function-like macros, STDC_\* pragmas, va_copy, null return of tmpnam, null pointer in setvbuf, `hh` and `ll` length-specifiers in printf, snprintf, _Exit, <tgmath.h>, POSIX-like strftime specifiers
2. from C++: inline, mix declarations and code, declarations in the init-clause of the for loop, // comments, universal character names in source code
3. removed implicit functions and implicit int

- 2001: Technical corrigendum 1 (ISO/IEC 9899:1999/Cor.1:2001)

:   - 11 defects fixed

- 2004: Technical corrigendum 2 (ISO/IEC 9899:1999/Cor.2:2004)
- 2004: Unicode TR (ISO/IEC TR 19769:2004) (ISO store) (N1040 November 7, 2003 draft)
- 2007: Technical corrigendum 3 (ISO/IEC 9899:1999/Cor.3:2007) (N1256 September 7, 2007 draft)

:   - deprecated gets

- 2007: Bounds-checking interfaces TR (ISO/IEC TR 24731-1:2007) (ISO store) (N1225 March 28, 2007 draft)
- 2008: Embedded TR (ISO/IEC TR 18037:2008) (ISO store) (N1021 September 24, 2003 draft)
- 2009: Decimal floating-point TR (ISO/IEC TR 24732:2009) (ISO store) (N1241 July 5, 2007 draft)
- 2009: Mathematical special functions TR (ISO/IEC TR 24747:2009) (ISO store) (N1182 August 2, 2006 draft)
- 2010: Dynamic allocations functions TR (ISO/IEC TR 24731-2:2010) (ISO store) (N1388 June 1, 2009 draft)
- 2011: ****C11**** (ISO/IEC 9899:2011) (ISO store) (ANSI store) (N1570 April 12, 2011 draft)

1. thread-aware memory model, <stdatomic.h>, <threads.h>, type-generic functions, alignas/alignof, noreturn, static_assert, analyzability extensions, extensions to complex and imaginary types, anonymous structures and unions, exclusive file open mode, quick_exit
2. removed gets
3. from Bounds-checking interfaces TR: bounds-checking interfaces,
4. from Unicode TR: char16_t, char32_t, and <uchar.h>

- 2012: Technical corrigendum 1 (ISO/IEC 9899:2011/Cor 1:2012) (ISO store)

:   - Fixes DR 411

- 2013: Secure Coding Rules TS (ISO/IEC TS 17961:2013) (ISO store) (N1718 May 30, 2013)
- 2014: FP TS part 1: Binary floating-point arithmetic (ISO/IEC TS 18661-1:2014) (ISO store) (N1778 2013 draft)

1. provides changes to C11 (mostly to Annex F) that cover all basic requirements and some recommendations of IEC 60559:2011 (C11 was built on IEC 60559:1989)

- 2015: FP TS part 2: Decimal floating-point arithmetic (ISO/IEC TS 18661-2:2015) (ISO store) (N1912 2015 draft)

1. provides changes to C11 to support all the requirements, plus some basic recommendations, of IEC 60559:2011 for decimal floating-point arithmetic. This supersedes ISO/IEC TR 24732:2009.

- 2015: FP TS part 3: Interchange and extended types (ISO/IEC TS 18661-3:2015) (ISO store) (N1945 2015 draft)

1. provides changes to C11 to support the recommendations of IEC 60559:2011 for extended floating‐point formats and the interchange formats, both arithmetic and non-arithmetic.

- 2015: FP TS part 4: Supplementary functions (ISO/IEC TS 18661-4:2015) (ISO store) (N1950 2015 draft)

1. provides changes to C11 to support all mathematical operations recommended by IEC 60559:2011, including trigonometry in π units, inverse square root, compounded interest, etc.

- 2016: FP TS part 5: Supplementary attributes (ISO/IEC TS 18661-5:2016) (ISO store) (N2004 2016 draft)

1. provides changes to C11 to support all supplementary attributes (evaluation model, exception handling, reproducibility, etc) recommended by IEC 60559:2011

- 2018: ****C17**** (ISO/IEC 9899:2018) (ISO Store) (Final draft)

:   Main Article: C17

| Defect Reports fixed in C17 (54 defects) |
| --- |
| - DR 400 - DR 401 - DR 402 - DR 403 - DR 404 - DR 405 - DR 406 - DR 407 - DR 410 - DR 412 - DR 414 - DR 415 - DR 416 - DR 417 - DR 419 - DR 423 - DR 426 - DR 428 - DR 429 - DR 430 - DR 431 - DR 433 - DR 434 - DR 436 - DR 437 - DR 438 - DR 439 - DR 441 - DR 444 - DR 445 - DR 447 - DR 448 - DR 450 - DR 452 - DR 453 - DR 457 - DR 458 - DR 459 - DR 460 - DR 462 - DR 464 - DR 465 - DR 468 - DR 470 - DR 471 - DR 472 - DR 473 - DR 475 - DR 477 - DR 480 - DR 481 - DR 485 - DR 487 - DR 491 |

- 2023 ****C23**** (ISO/IEC 9899:2024). C23 is the current revision of the C standard.

:   Main Article: C23

| Defect Reports fixed in C23 (? defects) |
| --- |
| - DR 440 - DR 432 - DR 467 - DR 476 - DR 482 - DR 488 - DR 489 - DR 494 - DR 496 - DR 497 - DR 499 - DR 500 - DR 501 |

### Future development

- Parallelism TS (Draft N2017 2016-03-10)
- Transactional Memory TS (Draft N1961 2015-09-23)
- ****C**** (Latest draft n3435 2025-01-03)

1. List of issues that were not granted DR status: (N2556 2020-08-02)

:   Main Article: C29") ?
:   Next major C language standard revision

### See also

|  |  |
| --- | --- |
| C++ documentation for History of C++ | |

### External links

|  |  |
| --- | --- |
| 1. | The Development of the C Language by Dennis M. Ritchie |
| 2. | Rationale for the C99 standard |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/history&oldid=178579>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 13:51.