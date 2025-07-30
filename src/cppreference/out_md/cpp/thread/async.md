# std::async

From cppreference.com
< cpp‎ | thread
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

Concurrency support library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Threads | | | | | | thread(C++11) | | | | | | jthread(C++20) | | | | | | hardware_destructive_interference_sizehardware_constructive_interference_size(C++17)(C++17) | | | | | | `this_thread` namespace | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_id(C++11) | | | | | | yield(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sleep_for(C++11) | | | | | | sleep_until(C++11) | | | | | | | Cooperative cancellation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stop_token(C++20) | | | | | | inplace_stop_token")(C++26) | | | | | | never_stop_token(C++26) | | | | | | stop_source(C++20) | | | | | | inplace_stop_source")(C++26) | | | | | | stop_callback(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_stop_callback")(C++26) | | | | | | stop_callback_for_t(C++26) | | | | | | stoppable_token(C++26) | | | | | | unstoppable_token(C++26) | | | | | | **stoppable-source**")(C++26) | | | | | | **stoppable-callback-for**")(C++26) | | | | | | | Mutual exclusion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mutex(C++11) | | | | | | recursive_mutex(C++11) | | | | | | shared_mutex(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | timed_mutex(C++11) | | | | | | recursive_timed_mutex(C++11) | | | | | | shared_timed_mutex(C++14) | | | | | | | Generic lock management | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lock(C++11) | | | | | | lock_guard(C++11) | | | | | | scoped_lock(C++17) | | | | | | unique_lock(C++11) | | | | | | shared_lock(C++14) | | | | | | once_flag(C++11) | | | | | | call_once(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | try_lock(C++11) | | | | | | defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | | | Condition variables | | | | | | condition_variable(C++11) | | | | | | condition_variable_any(C++11) | | | | | | notify_all_at_thread_exit(C++11) | | | | | | cv_status(C++11) | | | | | | Semaphores | | | | | | counting_semaphorebinary_semaphore(C++20)(C++20) | | | | | | Latches and Barriers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | latch(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | barrier(C++20) | | | | | | | Futures | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | promise(C++11) | | | | | | future(C++11) | | | | | | shared_future(C++11) | | | | | | packaged_task(C++11) | | | | | | ****async****(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | launch(C++11) | | | | | | future_status(C++11) | | | | | | future_error(C++11) | | | | | | future_category(C++11) | | | | | | future_errc(C++11) | | | | | | | Safe Reclamation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_obj_base")(C++26) | | | | | | rcu_domain")(C++26) | | | | | | rcu_default_domain")(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_synchronize")(C++26) | | | | | | rcu_barrier")(C++26) | | | | | | rcu_retire")(C++26) | | | | | | | Hazard Pointers | | | | | | hazard_pointer_obj_base")(C++26) | | | | | | hazard_pointer")(C++26) | | | | | | make_hazard_pointer")(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Atomic types | | | | | | atomic(C++11) | | | | | | atomic_ref(C++20) | | | | | | atomic_flag(C++11) | | | | | | Initialization of atomic types | | | | | | atomic_init(C++11)(deprecated in C++20) | | | | | | ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | | | | | | ATOMIC_FLAG_INIT(C++11) | | | | | | Memory ordering | | | | | | memory_order(C++11) | | | | | | kill_dependency(C++11) | | | | | | atomic_thread_fence(C++11) | | | | | | atomic_signal_fence(C++11) | | | | | | Free functions for atomic operations | | | | | | atomic_storeatomic_store_explicit(C++11)(C++11) | | | | | | atomic_loadatomic_load_explicit(C++11)(C++11) | | | | | | atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | | | | | | atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | | | | | | atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | | | | | | atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | | | | | | atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | | | | | | atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | | | | | | atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | | | | | | atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | | | | | | atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | | | | | | atomic_is_lock_free(C++11) | | | | | | atomic_waitatomic_wait_explicit(C++20)(C++20) | | | | | | atomic_notify_one(C++20) | | | | | | atomic_notify_all(C++20) | | | | | | Free functions for atomic flags | | | | | | atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | | | | | | atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | | | | | | atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | | | | | | atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | | | | | | atomic_flag_notify_one(C++20) | | | | | | atomic_flag_notify_all(C++20) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<future>` |  |  |
| template< class F, class... Args >  std::future</\* see below \*/> async( F&& f, Args&&... args ); | (1) | (since C++11) |
| template< class F, class... Args >  std::future</\* see below \*/> async( std::launch policy,                                     F&& f, Args&&... args ); | (2) | (since C++11) |
|  |  |  |

The function template `std::async` runs the function f asynchronously (potentially in a separate thread which might be a part of a thread pool) and returns a std::future that will eventually hold the result of that function call.

1) Behaves as if (2) is called with policy being std::launch::async | std::launch::deferred.2) Calls a function f with arguments args according to a specific launch policy policy (see below).

The return type of `std::async` is std::future<V>, where `V` is:

|  |  |
| --- | --- |
| typename std::result_of<typename std::decay<F>::type(                         typename std::decay<Args>::type...)>::type. | (until C++17) |
| std::invoke_result_t<std::decay_t<F>, std::decay_t<Args>...>. | (since C++17) |

|  |  |
| --- | --- |
| If any of the following conditions is satisfied, the program is ill-formed:   - `F` is not MoveConstructible. - Any type in `Args` is not MoveConstructible. - **INVOKE**(**decay-copy**(std::forward<F>(f)), **decay-copy**(std::forward<Args>(args))...) is not a valid expression. | (until C++20) |
| If any of the following is false, the program is ill-formed:   - std::is_constructible_v<std::decay_t<F>, F> - (std::is_constructible_v<std::decay_t<Args>, Args> && ...) - std::is_invocable_v<std::decay_t<F>, std::decay_t<Args>...> | (since C++20) |

The call to `std::async` synchronizes with the call to f, and the completion of f is sequenced before making the shared state ready.

### Parameters

|  |  |  |
| --- | --- | --- |
| f | - | Callable object to call |
| args | - | parameters to pass to f |
| policy | - | bitmask value, where individual bits control the allowed methods of execution |

### Return value

std::future referring to the shared state created by this call to `std::async`.

### Launch policies

#### Async invocation

If the **async** flag is set, i.e. (policy & std::launch::async) != 0, then `std::async` calls

|  |  |
| --- | --- |
| **INVOKE**(**decay-copy**(std::forward<F>(f)),        **decay-copy**(std::forward<Args>(args))...) | (until C++23) |
| std::invoke(auto(std::forward<F>(f)),             auto(std::forward<Args>(args))...) | (since C++23) |

as if in a new thread of execution represented by a std::thread object.

|  |  |
| --- | --- |
| The calls of **decay-copy** are evaluated in the current thread. | (until C++23) |
| The values produced by auto are materialized in the current thread. | (since C++23) |

If the function f returns a value or throws an exception, it is stored in the shared state accessible through the std::future that `std::async` returns to the caller.

#### Deferred invocation

If the **deferred** flag is set (i.e. (policy & std::launch::deferred) != 0), then `std::async` stores

|  |  |
| --- | --- |
| **decay-copy**(std::forward<F>(f)) and **decay-copy**(std::forward<Args>(args))... in the shared state. | (until C++23) |
| auto(std::forward<F>(f)) and auto(std::forward<Args>(args))... in the shared state. | (since C++23) |

**Lazy evaluation** is performed:

- The first call to a non-timed wait function on the std::future that `std::async` returned to the caller will evaluate **INVOKE**(std::move(g), std::move(xyz)) in the thread that called the waiting function (which does not have to be the thread that originally called `std::async`), where

|  |  |
| --- | --- |
| - g is the stored value of **decay-copy**(std::forward<F>(f)) and - xyz is the stored copy of **decay-copy**(std::forward<Args>(args)).... | (until C++23) |
| - g is the stored value of auto(std::forward<F>(f)) and - xyz is the stored copy of auto(std::forward<Args>(args)).... | (since C++23) |

- The result or exception is placed in the shared state associated with the returned std::future and only then it is made ready. All further accesses to the same std::future will return the result immediately.

#### Other policies

If neither std::launch::async nor std::launch::deferred, nor any implementation-defined policy flag is set in policy, the behavior is undefined.

### Policy selection

If more than one flag is set, it is implementation-defined which policy is selected. For the default (both the std::launch::async and std::launch::deferred flags are set in policy), standard recommends (but does not require) utilizing available concurrency, and deferring any additional tasks.

If the std::launch::async policy is chosen,

- a call to a waiting function on an asynchronous return object that shares the shared state created by this `std::async` call blocks until the associated thread has completed, as if joined, or else time out; and
- the associated thread completion **synchronizes-with** the successful return from the first function that is waiting on the shared state, or with the return of the last function that releases the shared state, whichever comes first.

### Exceptions

Throws

- std::bad_alloc, if the memory for the internal data structures cannot be allocated, or
- std::system_error with error condition std::errc::resource_unavailable_try_again, if policy == std::launch::async and the implementation is unable to start a new thread.
  - If policy is std::launch::async | std::launch::deferred or has additional bits set, it will fall back to deferred invocation or the implementation-defined policies in this case.

### Notes

The implementation may extend the behavior of the first overload of `std::async` by enabling additional (implementation-defined) bits in the default launch policy.

Examples of implementation-defined launch policies are the sync policy (execute immediately, within the `std::async` call) and the task policy (similar to `std::async`, but thread-locals are not cleared)

If the std::future obtained from `std::async` is not moved from or bound to a reference, the destructor of the std::future will block at the end of the full expression until the asynchronous operation completes, essentially making code such as the following synchronous:

```
std::async(std::launch::async, []{ f(); }); // temporary's dtor waits for f()
std::async(std::launch::async, []{ g(); }); // does not start until f() completes

```

Note that the destructors of std::futures obtained by means other than a call to `std::async` never block.

### Example

Run this code

```
#include <algorithm>
#include <future>
#include <iostream>
#include <mutex>
#include <numeric>
#include <string>
#include <vector>
 
std::mutex m;
 
struct X
{
    void foo(int i, const std::string& str)
    {
        std::lock_guard<std::mutex> lk(m);
        std::cout << str << ' ' << i << '\n';
    }
 
    void bar(const std::string& str)
    {
        std::lock_guard<std::mutex> lk(m);
        std::cout << str << '\n';
    }
 
    int operator()(int i)
    {
        std::lock_guard<std::mutex> lk(m);
        std::cout << i << '\n';
        return i + 10;
    }
};
 
template<typename RandomIt>
int parallel_sum(RandomIt beg, RandomIt end)
{
    auto len = end - beg;
    if (len < 1000)
        return std::accumulate(beg, end, 0);
 
    RandomIt mid = beg + len / 2;
    auto handle = std::async(std::launch::async,
                             parallel_sum<RandomIt>, mid, end);
    int sum = parallel_sum(beg, mid);
    return sum + handle.get();
}
 
int main()
{
    std::vector<int> v(10000, 1);
    std::cout << "The sum is " << parallel_sum(v.begin(), v.end()) << '\n';
 
    X x;
    // Calls (&x)->foo(42, "Hello") with default policy:
    // may print "Hello 42" concurrently or defer execution
    auto a1 = std::async(&X::foo, &x, 42, "Hello");
    // Calls x.bar("world!") with deferred policy
    // prints "world!" when a2.get() or a2.wait() is called
    auto a2 = std::async(std::launch::deferred, &X::bar, x, "world!");
    // Calls X()(43); with async policy
    // prints "43" concurrently
    auto a3 = std::async(std::launch::async, X(), 43);
    a2.wait();                     // prints "world!"
    std::cout << a3.get() << '\n'; // prints "53"
} // if a1 is not done at this point, destructor of a1 prints "Hello 42" here

```

Possible output:

```
The sum is 10000
43
world!
53
Hello 42

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2021 | C++11 | return type incorrect and value category of arguments unclear in the deferred case | corrected return type and clarified that rvalues are used |
| LWG 2078 | C++11 | it was unclear whether std::system_error may be thrown if policy specifies other launch policies besides std::launch::async | can only be thrown if policy == std::launch::async |
| LWG 2100 | C++11 | timed waiting functions could not timeout if std::launch::async policy is used | allowed |
| LWG 2120 | C++11 | the behavior was unclear if no standard or implementation-defined policy is set | the behavior is undefined in this case |
| LWG 2186 | C++11 | it was unclear how the value returned and the exception thrown from the lazy evaluation are handled | they are stored in the shared state |
| LWG 2752 | C++11 | `std::async` might not throw std::bad_alloc if the memory for the internal data structures cannot be allocated | throws |
| LWG 3476 | C++20 | (the decayed types of) `F` and the argument types were directly required to be move constructible | removed these requirements[[1]](async.html#cite_note-1) |

1. ↑ The move-constructibility is already indirectly required by std::is_constructible_v.

### See also

|  |  |
| --- | --- |
| future(C++11) | waits for a value that is set asynchronously   (class template) |
| C++ documentation for Execution support library | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/thread/async&oldid=177317>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 October 2024, at 19:32.