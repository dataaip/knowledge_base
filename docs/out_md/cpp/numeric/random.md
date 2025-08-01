# Pseudo-random number generation

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
| Mathematical constants (C++20) | | | | |
| Basic linear algebra algorithms (C++26) | | | | |
| Data-parallel types (SIMD) (C++26) | | | | |
| Floating-point environment (C++11) | | | | |
| Complex numbers | | | | |
| Numeric array (`valarray`) | | | | |
| ****Pseudo-random number generation**** | | | | |
| Bit manipulation (C++20) | | | | |
| Factor operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | gcd(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lcm(C++17) | | | | | |
| Interpolations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | midpoint(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lerp(C++20) | | | | | |
| Saturation arithmetic | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | add_sat(C++26) | | | | | | sub_sat(C++26) | | | | | | saturate_cast(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mul_sat(C++26) | | | | | | div_sat(C++26) | | | | | |  | | | | | |
| Generic numeric operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | ranges::iota(C++23) | | | | | | accumulate | | | | | | inner_product | | | | | | adjacent_difference | | | | | | partial_sum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |

****Pseudo-random number generation****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Uniform random bit generators | | | | | | uniform_random_bit_generator(C++20) | | | | | | Random number engines | | | | | | linear_congruential_engine(C++11) | | | | | | mersenne_twister_engine(C++11) | | | | | | subtract_with_carry_engine(C++11) | | | | | | philox_engine(C++26) | | | | | | Random number engine adaptors | | | | | | discard_block_engine(C++11) | | | | | | independent_bits_engine(C++11) | | | | | | shuffle_order_engine(C++11) | | | | | | Predefined random number generators | | | | | | Non-deterministic random numbers | | | | | | random_device(C++11) | | | | | |  | | | | | | Utilities | | | | | | generate_canonical(C++11) | | | | | | seed_seq(C++11) | | | | | |  | | | | | | Random number algorithms | | | | | | ranges::generate_random(C++26) | | | | | |  | | | | | | C random library | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rand | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | srand | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | RAND_MAX | | | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random number distributions | | | | | | Uniform distributions | | | | | | uniform_int_distribution(C++11) | | | | | | uniform_real_distribution(C++11) | | | | | | generate_canonical(C++11) | | | | | | Bernoulli distributions | | | | | | bernoulli_distribution(C++11) | | | | | | binomial_distribution(C++11) | | | | | | negative_binomial_distribution(C++11) | | | | | | geometric_distribution(C++11) | | | | | | Poisson distributions | | | | | | poisson_distribution(C++11) | | | | | | exponential_distribution(C++11) | | | | | | gamma_distribution(C++11) | | | | | | weibull_distribution(C++11) | | | | | | extreme_value_distribution(C++11) | | | | | | Normal distributions | | | | | | normal_distribution(C++11) | | | | | | lognormal_distribution(C++11) | | | | | | chi_squared_distribution(C++11) | | | | | | cauchy_distribution(C++11) | | | | | | fisher_f_distribution(C++11) | | | | | | student_t_distribution(C++11) | | | | | | Sampling distributions | | | | | | discrete_distribution(C++11) | | | | | | piecewise_constant_distribution(C++11) | | | | | | piecewise_linear_distribution(C++11) | | | | | |

The random number library provides classes that generate random and pseudo-random numbers. These classes include:

- Uniform random bit generators (URBGs), which include both random number engines, which are pseudo-random number generators that generate integer sequences with a uniform distribution, and true random number generators (if available).
- Random number distributions (e.g. uniform, normal, or poisson distributions) which convert the output of URBGs into various statistical distributions.

URBGs and distributions are designed to be used together to produce random values. All of the random number engines may be specifically seeded, serialized, and de-serialized for use with repeatable simulators.

### Uniform random bit generators

A **uniform random bit generator** is a function object returning unsigned integer values such that each value in the range of possible results has (ideally) equal probability of being returned.

All uniform random bit generators meet the UniformRandomBitGenerator requirements.
C++20 also defines a `uniform_random_bit_generator` concept.

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| uniform_random_bit_generator(C++20) | specifies that a type qualifies as a uniform random bit generator   (concept) |

### Random number engines

A **random number engine** (commonly shortened to **engine** ﻿) is a uniform random bit generator which generates pseudo-random numbers using seed data as entropy source.

At any given time, an engine e of type `E` has a state e`i` for some non-negative integer i. Upon construction, e has an initial state e`0`, which is determined by engine parameters and an initial seed (or seed sequence).

The following properties are always defined for any engine type `E`:

- The **size** of `E`’s state in multiples of the size of `E::result_type` (i.e. (sizeof e`i`) / sizeof(E::result_type)).
- The **transition algorithm** TA by which e’s state e`i` is advanced to its successor state e`i+1` (i.e. TA(e`i`) == e`i+1`).
- The **generation algorithm** GA by which e’s state is mapped to a value of type `E::result_type`, the result is a pseudo-random number.

A pseudo-random number sequence can be generated by calling TA and GA alternatively.

The standard library provides the implementations of three different classes of pseudo-random number generation algorithms as class templates, so that the algorithms can be customized. The choice of which engine to use involves a number of trade-offs:

- The linear congruential engine is moderately fast and has a very small storage requirement for state.
- The Mersenne twister engine is slower and has greater state storage requirements but with the right parameters has the longest non-repeating sequence with the most desirable spectral characteristics (for a given definition of desirable).
- The subtract with carry engine is very fast even on processors without advanced arithmetic instruction sets, at the expense of greater state storage and sometimes less desirable spectral characteristics.

|  |  |
| --- | --- |
| - The Philox engine is a counter-based random number generator. It has a small state and a long period (not less than 2^130) and is intended for use in Monte-Carlo simulations which require massively parallel random number generation. It is easily vectorized and parallelized and is implemented in GPU-optimized libraries. | (since C++26) |

None of these random number engines are cryptographically secure. As with any secure operation, a crypto library should be used for the purpose (e.g. OpenSSL `RAND_bytes`).

All types instantiated from these templates meet the RandomNumberEngine requirements.

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| linear_congruential_engine(C++11) | implements linear congruential algorithm   (class template) |
| mersenne_twister_engine(C++11) | implements Mersenne twister algorithm   (class template) |
| subtract_with_carry_engine(C++11) | implements a subtract-with-carry (lagged Fibonacci) algorithm   (class template) |
| philox_engine(C++26) | a counter-based parallelizable generator   (class template) |

### Random number engine adaptors

Random number engine adaptors generate pseudo-random numbers using another random number engine as entropy source. They are generally used to alter the spectral characteristics of the underlying engine.

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| discard_block_engine(C++11) | discards some output of a random number engine   (class template) |
| independent_bits_engine(C++11) | packs the output of a random number engine into blocks of a specified number of bits   (class template) |
| shuffle_order_engine(C++11) | delivers the output of a random number engine in a different order   (class template) |

### Predefined random number generators

Several specific popular algorithms are predefined.

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| Type | Definition |
| `minstd_rand0` (C++11) | std::linear_congruential_engine<std::uint_fast32_t, 16807, 0, 2147483647>  Discovered in 1969 by Lewis, Goodman and Miller, adopted as "Minimal standard" in 1988 by Park and Miller |
| `minstd_rand` (C++11) | std::linear_congruential_engine<std::uint_fast32_t, 48271, 0, 2147483647>  Newer "Minimum standard", recommended by Park, Miller, and Stockmeyer in 1993 |
| `mt19937` (C++11) | std::mersenne_twister_engine<std::uint_fast32_t,  32, 624, 397, 31,  0x9908b0df, 11,  0xffffffff, 7,  0x9d2c5680, 15,  0xefc60000, 18, 1812433253>  32-bit Mersenne Twister by Matsumoto and Nishimura, 1998 |
| `mt19937_64` (C++11) | std::mersenne_twister_engine<std::uint_fast64_t,  64, 312, 156, 31,  0xb5026f5aa96619e9, 29,  0x5555555555555555, 17,  0x71d67fffeda60000, 37,  0xfff7eee000000000, 43,  6364136223846793005>  64-bit Mersenne Twister by Matsumoto and Nishimura, 2000 |
| `ranlux24_base` (C++11) | std::subtract_with_carry_engine<std::uint_fast32_t, 24, 10, 24> |
| `ranlux48_base` (C++11) | std::subtract_with_carry_engine<std::uint_fast64_t, 48, 5, 12> |
| `ranlux24` (C++11) | std::discard_block_engine<std::ranlux24_base, 223, 23>  24-bit RANLUX generator by Martin Lüscher and Fred James, 1994 |
| `ranlux48` (C++11) | std::discard_block_engine<std::ranlux48_base, 389, 11>  48-bit RANLUX generator by Martin Lüscher and Fred James, 1994 |
| `knuth_b` (C++11) | std::shuffle_order_engine<std::minstd_rand0, 256> |
| `philox4x32` (C++26) | std::philox_engine<std::uint_fast32_t, 32, 4, 10, 0xD2511F53, 0x9E3779B9, 0xCD9E8D57, 0xBB67AE85> |
| `philox4x64` (C++26) | std::philox_engine<std::uint_fast64_t, 64, 4, 10, 0xD2E7470EE14C6C93, 0x9E3779B97F4A7C15, 0xCA5A826395121157, 0xBB67AE8584CAA73B> |
| `default_random_engine` (C++11) | **implementation-defined** |

### Non-deterministic random numbers

std::random_device is a non-deterministic uniform random bit generator, although implementations are allowed to implement std::random_device using a pseudo-random number engine if there is no support for non-deterministic random number generation.

|  |  |
| --- | --- |
| random_device(C++11) | non-deterministic random number generator using hardware entropy source   (class) |

### Random number distributions

A random number distribution post-processes the output of a URBG in such a way that resulting output is distributed according to a defined statistical probability density function.

Random number distributions satisfy RandomNumberDistribution.

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| Uniform distributions | |
| uniform_int_distribution(C++11) | produces integer values evenly distributed across a range   (class template) |
| uniform_real_distribution(C++11) | produces real values evenly distributed across a range   (class template) |
| Bernoulli distributions | |
| bernoulli_distribution(C++11) | produces bool values on a Bernoulli distribution   (class) |
| binomial_distribution(C++11) | produces integer values on a binomial distribution   (class template) |
| negative_binomial_distribution(C++11) | produces integer values on a negative binomial distribution   (class template) |
| geometric_distribution(C++11) | produces integer values on a geometric distribution   (class template) |
| Poisson distributions | |
| poisson_distribution(C++11) | produces integer values on a Poisson distribution   (class template) |
| exponential_distribution(C++11) | produces real values on an exponential distribution   (class template) |
| gamma_distribution(C++11) | produces real values on a gamma distribution   (class template) |
| weibull_distribution(C++11) | produces real values on a Weibull distribution   (class template) |
| extreme_value_distribution(C++11) | produces real values on an extreme value distribution   (class template) |
| Normal distributions | |
| normal_distribution(C++11) | produces real values on a standard normal (Gaussian) distribution   (class template) |
| lognormal_distribution(C++11) | produces real values on a lognormal distribution   (class template) |
| chi_squared_distribution(C++11) | produces real values on a chi-squared distribution   (class template) |
| cauchy_distribution(C++11) | produces real values on a Cauchy distribution   (class template) |
| fisher_f_distribution(C++11) | produces real values on a Fisher's F-distribution   (class template) |
| student_t_distribution(C++11) | produces real values on a Student's t-distribution   (class template) |
| Sampling distributions | |
| discrete_distribution(C++11) | produces integer values on a discrete distribution   (class template) |
| piecewise_constant_distribution(C++11) | produces real values distributed on constant subintervals   (class template) |
| piecewise_linear_distribution(C++11) | produces real values distributed on defined subintervals   (class template) |

### Utilities

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| generate_canonical(C++11) | evenly distributes real values of given precision across ``​0​`,`1`)`   (function template) |
| [seed_seq(C++11) | general-purpose bias-eliminating scrambled seed sequence generator   (class) |

### Random number algorithms

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| ranges::generate_random(C++26) | fills a range with random numbers from a uniform random bit generator (algorithm function object) |

### C random library

In addition to the engines and distributions described above, the functions and constants from the C random library are also available though not recommended:

|  |  |
| --- | --- |
| Defined in header `<cstdlib>` | |
| rand | generates a pseudo-random number   (function) |
| srand | seeds pseudo-random number generator   (function) |
| RAND_MAX | maximum possible value generated by std::rand   (macro constant) |

### Example

Run this code

```
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>
 
int main()
{
    // Seed with a real random value, if available
    std::random_device r;
 
    // Choose a random mean between 1 and 6
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 6);
    int mean = uniform_dist(e1);
    std::cout << "Randomly-chosen mean: " << mean << '\n';
 
    // Generate a normal distribution around that mean
    std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()};
    std::mt19937 e2(seed2);
    std::normal_distribution<> normal_dist(mean, 2);
 
    std::map<int, int> hist;
    for (int n = 0; n != 10000; ++n)
        ++hist[std::round(normal_dist(e2))];
 
    std::cout << "Normal distribution around " << mean << ":\n"
              << std::fixed << std::setprecision(1);
    for (auto [x, y] : hist)
        std::cout << std::setw(2) << x << ' ' << std::string(y / 200, '*') << '\n';
}

```

Possible output:

```
Randomly-chosen mean: 4
Normal distribution around 4:
-4
-3
-2
-1
 0 *
 1 ***
 2 ******
 3 ********
 4 *********
 5 ********
 6 ******
 7 ***
 8 *
 9
10
11
12

```

### See also

|  |  |
| --- | --- |
| C documentation for Pseudo-random number generation | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/random&oldid=178157>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2024, at 19:32.