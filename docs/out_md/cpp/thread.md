# Concurrency support library (since C++11)

From cppreference.com
< cpp
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
| ****Concurrency support library**** (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

****Concurrency support library****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Threads | | | | | | thread(C++11) | | | | | | jthread(C++20) | | | | | | hardware_destructive_interference_sizehardware_constructive_interference_size(C++17)(C++17) | | | | | | `this_thread` namespace | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_id(C++11) | | | | | | yield(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sleep_for(C++11) | | | | | | sleep_until(C++11) | | | | | | | Cooperative cancellation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stop_token(C++20) | | | | | | inplace_stop_token(C++26) | | | | | | never_stop_token(C++26) | | | | | | stop_source(C++20) | | | | | | inplace_stop_source(C++26) | | | | | | stop_callback(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_stop_callback(C++26) | | | | | | stop_callback_for_t(C++26) | | | | | | stoppable_token(C++26) | | | | | | unstoppable_token(C++26) | | | | | | **stoppable-source**(C++26) | | | | | | **stoppable-callback-for**(C++26) | | | | | | | Mutual exclusion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mutex(C++11) | | | | | | recursive_mutex(C++11) | | | | | | shared_mutex(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | timed_mutex(C++11) | | | | | | recursive_timed_mutex(C++11) | | | | | | shared_timed_mutex(C++14) | | | | | | | Generic lock management | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lock(C++11) | | | | | | lock_guard(C++11) | | | | | | scoped_lock(C++17) | | | | | | unique_lock(C++11) | | | | | | shared_lock(C++14) | | | | | | once_flag(C++11) | | | | | | call_once(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | try_lock(C++11) | | | | | | defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | | | Condition variables | | | | | | condition_variable(C++11) | | | | | | condition_variable_any(C++11) | | | | | | notify_all_at_thread_exit(C++11) | | | | | | cv_status(C++11) | | | | | | Semaphores | | | | | | counting_semaphorebinary_semaphore(C++20)(C++20) | | | | | | Latches and Barriers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | latch(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | barrier(C++20) | | | | | | | Futures | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | promise(C++11) | | | | | | future(C++11) | | | | | | shared_future(C++11) | | | | | | packaged_task(C++11) | | | | | | async(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | launch(C++11) | | | | | | future_status(C++11) | | | | | | future_error(C++11) | | | | | | future_category(C++11) | | | | | | future_errc(C++11) | | | | | | | Safe Reclamation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_obj_base(C++26) | | | | | | rcu_domain(C++26) | | | | | | rcu_default_domain(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_synchronize(C++26) | | | | | | rcu_barrier(C++26) | | | | | | rcu_retire(C++26) | | | | | | | Hazard Pointers | | | | | | hazard_pointer_obj_base(C++26) | | | | | | hazard_pointer(C++26) | | | | | | make_hazard_pointer(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Atomic types | | | | | | atomic(C++11) | | | | | | atomic_ref(C++20) | | | | | | atomic_flag(C++11) | | | | | | Initialization of atomic types | | | | | | atomic_init(C++11)(deprecated in C++20) | | | | | | ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | | | | | | ATOMIC_FLAG_INIT(C++11) | | | | | | Memory ordering | | | | | | memory_order(C++11) | | | | | | kill_dependency(C++11) | | | | | | atomic_thread_fence(C++11) | | | | | | atomic_signal_fence(C++11) | | | | | | Free functions for atomic operations | | | | | | atomic_storeatomic_store_explicit(C++11)(C++11) | | | | | | atomic_loadatomic_load_explicit(C++11)(C++11) | | | | | | atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | | | | | | atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | | | | | | atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | | | | | | atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | | | | | | atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | | | | | | atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | | | | | | atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | | | | | | atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | | | | | | atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | | | | | | atomic_is_lock_free(C++11) | | | | | | atomic_waitatomic_wait_explicit(C++20)(C++20) | | | | | | atomic_notify_one(C++20) | | | | | | atomic_notify_all(C++20) | | | | | | Free functions for atomic flags | | | | | | atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | | | | | | atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | | | | | | atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | | | | | | atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | | | | | | atomic_flag_notify_one(C++20) | | | | | | atomic_flag_notify_all(C++20) | | | | | |

C++ includes built-in support for threads, atomic operations, mutual exclusion, condition variables, and futures.

### Threads

Threads enable programs to execute across several processor cores.

|  |  |
| --- | --- |
| Defined in header `<thread>` | |
| thread(C++11) | manages a separate thread   (class) |
| jthread(C++20) | std::thread with support for auto-joining and cancellation   (class) |
| Functions managing the current thread | |
| Defined in namespace `this_thread` | |
| yield(C++11) | suggests that the implementation reschedule execution of threads   (function) |
| get_id(C++11) | returns the thread id of the current thread   (function) |
| sleep_for(C++11) | stops the execution of the current thread for a specified time duration   (function) |
| sleep_until(C++11) | stops the execution of the current thread until a specified time point   (function) |

### Cooperative cancellation (since C++20)

The components **stop source**, **stop token**, and **stop callback** can be used to asynchronously request that an operation stops execution in a timely manner, typically because the result is no longer required. Such a request is called a **stop request**.

These components specify the semantics of shared access to a **stop state**. Any object modeling any of these components that refer to the same stop state is an associated stop source, stop token, or stop callback, respectively.

|  |  |
| --- | --- |
| The concepts `stoppable-source`, `stoppable_token`, and `stoppable-callback-for` specify the required syntax and model semantics of stop source, stop token, and stop callback, respectively. | (since C++26) |

They are designed:

- to cooperatively cancel the execution such as for std::jthread,
- to interrupt std::condition_variable_any waiting functions,

|  |  |
| --- | --- |
| - to perform stopped completion of an asynchronous operation created by execution::connect, | (since C++26) |

- or for a custom execution management implementation.

In fact, they do not even need to be used to "stop" anything, but can instead be used for a thread-safe one-time function(s) invocation trigger, for example.

|  |  |
| --- | --- |
| Defined in header `<stop_token>` | |
| Stop token types | |
| stop_token(C++20) | an interface for querying if a std::jthread cancellation request has been made   (class) |
| never_stop_token(C++26) | provides a stop token interface that a stop is never possible nor requested   (class) |
| inplace_stop_token(C++26) | a stop token that references stop state of its associated `std::inplace_stop_source` object   (class) |
| Stop source types | |
| stop_source(C++20) | class representing a request to stop one or more std::jthreads   (class) |
| inplace_stop_source(C++26) | a `stoppable-source` that is the sole owner of the stop state   (class) |
| Stop callback types | |
| stop_callback(C++20) | an interface for registering callbacks on std::jthread cancellation   (class template) |
| inplace_stop_callback(C++26) | a stop callback for `std::inplace_stop_token`   (class template) |
| stop_callback_for_t(C++26) | obtains the callback type for a given stop token type (alias template) |
| Concepts (since C++20) | |
| stoppable_token(C++26) | specifies the basic interface of stop tokens which allows queries for stop requests and whether the stop request is possible   (concept) |
| unstoppable_token(C++26) | specifies a stop token that does not allow stopping   (concept) |
| ****stoppable-source****(C++26) | specifies that a type is a factory for associated stop tokens and a stop request can be made upon it (exposition-only concept\*) |
| ****stoppable-callback-for****(C++26) | specifies an interface for registering callbacks with a given stop token type (exposition-only concept\*) |

### Cache size access (since C++17)

|  |  |
| --- | --- |
| Defined in header `<new>` | |
| hardware_destructive_interference_sizehardware_constructive_interference_size(C++17) | min offset to avoid false sharing max offset to promote true sharing   (constant) |

### Atomic operations

These components are provided for fine-grained atomic operations allowing for lockless concurrent programming. Each atomic operation is indivisible with regards to any other atomic operation that involves the same object. Atomic objects are free of data races.

|  |  |
| --- | --- |
| Defined in header `<atomic>` | |
| Atomic types | |
| atomic(C++11) | atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   (class template) |
| atomic_ref(C++20) | provides atomic operations on non-atomic objects   (class template) |
| Operations on atomic types | |
| atomic_is_lock_free(C++11) | checks if the atomic type's operations are lock-free   (function template) |
| atomic_storeatomic_store_explicit(C++11)(C++11) | atomically replaces the value of the atomic object with a non-atomic argument   (function template) |
| atomic_loadatomic_load_explicit(C++11)(C++11) | atomically obtains the value stored in an atomic object   (function template) |
| atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | atomically replaces the value of the atomic object with non-atomic argument and returns the old value of the atomic   (function template) |
| atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   (function template) |
| atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | adds a non-atomic value to an atomic object and obtains the previous value of the atomic   (function template) |
| atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | subtracts a non-atomic value from an atomic object and obtains the previous value of the atomic   (function template) |
| atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | replaces the atomic object with the result of bitwise AND with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | replaces the atomic object with the result of bitwise OR with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | replaces the atomic object with the result of bitwise XOR with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | replaces the atomic object with the result of std::max with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | replaces the atomic object with the result of std::min with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_waitatomic_wait_explicit(C++20)(C++20) | blocks the thread until notified and the atomic value changes   (function template) |
| atomic_notify_one(C++20) | notifies a thread blocked in atomic_wait   (function template) |
| atomic_notify_all(C++20) | notifies all threads blocked in atomic_wait   (function template) |
| Flag type and operations | |
| atomic_flag(C++11) | the lock-free boolean atomic type   (class) |
| atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | atomically sets the flag to true and returns its previous value   (function) |
| atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | atomically sets the value of the flag to false   (function) |
| atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | atomically returns the value of the flag   (function) |
| atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | blocks the thread until notified and the flag changes   (function) |
| atomic_flag_notify_one(C++20) | notifies a thread blocked in atomic_flag_wait   (function) |
| atomic_flag_notify_all(C++20) | notifies all threads blocked in atomic_flag_wait   (function) |
| Initialization | |
| atomic_init(C++11)(deprecated in C++20) | non-atomic initialization of a default-constructed atomic object   (function template) |
| ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | constant initialization of an atomic variable of static storage duration   (function macro) |
| ATOMIC_FLAG_INIT(C++11) | initializes an std::atomic_flag to false   (macro constant) |
| Memory synchronization ordering | |
| memory_order(C++11) | defines memory ordering constraints for the given atomic operation   (enum) |
| kill_dependency(C++11) | removes the specified object from the std::memory_order_consume dependency tree   (function template) |
| atomic_thread_fence(C++11) | generic memory order-dependent fence synchronization primitive   (function) |
| atomic_signal_fence(C++11) | fence between a thread and a signal handler executed in the same thread   (function) |
| Defined in header `<stdatomic.h>` | |
| C compatibility macros (since C++23) | |
| _Atomic(C++23) | compatibility macro such that _Atomic(T) is identical to std::atomic<T>   (function macro) |

Neither the `_Atomic` macro, nor any of the non-macro global namespace declarations are provided by any C++ standard library header other than `<stdatomic.h>`.

### Mutual exclusion

Mutual exclusion algorithms prevent multiple threads from simultaneously accessing shared resources. This prevents data races and provides support for synchronization between threads.

|  |  |
| --- | --- |
| Defined in header `<mutex>` | |
| mutex(C++11) | provides basic mutual exclusion facility   (class) |
| timed_mutex(C++11) | provides mutual exclusion facility which implements locking with a timeout   (class) |
| recursive_mutex(C++11) | provides mutual exclusion facility which can be locked recursively by the same thread   (class) |
| recursive_timed_mutex(C++11) | provides mutual exclusion facility which can be locked recursively by the same thread and implements locking with a timeout   (class) |
| Defined in header `<shared_mutex>` | |
| shared_mutex(C++17) | provides shared mutual exclusion facility   (class) |
| shared_timed_mutex(C++14) | provides shared mutual exclusion facility and implements locking with a timeout   (class) |
| Generic mutex management | |
| Defined in header `<mutex>` | |
| lock_guard(C++11) | implements a strictly scope-based mutex ownership wrapper   (class template) |
| scoped_lock(C++17) | deadlock-avoiding RAII wrapper for multiple mutexes   (class template) |
| unique_lock(C++11) | implements movable mutex ownership wrapper   (class template) |
| shared_lock(C++14) | implements movable shared mutex ownership wrapper   (class template) |
| defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t(C++11) | tags used to specify locking strategy (tag) |
| Generic locking algorithms | |
| try_lock(C++11) | attempts to obtain ownership of mutexes via repeated calls to `try_lock`   (function template) |
| lock(C++11) | locks specified mutexes, blocks if any are unavailable   (function template) |
| Call once | |
| once_flag(C++11) | helper object to ensure that call_once invokes the function only once   (class) |
| call_once(C++11) | invokes a function only once even if called from multiple threads   (function template) |

### Condition variables

A condition variable is a synchronization primitive that allows multiple threads to communicate with each other. It allows some number of threads to wait (possibly with a timeout) for notification from another thread that they may proceed. A condition variable is always associated with a mutex.

|  |  |
| --- | --- |
| Defined in header `<condition_variable>` | |
| condition_variable(C++11) | provides a condition variable associated with a std::unique_lock   (class) |
| condition_variable_any(C++11) | provides a condition variable associated with any lock type   (class) |
| notify_all_at_thread_exit(C++11) | schedules a call to `notify_all` to be invoked when this thread is completely finished   (function) |
| cv_status(C++11) | lists the possible results of timed waits on condition variables   (enum) |

### Semaphores (since C++20)

A semaphore is a lightweight synchronization primitive used to constrain concurrent access to a shared resource. When either would suffice, a semaphore can be more efficient than a condition variable.

|  |  |
| --- | --- |
| Defined in header `<semaphore>` | |
| counting_semaphore(C++20) | semaphore that models a non-negative resource count   (class template) |
| binary_semaphore(C++20) | semaphore that has only two states   (typedef) |

### Latches and Barriers (since C++20)

Latches and barriers are thread coordination mechanisms that allow any number of threads to block until an expected number of threads arrive. A latch cannot be reused, while a barrier can be used repeatedly.

|  |  |
| --- | --- |
| Defined in header `<latch>` | |
| latch(C++20) | single-use thread barrier   (class) |
| Defined in header `<barrier>` | |
| barrier(C++20) | reusable thread barrier   (class template) |

### Futures

The standard library provides facilities to obtain values that are returned and to catch exceptions that are thrown by asynchronous tasks (i.e. functions launched in separate threads). These values are communicated in a **shared state**, in which the asynchronous task may write its return value or store an exception, and which may be examined, waited for, and otherwise manipulated by other threads that hold instances of std::future or std::shared_future that reference that shared state.

|  |  |
| --- | --- |
| Defined in header `<future>` | |
| promise(C++11) | stores a value for asynchronous retrieval   (class template) |
| packaged_task(C++11) | packages a function to store its return value for asynchronous retrieval   (class template) |
| future(C++11) | waits for a value that is set asynchronously   (class template) |
| shared_future(C++11) | waits for a value (possibly referenced by other futures) that is set asynchronously   (class template) |
| async(C++11) | runs a function asynchronously (potentially in a new thread) and returns a std::future that will hold the result   (function template) |
| launch(C++11) | specifies the launch policy for std::async   (enum) |
| future_status(C++11) | specifies the results of timed waits performed on std::future and std::shared_future   (enum) |
| Future errors | |
| future_error(C++11) | reports an error related to futures or promises   (class) |
| future_category(C++11) | identifies the future error category   (function) |
| future_errc(C++11) | identifies the future error codes   (enum) |

### Safe Reclamation (since C++26)

Safe-reclamation techniques are most frequently used to straightforwardly resolve access-deletion races.

|  |  |
| --- | --- |
| Read-Copy-Update Mechanism | |
| Defined in header `<rcu>` | |
| rcu_obj_base(C++26) | allows an object to be protected by RCU   (class template) |
| rcu_domain(C++26) | provides regions of RCU protection   (class) |
| rcu_default_domain(C++26) | returns a reference to a static-duration object of type `std::rcu_domain`   (function) |
| rcu_synchronize(C++26) | blocks until a protection region unlocks on a RCU domain   (function) |
| rcu_barrier(C++26) | may evaluate scheduled operations on a RCU domain and blocks until all preceding evaluations are complete   (function) |
| rcu_retire(C++26) | schedules the evaluation of a specified function on a RCU domain, potentially allocating memory, and invoking scheduled evaluations   (function template) |
| Hazard Pointers | |
| Defined in header `<hazard_pointer>` | |
| hazard_pointer_obj_base(C++26) | allows an object to be hazard-protectable   (class template) |
| hazard_pointer(C++26) | single-writer multi-reader pointer that can be owned by at most one thread at any point of time   (class) |
| make_hazard_pointer(C++26) | constructs a hazard pointer   (function) |

### See also

|  |  |
| --- | --- |
| C documentation for Concurrency support library | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/thread&oldid=179906>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2025, at 11:27.