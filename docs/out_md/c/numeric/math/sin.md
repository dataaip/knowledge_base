# sin, sinf, sinl

From cppreference.com
< c‎ | numeric‎ | math
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

 Common mathematical functions

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Basic operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | abslabsllabsimaxabs(C99)(C99) | | | | | | fabs | | | | | | divldivlldivimaxdiv(C99)(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fmod | | | | | | remainder(C99) | | | | | | remquo(C99) | | | | | | fma(C99) | | | | | | fdim(C99) | | | | | | nannanfnanlnand**N**(C99)(C99)(C99)(C23) | | | | | | | Maximum/minimum operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fmax(C99) | | | | | | fmin(C99) | | | | | | fmaximum")(C23) | | | | | | fminimum")(C23) | | | | | | fmaximum_mag")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fmaximum_num")(C23) | | | | | | fminimum_mag")(C23) | | | | | | fminimum_num")(C23) | | | | | | fmaximum_mag_num")(C23) | | | | | | fminimum_mag_num")(C23) | | | | | | | Exponential functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | exp | | | | | | exp10")(C23) | | | | | | exp2(C99) | | | | | | expm1(C99) | | | | | | exp10m1")(C23) | | | | | | exp2m1")(C23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | log | | | | | | log10 | | | | | | log2(C99) | | | | | | log1plogp1(C99)(C23) | | | | | | log10p1")(C23) | | | | | | log2p1")(C23) | | | | | | | Power functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sqrt | | | | | | cbrt(C99) | | | | | | rootn")(C23) | | | | | | rsqrt")(C23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hypot(C99) | | | | | | compound")(C23) | | | | | | pow | | | | | | pown")(C23) | | | | | | powr")(C23) | | | | | | | Trigonometric and hyperbolic functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****sin**** | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | sinpi(C23) | | | | | | cospi(C23) | | | | | | tanpi")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | asinpi")(C23) | | | | | | acospi")(C23) | | | | | | atanpi")(C23) | | | | | | atan2pi")(C23) | | | | | | sinh | | | | | | cosh | | | | | | tanh | | | | | | asinh(C99) | | | | | | acosh(C99) | | | | | | atanh(C99) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Nearest integer floating-point | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ceil | | | | | | floor | | | | | | roundlroundllround(C99)(C99)(C99) | | | | | | roundeven(C23) | | | | | | trunc(C99) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | nearbyint(C99) | | | | | | rintlrintllrint(C99)(C99)(C99) | | | | | | fromfpfromfpxufromfpufromfpx")(C23)(C23)(C23)(C23) | | | | | | | Floating-point manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ldexp | | | | | | frexp | | | | | | scalbnscalbln(C99)(C99) | | | | | | ilogbllogb(C99)(C23) | | | | | | logb(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | modf | | | | | | nextafternexttoward(C99)(C99) | | | | | | nextupnextdown")(C23)(C23) | | | | | | copysign(C99) | | | | | | canonicalize")(C23) | | | | | | | Narrowing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fadd")(C23) | | | | | | fsub")(C23) | | | | | | fmul")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fdiv")(C23) | | | | | | ffma")(C23) | | | | | | fsqrt")(C23) | | | | | | | Quantum and quantum exponent | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | quantized**N**")(C23) | | | | | | quantumd**N**")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | samequantumd**N**")(C23) | | | | | | llquantexpd**N**")(C23) | | | | | | | Decimal re-encoding functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | encodedecd**N**")(C23) | | | | | | decodedecd**N**")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | encodebind**N**")(C23) | | | | | | decodebind**N**")(C23) | | | | | | | Total order and payload functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | totalorder")(C23) | | | | | | getpayload")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setpayload")(C23) | | | | | | setpayloadsig")(C23) | | | | | | | Classification | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fpclassify(C99) | | | | | | iscanonical")(C23) | | | | | | isfinite(C99) | | | | | | isinf(C99) | | | | | | isnan(C99) | | | | | | isnormal(C99) | | | | | | signbit(C99) | | | | | | issubnormal")(C23) | | | | | | iszero")(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isgreater(C99) | | | | | | isgreaterequal(C99) | | | | | | isless(C99) | | | | | | islessequal(C99) | | | | | | islessgreater(C99) | | | | | | isunordered(C99) | | | | | | issignaling")(C23) | | | | | | iseqsig")(C23) | | | | | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Error and gamma functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | erf(C99) | | | | | | erfc(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lgamma(C99) | | | | | | tgamma(C99) | | | | | | | Types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | div_tldiv_tlldiv_timaxdiv_t(C99)(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | float_tdouble_t(C99)(C99) | | | | | | _Decimal32_t_Decimal64_t")(C23)(C23) | | | | | | | Macro constants | | | | | | Special floating-point values | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | HUGE_VALHUGE_VALFHUGE_VALLHUGE_VALD**N**(C99)(C99)(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | INFINITYDEC_INFINITY(C99)(C23) | | | | | | NANDEC_NAN(C99)(C23) | | | | | | | Arguments and return values | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | FP_ILOGB0FP_ILOGBNAN(C99)(C99) | | | | | | FP_NORMALFP_SUBNORMALFP_ZEROFP_INFINITEFP_NAN(C99)(C99)(C99)(C99)(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | FP_LLOGB0FP_LLOGBNAN(C23)(C23) | | | | | | FP_INT_UPWARDFP_INT_DOWNWARDFP_INT_TOWARDZEROFP_INT_TONEARESTFROMZEROFP_INT_TONEAREST")(C23)(C23)(C23)(C23)(C23) | | | | | | | Error handling | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MATH_ERRNOMATH_ERRNOEXCEPT(C99)(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | math_errhandling(C99) | | | | | |  | | | | | | | Fast operation indicators | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | FP_FAST_FMAFFP_FAST_FMA(C99)(C99) | | | | | | FP_FAST_FADDFP_FAST_FADDLFP_FAST_DADDLFP_FAST_D**M**ADDD**N**")(C23)(C23)(C23)(C23) | | | | | | FP_FAST_FMULFP_FAST_FMULLFP_FAST_DMULLFP_FAST_D**M**MULD**N**")(C23)(C23)(C23)(C23) | | | | | | FP_FAST_FFMAFP_FAST_FFMALFP_FAST_DFMALFP_FAST_D**M**FMAD**N**")(C23)(C23)(C23)(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | FP_FAST_FMALFP_FAST_FMAD**N**(C99)(C23) | | | | | | FP_FAST_FSUBFP_FAST_FSUBLFP_FAST_DSUBLFP_FAST_D**M**SUBD**N**")(C23)(C23)(C23)(C23) | | | | | | FP_FAST_FDIVFP_FAST_FDIVLFP_FAST_DDIVLFP_FAST_D**M**DIVD**N**")(C23)(C23)(C23)(C23) | | | | | | FP_FAST_FSQRTFP_FAST_FSQRTLFP_FAST_DSQRTLFP_FAST_D**M**SQRTD**N**")(C23)(C23)(C23)(C23) | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<math.h>` |  |  |
| float       sinf( float arg ); | (1) | (since C99) |
| double      sin( double arg ); | (2) |  |
| long double sinl( long double arg ); | (3) | (since C99) |
| _Decimal32  sind32( _Decimal32 arg ); | (4) | (since C23) |
| _Decimal64  sind64( _Decimal64 arg ); | (5) | (since C23) |
| _Decimal128 sind128( _Decimal128 arg ); | (6) | (since C23) |
| Defined in header `<tgmath.h>` |  |  |
| #define sin( arg ) | (7) | (since C99) |
|  |  |  |

1-3) Computes the sine of arg (measured in radians).7) Type-generic macro: If the argument has type long double, (3) (`sinl`) is called. Otherwise, if the argument has integer type or the type double, (2) (`sin`) is called. Otherwise, (1) (`sinf`) is called. If the argument is complex, then the macro invokes the corresponding complex function (csinl, csin, csinf).

|  |  |
| --- | --- |
| The functions (4-6) are declared if and only if the implementation predefines `__STDC_IEC_60559_DFP__` (i.e. the implementation supports decimal floating-point numbers). | (since C23) |

### Parameters

|  |  |  |
| --- | --- | --- |
| arg | - | floating-point value representing an angle in radians |

### Return value

If no errors occur, the sine of arg (sin(arg)) in the range [-1 ; +1], is returned.

|  |  |
| --- | --- |
| The result may have little or no significance if the magnitude of arg is large. | (until C99) |

If a domain error occurs, an implementation-defined value is returned (NaN where supported).

If a range error occurs due to underflow, the correct result (after rounding) is returned.

### Error handling

Errors are reported as specified in `math_errhandling`.

If the implementation supports IEEE floating-point arithmetic (IEC 60559):

- if the argument is ±0, it is returned unmodified;
- if the argument is ±∞, NaN is returned and FE_INVALID is raised;
- if the argument is NaN, NaN is returned.

### Notes

The case where the argument is infinite is not specified to be a domain error in C, but it is defined as a domain error in POSIX.

POSIX also specifies that in case of underflow, arg is returned unmodified, and if that is not supported, an implementation-defined value no greater than DBL_MIN, FLT_MIN, and LDBL_MIN is returned.

### Example

Run this code

```
#include <errno.h>
#include <fenv.h>
#include <math.h>
#include <stdio.h>
 
#ifndef __GNUC__
#pragma STDC FENV_ACCESS ON
#endif
 
int main(void)
{
    const double pi = acos(-1);
 
    // typical usage
    printf("sin(pi/6) = %f\n", sin(pi / 6));
    printf("sin(pi/2) = %f\n", sin(pi / 2));
    printf("sin(-3*pi/4) = %f\n", sin(-3 * pi / 4));
 
    // special values
    printf("sin(+0) = %f\n", sin(0.0));
    printf("sin(-0) = %f\n", sin(-0.0));
 
    // error handling
    feclearexcept(FE_ALL_EXCEPT);
    printf("sin(INFINITY) = %f\n", sin(INFINITY));
    if (fetestexcept(FE_INVALID))
        puts("    FE_INVALID raised");
}

```

Possible output:

```
sin(pi/6) = 0.500000
sin(pi/2) = 1.000000
sin(-3*pi/4) = -0.707107
sin(+0) = 0.000000
sin(-0) = -0.000000
sin(INFINITY) = -nan
    FE_INVALID raised

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.12.4.6 The sin functions (p: TBD)

:   - 7.27 Type-generic math <tgmath.h> (p: TBD)

:   - F.10.1.6 The sin functions (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.12.4.6 The sin functions (p: 175)

:   - 7.25 Type-generic math <tgmath.h> (p: 272-273)

:   - F.10.1.6 The sin functions (p: 378)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.12.4.6 The sin functions (p: 239-240)

:   - 7.25 Type-generic math <tgmath.h> (p: 373-375)

:   - F.10.1.6 The sin functions (p: 519)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.12.4.6 The sin functions (p: 220)

:   - 7.22 Type-generic math <tgmath.h> (p: 335-337)

:   - F.9.1.6 The sin functions (p: 456)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.5.2.6 The sin function

### See also

|  |  |
| --- | --- |
| coscosfcosl(C99)(C99) | computes cosine (\({\small\cos{x} }\)cos(x))   (function) |
| tantanftanl(C99)(C99) | computes tangent (\({\small\tan{x} }\)tan(x))   (function) |
| asinasinfasinl(C99)(C99) | computes arc sine (\({\small\arcsin{x} }\)arcsin(x))   (function) |
| csincsinfcsinl(C99)(C99)(C99) | computes the complex sine   (function) |
| C++ documentation for sin | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/math/sin&oldid=150029>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 April 2023, at 04:25.