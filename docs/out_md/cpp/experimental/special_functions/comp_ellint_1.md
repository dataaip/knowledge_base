# std::comp_ellint_1, std::comp_ellint_1f, std::comp_ellint_1l

From cppreference.com
< cpp‎ | experimental‎ | special functions
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Mathematical special functions

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | assoc_laguerreassoc_laguerrefassoc_laguerrel | | | | | | assoc_legendreassoc_legendrefassoc_legendrel | | | | | | betabetafbetal | | | | | | ****comp_ellint_1comp_ellint_1fcomp_ellint_1l**** | | | | | | comp_ellint_2comp_ellint_2fcomp_ellint_2l | | | | | | comp_ellint_3comp_ellint_3fcomp_ellint_3l | | | | | | cyl_bessel_icyl_bessel_ifcyl_bessel_il") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cyl_bessel_jcyl_bessel_jfcyl_bessel_jl") | | | | | | cyl_bessel_kcyl_bessel_kfcyl_bessel_kl") | | | | | | cyl_neumanncyl_neumannfcyl_neumannl") | | | | | | ellint_1ellint_1fellint_1l") | | | | | | ellint_2ellint_2fellint_2l") | | | | | | ellint_3ellint_3fellint_3l") | | | | | | expintexpintfexpintl | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hermitehermitefhermitel | | | | | | laguerrelaguerreflaguerrel | | | | | | legendrelegendreflegendrel | | | | | | riemann_zetariemann_zetafriemann_zetal | | | | | | sph_besselsph_besselfsph_bessell") | | | | | | sph_legendresph_legendrefsph_legendrel") | | | | | | sph_neumannsph_neumannfsph_neumannl") | | | | | |

|  |  |  |
| --- | --- | --- |
| double      comp_ellint_1( double arg );  double      comp_ellint_1( float arg );  double      comp_ellint_1( long double arg );  float       comp_ellint_1f( float arg ); long double comp_ellint_1l( long double arg ); | (1) |  |
| double      comp_ellint_1( IntegralType arg ); | (2) |  |
|  |  |  |

1) Computes the complete elliptic integral of the first kind of arg.2) A set of overloads or a function template accepting an argument of any integral type. Equivalent to (1) after casting the argument to double.

As all special functions, `comp_ellint_1` is only guaranteed to be available in `<cmath>` if `__STDCPP_MATH_SPEC_FUNCS__` is defined by the implementation to a value at least 201003L and if the user defines `__STDCPP_WANT_MATH_SPEC_FUNCS__` before including any standard library headers.

### Parameters

|  |  |  |
| --- | --- | --- |
| arg | - | value of a floating-point or integral type |

### Return value

If no errors occur, value of the complete elliptic integral of the first kind of arg, that is ellint_1(arg, π/2), is returned.

### Error handling

Errors may be reported as specified in math_errhandling.

- If the argument is NaN, NaN is returned and domain error is not reported.
- If |arg| > 1, a domain error may occur.

### Notes

Implementations that do not support TR 29124 but support TR 19768, provide this function in the header `tr1/cmath` and namespace `std::tr1`.

An implementation of this function is also available in boost.math.

### Example

(works as shown with gcc 6.0)

Run this code

```
#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <cmath>
#include <iostream>
 
int main()
{
    double hpi = std::acos(-1) / 2;
    std::cout << "K(0) = " << std::comp_ellint_1(0) << '\n'
              << "π/2 = " << hpi << '\n'
              << "K(0.5) = " << std::comp_ellint_1(0.5) << '\n'
              << "F(0.5, π/2) = " << std::ellint_1(0.5, hpi) << '\n';
}

```

Output:

```
K(0) = 1.5708
π/2 = 1.5708
K(0.5) = 1.68575
F(0.5, π/2) = 1.68575

```

### External links

Weisstein, Eric W. "Complete Elliptic Integral of the First Kind." From MathWorld--A Wolfram Web Resource.

### See also

|  |  |
| --- | --- |
| ellint_1ellint_1fellint_1l") | (incomplete) elliptic integral of the first kind   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/special_functions/comp_ellint_1&oldid=158795>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 September 2023, at 10:38.