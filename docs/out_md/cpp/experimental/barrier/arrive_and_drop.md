# std::experimental::barrier::arrive_and_drop

From cppreference.com
< cpp‎ | experimental‎ | barrier
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

std::experimental::barrier

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| barrier::barrier | | | | |
| barrier::~barrier | | | | |
| barrier::arrive_and_wait | | | | |
| ****barrier::arrive_and_drop**** | | | | |

|  |  |  |
| --- | --- | --- |
| void arrive_and_drop(); |  | (concurrency TS) |
|  |  |  |

Arrive at the barrier's synchronization point and remove the current thread from the set of participating threads. It is unspecified whether this function blocks until the completion phase has ended.

The behavior is undefined if the calling thread is not in the set of participating threads of this barrier.

Calls to `arrive_and_drop` synchronizes with the start of the completion phase of the barrier. If the call blocks, then the completion of the completion phase synchronizes with the return from the call.

Calls to `arrive_and_drop` and `arrive_and_wait` never introduce data races with themselves or each other.

### Exceptions

Throws nothing.

### Notes

If every participating thread calls `arrive_and_drop()`, the barrier can only be destroyed.

After a thread calls `arrive_and_drop()` on a barrier, it is no longer a member of its set of participating threads and hence can no longer call either `arrive_and_drop()` or `arrive_and_wait()` on the same barrier.

### See also

|  |  |
| --- | --- |
| arrive_and_wait | arrive at the synchronization point and block   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/barrier/arrive_and_drop&oldid=98809>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2018, at 08:56.