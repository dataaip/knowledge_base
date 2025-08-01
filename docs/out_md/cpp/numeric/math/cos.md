# std::cos, std::cosf, std::cosl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | sin | | | | | | ****cos**** | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sinh | | | | | | cosh | | | | | | tanh | | | | | | asinh(C++11) | | | | | | acosh(C++11) | | | | | | atanh(C++11) | | | | | |  | | | | | |
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
| float       cos ( float num );  double      cos ( double num ); long double cos ( long double num ); |  | (until C++23) |
| /\*floating-point-type\*/              cos ( /\*floating-point-type\*/ num ); |  | (since C++23)  (constexpr since C++26) |
|  |  |  |
| --- | --- | --- |
| float       cosf( float num ); | (2) | (since C++11)  (constexpr since C++26) |
| long double cosl( long double num ); | (3) | (since C++11)  (constexpr since C++26) |
| SIMD overload (since C++26) |  |  |
| Defined in header `<simd>` |  |  |
| template< /\*math-floating-point\*/ V >  constexpr /\*deduced-simd-t\*/<V>             cos ( const V& v_num ); | (S) | (since C++26) |
| Additional overloads (since C++11) |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double      cos ( Integer num ); | (A) | (constexpr since C++26) |
|  |  |  |

1-3) Computes the cosine of num (measured in radians). The library provides overloads of `std::cos` for all cv-unqualified floating-point types as the type of the parameter.(since C++23)

|  |  |
| --- | --- |
| S) The SIMD overload performs an element-wise `std::cos` on v_num. (See **math-floating-point** and **deduced-simd-t** for their definitions.) | (since C++26) |

|  |  |
| --- | --- |
| A) Additional overloads are provided for all integer types, which are treated as double. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| num | - | floating-point or integer value representing angle in radians |

### Return value

If no errors occur, the cosine of num (cos(num)) in the range `[`-1.0`,`+1.0`]`, is returned.

|  |  |
| --- | --- |
| The result may have little or no significance if the magnitude of num is large. | (until C++11) |

If a domain error occurs, an implementation-defined value is returned (NaN where supported).

If a range error occurs due to underflow, the correct result (after rounding) is returned.

### Error handling

Errors are reported as specified in math_errhandling.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- if the argument is ±0, the result is 1.0.
- if the argument is ±∞, NaN is returned and FE_INVALID is raised.
- if the argument is NaN, NaN is returned.

### Notes

The case where the argument is infinite is not specified to be a domain error in C, but it is defined as a domain error in POSIX.

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their argument num of integer type, std::cos(num) has the same effect as std::cos(static_cast<double>(num)).

### Example

Run this code

```
#include <cerrno>
#include <cfenv>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numbers>
 
// #pragma STDC FENV_ACCESS ON
 
constexpr double pi = std::numbers::pi; // or std::acos(-1) before C++20
 
constexpr double your_cos(double x)
{
    double cos{1}, pow{x};
    for (auto fac{1ull}, n{1ull}; n != 19; fac *= ++n, pow *= x)
        if ((n & 1) == 0)
            cos += (n & 2 ? -pow : pow) / fac;
    return cos;
}
 
int main()
{
    std::cout << std::setprecision(10) << std::showpos
              << "Typical usage:\n"
              << "std::cos(pi/3) = " << std::cos(pi / 3) << '\n'
              << "your cos(pi/3) = " << your_cos(pi / 3) << '\n'
              << "std::cos(pi/2) = " << std::cos(pi / 2) << '\n'
              << "your cos(pi/2) = " << your_cos(pi / 2) << '\n'
              << "std::cos(-3*pi/4) = " << std::cos(-3 * pi / 4) << '\n'
              << "your cos(-3*pi/4) = " << your_cos(-3 * pi / 4) << '\n'
              << "Special values:\n"
              << "std::cos(+0) = " << std::cos(0.0) << '\n'
              << "std::cos(-0) = " << std::cos(-0.0) << '\n';
 
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
 
    std::cout << "cos(INFINITY) = " << std::cos(INFINITY) << '\n';
    if (std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID raised\n";
}

```

Possible output:

```
Typical usage:
std::cos(pi/3) = +0.5
your cos(pi/3) = +0.5
std::cos(pi/2) = +6.123233996e-17
your cos(pi/2) = -3.373452105e-15
std::cos(-3*pi/4) = -0.7071067812
your cos(-3*pi/4) = -0.7071067812
Special values:
std::cos(+0) = +1
std::cos(-0) = +1
cos(INFINITY) = -nan
    FE_INVALID raised

```

### See also

|  |  |
| --- | --- |
| sinsinfsinl(C++11)(C++11) | computes sine (\({\small\sin{x}}\)sin(x))   (function) |
| tantanftanl(C++11)(C++11) | computes tangent (\({\small\tan{x}}\)tan(x))   (function) |
| acosacosfacosl(C++11)(C++11) | computes arc cosine (\({\small\arccos{x}}\)arccos(x))   (function) |
| cos(std::complex) | computes cosine of a complex number (\({\small\cos{z}}\)cos(z))   (function template) |
| cos(std::valarray) | applies the function ****std::cos**** to each element of valarray   (function template) |
| C documentation for cos | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/cos&oldid=162683>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 November 2023, at 08:47.