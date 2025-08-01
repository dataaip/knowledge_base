# std::ilogb, std::ilogbf, std::ilogbl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ceil | | | | | | floor | | | | | | roundlroundllround(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | trunc(C++11) | | | | | | nearbyint(C++11) | | | | | | rintlrintllrint(C++11)(C++11)(C++11) | | | | | |
| Floating point manipulation functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ldexp | | | | | | scalbnscalbln(C++11)(C++11) | | | | | | ****ilogb****(C++11) | | | | | | logb(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | frexp | | | | | | modf | | | | | | nextafternexttoward(C++11)(C++11) | | | | | | copysign(C++11) | | | | | |
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
| int ilogb ( float num );  int ilogb ( double num ); int ilogb ( long double num ); |  | (since C++11)  (until C++23) |
| constexpr int ilogb( /\* floating-point-type \*/ num ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| int ilogbf( float num ); | (2) | (since C++11)  (constexpr since C++23) |
| int ilogbl( long double num ); | (3) | (since C++11)  (constexpr since C++23) |
| #define FP_ILOGB0   /\* implementation-defined \*/ | (4) | (since C++11) |
| #define FP_ILOGBNAN /\* implementation-defined \*/ | (5) | (since C++11) |
| Additional overloads |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  int ilogb ( Integer num ); | (A) | (since C++11)  (constexpr since C++23) |
|  |  |  |

1-3) Extracts the value of the unbiased exponent from the floating-point argument num, and returns it as a signed integer value. The library provides overloads of `std::ilogb` for all cv-unqualified floating-point types as the type of the parameter num.(since C++23)4) Expands to integer constant expression whose value is either INT_MIN or -INT_MAX.5) Expands to integer constant expression whose value is either INT_MIN or +INT_MAX.A) Additional overloads are provided for all integer types, which are treated as double.

Formally, the unbiased exponent is the integral part of logr|num| as a signed integral value, for non-zero num, where r is std::numeric_limits<T>::radix and `T` is the floating-point type of num.

### Parameters

|  |  |  |
| --- | --- | --- |
| num | - | floating-point or integer value |

### Return value

If no errors occur, the unbiased exponent of num is returned as a signed int value.

If num is zero, FP_ILOGB0 is returned.

If num is infinite, INT_MAX is returned.

If num is a NaN, FP_ILOGBNAN is returned.

If the correct result is greater than INT_MAX or smaller than INT_MIN, the return value is unspecified.

### Error handling

Errors are reported as specified in math_errhandling.

A domain error or range error may occur if num is zero, infinite, or NaN.

If the correct result is greater than INT_MAX or smaller than INT_MIN, a domain error or a range error may occur.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- If the correct result is greater than INT_MAX or smaller than INT_MIN, FE_INVALID is raised.
- If num is ±0, ±∞, or NaN, FE_INVALID is raised.
- In all other cases, the result is exact (FE_INEXACT is never raised) and the current rounding mode is ignored.

### Notes

If num is not zero, infinite, or NaN, the value returned is exactly equivalent to static_cast<int>(std::logb(num)).

POSIX requires that a domain error occurs if num is zero, infinite, NaN, or if the correct result is outside of the range of int.

POSIX also requires that, on XSI-conformant systems, the value returned when the correct result is greater than INT_MAX is INT_MAX and the value returned when the correct result is less than INT_MIN is INT_MIN.

The correct result can be represented as int on all known implementations. For overflow to occur, INT_MAX must be less than LDBL_MAX_EXP \* std::log2(FLT_RADIX) or INT_MIN must be greater than LDBL_MIN_EXP - LDBL_MANT_DIG) \* std::log2(FLT_RADIX).

The value of the exponent returned by `std::ilogb` is always 1 less than the exponent retuned by std::frexp because of the different normalization requirements: for the exponent e returned by `std::ilogb`, |num\*r-e  
| is between 1 and r (typically between 1 and 2), but for the exponent e returned by std::frexp, |num\*2-e  
| is between 0.5 and 1.

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their argument num of integer type, std::ilogb(num) has the same effect as std::ilogb(static_cast<double>(num)).

### Example

Compares different floating-point decomposition functions:

Run this code

```
#include <cfenv>
#include <cmath>
#include <iostream>
#include <limits>
 
// #pragma STDC FENV_ACCESS ON
 
int main()
{
    double f = 123.45;
    std::cout << "Given the number " << f << " or " << std::hexfloat
              << f << std::defaultfloat << " in hex,\n";
 
    double f3;
    double f2 = std::modf(f, &f3);
    std::cout << "modf() makes " << f3 << " + " << f2 << '\n';
 
    int i;
    f2 = std::frexp(f, &i);
    std::cout << "frexp() makes " << f2 << " * 2^" << i << '\n';
 
    i = std::ilogb(f);
    std::cout << "logb()/ilogb() make " << f / std::scalbn(1.0, i) << " * "
              << std::numeric_limits<double>::radix
              << "^" << std::ilogb(f) << '\n';
 
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
 
    std::cout << "ilogb(0) = " << std::ilogb(0) << '\n';
    if (std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID raised\n";
}

```

Possible output:

```
Given the number 123.45 or 0x1.edccccccccccdp+6 in hex,
modf() makes 123 + 0.45
frexp() makes 0.964453 * 2^7
logb()/ilogb() make 1.92891 * 2^6
ilogb(0) = -2147483648
    FE_INVALID raised

```

### See also

|  |  |
| --- | --- |
| frexpfrexpffrexpl(C++11)(C++11) | decomposes a number into significand and base-2 exponent   (function) |
| logblogbflogbl(C++11)(C++11)(C++11) | extracts exponent of the number   (function) |
| scalbnscalbnfscalbnlscalblnscalblnfscalblnl(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | multiplies a number by FLT_RADIX raised to a power   (function) |
| C documentation for ilogb | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/ilogb&oldid=177739>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 November 2024, at 07:43.