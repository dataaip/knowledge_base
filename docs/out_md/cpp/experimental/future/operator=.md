# std::experimental::future<T>::operator=

From cppreference.com
< cpp‎ | experimental‎ | future
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

Extensions for concurrency

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| std::future extensions | | | | |
| experimental::future | | | | |
| experimental::shared_future | | | | |
| experimental::when_all | | | | |
| experimental::when_any | | | | |
| experimental::make_ready_future | | | | |
| experimental::make_exceptional_future | | | | |
| Latches and barriers | | | | |
| experimental::latch | | | | |
| experimental::barrier | | | | |
| experimental::flex_barrier | | | | |
| Atomic smart pointers | | | | |
| experimental::atomic_shared_ptr | | | | |
| experimental::atomic_weak_ptr | | | | |

std::experimental::future

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| future::future | | | | |
| ****future::operator=**** | | | | |
| future::is_ready | | | | |
| future::then | | | | |

|  |  |  |
| --- | --- | --- |
| std::experimental::future<T>& operator=( std::experimental::future<T>&& other ) noexcept; | (1) |  |
| std::experimental::future<T>& operator=( const std::experimental::future<T>& other ) = delete; | (2) |  |
|  |  |  |

Assigns the contents of another future object.

1) Releases any shared state and move-assigns the contents of other to \*this. After the assignment, other.valid() == false and this->valid() will yield the same value as other.valid() before the assignment.2) std::experimental::future is not CopyAssignable.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | a `std::experimental::future` that will transfer state to \*this |

### Return value

\*this

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/future/operator%3D&oldid=154966>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 July 2023, at 23:44.