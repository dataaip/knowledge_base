# std::cauchy_distribution<RealType>::a, b

From cppreference.com
< cpp‎ | numeric‎ | random‎ | cauchy distribution
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Uniform random bit generators | | | | | | uniform_random_bit_generator(C++20) | | | | | | Random number engines | | | | | | linear_congruential_engine(C++11) | | | | | | mersenne_twister_engine(C++11) | | | | | | subtract_with_carry_engine(C++11) | | | | | | philox_engine(C++26) | | | | | | Random number engine adaptors | | | | | | discard_block_engine(C++11) | | | | | | independent_bits_engine(C++11) | | | | | | shuffle_order_engine(C++11) | | | | | | Predefined random number generators | | | | | | Non-deterministic random numbers | | | | | | random_device(C++11) | | | | | |  | | | | | | Utilities | | | | | | generate_canonical(C++11) | | | | | | seed_seq(C++11) | | | | | |  | | | | | | Random number algorithms | | | | | | ranges::generate_random(C++26) | | | | | |  | | | | | | C random library | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rand | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | srand | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | RAND_MAX | | | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random number distributions | | | | | | Uniform distributions | | | | | | uniform_int_distribution(C++11) | | | | | | uniform_real_distribution(C++11) | | | | | | generate_canonical(C++11) | | | | | | Bernoulli distributions | | | | | | bernoulli_distribution(C++11) | | | | | | binomial_distribution(C++11) | | | | | | negative_binomial_distribution(C++11) | | | | | | geometric_distribution(C++11) | | | | | | Poisson distributions | | | | | | poisson_distribution(C++11) | | | | | | exponential_distribution(C++11) | | | | | | gamma_distribution(C++11) | | | | | | weibull_distribution(C++11) | | | | | | extreme_value_distribution(C++11) | | | | | | Normal distributions | | | | | | normal_distribution(C++11) | | | | | | lognormal_distribution(C++11) | | | | | | chi_squared_distribution(C++11) | | | | | | cauchy_distribution(C++11) | | | | | | fisher_f_distribution(C++11) | | | | | | student_t_distribution(C++11) | | | | | | Sampling distributions | | | | | | discrete_distribution(C++11) | | | | | | piecewise_constant_distribution(C++11) | | | | | | piecewise_linear_distribution(C++11) | | | | | |

std::cauchy_distribution

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| cauchy_distribution::cauchy_distribution | | | | |
| cauchy_distribution::reset | | | | |
| Generation | | | | |
| cauchy_distribution::operator()") | | | | |
| Characteristics | | | | |
| ****cauchy_distribution::acauchy_distribution::b**** | | | | |
| cauchy_distribution::param | | | | |
| cauchy_distribution::min | | | | |
| cauchy_distribution::max | | | | |
| Non-member functions | | | | |
| operator==operator!=(C++11)(C++11)(until C++20) | | | | |
| operator<<operator>>(C++11)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| RealType a() const; | (1) | (since C++11) |
| RealType b() const; | (2) | (since C++11) |
|  |  |  |

Returns the distribution parameters with which the distribution was constructed.

1) Returns the **a** parameter. It specifies the location of the peak and is also called location parameter. The default value is 0.0.2) Returns the **b** parameter. It represents the half-width at half-maximum (HWHM) and is also called scale parameter. The default value is 1.0.

### Parameters

(none)

### Return value

1) The value of the **a** parameter.2) The value of the **b** parameter.

### See also

|  |  |
| --- | --- |
| param(C++11) | gets or sets the distribution parameter object   (public member function) |

### External links

|  |  |
| --- | --- |
| 1. | Scale parameter. From Wikipedia. |
| 2. | Location parameter. From Wikipedia. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/random/cauchy_distribution/params&oldid=178585>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 13:58.