# std::erf, std::erff, std::erfl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****erf****(C++11) | | | | | | erfc(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lgamma(C++11) | | | | | | tgamma(C++11) | | | | | |

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
| float       erf ( float num );  double      erf ( double num ); long double erf ( long double num ); |  | (until C++23) |
| /\*floating-point-type\*/              erf ( /\*floating-point-type\*/ num ); |  | (since C++23)  (constexpr since C++26) |
|  |  |  |
| --- | --- | --- |
| float       erff( float num ); | (2) | (since C++11)  (constexpr since C++26) |
| long double erfl( long double num ); | (3) | (since C++11)  (constexpr since C++26) |
| SIMD overload (since C++26) |  |  |
| Defined in header `<simd>` |  |  |
| template< /\*math-floating-point\*/ V >  constexpr /\*deduced-simd-t\*/<V>             erf ( const V& v_num ); | (S) | (since C++26) |
| Additional overloads (since C++11) |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double      erf ( Integer num ); | (A) | (constexpr since C++26) |
|  |  |  |

1-3) Computes the error function of num. The library provides overloads of `std::erf` for all cv-unqualified floating-point types as the type of the parameter.(since C++23)

|  |  |
| --- | --- |
| S) The SIMD overload performs an element-wise `std::erf` on v_num. (See **math-floating-point** and **deduced-simd-t** for their definitions.) | (since C++26) |

|  |  |
| --- | --- |
| A) Additional overloads are provided for all integer types, which are treated as double. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| num | - | floating-point or integer value |

### Return value

If no errors occur, value of the error function of num, that is \(\frac{2}{\sqrt{\pi} }\int_{0}^{num}{e^{-{t^2} }\mathsf{d}t}\)

|  |
| --- |
| 2 |
| √π |

∫num  
0**e**-t2d**t**, is returned.  
If a range error occurs due to underflow, the correct result (after rounding), that is \(\frac{2\cdot num}{\sqrt{\pi} }\)

|  |
| --- |
| 2\*num |
| √π |

 is returned.

### Error handling

Errors are reported as specified in math_errhandling.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- If the argument is ±0, ±0 is returned.
- If the argument is ±∞, ±1 is returned.
- If the argument is NaN, NaN is returned.

### Notes

Underflow is guaranteed if |num| < DBL_MIN \* (std::sqrt(π) / 2).

\(\operatorname{erf}(\frac{x}{\sigma \sqrt{2} })\)erf(

|  |
| --- |
| x |
| σ√2 |

) is the probability that a measurement whose errors are subject to a normal distribution with standard deviation \(\sigma\)σ is less than \(x\)x away from the mean value.

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their argument num of integer type, std::erf(num) has the same effect as std::erf(static_cast<double>(num)).

### Example

The following example calculates the probability that a normal variate is on the interval (x1, x2):

Run this code

```
#include <cmath>
#include <iomanip>
#include <iostream>
 
double phi(double x1, double x2)
{
    return (std::erf(x2 / std::sqrt(2)) - std::erf(x1 / std::sqrt(2))) / 2;
}
 
int main()
{
    std::cout << "Normal variate probabilities:\n"
              << std::fixed << std::setprecision(2);
    for (int n = -4; n < 4; ++n)
        std::cout << '[' << std::setw(2) << n
                  << ':' << std::setw(2) << n + 1 << "]: "
                  << std::setw(5) << 100 * phi(n, n + 1) << "%\n";
 
    std::cout << "Special values:\n"
              << "erf(-0) = " << std::erf(-0.0) << '\n'
              << "erf(Inf) = " << std::erf(INFINITY) << '\n';
}

```

Output:

```
Normal variate probabilities:
[-4:-3]:  0.13%
[-3:-2]:  2.14%
[-2:-1]: 13.59%
[-1: 0]: 34.13%
[ 0: 1]: 34.13%
[ 1: 2]: 13.59%
[ 2: 3]:  2.14%
[ 3: 4]:  0.13%
Special values:
erf(-0) = -0.00
erf(Inf) = 1.00

```

### See also

|  |  |
| --- | --- |
| erfcerfcferfcl(C++11)(C++11)(C++11) | complementary error function   (function) |
| C documentation for erf | |

### External links

|  |
| --- |
| Weisstein, Eric W. "Erf." From MathWorld — A Wolfram Web Resource. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/erf&oldid=160724>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 October 2023, at 08:49.