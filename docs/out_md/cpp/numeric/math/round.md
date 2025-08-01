# std::round, std::roundf, std::roundl, std::lround, std::lroundf, std::lroundl, std::llround, std::llroundf

From cppreference.com
< cpp‎ | numeric‎ | math
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Freestanding and hosted | | | | |
| Language | | | | |
| Standard library | | | | |
| Standard library headers | | | | |
| Named requirements | | | | |
| Feature test macros (C++20) | | | | |
| Language support library | | | | |
| Concepts library (C++20) | | | | |
| Diagnostics library | | | | |
| Memory management library | | | | |
| Metaprogramming library (C++11) | | | | |
| General utilities library | | | | |
| Containers library | | | | |
| Iterators library | | | | |
| Ranges library (C++20) | | | | |
| Algorithms library | | | | |
| Strings library | | | | |
| Text processing library | | | | |
| Numerics library | | | | |
| Date and time library | | | | |
| Input/output library | | | | |
| Filesystem library (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

Numerics library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Common mathematical functions | | | | |
| Mathematical special functions (C++17) | | | | |
| Mathematical constants (C++20) | | | | |
| Basic linear algebra algorithms (C++26) | | | | |
| Data-parallel types (SIMD) (C++26) | | | | |
| Floating-point environment (C++11) | | | | |
| Complex numbers | | | | |
| Numeric array (`valarray`) | | | | |
| Pseudo-random number generation | | | | |
| Bit manipulation (C++20) | | | | |
| Factor operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | gcd(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lcm(C++17) | | | | | |
| Interpolations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | midpoint(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lerp(C++20) | | | | | |
| Saturation arithmetic | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | add_sat(C++26) | | | | | | sub_sat(C++26) | | | | | | saturate_cast(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mul_sat(C++26) | | | | | | div_sat(C++26) | | | | | |  | | | | | |
| Generic numeric operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | ranges::iota(C++23) | | | | | | accumulate | | | | | | inner_product | | | | | | adjacent_difference | | | | | | partial_sum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |

Common mathematical functions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Basic operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abs(int)labsllabsimaxabs(C++11) | | | | | | abs(float)fabs | | | | | | divldivlldivimaxdiv(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fmod | | | | | | remainder(C++11) | | | | | | remquo(C++11) | | | | | | fma(C++11) | | | | | | fmax(C++11) | | | | | | fmin(C++11) | | | | | | fdim(C++11) | | | | | | nannanfnanl(C++11)(C++11)(C++11) | | | | | |
| Exponential functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | exp | | | | | | exp2(C++11) | | | | | | expm1(C++11) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | log | | | | | | log10 | | | | | | log1p(C++11) | | | | | | log2(C++11) | | | | | |
| Power functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | sqrt | | | | | | cbrt(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hypot(C++11) | | | | | | pow | | | | | |
| Trigonometric and  hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | sin | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sinh | | | | | | cosh | | | | | | tanh | | | | | | asinh(C++11) | | | | | | acosh(C++11) | | | | | | atanh(C++11) | | | | | |  | | | | | |
| Error and gamma functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | erf(C++11) | | | | | | erfc(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lgamma(C++11) | | | | | | tgamma(C++11) | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Nearest integer floating point operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ceil | | | | | | floor | | | | | | ****roundlroundllround****(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | trunc(C++11) | | | | | | nearbyint(C++11) | | | | | | rintlrintllrint(C++11)(C++11)(C++11) | | | | | |
| Floating point manipulation functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ldexp | | | | | | scalbnscalbln(C++11)(C++11) | | | | | | ilogb(C++11) | | | | | | logb(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | frexp | | | | | | modf | | | | | | nextafternexttoward(C++11)(C++11) | | | | | | copysign(C++11) | | | | | |
| Classification and comparison | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | fpclassify(C++11) | | | | | | isfinite(C++11) | | | | | | isinf(C++11) | | | | | | isnan(C++11) | | | | | | isnormal(C++11) | | | | | | signbit(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isgreater(C++11) | | | | | | isgreaterequal(C++11) | | | | | | isless(C++11) | | | | | | islessequal(C++11) | | | | | | islessgreater(C++11) | | | | | | isunordered(C++11) | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | div_t | | | | | | ldiv_t | | | | | | lldiv_t(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | imaxdiv_t(C++11) | | | | | | float_t(C++11) | | | | | | double_t(C++11) | | | | | |
| Macro constants | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | HUGE_VALFHUGE_VALHUGE_VALL(C++11)(C++11) | | | | | | math_errhandlingMATH_ERRNOMATH_ERREXCEPT(C++11) | | | | | | INFINITY(C++11) | | | | | | NAN(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Classification | | | | | | FP_NORMALFP_SUBNORMALFP_ZEROFP_INFINITEFP_NAN(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | |  | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cmath>` |  |  |
| Rounding to floating-point types |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| float       round ( float num );  double      round ( double num ); long double round ( long double num ); |  | (since C++11)  (until C++23) |
| constexpr /\* floating-point-type \*/              round ( /\* floating-point-type \*/ num ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| float       roundf( float num ); | (2) | (since C++11)  (constexpr since C++23) |
| long double roundl( long double num ); | (3) | (since C++11)  (constexpr since C++23) |
| Rounding to long |  |  |
|  |  |  |
| --- | --- | --- |
|  | (4) |  |
| long lround ( float num );  long lround ( double num ); long lround ( long double num ); |  | (since C++11)  (until C++23) |
| constexpr long lround( /\* floating-point-type \*/ num ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| long lroundf( float num ); | (5) | (since C++11)  (constexpr since C++23) |
| long lroundl( long double num ); | (6) | (since C++11)  (constexpr since C++23) |
| Rounding to long long |  |  |
|  |  |  |
| --- | --- | --- |
|  | (7) |  |
| long long llround ( float num );  long long llround ( double num ); long long llround ( long double num ); |  | (since C++11)  (until C++23) |
| constexpr long long llround( /\* floating-point-type \*/ num ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| long long llroundf( float num ); | (8) | (since C++11)  (constexpr since C++23) |
| long long llroundl( long double num ); | (9) | (since C++11)  (constexpr since C++23) |
| Additional overloads |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double round( Integer num ); | (A) | (since C++11)  (constexpr since C++23) |
| template< class Integer >  long lround( Integer num ); | (B) | (since C++11)  (constexpr since C++23) |
| template< class Integer >  long long llround( Integer num ); | (C) | (since C++11)  (constexpr since C++23) |
|  |  |  |

1-3) Computes the nearest integer value to num (in floating-point format), rounding halfway cases away from zero, regardless of the current rounding mode. The library provides overloads of `std::round` for all cv-unqualified floating-point types as the type of the parameter num.(since C++23)4-9) Computes the nearest integer value to num (in integer format), rounding halfway cases away from zero, regardless of the current rounding mode. The library provides overloads of `std::lround` and `std::llround` for all cv-unqualified floating-point types as the type of the parameter num.(since C++23)A-C) Additional overloads are provided for all integer types, which are treated as double.

### Parameters

|  |  |  |
| --- | --- | --- |
| num | - | floating-point or integer value |

### Return value

If no errors occur, the nearest integer value to num, rounding halfway cases away from zero, is returned.

Return value!math-round away zero.svgnum

If a domain error occurs, an implementation-defined value is returned.

### Error handling

Errors are reported as specified in math_errhandling.

If the result of `std::lround` or `std::llround` is outside the range representable by the return type, a domain error or a range error may occur.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

:   For the `std::round` function:

    - The current rounding mode has no effect.
    - If num is ±∞, it is returned, unmodified.
    - If num is ±0, it is returned, unmodified.
    - If num is NaN, NaN is returned.
:   For `std::lround` and `std::llround` functions:

    - FE_INEXACT is never raised.
    - The current rounding mode has no effect.
    - If num is ±∞, FE_INVALID is raised and an implementation-defined value is returned.
    - If the result of the rounding is outside the range of the return type, FE_INVALID is raised and an implementation-defined value is returned.
    - If num is NaN, FE_INVALID is raised and an implementation-defined value is returned.

### Notes

FE_INEXACT may be (but is not required to be) raised by `std::round` when rounding a non-integer finite value.

The largest representable floating-point values are exact integers in all standard floating-point formats, so `std::round` never overflows on its own; however the result may overflow any integer type (including std::intmax_t), when stored in an integer variable.

POSIX specifies that all cases where `std::lround` or `std::llround` raise FE_INEXACT are domain errors.

The double version of `std::round` behaves as if implemented as follows:

```
#include <cfenv>
#include <cmath>
 
#pragma STDC FENV_ACCESS ON
 
double round(double x)
{
    const int save_round = std::fegetround();
    std::fesetround(FE_TOWARDZERO);
    const double result = std::rint(std::copysign(0.5 + std::fabs(x), x));
    std::fesetround(save_round);
    return result;
}

```

The additional overloads are not required to be provided exactly as (A-C). They only need to be sufficient to ensure that for their argument num of integer type:

- std::round(num) has the same effect as std::round(static_cast<double>(num)).
- std::lround(num) has the same effect as std::lround(static_cast<double>(num)).
- std::llround(num) has the same effect as std::llround(static_cast<double>(num)).

### Example

Run this code

```
#include <cassert>
#include <cfenv>
#include <cfloat>
#include <climits>
#include <cmath>
#include <iostream>
 
// #pragma STDC FENV_ACCESS ON
 
double custom_round(double x)
{
    const int save_round = std::fegetround();
    std::fesetround(FE_TOWARDZERO);
    const double result = std::rint(std::copysign(0.5 + std::fabs(x), x));
    std::fesetround(save_round);
    return result;
}
 
void test_custom_round()
{
    for (const double x :
        {
            0.0, 0.3,
            0.5 - DBL_EPSILON / 2,
            0.5,
            0.5 + DBL_EPSILON / 2,
            0.7, 1.0, 2.3, 2.5, 2.7, 3.0,
            static_cast<double>(INFINITY)
        })
        assert(round(+x) == custom_round(+x) && round(-x) == custom_round(-x));
}
 
int main()
{
    test_custom_round();
 
    std::cout << std::showpos;
 
    // round
    std::cout << "round(+2.3) = " << std::round(2.3)
              << "  round(+2.5) = " << std::round(2.5)
              << "  round(+2.7) = " << std::round(2.7) << '\n'
              << "round(-2.3) = " << std::round(-2.3)
              << "  round(-2.5) = " << std::round(-2.5)
              << "  round(-2.7) = " << std::round(-2.7) << '\n';
 
    std::cout << "round(-0.0) = " << std::round(-0.0)  << '\n'
              << "round(-Inf) = " << std::round(-INFINITY) << '\n';
 
    // lround
    std::cout << "lround(+2.3) = " << std::lround(2.3)
              << "  lround(+2.5) = " << std::lround(2.5)
              << "  lround(+2.7) = " << std::lround(2.7) << '\n'
              << "lround(-2.3) = " << std::lround(-2.3)
              << "  lround(-2.5) = " << std::lround(-2.5)
              << "  lround(-2.7) = " << std::lround(-2.7) << '\n';
 
    std::cout << "lround(-0.0) = " << std::lround(-0.0)  << '\n'
              << "lround(-Inf) = " << std::lround(-INFINITY) << '\n';
 
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
 
    std::cout << "std::lround(LONG_MAX+1.5) = "
              << std::lround(LONG_MAX + 1.5) << '\n';
    if (std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID was raised\n";
}

```

Possible output:

```
round(+2.3) = +2  round(+2.5) = +3  round(+2.7) = +3
round(-2.3) = -2  round(-2.5) = -3  round(-2.7) = -3
round(-0.0) = -0
round(-Inf) = -inf
lround(+2.3) = +2  lround(+2.5) = +3  lround(+2.7) = +3
lround(-2.3) = -2  lround(-2.5) = -3  lround(-2.7) = -3
lround(-0.0) = +0
lround(-Inf) = -9223372036854775808
std::lround(LONG_MAX+1.5) = -9223372036854775808
    FE_INVALID was raised

```

### See also

|  |  |
| --- | --- |
| floorfloorffloorl(C++11)(C++11) | nearest integer not greater than the given value   (function) |
| ceilceilfceill(C++11)(C++11) | nearest integer not less than the given value   (function) |
| trunctruncftruncl(C++11)(C++11)(C++11) | nearest integer not greater in magnitude than the given value   (function) |
| C documentation for round | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/round&oldid=169753>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 February 2024, at 13:13.