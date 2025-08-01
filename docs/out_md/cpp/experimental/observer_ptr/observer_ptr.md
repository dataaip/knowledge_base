# std::experimental::observer_ptr<W>::observer_ptr

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
| ****observer_ptr::observer_ptr**** | | | | |
| Modifiers | | | | |
| observer_ptr::release | | | | |
| observer_ptr::reset | | | | |
| observer_ptr::swap | | | | |
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
| constexpr observer_ptr() noexcept;  constexpr observer_ptr( nullptr_t ) noexcept; | (1) | (library fundamentals TS v2) |
| constexpr explicit observer_ptr( element_type\* p ) noexcept; | (2) | (library fundamentals TS v2) |
| template< class W2 >  constexpr observer_ptr( observer_ptr<W2> other ) noexcept; | (3) | (library fundamentals TS v2) |
| observer_ptr( const observer_ptr& other ) = default; | (4) | (library fundamentals TS v2)  (implicitly declared) |
| observer_ptr( observer_ptr&& other ) = default; | (5) | (library fundamentals TS v2)  (implicitly declared) |
|  |  |  |

1) Constructs an `observer_ptr` that has no corresponding watched object.2) Constructs an `observer_ptr` that watches p.3) Constructs an `observer_ptr` that watches other.get(). This overload participates in overload resolution only if W2\* is convertible to element_type\*.4,5) Implicitly declared copy and move constructors. Constructs an `observer_ptr` that watches other.get().

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | a pointer to an object to watch |
| other | - | another `observer_ptr` to copy from |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/observer_ptr/observer_ptr&oldid=157741>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 September 2023, at 22:39.