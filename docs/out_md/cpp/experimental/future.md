# std::experimental::future

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

Extensions for concurrency

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| std::future extensions | | | | |
| ****experimental::future**** | | | | |
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

****std::experimental::future****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| future::future | | | | |
| future::operator= | | | | |
| future::is_ready | | | | |
| future::then | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/future>` |  |  |
| template< class T > class future; | (1) | (concurrency TS) |
| template< class T > class future<T&>; | (2) | (concurrency TS) |
| template<> class future<void>; | (3) | (concurrency TS) |
|  |  |  |

The class template `std::experimental::future` extends std::future with the following operations:

- an **unwrapping constructor** from `future<future<T>>`;
- a member function `is_ready` to query whether the associated shared state is ready; and
- a member function `then` to attach a continuation to the future.

However, there is no interoperation between `std::experimental::future` and std::future.

### Member functions

|  |  |
| --- | --- |
| (constructor) | construct a `future` object   (public member function) |
| is_ready | checks if the shared state is ready   (public member function) |
| then | attaches a continuation to a future   (public member function) |
| operator= | moves the future object   (public member function) |

## Members identical to std::future

### Member functions

Note that `share()` returns a std::experimental::shared_future<T>. The behavior is otherwise identical.

|  |  |
| --- | --- |
| (destructor) | destructs the future object   (public member function of `std::future<T>`) |
| share | transfers the shared state from \*this to a shared_future and returns it   (public member function of `std::future<T>`) |
| Getting the result | |
| get | returns the result   (public member function of `std::future<T>`) |
| State | |
| valid | checks if the future has a shared state   (public member function of `std::future<T>`) |
| wait | waits for the result to become available   (public member function of `std::future<T>`) |
| wait_for | waits for the result, returns if it is not available for the specified timeout duration   (public member function of `std::future<T>`) |
| wait_until | waits for the result, returns if it is not available until specified time point has been reached   (public member function of `std::future<T>`) |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| shared_future(concurrency TS) | a version of std::shared_future enhanced with continuations and other features   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/future&oldid=160416>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 October 2023, at 11:31.