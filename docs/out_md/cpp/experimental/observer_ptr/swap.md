# std::experimental::observer_ptr<W>::swap

From cppreference.com
< cpp‎ | experimental‎ | observer ptr
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

std::experimental::observer_ptr

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| observer_ptr::observer_ptr | | | | |
| Modifiers | | | | |
| observer_ptr::release | | | | |
| observer_ptr::reset | | | | |
| ****observer_ptr::swap**** | | | | |
| Observers | | | | |
| observer_ptr::get | | | | |
| observer_ptr::operator bool | | | | |
| observer_ptr::operator\*observer_ptr::operator-> | | | | |
| Conversions | | | | |
| observer_ptr::operator element_type\* | | | | |
| Non-member functions | | | | |
| make_observer | | | | |
| operator==operator!=operator<operator>operator<=operator>operator>= | | | | |
| swap | | | | |
| std::hash | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr void swap( observer_ptr& other ) noexcept; |  | (library fundamentals TS v2) |
|  |  |  |

Swaps the watched object of \*this and another observer_ptr object other, by invoking swap on the stored pointers of \*this and other.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another observer_ptr object to swap the watched object with |

### Return value

(none)

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/observer_ptr/swap&oldid=155030>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 17 July 2023, at 22:37.