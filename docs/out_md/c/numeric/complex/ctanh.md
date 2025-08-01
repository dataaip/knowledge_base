# ctanhf, ctanh, ctanhl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccos(C99) | | | | | | csin(C99) | | | | | | ctan(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacos(C99) | | | | | | casin(C99) | | | | | | catan(C99) | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ccosh(C99) | | | | | | csinh(C99) | | | | | | ****ctanh****(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cacosh(C99) | | | | | | casinh(C99) | | | | | | catanh(C99) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex.h>` |  |  |
| float complex       ctanhf( float complex z ); | (1) | (since C99) |
| double complex      ctanh( double complex z ); | (2) | (since C99) |
| long double complex ctanhl( long double complex z ); | (3) | (since C99) |
| Defined in header `<tgmath.h>` |  |  |
| #define tanh( z ) | (4) | (since C99) |
|  |  |  |

1-3) Computes the complex hyperbolic tangent of `z`.4) Type-generic macro: If `z` has type long double complex, `ctanhl` is called. if `z` has type double complex, `ctanh` is called, if `z` has type float complex, `ctanhf` is called. If `z` is real or integer, then the macro invokes the corresponding real function (tanhf, tanh, tanhl). If `z` is imaginary, then the macro invokes the corresponding real version of the function tan, implementing the formula tanh(iy) = i tan(y), and the return type is imaginary.

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex argument |

### Return value

If no errors occur, complex hyperbolic tangent of `z` is returned

### Error handling and special values

Errors are reported consistent with math_errhandling

If the implementation supports IEEE floating-point arithmetic,

- ctanh(conj(z)) == conj(ctanh(z))
- ctanh(-z) == -ctanh(z)
- If `z` is `+0+0i`, the result is `+0+0i`
- If `z` is `x+∞i` (for any[[1]](ctanh.html#cite_note-1) finite x), the result is `NaN+NaNi` and FE_INVALID is raised
- If `z` is `x+NaN` (for any[[2]](ctanh.html#cite_note-2) finite x), the result is `NaN+NaNi` and FE_INVALID may be raised
- If `z` is `+∞+yi` (for any finite positive y), the result is `1+0i`
- If `z` is `+∞+∞i`, the result is `1±0i` (the sign of the imaginary part is unspecified)
- If `z` is `+∞+NaNi`, the result is `1±0i` (the sign of the imaginary part is unspecified)
- If `z` is `NaN+0i`, the result is `NaN+0i`
- If `z` is `NaN+yi` (for any non-zero y), the result is `NaN+NaNi` and FE_INVALID may be raised
- If `z` is `NaN+NaNi`, the result is `NaN+NaNi`

1. ↑ per DR471, this only holds for non-zero x. If `z` is `0+∞i`, the result should be `0+NaNi`
2. ↑ per DR471, this only holds for non-zero x. If `z` is `0+NaNi`, the result should be `0+NaNi`

### Notes

Mathematical definition of hyperbolic tangent is tanh z = 

|  |
| --- |
| ez -e-z |
| ez +e-z |

Hyperbolic tangent is an analytical function on the complex plane and has no branch cuts. It is periodic with respect to the imaginary component, with period πi, and has poles of the first order along the imaginary line, at coordinates (0, π(1/2 + n)). However no common floating-point representation is able to represent π/2 exactly, thus there is no value of the argument for which a pole error occurs.

### Example

Run this code

```
#include <stdio.h>
#include <math.h>
#include <complex.h>
 
int main(void)
{
    double complex z = ctanh(1);  // behaves like real tanh along the real line
    printf("tanh(1+0i) = %f%+fi (tanh(1)=%f)\n", creal(z), cimag(z), tanh(1));
 
    double complex z2 = ctanh(I); // behaves like tangent along the imaginary line
    printf("tanh(0+1i) = %f%+fi ( tan(1)=%f)\n", creal(z2), cimag(z2), tan(1));
}

```

Output:

```
tanh(1+0i) = 0.761594+0.000000i (tanh(1)=0.761594)
tanh(0+1i) = 0.000000+1.557408i ( tan(1)=1.557408)

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.3.6.6 The ctanh functions (p: 194)

:   - 7.25 Type-generic math <tgmath.h> (p: 373-375)

:   - G.6.2.6 The ctanh functions (p: 542)

:   - G.7 Type-generic math <tgmath.h> (p: 545)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.3.6.6 The ctanh functions (p: 176)

:   - 7.22 Type-generic math <tgmath.h> (p: 335-337)

:   - G.6.2.6 The ctanh functions (p: 477)

:   - G.7 Type-generic math <tgmath.h> (p: 480)

### See also

|  |  |
| --- | --- |
| csinhcsinhfcsinhl(C99)(C99)(C99) | computes the complex hyperbolic sine   (function) |
| ccoshccoshfccoshl(C99)(C99)(C99) | computes the complex hyperbolic cosine   (function) |
| catanhcatanhfcatanhl(C99)(C99)(C99) | computes the complex arc hyperbolic tangent   (function) |
| tanhtanhftanhl(C99)(C99) | computes hyperbolic tangent (\({\small\tanh{x} }\)tanh(x))   (function) |
| C++ documentation for tanh | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/complex/ctanh&oldid=96281>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 October 2017, at 05:08.