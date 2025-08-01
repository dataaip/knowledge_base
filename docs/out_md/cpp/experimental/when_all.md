# std::experimental::when_all

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
| experimental::future | | | | |
| experimental::shared_future | | | | |
| ****experimental::when_all**** | | | | |
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

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/future>` |  |  |
| template< class InputIt >  auto when_all( InputIt first, InputIt last ) -> future<std::vector<typename std::iterator_traits<InputIt>::value_type>>; | (1) | (concurrency TS) |
| template< class... Futures >  auto when_all( Futures&&... futures ) -> future<std::tuple<std::decay_t<Futures>...>>; | (2) | (concurrency TS) |
|  |  |  |

Create a future object that becomes ready when all of the input `future`s and shared_futures become ready. The behavior is undefined if any input `future` or `shared_future` is invalid.

In particular, let `Sequence` be a std::vector<typename std::iterator_traits<InputIt>::value_type> for (1) and std::tuple<std::decay_t<Futures>...> for (2). This function template creates a shared state containing `Sequence` and returns a future referring to the shared state. Every input `future` is moved into the corresponding object in the `Sequence` in the shared state, and every input `shared_future` is copied to the corresponding object in the `Sequence` in the shared state. The order of the objects in the `Sequence` matches the order of arguments.

1) This function does not participate in overload resolution unless `InputIt`'s value type (i.e., typename std::iterator_traits<InputIt>::value_type) is a std::experimental::future or std::experimental::shared_future.2) This function does not participate in overload resolution unless every argument is either a (possibly cv-qualified) std::experimental::shared_future or a cv-unqualified std::experimental::future. (Formally, for every type `Fn` in `Futures`, either std::remove_reference_t<Fn> is std::experimental::future<Rn>, or std::decay_t<Fn> is std::experimental::shared_future<Rn>.)

After this call, every input `future` is no longer valid; every input `shared_future` remains valid.

### Return value

A `future` referring to the shared state created by the call. The future is always valid(), and it becomes ready when all of the input `future`s and `shared_future`s the call are ready.

1) If the range is empty (i.e., first == last), the returned `future` contains an empty vector and is ready immediately.2) If there are no arguments supplied, a `future<std::tuple<>>` is returned and is immediately ready.
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/when_all&oldid=156384>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 August 2023, at 10:18.