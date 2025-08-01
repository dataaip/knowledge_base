# operator==,!=(std::complex)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+operator- | | | | | | operator+operator-operator\*operator/ | | | | | | ****operator==operator!=****(until C++20) | | | | | | operator<<operator>> | | | | | | get(std::complex)(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | real | | | | | | imag | | | | | | abs | | | | | | arg | | | | | | norm | | | | | | conj | | | | | | proj(C++11) | | | | | | polar | | | | | | operator""ioperator""ifoperator""il(C++14)(C++14)(C++14) | | | | | |
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
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| template< class T >  bool operator==( const complex<T>& lhs, const complex<T>& rhs ); |  | (until C++14) |
| template< class T >  constexpr bool operator==( const complex<T>& lhs, const complex<T>& rhs ); |  | (since C++14) |
|  |  |  |
| --- | --- | --- |
|  | (2) |  |
| template< class T >  bool operator==( const complex<T>& lhs, const T& rhs ); |  | (until C++14) |
| template< class T >  constexpr bool operator==( const complex<T>& lhs, const T& rhs ); |  | (since C++14) |
|  |  |  |
| --- | --- | --- |
|  | (3) |  |
| template< class T >  bool operator==( const T& lhs, const complex<T>& rhs ); |  | (until C++14) |
| template< class T >  constexpr bool operator==( const T& lhs, const complex<T>& rhs ); |  | (since C++14)  (until C++20) |
|  |  |  |
| --- | --- | --- |
|  | (4) |  |
| template< class T >  bool operator!=( const complex<T>& lhs, const complex<T>& rhs ); |  | (until C++14) |
| template< class T >  constexpr bool operator!=( const complex<T>& lhs, const complex<T>& rhs ); |  | (since C++14)  (until C++20) |
|  |  |  |
| --- | --- | --- |
|  | (5) |  |
| template< class T >  bool operator!=( const complex<T>& lhs, const T& rhs ); |  | (until C++14) |
| template< class T >  constexpr bool operator!=( const complex<T>& lhs, const T& rhs ); |  | (since C++14)  (until C++20) |
|  |  |  |
| --- | --- | --- |
|  | (6) |  |
| template< class T >  bool operator!=( const T& lhs, const complex<T>& rhs ); |  | (until C++14) |
| template< class T >  constexpr bool operator!=( const T& lhs, const complex<T>& rhs ); |  | (since C++14)  (until C++20) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Compares two complex numbers. Scalar arguments are treated as complex numbers with the real part equal to the argument and the imaginary part set to zero.

1-3) Compares lhs and rhs for equality.4-6) Compares lhs and rhs for inequality.

|  |  |
| --- | --- |
| The `!=` operator is synthesized from `operator==`. | (since C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | the arguments to compare: either both complex numbers or one complex and one scalar of matching type (float, double, long double) |

### Return value

1-3) true if respective parts of lhs are equal to rhs, false otherwise.4-6) !(lhs == rhs)

### Example

Run this code

```
#include <complex>
 
int main()
{
    using std::operator""i; // or: using namespace std::complex_literals;
 
    static_assert(1.0i == 1.0i);
    static_assert(2.0i != 1.0i);
 
    constexpr std::complex z(1.0, 0.0);
    static_assert(z == 1.0);
    static_assert(1.0 == z);
    static_assert(2.0 != z);
    static_assert(z != 2.0);
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/complex/operator_cmp&oldid=150864>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 April 2023, at 06:36.