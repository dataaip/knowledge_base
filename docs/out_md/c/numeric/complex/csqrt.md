# csqrtf, csqrt, csqrtl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | complex(C99) | | | | | | _Complex_I(C99) | | | | | | CMPLX(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | imaginary(C99) | | | | | | _Imaginary_I(C99) | | | | | | I(C99) | | | | | |
| Manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cimag(C99) | | | | | | creal(C99) | | | | | | carg(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cabs(C99) | | | | | | conj(C99) | | | | | | cproj(C99) | | | | | |
| Power and exponential functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cexp(C99) | | | | | | clog(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cpow(C99) | | | | | | ****csqrt****(C99) | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccos(C99) | | | | | | csin(C99) | | | | | | ctan(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacos(C99) | | | | | | casin(C99) | | | | | | catan(C99) | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccosh(C99) | | | | | | csinh(C99) | | | | | | ctanh(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacosh(C99) | | | | | | casinh(C99) | | | | | | catanh(C99) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex.h>` |  |  |
| float complex       csqrtf( float complex z ); | (1) | (since C99) |
| double complex      csqrt( double complex z ); | (2) | (since C99) |
| long double complex csqrtl( long double complex z ); | (3) | (since C99) |
| Defined in header `<tgmath.h>` |  |  |
| #define sqrt( z ) | (4) | (since C99) |
|  |  |  |

1-3) Computes the complex square root of `z` with branch cut along the negative real axis.4) Type-generic macro: If `z` has type long double complex, `csqrtl` is called. if `z` has type double complex, `csqrt` is called, if `z` has type float complex, `csqrtf` is called. If `z` is real or integer, then the macro invokes the corresponding real function (sqrtf, sqrt, sqrtl). If `z` is imaginary, the corresponding complex number version is called.

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex argument |

### Return value

If no errors occur, returns the square root of `z`, in the range of the right half-plane, including the imaginary axis (0; +∞) along the real axis and (−∞; +∞) along the imaginary axis.)

### Error handling and special values

Errors are reported consistent with [math_errhandling

If the implementation supports IEEE floating-point arithmetic,

- The function is continuous onto the branch cut taking into account the sign of imaginary part
- csqrt(conj(z)) == conj(csqrt(z))
- If `z` is `±0+0i`, the result is `+0+0i`
- If `z` is `x+∞i`, the result is `+∞+∞i` even if x is NaN
- If `z` is `x+NaNi`, the result is `NaN+NaNi` (unless x is ±∞) and FE_INVALID may be raised
- If `z` is `-∞+yi`, the result is `+0+∞i` for finite positive y
- If `z` is `+∞+yi`, the result is `+∞+0i)` for finite positive y
- If `z` is `-∞+NaNi`, the result is `NaN±∞i` (sign of imaginary part unspecified)
- If `z` is `+∞+NaNi`, the result is `+∞+NaNi`
- If `z` is `NaN+yi`, the result is `NaN+NaNi` and FE_INVALID may be raised
- If `z` is `NaN+NaNi`, the result is `NaN+NaNi`

### Example

Run this code

```
#include <stdio.h>
#include <complex.h>
 
int main(void)
{
    double complex z1 = csqrt(-4);
    printf("Square root of -4 is %.1f%+.1fi\n", creal(z1), cimag(z1));
 
    double complex z2 = csqrt(conj(-4)); // or, in C11, CMPLX(-4, -0.0)
    printf("Square root of -4-0i, the other side of the cut, is "
           "%.1f%+.1fi\n", creal(z2), cimag(z2));
}

```

Output:

```
Square root of -4 is 0.0+2.0i
Square root of -4-0i, the other side of the cut, is 0.0-2.0i

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.3.8.3 The csqrt functions (p: 196)

:   - 7.25 Type-generic math <tgmath.h> (p: 373-375)

:   - G.6.4.2 The csqrt functions (p: 544)

:   - G.7 Type-generic math <tgmath.h> (p: 545)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.3.8.3 The csqrt functions (p: 178)

:   - 7.22 Type-generic math <tgmath.h> (p: 335-337)

:   - G.6.4.2 The csqrt functions (p: 479)

:   - G.7 Type-generic math <tgmath.h> (p: 480)

### See also

|  |  |
| --- | --- |
| cpowcpowfcpowl(C99)(C99)(C99) | computes the complex power function   (function) |
| sqrtsqrtfsqrtl(C99)(C99) | computes square root (\(\small{\sqrt{x} }\)√x)   (function) |
| C++ documentation for sqrt | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/complex/csqrt&oldid=96381>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 October 2017, at 08:10.