# std::experimental::future<T>::then

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
| future::operator= | | | | |
| future::is_ready | | | | |
| ****future::then**** | | | | |

|  |  |  |
| --- | --- | --- |
| template< class F >  future</\* see below \*/> then( F&& func ) ; |  |  |
|  |  |  |

Attach the continuation func to \*this. The behavior is undefined if \*this has no associated shared state (i.e., valid() == false).

Creates a shared state associated with the `future` object to be returned, and a copy fd of func constructed as if by DECAY_COPY(std::forward<F>(func)) evaluated in the thread calling `then`, where DECAY_COPY is defined as

|  |
| --- |
| ```text template<class T> std::decay_t<T> DECAY_COPY(T&& v) {     return std::forward<T>(v); } ``` |

When the shared state currently associated with \*this is ready, the **continuation** INVOKE(std::move(fd), std::move(\*this)) is called on an unspecified thread of execution, where INVOKE is the operation defined in Callable. If that expression is invalid, the behavior is undefined.

Any value returned from the continuation is stored as the result in the shared state of the returned `future` object. Any exception propagated from the execution of the continuation is stored as the exceptional result in the shared state of the returned `future` object.

Let `U` be the return type of the continuation (i.e. std::result_of_t<std::decay_t<F>(std::experimental::future<T>)>). If `U` is std::experimental::future<T2> for some type `T2`, then the return type of `then` is std::experimental::future<T2>, otherwise it is std::experimental::future<U>. This is known as **implicit unwrapping**.

If implicit unwrapping takes place and the continuation returns an invalid `future`, then the shared state is made ready with an exception of type std::future_error with an error condition of std::future_errc::broken_promise.

After this function returns, valid() is false.

### Parameters

|  |  |  |
| --- | --- | --- |
| func | - | a continuation to be attached |

### Return value

A std::experimental::future object associated with the shared state created by this object. valid() == true for the returned object.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/future/then&oldid=98647>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 January 2018, at 06:25.