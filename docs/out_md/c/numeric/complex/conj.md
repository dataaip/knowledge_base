# conjf, conj, conjl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cimag(C99) | | | | | | creal(C99) | | | | | | carg(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cabs(C99) | | | | | | ****conj****(C99) | | | | | | cproj(C99) | | | | | |
| Power and exponential functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cexp(C99) | | | | | | clog(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cpow(C99) | | | | | | csqrt(C99) | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccos(C99) | | | | | | csin(C99) | | | | | | ctan(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacos(C99) | | | | | | casin(C99) | | | | | | catan(C99) | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccosh(C99) | | | | | | csinh(C99) | | | | | | ctanh(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacosh(C99) | | | | | | casinh(C99) | | | | | | catanh(C99) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex.h>` |  |  |
| float complex       conjf( float complex z ); | (1) | (since C99) |
| double complex      conj( double complex z ); | (2) | (since C99) |
| long double complex conjl( long double complex z ); | (3) | (since C99) |
| Defined in header `<tgmath.h>` |  |  |
| #define conj( z ) | (4) | (since C99) |
|  |  |  |

1-3) Computes the complex conjugate of `z` by reversing the sign of the imaginary part.4) Type-generic macro: if `z` has type long double complex, long double imaginary, or long double, `conjl` is called. If `z` has type float complex, float imaginary, or float, `conjf` is called. If `z` has type double complex, double imaginary, double, or any integer type, `conj` is called.

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex argument |

### Return value

The complex conjugate of `z`.

### Notes

On C99 implementations that do not implement I as _Imaginary_I, `conj` may be used to obtain complex numbers with negative zero imaginary part. In C11, the macro CMPLX is used for that purpose.

### Example

Run this code

```
#include <stdio.h>
#include <complex.h>
 
int main(void)
{
    double complex z = 1.0 + 2.0*I;
    double complex z2 = conj(z);
    printf("The conjugate of %.1f%+.1fi is %.1f%+.1fi\n",
            creal(z), cimag(z), creal(z2), cimag(z2));
 
    printf("Their product is %.1f%+.1fi\n", creal(z*z2), cimag(z*z2));
}

```

Output:

```
The conjugate of 1.0+2.0i is 1.0-2.0i
Their product is 5.0+0.0i

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.3.9.4 The conj functions (p: 198)

:   - 7.25 Type-generic math <tgmath.h> (p: 373-375)

:   - G.7 Type-generic math <tgmath.h> (p: 545)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.3.9.3 The conj functions (p: 179)

:   - 7.22 Type-generic math <tgmath.h> (p: 335-337)

:   - G.7 Type-generic math <tgmath.h> (p: 480)

### See also

|  |  |
| --- | --- |
| C++ documentation for conj | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/complex/conj&oldid=77461>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 March 2015, at 05:52.