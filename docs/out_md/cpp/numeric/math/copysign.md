# std::copysign, std::copysignf, std::copysignl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ldexp | | | | | | scalbnscalbln(C++11)(C++11) | | | | | | ilogb(C++11) | | | | | | logb(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | frexp | | | | | | modf | | | | | | nextafternexttoward(C++11)(C++11) | | | | | | ****copysign****(C++11) | | | | | |
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
| float       copysign ( float mag, float sgn );  double      copysign ( double mag, double sgn ); long double copysign ( long double mag, long double sgn ); |  | (until C++23) |
| constexpr /\*floating-point-type\*/              copysign ( /\*floating-point-type\*/ mag, /\*floating-point-type\*/ sgn ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| float       copysignf( float mag, float sgn ); | (2) | (since C++11)  (constexpr since C++23) |
| long double copysignl( long double mag, long double sgn ); | (3) | (since C++11)  (constexpr since C++23) |
| SIMD overload (since C++26) |  |  |
| Defined in header `<simd>` |  |  |
| template< class V0, class V1 >  constexpr /\*math-common-simd-t\*/<V0, V1>             copysign ( const V0& v_mag, const V1& v_sgn ); | (S) | (since C++26) |
| Additional overloads (since C++11) |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double      copysign ( Integer mag, Integer sgn ); | (A) | (constexpr since C++23) |
|  |  |  |

1-3) Composes a floating point value with the magnitude of mag and the sign of sgn. The library provides overloads of `std::copysign` for all cv-unqualified floating-point types as the type of the parameters.(since C++23)

|  |  |
| --- | --- |
| S) The SIMD overload performs an element-wise `std::copysign` on v_magand v_sgn. (See **math-common-simd-t** for its definition.) | (since C++26) |

|  |  |
| --- | --- |
| A) Additional overloads are provided for all integer types, which are treated as double. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| mag, sgn | - | floating-point or integer values |

### Return value

If no errors occur, the floating point value with the magnitude of mag and the sign of sgn is returned.

If mag is NaN, then NaN with the sign of sgn is returned.

If sgn is -0, the result is only negative if the implementation supports the signed zero consistently in arithmetic operations.

### Error handling

This function is not subject to any errors specified in math_errhandling.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- The returned value is exact (FE_INEXACT is never raised) and independent of the current rounding mode.

### Notes

`std::copysign` is the only portable way to manipulate the sign of a NaN value (to examine the sign of a NaN, std::signbit may also be used).

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their first argument num1 and second argument num2:

|  |  |
| --- | --- |
| - If num1 or num2 has type long double, then std::copysign(num1, num2) has the same effect as std::copysign(static_cast<long double>(num1),               static_cast<long double>(num2)). - Otherwise, if num1 and/or num2 has type double or an integer type, then std::copysign(num1, num2) has the same effect as std::copysign(static_cast<double>(num1),               static_cast<double>(num2)). - Otherwise, if num1 or num2 has type float, then std::copysign(num1, num2) has the same effect as std::copysign(static_cast<float>(num1),               static_cast<float>(num2)). | (until C++23) |
| If num1 and num2 have arithmetic types, then std::copysign(num1, num2) has the same effect as std::copysign(static_cast</\*common-floating-point-type\*/>(num1),               static_cast</\*common-floating-point-type\*/>(num2)), where /\*common-floating-point-type\*/ is the floating-point type with the greatest floating-point conversion rank and greatest floating-point conversion subrank between the types of num1 and num2, arguments of integer type are considered to have the same floating-point conversion rank as double.  If no such floating-point type with the greatest rank and subrank exists, then overload resolution does not result in a usable candidate from the overloads provided. | (since C++23) |

### Example

Run this code

```
#include <cmath>
#include <iostream>
 
int main()
{
    std::cout << std::showpos
              << "copysign(1.0,+2.0) = " << std::copysign(1.0, +2.0) << '\n'
              << "copysign(1.0,-2.0) = " << std::copysign(1.0, -2.0) << '\n'
              << "copysign(inf,-2.0) = " << std::copysign(INFINITY, -2.0) << '\n'
              << "copysign(NaN,-2.0) = " << std::copysign(NAN, -2.0) << '\n';
}

```

Output:

```
copysign(1.0,+2.0) = +1
copysign(1.0,-2.0) = -1
copysign(inf,-2.0) = -inf
copysign(NaN,-2.0) = -nan

```

### See also

|  |  |
| --- | --- |
| abs(float)fabsfabsffabsl(C++11)(C++11) | absolute value of a floating point value (\(\small{|x|}\)|x|)   (function) |
| signbit(C++11) | checks if the given number is negative   (function) |
| C documentation for copysign | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/copysign&oldid=154248>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 June 2023, at 09:58.