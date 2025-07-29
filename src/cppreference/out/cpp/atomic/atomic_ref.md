# std::atomic_ref

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Threads | | | | | | thread(C++11) | | | | | | jthread(C++20) | | | | | | hardware_destructive_interference_sizehardware_constructive_interference_size(C++17)(C++17) | | | | | | `this_thread` namespace | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_id(C++11) | | | | | | yield(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sleep_for(C++11) | | | | | | sleep_until(C++11) | | | | | | | Cooperative cancellation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stop_token(C++20) | | | | | | inplace_stop_token(C++26) | | | | | | never_stop_token(C++26) | | | | | | stop_source(C++20) | | | | | | inplace_stop_source(C++26) | | | | | | stop_callback(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_stop_callback(C++26) | | | | | | stop_callback_for_t(C++26) | | | | | | stoppable_token(C++26) | | | | | | unstoppable_token(C++26) | | | | | | **stoppable-source**(C++26) | | | | | | **stoppable-callback-for**(C++26) | | | | | | | Mutual exclusion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mutex(C++11) | | | | | | recursive_mutex(C++11) | | | | | | shared_mutex(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | timed_mutex(C++11) | | | | | | recursive_timed_mutex(C++11) | | | | | | shared_timed_mutex(C++14) | | | | | | | Generic lock management | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lock(C++11) | | | | | | lock_guard(C++11) | | | | | | scoped_lock(C++17) | | | | | | unique_lock(C++11) | | | | | | shared_lock(C++14) | | | | | | once_flag(C++11) | | | | | | call_once(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | try_lock(C++11) | | | | | | defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | | | | Condition variables | | | | | | condition_variable(C++11) | | | | | | condition_variable_any(C++11) | | | | | | notify_all_at_thread_exit(C++11) | | | | | | cv_status(C++11) | | | | | | Semaphores | | | | | | counting_semaphorebinary_semaphore(C++20)(C++20) | | | | | | Latches and Barriers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | latch(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | barrier(C++20) | | | | | | | Futures | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | promise(C++11) | | | | | | future(C++11) | | | | | | shared_future(C++11) | | | | | | packaged_task(C++11) | | | | | | async(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | launch(C++11) | | | | | | future_status(C++11) | | | | | | future_error(C++11) | | | | | | future_category(C++11) | | | | | | future_errc(C++11) | | | | | | | Safe Reclamation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_obj_base(C++26) | | | | | | rcu_domain(C++26) | | | | | | rcu_default_domain(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rcu_synchronize(C++26) | | | | | | rcu_barrier(C++26) | | | | | | rcu_retire(C++26) | | | | | | | Hazard Pointers | | | | | | hazard_pointer_obj_base(C++26) | | | | | | hazard_pointer(C++26) | | | | | | make_hazard_pointer(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Atomic types | | | | | | atomic(C++11) | | | | | | ****atomic_ref****(C++20) | | | | | | atomic_flag(C++11) | | | | | | Initialization of atomic types | | | | | | atomic_init(C++11)(deprecated in C++20) | | | | | | ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | | | | | | ATOMIC_FLAG_INIT(C++11) | | | | | | Memory ordering | | | | | | memory_order(C++11) | | | | | | kill_dependency(C++11) | | | | | | atomic_thread_fence(C++11) | | | | | | atomic_signal_fence(C++11) | | | | | | Free functions for atomic operations | | | | | | atomic_storeatomic_store_explicit(C++11)(C++11) | | | | | | atomic_loadatomic_load_explicit(C++11)(C++11) | | | | | | atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | | | | | | atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | | | | | | atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | | | | | | atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | | | | | | atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | | | | | | atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | | | | | | atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | | | | | | atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | | | | | | atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | | | | | | atomic_is_lock_free(C++11) | | | | | | atomic_waitatomic_wait_explicit(C++20)(C++20) | | | | | | atomic_notify_one(C++20) | | | | | | atomic_notify_all(C++20) | | | | | | Free functions for atomic flags | | | | | | atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | | | | | | atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | | | | | | atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | | | | | | atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | | | | | | atomic_flag_notify_one(C++20) | | | | | | atomic_flag_notify_all(C++20) | | | | | |

****std::atomic_ref****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| atomic_ref::atomic_ref | | | | |
| atomic_ref::operator= | | | | |
| atomic_ref::is_lock_free | | | | |
| atomic_ref::store | | | | |
| atomic_ref::load | | | | |
| atomic_ref::operator value_type | | | | |
| atomic_ref::exchange | | | | |
| atomic_ref::compare_exchange_strongatomic_ref::compare_exchange_weak | | | | |
| atomic_ref::wait | | | | |
| atomic_ref::notify_one | | | | |
| atomic_ref::notify_all | | | | |
| atomic_ref::address(C++26) | | | | |
| Operations for arithmetic types (except `bool` and pointer-to-object) | | | | |
| atomic_ref::fetch_add | | | | |
| atomic_ref::fetch_sub | | | | |
| atomic_ref::operator+=atomic_ref::operator-= | | | | |
| Operations for integral types (except `bool` and pointer-to-object) | | | | |
| atomic_ref::fetch_max(C++26) | | | | |
| atomic_ref::fetch_min(C++26) | | | | |
| atomic_ref::operator++atomic_ref::operator++(int)atomic_ref::operator--atomic_ref::operator--(int) | | | | |
| Operations for integral types (except `bool`) | | | | |
| atomic_ref::fetch_and | | | | |
| atomic_ref::fetch_or | | | | |
| atomic_ref::fetch_xor | | | | |
| atomic_ref::operator&=atomic_ref::operator|=atomic_ref::operator^= | | | | |
| Constants | | | | |
| atomic_ref::is_always_lock_free | | | | |
| atomic_ref::required_alignment | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<atomic>` |  |  |
| template< class T >  struct atomic_ref; |  | (since C++20) |
|  |  |  |

The `std::atomic_ref` class template applies atomic operations to the object it references.

For the lifetime of the `std::atomic_ref` object, the object it references is considered an atomic object. If one thread writes to an atomic object while another thread reads from it, the behavior is well-defined (see memory model for details on data races). In addition, accesses to atomic objects may establish inter-thread synchronization and order non-atomic memory accesses as specified by std::memory_order.

The lifetime of an object must exceed the lifetime of all `std::atomic_ref`s that references the object. While any `std::atomic_ref` instance referencing an object exists, the object must be exclusively accessed through these `std::atomic_ref` instances. No subobject of an object referenced by an `std::atomic_ref` object may be concurrently referenced by any other `std::atomic_ref` object.

Atomic operations applied to an object through an `std::atomic_ref` are atomic with respect to atomic operations applied through any other `std::atomic_ref` referencing the same object.

Like references in the core language, constness is shallow for `std::atomic_ref` - it is possible to modify the referenced value through a const `std::atomic_ref` object.

If any of the following conditions are satisfied, the program is ill-formed:

- std::is_trivially_copyable_v<T> is false.
- `is_always_lock_free` is false and std::is_volatile_v<T> is true.

`std::atomic_ref` is CopyConstructible.

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | std::remove_cv_t<T> |
| `difference_type` | - `value_type`, if `T` is an arithmetic type other than **cv** bool. - Otherwise, std::ptrdiff_t, if `T` is a pointer-to-object type. - Otherwise, not defined. |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| T\* `ptr` | the pointer to the referenced object (exposition-only member object\*) |
| is_always_lock_free[static] | indicates that the type is always lock-free   (public static member constant) |
| required_alignment[static] | indicates the required alignment of an object to be referenced by `atomic_ref`   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an `atomic_ref` object   (public member function) |
| operator= | stores a value into the object referenced by an `atomic_ref` object   (public member function) |
| is_lock_free | checks if the `atomic_ref` object is lock-free   (public member function) |
| store | atomically replaces the value of the referenced object with a non-atomic argument   (public member function) |
| load | atomically obtains the value of the referenced object   (public member function) |
| operator value_type | loads a value from the referenced object   (public member function) |
| exchange | atomically replaces the value of the referenced object and obtains the value held previously   (public member function) |
| compare_exchange_weakcompare_exchange_strong | atomically compares the value of the referenced object with non-atomic argument and performs atomic exchange if equal or atomic load if not   (public member function) |
| wait | blocks the thread until notified and the atomic value changes   (public member function) |
| notify_one | notifies at least one thread waiting on the atomic object   (public member function) |
| notify_all | notifies all threads blocked waiting on the atomic object   (public member function) |
| address(C++26) | returns the object's address   (public member function) |
| Provided only when `T` is an arithmetic type other than **cv** bool or a pointer-to-object type | |
| fetch_add | atomically adds the argument to the value stored in the referenced object and obtains the value held previously   (public member function) |
| fetch_sub | atomically subtracts the argument from the value stored in the referenced object and obtains the value held previously   (public member function) |
| operator+=operator-= | atomically adds to or subtracts from the referenced value   (public member function) |
| Provided only when `T` is an integral type other than **cv** bool or a pointer-to-object type | |
| fetch_max(C++26) | atomically performs std::max between the argument and the value of the referenced object and obtains the value held previously   (public member function) |
| fetch_min(C++26) | atomically performs std::min between the argument and the value of the referenced object and obtains the value held previously   (public member function) |
| operator++operator++(int)operator--operator--(int) | atomically increments or decrements the referenced object by one   (public member function) |
| Provided only when `T` is an integral type other than **cv** bool | |
| fetch_and | atomically performs bitwise AND between the argument and the value of the referenced object and obtains the value held previously   (public member function) |
| fetch_or | atomically performs bitwise OR between the argument and the value of the referenced object and obtains the value held previously   (public member function) |
| fetch_xor | atomically performs bitwise XOR between the argument and the value of the referenced object and obtains the value held previously   (public member function) |
| operator&=operator|=operator^= | atomically performs bitwise AND, OR, XOR with the referenced value   (public member function) |

### Specializations

The standard specifies that `std::atomic_ref` has following specializations:

|  |  |  |
| --- | --- | --- |
| template<>  struct atomic_ref</\*integral-type\*/>; | (1) | (since C++20) |
| template<>  struct atomic_ref</\*floating-point-type\*/>; | (2) | (since C++20) |
| template< class /\*pointer-type\*/ >      requires /\* see below \*/ struct atomic_ref</\*pointer-type\*/>; | (3) | (since C++20) |
|  |  |  |

1) /\*integral-type\*/ denotes a possibly cv-qualified integral type other than **cv** bool.2) /\*floating-point-type\*/ denotes a possibly cv-qualified floating-point type.3) The partial specialization is provided for /\*pointer-type\*/ types that are possibly cv-qualified pointer-to-object types.

### Notes

Implementations may merge the specified specializations. E.g. MSVC STL merges all of them into the primary template.

When `T` is **cv** void or a function type, std::atomic_ref<T\*> (i.e. std::atomic_ref<void\*>, std::atomic_ref<int(\*)()> etc.) does not have `difference_type` or any operation requiring pointer arithmetic or relational comparison(since C++26).

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_atomic_ref` | `201806L` | (C++20) | `std::atomic_ref` |
| `__cpp_lib_constexpr_atomic` | `202411L` | (C++26) | constexpr std::atomic and `std::atomic_ref` |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3508 (P3323R1) | C++20 | atomic_ref<T> had unimplementable operations if `T` is a const type or pointer-to-non-object type | these operations are either constained or not provided for unsuitable `T` |

### See also

|  |  |
| --- | --- |
| atomic(C++11) | atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/atomic/atomic_ref&oldid=179855>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 January 2025, at 17:49.