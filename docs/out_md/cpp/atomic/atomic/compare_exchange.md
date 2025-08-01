# std::atomic<T>::compare_exchange_weak, std::atomic<T>::compare_exchange_strong

From cppreference.com
< cpp‎ | atomic‎ | atomic
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Threads | | | | | | thread(C++11) | | | | | | jthread(C++20) | | | | | | hardware_destructive_interference_sizehardware_constructive_interference_size(C++17)(C++17) | | | | | | `this_thread` namespace | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_id(C++11) | | | | | | yield(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sleep_for(C++11) | | | | | | sleep_until(C++11) | | | | | | | Cooperative cancellation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stop_token(C++20) | | | | | | inplace_stop_token")(C++26) | | | | | | never_stop_token(C++26) | | | | | | stop_source(C++20) | | | | | | inplace_stop_source")(C++26) | | | | | | stop_callback(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_stop_callback")(C++26) | | | | | | stop_callback_for_t(C++26) | | | | | | stoppable_token(C++26) | | | | | | unstoppable_token(C++26) | | | | | | **stoppable-source**")(C++26) | | | | | | **stoppable-callback-for**")(C++26) | | | | | | | Mutual exclusion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mutex(C++11) | | | | | | recursive_mutex(C++11) | | | | | | shared_mutex(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | timed_mutex(C++11) | | | | | | recursive_timed_mutex(C++11) | | | | | | shared_timed_mutex(C++14) | | | | | | | Generic lock management | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lock(C++11) | | | | | | lock_guard(C++11) | | | | | | scoped_lock(C++17) | | | | | | unique_lock(C++11) | | | | | | shared_lock(C++14) | | | | | | once_flag(C++11) | | | | | | call_once(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | try_lock(C++11) | | | | | | defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | | | Condition variables | | | | | | condition_variable(C++11) | | | | | | condition_variable_any(C++11) | | | | | | notify_all_at_thread_exit(C++11) | | | | | | cv_status(C++11) | | | | | | Semaphores | | | | | | counting_semaphorebinary_semaphore(C++20)(C++20) | | | | | | Latches and Barriers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | latch(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | barrier(C++20) | | | | | | | Futures | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | promise(C++11) | | | | | | future(C++11) | | | | | | shared_future(C++11) | | | | | | packaged_task(C++11) | | | | | | async(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | launch(C++11) | | | | | | future_status(C++11) | | | | | | future_error(C++11) | | | | | | future_category(C++11) | | | | | | future_errc(C++11) | | | | | | | Safe Reclamation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_obj_base")(C++26) | | | | | | rcu_domain")(C++26) | | | | | | rcu_default_domain")(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_synchronize")(C++26) | | | | | | rcu_barrier")(C++26) | | | | | | rcu_retire")(C++26) | | | | | | | Hazard Pointers | | | | | | hazard_pointer_obj_base")(C++26) | | | | | | hazard_pointer")(C++26) | | | | | | make_hazard_pointer")(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Atomic types | | | | | | atomic(C++11) | | | | | | atomic_ref(C++20) | | | | | | atomic_flag(C++11) | | | | | | Initialization of atomic types | | | | | | atomic_init(C++11)(deprecated in C++20) | | | | | | ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | | | | | | ATOMIC_FLAG_INIT(C++11) | | | | | | Memory ordering | | | | | | memory_order(C++11) | | | | | | kill_dependency(C++11) | | | | | | atomic_thread_fence(C++11) | | | | | | atomic_signal_fence(C++11) | | | | | | Free functions for atomic operations | | | | | | atomic_storeatomic_store_explicit(C++11)(C++11) | | | | | | atomic_loadatomic_load_explicit(C++11)(C++11) | | | | | | atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | | | | | | atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | | | | | | atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | | | | | | atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | | | | | | atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | | | | | | atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | | | | | | atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | | | | | | atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | | | | | | atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | | | | | | atomic_is_lock_free(C++11) | | | | | | atomic_waitatomic_wait_explicit(C++20)(C++20) | | | | | | atomic_notify_one(C++20) | | | | | | atomic_notify_all(C++20) | | | | | | Free functions for atomic flags | | | | | | atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | | | | | | atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | | | | | | atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | | | | | | atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | | | | | | atomic_flag_notify_one(C++20) | | | | | | atomic_flag_notify_all(C++20) | | | | | |

std::atomic

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| atomic::atomic | | | | |
| atomic::operator= | | | | |
| atomic::is_lock_free | | | | |
| atomic::store | | | | |
| atomic::load | | | | |
| atomic::operator T | | | | |
| atomic::exchange | | | | |
| ****atomic::compare_exchange_strongatomic::compare_exchange_weak**** | | | | |
| atomic::wait(C++20) | | | | |
| atomic::notify_one(C++20) | | | | |
| atomic::notify_all(C++20) | | | | |
| Constants | | | | |
| atomic::is_always_lock_free(C++17) | | | | |
| Specialized member functions | | | | |
| Specialized for integral, floating-point (C++20) and pointer types | | | | |
| atomic::fetch_add | | | | |
| atomic::fetch_sub | | | | |
| atomic::operator+=atomic::operator-= | | | | |
| Specialized for integral and pointer types only | | | | |
| atomic::fetch_max(C++26) | | | | |
| atomic::fetch_min(C++26) | | | | |
| atomic::operator++atomic::operator++(int)atomic::operator--atomic::operator--(int) | | | | |
| Specialized for integral types only | | | | |
| atomic::fetch_and | | | | |
| atomic::fetch_or | | | | |
| atomic::fetch_xor | | | | |
| atomic::operator&=atomic::operator|=atomic::operator^= | | | | |

|  |  |  |
| --- | --- | --- |
| bool compare_exchange_weak( T& expected, T desired,  std::memory_order success, std::memory_order failure ) noexcept; | (1) | (since C++11) |
| bool compare_exchange_weak( T& expected, T desired,  std::memory_order success, std::memory_order failure ) volatile noexcept; | (2) | (since C++11) |
| bool compare_exchange_weak( T& expected, T desired,  std::memory_order order = std::memory_order_seq_cst ) noexcept; | (3) | (since C++11) |
| bool compare_exchange_weak( T& expected, T desired,  std::memory_order order = std::memory_order_seq_cst ) volatile noexcept; | (4) | (since C++11) |
| bool compare_exchange_strong( T& expected, T desired,  std::memory_order success, std::memory_order failure ) noexcept; | (5) | (since C++11) |
| bool compare_exchange_strong( T& expected, T desired,  std::memory_order success, std::memory_order failure ) volatile noexcept; | (6) | (since C++11) |
| bool compare_exchange_strong( T& expected, T desired,  std::memory_order order = std::memory_order_seq_cst ) noexcept; | (7) | (since C++11) |
| bool compare_exchange_strong  ( T& expected, T desired, std::memory_order order = std::memory_order_seq_cst ) volatile noexcept; | (8) | (since C++11) |
|  |  |  |

Atomically compares the object representation(until C++20)value representation(since C++20) of \*this with that of expected. If those are bitwise-equal, replaces the former with desired (performs read-modify-write operation). Otherwise, loads the actual value stored in \*this into expected (performs load operation).

| Overloads | Memory model for | |
| --- | --- | --- |
| read‑modify‑write operation | load operation |
| (1,2,5,6) | success | failure |
| (3,4,7,8) | order | - std::memory_order_acquire if order is std::memory_order_acq_rel - std::memory_order_relaxed if order is std::memory_order_release - otherwise order |

If failure is stronger than success or(until C++17) is one of std::memory_order_release and std::memory_order_acq_rel, the behavior is undefined.

|  |  |
| --- | --- |
| It is deprecated if std::atomic<T>::is_always_lock_free is false and any volatile overload participates in overload resolution. | (since C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| expected | - | reference to the value expected to be found in the atomic object |
| desired | - | the value to store in the atomic object if it is as expected |
| success | - | the memory synchronization ordering for the read-modify-write operation if the comparison succeeds |
| failure | - | the memory synchronization ordering for the load operation if the comparison fails |
| order | - | the memory synchronization ordering for both operations |

### Return value

true if the underlying atomic value was successfully changed, false otherwise.

### Notes

The comparison and copying are bitwise (similar to std::memcmp and std::memcpy); no constructor, assignment operator, or comparison operator are used.

`compare_exchange_weak` is allowed to fail spuriously, that is, acts as if \*this != expected even if they are equal. When a compare-and-exchange is in a loop, `compare_exchange_weak` will yield better performance on some platforms.

When `compare_exchange_weak` would require a loop and `compare_exchange_strong` would not, `compare_exchange_strong` is preferable unless the object representation of `T` may include padding bits,(until C++20) trap bits, or offers multiple object representations for the same value (e.g. floating-point NaN). In those cases, `compare_exchange_weak` typically works because it quickly converges on some stable object representation.

For a union with bits that participate in the value representations of some members but not the others, compare-and-exchange might always fail because such padding bits have indeterminate values when they do not participate in the value representation of the active member.

|  |  |
| --- | --- |
| Padding bits that never participate in an object's value representation are ignored. | (since C++20) |

### Example

Compare-and-exchange operations are often used as basic building blocks of lock-free data structures.

Run this code

```
#include <atomic>
 
template<typename T>
struct node
{
    T data;
    node* next;
    node(const T& data) : data(data), next(nullptr) {}
};
 
template<typename T>
class stack
{
    std::atomic<node<T>*> head;
public:
    void push(const T& data)
    {
        node<T>* new_node = new node<T>(data);
 
        // put the current value of head into new_node->next
        new_node->next = head.load(std::memory_order_relaxed);
 
        // now make new_node the new head, but if the head
        // is no longer what's stored in new_node->next
        // (some other thread must have inserted a node just now)
        // then put that new head into new_node->next and try again
        while (!head.compare_exchange_weak(new_node->next, new_node,
                                           std::memory_order_release,
                                           std::memory_order_relaxed))
            ; // the body of the loop is empty
 
// Note: the above use is not thread-safe in at least 
// GCC prior to 4.8.3 (bug 60272), clang prior to 2014-05-05 (bug 18899)
// MSVC prior to 2014-03-17 (bug 819819). The following is a workaround:
//      node<T>* old_head = head.load(std::memory_order_relaxed);
//      do
//      {
//          new_node->next = old_head;
//      }
//      while (!head.compare_exchange_weak(old_head, new_node,
//                                         std::memory_order_release,
//                                         std::memory_order_relaxed));
    }
};
 
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
}

```

Demonstrates how `std::compare_exchange_strong` either changes the value of the atomic variable or the variable used for comparison.

|  |  |
| --- | --- |
|  | This section is incomplete Reason: more practical use of the strong CAS would be nice, such as where Concurrency in Action uses it |

Run this code

```
#include <atomic>
#include <iostream>
 
std::atomic<int> ai;
 
int tst_val = 4;
int new_val = 5;
bool exchanged = false;
 
void valsout()
{
    std::cout << "ai = " << ai
	      << "  tst_val = " << tst_val
	      << "  new_val = " << new_val
	      << "  exchanged = " << std::boolalpha << exchanged
	      << '\n';
}
 
int main()
{
    ai = 3;
    valsout();
 
    // tst_val != ai   ==>  tst_val is modified
    exchanged = ai.compare_exchange_strong(tst_val, new_val);
    valsout();
 
    // tst_val == ai   ==>  ai is modified
    exchanged = ai.compare_exchange_strong(tst_val, new_val);
    valsout();
}

```

Output:

```
ai = 3  tst_val = 4  new_val = 5  exchanged = false
ai = 3  tst_val = 3  new_val = 5  exchanged = false
ai = 5  tst_val = 3  new_val = 5  exchanged = true

```

### See also

|  |  |
| --- | --- |
| atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/atomic/atomic/compare_exchange&oldid=159473>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 September 2023, at 21:56.