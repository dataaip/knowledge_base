# Mathematical constants

From cppreference.com
< cpp‎ | numeric
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
| ****Mathematical constants**** (C++20) | | | | |
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

 ****Mathematical constants****

### Constants (since C++20)

|  |  |
| --- | --- |
| Defined in header `<numbers>` | |
| Defined in namespace `std::numbers` | |
| e_v | the mathematical constant \(\small e\)e "enwiki:E (mathematical constant)") (variable template) |
| log2e_v | \(\log_{2}e\)log2e (variable template) |
| log10e_v | \(\log_{10}e\)log10e (variable template) |
| pi_v | the mathematical constant \(\pi\)π "enwiki:Pi (mathematical constant)") (variable template) |
| inv_pi_v | \(\frac1\pi\)  |  | | --- | | 1 | | π |   (variable template) |
| inv_sqrtpi_v | \(\frac1{\sqrt\pi}\)  |  | | --- | | 1 | | √π |   (variable template) |
| ln2_v | \(\ln{2}\)ln 2 (variable template) |
| ln10_v | \(\ln{10}\)ln 10 (variable template) |
| sqrt2_v | \(\sqrt2\)√2 (variable template) |
| sqrt3_v | \(\sqrt3\)√3 (variable template) |
| inv_sqrt3_v | \(\frac1{\sqrt3}\)  |  | | --- | | 1 | | √3 |   (variable template) |
| egamma_v | the Euler–Mascheroni constant γ (variable template) |
| phi_v | the golden ratio Φ (\(\frac{1+\sqrt5}2\)  |  | | --- | | 1 + √5 | | 2 |  ) (variable template) |
| inline constexpr double e | e_v<double>   (constant) |
| inline constexpr double log2e | log2e_v<double>   (constant) |
| inline constexpr double log10e | log10e_v<double>   (constant) |
| inline constexpr double pi | pi_v<double>   (constant) |
| inline constexpr double inv_pi | inv_pi_v<double>   (constant) |
| inline constexpr double inv_sqrtpi | inv_sqrtpi_v<double>   (constant) |
| inline constexpr double ln2 | ln2_v<double>   (constant) |
| inline constexpr double ln10 | ln10_v<double>   (constant) |
| inline constexpr double sqrt2 | sqrt2_v<double>   (constant) |
| inline constexpr double sqrt3 | sqrt3_v<double>   (constant) |
| inline constexpr double inv_sqrt3 | inv_sqrt3_v<double>   (constant) |
| inline constexpr double egamma | egamma_v<double>   (constant) |
| inline constexpr double phi | phi_v<double>   (constant) |

### Notes

A program that instantiates a primary template of a mathematical constant variable template is ill-formed.

The standard library specializes mathematical constant variable templates for all floating-point types (i.e. float, doublelong double , and fixed width floating-point types(since C++23)).

A program may partially or explicitly specialize a mathematical constant variable template provided that the specialization depends on a program-defined type.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_math_constants` | `201907L` | (C++20) | Mathematical constants |

### Example

Run this code

```
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numbers>
#include <string_view>
 
auto egamma_aprox(const unsigned iterations)
{
    long double s{};
    for (unsigned m{2}; m != iterations; ++m)
        if (const long double t{std::riemann_zetal(m) / m}; m % 2)
            s -= t;
        else
            s += t;
    return s;
};
 
int main()
{
    using namespace std::numbers;
    using namespace std::string_view_literals;
 
    const auto x = std::sqrt(inv_pi) / inv_sqrtpi +
        std::ceil(std::exp2(log2e)) + sqrt3 * inv_sqrt3 + std::exp(0);
    const auto v = (phi * phi - phi) + 1 / std::log2(sqrt2) +
        log10e * ln10 + std::pow(e, ln2) - std::cos(pi);    
    std::cout << "The answer is " << x * v << '\n';
 
    constexpr auto γ{"0.577215664901532860606512090082402"sv};
    std::cout
        << "γ as 10⁶ sums of ±ζ(m)/m   = "
        << egamma_aprox(1'000'000) << '\n'
        << "γ as egamma_v<float>       = "
        << std::setprecision(std::numeric_limits<float>::digits10 + 1)
        << egamma_v<float> << '\n'
        << "γ as egamma_v<double>      = "
        << std::setprecision(std::numeric_limits<double>::digits10 + 1)
        << egamma_v<double> << '\n'
        << "γ as egamma_v<long double> = "
        << std::setprecision(std::numeric_limits<long double>::digits10 + 1)
        << egamma_v<long double> << '\n'
        << "γ with " << γ.length() - 1 << " digits precision = " << γ << '\n';
}

```

Possible output:

```
The answer is 42
γ as 10⁶ sums of ±ζ(m)/m   = 0.577215
γ as egamma_v<float>       = 0.5772157
γ as egamma_v<double>      = 0.5772156649015329
γ as egamma_v<long double> = 0.5772156649015328606
γ with 34 digits precision = 0.577215664901532860606512090082402

```

### See also

|  |  |
| --- | --- |
| ratio(C++11) | represents exact rational fraction   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/constants&oldid=178946>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 January 2025, at 11:27.