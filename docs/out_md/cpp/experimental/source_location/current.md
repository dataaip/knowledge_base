# std::experimental::source_location::current

From cppreference.com
< cpp‎ | experimental‎ | source location
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

std::experimental::source_location

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Creation | | | | |
| source_location::source_location | | | | |
| ****source_location::current**** | | | | |
| Field Access | | | | |
| source_location::line | | | | |
| source_location::column | | | | |
| source_location::file_name | | | | |
| source_location::function_name | | | | |

|  |  |  |
| --- | --- | --- |
| static constexpr source_location current() noexcept; |  | (library fundamentals TS v2) |
|  |  |  |

Constructs a new `source_location` object.

### Return value

If `current()` is invoked directly (via a function call that names `current()`), it returns a `source_location` object with implementation-defined values representing the location of the call. The values should be affected by the `#line` preprocessor directive in the same manner as the predefined macros __LINE__ and __FILE__.

If `current()` is invoked in any other manner, the return value is unspecified.

### Remarks

If `current()` is used in an initializer for a non-static data member, the return value corresponds to the location of the constructor or aggregate initialization that initializes the data member.

### Notes

When `current()` is used in a default argument, the return value will correspond to the location of the call to `current()` at the call site.

### Parameters

(none)

### See also

|  |  |
| --- | --- |
| (constructor) | constructs a new `source_location` with implementation-defined values   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/source_location/current&oldid=98275>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 January 2018, at 10:07.