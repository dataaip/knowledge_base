# std::experimental::propagate_const<T>::operator=

From cppreference.com
< cpp‎ | experimental‎ | propagate const
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

std::experimental::propagate_const

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| propagate_const::propagate_const | | | | |
| ****propagate_const::operator=**** | | | | |
| propagate_const::swap | | | | |
| Observers | | | | |
| propagate_const::get | | | | |
| propagate_const::operator bool | | | | |
| propagate_const::operator\*propagate_const::operator-> | | | | |
| propagate_const::operator element_type\*propagate_const::operator const element_type\* | | | | |
| Non-member functions | | | | |
| operator==operator!=operator<operator>operator<=operator>operator>= | | | | |
| swap | | | | |
| get_underlying | | | | |
| Helper classes | | | | |
| std::hash | | | | |
| std::equal_tostd::not_equal_tostd::lessstd::greaterstd::less_equalstd::greater_equal | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr propagate_const& operator=( propagate_const&& p ) = default; | (1) | (library fundamentals TS v2) |
| template< class U >  constexpr propagate_const& operator=( propagate_const<U>&& pu ); | (2) | (library fundamentals TS v2) |
| template< class U >  constexpr propagate_const& operator=( U&& u ); | (3) | (library fundamentals TS v2) |
| propagate_const& operator=( const propagate_const& ) = delete; | (4) | (library fundamentals TS v2) |
|  |  |  |

Let `t_` designate the private data member that is the wrapped pointer-like object.

1) Explicitly defaulted move assignment operator that move assigns this->t_ from p.t_.2) Assigns std::move(pu.t_) to this->t_.  
This overload participates in overload resolution only if `U` is implicitly convertible to `T`.3) Assigns std::forward<U>(u) to this->t_.  
This overload participates in overload resolution only if `U` is implicitly convertible to `T` and std::decay_t<U> is not a specialization of `propagate_const`.4) Copy assignment operator is explicitly deleted. `propagate_const` is non-copyable.

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | another `propagate_const` object to move from |
| pu | - | another `propagate_const` object of a different specialization to move from |
| u | - | another object to assign to the contained pointer |

### Return value

\*this.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/propagate_const/operator%3D&oldid=155163>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 July 2023, at 01:07.