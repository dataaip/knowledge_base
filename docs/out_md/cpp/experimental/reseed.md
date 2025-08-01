# std::experimental::reseed

From cppreference.com
< cpp‎ | experimental
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

Library fundamentals v2

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::propagate_const | | | | |
| experimental::not_fn | | | | |
| experimental::observer_ptr | | | | |
| experimental::make_array | | | | |
| experimental::to_array | | | | |
| experimental::ostream_joiner | | | | |
| experimental::gcd | | | | |
| experimental::lcm | | | | |
| experimental::source_location | | | | |
| experimental::randint | | | | |
| detection idiom | | | | |
| uniform container erasure | | | | |
| logical operator type traits | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/random>` |  |  |
| void reseed(); | (1) | (library fundamentals TS v2) |
| void reseed( std::default_random_engine::result_type value ); | (2) | (library fundamentals TS v2) |
|  |  |  |

Reseeds the per-thread random number engine and any std::uniform_int_distribution instances used by randint.

1) Sets the per-thread engine to an unpredictable state.2) Seeds the per-thread engine `g` as if by g.seed(value).

### Parameters

|  |  |  |
| --- | --- | --- |
| value | - | value of the new seed |

### Remarks

Subsequent calls to `randint` do not depend on values produced by the per-thread engine prior to calling `reseed`.

### Example

Run this code

```
#include <experimental/random>
#include <iostream>
 
int main()
{
    std::experimental::reseed();
 
    std::cout << "Random 2-digit decimal numbers: ";
 
    for (auto i = 0; i != 3; ++i)
        std::cout << std::experimental::randint(10, 99) << ' ';
    std::cout << '\n';
}

```

Possible output:

```
Random 2-digit decimal numbers: 41 60 56

```

### See also

|  |  |
| --- | --- |
| randint | generates a random integer in the specified range   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/reseed&oldid=155684>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 July 2023, at 23:36.