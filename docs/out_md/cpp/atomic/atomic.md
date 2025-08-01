# std::atomic

From cppreference.com
< cpp‎ | atomic
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Threads | | | | | | thread(C++11) | | | | | | jthread(C++20) | | | | | | hardware_destructive_interference_sizehardware_constructive_interference_size(C++17)(C++17) | | | | | | `this_thread` namespace | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_id(C++11) | | | | | | yield(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sleep_for(C++11) | | | | | | sleep_until(C++11) | | | | | | | Cooperative cancellation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stop_token(C++20) | | | | | | inplace_stop_token(C++26) | | | | | | never_stop_token(C++26) | | | | | | stop_source(C++20) | | | | | | inplace_stop_source(C++26) | | | | | | stop_callback(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_stop_callback(C++26) | | | | | | stop_callback_for_t(C++26) | | | | | | stoppable_token(C++26) | | | | | | unstoppable_token(C++26) | | | | | | **stoppable-source**(C++26) | | | | | | **stoppable-callback-for**(C++26) | | | | | | | Mutual exclusion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mutex(C++11) | | | | | | recursive_mutex(C++11) | | | | | | shared_mutex(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | timed_mutex(C++11) | | | | | | recursive_timed_mutex(C++11) | | | | | | shared_timed_mutex(C++14) | | | | | | | Generic lock management | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lock(C++11) | | | | | | lock_guard(C++11) | | | | | | scoped_lock(C++17) | | | | | | unique_lock(C++11) | | | | | | shared_lock(C++14) | | | | | | once_flag(C++11) | | | | | | call_once(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | try_lock(C++11) | | | | | | defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | | | Condition variables | | | | | | condition_variable(C++11) | | | | | | condition_variable_any(C++11) | | | | | | notify_all_at_thread_exit(C++11) | | | | | | cv_status(C++11) | | | | | | Semaphores | | | | | | counting_semaphorebinary_semaphore(C++20)(C++20) | | | | | | Latches and Barriers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | latch(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | barrier(C++20) | | | | | | | Futures | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | promise(C++11) | | | | | | future(C++11) | | | | | | shared_future(C++11) | | | | | | packaged_task(C++11) | | | | | | async(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | launch(C++11) | | | | | | future_status(C++11) | | | | | | future_error(C++11) | | | | | | future_category(C++11) | | | | | | future_errc(C++11) | | | | | | | Safe Reclamation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_obj_base(C++26) | | | | | | rcu_domain(C++26) | | | | | | rcu_default_domain(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_synchronize(C++26) | | | | | | rcu_barrier(C++26) | | | | | | rcu_retire(C++26) | | | | | | | Hazard Pointers | | | | | | hazard_pointer_obj_base(C++26) | | | | | | hazard_pointer(C++26) | | | | | | make_hazard_pointer(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Atomic types | | | | | | ****atomic****(C++11) | | | | | | atomic_ref(C++20) | | | | | | atomic_flag(C++11) | | | | | | Initialization of atomic types | | | | | | atomic_init(C++11)(deprecated in C++20) | | | | | | ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | | | | | | ATOMIC_FLAG_INIT(C++11) | | | | | | Memory ordering | | | | | | memory_order(C++11) | | | | | | kill_dependency(C++11) | | | | | | atomic_thread_fence(C++11) | | | | | | atomic_signal_fence(C++11) | | | | | | Free functions for atomic operations | | | | | | atomic_storeatomic_store_explicit(C++11)(C++11) | | | | | | atomic_loadatomic_load_explicit(C++11)(C++11) | | | | | | atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | | | | | | atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | | | | | | atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | | | | | | atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | | | | | | atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | | | | | | atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | | | | | | atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | | | | | | atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | | | | | | atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | | | | | | atomic_is_lock_free(C++11) | | | | | | atomic_waitatomic_wait_explicit(C++20)(C++20) | | | | | | atomic_notify_one(C++20) | | | | | | atomic_notify_all(C++20) | | | | | | Free functions for atomic flags | | | | | | atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | | | | | | atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | | | | | | atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | | | | | | atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | | | | | | atomic_flag_notify_one(C++20) | | | | | | atomic_flag_notify_all(C++20) | | | | | |

****std::atomic****

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
| atomic::compare_exchange_strongatomic::compare_exchange_weak | | | | |
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
| Defined in header `<atomic>` |  |  |
| template< class T >  struct atomic; | (1) | (since C++11) |
| template< class U >  struct atomic<U\*>; | (2) | (since C++11) |
|  |  |  |
| Defined in header `<memory>` |  |  |
| template< class U >  struct atomic<std::shared_ptr<U>>; | (3) | (since C++20) |
| template< class U >  struct atomic<std::weak_ptr<U>>; | (4) | (since C++20) |
|  |  |  |
| Defined in header `<stdatomic.h>` |  |  |
| #define _Atomic(T) /\* see below \*/ | (5) | (since C++23) |
|  |  |  |

Each instantiation and full specialization of the `std::atomic` template defines an atomic type. If one thread writes to an atomic object while another thread reads from it, the behavior is well-defined (see memory model for details on data races).

In addition, accesses to atomic objects may establish inter-thread synchronization and order non-atomic memory accesses as specified by std::memory_order.

`std::atomic` is neither copyable nor movable.

|  |  |
| --- | --- |
| The compatibility macro `_Atomic` is provided in <stdatomic.h> such that `_Atomic(T)` is identical to `std::atomic<T>` while both are well-formed.  It is unspecified whether any declaration in namespace `std` is available when <stdatomic.h> is included. | (since C++23) |

### Specializations

#### Primary template

The primary `std::atomic` template may be instantiated with any TriviallyCopyable type `T` satisfying both CopyConstructible and CopyAssignable. The program is ill-formed if any of following values is false:

- std::is_trivially_copyable<T>::value
- std::is_copy_constructible<T>::value
- std::is_move_constructible<T>::value
- std::is_copy_assignable<T>::value
- std::is_move_assignable<T>::value
- std::is_same<T, typename std::remove_cv<T>::type>::value

```
struct Counters { int a; int b; }; // user-defined trivially-copyable type
std::atomic<Counters> cnt;         // specialization for the user-defined type

```

std::atomic<bool> uses the primary template. It is guaranteed to be a standard layout struct and has a trivial destructor.

#### Partial specializations

The standard library provides partial specializations of the `std::atomic` template for the following types with additional properties that the primary template does not have:

2) Partial specializations `std::atomic<U*>` for all pointer types. These specializations have standard layout, trivial default constructors,(until C++20) and trivial destructors. Besides the operations provided for all atomic types, these specializations additionally support atomic arithmetic operations appropriate to pointer types, such as `fetch_add`, `fetch_sub`.

|  |  |
| --- | --- |
| 3,4) Partial specializations std::atomic<std::shared_ptr<U>> and std::atomic<std::weak_ptr<U>> are provided for std::shared_ptr and std::weak_ptr. See std::atomic<std::shared_ptr> and std::atomic<std::weak_ptr> for details. | (since C++20) |

#### Specializations for integral types

When instantiated with one of the following integral types, `std::atomic` provides additional atomic operations appropriate to integral types such as `fetch_add`, `fetch_sub`, `fetch_and`, `fetch_or`, `fetch_xor`:

:   - The character types char, char8_t(since C++20), char16_t, char32_t, and wchar_t;
    - The standard signed integer types: signed char, short, int, long, and long long;
    - The standard unsigned integer types: unsigned char, unsigned short, unsigned int, unsigned long, and unsigned long long;
    - Any additional integral types needed by the typedefs in the header <cstdint>.

Additionally, the resulting `std::atomic<Integral>` specialization has standard layout, a trivial default constructor,(until C++20) and a trivial destructor. Signed integer arithmetic is defined to use two's complement; there are no undefined results.

|  |  |
| --- | --- |
| Specializations for floating-point types When instantiated with one of the cv-unqualified floating-point types (float, double, long double and cv-unqualified extended floating-point types(since C++23)), `std::atomic` provides additional atomic operations appropriate to floating-point types such as `fetch_add` and `fetch_sub`.  Additionally, the resulting `std::atomic<Floating>` specialization has standard layout and a trivial destructor.  No operations result in undefined behavior even if the result is not representable in the floating-point type. The floating-point environment in effect may be different from the calling thread's floating-point environment. | (since C++20) |

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | `T` (regardless of whether specialized or not) |
| `difference_type`[[1]](atomic.html#cite_note-1) | |  |  | | --- | --- | | `value_type` (only for `atomic<Integral>` and `atomic<Floating>`(since C++20) specializations) |  | | std::ptrdiff_t (only for `std::atomic<U*>` specializations) |  | |

1. ↑ `difference_type` is not defined in the primary `std::atomic` template or in the partial specializations for std::shared_ptr and std::weak_ptr.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an atomic object   (public member function) |
| operator= | stores a value into an atomic object   (public member function) |
| is_lock_free | checks if the atomic object is lock-free   (public member function) |
| store | atomically replaces the value of the atomic object with a non-atomic argument   (public member function) |
| load | atomically obtains the value of the atomic object   (public member function) |
| operator T | loads a value from an atomic object   (public member function) |
| exchange | atomically replaces the value of the atomic object and obtains the value held previously   (public member function) |
| compare_exchange_weakcompare_exchange_strong | atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   (public member function) |
| wait(C++20) | blocks the thread until notified and the atomic value changes   (public member function) |
| notify_one(C++20) | notifies at least one thread waiting on the atomic object   (public member function) |
| notify_all(C++20) | notifies all threads blocked waiting on the atomic object   (public member function) |
| Constants | |
| is_always_lock_free[static] (C++17) | indicates that the type is always lock-free   (public static member constant) |

### Specialized member functions

|  |  |
| --- | --- |
| Specialized for integral, floating-point(since C++20) and pointer types | |
| fetch_add | atomically adds the argument to the value stored in the atomic object and obtains the value held previously   (public member function) |
| fetch_sub | atomically subtracts the argument from the value stored in the atomic object and obtains the value held previously   (public member function) |
| operator+=operator-= | adds to or subtracts from the atomic value   (public member function) |
| Specialized for integral and pointer types only | |
| fetch_max(C++26) | atomically performs std::max between the argument and the value of the atomic object and obtains the value held previously   (public member function) |
| fetch_min(C++26) | atomically performs std::min between the argument and the value of the atomic object and obtains the value held previously   (public member function) |
| operator++operator++(int)operator--operator--(int) | increments or decrements the atomic value by one   (public member function) |
| Specialized for integral types only | |
| fetch_and | atomically performs bitwise AND between the argument and the value of the atomic object and obtains the value held previously   (public member function) |
| fetch_or | atomically performs bitwise OR between the argument and the value of the atomic object and obtains the value held previously   (public member function) |
| fetch_xor | atomically performs bitwise XOR between the argument and the value of the atomic object and obtains the value held previously   (public member function) |
| operator&=operator|=operator^= | performs bitwise AND, OR, XOR with the atomic value   (public member function) |

### Type aliases

Type aliases are provided for bool and all integral types listed above, as follows:

|  |  |
| --- | --- |
| Aliases for all `std::atomic<Integral>` | |
| ****atomic_bool****(C++11) | std::atomic<bool>   (typedef) |
| ****atomic_char****(C++11) | std::atomic<char>   (typedef) |
| ****atomic_schar****(C++11) | std::atomic<signed char>   (typedef) |
| ****atomic_uchar****(C++11) | std::atomic<unsigned char>   (typedef) |
| ****atomic_short****(C++11) | std::atomic<short>   (typedef) |
| ****atomic_ushort****(C++11) | std::atomic<unsigned short>   (typedef) |
| ****atomic_int****(C++11) | std::atomic<int>   (typedef) |
| ****atomic_uint****(C++11) | std::atomic<unsigned int>   (typedef) |
| ****atomic_long****(C++11) | std::atomic<long>   (typedef) |
| ****atomic_ulong****(C++11) | std::atomic<unsigned long>   (typedef) |
| ****atomic_llong****(C++11) | std::atomic<long long>   (typedef) |
| ****atomic_ullong****(C++11) | std::atomic<unsigned long long>   (typedef) |
| ****atomic_char8_t****(C++20) | std::atomic<char8_t>   (typedef) |
| ****atomic_char16_t****(C++11) | std::atomic<char16_t>   (typedef) |
| ****atomic_char32_t****(C++11) | std::atomic<char32_t>   (typedef) |
| ****atomic_wchar_t****(C++11) | std::atomic<wchar_t>   (typedef) |
| ****atomic_int8_t****(C++11)(optional) | std::atomic<std::int8_t>   (typedef) |
| ****atomic_uint8_t****(C++11)(optional) | std::atomic<std::uint8_t>   (typedef) |
| ****atomic_int16_t****(C++11)(optional) | std::atomic<std::int16_t>   (typedef) |
| ****atomic_uint16_t****(C++11)(optional) | std::atomic<std::uint16_t>   (typedef) |
| ****atomic_int32_t****(C++11)(optional) | std::atomic<std::int32_t>   (typedef) |
| ****atomic_uint32_t****(C++11)(optional) | std::atomic<std::uint32_t>   (typedef) |
| ****atomic_int64_t****(C++11)(optional) | std::atomic<std::int64_t>   (typedef) |
| ****atomic_uint64_t****(C++11)(optional) | std::atomic<std::uint64_t>   (typedef) |
| ****atomic_int_least8_t****(C++11) | std::atomic<std::int_least8_t>   (typedef) |
| ****atomic_uint_least8_t****(C++11) | std::atomic<std::uint_least8_t>   (typedef) |
| ****atomic_int_least16_t****(C++11) | std::atomic<std::int_least16_t>   (typedef) |
| ****atomic_uint_least16_t****(C++11) | std::atomic<std::uint_least16_t>   (typedef) |
| ****atomic_int_least32_t****(C++11) | std::atomic<std::int_least32_t>   (typedef) |
| ****atomic_uint_least32_t****(C++11) | std::atomic<std::uint_least32_t>   (typedef) |
| ****atomic_int_least64_t****(C++11) | std::atomic<std::int_least64_t>   (typedef) |
| ****atomic_uint_least64_t****(C++11) | std::atomic<std::uint_least64_t>   (typedef) |
| ****atomic_int_fast8_t****(C++11) | std::atomic<std::int_fast8_t>   (typedef) |
| ****atomic_uint_fast8_t****(C++11) | std::atomic<std::uint_fast8_t>   (typedef) |
| ****atomic_int_fast16_t****(C++11) | std::atomic<std::int_fast16_t>   (typedef) |
| ****atomic_uint_fast16_t****(C++11) | std::atomic<std::uint_fast16_t>   (typedef) |
| ****atomic_int_fast32_t****(C++11) | std::atomic<std::int_fast32_t>   (typedef) |
| ****atomic_uint_fast32_t****(C++11) | std::atomic<std::uint_fast32_t>   (typedef) |
| ****atomic_int_fast64_t****(C++11) | std::atomic<std::int_fast64_t>   (typedef) |
| ****atomic_uint_fast64_t****(C++11) | std::atomic<std::uint_fast64_t>   (typedef) |
| ****atomic_intptr_t****(C++11)(optional) | std::atomic<std::intptr_t>   (typedef) |
| ****atomic_uintptr_t****(C++11)(optional) | std::atomic<std::uintptr_t>   (typedef) |
| ****atomic_size_t****(C++11) | std::atomic<std::size_t>   (typedef) |
| ****atomic_ptrdiff_t****(C++11) | std::atomic<std::ptrdiff_t>   (typedef) |
| ****atomic_intmax_t****(C++11) | std::atomic<std::intmax_t>   (typedef) |
| ****atomic_uintmax_t****(C++11) | std::atomic<std::uintmax_t>   (typedef) |
| Aliases for special-purpose types | |
| ****atomic_signed_lock_free****(C++20) | a signed integral atomic type that is lock-free and for which waiting/notifying is most efficient   (typedef) |
| ****atomic_unsigned_lock_free****(C++20) | an unsigned integral atomic type that is lock-free and for which waiting/notifying is most efficient   (typedef) |

Note: `std::atomic_intN_t`, `std::atomic_uintN_t`, `std::atomic_intptr_t`, and `std::atomic_uintptr_t` are defined if and only if `std::intN_t`, `std::uintN_t`, std::intptr_t, and std::uintptr_t are defined, respectively.

|  |  |
| --- | --- |
| `std::atomic_signed_lock_free` and `std::atomic_unsigned_lock_free` are optional in freestanding implementations. | (since C++20) |

### Notes

There are non-member function template equivalents for all member functions of `std::atomic`. Those non-member functions may be additionally overloaded for types that are not specializations of `std::atomic`, but are able to guarantee atomicity. The only such type in the standard library is std::shared_ptr<U>.

`_Atomic` is a keyword and used to provide atomic types in C.

Implementations are recommended to ensure that the representation of `_Atomic(T)` in C is same as that of `std::atomic<T>` in C++ for every possible type `T`. The mechanisms used to ensure atomicity and memory ordering should be compatible.

On GCC and Clang, some of the functionality described here requires linking against `-latomic`.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_atomic_ref` | `201806L` | (C++20) | `std::atomic_ref` |
| `__cpp_lib_constexpr_atomic` | `202411L` | (C++26) | constexpr `std::atomic` and std::atomic_ref |

### Example

Run this code

```
#include <atomic>
#include <iostream>
#include <thread>
#include <vector>
 
std::atomic_int acnt;
int cnt;
 
void f()
{
    for (auto n{10000}; n; --n)
    {
        ++acnt;
        ++cnt;
        // Note: for this example, relaxed memory order is sufficient,
        // e.g. acnt.fetch_add(1, std::memory_order_relaxed);
    }
}
 
int main()
{
    {
        std::vector<std::jthread> pool;
        for (int n = 0; n < 10; ++n)
            pool.emplace_back(f);
    }
 
    std::cout << "The atomic counter is " << acnt << '\n'
              << "The non-atomic counter is " << cnt << '\n';
}

```

Possible output:

```
The atomic counter is 100000
The non-atomic counter is 69696

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2441 | C++11 | typedefs for atomic versions of optional fixed width integer types were missing | added |
| LWG 3012 | C++11 | `std::atomic<T>` was permitted for any `T` that is trivially copyable but not copyable | such specializations are forbidden |
| LWG 3949 | C++17 | the wording requiring std::atomic<bool> to have a trivial destructor was accidently dropped in C++17 | added back |
| LWG 4069 (P3323R1) | C++11 | support for cv-qualified `T` was questionable | disallow `T` being cv-qualified |
| P0558R1 | C++11 | template argument deduction for some functions for atomic types might accidently fail; invalid pointer operations were provided | specification was substantially rewritten: member typedefs `value_type` and `difference_type` are added |

### See also

|  |  |
| --- | --- |
| atomic_flag(C++11) | the lock-free boolean atomic type   (class) |
| std::atomic<std::shared_ptr>(C++20) | atomic shared pointer   (class template specialization) |
| std::atomic<std::weak_ptr>(C++20) | atomic weak pointer   (class template specialization) |
| C documentation for Atomic types | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/atomic/atomic&oldid=180205>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 February 2025, at 15:40.