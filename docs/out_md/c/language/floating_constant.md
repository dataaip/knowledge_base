# Floating constant

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
| ****floating constant**** | | | | |
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

Allows values of floating type to be used directly in expressions.

### Syntax

A floating constant is a non-lvalue expression having the form:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| significand exponent ﻿(optional) suffix ﻿(optional) |  |  |
|  | | | | | | | | | |

Where the significand has the form

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| whole-number ﻿(optional) `.`(optional) fraction ﻿(optional) |  |  |
|  | | | | | | | | | |

The exponent has the form

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `e` | `E` exponent-sign ﻿(optional) digit-sequence | (1) |  |
|  | | | | | | | | | |
| `p` | `P` exponent-sign ﻿(optional) digit-sequence | (2) | (since C99) |
|  | | | | | | | | | |

1) The exponent syntax for a decimal floating-point constant2) The exponent syntax for hexadecimal floating-point constant

|  |  |
| --- | --- |
| Optional single quotes (`'`) can be inserted between the digits as a separator, they are ignored when compiling. | (since C23) |

### Explanation

|  |  |
| --- | --- |
| If the significand begins with the character sequence `0x` or `0X`, the floating constant is a **hexadecimal floating constant**. Otherwise, it is a **decimal floating constant**.  For a **hexadecimal floating constant**, the significand is interpreted as a hexadecimal rational number, and the digit-sequence of the exponent is interpreted as the integer power of 2 to which the significand has to be scaled.   ```text double d = 0x1.2p3; // hex fraction 1.2 (decimal 1.125) scaled by 2^3, that is 9.0 ``` | (since C99) |

For a **decimal floating constant**, the significand is interpreted as a decimal rational number, and the digit-sequence of the exponent is interpreted as the integer power of 10 to which the significand has to be scaled.

```
double d = 1.2e3; // decimal fraction 1.2 scaled by 10^3, that is 1200.0

```

#### Suffixes

An unsuffixed floating constant has type double. If suffix is the letter `f` or `F`, the floating constant has type float. If suffix is the letter `l` or `L`, the floating constant has type long double.

|  |  |
| --- | --- |
| If the implementation predefines macro `__STDC_IEC_60559_BFP__`, the following suffixes and corresponding floating constants are additionally supported:   - if suffix is `df` or `DF`, the floating constant has type _Decimal32; - if suffix is `dd` or `DD`, the floating constant has type _Decimal64; - if suffix is `dl` or `DL`, the floating constant has type _Decimal128.   Suffixes for decimal floating-point types are not allowed in hexadecimal floating constants. | (since C23) |

#### Optional parts

If the exponent is present and fractional part is not used, the decimal separator may be omitted:

```
double x = 1e0; // floating-point 1.0 (period not used)

```

For decimal floating constants, the exponent part is optional. If it is omitted, the period is not optional, and either the whole-number or the fraction must be present.

```
double x = 1.; // floating-point 1.0 (fractional part optional)
double y = .1; // floating-point 0.1 (whole-number part optional)

```

|  |  |
| --- | --- |
| For hexadecimal floating constants, the exponent is not optional to avoid ambiguity resulting from an `f` suffix being mistaken as a hexadecimal digit. | (since C99) |

#### Representable values

The result of evaluating a floating constant is either the nearest representable value or the larger or smaller representable value immediately adjacent to the nearest representable value, chosen in an implementation-defined manner (in other words, default rounding direction during translation is implementation-defined).

All floating constants of the same source form convert to the same internal format with the same value. Floating constants of different source forms, e.g. 1.23 and 1.230, need not to convert to the same internal format and value.

|  |  |
| --- | --- |
| Floating-point constants may convert to more range and precision than is indicated by their type, if indicated by FLT_EVAL_METHOD. For example, the constant 0.1f may act as if it were 0.1L in an expression.  The result of evaluating a hexadecimal floating constant, if FLT_RADIX is 2, is the exact value represented by the floating constant, correctly rounded to the target type. | (since C99) |

|  |  |
| --- | --- |
| Floating constants of decimal floating-point type that have the same numerical value \(\small x\)x but different quantum exponents, e.g. 1230.dd, 1230.0dd, and 1.23e3dd, have distinguishable internal representations.  The quantum exponent \(\small q\)q of a floating constant of a decimal floating-point type is determined in the manner that \(\small 10^q\)10q  represents 1 at the place of last digit of the significand when possible. If the quantum exponent \(\small q\)q and the coefficient \(\small c = x\cdot 10^{-q}\)c=x·10-q  determined above cannot represented exactly in the type of the floating constant, \(\small q\)q is increased as needed within the limit of the type, and \(\small c\)c is reduced correspondingly, with needed rounding. The rounding may result in zero or infinity. If (the possibly rounded) \(\small c\)c is still out of the permitted range after \(\small q\)q reaches the maximum value, the resulted floating constant has value positive infinity. | (since C23) |

### Notes

Default rounding direction and precision are in effect when the floating constants are converted into internal representations, and floating-point exceptions are not raised even if #pragma STDC FENV_ACCESS is in effect (for execution-time conversion of character strings, strtod can be used). Note that this differs from arithmetic constant expressions of floating type.

Letters in the floating constants are case-insensitive, except that uppercase and lowercase cannot be both used in suffixes for decimal floating-point types(since C23): 0x1.ep+3 and 0X1.EP+3 represent the same floating-point value 15.0.

The decimal point specified by setlocale has no effect on the syntax of floating constants: the decimal point character is always the period.

Unlike integers, not every floating value can be represented directly by decimal or even hexadecimal(since C99) constant syntax: macros NAN and INFINITY as well as functions such as nan offer ways to generate those special values(since C99). Note that 0x1.FFFFFEp128f, which might appear to be an IEEE float NaN, in fact overflows to an infinity in that format.

There are no negative floating constants; an expression such as -1.2 is the arithmetic operator unary minus applied to the floating constant 1.2. Note that the special value negative zero may be constructed with -0.0.

### Example

Run this code

```
#include <stdio.h>
 
int main(void)
{
    printf("15.0     = %a\n", 15.0);
    printf("0x1.ep+3 = %f\n", 0x1.ep+3);
 
    // Constants outside the range of type double.
    printf("+2.0e+308 --> %g\n",  2.0e+308);
    printf("+1.0e-324 --> %g\n",  1.0e-324);
    printf("-1.0e-324 --> %g\n", -1.0e-324);
    printf("-2.0e+308 --> %g\n", -2.0e+308);
}

```

Output:

```
15.0     = 0x1.ep+3
0x1.ep+3 = 15.000000
+2.0e+308 --> inf
+1.0e-324 --> 0
-1.0e-324 --> -0
-2.0e+308 --> -inf

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.4.4.2 Floating constants (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.4.4.2 Floating constants (p: 47-48)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.4.4.2 Floating constants (p: 65-66)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.4.4.2 Floating constants (p: 57-58)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.1.3.1 Floating constants

### See also

|  |  |
| --- | --- |
| C++ documentation for Floating-point literal | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/floating_constant&oldid=153211>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 June 2023, at 10:06.