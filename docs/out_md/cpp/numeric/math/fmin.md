# std::fmin, std::fminf, std::fminl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abs(int)labsllabsimaxabs(C++11) | | | | | | abs(float)fabs | | | | | | divldivlldivimaxdiv(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fmod | | | | | | remainder(C++11) | | | | | | remquo(C++11) | | | | | | fma(C++11) | | | | | | fmax(C++11) | | | | | | ****fmin****(C++11) | | | | | | fdim(C++11) | | | | | | nannanfnanl(C++11)(C++11)(C++11) | | | | | |
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
| float       fmin ( float x, float y );  double      fmin ( double x, double y ); long double fmin ( long double x, long double y ); |  | (until C++23) |
| constexpr /\*floating-point-type\*/              fmin ( /\*floating-point-type\*/ x, /\*floating-point-type\*/ y ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| float       fminf( float x, float y ); | (2) | (since C++11)  (constexpr since C++23) |
| long double fminl( long double x, long double y ); | (3) | (since C++11)  (constexpr since C++23) |
| SIMD overload (since C++26) |  |  |
| Defined in header `<simd>` |  |  |
| template< class V0, class V1 >  constexpr /\*math-common-simd-t\*/<V0, V1>             fmin ( const V0& v_x, const V1& v_y ); | (S) | (since C++26) |
| Additional overloads (since C++11) |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double      fmin ( Integer x, Integer y ); | (A) | (constexpr since C++23) |
|  |  |  |

1-3) Returns the smaller of two floating point arguments, treating NaNs as missing data (between a NaN and a numeric value, the numeric value is chosen). The library provides overloads of `std::fmin` for all cv-unqualified floating-point types as the type of the parameters.(since C++23)

|  |  |
| --- | --- |
| S) The SIMD overload performs an element-wise `std::fmin` on v_xand v_y. (See **math-common-simd-t** for its definition.) | (since C++26) |

|  |  |
| --- | --- |
| A) Additional overloads are provided for all integer types, which are treated as double. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| x, y | - | floating-point or integer values |

### Return value

If successful, returns the smaller of two floating point values. The value returned is exact and does not depend on any rounding modes.

### Error handling

This function is not subject to any of the error conditions specified in math_errhandling.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- If one of the two arguments is NaN, the value of the other argument is returned.
- Only if both arguments are NaN, NaN is returned.

### Notes

This function is not required to be sensitive to the sign of zero, although some implementations additionally enforce that if one argument is +0 and the other is -0, then -0 is returned.

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their first argument num1 and second argument num2:

|  |  |
| --- | --- |
| - If num1 or num2 has type long double, then std::fmin(num1, num2) has the same effect as std::fmin(static_cast<long double>(num1),           static_cast<long double>(num2)). - Otherwise, if num1 and/or num2 has type double or an integer type, then std::fmin(num1, num2) has the same effect as std::fmin(static_cast<double>(num1),           static_cast<double>(num2)). - Otherwise, if num1 or num2 has type float, then std::fmin(num1, num2) has the same effect as std::fmin(static_cast<float>(num1),           static_cast<float>(num2)). | (until C++23) |
| If num1 and num2 have arithmetic types, then std::fmin(num1, num2) has the same effect as std::fmin(static_cast</\*common-floating-point-type\*/>(num1),           static_cast</\*common-floating-point-type\*/>(num2)), where /\*common-floating-point-type\*/ is the floating-point type with the greatest floating-point conversion rank and greatest floating-point conversion subrank between the types of num1 and num2, arguments of integer type are considered to have the same floating-point conversion rank as double.  If no such floating-point type with the greatest rank and subrank exists, then overload resolution does not result in a usable candidate from the overloads provided. | (since C++23) |

### Example

Run this code

```
#include <cmath>
#include <iostream>
 
int main()
{
    std::cout << "fmin(2,1)    = " << std::fmin(2, 1) << '\n'
              << "fmin(-Inf,0) = " << std::fmin(-INFINITY, 0) << '\n'
              << "fmin(NaN,-1) = " << std::fmin(NAN, -1) << '\n';
}

```

Possible output:

```
fmin(2,1)    = 1
fmin(-Inf,0) = -inf
fmin(NaN,-1) = -1

```

### See also

|  |  |
| --- | --- |
| isless(C++11) | checks if the first floating-point argument is less than the second   (function) |
| fmaxfmaxffmaxl(C++11)(C++11)(C++11) | larger of two floating-point values   (function) |
| min | returns the smaller of the given values   (function template) |
| min_element | returns the smallest element in a range   (function template) |
| minmax(C++11) | returns the smaller and larger of two elements   (function template) |
| minmax_element(C++11) | returns the smallest and the largest elements in a range   (function template) |
| C documentation for fmin | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/fmin&oldid=160734>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 October 2023, at 09:21.