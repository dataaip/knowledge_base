# ctanf, ctan, ctanl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | cexp(C99) | | | | | | clog(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cpow(C99) | | | | | | csqrt(C99) | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccos(C99) | | | | | | csin(C99) | | | | | | ****ctan****(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacos(C99) | | | | | | casin(C99) | | | | | | catan(C99) | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccosh(C99) | | | | | | csinh(C99) | | | | | | ctanh(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacosh(C99) | | | | | | casinh(C99) | | | | | | catanh(C99) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex.h>` |  |  |
| float complex       ctanf( float complex z ); | (1) | (since C99) |
| double complex      ctan( double complex z ); | (2) | (since C99) |
| long double complex ctanl( long double complex z ); | (3) | (since C99) |
| Defined in header `<tgmath.h>` |  |  |
| #define tan( z ) | (4) | (since C99) |
|  |  |  |

1-3) Computes the complex tangent of `z`.4) Type-generic macro: If `z` has type long double complex, `ctanl` is called. if `z` has type double complex, `ctan` is called, if `z` has type float complex, `ctanf` is called. If `z` is real or integer, then the macro invokes the corresponding real function (tanf, tan, tanl). If `z` is imaginary, then the macro invokes the corresponding real version of the function tanh, implementing the formula tan(iy) = i tanh(y), and the return type is imaginary.

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex argument |

### Return value

If no errors occur, the complex tangent of `z` is returned.

Errors and special cases are handled as if the operation is implemented by -i \* ctanh(i\*z), where `i` is the imaginary unit.

### Notes

Tangent is an analytical function on the complex plain and has no branch cuts. It is periodic with respect to the real component, with period πi, and has poles of the first order along the real line, at coordinates (π(1/2 + n), 0). However no common floating-point representation is able to represent π/2 exactly, thus there is no value of the argument for which a pole error occurs.

Mathematical definition of the tangent is tan z = 

|  |
| --- |
| i(e-iz -eiz ) |
| e-iz +eiz |

### Example

Run this code

```
#include <stdio.h>
#include <math.h>
#include <complex.h>
 
int main(void)
{
    double complex z = ctan(1);  // behaves like real tangent along the real line
    printf("tan(1+0i) = %f%+fi ( tan(1)=%f)\n", creal(z), cimag(z), tan(1));
 
    double complex z2 = ctan(I); // behaves like tanh along the imaginary line 
    printf("tan(0+1i) = %f%+fi (tanh(1)=%f)\n", creal(z2), cimag(z2), tanh(1));
}

```

Output:

```
tan(1+0i) = 1.557408+0.000000i ( tan(1)=1.557408)
tan(0+1i) = 0.000000+0.761594i (tanh(1)=0.761594)

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.3.5.6 The ctan functions (p: 192)

:   - 7.25 Type-generic complex <tgmath.h> (p: 373-375)

:   - G.7 Type-generic math <tgmath.h> (p: 545)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.3.5.6 The ctan functions (p: 174)

:   - 7.22 Type-generic complex <tgcomplex.h> (p: 335-337)

:   - G.7 Type-generic math <tgmath.h> (p: 480)

### See also

|  |  |
| --- | --- |
| ctanhctanhfctanhl(C99)(C99)(C99) | computes the complex hyperbolic tangent   (function) |
| csincsinfcsinl(C99)(C99)(C99) | computes the complex sine   (function) |
| ccosccosfccosl(C99)(C99)(C99) | computes the complex cosine   (function) |
| catancatanfcatanl(C99)(C99)(C99) | computes the complex arc tangent   (function) |
| tantanftanl(C99)(C99) | computes tangent (\({\small\tan{x} }\)tan(x))   (function) |
| C++ documentation for tan | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/complex/ctan&oldid=77468>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 March 2015, at 06:09.