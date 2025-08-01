# std::atomic<std::weak_ptr>

From cppreference.com
< cpp‎ | memory‎ | weak ptr
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

std::weak_ptr

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| weak_ptr::weak_ptr | | | | |
| weak_ptr::~weak_ptr | | | | |
| weak_ptr::operator= | | | | |
| Modifiers | | | | |
| weak_ptr::reset | | | | |
| weak_ptr::swap | | | | |
| Observers | | | | |
| weak_ptr::use_count | | | | |
| weak_ptr::expired | | | | |
| weak_ptr::lock | | | | |
| weak_ptr::owner_before | | | | |
| weak_ptr::owner_hash(C++26) | | | | |
| weak_ptr::owner_equal(C++26) | | | | |
| Non-member functions | | | | |
| swap(std::weak_ptr) | | | | |
| Helper classes | | | | |
| ****atomic<std::weak_ptr>****(C++20) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<memory>` |  |  |
| template< class T > struct std::atomic<std::weak_ptr<T>>; |  | (since C++20) |
|  |  |  |

The partial template specialization of std::atomic for std::weak_ptr<T> allows users to manipulate weak_ptr objects atomically.

If multiple threads of execution access the same std::weak_ptr object without synchronization and any of those accesses uses a non-const member function of weak_ptr then a data race will occur unless all such access is performed through an instance of std::atomic<std::weak_ptr>.

Associated `use_count` increments are guaranteed to be part of the atomic operation. Associated `use_count` decrements are sequenced after the atomic operation, but are not required to be part of it, except for the `use_count` change when overriding `expected` in a failed CAS. Any associated deletion and deallocation are sequenced after the atomic update step and are not part of the atomic operation.

Note that the control block used by std::weak_ptr and std::shared_ptr is thread-safe: different non-atomic std::weak_ptr objects can be accessed using mutable operations, such as operator= or `reset`, simultaneously by multiple threads, even when these instances are copies or otherwise share the same control block internally.

The type `T` may be an incomplete type.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `value_type` | std::weak_ptr<T> |

### Member functions

All non-specialized std::atomic functions are also provided by this specialization, and no additional member functions.

## atomic<weak_ptr<T>>::atomic

|  |  |  |
| --- | --- | --- |
| constexpr atomic() noexcept = default; | (1) |  |
| atomic(std::weak_ptr<T> desired) noexcept; | (2) |  |
| atomic(const atomic&) = delete; | (3) |  |
|  |  |  |

1) Initializes the underlying `weak_ptr<T>` to default-constructed value.2) Initializes the underlying `weak_ptr<T>` to a copy of `desired`. As with any std::atomic type, initialization is not an atomic operation.3) Atomic types are not copy/move constructible.

## atomic<weak_ptr<T>>::operator=

|  |  |  |
| --- | --- | --- |
| void operator=(const atomic&) = delete; | (1) |  |
| void operator=(std::weak_ptr<T> desired) noexcept; | (2) |  |
|  |  |  |

1) Atomic types are not copy/move assignable.2) Value assignment, equivalent to store(desired).

## atomic<weak_ptr<T>>::is_lock_free

|  |  |  |
| --- | --- | --- |
| bool is_lock_free() const noexcept; |  |  |
|  |  |  |

Returns true if the atomic operations on all objects of this type are lock-free, false otherwise.

## atomic<weak_ptr<T>>::store

|  |  |  |
| --- | --- | --- |
| void store(std::weak_ptr<T> desired,             std::memory_order order = std::memory_order_seq_cst) noexcept; |  |  |
|  |  |  |

Atomically replaces the value of \*this with the value of `desired` as if by p.swap(desired) where p is the underlying std::weak_ptr<T>. Memory is ordered according to `order`. The behavior is undefined if `order` is std::memory_order_consume, std::memory_order_acquire, or std::memory_order_acq_rel.

## atomic<weak_ptr<T>>::load

|  |  |  |
| --- | --- | --- |
| std::weak_ptr<T> load(std::memory_order order = std::memory_order_seq_cst) const noexcept; |  |  |
|  |  |  |

Atomically returns a copy of the underlying std::weak_ptr<T>. Memory is ordered according to `order`. The behavior is undefined if `order` is std::memory_order_release or std::memory_order_acq_rel.

## atomic<weak_ptr<T>>::operator std::weak_ptr<T>

|  |  |  |
| --- | --- | --- |
| operator std::weak_ptr<T>() const noexcept; |  |  |
|  |  |  |

Equivalent to return load();.

## atomic<weak_ptr<T>>::exchange

|  |  |  |
| --- | --- | --- |
| std::weak_ptr<T> exchange(std::weak_ptr<T> desired,                            std::memory_order order = std::memory_order_seq_cst) noexcept; |  |  |
|  |  |  |

Atomically replaces the underlying std::weak_ptr<T> with `desired` as if by p.swap(desired) where p is the underlying std::weak_ptr<T>, and returns a copy of the value that p had immediately before the swap. Memory is ordered according to `order`. This is an atomic read-modify-write operation.

## atomic<weak_ptr<T>>::compare_exchange_weak, compare_exchange_strong

|  |  |  |
| --- | --- | --- |
| bool compare_exchange_strong(std::weak_ptr<T>& expected, std::weak_ptr<T> desired,                               std::memory_order success, std::memory_order failure) noexcept; | (1) |  |
| bool compare_exchange_weak(std::weak_ptr<T>& expected, std::weak_ptr<T> desired,                             std::memory_order success, std::memory_order failure) noexcept; | (2) |  |
| bool compare_exchange_strong(std::weak_ptr<T>& expected, std::weak_ptr<T> desired,                               std::memory_order order = std::memory_order_seq_cst) noexcept; | (3) |  |
| bool compare_exchange_weak(std::weak_ptr<T>& expected, std::weak_ptr<T> desired,                             std::memory_order order = std::memory_order_seq_cst) noexcept; | (4) |  |
|  |  |  |

1) If the underlying std::weak_ptr<T> stores the same pointer value as `expected` and shares ownership with it, or if both underlying and `expected` are empty, assigns from `desired` to the underlying std::weak_ptr<T>, returns true, and orders memory according to `success`, otherwise assigns from the underlying std::weak_ptr<T> to `expected`, returns false, and orders memory according to `failure`. The behavior is undefined if `failure` is std::memory_order_release or std::memory_order_acq_rel. On success, the operation is an atomic read-modify-write operation on \*this and `expected` is not accessed after the atomic update. On failure, the operation is an atomic load operation on \*this and `expected` is updated with the existing value read from the atomic object. This update to `expected`'s use_count is part of this atomic operation, although the write itself (and any subsequent deallocation/destruction) is not required to be.2) Same as (1), but may also fail spuriously.3) Equivalent to: return compare_exchange_strong(expected, desired, order, fail_order);, where `fail_order` is the same as `order` except that std::memory_order_acq_rel is replaced by std::memory_order_acquire and std::memory_order_release is replaced by std::memory_order_relaxed.4) Equivalent to: return compare_exchange_weak(expected, desired, order, fail_order);, where `fail_order` is the same as `order` except that std::memory_order_acq_rel is replaced by std::memory_order_acquire and std::memory_order_release is replaced by std::memory_order_relaxed.

## atomic<weak_ptr<T>>::wait

|  |  |  |
| --- | --- | --- |
| void wait(std::weak_ptr<T> old            std::memory_order order = std::memory_order_seq_cst) const noexcept; |  |  |
|  |  |  |

Performs an atomic waiting operation.

Compares load(order) with `old` and if they are equivalent then blocks until \*this is notified by `notify_one()` or `notify_all()`. This is repeated until load(order) changes. This function is guaranteed to return only if value has changed, even if underlying implementation unblocks spuriously.

Memory is ordered according to `order`. The behavior is undefined if `order` is std::memory_order_release or std::memory_order_acq_rel.

Notes: two std::weak_ptrs are equivalent if they store the same pointer and either share ownership or are both empty.

## atomic<weak_ptr<T>>::notify_one

|  |  |  |
| --- | --- | --- |
| void notify_one() noexcept; |  |  |
|  |  |  |

Performs an atomic notifying operation.

If there is a thread blocked in atomic waiting operations (i.e. `wait()`) on \*this, then unblocks at least one such thread; otherwise does nothing.

## atomic<weak_ptr<T>>::notify_all

|  |  |  |
| --- | --- | --- |
| void notify_all() noexcept; |  |  |
|  |  |  |

Performs an atomic notifying operation.

Unblocks all threads blocked in atomic waiting operations (i.e. `wait()`) on \*this, if there are any; otherwise does nothing.

### Member constants

The only standard std::atomic member constant `is_always_lock_free` is also provided by this specialization.

## atomic<weak_ptr<T>>::is_always_lock_free

|  |  |  |
| --- | --- | --- |
| static constexpr bool is_always_lock_free = /\*implementation-defined\*/; |  |  |
|  |  |  |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| atomic(C++11) | atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory/weak_ptr/atomic2&oldid=170495>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 March 2024, at 05:20.