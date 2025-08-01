# std::sinh(std::valarray)

From cppreference.com
< cpp‎ | numeric‎ | valarray
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

std::valarray

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | valarray::valarray | | | | | | valarray::~valarray | | | | | | valarray::operator= | | | | | | [valarray::operator[]](operator_at.html "cpp/numeric/valarray/operator at") | | | | | | valarray::swap | | | | | | valarray::size | | | | | | valarray::resize | | | | | | valarray::sum | | | | | | valarray::min | | | | | | valarray::max | | | | | | valarray::shift | | | | | | valarray::cshift | | | | | | valarray::apply | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | valarray::operator+valarray::operator-valarray::operator~valarray::operator! | | | | | | valarray::operator+=valarray::operator-=valarray::operator\*=valarray::operator/=valarray::operator%=valarray::operator&=valarray::operator|=valarray::operator^=valarray::operator<<=valarray::operator>>= | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::valarray)(C++11) | | | | | | begin(std::valarray)(C++11) | | | | | | end(std::valarray)(C++11) | | | | | | abs | | | | | | exp | | | | | | log | | | | | | log10 | | | | | | pow | | | | | | sqrt | | | | | | sin | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | ****sinh**** | | | | | | cosh | | | | | | tanh | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator\*operator/operator%operator+operator-operator^operator&operator|operator<<operator>>operator&&operator|| | | | | | | operator==operator!=operator<operator>operator<=operator>= | | | | | |  | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | slice_array | | | | | | gslice_array | | | | | | indirect_array | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | slice | | | | | | gslice | | | | | | mask_array | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<valarray>` |  |  |
| template< class T >  valarray<T> sinh( const valarray<T>& va ); |  |  |
|  |  |  |

For each element in va computes hyperbolic sine of the value of the element.

### Parameters

|  |  |  |
| --- | --- | --- |
| va | - | value array to apply the operation to |

### Return value

Value array containing hyperbolic sine of the values in va.

### Notes

Unqualified function (sinh) is used to perform the computation. If such function is not available, std::sinh is used due to argument-dependent lookup.

The function can be implemented with the return type different from std::valarray. In this case, the replacement type has the following properties:

:   - All const member functions of std::valarray are provided.
    - std::valarray, std::slice_array, std::gslice_array, std::mask_array and std::indirect_array can be constructed from the replacement type.
    - For every function taking a const std::valarray<T>& except begin() and end()(since C++11), identical functions taking the replacement types shall be added;
    - For every function taking two const std::valarray<T>& arguments, identical functions taking every combination of const std::valarray<T>& and replacement types shall be added.
    - The return type does not add more than two levels of template nesting over the most deeply-nested argument type.

### Possible implementation

|  |
| --- |
| ```text template<class T> valarray<T> sinh(const valarray<T>& va) {     valarray<T> other = va;     for (T& i : other)         i = sinh(i);       return other; // proxy object may be returned } ``` |

### Example

Run this code

```
#include <cmath>
#include <complex>
#include <iomanip>
#include <iostream>
#include <valarray>
 
template<typename T>
void show(char const* title, const std::valarray<T>& va)
{
    std::cout << title << " : " << std::right;
    for (T x : va)
        std::cout << std::fixed << x << ' ';
    std::cout << '\n';
}
 
template<typename T>
void sinh_for(std::valarray<T> const& z)
{
    // Hyperbolic sine is sinh(z) = (eᶻ - e⁻ᶻ) / 2.
 
    const std::valarray<T> sinh_z{std::sinh(z)};
    const std::valarray<T> e_z{std::exp(z)};
    const std::valarray<T> e_neg_z{std::exp(-z)};
    const std::valarray<T> sinh_def{(e_z - e_neg_z) / 2.0f};
 
    show("n         ", z);
    show("sinh(n)   ", sinh_z);
    show("(eⁿ-e⁻ⁿ)/2", sinh_def);
 
    std::cout.put('\n');
}
 
int main()
{
    sinh_for(std::valarray<float>{-.2f, -.1f, 0.f, .1f, .2f, INFINITY});
    sinh_for(std::valarray<std::complex<double>>{{-.2,-.1}, {.2,.1}});
}

```

Output:

```
n          : -0.200000 -0.100000 0.000000 0.100000 0.200000 inf 
sinh(n)    : -0.201336 -0.100167 0.000000 0.100167 0.201336 inf 
(eⁿ-e⁻ⁿ)/2 : -0.201336 -0.100167 0.000000 0.100167 0.201336 inf 
 
n          : (-0.200000,-0.100000) (0.200000,0.100000) 
sinh(n)    : (-0.200330,-0.101837) (0.200330,0.101837) 
(eⁿ-e⁻ⁿ)/2 : (-0.200330,-0.101837) (0.200330,0.101837)

```

### See also

|  |  |
| --- | --- |
| cosh(std::valarray) | applies the function std::cosh to each element of valarray   (function template) |
| tanh(std::valarray) | applies the function std::tanh to each element of valarray   (function template) |
| sinhsinhfsinhl(C++11)(C++11) | computes hyperbolic sine (\({\small\sinh{x}}\)sinh(x))   (function) |
| sinh(std::complex) | computes hyperbolic sine of a complex number (\({\small\sinh{z}}\)sinh(z))   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray/sinh&oldid=160818>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 17 October 2023, at 03:20.