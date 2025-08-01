# std::experimental::future<T>::future

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
| ****future::future**** | | | | |
| future::operator= | | | | |
| future::is_ready | | | | |
| future::then | | | | |

|  |  |  |
| --- | --- | --- |
| future() noexcept; | (1) |  |
| future( std::experimental::future<T>&& f ) noexcept; | (2) |  |
| future( const std::experimental::future<T>& ) = delete; | (3) |  |
| future( std::experimental::future<std::experimental::future<T>> && other ) noexcept; | (4) |  |
|  |  |  |

1) Default constructor. Constructs an empty `future` object that does not refer to a shared state.2) Constructs a `future` object, transferring the shared state held by f, if any. After construction, f.valid() is false.3) Copy constructor is deleted. `future` cannot be copied.4) Unwrapping constructor. Constructs a `future` object from the shared state referred to by other, if any. If other.valid() == false prior to this call, the constructed `future` object is empty. Otherwise, the resulting `future` object becomes ready when one of the following happens:

- other and other.get() are both ready. The value or exception from other.get() is stored in the shared state associated with the resulting `future` object.
- other is ready, but other.get() is invalid. An exception of type std::future_error with an error condition of std::future_errc::broken_promise is stored in the shared state associated with the resulting `future` object.
 After this constructor returns, valid() is equal to the value of other.valid() prior to this call, and other.valid() == false.

### Parameters

|  |  |  |
| --- | --- | --- |
| f | - | another future object to initialize with |
| other | - | a `std::experimental::future` object to unwrap |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2697 | Concurrency TS | behavior of unwrapping constructor is unclear with an invalid `future` | constructs an empty `future` |

### See also

|  |  |
| --- | --- |
| (constructor) | constructs the future object   (public member function of `std::future<T>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/future/future&oldid=98645>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 January 2018, at 05:47.