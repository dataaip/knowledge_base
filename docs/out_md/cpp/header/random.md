# Standard library header <random> (C++11)

From cppreference.com
< cpp‎ | header
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | ****<random>**** (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the pseudo-random number generation library.

|  |  |
| --- | --- |
| Includes | |
| <initializer_list>(C++11) | std::initializer_list class template |
| Concepts | |
| Uniform random bit generator requirements | |
| uniform_random_bit_generator(C++20) | specifies that a type qualifies as a uniform random bit generator   (concept) |
| Classes | |
| Random number engines | |
| linear_congruential_engine(C++11) | implements linear congruential algorithm   (class template) |
| mersenne_twister_engine(C++11) | implements Mersenne twister algorithm   (class template) |
| subtract_with_carry_engine(C++11) | implements a subtract-with-carry (lagged Fibonacci) algorithm   (class template) |
| philox_engine(C++26) | a counter-based parallelizable generator   (class template) |
| Random number engine adaptors | |
| discard_block_engine(C++11) | discards some output of a random number engine   (class template) |
| independent_bits_engine(C++11) | packs the output of a random number engine into blocks of a specified number of bits   (class template) |
| shuffle_order_engine(C++11) | delivers the output of a random number engine in a different order   (class template) |
| Predefined generators | |
| `minstd_rand0` (C++11) | std::linear_congruential_engine<std::uint_fast32_t, 16807, 0, 2147483647>  Discovered in 1969 by Lewis, Goodman and Miller, adopted as "Minimal standard" in 1988 by Park and Miller |
| `minstd_rand` (C++11) | std::linear_congruential_engine<std::uint_fast32_t, 48271, 0, 2147483647>  Newer "Minimum standard", recommended by Park, Miller, and Stockmeyer in 1993 |
| `mt19937` (C++11) | std::mersenne_twister_engine<std::uint_fast32_t,  32, 624, 397, 31,  0x9908b0df, 11,  0xffffffff, 7,  0x9d2c5680, 15,  0xefc60000, 18, 1812433253>  32-bit Mersenne Twister by Matsumoto and Nishimura, 1998 |
| `mt19937_64` (C++11) | std::mersenne_twister_engine<std::uint_fast64_t,  64, 312, 156, 31,  0xb5026f5aa96619e9, 29,  0x5555555555555555, 17,  0x71d67fffeda60000, 37,  0xfff7eee000000000, 43,  6364136223846793005>  64-bit Mersenne Twister by Matsumoto and Nishimura, 2000 |
| `ranlux24_base` (C++11) | std::subtract_with_carry_engine<std::uint_fast32_t, 24, 10, 24> |
| `ranlux48_base` (C++11) | std::subtract_with_carry_engine<std::uint_fast64_t, 48, 5, 12> |
| `ranlux24` (C++11) | std::discard_block_engine<std::ranlux24_base, 223, 23>  24-bit RANLUX generator by Martin LÃ¼scher and Fred James, 1994 |
| `ranlux48` (C++11) | std::discard_block_engine<std::ranlux48_base, 389, 11>  48-bit RANLUX generator by Martin LÃ¼scher and Fred James, 1994 |
| `knuth_b` (C++11) | std::shuffle_order_engine<std::minstd_rand0, 256> |
| `philox4x32` (C++26) | std::philox_engine<std::uint_fast32_t, 32, 4, 10, 0xD2511F53, 0x9E3779B9, 0xCD9E8D57, 0xBB67AE85> |
| `philox4x64` (C++26) | std::philox_engine<std::uint_fast64_t, 64, 4, 10, 0xD2E7470EE14C6C93, 0x9E3779B97F4A7C15, 0xCA5A826395121157, 0xBB67AE8584CAA73B> |
| `default_random_engine`(C++11) | **implementation-defined** |
| Non-deterministic random numbers | |
| random_device(C++11) | non-deterministic random number generator using hardware entropy source   (class) |
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
| Utilities | |
| seed_seq(C++11) | general-purpose bias-eliminating scrambled seed sequence generator   (class) |
| Functions | |
| generate_canonical(C++11) | evenly distributes real values of given precision across ``â0â`,`1`)`   (function template) |
| [ranges::generate_random(C++26) | fills a range with random numbers from a uniform random bit generator (algorithm function object) |

### Synopsis

```
#include <initializer_list>
 
namespace std {
  // uniform random bit generator requirements
  template<class G>
  concept uniform_random_bit_generator = /* see description */;
 
  // class template linear_congruential_engine
  template<class UIntType, UIntType a, UIntType c, UIntType m>
  class linear_congruential_engine;
 
  // class template mersenne_twister_engine
  template<class UIntType,
           size_t w,
           size_t n,
           size_t m,
           size_t r,
           UIntType a,
           size_t u,
           UIntType d,
           size_t s,
           UIntType b,
           size_t t,
           UIntType c,
           size_t l,
           UIntType f>
  class mersenne_twister_engine;
 
  // class template subtract_with_carry_engine
  template<class UIntType, size_t w, size_t s, size_t r>
  class subtract_with_carry_engine;
 
  // class template discard_block_engine
  template<class Engine, size_t p, size_t r>
  class discard_block_engine;
 
  // class template independent_bits_engine
  template<class Engine, size_t w, class UIntType>
  class independent_bits_engine;
 
  // class template shuffle_order_engine
  template<class Engine, size_t k>
  class shuffle_order_engine;
 
  // class template philox_engine
  template<class UIntType, size_t w, size_t n, size_t r, UIntType... consts>
  class philox_engine;
 
  // engines and engine adaptors with predefined parameters
  using minstd_rand0          = /* see description */;
  using minstd_rand           = /* see description */;
  using mt19937               = /* see description */;
  using mt19937_64            = /* see description */;
  using ranlux24_base         = /* see description */;
  using ranlux48_base         = /* see description */;
  using ranlux24              = /* see description */;
  using ranlux48              = /* see description */;
  using knuth_b               = /* see description */;
  using philox4x32            = /* see description */;
  using philox4x64            = /* see description */;
 
  using default_random_engine = /* see description */;
 
  // class random_device
  class random_device;
 
  // class seed_seq
  class seed_seq;
 
  // function template generate_canonical
  template<class RealType, size_t digits, class URBG>
  RealType generate_canonical(URBG& g);
 
  namespace ranges {
    // generate_random
    template<class R, class G>
      requires output_range<R, invoke_result_t<G&>> &&
               uniform_random_bit_generator<remove_cvref_t<G>>
    constexpr borrowed_iterator_t<R> generate_random(R&& r, G&& g);
 
    template<class G, output_iterator<invoke_result_t<G&>> O, sentinel_for<O> S>
      requires uniform_random_bit_generator<remove_cvref_t<G>>
    constexpr O generate_random(O first, S last, G&& g);
 
    template<class R, class G, class D>
      requires output_range<R, invoke_result_t<D&, G&>> && invocable<D&, G&> &&
               uniform_random_bit_generator<remove_cvref_t<G>>
    constexpr borrowed_iterator_t<R> generate_random(R&& r, G&& g, D&& d);
 
    template<class G,
             class D,
             output_iterator<invoke_result_t<D&, G&>> O,
             sentinel_for<O> S>
      requires invocable<D&, G&> && uniform_random_bit_generator<remove_cvref_t<G>>
    constexpr O generate_random(O first, S last, G&& g, D&& d);
  }
 
  // class template uniform_int_distribution
  template<class IntType = int>
  class uniform_int_distribution;
 
  // class template uniform_real_distribution
  template<class RealType = double>
  class uniform_real_distribution;
 
  // class bernoulli_distribution
  class bernoulli_distribution;
 
  // class template binomial_distribution
  template<class IntType = int>
  class binomial_distribution;
 
  // class template geometric_distribution
  template<class IntType = int>
  class geometric_distribution;
 
  // class template negative_binomial_distribution
  template<class IntType = int>
  class negative_binomial_distribution;
 
  // class template poisson_distribution
  template<class IntType = int>
  class poisson_distribution;
 
  // class template exponential_distribution
  template<class RealType = double>
  class exponential_distribution;
 
  // class template gamma_distribution
  template<class RealType = double>
  class gamma_distribution;
 
  // class template weibull_distribution
  template<class RealType = double>
  class weibull_distribution;
 
  // class template extreme_value_distribution
  template<class RealType = double>
  class extreme_value_distribution;
 
  // class template normal_distribution
  template<class RealType = double>
  class normal_distribution;
 
  // class template lognormal_distribution
  template<class RealType = double>
  class lognormal_distribution;
 
  // class template chi_squared_distribution
  template<class RealType = double>
  class chi_squared_distribution;
 
  // class template cauchy_distribution
  template<class RealType = double>
  class cauchy_distribution;
 
  // class template fisher_f_distribution
  template<class RealType = double>
  class fisher_f_distribution;
 
  // class template student_t_distribution
  template<class RealType = double>
  class student_t_distribution;
 
  // class template discrete_distribution
  template<class IntType = int>
  class discrete_distribution;
 
  // class template piecewise_constant_distribution
  template<class RealType = double>
  class piecewise_constant_distribution;
 
  // class template piecewise_linear_distribution
  template<class RealType = double>
  class piecewise_linear_distribution;
}

```

#### Concept `uniform_random_bit_generator`

```
namespace std {
  template<class G>
  concept uniform_random_bit_generator =
    invocable<G&> && unsigned_integral<invoke_result_t<G&>> && requires {
      {
        G::min()
      } -> same_as<invoke_result_t<G&>>;
      {
        G::max()
      } -> same_as<invoke_result_t<G&>>;
      requires bool_constant<(G::min() < G::max())>::value;
    };
}

```

#### Class template std::linear_congruential_engine

```
namespace std {
  template<class UIntType, UIntType a, UIntType c, UIntType m>
  class linear_congruential_engine
  {
  public:
    // types
    using result_type = UIntType;
 
    // engine characteristics
    static constexpr result_type multiplier = a;
    static constexpr result_type increment  = c;
    static constexpr result_type modulus    = m;
    static constexpr result_type min() { return c == 0u ? 1u : 0u; }
    static constexpr result_type max() { return m - 1u; }
    static constexpr result_type default_seed = 1u;
 
    // constructors and seeding functions
    linear_congruential_engine()
      : linear_congruential_engine(default_seed)
    {
    }
    explicit linear_congruential_engine(result_type s);
    template<class Sseq>
    explicit linear_congruential_engine(Sseq& q);
    void seed(result_type s = default_seed);
    template<class Sseq>
    void seed(Sseq& q);
 
    // equality operators
    friend bool operator==(const linear_congruential_engine& x,
                           const linear_congruential_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const linear_congruential_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    linear_congruential_engine& x);
  };
}

```

#### Class template std::mersenne_twister_engine

```
namespace std {
  template<class UIntType,
           size_t w,
           size_t n,
           size_t m,
           size_t r,
           UIntType a,
           size_t u,
           UIntType d,
           size_t s,
           UIntType b,
           size_t t,
           UIntType c,
           size_t l,
           UIntType f>
  class mersenne_twister_engine
  {
  public:
    // types
    using result_type = UIntType;
 
    // engine characteristics
    static constexpr size_t word_size                   = w;
    static constexpr size_t state_size                  = n;
    static constexpr size_t shift_size                  = m;
    static constexpr size_t mask_bits                   = r;
    static constexpr UIntType xor_mask                  = a;
    static constexpr size_t tempering_u                 = u;
    static constexpr UIntType tempering_d               = d;
    static constexpr size_t tempering_s                 = s;
    static constexpr UIntType tempering_b               = b;
    static constexpr size_t tempering_t                 = t;
    static constexpr UIntType tempering_c               = c;
    static constexpr size_t tempering_l                 = l;
    static constexpr UIntType initialization_multiplier = f;
    static constexpr result_type min() { return 0; }
    static constexpr result_type max() { return /*2^w - 1*/; }
    static constexpr result_type default_seed = 5489u;
 
    // constructors and seeding functions
    mersenne_twister_engine()
      : mersenne_twister_engine(default_seed)
    {
    }
    explicit mersenne_twister_engine(result_type value);
    template<class Sseq>
    explicit mersenne_twister_engine(Sseq& q);
    void seed(result_type value = default_seed);
    template<class Sseq>
    void seed(Sseq& q);
 
    // equality operators
    friend bool operator==(const mersenne_twister_engine& x,
                           const mersenne_twister_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const mersenne_twister_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    mersenne_twister_engine& x);
  };
}

```

#### Class template std::subtract_with_carry_engine

```
namespace std {
  template<class UIntType, size_t w, size_t s, size_t r>
  class subtract_with_carry_engine
  {
  public:
    // types
    using result_type = UIntType;
 
    // engine characteristics
    static constexpr size_t word_size = w;
    static constexpr size_t short_lag = s;
    static constexpr size_t long_lag  = r;
    static constexpr result_type min() { return 0; }
    static constexpr result_type max() { return /*m - 1*/; }
    static constexpr uint_least32_t default_seed = 19780503u;
 
    // constructors and seeding functions
    subtract_with_carry_engine()
      : subtract_with_carry_engine(0u)
    {
    }
    explicit subtract_with_carry_engine(result_type value);
    template<class Sseq>
    explicit subtract_with_carry_engine(Sseq& q);
    void seed(result_type value = 0u);
    template<class Sseq>
    void seed(Sseq& q);
 
    // equality operators
    friend bool operator==(const subtract_with_carry_engine& x,
                           const subtract_with_carry_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const subtract_with_carry_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    subtract_with_carry_engine& x);
  };
}

```

#### Class template std::philox_engine

```
namespace std {
  template<class UIntType, size_t w, size_t n, size_t r, UIntType... consts>
  class philox_engine
  {
    static constexpr size_t /*array-size*/ = n / 2; // exposition only
  public:
    // types
    using result_type = UIntType;
 
    // engine characteristics
    static constexpr size_t word_size   = w;
    static constexpr size_t word_count  = n;
    static constexpr size_t round_count = r;
    static constexpr array<result_type, /*array-size*/> multipliers;
    static constexpr array < result_type, @exposition onlyid { array - size > }
    @round_consts;
    static constexpr result_type min() { return 0; }
    static constexpr result_type max() { return m - 1; }
    static constexpr result_type default_seed = 20111115u;
 
    // constructors and seeding functions
    philox_engine()
      : philox_engine(default_seed)
    {
    }
    explicit philox_engine(result_type value);
    template<class Sseq>
    explicit philox_engine(Sseq& q);
    void seed(result_type value = default_seed);
    template<class Sseq>
    void seed(Sseq& q);
 
    void set_counter(const array<result_type, n>& counter);
 
    // equality operators
    friend bool operator==(const philox_engine& x, const philox_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const philox_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    philox_engine& x);
  };
}

```

#### Class template std::discard_block_engine

```
namespace std {
  template<class Engine, size_t p, size_t r>
  class discard_block_engine
  {
  public:
    // types
    using result_type = typename Engine::result_type;
 
    // engine characteristics
    static constexpr size_t block_size = p;
    static constexpr size_t used_block = r;
    static constexpr result_type min() { return Engine::min(); }
    static constexpr result_type max() { return Engine::max(); }
 
    // constructors and seeding functions
    discard_block_engine();
    explicit discard_block_engine(const Engine& e);
    explicit discard_block_engine(Engine&& e);
    explicit discard_block_engine(result_type s);
    template<class Sseq>
    explicit discard_block_engine(Sseq& q);
    void seed();
    void seed(result_type s);
    template<class Sseq>
    void seed(Sseq& q);
 
    // equality operators
    friend bool operator==(const discard_block_engine& x, const discard_block_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // property functions
    const Engine& base() const noexcept { return e; }
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const discard_block_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    discard_block_engine& x);
 
  private:
    Engine e; // exposition only
    size_t n; // exposition only
  };
}

```

#### Class template std::independent_bits_engine

```
namespace std {
  template<class Engine, size_t w, class UIntType>
  class independent_bits_engine
  {
  public:
    // types
    using result_type = UIntType;
 
    // engine characteristics
    static constexpr result_type min() { return 0; }
    static constexpr result_type max() { return /*2^w - 1*/; }
 
    // constructors and seeding functions
    independent_bits_engine();
    explicit independent_bits_engine(const Engine& e);
    explicit independent_bits_engine(Engine&& e);
    explicit independent_bits_engine(result_type s);
    template<class Sseq>
    explicit independent_bits_engine(Sseq& q);
    void seed();
    void seed(result_type s);
    template<class Sseq>
    void seed(Sseq& q);
 
    // equality operators
    friend bool operator==(const independent_bits_engine& x,
                           const independent_bits_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // property functions
    const Engine& base() const noexcept { return e; }
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const independent_bits_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    independent_bits_engine& x);
 
  private:
    Engine e; // exposition only
  };
}

```

#### Class template std::shuffle_order_engine

```
namespace std {
  template<class Engine, size_t k>
  class shuffle_order_engine
  {
  public:
    // types
    using result_type = typename Engine::result_type;
 
    // engine characteristics
    static constexpr size_t table_size = k;
    static constexpr result_type min() { return Engine::min(); }
    static constexpr result_type max() { return Engine::max(); }
 
    // constructors and seeding functions
    shuffle_order_engine();
    explicit shuffle_order_engine(const Engine& e);
    explicit shuffle_order_engine(Engine&& e);
    explicit shuffle_order_engine(result_type s);
    template<class Sseq>
    explicit shuffle_order_engine(Sseq& q);
    void seed();
    void seed(result_type s);
    template<class Sseq>
    void seed(Sseq& q);
 
    // equality operators
    friend bool operator==(const shuffle_order_engine& x, const shuffle_order_engine& y);
 
    // generating functions
    result_type operator()();
    void discard(unsigned long long z);
 
    // property functions
    const Engine& base() const noexcept { return e; }
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const shuffle_order_engine& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    shuffle_order_engine& x);
 
  private:
    Engine e;         // exposition only
    result_type V[k]; // exposition only
    result_type Y;    // exposition only
  };
}

```

#### Engines and engine adaptors with predefined parameters

```
namespace std {
using minstd_rand0 = linear_congruential_engine<uint_fast32_t, 16'807, 0, 2'147'483'647>;
using minstd_rand = linear_congruential_engine<uint_fast32_t, 48'271, 0, 2'147'483'647>;
using mt19937 = mersenne_twister_engine<uint_fast32_t,
                                        32,
                                        624,
                                        397,
                                        31,
                                        0x9908'b0df,
                                        11,
                                        0xffff'ffff,
                                        7,
                                        0x9d2c'5680,
                                        15,
                                        0xefc6'0000,
                                        18,
                                        1'812'433'253>; //'
using mt19937_64 = mersenne_twister_engine<uint_fast64_t,
                                           64,
                                           312,
                                           156,
                                           31,
                                           0xb502'6f5a'a966'19e9,
                                           29,
                                           0x5555'5555'5555'5555,
                                           17,
                                           0x71d6'7fff'eda6'0000,
                                           37,
                                           0xfff7'eee0'0000'0000,
                                           43,
                                           6'364'136'223'846'793'005>;
using ranlux24_base = subtract_with_carry_engine<uint_fast32_t, 24, 10, 24>;
using ranlux48_base = subtract_with_carry_engine<uint_fast64_t, 48, 5, 12>;
using ranlux24 = discard_block_engine<ranlux24_base, 223, 23>;
using ranlux48 = discard_block_engine<ranlux48_base, 389, 11>;
using knuth_b = shuffle_order_engine<minstd_rand0, 256>;
using default_random_engine = /* implementation-defined */;
using philox4x32 = philox_engine<uint_fast32_t,
                                 32,
                                 4,
                                 10,
                                 0xD2511F53,
                                 0x9E3779B9,
                                 0xCD9E8D57,
                                 0xBB67AE85>;
using philox4x64 = philox_engine<uint_fast64_t,
                                 64,
                                 4,
                                 10,
                                 0xD2E7470EE14C6C93,
                                 0x9E3779B97F4A7C15,
                                 0xCA5A826395121157,
                                 0xBB67AE8584CAA73B>;
}

```

#### Class std::random_device

```
namespace std {
  class random_device
  {
  public:
    // types
    using result_type = unsigned int;
 
    // generator characteristics
    static constexpr result_type min() { return numeric_limits<result_type>::min(); }
    static constexpr result_type max() { return numeric_limits<result_type>::max(); }
 
    // constructors
    random_device()
      : random_device(/* implementation-defined */)
    {
    }
    explicit random_device(const string& token);
 
    // generating functions
    result_type operator()();
 
    // property functions
    double entropy() const noexcept;
 
    // no copy functions
    random_device(const random_device&)  = delete;
    void operator=(const random_device&) = delete;
  };
}

```

#### Class std::seed_seq

```
namespace std {
  class seed_seq
  {
  public:
    // types
    using result_type = uint_least32_t;
 
    // constructors
    seed_seq() noexcept;
    template<class T>
    seed_seq(initializer_list<T> il);
    template<class InputIter>
    seed_seq(InputIter begin, InputIter end);
 
    // generating functions
    template<class RandomAccessIter>
    void generate(RandomAccessIter begin, RandomAccessIter end);
 
    // property functions
    size_t size() const noexcept;
    template<class OutputIter>
    void param(OutputIter dest) const;
 
    // no copy functions
    seed_seq(const seed_seq&)       = delete;
    void operator=(const seed_seq&) = delete;
 
  private:
    vector<result_type> v; // exposition only
  };
}

```

#### Class template std::uniform_int_distribution

```
namespace std {
  template<class IntType = int>
  class uniform_int_distribution
  {
  public:
    // types
    using result_type = IntType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    uniform_int_distribution()
      : uniform_int_distribution(0)
    {
    }
    explicit uniform_int_distribution(IntType a,
                                      IntType b = numeric_limits<IntType>::max());
    explicit uniform_int_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const uniform_int_distribution& x,
                           const uniform_int_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    result_type a() const;
    result_type b() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const uniform_int_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    uniform_int_distribution& x);
  };
}

```

#### Class template std::uniform_real_distribution

```
namespace std {
  template<class RealType = double>
  class uniform_real_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    uniform_real_distribution()
      : uniform_real_distribution(0.0)
    {
    }
    explicit uniform_real_distribution(RealType a, RealType b = 1.0);
    explicit uniform_real_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const uniform_real_distribution& x,
                           const uniform_real_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    result_type a() const;
    result_type b() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const uniform_real_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    uniform_real_distribution& x);
  };
}

```

#### Class std::bernoulli_distribution

```
namespace std {
  class bernoulli_distribution
  {
  public:
    // types
    using result_type = bool;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    bernoulli_distribution()
      : bernoulli_distribution(0.5)
    {
    }
    explicit bernoulli_distribution(double p);
    explicit bernoulli_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const bernoulli_distribution& x,
                           const bernoulli_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const bernoulli_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    bernoulli_distribution& x);
  };
}

```

#### Class template std::binomial_distribution

```
namespace std {
  template<class IntType = int>
  class binomial_distribution
  {
  public:
    // types
    using result_type = IntType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    binomial_distribution()
      : binomial_distribution(1)
    {
    }
    explicit binomial_distribution(IntType t, double p = 0.5);
    explicit binomial_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const binomial_distribution& x,
                           const binomial_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    IntType t() const;
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const binomial_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    binomial_distribution& x);
  };
}

```

#### Class template std::geometric_distribution

```
namespace std {
  template<class IntType = int>
  class geometric_distribution
  {
  public:
    // types
    using result_type = IntType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    geometric_distribution()
      : geometric_distribution(0.5)
    {
    }
    explicit geometric_distribution(double p);
    explicit geometric_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const geometric_distribution& x,
                           const geometric_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const geometric_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    geometric_distribution& x);
  };
}

```

#### Class template std::negative_binomial_distribution

```
namespace std {
  template<class IntType = int>
  class negative_binomial_distribution
  {
  public:
    // types
    using result_type = IntType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    negative_binomial_distribution()
      : negative_binomial_distribution(1)
    {
    }
    explicit negative_binomial_distribution(IntType k, double p = 0.5);
    explicit negative_binomial_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const negative_binomial_distribution& x,
                           const negative_binomial_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    IntType k() const;
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(
      basic_ostream<CharT, Traits>& os,
      const negative_binomial_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    negative_binomial_distribution& x);
  };
}

```

#### Class template std::poisson_distribution

```
namespace std {
  template<class IntType = int>
  class poisson_distribution
  {
  public:
    // types
    using result_type = IntType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    poisson_distribution()
      : poisson_distribution(1.0)
    {
    }
    explicit poisson_distribution(double mean);
    explicit poisson_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const poisson_distribution& x, const poisson_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    double mean() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const poisson_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    poisson_distribution& x);
  };
}

```

#### Class template std::exponential_distribution

```
namespace std {
  template<class RealType = double>
  class exponential_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    exponential_distribution()
      : exponential_distribution(1.0)
    {
    }
    explicit exponential_distribution(RealType lambda);
    explicit exponential_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const exponential_distribution& x,
                           const exponential_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType lambda() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const exponential_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    exponential_distribution& x);
  };
}

```

#### Class template std::gamma_distribution

```
namespace std {
  template<class RealType = double>
  class gamma_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    gamma_distribution()
      : gamma_distribution(1.0)
    {
    }
    explicit gamma_distribution(RealType alpha, RealType beta = 1.0);
    explicit gamma_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const gamma_distribution& x, const gamma_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType alpha() const;
    RealType beta() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const gamma_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    gamma_distribution& x);
  };
}

```

#### Class template std::weibull_distribution

```
namespace std {
  template<class RealType = double>
  class weibull_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    weibull_distribution()
      : weibull_distribution(1.0)
    {
    }
    explicit weibull_distribution(RealType a, RealType b = 1.0);
    explicit weibull_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const weibull_distribution& x, const weibull_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType a() const;
    RealType b() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const weibull_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    weibull_distribution& x);
  };
}

```

#### Class template std::extreme_value_distribution

```
namespace std {
  template<class RealType = double>
  class extreme_value_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    extreme_value_distribution()
      : extreme_value_distribution(0.0)
    {
    }
    explicit extreme_value_distribution(RealType a, RealType b = 1.0);
    explicit extreme_value_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const extreme_value_distribution& x,
                           const extreme_value_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType a() const;
    RealType b() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const extreme_value_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    extreme_value_distribution& x);
  };
}

```

#### Class template std::normal_distribution

```
namespace std {
  template<class RealType = double>
  class normal_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructors and reset functions
    normal_distribution()
      : normal_distribution(0.0)
    {
    }
    explicit normal_distribution(RealType mean, RealType stddev = 1.0);
    explicit normal_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const normal_distribution& x, const normal_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType mean() const;
    RealType stddev() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const normal_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    normal_distribution& x);
  };
}

```

#### Class template std::lognormal_distribution

```
namespace std {
  template<class RealType = double>
  class lognormal_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    lognormal_distribution()
      : lognormal_distribution(0.0)
    {
    }
    explicit lognormal_distribution(RealType m, RealType s = 1.0);
    explicit lognormal_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const lognormal_distribution& x,
                           const lognormal_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType m() const;
    RealType s() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const lognormal_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    lognormal_distribution& x);
  };
}

```

#### Class template std::chi_squared_distribution

```
namespace std {
  template<class RealType = double>
  class chi_squared_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    chi_squared_distribution()
      : chi_squared_distribution(1.0)
    {
    }
    explicit chi_squared_distribution(RealType n);
    explicit chi_squared_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const chi_squared_distribution& x,
                           const chi_squared_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType n() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const chi_squared_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    chi_squared_distribution& x);
  };
}

```

#### Class template std::cauchy_distribution

```
namespace std {
  template<class RealType = double>
  class cauchy_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    cauchy_distribution()
      : cauchy_distribution(0.0)
    {
    }
    explicit cauchy_distribution(RealType a, RealType b = 1.0);
    explicit cauchy_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const cauchy_distribution& x, const cauchy_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType a() const;
    RealType b() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const cauchy_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    cauchy_distribution& x);
  };
}

```

#### Class template std::fisher_f_distribution

```
namespace std {
  template<class RealType = double>
  class fisher_f_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    fisher_f_distribution()
      : fisher_f_distribution(1.0)
    {
    }
    explicit fisher_f_distribution(RealType m, RealType n = 1.0);
    explicit fisher_f_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const fisher_f_distribution& x,
                           const fisher_f_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType m() const;
    RealType n() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const fisher_f_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    fisher_f_distribution& x);
  };
}

```

#### Class template std::student_t_distribution

```
namespace std {
  template<class RealType = double>
  class student_t_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    student_t_distribution()
      : student_t_distribution(1.0)
    {
    }
    explicit student_t_distribution(RealType n);
    explicit student_t_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const student_t_distribution& x,
                           const student_t_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    RealType n() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const student_t_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    student_t_distribution& x);
  };
}

```

#### Class template std::discrete_distribution

```
namespace std {
  template<class IntType = int>
  class discrete_distribution
  {
  public:
    // types
    using result_type = IntType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    discrete_distribution();
    template<class InputIter>
    discrete_distribution(InputIter firstW, InputIter lastW);
    discrete_distribution(initializer_list<double> wl);
    template<class UnaryOperation>
    discrete_distribution(size_t nw, double xmin, double xmax, UnaryOperation fw);
    explicit discrete_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const discrete_distribution& x,
                           const discrete_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    vector<double> probabilities() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os,
                                                    const discrete_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    discrete_distribution& x);
  };
}

```

#### Class template std::piecewise_constant_distribution

```
namespace std {
  template<class RealType = double>
  class piecewise_constant_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    piecewise_constant_distribution();
    template<class InputIterB, class InputIterW>
    piecewise_constant_distribution(InputIterB firstB,
                                    InputIterB lastB,
                                    InputIterW firstW);
    template<class UnaryOperation>
    piecewise_constant_distribution(initializer_list<RealType> bl, UnaryOperation fw);
    template<class UnaryOperation>
    piecewise_constant_distribution(size_t nw,
                                    RealType xmin,
                                    RealType xmax,
                                    UnaryOperation fw);
    explicit piecewise_constant_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const piecewise_constant_distribution& x,
                           const piecewise_constant_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    vector<result_type> intervals() const;
    vector<result_type> densities() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(
      basic_ostream<CharT, Traits>& os,
      const piecewise_constant_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    piecewise_constant_distribution& x);
  };
}

```

#### Class template std::piecewise_linear_distribution

```
namespace std {
  template<class RealType = double>
  class piecewise_linear_distribution
  {
  public:
    // types
    using result_type = RealType;
    using param_type  = /* unspecified */;
 
    // constructor and reset functions
    piecewise_linear_distribution();
    template<class InputIterB, class InputIterW>
    piecewise_linear_distribution(InputIterB firstB, InputIterB lastB, InputIterW firstW);
    template<class UnaryOperation>
    piecewise_linear_distribution(initializer_list<RealType> bl, UnaryOperation fw);
    template<class UnaryOperation>
    piecewise_linear_distribution(size_t nw,
                                  RealType xmin,
                                  RealType xmax,
                                  UnaryOperation fw);
    explicit piecewise_linear_distribution(const param_type& parm);
    void reset();
 
    // equality operators
    friend bool operator==(const piecewise_linear_distribution& x,
                           const piecewise_linear_distribution& y);
 
    // generating functions
    template<class URBG>
    result_type operator()(URBG& g);
    template<class URBG>
    result_type operator()(URBG& g, const param_type& parm);
 
    // property functions
    vector<result_type> intervals() const;
    vector<result_type> densities() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
 
    // inserters and extractors
    template<class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(
      basic_ostream<CharT, Traits>& os,
      const piecewise_linear_distribution& x);
    template<class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is,
                                                    piecewise_linear_distribution& x);
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/random&oldid=175603>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 August 2024, at 13:17.