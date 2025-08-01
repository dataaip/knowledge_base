# std::hermite, std::hermitef, std::hermitel

From cppreference.com
< cpp‎ | numeric‎ | special functions
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

Mathematical special functions

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | assoc_laguerreassoc_laguerrefassoc_laguerrel | | | | | | assoc_legendreassoc_legendrefassoc_legendrel | | | | | | betabetafbetal | | | | | | comp_ellint_1comp_ellint_1fcomp_ellint_1l | | | | | | comp_ellint_2comp_ellint_2fcomp_ellint_2l | | | | | | comp_ellint_3comp_ellint_3fcomp_ellint_3l | | | | | | cyl_bessel_icyl_bessel_ifcyl_bessel_il | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cyl_bessel_jcyl_bessel_jfcyl_bessel_jl | | | | | | cyl_bessel_kcyl_bessel_kfcyl_bessel_kl | | | | | | cyl_neumanncyl_neumannfcyl_neumannl | | | | | | ellint_1ellint_1fellint_1l | | | | | | ellint_2ellint_2fellint_2l | | | | | | ellint_3ellint_3fellint_3l | | | | | | expintexpintfexpintl | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****hermitehermitefhermitel**** | | | | | | laguerrelaguerreflaguerrel | | | | | | legendrelegendreflegendrel | | | | | | riemann_zetariemann_zetafriemann_zetal | | | | | | sph_besselsph_besselfsph_bessell | | | | | | sph_legendresph_legendrefsph_legendrel | | | | | | sph_neumannsph_neumannfsph_neumannl | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cmath>` |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| double      hermite ( unsigned int n, double x );  float       hermite ( unsigned int n, float x ); long double hermite ( unsigned int n, long double x ); |  | (since C++17)  (until C++23) |
| /\* floating-point-type \*/ hermite( unsigned int n,                                     /\* floating-point-type \*/ x ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| float       hermitef( unsigned int n, float x ); | (2) | (since C++17) |
| long double hermitel( unsigned int n, long double x ); | (3) | (since C++17) |
| Additional overloads |  |  |
| Defined in header `<cmath>` |  |  |
| template< class Integer >  double      hermite ( unsigned int n, Integer x ); | (A) | (since C++17) |
|  |  |  |

1-3) Computes the (physicist's) Hermite polynomials of the degree n and argument x. The library provides overloads of `std::hermite` for all cv-unqualified floating-point types as the type of the parameter x.(since C++23)A) Additional overloads are provided for all integer types, which are treated as double.

### Parameters

|  |  |  |
| --- | --- | --- |
| n | - | the degree of the polynomial |
| x | - | the argument, a floating-point or integer value |

### Return value

If no errors occur, value of the order-n Hermite polynomial of x, that is (-1)n  
**e**x2

|  |
| --- |
| dn |
| dxn |

**e**-x2, is returned.

### Error handling

Errors may be reported as specified in math_errhandling.

- If the argument is NaN, NaN is returned and domain error is not reported.
- If n is greater or equal than 128, the behavior is implementation-defined.

### Notes

Implementations that do not support C++17, but support ISO 29124:2010, provide this function if `__STDCPP_MATH_SPEC_FUNCS__` is defined by the implementation to a value at least 201003L and if the user defines `__STDCPP_WANT_MATH_SPEC_FUNCS__` before including any standard library headers.

Implementations that do not support ISO 29124:2010 but support TR 19768:2007 (TR1), provide this function in the header `tr1/cmath` and namespace `std::tr1`.

An implementation of this function is also available in boost.math.

The Hermite polynomials are the polynomial solutions of the equation
u,,  
-2xu,  
 = -2nu.

The first few are:

| Function | Polynomial |
| --- | --- |
| hermite(0, x) | 1 |
| hermite(1, x) | 2x |
| hermite(2, x) | 4x2  - 2 |
| hermite(3, x) | 8x3  - 12x |
| hermite(4, x) | 16x4  - 48x2  + 12 |

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their argument num of integer type, std::hermite(int_num, num) has the same effect as std::hermite(int_num, static_cast<double>(num)).

### Example

Run this code

```
#include <cmath>
#include <iostream>
 
double H3(double x)
{
    return 8 * std::pow(x, 3) - 12 * x;
}
 
double H4(double x)
{
    return 16 * std::pow(x, 4) - 48 * x * x + 12;
}
 
int main()
{
    // spot-checks
    std::cout << std::hermite(3, 10) << '=' << H3(10) << '\n'
              << std::hermite(4, 10) << '=' << H4(10) << '\n';
}

```

Output:

```
7880=7880
155212=155212

```

### See also

|  |  |
| --- | --- |
| laguerrelaguerreflaguerrel(C++17)(C++17)(C++17) | Laguerre polynomials   (function) |
| legendrelegendreflegendrel(C++17)(C++17)(C++17) | Legendre polynomials   (function) |

### External links

|  |
| --- |
| Weisstein, Eric W. "Hermite Polynomial." From MathWorld — A Wolfram Web Resource. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/special_functions/hermite&oldid=149539>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 March 2023, at 15:29.