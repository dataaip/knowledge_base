# std::pow, std::powf, std::powl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | sqrt | | | | | | cbrt(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hypot(C++11) | | | | | | ****pow**** | | | | | |
| Trigonometric and  hyperbolic functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | sin | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sinh | | | | | | cosh | | | | | | tanh | | | | | | asinh(C++11) | | | | | | acosh(C++11) | | | | | | atanh(C++11) | | | | | |  | | | | | |
| Error and gamma functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | erf(C++11) | | | | | | erfc(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lgamma(C++11) | | | | | | tgamma(C++11) | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Nearest integer floating point operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ceil | | | | | | floor | | | | | | roundlroundllround(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | trunc(C++11) | | | | | | nearbyint(C++11) | | | | | | rintlrintllrint(C++11)(C++11)(C++11) | | | | | |
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
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| float       pow ( float base, float exp );  double      pow ( double base, double exp ); long double pow ( long double base, long double exp ); |  | (until C++23) |
| /\* floating-point-type \*/              pow ( /\* floating-point-type \*/ base, /\* floating-point-type \*/ exp ) |  | (since C++23)  (constexpr since C++26) |
|  |  |  |
| --- | --- | --- |
| float       pow ( float base, int exp );  double      pow ( double base, int exp ); long double pow ( long double base, int exp ); | (2) | (until C++11) |
| float       powf( float base, float exp ); | (3) | (since C++11)  (constexpr since C++26) |
| long double powl( long double base, long double exp ); | (4) | (since C++11)  (constexpr since C++26) |
| Additional overloads (since C++11) |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Arithmetic1, class Arithmetic2 >  /\* common-floating-point-type \*/             pow ( Arithmetic1 base, Arithmetic2 exp ); | (A) | (constexpr since C++26) |
|  |  |  |

1-4) Computes the value of base raised to the power exp. The library provides overloads of `std::pow` for all cv-unqualified floating-point types as the type of the parameters base and exp.(since C++23)

|  |  |
| --- | --- |
| A) Additional overloads are provided for all other combinations of arithmetic types. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| base | - | base as a floating-point or integer value |
| exp | - | exponent as a floating-point or integer value |

### Return value

If no errors occur, base raised to the power of exp (baseexp  
), is returned.

If a domain error occurs, an implementation-defined value is returned (NaN where supported).

If a pole error or a range error due to overflow occurs, ±HUGE_VAL, `±HUGE_VALF`, or `±HUGE_VALL` is returned.

If a range error occurs due to underflow, the correct result (after rounding) is returned.

### Error handling

Errors are reported as specified in math_errhandling.

If base is finite and negative and exp is finite and non-integer, a domain error occurs and a range error may occur.

If base is zero and exp is zero, a domain error may occur.

If base is zero and exp is negative, a domain error or a pole error may occur.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- pow(+0, exp), where exp is a negative odd integer, returns +∞ and raises FE_DIVBYZERO.
- pow(-0, exp), where exp is a negative odd integer, returns -∞ and raises FE_DIVBYZERO.
- pow(±0, exp), where exp is negative, finite, and is an even integer or a non-integer, returns +∞ and raises FE_DIVBYZERO.
- pow(±0, -∞) returns +∞ and may raise FE_DIVBYZERO.
- pow(+0, exp), where exp is a positive odd integer, returns +0.
- pow(-0, exp), where exp is a positive odd integer, returns -0.
- pow(±0, exp), where exp is positive non-integer or a positive even integer, returns +0.
- pow(-1, ±∞) returns 1.
- pow(+1, exp) returns 1 for any exp, even when exp is NaN.
- pow(base, ±0) returns 1 for any base, even when base is NaN.
- pow(base, exp) returns NaN and raises FE_INVALID if base is finite and negative and exp is finite and non-integer.
- pow(base, -∞) returns +∞ for any `|base| < 1`.
- pow(base, -∞) returns +0 for any `|base| > 1`.
- pow(base, +∞) returns +0 for any `|base| < 1`.
- pow(base, +∞) returns +∞ for any `|base| > 1`.
- pow(-∞, exp) returns -0 if exp is a negative odd integer.
- pow(-∞, exp) returns +0 if exp is a negative non-integer or negative even integer.
- pow(-∞, exp) returns -∞ if exp is a positive odd integer.
- pow(-∞, exp) returns +∞ if exp is a positive non-integer or positive even integer.
- pow(+∞, exp) returns +0 for any negative exp.
- pow(+∞, exp) returns +∞ for any positive exp.
- except where specified above, if any argument is NaN, NaN is returned.

### Notes

C++98 added overloads where exp has type int on top of C pow(), and the return type of std::pow(float, int) was float. However, the additional overloads introduced in C++11 specify that std::pow(float, int) should return double. LWG issue 550 was raised to target this conflict, and the resolution is to removed the extra int exp overloads.

Although `std::pow` cannot be used to obtain a root of a negative number, std::cbrt is provided for the common case where exp is 1/3.

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their first argument num1 and second argument num2:

|  |  |
| --- | --- |
| - If num1 or num2 has type long double, then std::pow(num1, num2) has the same effect as std::pow(static_cast<long double>(num1),          static_cast<long double>(num2)). - Otherwise, if num1 and/or num2 has type double or an integer type, then std::pow(num1, num2) has the same effect as std::pow(static_cast<double>(num1),          static_cast<double>(num2)). - Otherwise, if num1 or num2 has type float, then std::pow(num1, num2) has the same effect as std::pow(static_cast<float>(num1),          static_cast<float>(num2)). | (until C++23) |
| If num1 and num2 have arithmetic types, then std::pow(num1, num2) has the same effect as std::pow(static_cast</\*common-floating-point-type\*/>(num1),          static_cast</\*common-floating-point-type\*/>(num2)), where /\*common-floating-point-type\*/ is the floating-point type with the greatest floating-point conversion rank and greatest floating-point conversion subrank between the types of num1 and num2, arguments of integer type are considered to have the same floating-point conversion rank as double.  If no such floating-point type with the greatest rank and subrank exists, then overload resolution does not result in a usable candidate from the overloads provided. | (since C++23) |

### Example

Run this code

```
#include <cerrno>
#include <cfenv>
#include <cmath>
#include <cstring>
#include <iostream>
// #pragma STDC FENV_ACCESS ON
 
int main()
{
    // typical usage
    std::cout << "pow(2, 10) = " << std::pow(2, 10) << '\n'
              << "pow(2, 0.5) = " << std::pow(2, 0.5) << '\n'
              << "pow(-2, -3) = " << std::pow(-2, -3) << '\n';
 
    // special values
    std::cout << "pow(-1, NAN) = " << std::pow(-1, NAN) << '\n'
              << "pow(+1, NAN) = " << std::pow(+1, NAN) << '\n'
              << "pow(INFINITY, 2) = " << std::pow(INFINITY, 2) << '\n'
              << "pow(INFINITY, -1) = " << std::pow(INFINITY, -1) << '\n';
 
    // error handling
    errno = 0;
    std::feclearexcept(FE_ALL_EXCEPT);
 
    std::cout << "pow(-1, 1/3) = " << std::pow(-1, 1.0 / 3) << '\n';
    if (errno == EDOM)
        std::cout << "    errno == EDOM " << std::strerror(errno) << '\n';
    if (std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID raised\n";
 
    std::feclearexcept(FE_ALL_EXCEPT);
 
    std::cout << "pow(-0, -3) = " << std::pow(-0.0, -3) << '\n';
    if (std::fetestexcept(FE_DIVBYZERO))
        std::cout << "    FE_DIVBYZERO raised\n";
}

```

Possible output:

```
pow(2, 10) = 1024
pow(2, 0.5) = 1.41421
pow(-2, -3) = -0.125
pow(-1, NAN) = nan
pow(+1, NAN) = 1
pow(INFINITY, 2) = inf
pow(INFINITY, -1) = 0
pow(-1, 1/3) = -nan
    errno == EDOM Numerical argument out of domain
    FE_INVALID raised
pow(-0, -3) = -inf
    FE_DIVBYZERO raised

```

### See also

|  |  |
| --- | --- |
| sqrtsqrtfsqrtl(C++11)(C++11) | computes square root (\(\small{\sqrt{x}}\)√x)   (function) |
| cbrtcbrtfcbrtl(C++11)(C++11)(C++11) | computes cube root (\(\small{\sqrt[3]{x}}\)3√x)   (function) |
| hypothypotfhypotl(C++11)(C++11)(C++11) | computes hypotenuse \(\scriptsize{\sqrt{x^2+y^2}}\)√x2 +y2  and \(\scriptsize{\sqrt{x^2+y^2+z^2}}\)√x2 +y2 +z2 (since C++17)   (function) |
| pow(std::complex) | complex power, one or both arguments may be a complex number   (function template) |
| pow(std::valarray) | applies the function ****std::pow**** to two valarrays or a valarray and a value   (function template) |
| C documentation for pow | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/pow&oldid=177733>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 November 2024, at 07:24.