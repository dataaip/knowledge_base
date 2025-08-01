# std::atomic_...<std::shared_ptr>

From cppreference.com
< cpp‎ | memory‎ | shared ptr
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

Memory management library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **voidify**(exposition only\*) | | | | | | Uninitialized memory algorithms | | | | | | uninitialized_copy | | | | | | uninitialized_fill | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | destroy(C++17) | | | | | | destroy_at(C++17) | | | | | | uninitialized_copy_n(C++11) | | | | | | uninitialized_fill_n | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | destroy_n(C++17) | | | | | | construct_at(C++20) | | | | | | Constrained uninitialized memory algorithms | | | | | | ranges::uninitialized_copy(C++20) | | | | | | ranges::uninitialized_fill(C++20) | | | | | | ranges::uninitialized_move(C++20) | | | | | | ranges::construct_at(C++20) | | | | | | ranges::destroy(C++20) | | | | | | ranges::destroy_n(C++20) | | | | | | ranges::destroy_at(C++20) | | | | | | ranges::uninitialized_copy_n(C++20) | | | | | | ranges::uninitialized_fill_n(C++20) | | | | | | ranges::uninitialized_move_n(C++20) | | | | | | ranges::uninitialized_default_construct(C++20) | | | | | | ranges::uninitialized_value_construct(C++20) | | | | | | ranges::uninitialized_default_construct_n(C++20) | | | | | | ranges::uninitialized_value_construct_n(C++20) | | | | | | C Library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | malloc | | | | | | calloc | | | | | | realloc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_alloc(C++17) | | | | | | free | | | | | |  | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Allocators | | | | | | allocator | | | | | | allocator_traits(C++11) | | | | | | allocation_result(C++23) | | | | | | allocator_arg(C++11) | | | | | | uses_allocator(C++11) | | | | | | uses_allocator_construction_args(C++20) | | | | | | make_obj_using_allocator(C++20) | | | | | | uninitialized_construct_using_allocator(C++20) | | | | | | scoped_allocator_adaptor(C++11) | | | | | | pmr::polymorphic_allocator(C++17) | | | | | | Memory resources | | | | | | pmr::memory_resource(C++17) | | | | | | pmr::get_default_resource(C++17) | | | | | | pmr::set_default_resource(C++17) | | | | | | pmr::new_delete_resource(C++17) | | | | | | pmr::null_memory_resource(C++17) | | | | | | pmr::synchronized_pool_resource(C++17) | | | | | | pmr::unsynchronized_pool_resource(C++17) | | | | | | pmr::monotonic_buffer_resource(C++17) | | | | | | pmr::pool_options(C++17) | | | | | | Garbage collection support | | | | | | declare_reachable(C++11)(until C++23) | | | | | | undeclare_reachable(C++11)(until C++23) | | | | | | declare_no_pointers(C++11)(until C++23) | | | | | | undeclare_no_pointers(C++11)(until C++23) | | | | | | pointer_safety(C++11)(until C++23) | | | | | | get_pointer_safety(C++11)(until C++23) | | | | | | Uninitialized storage | | | | | | raw_storage_iterator(until C++20\*) | | | | | | get_temporary_buffer(until C++20\*) | | | | | | return_temporary_buffer(until C++20\*) | | | | | | Explicit lifetime management | | | | | | start_lifetime_asstart_lifetime_as_array(C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Smart pointers | | | | | | unique_ptr(C++11) | | | | | | shared_ptr(C++11) | | | | | | weak_ptr(C++11) | | | | | | auto_ptr(until C++17\*) | | | | | | owner_less(C++11) | | | | | | owner_less<void>(C++17) | | | | | | owner_hash(C++26) | | | | | | owner_equal(C++26) | | | | | | enable_shared_from_this(C++11) | | | | | | bad_weak_ptr(C++11) | | | | | | default_delete(C++11) | | | | | | out_ptr_t(C++23) | | | | | | inout_ptr_t(C++23) | | | | | | Low level memory management | | | | | | operator new | | | | | | [operator new[]](../new/operator_new.html "cpp/memory/new/operator new") | | | | | | operator delete | | | | | | [operator delete[]](../new/operator_delete.html "cpp/memory/new/operator delete") | | | | | | get_new_handler(C++11) | | | | | | set_new_handler | | | | | | launder(C++17) | | | | | | bad_alloc | | | | | | bad_array_new_length(C++11) | | | | | | nothrow_t | | | | | | align_val_t(C++17) | | | | | | destroying_delete_t(C++20) | | | | | | new_handler | | | | | | nothrow | | | | | | Miscellaneous | | | | | | pointer_traits(C++11) | | | | | | to_address(C++20) | | | | | | addressof(C++11) | | | | | | align(C++11) | | | | | | assume_aligned(C++20) | | | | | | is_sufficiently_aligned(C++26) | | | | | |

std::shared_ptr

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| shared_ptr::shared_ptr | | | | |
| shared_ptr::~shared_ptr | | | | |
| shared_ptr::operator= | | | | |
| Modifiers | | | | |
| shared_ptr::reset | | | | |
| shared_ptr::swap | | | | |
| Observers | | | | |
| shared_ptr::get | | | | |
| shared_ptr::operator\*shared_ptr::operator-> | | | | |
| [shared_ptr::operator[]](operator_at.html "cpp/memory/shared ptr/operator at")(C++17) | | | | |
| shared_ptr::use_count | | | | |
| shared_ptr::unique(until C++20\*) | | | | |
| shared_ptr::operator bool | | | | |
| shared_ptr::owner_before | | | | |
| shared_ptr::owner_hash(C++26) | | | | |
| shared_ptr::owner_equal(C++26) | | | | |
| Non-member functions | | | | |
| swap(std::shared_ptr) | | | | |
| make_sharedmake_shared_for_overwrite(C++20) | | | | |
| allocate_sharedallocate_shared_for_overwrite(C++20) | | | | |
| static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast(C++17) | | | | |
| get_deleter | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | |
| operator<< | | | | |
| ****atomic_xxx****functions (until C++26\*) | | | | |
| Helper classes | | | | |
| atomic<std::shared_ptr>(C++20) | | | | |
| hash<std::shared_ptr> | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<memory>` |  |  |
| template< class T >  bool atomic_is_lock_free( const std::shared_ptr<T>\* p ); | (1) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  std::shared_ptr<T> atomic_load( const std::shared_ptr<T>\* p ); | (2) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  std::shared_ptr<T> atomic_load_explicit ( const std::shared_ptr<T>\* p, std::memory_order mo ); | (3) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  void atomic_store( std::shared_ptr<T>\* p, std::shared_ptr<T> r ); | (4) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  void atomic_store_explicit      ( std::shared_ptr<T>\* p, std::shared_ptr<T> r, std::memory_order mo ); | (5) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  std::shared_ptr<T> atomic_exchange ( std::shared_ptr<T>\* p, std::shared_ptr<T> r ); | (6) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  std::shared_ptr<T> atomic_exchange_explicit      ( std::shared_ptr<T>\* p, std::shared_ptr<T> r, std::memory_order mo ); | (7) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  bool atomic_compare_exchange_weak      ( std::shared_ptr<T>\* p, std::shared_ptr<T>\* expected, std::shared_ptr<T> desired ); | (8) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  bool atomic_compare_exchange_strong      ( std::shared_ptr<T>\* p, std::shared_ptr<T>\* expected, std::shared_ptr<T> desired ); | (9) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  bool atomic_compare_exchange_strong_explicit      ( std::shared_ptr<T>\* p, std::shared_ptr<T>\* expected,        std::shared_ptr<T> desired, std::memory_order success, std::memory_order failure ); | (10) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
| template< class T >  bool atomic_compare_exchange_weak_explicit      ( std::shared_ptr<T>\* p, std::shared_ptr<T>\* expected,        std::shared_ptr<T> desired, std::memory_order success, std::memory_order failure ); | (11) | (since C++11)  (deprecated in C++20)  (removed in C++26) |
|  |  |  |

If multiple threads of execution access the same std::shared_ptr object without synchronization and any of those accesses uses a non-const member function of `shared_ptr` then a data race will occur unless all such access is performed through these functions, which are overloads of the corresponding atomic access functions (std::atomic_load, std::atomic_store, etc.).

Note that the control block of a `shared_ptr` is thread-safe: different std::shared_ptr objects can be accessed using mutable operations, such as operator= or `reset`, simultaneously by multiple threads, even when these instances are copies, and share the same control block internally.

1) Determines whether atomic access to the shared pointer pointed-to by p is lock-free.2) Equivalent to atomic_load_explicit(p, std::memory_order_seq_cst).3) Returns the shared pointer pointed-to by p. As with the non-specialized std::atomic_load_explicit, if mo is std::memory_order_release or std::memory_order_acq_rel, the behavior is undefined.4) Equivalent to atomic_store_explicit(p, r, std::memory_order_seq_cst).5) Stores the shared pointer r in the shared pointer pointed-to by p atomically, as if by p->swap(r). As with the non-specialized std::atomic_store_explicit, if mo is std::memory_order_acquire or std::memory_order_acq_rel, the behavior is undefined.6) Equivalent to atomic_exchange_explicit(p, r, std::memory_order_seq_cst).7) Stores the shared pointer r in the shared pointer pointed to by p and returns the value formerly pointed-to by p, atomically, as if by p->swap(r) and returns a copy of r after the swap.8) Equivalent to atomic_compare_exchange_weak_explicit  
    (p, expected, desired, std::memory_order_seq_cst,  
                           std::memory_order_seq_cst).9) Equivalent to atomic_compare_exchange_strong_explicit  
    (p, expected, desired, std::memory_order_seq_cst,  
                           std::memory_order_seq_cst).10,11) Compares the shared pointers pointed-to by p and expected.

- If they are equivalent (store the same pointer value, and either share ownership of the same object or are both empty), assigns desired into \*p using the memory ordering constraints specified by success and returns true.
- If they are not equivalent, assigns \*p into \*expected using the memory ordering constraints specified by failure and returns false.
 `atomic_compare_exchange_weak_explicit` may fail spuriously. If expected is a null pointer, or failure is std::memory_order_release or std::memory_order_acq_rel, the behavior is undefined.

If p is a null pointer, the behaviors of these functions are all undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| p, expected | - | a pointer to a std::shared_ptr |
| r, desired | - | a std::shared_ptr |
| mo, success, failure | - | memory ordering selectors of type std::memory_order |

### Exceptions

These functions do not throw exceptions.

### Return value

1) true if atomic access is implemented using lock-free instructions.2,3) A copy of the pointed-to shared pointer.4,5) (none)6,7) A copy of the formerly pointed-to shared pointer.8-11) true if the shared pointers were equivalent and the exchange was performed, false otherwise.

### Notes

These functions are typically implemented using mutexes, stored in a global hash table where the pointer value is used as the key.

The Concurrency TS offers atomic smart pointer classes `atomic_shared_ptr` and `atomic_weak_ptr` as a replacement for the use of these functions.

|  |  |
| --- | --- |
| These functions were deprecated in favor of the specializations of the std::atomic template: std::atomic<std::shared_ptr> and std::atomic<std::weak_ptr>. | (since C++20) (until C++26) |
| These functions were removed in favor of the specializations of the std::atomic template: std::atomic<std::shared_ptr> and std::atomic<std::weak_ptr>. | (since C++26) |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2172 | C++11 | expected could be a null pointer | the behavior is undefined in this case |
| LWG 2980 | C++11 | empty `shared_ptr`s were never equivalent | equivalent if they store the same pointer value |

### See also

|  |  |
| --- | --- |
| atomic_is_lock_free(C++11) | checks if the atomic type's operations are lock-free   (function template) |
| atomic_storeatomic_store_explicit(C++11)(C++11) | atomically replaces the value of the atomic object with a non-atomic argument   (function template) |
| atomic_loadatomic_load_explicit(C++11)(C++11) | atomically obtains the value stored in an atomic object   (function template) |
| atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | atomically replaces the value of the atomic object with non-atomic argument and returns the old value of the atomic   (function template) |
| atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory/shared_ptr/atomic&oldid=178235>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 December 2024, at 05:29.