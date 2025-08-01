# std::arg(std::complex)

From cppreference.com
< cpp‎ | numeric‎ | complex
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

std::complex

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | complex::complex | | | | | | complex::operator= | | | | | | complex::real | | | | | | complex::imag | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | complex::operator+=complex::operator-=complex::operator\*=complex::operator/= | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+operator- | | | | | | operator+operator-operator\*operator/ | | | | | | operator==operator!=(until C++20) | | | | | | operator<<operator>> | | | | | | get(std::complex)(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | real | | | | | | imag | | | | | | abs | | | | | | ****arg**** | | | | | | norm | | | | | | conj | | | | | | proj(C++11) | | | | | | polar | | | | | | operator""ioperator""ifoperator""il(C++14)(C++14)(C++14) | | | | | |
| Exponential functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | log | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | log10 | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | exp | | | | | | |
| Power functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pow | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sqrt | | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sin | | | | | | cos | | | | | | tan | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | asin(C++11) | | | | | | acos(C++11) | | | | | | atan(C++11) | | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sinh | | | | | | cosh | | | | | | tanh | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | asinh(C++11) | | | | | | acosh(C++11) | | | | | | atanh(C++11) | | | | | | |
| Helper types | | | | |
| tuple_size<std::complex>(C++26) | | | | |
| tuple_element<std::complex>(C++26) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex>` |  |  |
| template< class T >   T           arg( const std::complex<T>& z ); | (1) |  |
| Additional overloads (since C++11) |  |  |
| Defined in header `<complex>` |  |  |
|  |  |  |
| --- | --- | --- |
|  | (A) |  |
| float       arg( float f );  double      arg( double f ); long double arg( long double f ); |  | (until C++23) |
| template< class FloatingPoint >   FloatingPoint             arg( FloatingPoint f ); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| template< class Integer >   double      arg( Integer i ); | (B) |  |
|  |  |  |

1) Calculates the phase angle (in radians) of the complex number z.

|  |  |
| --- | --- |
| A,B) Additional overloads are provided for all integer and floating-point types, which are treated as complex numbers with zero imaginary component. | (since C++11) |

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex value |
| f | - | floating-point value |
| i | - | integer value |

### Return value

1) std::atan2(std::imag(z), std::real(z)). If no errors occur, this is the phase angle of z in the interval [−π; π].A) Zero if f is positive or +0, π if f is negative or -0, NaN otherwise.B) Zero if i is non-negative, π if it is negative.

### Notes

The additional overloads are not required to be provided exactly as (A,B). They only need to be sufficient to ensure that for their argument num:

- If num has a standard(until C++23) floating-point type `T`, then std::arg(num) has the same effect as std::arg(std::complex<T>(num)).
- Otherwise, if num has an integer type, then std::arg(num) has the same effect as std::arg(std::complex<double>(num)).

### Example

Run this code

```
#include <complex>
#include <iostream>
 
int main() 
{
    std::complex<double> z1(1, 0);
    std::complex<double> z2(0, 0);
    std::complex<double> z3(0, 1);
    std::complex<double> z4(-1, 0);
    std::complex<double> z5(-1, -0.0);
    double f = 1.;
    int i = -1;
 
    std::cout << "phase angle of " << z1 << " is " << std::arg(z1) << '\n'
              << "phase angle of " << z2 << " is " << std::arg(z2) << '\n'
              << "phase angle of " << z3 << " is " << std::arg(z3) << '\n'
              << "phase angle of " << z4 << " is " << std::arg(z4) << '\n'
              << "phase angle of " << z5 << " is " << std::arg(z5) << " "
                 "(the other side of the cut)\n"
              << "phase angle of " << f << " is " << std::arg(f) << '\n'
              << "phase angle of " << i << " is " << std::arg(i) << '\n';
 
}

```

Output:

```
phase angle of (1,0) is 0
phase angle of (0,0) is 0
phase angle of (0,1) is 1.5708
phase angle of (-1,0) is 3.14159
phase angle of (-1,-0) is -3.14159 (the other side of the cut)
phase angle of 1 is 0
phase angle of -1 is 3.14159

```

### See also

|  |  |
| --- | --- |
| abs(std::complex) | returns the magnitude of a complex number   (function template) |
| polar | constructs a complex number from magnitude and phase angle   (function template) |
| atan2atan2fatan2l(C++11)(C++11) | arc tangent, using signs to determine quadrants   (function) |
| atan2(std::valarray) | applies the function std::atan2 to a valarray and a value   (function template) |
| C documentation for carg | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/complex/arg&oldid=154807>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 July 2023, at 11:56.