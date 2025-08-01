# std::chi_squared_distribution

From cppreference.com
< cpp‎ | numeric‎ | random
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

Pseudo-random number generation

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Uniform random bit generators | | | | | | uniform_random_bit_generator(C++20) | | | | | | Random number engines | | | | | | linear_congruential_engine(C++11) | | | | | | mersenne_twister_engine(C++11) | | | | | | subtract_with_carry_engine(C++11) | | | | | | philox_engine(C++26) | | | | | | Random number engine adaptors | | | | | | discard_block_engine(C++11) | | | | | | independent_bits_engine(C++11) | | | | | | shuffle_order_engine(C++11) | | | | | | Predefined random number generators | | | | | | Non-deterministic random numbers | | | | | | random_device(C++11) | | | | | |  | | | | | | Utilities | | | | | | generate_canonical(C++11) | | | | | | seed_seq(C++11) | | | | | |  | | | | | | Random number algorithms | | | | | | ranges::generate_random(C++26) | | | | | |  | | | | | | C random library | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rand | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | srand | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | RAND_MAX | | | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random number distributions | | | | | | Uniform distributions | | | | | | uniform_int_distribution(C++11) | | | | | | uniform_real_distribution(C++11) | | | | | | generate_canonical(C++11) | | | | | | Bernoulli distributions | | | | | | bernoulli_distribution(C++11) | | | | | | binomial_distribution(C++11) | | | | | | negative_binomial_distribution(C++11) | | | | | | geometric_distribution(C++11) | | | | | | Poisson distributions | | | | | | poisson_distribution(C++11) | | | | | | exponential_distribution(C++11) | | | | | | gamma_distribution(C++11) | | | | | | weibull_distribution(C++11) | | | | | | extreme_value_distribution(C++11) | | | | | | Normal distributions | | | | | | normal_distribution(C++11) | | | | | | lognormal_distribution(C++11) | | | | | | ****chi_squared_distribution****(C++11) | | | | | | cauchy_distribution(C++11) | | | | | | fisher_f_distribution(C++11) | | | | | | student_t_distribution(C++11) | | | | | | Sampling distributions | | | | | | discrete_distribution(C++11) | | | | | | piecewise_constant_distribution(C++11) | | | | | | piecewise_linear_distribution(C++11) | | | | | |

****std::chi_squared_distribution****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| chi_squared_distribution::chi_squared_distribution | | | | |
| chi_squared_distribution::reset | | | | |
| Generation | | | | |
| chi_squared_distribution::operator()") | | | | |
| Characteristics | | | | |
| chi_squared_distribution::n | | | | |
| chi_squared_distribution::param | | | | |
| chi_squared_distribution::min | | | | |
| chi_squared_distribution::max | | | | |
| Non-member functions | | | | |
| operator==operator!=(C++11)(C++11)(until C++20) | | | | |
| operator<<operator>>(C++11)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<random>` |  |  |
| template< class RealType = double >  class chi_squared_distribution; |  | (since C++11) |
|  |  |  |

The `chi_squared_distribution` produces random numbers \(\small x>0\)x>0 according to the Chi-squared distribution:

:   \({\small f(x;n) = }\frac{x^{(n/2)-1}\exp{(-x/2)} }{\Gamma{(n/2)}2^{n/2} }\)f(x;n) = 

    |  |
    | --- |
    | x(n/2)-1  **e**-x/2 |
    | Γ(n/2) 2n/2 |

\(\small\Gamma\)Γ is the Gamma function (See also std::tgamma) and \(\small n\)n are the degrees of freedom "enwiki:Degrees of freedom (statistics)") (default 1).

`std::chi_squared_distribution` satisfies all requirements of RandomNumberDistribution.

### Template parameters

|  |  |  |
| --- | --- | --- |
| RealType | - | The result type generated by the generator. The effect is undefined if this is not one of float, double, or long double. |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `result_type` (C++11) | RealType |
| `param_type` (C++11) | the type of the parameter set, see RandomNumberDistribution. |

### Member functions

|  |  |
| --- | --- |
| (constructor)(C++11) | constructs new distribution   (public member function) |
| reset(C++11) | resets the internal state of the distribution   (public member function) |
| Generation | |
| operator()")(C++11) | generates the next random number in the distribution   (public member function) |
| Characteristics | |
| n(C++11) | returns the degrees of freedom (\(\small n\)n) distribution parameter   (public member function) |
| param(C++11) | gets or sets the distribution parameter object   (public member function) |
| min(C++11) | returns the minimum potentially generated value   (public member function) |
| max(C++11) | returns the maximum potentially generated value   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=(C++11)(C++11)(removed in C++20) | compares two distribution objects   (function) |
| operator<<operator>>(C++11) | performs stream input and output on pseudo-random number distribution   (function template) |

### Example

Run this code

```
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <vector>
 
template<int Height = 5, int BarWidth = 1, int Padding = 1, int Offset = 0, class Seq>
void draw_vbars(Seq&& s, const bool DrawMinMax = true)
{
    static_assert(0 < Height and 0 < BarWidth and 0 <= Padding and 0 <= Offset);
 
    auto cout_n = [](auto&& v, int n = 1)
    {
        while (n-- > 0)
            std::cout << v;
    };
 
    const auto [min, max] = std::minmax_element(std::cbegin(s), std::cend(s));
 
    std::vector<std::div_t> qr;
    for (typedef decltype(*std::cbegin(s)) V; V e : s)
        qr.push_back(std::div(std::lerp(V(0), 8 * Height,
                                        (e - *min) / (*max - *min)), 8));
 
    for (auto h{Height}; h-- > 0; cout_n('\n'))
    {
        cout_n(' ', Offset);
 
        for (auto dv : qr)
        {
            const auto q{dv.quot}, r{dv.rem};
            unsigned char d[]{0xe2, 0x96, 0x88, 0}; // Full Block: '█'
            q < h ? d[0] = ' ', d[1] = 0 : q == h ? d[2] -= (7 - r) : 0;
            cout_n(d, BarWidth), cout_n(' ', Padding);
        }
 
        if (DrawMinMax && Height > 1)
            Height - 1 == h ? std::cout << "┬ " << *max:
                          h ? std::cout << "│ "
                            : std::cout << "┴ " << *min;
    }
}
 
int main()
{
    std::random_device rd{};
    std::mt19937 gen{rd()};
 
    auto χ2 = &gen
    {
        std::chi_squared_distribution<float> d{dof /* n */};
 
        const int norm = 1'00'00;
        const float cutoff = 0.002f;
 
        std::map<int, int> hist{};
        for (int n = 0; n != norm; ++n)
            ++hist[std::round(d(gen))];
 
        std::vector<float> bars;
        std::vector<int> indices;
        for (auto const& [n, p] : hist)
            if (float x = p * (1.0 / norm); cutoff < x)
            {
                bars.push_back(x);
                indices.push_back(n);
            }
 
        std::cout << "dof = " << dof << ":\n";
 
        for (draw_vbars<4, 3>(bars); int n : indices)
            std::cout << std::setw(2) << n << "  ";
        std::cout << "\n\n";
    };
 
    for (float dof : {1.f, 2.f, 3.f, 4.f, 6.f, 9.f})
        χ2(dof);
}

```

Possible output:

```

dof = 1:
███                                 ┬ 0.5271
███                                 │
███ ███                             │
███ ███ ▇▇▇ ▃▃▃ ▂▂▂ ▁▁▁ ▁▁▁ ▁▁▁ ▁▁▁ ┴ 0.003
 0   1   2   3   4   5   6   7   8
 
dof = 2:
    ███                                     ┬ 0.3169
▆▆▆ ███ ▃▃▃                                 │
███ ███ ███ ▄▄▄                             │
███ ███ ███ ███ ▇▇▇ ▄▄▄ ▃▃▃ ▂▂▂ ▁▁▁ ▁▁▁ ▁▁▁ ┴ 0.004
 0   1   2   3   4   5   6   7   8   9  10
 
dof = 3:
    ███ ▃▃▃                                         ┬ 0.2439
    ███ ███ ▄▄▄                                     │
▃▃▃ ███ ███ ███ ▇▇▇ ▁▁▁                             │
███ ███ ███ ███ ███ ███ ▆▆▆ ▄▄▄ ▃▃▃ ▂▂▂ ▁▁▁ ▁▁▁ ▁▁▁ ┴ 0.0033
 0   1   2   3   4   5   6   7   8   9  10  11  12
 
dof = 4:
    ▂▂▂ ███ ▃▃▃                                                 ┬ 0.1864
    ███ ███ ███ ███ ▂▂▂                                         │
    ███ ███ ███ ███ ███ ▅▅▅ ▁▁▁                                 │
▅▅▅ ███ ███ ███ ███ ███ ███ ███ ▆▆▆ ▄▄▄ ▃▃▃ ▂▂▂ ▂▂▂ ▁▁▁ ▁▁▁ ▁▁▁ ┴ 0.0026
 0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
 
dof = 6:
            ▅▅▅ ▇▇▇ ███ ▂▂▂                                                 ┬ 0.1351
        ▅▅▅ ███ ███ ███ ███ ▇▇▇ ▁▁▁                                         │
    ▁▁▁ ███ ███ ███ ███ ███ ███ ███ ▅▅▅ ▂▂▂                                 │
▁▁▁ ███ ███ ███ ███ ███ ███ ███ ███ ███ ███ ███ ▅▅▅ ▄▄▄ ▃▃▃ ▂▂▂ ▁▁▁ ▁▁▁ ▁▁▁ ┴ 0.0031
 0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18
 
dof = 9:
            ▅▅▅ ▇▇▇ ███ ███ ▄▄▄ ▂▂▂                                                 ┬ 0.1044
        ▃▃▃ ███ ███ ███ ███ ███ ███ ▅▅▅ ▁▁▁                                         │
    ▄▄▄ ███ ███ ███ ███ ███ ███ ███ ███ ███ ▆▆▆ ▃▃▃                                 │
▄▄▄ ███ ███ ███ ███ ███ ███ ███ ███ ███ ███ ███ ███ ███ ▆▆▆ ▄▄▄ ▃▃▃ ▂▂▂ ▁▁▁ ▁▁▁ ▁▁▁ ┴ 0.0034
 2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22

```

### External links

|  |  |
| --- | --- |
| 1. | Weisstein, Eric W. "Chi-Squared Distribution." From MathWorld — A Wolfram Web Resource. |
| 2. | Chi-squared distribution — From Wikipedia. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/random/chi_squared_distribution&oldid=166587>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 December 2023, at 04:03.