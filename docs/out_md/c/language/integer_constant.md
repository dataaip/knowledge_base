# Integer constant

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
| ****integer constant**** | | | | |
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

Allows values of integer type to be used in expressions directly.

### Syntax

An integer constant is a non-lvalue expression of the form

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| decimal-constant integer-suffix ﻿(optional) | (1) |  |
|  | | | | | | | | | |
| octal-constant integer-suffix ﻿(optional) | (2) |  |
|  | | | | | | | | | |
| hex-constant integer-suffix ﻿(optional) | (3) |  |
|  | | | | | | | | | |
| binary-constant integer-suffix ﻿(optional) | (4) | (since C23) |
|  | | | | | | | | | |

where

- decimal-constant is a non-zero decimal digit (`1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`), followed by zero or more decimal digits (`0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`)
- octal-constant is the digit zero (`0`) followed by zero or more octal digits (`0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`)
- hex-constant is the character sequence `0x` or the character sequence `0X` followed by one or more hexadecimal digits (`0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `a`, `A`, `b`, `B`, `c`, `C`, `d`, `D`, `e`, `E`, `f`, `F`)
- binary-constant is the character sequence `0b` or the character sequence `0B` followed by one or more binary digits (`0`, `1`)
- integer-suffix, if provided, may contain one of the following (except the unsigned prefix can be combined with one of the others; if two suffixes are used they can appear in any order):

:   - unsigned-suffix (the character `u` or the character `U`)
    - long-suffix (the character `l` or the character `L`) or the long-long-suffix (the character sequence `ll` or the character sequence `LL`)(since C99)
    - bit-precise-int-suffix (the character sequence `wb` or the character sequence `WB`) (since C23)

|  |  |
| --- | --- |
| Optional single quotes (`'`) may be inserted between the digits as a separator. They are ignored by the compiler. | (since C23) |

### Explanation

1) Decimal integer constant (base 10, the first digit is the most significant).2) Octal integer constant (base 8, the first digit is the most significant).3) Hexadecimal integer constant (base 16, the first digit is the most significant, the letters `a` through `f` represent the decimal values 10 through 15).4) Binary integer constant (base 2, the first digit is the most significant).

The following variables are initialized to the same value:

```
int d = 42;
int o = 052;
int x = 0x2a;
int X = 0X2A;
int b = 0b101010; // C23

```

The following variables are also initialized to the same value:

```
unsigned long long l1 = 18446744073709550592ull; // C99
unsigned long long l2 = 18'446'744'073'709'550'592llu; // C23
unsigned long long l3 = 1844'6744'0737'0955'0592uLL; // C23
unsigned long long l4 = 184467'440737'0'95505'92LLU; // C23

```

### The type of the integer constant

The type of the integer constant is the first type in which the value can fit, from the list of types which depends on which numeric base and which integer-suffix was used.

Types allowed for integer constants

| suffix | decimal bases | other bases |
| no suffix | int long int  unsigned long int (until C99)  long long int (since C99) | int unsigned int  long int  unsigned long int  long long int(since C99)  unsigned long long int(since C99) |
| `u` or `U` | unsigned int unsigned long int  unsigned long long int(since C99) | unsigned int unsigned long int  unsigned long long int(since C99) |
| `l` or `L` | long int unsigned long int(until C99)  long long int(since C99) | long int unsigned long int  long long int(since C99)  unsigned long long int(since C99) |
| both `l`/`L` and `u`/`U` | unsigned long int unsigned long long int(since C99) | unsigned long int unsigned long long int(since C99) |
| `ll` or `LL` | long long int(since C99) | long long int(since C99) unsigned long long int(since C99) |
| both `ll`/`LL` and `u`/`U` | unsigned long long int(since C99) | unsigned long long int(since C99) |
| `wb` or `WB` | _BitInt(N) where the width N is the smallest N greater than 1 which can accommodate the value and the sign bit(since C23) | _BitInt(N) where the width N is the smallest N greater than 1 which can accommodate the value and the sign bit(since C23) |
| both `wb`/`WB` and `u`/`U` | unsigned _BitInt(N) where the width N is the smallest N greater than 0 which can accommodate the value(since C23) | unsigned _BitInt(N) where the width N is the smallest N greater than 0 which can accommodate the value(since C23) |

If the value of the integer constant is too big to fit in any of the types allowed by suffix/base combination, it does not have suffixes `wb`, `WB`, `uwb`, or `UWB`(since C23) and the compiler supports extended integer types (such as __int128), the constant may be given the extended integer type; otherwise, the program is ill-formed.

### Notes

Letters in the integer constants are case-insensitive: `0xDeAdBaBeU` and `0XdeadBABEu` represent the same number (one exception is the long-long-suffix, which is either `ll` or `LL`, never `lL` or `Ll`)(since C99).

There are no negative integer constants. Expressions such as -1 apply the unary minus operator to the value represented by the constant.

|  |  |
| --- | --- |
| When used in a controlling expression of #if or #elif, all signed integer constants act as if they have type intmax_t and all unsigned integer constants act as if they have type uintmax_t. | (since C99) |

Integer constants may be used in integer constant expressions.

Due to maximal munch, hexadecimal integer constants ending in `e` and `E`, when followed by the operators `+` or `-`, must be separated from the operator with whitespace or parentheses in the source:

```
int x = 0xE+2;   // error
int y = 0xa+2;   // OK
int z = 0xE +2;  // OK
int q = (0xE)+2; // OK

```

Otherwise, a single invalid preprocessing number token is formed, which causes further analysis to fail.

### Example

Run this code

```
#include <inttypes.h>
#include <stdio.h>
 
int main(void)
{
    printf("123 = %d\n", 123);
    printf("0123 = %d\n", 0123);
    printf("0x123 = %d\n", 0x123);
    printf("12345678901234567890ull = %llu\n", 12345678901234567890ull);
    // the type is a 64-bit type (unsigned long long or possibly unsigned long)
    // even without a long suffix
    printf("12345678901234567890u = %"PRIu64"\n", 12345678901234567890u );
 
    // printf("%lld\n", -9223372036854775808); // Error:
        // the value 9223372036854775808 cannot fit in signed long long, which
        // is the biggest type allowed for unsuffixed decimal integer constant
 
    printf("%llu\n", -9223372036854775808ull );
    // unary minus applied to unsigned value subtracts it from 2^64,
    // this gives unsigned 9223372036854775808
 
    printf("%lld\n", -9223372036854775807ll - 1);
    // correct way to form signed value -9223372036854775808
}

```

Output:

```
123 = 123
0123 = 83
0x123 = 291
12345678901234567890ull = 12345678901234567890
12345678901234567890u = 12345678901234567890
9223372036854775808
-9223372036854775808

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.4.4.1 Integer constants (p: 57-60)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.4.4.1 Integer constants (p: 45-46)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.4.4.1 Integer constants (p: 62-64)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.4.4.1 Integer constants (p: 54-56)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.1.3.2 Integer constants

### See also

|  |  |
| --- | --- |
| C++ documentation for Integer literal | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/integer_constant&oldid=159816>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 September 2023, at 11:24.