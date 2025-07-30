# std::atan2, std::atan2f, std::atan2l

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | sin | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | ****atan2**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sinh | | | | | | cosh | | | | | | tanh | | | | | | asinh(C++11) | | | | | | acosh(C++11) | | | | | | atanh(C++11) | | | | | |  | | | | | |
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
| float       atan2 ( float y, float x );  double      atan2 ( double y, double x ); long double atan2 ( long double y, long double x ); |  | (until C++23) |
| /\*floating-point-type\*/              atan2 ( /\*floating-point-type\*/ y, /\*floating-point-type\*/ x ); |  | (since C++23)  (constexpr since C++26) |
|  |  |  |
| --- | --- | --- |
| float       atan2f( float y, float x ); | (2) | (since C++11)  (constexpr since C++26) |
| long double atan2l( long double y, long double x ); | (3) | (since C++11)  (constexpr since C++26) |
| SIMD overload (since C++26) |  |  |
| Defined in header `<simd>` |  |  |
| template< class V0, class V1 >  constexpr /\*math-common-simd-t\*/<V0, V1>             atan2 ( const V0& v_y, const V1& v_x ); | (S) | (since C++26) |
| Additional overloads (since C++11) |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double      atan2 ( Integer y, Integer x ); | (A) | (constexpr since C++26) |
|  |  |  |

1-3) Computes the arc tangent of y / x using the signs of arguments to determine the correct quadrant. The library provides overloads of `std::atan2` for all cv-unqualified floating-point types as the type of the parameters.(since C++23)

|  |  |
| --- | --- |
| S) The SIMD overload performs an element-wise `std::atan2` on v_yand v_x. (See **math-common-simd-t** for its definition.) | (since C++26) |

|  |  |
| --- | --- |
| A) Additional overloads are provided for all integer types, which are treated as double. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| y, x | - | floating-point or integer values |

### Return value

If no errors occur, the arc tangent of y / x (arctan(

|  |
| --- |
| y |
| x |

)) in the range [-π, +π] radians, is returned.y argumentReturn valuex argument

If a domain error occurs, an implementation-defined value is returned (NaN where supported).

If a range error occurs due to underflow, the correct result (after rounding) is returned.

### Error handling

Errors are reported as specified in math_errhandling.

Domain error may occur if x and y are both zero.

If the implementation supports IEEE floating-point arithmetic (IEC 60559),

- If x and y are both zero, domain error **does not** occur.
- If x and y are both zero, range error does not occur either.
- If y is zero, pole error does not occur.
- If y is ±0 and x is negative or -0, ±π is returned.
- If y is ±0 and x is positive or +0, ±0 is returned.
- If y is ±∞ and x is finite, ±π/2 is returned.
- If y is ±∞ and x is -∞, ±3π/4 is returned.
- If y is ±∞ and x is +∞, ±π/4 is returned.
- If x is ±0 and y is negative, -π/2 is returned.
- If x is ±0 and y is positive, +π/2 is returned.
- If x is -∞ and y is finite and positive, +π is returned.
- If x is -∞ and y is finite and negative, -π is returned.
- If x is +∞ and y is finite and positive, +0 is returned.
- If x is +∞ and y is finite and negative, -0 is returned.
- If either x is NaN or y is NaN, NaN is returned.

### Notes

std::atan2(y, x) is equivalent to std::arg(std::complex<std::common_type_t<decltype(x), decltype(y)>>(x, y)).

POSIX specifies that in case of underflow, the value y / x is returned, and if that is not supported, an implementation-defined value no greater than DBL_MIN, FLT_MIN, and LDBL_MIN is returned.

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their first argument num1 and second argument num2:

|  |  |
| --- | --- |
| - If num1 or num2 has type long double, then std::atan2(num1, num2) has the same effect as std::atan2(static_cast<long double>(num1),            static_cast<long double>(num2)). - Otherwise, if num1 and/or num2 has type double or an integer type, then std::atan2(num1, num2) has the same effect as std::atan2(static_cast<double>(num1),            static_cast<double>(num2)). - Otherwise, if num1 or num2 has type float, then std::atan2(num1, num2) has the same effect as std::atan2(static_cast<float>(num1),            static_cast<float>(num2)). | (until C++23) |
| If num1 and num2 have arithmetic types, then std::atan2(num1, num2) has the same effect as std::atan2(static_cast</\*common-floating-point-type\*/>(num1),            static_cast</\*common-floating-point-type\*/>(num2)), where /\*common-floating-point-type\*/ is the floating-point type with the greatest floating-point conversion rank and greatest floating-point conversion subrank between the types of num1 and num2, arguments of integer type are considered to have the same floating-point conversion rank as double.  If no such floating-point type with the greatest rank and subrank exists, then overload resolution does not result in a usable candidate from the overloads provided. | (since C++23) |

### Example

Run this code

```
#include <cmath>
#include <iostream>
 
void print_coordinates(int x, int y)
{
    std::cout << std::showpos
              << "(x:" << x << ", y:" << y << ") cartesian is "
              << "(r:" << std::hypot(x, y)
              << ", phi:" << std::atan2(y, x) << ") polar\n";
}
 
int main()
{
    // normal usage: the signs of the two arguments determine the quadrant
    print_coordinates(+1, +1); // atan2( 1,  1) =  +pi/4, Quad I
    print_coordinates(-1, +1); // atan2( 1, -1) = +3pi/4, Quad II
    print_coordinates(-1, -1); // atan2(-1, -1) = -3pi/4, Quad III
    print_coordinates(+1, -1); // atan2(-1,  1) =  -pi/4, Quad IV
 
    // special values
    std::cout << std::noshowpos
              << "atan2(0, 0) = " << atan2(0, 0) << '\n'
              << "atan2(0,-0) = " << atan2(0, -0.0) << '\n'
              << "atan2(7, 0) = " << atan2(7, 0) << '\n'
              << "atan2(7,-0) = " << atan2(7, -0.0) << '\n';
}

```

Output:

```
(x:+1, y:+1) cartesian is (r:1.41421, phi:0.785398) polar
(x:-1, y:+1) cartesian is (r:1.41421, phi:2.35619) polar
(x:-1, y:-1) cartesian is (r:1.41421, phi:-2.35619) polar
(x:+1, y:-1) cartesian is (r:1.41421, phi:-0.785398) polar
atan2(0, 0) = 0
atan2(0,-0) = 3.14159
atan2(7, 0) = 1.5708
atan2(7,-0) = 1.5708

```

### See also

|  |  |
| --- | --- |
| asinasinfasinl(C++11)(C++11) | computes arc sine (\({\small\arcsin{x}}\)arcsin(x))   (function) |
| acosacosfacosl(C++11)(C++11) | computes arc cosine (\({\small\arccos{x}}\)arccos(x))   (function) |
| atanatanfatanl(C++11)(C++11) | computes arc tangent (\({\small\arctan{x}}\)arctan(x))   (function) |
| arg | returns the phase angle   (function template) |
| atan2(std::valarray) | applies the function ****std::atan2**** to a valarray and a value   (function template) |
| C documentation for atan2 | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/math/atan2&oldid=160746>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 October 2023, at 09:46.