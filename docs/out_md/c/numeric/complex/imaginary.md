# imaginary

From cppreference.com
< c‎ | numeric‎ | complex
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

 Numerics

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Common mathematical functions | | | | |
| Floating-point environment (C99) | | | | |
| Pseudo-random number generation | | | | |
| Complex number arithmetic (C99) | | | | |
| Type-generic math (C99) | | | | |
| Bit manipulation (C23) | | | | |
| Checked integer arithmetic (C23) | | | | |

 Complex number arithmetic

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Types and the imaginary constant | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | complex(C99) | | | | | | _Complex_I(C99) | | | | | | CMPLX(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****imaginary****(C99) | | | | | | _Imaginary_I(C99) | | | | | | I(C99) | | | | | |
| Manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cimag(C99) | | | | | | creal(C99) | | | | | | carg(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cabs(C99) | | | | | | conj(C99) | | | | | | cproj(C99) | | | | | |
| Power and exponential functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cexp(C99) | | | | | | clog(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cpow(C99) | | | | | | csqrt(C99) | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccos(C99) | | | | | | csin(C99) | | | | | | ctan(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacos(C99) | | | | | | casin(C99) | | | | | | catan(C99) | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccosh(C99) | | | | | | csinh(C99) | | | | | | ctanh(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacosh(C99) | | | | | | casinh(C99) | | | | | | catanh(C99) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex.h>` |  |  |
| #define imaginary _Imaginary |  | (since C99) |
|  |  |  |

This macro expands to the keyword _Imaginary.

This is a convenience macro that makes it possible to use float imaginary, double imaginary, and long double imaginary as an alternative way to write the three pure imaginary C types float _Imaginary, double _Imaginary, and long double _Imaginary

As with any pure imaginary number support in C, this macro is only defined if the imaginary numbers are supported.

|  |  |
| --- | --- |
| A compiler that defines __STDC_IEC_559_COMPLEX__ is not required to support imaginary numbers. POSIX recommends checking if the macro _Imaginary_I is defined to identify imaginary number support. | (since C99) (until C11) |
| Imaginary numbers are supported if __STDC_IEC_559_COMPLEX__ is defined. | (since C11) |

### Notes

Programs are allowed to undefine and perhaps redefine the imaginary macro.

To date, only Oracle C compiler is known to have implemented imaginary types.

### Example

Run this code

```
#include <stdio.h>
#include <complex.h>
 
int main(void)
{
    double imaginary i = -2.0*I; // pure imaginary
    double f = 1.0; // pure real
    double complex z = f + i; // complex number
    printf("z = %.1f%+.1fi\n", creal(z), cimag(z));
}

```

Output:

```
z = 1.0-2.0i

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.3.1/5 imaginary (p: 136)

:   - G.6/1 imaginary (p: 391-392)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.3.1/5 imaginary (p: 188)

:   - G.6/1 imaginary (p: 537)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.3.1/3 imaginary (p: 170)

:   - G.6/1 imaginary (p: 472)

### See also

|  |  |
| --- | --- |
| complex(C99) | complex type macro   (keyword macro) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/complex/imaginary&oldid=168850>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 January 2024, at 20:53.