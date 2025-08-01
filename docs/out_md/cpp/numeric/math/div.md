# std::div, std::ldiv, std::lldiv, std::imaxdiv

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abs(int)labsllabsimaxabs(C++11) | | | | | | abs(float)fabs | | | | | | ****divldivlldivimaxdiv****(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fmod | | | | | | remainder(C++11) | | | | | | remquo(C++11) | | | | | | fma(C++11) | | | | | | fmax(C++11) | | | | | | fmin(C++11) | | | | | | fdim(C++11) | | | | | | nannanfnanl(C++11)(C++11)(C++11) | | | | | |
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****div_t**** | | | | | | ****ldiv_t**** | | | | | | ****lldiv_t****(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****imaxdiv_t****(C++11) | | | | | | float_t(C++11) | | | | | | double_t(C++11) | | | | | |
| Macro constants | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | HUGE_VALFHUGE_VALHUGE_VALL(C++11)(C++11) | | | | | | math_errhandlingMATH_ERRNOMATH_ERREXCEPT(C++11) | | | | | | INFINITY(C++11) | | | | | | NAN(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Classification | | | | | | FP_NORMALFP_SUBNORMALFP_ZEROFP_INFINITEFP_NAN(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | |  | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cstdlib>` |  |  |
| std::div_t     div( int x, int y ); | (1) | (constexpr since C++23) |
| std::ldiv_t    div( long x, long y ); | (2) | (constexpr since C++23) |
| std::lldiv_t   div( long long x, long long y ); | (3) | (since C++11)  (constexpr since C++23) |
| std::ldiv_t   ldiv( long x, long y ); | (4) | (constexpr since C++23) |
| std::lldiv_t lldiv( long long x, long long y ); | (5) | (since C++11)  (constexpr since C++23) |
| Defined in header `<cinttypes>` |  |  |
| std::imaxdiv_t div( std::intmax_t x, std::intmax_t y ); | (6) | (since C++11)  (constexpr since C++23) |
| std::imaxdiv_t imaxdiv( std::intmax_t x, std::intmax_t y ); | (7) | (since C++11)  (constexpr since C++23) |
|  |  |  |

Computes both the quotient and the remainder of the division of the numerator x by the denominator y.

|  |  |
| --- | --- |
| 6,7) Overload of `std::div` for std::intmax_t is provided in <cinttypes> if and only if std::intmax_t is an extended integer type. | (since C++11) |

  

|  |  |
| --- | --- |
| The quotient is the algebraic quotient with any fractional part discarded (truncated towards zero). The remainder is such that quot \* y + rem == x. | (until C++11) |
| The quotient is the result of the expression x / y. The remainder is the result of the expression x % y. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| x, y | - | integer values |

### Return value

If both the remainder and the quotient can be represented as objects of the corresponding type (int, long, long long, std::intmax_t, respectively), returns both as an object of type `std::div_t`, `std::ldiv_t`, `std::lldiv_t`, `std::imaxdiv_t` defined as follows:

## std::div_t

```
struct div_t { int quot; int rem; };

```

or

```
struct div_t { int rem; int quot; };

```

## std::ldiv_t

```
struct ldiv_t { long quot; long rem; };

```

or

```
struct ldiv_t { long rem; long quot; };

```

## std::lldiv_t

```
struct lldiv_t { long long quot; long long rem; };

```

or

```
struct lldiv_t { long long rem; long long quot; };

```

## std::imaxdiv_t

```
struct imaxdiv_t { std::intmax_t quot; std::intmax_t rem; };

```

or

```
struct imaxdiv_t { std::intmax_t rem; std::intmax_t quot; };

```

If either the remainder or the quotient cannot be represented, the behavior is undefined.

### Notes

Until CWG issue 614 was resolved (N2757), the rounding direction of the quotient and the sign of the remainder in the built-in division and remainder operators was implementation-defined if either of the operands was negative, but it was well-defined in `std::div`.

On many platforms, a single CPU instruction obtains both the quotient and the remainder, and this function may leverage that, although compilers are generally able to merge nearby `/` and `%` where suitable.

### Example

Run this code

```
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
 
std::string division_with_remainder_string(int dividend, int divisor)
{
    auto dv = std::div(dividend, divisor);
    assert(dividend == divisor * dv.quot + dv.rem);
    assert(dv.quot == dividend / divisor);
    assert(dv.rem == dividend % divisor);
 
    auto sign = [](int n){ return n > 0 ? 1 : n < 0 ? -1 : 0; };
    assert((dv.rem == 0) or (sign(dv.rem) == sign(dividend)));
 
    return (std::ostringstream() << std::showpos << dividend << " = "
                                 << divisor << " * (" << dv.quot << ") "
                                 << std::showpos << dv.rem).str();
}
 
std::string itoa(int n, int radix /*[2..16]*/)
{
    std::string buf;
    std::div_t dv{}; dv.quot = n;
 
    do
    {
        dv = std::div(dv.quot, radix);
        buf += "0123456789abcdef"[std::abs(dv.rem)]; // string literals are arrays
    }
    while (dv.quot);
 
    if (n < 0)
        buf += '-';
 
    return {buf.rbegin(), buf.rend()};
}
 
int main()
{
    std::cout << division_with_remainder_string(369, 10) << '\n'
              << division_with_remainder_string(369, -10) << '\n'
              << division_with_remainder_string(-369, 10) << '\n'
              << division_with_remainder_string(-369, -10) << "\n\n";
 
    std::cout << itoa(12345, 10) << '\n'
              << itoa(-12345, 10) << '\n'
              << itoa(42, 2) << '\n'
              << itoa(65535, 16) << '\n';
}

```

Output:

```
+369 = +10 * (+36) +9
+369 = -10 * (-36) +9
-369 = +10 * (-36) -9
-369 = -10 * (+36) -9
 
12345
-12345
101010
ffff

```

### See also

|  |  |
| --- | --- |
| fmodfmodffmodl(C++11)(C++11) | remainder of the floating point division operation   (function) |
| remainderremainderfremainderl(C++11)(C++11)(C++11) | signed remainder of the division operation   (function) |
| remquoremquofremquol(C++11)(C++11)(C++11) | signed remainder as well as the three last bits of the division operation   (function) |
| C documentation for div | |

### External links

|  |  |
| --- | --- |
| 1. | Euclidean division — From Wikipedia. |
| 2. | Modulo (and Truncated division) — From Wikipedia. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/div&oldid=178557>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 13:18.