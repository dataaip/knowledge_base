# std::experimental::atomic_weak_ptr<T>::compare_exchange_strong, std::experimental::atomic_weak_ptr<T>::compare_exchange_weak

From cppreference.com
< cpp‎ | experimental‎ | atomic weak ptr
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

std::experimental::atomic_weak_ptr

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| atomic_weak_ptr::atomic_weak_ptr | | | | |
| atomic_weak_ptr::operator= | | | | |
| atomic_weak_ptr::is_lock_free | | | | |
| atomic_weak_ptr::store | | | | |
| atomic_weak_ptr::load | | | | |
| atomic_weak_ptr::operator weak_ptr<T> | | | | |
| atomic_weak_ptr::exchange | | | | |
| ****atomic_weak_ptr::compare_exchange_weakatomic_weak_ptr::compare_exchange_strong**** | | | | |

|  |  |  |
| --- | --- | --- |
| bool compare_exchange_weak( std::weak_ptr<T>& expected, const std::weak_ptr<T>& desired,                              std::memory_order success, std::memory_order failure ) noexcept; | (1) |  |
| bool compare_exchange_weak( std::weak_ptr<T>& expected, std::weak_ptr<T>&& desired,                              std::memory_order success, std::memory_order failure ) noexcept; | (2) |  |
| bool compare_exchange_weak( std::weak_ptr<T>& expected, const std::weak_ptr<T>& desired,                              std::memory_order order = std::memory_order_seq_cst ) noexcept; | (3) |  |
| bool compare_exchange_weak( std::weak_ptr<T>& expected, std::weak_ptr<T>&& desired,                              std::memory_order order = std::memory_order_seq_cst ) noexcept; | (4) |  |
| bool compare_exchange_strong( std::weak_ptr<T>& expected, const std::weak_ptr<T>& desired,                                std::memory_order success, std::memory_order failure ) noexcept; | (5) |  |
| bool compare_exchange_strong( std::weak_ptr<T>& expected, std::weak_ptr<T>&& desired,                                std::memory_order success, std::memory_order failure ) noexcept; | (6) |  |
| bool compare_exchange_strong( std::weak_ptr<T>& expected, const std::weak_ptr<T>& desired,                                std::memory_order order = std::memory_order_seq_cst ) noexcept; | (7) |  |
| bool compare_exchange_strong( std::weak_ptr<T>& expected, std::weak_ptr<T>&& desired,                                std::memory_order order = std::memory_order_seq_cst ) noexcept; | (8) |  |
|  |  |  |

Atomically compares the underlying `weak_ptr` in \*this with expected, and if they are equivalent, replaces the former with desired (performs read-modify-write operation). Otherwise, loads the actual value stored in \*this into expected (performs load operation). The replacement is performed as if by the copy or move assignment operator of `weak_ptr`, as appropriate.

Two `weak_ptr`s are equivalent if and only if they store the same pointer value and share ownership.

The memory models for the read-modify-write and load operations are success and failure respectively. For overloads (3,4,7,8), order is used for both read-modify-write and load operations, except that std::memory_order_acquire and std::memory_order_relaxed are used for the load operation if order == std::memory_order_acq_rel, or order == std::memory_order_release respectively.

The weak versions (1-4) may fail spuriously.

### Parameters

|  |  |  |
| --- | --- | --- |
| expected | - | reference to the value expected to be found in the atomic object |
| desired | - | the value to store in the atomic object if it is as expected |
| success | - | the memory synchronization ordering for the read-modify-write operation if the comparison succeeds. All values are permitted |
| failure | - | the memory synchronization ordering for the load operation if the comparison fails. Cannot be std::memory_order_release or std::memory_order_acq_rel and cannot specify stronger ordering than success |
| order | - | the memory synchronization ordering for both operations |

### Return value

true if the underlying atomic value was changed, false otherwise.

### Remarks

All changes to the `atomic_weak_ptr` object itself, and all associated use_count increments, are guaranteed to be performed atomically. Associated `use_count` decrements take place after the atomic operation, but are not required to be part of it. Any associated destruction or deallocation operations take place after the atomic operation and are not part of it.

If the compare-exchange operation return true, expected is not accessed after the atomic update step. If it returns false, expected is updated with the existing value read from the `atomic_weak_ptr` object in the attempted atomic update. The `use_count` update corresponding to the write to expected is part of the atomic operation, but the write to expected itself is not required to be part of the atomic operation.

For overloads (1,3,5,7), desired is not accessed after the atomic update step.

For overloads (2,4,6,8), desired is moved from only if the compare-exchange operation returns true; the moving occurs after the atomic update step.

### Notes

The weak forms (1-4) of the functions are allowed to fail spuriously, that is, act as if \*this and expected are not equivalent even when they are. When a compare-and-exchange is in a loop, the weak version will yield better performance on some platforms.

### See also

|  |  |
| --- | --- |
| std::atomic_is_lock_free(std::shared_ptr)std::atomic_load(std::shared_ptr)std::atomic_load_explicit(std::shared_ptr)std::atomic_store(std::shared_ptr)std::atomic_store_explicit(std::shared_ptr)std::atomic_exchange(std::shared_ptr)std::atomic_exchange_explicit(std::shared_ptr)std::atomic_compare_exchange_weak(std::shared_ptr)std::atomic_compare_exchange_strong(std::shared_ptr)std::atomic_compare_exchange_weak_explicit(std::shared_ptr)std::atomic_compare_exchange_strong_explicit(std::shared_ptr)(deprecated in C++20)(removed in C++26) | specializes atomic operations for `std::shared_ptr`   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/atomic_weak_ptr/compare_exchange&oldid=157717>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 September 2023, at 22:56.