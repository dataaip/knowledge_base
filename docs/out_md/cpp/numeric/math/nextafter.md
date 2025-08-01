# std::nextafter, std::nextafterf, std::nextafterl, std::nexttoward, std::nexttowardf, std::nexttowardl

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ldexp | | | | | | scalbnscalbln(C++11)(C++11) | | | | | | ilogb(C++11) | | | | | | logb(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | frexp | | | | | | modf | | | | | | ****nextafternexttoward****(C++11)(C++11) | | | | | | copysign(C++11) | | | | | |
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
| float       nextafter ( float from, float to );  double      nextafter ( double from, double to ); long double nextafter ( long double from, long double to ); |  | (since C++11)  (until C++23) |
| constexpr /\* floating-point-type \*/              nextafter ( /\* floating-point-type \*/ from, /\* floating-point-type \*/ to ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| float       nextafterf( float from, float to ); | (2) | (since C++11)  (constexpr since C++23) |
| long double nextafterl( long double from, long double to ); | (3) | (since C++11)  (constexpr since C++23) |
|  |  |  |
| --- | --- | --- |
|  | (4) |  |
| float       nexttoward ( float from, long double to );  double      nexttoward ( double from, long double to ); long double nexttoward ( long double from, long double to ); |  | (since C++11)  (until C++23) |
| constexpr /\* floating-point-type \*/              nexttoward ( /\* floating-point-type \*/ from, long double to ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| float       nexttowardf( float from, long double to ); | (5) | (since C++11)  (constexpr since C++23) |
| long double nexttowardl( long double from, long double to ); | (6) | (since C++11)  (constexpr since C++23) |
| Additional overloads |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Arithmetic1, class Arithmetic2 >  /\* common-floating-point-type \*/     nextafter( Arithmetic1 from, Arithmetic2 to ); | (A) | (since C++11)  (constexpr since C++23) |
| template< class Integer >  double nexttoward( Integer from, long double to ); | (B) | (since C++11)  (constexpr since C++23) |
|  |  |  |

Returns the next representable value of from in the direction of to.

1-3) If from equals to, to is returned. The library provides overloads of `std::nextafter` for all cv-unqualified floating-point types as the type of the parameters from and to.(since C++23)4-6) If from equals to, to is returned, converted from long double to the return type of the function without loss of range or precision.

|  |  |
| --- | --- |
| The library provides overloads of `std::nexttoward` for all cv-unqualified floating-point types as the type of the parameter from. However, an invocation of `std::nexttoward` is ill-formed if the argument corresponding to from has extended floating-point type, because the next representable value (or to) is not guaranteed to be representable as long double. | (since C++23) |

A) Additional `std::nextafter` overloads are provided for all other combinations of arithmetic types.B) Additional `std::nexttoward` overloads are provided for all integer types, which are treated as double.

### Parameters

|  |  |  |
| --- | --- | --- |
| from, to | - | floating-point or integer values |

### Return value

If no errors occur, the next representable value of from in the direction of to. is returned. If from equals to, then to is returned.

If a range error due to overflow occurs, ±HUGE_VAL, `±HUGE_VALF`, or `±HUGE_VALL` is returned (with the same sign as from).

If a range error occurs due to underflow, the correct result is returned.

### Error handling

Errors are reported as specified in math_errhandling.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- if from is finite, but the expected result is an infinity, raises FE_INEXACT and FE_OVERFLOW.
- if from does not equal to and the result is subnormal or zero, raises FE_INEXACT and FE_UNDERFLOW.
- in any case, the returned value is independent of the current rounding mode.
- if either from or to is NaN, NaN is returned.

### Notes

POSIX specifies that the overflow and the underflow conditions are range errors (errno may be set).

IEC 60559 recommends that from is returned whenever from == to. These functions return to instead, which makes the behavior around zero consistent: std::nextafter(-0.0, +0.0) returns +0.0 and std::nextafter(+0.0, -0.0) returns -0.0.

`std::nextafter` is typically implemented by manipulation of IEEE representation (glibc, musl).

The additional `std::nextafter` overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their first argument num1 and second argument num2:

|  |  |
| --- | --- |
| - If num1 or num2 has type long double, then std::nextafter(num1, num2) has the same effect as std::nextafter(static_cast<long double>(num1),                static_cast<long double>(num2)). - Otherwise, if num1 and/or num2 has type double or an integer type, then std::nextafter(num1, num2) has the same effect as std::nextafter(static_cast<double>(num1),                static_cast<double>(num2)). - Otherwise, if num1 or num2 has type float, then std::nextafter(num1, num2) has the same effect as std::nextafter(static_cast<float>(num1),                static_cast<float>(num2)). | (until C++23) |
| If num1 and num2 have arithmetic types, then std::nextafter(num1, num2) has the same effect as std::nextafter(static_cast</\*common-floating-point-type\*/>(num1),                static_cast</\*common-floating-point-type\*/>(num2)), where /\*common-floating-point-type\*/ is the floating-point type with the greatest floating-point conversion rank and greatest floating-point conversion subrank between the types of num1 and num2, arguments of integer type are considered to have the same floating-point conversion rank as double.  If no such floating-point type with the greatest rank and subrank exists, then overload resolution does not result in a usable candidate from the overloads provided. | (since C++23) |

The additional `std::nexttoward` overloads are not required to be provided exactly as (B). They only need to be sufficient to ensure that for their argument num of integer type, std::nexttoward(num) has the same effect as std::nexttoward(static_cast<double>(num)).

### Example

Run this code

```
#include <cfenv>
#include <cfloat>
#include <cmath>
#include <concepts>
#include <iomanip>
#include <iostream>
 
int main()
{
    float from1 = 0, to1 = std::nextafter(from1, 1.f);
    std::cout << "The next representable float after " << std::setprecision(20) << from1
              << " is " << to1
              << std::hexfloat << " (" << to1 << ")\n" << std::defaultfloat;
 
    float from2 = 1, to2 = std::nextafter(from2, 2.f);
    std::cout << "The next representable float after " << from2 << " is " << to2
              << std::hexfloat << " (" << to2 << ")\n" << std::defaultfloat;
 
    double from3 = std::nextafter(0.1, 0), to3 = 0.1;
    std::cout << "The number 0.1 lies between two valid doubles:\n"
              << std::setprecision(56) << "    " << from3
              << std::hexfloat << " (" << from3 << ')' << std::defaultfloat
              << "\nand " << to3 << std::hexfloat << "  (" << to3 << ")\n"
              << std::defaultfloat << std::setprecision(20);
 
    std::cout << "\nDifference between nextafter and nexttoward:\n";
    long double dir = std::nextafter(from1, 1.0L); // first subnormal long double
    float x = std::nextafter(from1, dir); // first converts dir to float, giving 0
    std::cout << "With nextafter, next float after " << from1 << " is " << x << '\n';
    x = std::nexttoward(from1, dir);
    std::cout << "With nexttoward, next float after " << from1 << " is " << x << '\n';
 
    std::cout << "\nSpecial values:\n";
    {
        // #pragma STDC FENV_ACCESS ON
        std::feclearexcept(FE_ALL_EXCEPT);
        double from4 = DBL_MAX, to4 = std::nextafter(from4, INFINITY);
        std::cout << "The next representable double after " << std::setprecision(6)
                  << from4 << std::hexfloat << " (" << from4 << ')'
                  << std::defaultfloat << " is " << to4
                  << std::hexfloat << " (" << to4 << ")\n" << std::defaultfloat;
 
        if (std::fetestexcept(FE_OVERFLOW))
            std::cout << "   raised FE_OVERFLOW\n";
        if (std::fetestexcept(FE_INEXACT))
            std::cout << "   raised FE_INEXACT\n";
    } // end FENV_ACCESS block
 
    float from5 = 0.0, to5 = std::nextafter(from5, -0.0);
    std::cout << "std::nextafter(+0.0, -0.0) gives " << std::fixed << to5 << '\n';
 
    auto precision_loss_demo = []<std::floating_point Fp>(const auto rem, const Fp start)
    {
        std::cout << rem;
        for (Fp from = start, to, Δ;
            (Δ = (to = std::nextafter(from, +INFINITY)) - from) < Fp(10.0);
            from *= Fp(10.0))
            std::cout << "nextafter(" << std::scientific << std::setprecision(0) << from 
                      << ", INF) gives " << std::fixed << std::setprecision(6) << to
                      << "; Δ = " << Δ << '\n';
    };
 
    precision_loss_demo("\nPrecision loss demo for float:\n", 10.0f);
    precision_loss_demo("\nPrecision loss demo for double:\n", 10.0e9);
    precision_loss_demo("\nPrecision loss demo for long double:\n", 10.0e17L);
}

```

Output:

```
The next representable float after 0 is 1.4012984643248170709e-45 (0x1p-149)
The next representable float after 1 is 1.0000001192092895508 (0x1.000002p+0)
The number 0.1 lies between two valid doubles:
    0.09999999999999999167332731531132594682276248931884765625 (0x1.9999999999999p-4)
and 0.1000000000000000055511151231257827021181583404541015625  (0x1.999999999999ap-4)
 
Difference between nextafter and nexttoward:
With nextafter, next float after 0 is 0
With nexttoward, next float after 0 is 1.4012984643248170709e-45
 
Special values:
The next representable double after 1.79769e+308 (0x1.fffffffffffffp+1023) is inf (inf)
   raised FE_OVERFLOW
   raised FE_INEXACT
std::nextafter(+0.0, -0.0) gives -0.000000
 
Precision loss demo for float:
nextafter(1e+01, INF) gives 10.000001; Δ = 0.000001
nextafter(1e+02, INF) gives 100.000008; Δ = 0.000008
nextafter(1e+03, INF) gives 1000.000061; Δ = 0.000061
nextafter(1e+04, INF) gives 10000.000977; Δ = 0.000977
nextafter(1e+05, INF) gives 100000.007812; Δ = 0.007812
nextafter(1e+06, INF) gives 1000000.062500; Δ = 0.062500
nextafter(1e+07, INF) gives 10000001.000000; Δ = 1.000000
nextafter(1e+08, INF) gives 100000008.000000; Δ = 8.000000
 
Precision loss demo for double:
nextafter(1e+10, INF) gives 10000000000.000002; Δ = 0.000002
nextafter(1e+11, INF) gives 100000000000.000015; Δ = 0.000015
nextafter(1e+12, INF) gives 1000000000000.000122; Δ = 0.000122
nextafter(1e+13, INF) gives 10000000000000.001953; Δ = 0.001953
nextafter(1e+14, INF) gives 100000000000000.015625; Δ = 0.015625
nextafter(1e+15, INF) gives 1000000000000000.125000; Δ = 0.125000
nextafter(1e+16, INF) gives 10000000000000002.000000; Δ = 2.000000
 
Precision loss demo for long double:
nextafter(1e+18, INF) gives 1000000000000000000.062500; Δ = 0.062500
nextafter(1e+19, INF) gives 10000000000000000001.000000; Δ = 1.000000
nextafter(1e+20, INF) gives 100000000000000000008.000000; Δ = 8.000000

```

### See also

|  |  |
| --- | --- |
| C documentation for nextafter | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/nextafter&oldid=177740>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 November 2024, at 07:43.