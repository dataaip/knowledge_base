# Type-generic math

From cppreference.com
< c‎ | numeric
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
| ****Type-generic math**** (C99) | | | | |
| Bit manipulation (C23) | | | | |
| Checked integer arithmetic (C23) | | | | |

The header `<tgmath.h>` includes the headers <math.h> and <complex.h> and defines several type-generic macros that determine which real or, when applicable, complex function to call based on the types of the arguments.

For each macro, the parameters whose corresponding real type in the unsuffixed math.h function is double are known as **generic parameters** (for example, both parameters of pow are generic parameters, but only the first parameter of scalbn is a generic parameter).

When a `<tgmath.h>` macro is used the types of the arguments passed to the generic parameters determine which function is selected by the macro as described below. If the types of the arguments are not compatible with the parameter types of the selected function, the behavior is undefined (e.g. if a complex argument is passed into a real-only `<tgmath.h>`'s macro: float complex fc; ceil(fc); or double complex dc; double d; fmax(dc, d); are examples of undefined behavior).

Note: type-generic macros were implemented in implementation-defined manner in C99, but C11 keyword _Generic makes it possible to implement these macros in portable manner.

### Complex/real type-generic macros

For all functions that have both real and complex counterparts, a type-generic macro `XXX` exists, which calls either of:

- real function:

:   - float variant `XXXf`
    - double variant `XXX`
    - long double variant `XXXl`

- complex function:

:   - float variant `cXXXf`
    - double variant `cXXX`
    - long double variant `cXXXl`

An exception to the above rule is the `fabs` macro (see the table below).

The function to call is determined as follows:

- If any of the arguments for the generic parameters is imaginary, the behavior is specified on each function reference page individually (in particular, `sin`, `cos`, `tag`, `cosh`, `sinh`, `tanh`, `asin`, `atan`, `asinh`, and `atanh` call **real** functions, the return types of `sin`, `tan`, `sinh`, `tanh`, `asin`, `atan`, `asinh`, and `atanh` are imaginary, and the return types of `cos` and `cosh` are real).
- If any of the arguments for the generic parameters is complex, then the complex function is called, otherwise the real function is called.
- If any of the arguments for the generic parameters is long double, then the long double variant is called. Otherwise, if any of the parameters is double or integer, then the double variant is called. Otherwise, float variant is called.

The type-generic macros are as follows:

| Type-generic   macro | Real function   variants | | | Complex function   variants | | |
| --- | --- | --- | --- | --- | --- | --- |
|  | float | double | long double | float | double | long double |
| fabs | fabsf | fabs | fabsl | cabsf | cabs | cabsl |
| exp | expf | exp | expl | cexpf | cexp | cexpl |
| log | logf | log | logl | clogf | clog | clogl |
| pow | powf | pow | powl | cpowf | cpow | cpowl |
| sqrt | sqrtf | sqrt | sqrtl | csqrtf | csqrt | csqrtl |
| sin | sinf | sin | sinl | csinf | csin | csinl |
| cos | cosf | cos | cosl | ccosf | ccos | ccosl |
| tan | tanf | tan | tanl | ctanf | ctan | ctanl |
| asin | asinf | asin | asinl | casinf | casin | casinl |
| acos | acosf | acos | acosl | cacosf | cacos | cacosl |
| atan | atanf | atan | atanl | catanf | catan | catanl |
| sinh | sinhf | sinh | sinhl | csinhf | csinh | csinhl |
| cosh | coshf | cosh | coshl | ccoshf | ccosh | ccoshl |
| tanh | tanhf | tanh | tanhl | ctanhf | ctanh | ctanhl |
| asinh | asinhf | asinh | asinhl | casinhf | casinh | casinhl |
| acosh | acoshf | acosh | acoshl | cacoshf | cacosh | cacoshl |
| atanh | atanhf | atanh | atanhl | catanhf | catanh | catanhl |

### Real-only functions

For all functions that do not have complex counterparts, with the exception of `modf`, a type-generic macro `XXX` exists, which calls either of the variants of a real function:

- float variant `XXXf`
- double variant `XXX`
- long double variant `XXXl`

The function to call is determined as follows:

- If any of the arguments for the generic parameters is long double, then the long double variant is called. Otherwise, if any of the arguments for the generic parameters is double, then the double variant is called. Otherwise, float variant is called.

| Type-generic   macro | Real function   variants | | |
| --- | --- | --- | --- |
|  | float | double | long double |
| atan2 | atan2f | atan2 | atan2l |
| cbrt | cbrtf | cbrt | cbrtl |
| ceil | ceilf | ceil | ceill |
| copysign | copysignf | copysign | copysignl |
| erf | erff | erf | erfl |
| erfc | erfcf | erfc | erfcl |
| exp2 | exp2f | exp2 | exp2l |
| expm1 | expm1f | expm1 | expm1l |
| fdim | fdimf | fdim | fdiml |
| floor | floorf | floor | floorl |
| fma | fmaf | fma | fmal |
| fmax | fmaxf | fmax | fmaxl |
| fmin | fminf | fmin | fminl |
| fmod | fmodf | fmod | fmodl |
| frexp | frexpf | frexp | frexpl |
| hypot | hypotf | hypot | hypotl |
| ilogb | ilogbf | ilogb | ilogbl |
| ldexp | ldexpf | ldexp | ldexpl |
| lgamma | lgammaf | lgamma | lgammal |
| llrint | llrintf | llrint | llrintl |
| llround | llroundf | llround | llroundl |
| log10 | log10f | log10 | log10l |
| log1p | log1pf | log1p | log1pl |
| log2 | log2f | log2 | log2l |
| logb | logbf | logb | logbl |
| lrint | lrintf | lrint | lrintl |
| lround | lroundf | lround | lroundl |
| nearbyint | nearbyintf | nearbyint | nearbyintl |
| nextafter | nextafterf | nextafter | nextafterl |
| nexttoward | nexttowardf | nexttoward | nexttowardl |
| remainder | remainderf | remainder | remainderl |
| remquo | remquof | remquo | remquol |
| rint | rintf | rint | rintl |
| round | roundf | round | roundl |
| scalbln | scalblnf | scalbln | scalblnl |
| scalbn | scalbnf | scalbn | scalbnl |
| tgamma | tgammaf | tgamma | tgammal |
| trunc | truncf | trunc | truncl |

### Complex-only functions

For all complex number functions that do not have real counterparts, a type-generic macro `cXXX` exists, which calls either of the variants of a complex function:

- float complex variant `cXXXf`
- double complex variant `cXXX`
- long double complex variant `cXXXl`

The function to call is determined as follows:

- If any of the arguments for the generic parameters is real, complex, or imaginary, then the appropriate complex function is called.

| Type-generic   macro | Complex function   variants | | |
| --- | --- | --- | --- |
|  | float | double | long double |
| carg | cargf | carg | cargl |
| conj | conjf | conj | conjl |
| creal | crealf | creal | creall |
| cimag | cimagf | cimag | cimagl |
| cproj | cprojf | cproj | cprojl |

### Example

Run this code

```
#include <stdio.h>
#include <tgmath.h>
 
int main(void)
{
    int i = 2;
    printf("sqrt(2) = %f\n", sqrt(i)); // argument type is int, calls sqrt
 
    float f = 0.5;
    printf("sin(0.5f) = %f\n", sin(f));   // argument type is float, calls sinf
 
    float complex dc = 1 + 0.5*I;
    float complex z = sqrt(dc);      // argument type is float complex, calls csqrtf
    printf("sqrt(1 + 0.5i) = %f+%fi\n",
           creal(z),  // argument type is float complex, calls crealf
           cimag(z)); // argument type is float complex, calls cimagf
}

```

Output:

```
sqrt(2) = 1.414214
sin(0.5f) = 0.479426
sqrt(1 + 0.5i) = 1.029086+0.242934i

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.25 Type-generic math <tgmath.h> (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.25 Type-generic math <tgmath.h> (p: 272-273)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.25 Type-generic math <tgmath.h> (p: 373-375)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.22 Type-generic math <tgmath.h> (p: 335-337)

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/tgmath&oldid=178475>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 December 2024, at 16:58.