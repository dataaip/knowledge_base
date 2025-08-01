# cimagf, cimag, cimagl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****cimag****(C99) | | | | | | creal(C99) | | | | | | carg(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cabs(C99) | | | | | | conj(C99) | | | | | | cproj(C99) | | | | | |
| Power and exponential functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cexp(C99) | | | | | | clog(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cpow(C99) | | | | | | csqrt(C99) | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccos(C99) | | | | | | csin(C99) | | | | | | ctan(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacos(C99) | | | | | | casin(C99) | | | | | | catan(C99) | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccosh(C99) | | | | | | csinh(C99) | | | | | | ctanh(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacosh(C99) | | | | | | casinh(C99) | | | | | | catanh(C99) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex.h>` |  |  |
| float       cimagf( float complex z ); | (1) | (since C99) |
| double      cimag( double complex z ); | (2) | (since C99) |
| long double cimagl( long double complex z ); | (3) | (since C99) |
| Defined in header `<tgmath.h>` |  |  |
| #define cimag( z ) | (4) | (since C99) |
|  |  |  |

1-3) Returns the imaginary part of `z`.4) Type-generic macro: if `z` has type long double complex, long double imaginary, or long double, `cimagl` is called. If `z` has type float complex, float imaginary, or float, `cimagf` is called. If `z` has type double complex, double imaginary, double, or any integer type, `cimag` is called.

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex argument |

### Return value

The imaginary part of `z`.

This function is fully specified for all possible inputs and is not subject to any errors described in math_errhandling

### Notes

For any complex variable `z`, z == creal(z) + I\*cimag(z).

### Example

Run this code

```
#include <stdio.h>
#include <complex.h>
 
int main(void)
{    
    double complex z = 1.0 + 2.0*I;
    printf("%f%+fi\n", creal(z), cimag(z));
}

```

Output:

```
1.000000+2.000000i

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.3.9.2 The cimag functions (p: 197)

:   - 7.25 Type-generic math <tgmath.h> (p: 373-375)

:   - G.7 Type-generic math <tgmath.h> (p: 545)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.3.9.2 The cimag functions (p: 178-179)

:   - 7.22 Type-generic math <tgmath.h> (p: 335-337)

:   - G.7 Type-generic math <tgmath.h> (p: 480)

### See also

|  |  |
| --- | --- |
| crealcrealfcreall(C99)(C99)(C99) | computes the real part of a complex number   (function) |
| C++ documentation for imag | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/complex/cimag&oldid=77458>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 March 2015, at 05:44.