# std::tan(std::complex)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+operator- | | | | | | operator+operator-operator\*operator/ | | | | | | operator==operator!=(until C++20) | | | | | | operator<<operator>> | | | | | | get(std::complex)(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | real | | | | | | imag | | | | | | abs | | | | | | arg | | | | | | norm | | | | | | conj | | | | | | proj(C++11) | | | | | | polar | | | | | | operator""ioperator""ifoperator""il(C++14)(C++14)(C++14) | | | | | |
| Exponential functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | log | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | log10 | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | exp | | | | | | |
| Power functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pow | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sqrt | | | | | | |
| Trigonometric functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sin | | | | | | cos | | | | | | ****tan**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | asin(C++11) | | | | | | acos(C++11) | | | | | | atan(C++11) | | | | | | |
| Hyperbolic functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sinh | | | | | | cosh | | | | | | tanh | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | asinh(C++11) | | | | | | acosh(C++11) | | | | | | atanh(C++11) | | | | | | |
| Helper types | | | | |
| tuple_size<std::complex>(C++26) | | | | |
| tuple_element<std::complex>(C++26) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<complex>` |  |  |
| template< class T >   complex<T> tan( const complex<T>& z ); |  |  |
|  |  |  |

Computes complex tangent of a complex value z.

### Parameters

|  |  |  |
| --- | --- | --- |
| z | - | complex value |

### Return value

If no errors occur, the complex tangent of z is returned.

Errors and special cases are handled as if the operation is implemented by -i \*std::tanh(i \* z), where `i` is the imaginary unit.

### Notes

Tangent is an analytical function on the complex plain and has no branch cuts. It is periodic with respect to the real component, with period πi, and has poles of the first order along the real line, at coordinates (π(1/2 + n), 0). However no common floating-point representation is able to represent π/2 exactly, thus there is no value of the argument for which a pole error occurs.

Mathematical definition of the tangent is tan z = 

|  |
| --- |
| i(e-iz -eiz ) |
| e-iz +eiz |

.

### Example

Run this code

```
#include <cmath>
#include <complex>
#include <iostream>
 
int main()
{
    std::cout << std::fixed;
    std::complex<double> z(1.0, 0.0); // behaves like real tangent along the real line
    std::cout << "tan" << z << " = " << std::tan(z)
              << " ( tan(1) = " << std::tan(1) << ")\n";
 
    std::complex<double> z2(0.0, 1.0); // behaves like tanh along the imaginary line
    std::cout << "tan" << z2 << " = " << std::tan(z2)
              << " (tanh(1) = " << std::tanh(1) << ")\n";
}

```

Output:

```
tan(1.000000,0.000000) = (1.557408,0.000000) ( tan(1) = 1.557408)
tan(0.000000,1.000000) = (0.000000,0.761594) (tanh(1) = 0.761594)

```

### See also

|  |  |
| --- | --- |
| sin(std::complex) | computes sine of a complex number (\({\small\sin{z}}\)sin(z))   (function template) |
| cos(std::complex) | computes cosine of a complex number (\({\small\cos{z}}\)cos(z))   (function template) |
| atan(std::complex)(C++11) | computes arc tangent of a complex number (\({\small\arctan{z}}\)arctan(z))   (function template) |
| tantanftanl(C++11)(C++11) | computes tangent (\({\small\tan{x}}\)tan(x))   (function) |
| tan(std::valarray) | applies the function std::tan to each element of valarray   (function template) |
| C documentation for ctan | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/complex/tan&oldid=150881>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 April 2023, at 10:58.