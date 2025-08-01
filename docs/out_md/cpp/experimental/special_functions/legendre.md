# std::legendre, std::legendref, std::legendrel

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | assoc_laguerreassoc_laguerrefassoc_laguerrel | | | | | | assoc_legendreassoc_legendrefassoc_legendrel | | | | | | betabetafbetal | | | | | | comp_ellint_1comp_ellint_1fcomp_ellint_1l | | | | | | comp_ellint_2comp_ellint_2fcomp_ellint_2l | | | | | | comp_ellint_3comp_ellint_3fcomp_ellint_3l | | | | | | cyl_bessel_icyl_bessel_ifcyl_bessel_il") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cyl_bessel_jcyl_bessel_jfcyl_bessel_jl") | | | | | | cyl_bessel_kcyl_bessel_kfcyl_bessel_kl") | | | | | | cyl_neumanncyl_neumannfcyl_neumannl") | | | | | | ellint_1ellint_1fellint_1l") | | | | | | ellint_2ellint_2fellint_2l") | | | | | | ellint_3ellint_3fellint_3l") | | | | | | expintexpintfexpintl | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hermitehermitefhermitel | | | | | | laguerrelaguerreflaguerrel | | | | | | ****legendrelegendreflegendrel**** | | | | | | riemann_zetariemann_zetafriemann_zetal | | | | | | sph_besselsph_besselfsph_bessell") | | | | | | sph_legendresph_legendrefsph_legendrel") | | | | | | sph_neumannsph_neumannfsph_neumannl") | | | | | |

|  |  |  |
| --- | --- | --- |
| double      legendre( unsigned int n, double x );  double      legendre( unsigned int n, float x );  double      legendre( unsigned int n, long double x );  float       legendref( unsigned int n, float x ); long double legendrel( unsigned int n, long double x ); | (1) |  |
| double      legendre( unsigned int n, IntegralType x ); | (2) |  |
|  |  |  |

1) Computes the unassociated Legendre polynomials of the degree n and argument x.2) A set of overloads or a function template accepting an argument of any integral type. Equivalent to (1) after casting the argument to double.

As all special functions, `legendre` is only guaranteed to be available in `<cmath>` if `__STDCPP_MATH_SPEC_FUNCS__` is defined by the implementation to a value at least 201003L and if the user defines `__STDCPP_WANT_MATH_SPEC_FUNCS__` before including any standard library headers.

### Parameters

|  |  |  |
| --- | --- | --- |
| n | - | the degree of the polynomial |
| x | - | the argument, a value of a floating-point or integral type |

### Return value

If no errors occur, value of the order-`n` unassociated Legendre polynomial of `x`, that is 

|  |
| --- |
| 1 |
| 2n n! |

|  |
| --- |
| dn |
| dxn |

(x2  
 - 1)n  
, is returned.

### Error handling

Errors may be reported as specified in math_errhandling.

- If the argument is NaN, NaN is returned and domain error is not reported.
- The function is not required to be defined for |x| > 1.
- If n is greater or equal than 128, the behavior is implementation-defined.

### Notes

Implementations that do not support TR 29124 but support TR 19768, provide this function in the header `tr1/cmath` and namespace `std::tr1`.

An implementation of this function is also available in boost.math.

The first few Legendre polynomials are:

- legendre(0, x) = 1.
- legendre(1, x) = x.
- legendre(2, x) = 

  |  |
  | --- |
  | 1 |
  | 2 |

  (3x2  
   - 1).
- legendre(3, x) = 

  |  |
  | --- |
  | 1 |
  | 2 |

  (5x3  
   - 3x).
- legendre(4, x) = 

  |  |
  | --- |
  | 1 |
  | 8 |

  (35x4  
   - 30x2  
   + 3).

### Example

(works as shown with gcc 6.0)

Run this code

```
#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include <cmath>
#include <iostream>
 
double P3(double x)
{
    return 0.5 * (5 * std::pow(x, 3) - 3 * x);
}
 
double P4(double x)
{
    return 0.125 * (35 * std::pow(x, 4) - 30 * x * x + 3);
}
 
int main()
{
    // spot-checks
    std::cout << std::legendre(3, 0.25) << '=' << P3(0.25) << '\n'
              << std::legendre(4, 0.25) << '=' << P4(0.25) << '\n';
}

```

Output:

```
-0.335938=-0.335938
0.157715=0.157715

```

### See also

|  |  |
| --- | --- |
| laguerrelaguerreflaguerrel | Laguerre polynomials   (function) |
| hermitehermitefhermitel | Hermite polynomials   (function) |

### External links

|  |
| --- |
| Weisstein, Eric W. "Legendre Polynomial." From MathWorld — A Wolfram Web Resource. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/special_functions/legendre&oldid=158801>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 September 2023, at 10:44.