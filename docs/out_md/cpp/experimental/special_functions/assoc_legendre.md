# std::assoc_legendre, std::assoc_legendref, std::assoc_legendrel

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | assoc_laguerreassoc_laguerrefassoc_laguerrel | | | | | | ****assoc_legendreassoc_legendrefassoc_legendrel**** | | | | | | betabetafbetal | | | | | | comp_ellint_1comp_ellint_1fcomp_ellint_1l | | | | | | comp_ellint_2comp_ellint_2fcomp_ellint_2l | | | | | | comp_ellint_3comp_ellint_3fcomp_ellint_3l | | | | | | cyl_bessel_icyl_bessel_ifcyl_bessel_il") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cyl_bessel_jcyl_bessel_jfcyl_bessel_jl") | | | | | | cyl_bessel_kcyl_bessel_kfcyl_bessel_kl") | | | | | | cyl_neumanncyl_neumannfcyl_neumannl") | | | | | | ellint_1ellint_1fellint_1l") | | | | | | ellint_2ellint_2fellint_2l") | | | | | | ellint_3ellint_3fellint_3l") | | | | | | expintexpintfexpintl | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hermitehermitefhermitel | | | | | | laguerrelaguerreflaguerrel | | | | | | legendrelegendreflegendrel | | | | | | riemann_zetariemann_zetafriemann_zetal | | | | | | sph_besselsph_besselfsph_bessell") | | | | | | sph_legendresph_legendrefsph_legendrel") | | | | | | sph_neumannsph_neumannfsph_neumannl") | | | | | |

|  |  |  |
| --- | --- | --- |
| double      assoc_legendre( unsigned int n, unsigned int m, double x );  double      assoc_legendre( unsigned int n, unsigned int m, float x );  double      assoc_legendre( unsigned int n, unsigned int m, long double x );  float       assoc_legendref( unsigned int n, unsigned int m, float x ); long double assoc_legendrel( unsigned int n, unsigned int m, long double x ); | (1) |  |
| double      assoc_legendre( unsigned int n, unsigned int m, IntegralType x ); | (2) |  |
|  |  |  |

1) Computes the associated Legendre polynomials of the degree n, order m, and argument x.2) A set of overloads or a function template accepting an argument of any integral type. Equivalent to (1) after casting the argument to double.

As all special functions, `assoc_legendre` is only guaranteed to be available in `<cmath>` if `__STDCPP_MATH_SPEC_FUNCS__` is defined by the implementation to a value at least 201003L and if the user defines `__STDCPP_WANT_MATH_SPEC_FUNCS__` before including any standard library headers.

### Parameters

|  |  |  |
| --- | --- | --- |
| n | - | the degree of the polynomial, a value of unsigned integer type |
| m | - | the order of the polynomial, a value of unsigned integer type |
| x | - | the argument, a value of a floating-point or integral type |

### Return value

If no errors occur, value of the associated Legendre polynomial Pm  
n of x, that is (1 - x2  
)m/2  
 

|  |
| --- |
| dm |
| dxm |

Pn(x), is returned (where Pn(x) is the unassociated Legendre polynomial, std::legendre(n, x)).

### Error handling

Errors may be reported as specified in math_errhandling.

- If the argument is NaN, NaN is returned and domain error is not reported.
- If |x| > 1, a domain error may occur.
- If `n` is greater or equal to 128, the behavior is implementation-defined.

### Notes

Implementations that do not support TR 29124 but support TR 19768, provide this function in the header `tr1/cmath` and namespace `std::tr1`.

An implementation of this function is also available in boost.math.

The first few associated Legendre polynomials are:

- assoc_legendre(0, 0, x) = 1.
- assoc_legendre(1, 0, x) = x.
- assoc_legendre(1, 1, x) = -(1 - x2  
  )1/2  
  .
- assoc_legendre(2, 0, x) = 

  |  |
  | --- |
  | 1 |
  | 2 |

  (3x2  
   - 1).
- assoc_legendre(2, 1, x) = -3x(1 - x2  
  )1/2  
  .
- assoc_legendre(2, 2, x) = 3(1 - x2  
  ).

### Example

(works as shown with gcc 6.0)

Run this code

```
#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <cmath>
#include <iostream>
 
double P20(double x)
{
    return 0.5 * (3 * x * x - 1);
}
 
double P21(double x)
{
    return -3.0 * x * std::sqrt(1 - x * x);
}
 
double P22(double x)
{
    return 3 * (1 - x * x);
}
 
int main()
{
    // spot-checks
    std::cout << std::assoc_legendre(2, 0, 0.5) << '=' << P20(0.5) << '\n'
              << std::assoc_legendre(2, 1, 0.5) << '=' << P21(0.5) << '\n'
              << std::assoc_legendre(2, 2, 0.5) << '=' << P22(0.5) << '\n';
}

```

Output:

```
-0.125=-0.125
-1.29904=-1.29904
2.25=2.25

```

### See also

|  |  |
| --- | --- |
| legendrelegendreflegendrel | Legendre polynomials   (function) |

### External links

Weisstein, Eric W. "Associated Legendre Polynomial." From MathWorld--A Wolfram Web Resource.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/special_functions/assoc_legendre&oldid=169734>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 February 2024, at 06:02.