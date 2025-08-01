# operator new, operator new[]

From cppreference.com
< cpp‎ | memory‎ | new
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

Utilities library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

Memory management library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **voidify**(exposition only\*) | | | | | | Uninitialized memory algorithms | | | | | | uninitialized_copy | | | | | | uninitialized_fill | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | destroy(C++17) | | | | | | destroy_at(C++17) | | | | | | uninitialized_copy_n(C++11) | | | | | | uninitialized_fill_n | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | destroy_n(C++17) | | | | | | construct_at(C++20) | | | | | | Constrained uninitialized memory algorithms | | | | | | ranges::uninitialized_copy(C++20) | | | | | | ranges::uninitialized_fill(C++20) | | | | | | ranges::uninitialized_move(C++20) | | | | | | ranges::construct_at(C++20) | | | | | | ranges::destroy(C++20) | | | | | | ranges::destroy_n(C++20) | | | | | | ranges::destroy_at(C++20) | | | | | | ranges::uninitialized_copy_n(C++20) | | | | | | ranges::uninitialized_fill_n(C++20) | | | | | | ranges::uninitialized_move_n(C++20) | | | | | | ranges::uninitialized_default_construct(C++20) | | | | | | ranges::uninitialized_value_construct(C++20) | | | | | | ranges::uninitialized_default_construct_n(C++20) | | | | | | ranges::uninitialized_value_construct_n(C++20) | | | | | | C Library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | malloc | | | | | | calloc | | | | | | realloc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_alloc(C++17) | | | | | | free | | | | | |  | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Allocators | | | | | | allocator | | | | | | allocator_traits(C++11) | | | | | | allocation_result(C++23) | | | | | | allocator_arg(C++11) | | | | | | uses_allocator(C++11) | | | | | | uses_allocator_construction_args(C++20) | | | | | | make_obj_using_allocator(C++20) | | | | | | uninitialized_construct_using_allocator(C++20) | | | | | | scoped_allocator_adaptor(C++11) | | | | | | pmr::polymorphic_allocator(C++17) | | | | | | Memory resources | | | | | | pmr::memory_resource(C++17) | | | | | | pmr::get_default_resource(C++17) | | | | | | pmr::set_default_resource(C++17) | | | | | | pmr::new_delete_resource(C++17) | | | | | | pmr::null_memory_resource(C++17) | | | | | | pmr::synchronized_pool_resource(C++17) | | | | | | pmr::unsynchronized_pool_resource(C++17) | | | | | | pmr::monotonic_buffer_resource(C++17) | | | | | | pmr::pool_options(C++17) | | | | | | Garbage collection support | | | | | | declare_reachable(C++11)(until C++23) | | | | | | undeclare_reachable(C++11)(until C++23) | | | | | | declare_no_pointers(C++11)(until C++23) | | | | | | undeclare_no_pointers(C++11)(until C++23) | | | | | | pointer_safety(C++11)(until C++23) | | | | | | get_pointer_safety(C++11)(until C++23) | | | | | | Uninitialized storage | | | | | | raw_storage_iterator(until C++20\*) | | | | | | get_temporary_buffer(until C++20\*) | | | | | | return_temporary_buffer(until C++20\*) | | | | | | Explicit lifetime management | | | | | | start_lifetime_asstart_lifetime_as_array(C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Smart pointers | | | | | | unique_ptr(C++11) | | | | | | shared_ptr(C++11) | | | | | | weak_ptr(C++11) | | | | | | auto_ptr(until C++17\*) | | | | | | owner_less(C++11) | | | | | | owner_less<void>(C++17) | | | | | | owner_hash(C++26) | | | | | | owner_equal(C++26) | | | | | | enable_shared_from_this(C++11) | | | | | | bad_weak_ptr(C++11) | | | | | | default_delete(C++11) | | | | | | out_ptr_t(C++23) | | | | | | inout_ptr_t(C++23) | | | | | | Low level memory management | | | | | | ****operator new**** | | | | | | ****operator new[]**** | | | | | | operator delete | | | | | | [operator delete[]](operator_delete.html "cpp/memory/new/operator delete") | | | | | | get_new_handler(C++11) | | | | | | set_new_handler | | | | | | launder(C++17) | | | | | | bad_alloc | | | | | | bad_array_new_length(C++11) | | | | | | nothrow_t | | | | | | align_val_t(C++17) | | | | | | destroying_delete_t(C++20) | | | | | | new_handler | | | | | | nothrow | | | | | | Miscellaneous | | | | | | pointer_traits(C++11) | | | | | | to_address(C++20) | | | | | | addressof(C++11) | | | | | | align(C++11) | | | | | | assume_aligned(C++20) | | | | | | is_sufficiently_aligned(C++26) | | | | | |

Low level memory management

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| ****operator newoperator new[]**** | | | | |
| [operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete") | | | | |
| get_new_handler(C++11) | | | | |
| set_new_handler | | | | |
| Classes | | | | |
| bad_alloc | | | | |
| bad_array_new_length(C++11) | | | | |
| align_val_t(C++17) | | | | |
| Types | | | | |
| new_handler | | | | |
| Objects | | | | |
| nothrow | | | | |
| destroying_delete(C++20) | | | | |
| Object access | | | | |
| launder(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<new>` |  |  |
| Replaceable allocation functions |  |  |
| void\* operator new  ( std::size_t count ); | (1) |  |
| void\* operator new[]( std::size_t count ); | (2) |  |
| void\* operator new  ( std::size_t count, std::align_val_t al ); | (3) | (since C++17) |
| void\* operator new[]( std::size_t count, std::align_val_t al ); | (4) | (since C++17) |
| Replaceable non-throwing allocation functions |  |  |
| void\* operator new  ( std::size_t count, const std::nothrow_t& tag ); | (5) | (noexcept since C++11) |
| void\* operator new[]( std::size_t count, const std::nothrow_t& tag ); | (6) | (noexcept since C++11) |
| void\* operator new  ( std::size_t count, std::align_val_t al,                        const std::nothrow_t& tag ) noexcept; | (7) | (since C++17) |
| void\* operator new[]( std::size_t count, std::align_val_t al,                        const std::nothrow_t& tag ) noexcept; | (8) | (since C++17) |
| Non-allocating placement allocation functions |  |  |
| void\* operator new  ( std::size_t count, void\* ptr ); | (9) | (noexcept since C++11)  (constexpr since C++26) |
| void\* operator new[]( std::size_t count, void\* ptr ); | (10) | (noexcept since C++11)  (constexpr since C++26) |
| User-defined placement allocation functions |  |  |
| void\* operator new  ( std::size_t count, /\* args... \*/ ); | (11) |  |
| void\* operator new[]( std::size_t count, /\* args... \*/ ); | (12) |  |
| void\* operator new  ( std::size_t count,                        std::align_val_t al, /\* args... \*/ ); | (13) | (since C++17) |
| void\* operator new[]( std::size_t count,                        std::align_val_t al, /\* args... \*/ ); | (14) | (since C++17) |
| Class-specific allocation functions |  |  |
| void\* T::operator new  ( std::size_t count ); | (15) |  |
| void\* T::operator new[]( std::size_t count ); | (16) |  |
| void\* T::operator new  ( std::size_t count, std::align_val_t al ); | (17) | (since C++17) |
| void\* T::operator new[]( std::size_t count, std::align_val_t al ); | (18) | (since C++17) |
| Class-specific placement allocation functions |  |  |
| void\* T::operator new  ( std::size_t count, /\* args... \*/ ); | (19) |  |
| void\* T::operator new[]( std::size_t count, /\* args... \*/ ); | (20) |  |
| void\* T::operator new  ( std::size_t count,                           std::align_val_t al, /\* args... \*/ ); | (21) | (since C++17) |
| void\* T::operator new[]( std::size_t count,                           std::align_val_t al, /\* args... \*/ ); | (22) | (since C++17) |
|  |  |  |

Attempts to allocate requested number of bytes, and the allocation request can fail (even if the requested number of bytes is zero). These allocation functions are called by new expressions to allocate memory in which new object would then be initialized. They may also be called using regular function call syntax.

1) Called by new to allocate storage required for a single object. The standard library implementation allocates count bytes from free store. In case of failure, the standard library implementation calls the function pointer returned by std::get_new_handler and repeats allocation attempts until new handler does not return or becomes a null pointer, at which time it throws std::bad_alloc. This function is required to return a pointer suitably aligned to point to an object of the requested size.2) Called by new[] to allocate all storage required for an array (including possible new expression overhead). The standard library implementation calls version (1).3) Called by new to allocate storage required for a single object whose alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__.4) Called by new[] to allocate all storage required for an array of objects whose alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__.5) Called by the non-throwing new. The standard library implementation calls the version (1) and returns a null pointer on failure instead of propagating the exception.6) Called by the non-throwing new[]. The standard library implementation calls the version (2) and returns a null pointer on failure instead of propagating the exception.7) Called by the non-throwing new when the object's alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. The standard library implementation calls the version (3) and returns a null pointer on failure instead of propagating the exception.8) Called by the non-throwing new[] when the alignment requirement of array elements exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. The standard library implementation calls the version (4) and returns a null pointer on failure instead of propagating the exception.9) Called by the standard placement new. The standard library implementation performs no action and returns ptr unmodified. If this function is called through placement new and ptr is a null pointer, the behavior is undefined.10) Called by the standard placement new[]. The standard library implementation performs no action and returns ptr unmodified. If this function is called through placement new[] and ptr is a null pointer, the behavior is undefined.11) If defined, called by the custom placement new with the matching signature. If a class-specific version (19) is defined, it is called in preference to (11). If neither (11) nor (19) is provided by the user, the placement new is ill-formed.12) If defined, called by the custom placement new[] with the matching signature. If a class-specific version (20) is defined, it is called in preference to (12). If neither (12) nor (20) is provided by the user, the placement new[] is ill-formed.13) If defined, called by the custom placement new with the matching signature if the object's alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. If a class-specific version is defined ((15) or (17)), it is called instead. If neither class-specific nor global alignment-aware (this one) placement form is provided, alignment-unaware placement form (11) is looked up instead.14) If defined, called by the custom placement new[] with the matching signature if the element's alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. If a class-specific version ((16) or (18)) is defined, it is called instead. If neither class-specific nor global alignment-aware (this one) placement form is provided, alignment-unaware placement form (12) is looked up instead.15) If defined, called by new if allocating an object of type `T`.16) If defined, called by new[] if allocating an array of objects of type `T`.17) If defined, called by new if allocating an object of type `T` if its alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. If this overload is not provided, but alignment-unaware member form (15) is, alignment-unaware member overload is called instead.18) If defined, called by new[] if allocating an array of objects of type `T` if its alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. If this overload is not provided, but alignment-unaware member form (16) is, alignment-unaware member overload is called instead.19) If defined, called by the custom placement new with the matching signature if allocating an object of type `T`.20) If defined, called by the custom placement new[] with the matching signature if allocating an array of objects of type `T`.21) If defined, called by the custom placement new with the matching signature if allocating an object of type `T` if its alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. If this overload is not provided, but alignment-unaware member form (19) is, alignment-unaware member overload is called instead.22) If defined, called by the custom placement new[] with the matching signature if allocating an array of objects of type `T` if its alignment requirement exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__. If this overload is not provided, but alignment-unaware member form (20) is, alignment-unaware member overload is called instead.

### Parameters

|  |  |  |
| --- | --- | --- |
| count | - | number of bytes to allocate |
| ptr | - | pointer to a memory area to initialize the object at |
| tag | - | disambiguation tag used to select non-throwing overloads |
| al | - | alignment to use, invalid value leads to undefined behavior |

### Return value

1-4) If the allocation succeeds, a non-null pointer p0 which points to suitably aligned memory of size at least size and is different from any previously returned value p1, unless that value p1 was subsequently passed to a replaceable deallocation function; if the allocation fails, does not return (an exception is thrown, see below).5-8) Same as (1-4), but returns a null pointer if the allocation fails.9,10) ptr11-22) Same as (1-4) if the function does not return on allocation failure, otherwise same as (5-8).

### Exceptions

1-4) Throws an exception of a type that would match a handler of type std::bad_alloc on failure to allocate memory.11-22) Same as (1-4) if the function does not return on allocation failure, otherwise same as (5-8).

### Global replacements

The versions (1-4) are implicitly declared in each translation unit even if the <new> header is not included. Versions (1-8) are **replaceable**: a user-provided non-member function with the same signature defined anywhere in the program, in any source file, replaces the default version. Its declaration does not need to be visible.

The program is ill-formed, no diagnostic required if more than one replacement is provided in the program for any of the replaceable allocation function, or if a replacement is declared with the inline specifier. The program is ill-formed if a replacement is defined in namespace other than global namespace, or if it is defined as a static non-member function at global scope.

The standard library implementations of the nothrow versions (5-8) directly calls the corresponding throwing versions (1-4). The standard library implementation of the throwing array versions (2,4) directly calls the corresponding single-object version (1,3). Thus, replacing the throwing single object allocation functions is sufficient to handle all allocations.

|  |  |
| --- | --- |
| On freestanding implementations, it is implementation-defined whether the default versions of (1-8) satisfy the behaviors required above. Freestanding implementations are recommended that if any of these default versions meet the requirements of a hosted implementation, they all should. | (since C++26) |

Global `operator`s new/delete replacement:

Run this code

```
#include <cstdio>
#include <cstdlib>
#include <new>
 
// no inline, required by [replacement.functions]/3
void* operator new(std::size_t sz)
{
    std::printf("1) new(size_t), size = %zu\n", sz);
    if (sz == 0)
        ++sz; // avoid std::malloc(0) which may return nullptr on success
 
    if (void *ptr = std::malloc(sz))
        return ptr;
 
    throw std::bad_alloc{}; // required by [new.delete.single]/3
}
 
// no inline, required by [replacement.functions]/3
void* operator new[](std::size_t sz)
{
    std::printf("2) new[](size_t), size = %zu\n", sz);
    if (sz == 0)
        ++sz; // avoid std::malloc(0) which may return nullptr on success
 
    if (void *ptr = std::malloc(sz))
        return ptr;
 
    throw std::bad_alloc{}; // required by [new.delete.single]/3
}
 
void operator delete(void* ptr) noexcept
{
    std::puts("3) delete(void*)");
    std::free(ptr);
}
 
void operator delete(void* ptr, std::size_t size) noexcept
{
    std::printf("4) delete(void*, size_t), size = %zu\n", size);
    std::free(ptr);
}
 
void operator delete[](void* ptr) noexcept
{
    std::puts("5) delete[](void* ptr)");
    std::free(ptr);
}
 
void operator delete[](void* ptr, std::size_t size) noexcept
{
    std::printf("6) delete[](void*, size_t), size = %zu\n", size);
    std::free(ptr);
}
 
int main()
{
    int* p1 = new int;
    delete p1;
 
    int* p2 = new int[10]; // guaranteed to call the replacement in C++11
    delete[] p2;
}

```

Possible output:

```
// Compiled with GCC-5 in C++17 mode to obtain the following:
1) op new(size_t), size = 4
4) op delete(void*, size_t), size = 4
2) op new[](size_t), size = 40
5) op delete[](void* ptr)

```

Overloads of `operator new` and `operator new[]` with additional user-defined parameters ("placement forms", versions (11-14)) may be declared at global scope as usual, and are called by the matching placement forms of new expressions.

The standard library's non-allocating placement forms of `operator new` (9,10) cannot be replaced and can only be customized if the placement new expression did not use the ::new syntax, by providing a class-specific placement new (19,20) with matching signature: void\* T::operator new(std::size_t, void\*) or void\* T::operator new[](std::size_t, void\*).

|  |  |
| --- | --- |
| The placement form void\* operator new(std::size_t, std::size_t) is not allowed because the matching signature of the deallocation function, void operator delete(void\*, std::size_t), is a usual (not placement) deallocation function. | (since C++14) |

### Class-specific overloads

Both single-object and array allocation functions may be defined as public static member functions of a class (versions (15-18)). If defined, these allocation functions are called by new expressions to allocate memory for single objects and arrays of this class, unless the new expression used the form ::new which bypasses class-scope lookup. The keyword static is optional for these functions: whether used or not, the allocation function is a static member function.

The new expression looks for appropriate allocation function's name firstly in the class scope, and after that in the global scope. Note, that as per name lookup rules, any allocation functions declared in class scope hides all global allocation functions for the new expressions that attempt to allocate objects of this class.

|  |  |
| --- | --- |
| When allocating objects and arrays of objects whose alignment exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution is performed twice: first, for alignment-aware function signatures, then for alignment-unaware function signatures. This means that if a class with extended alignment has an alignment-unaware class-specific allocation function, it is the function that will be called, not the global alignment-aware allocation function. This is intentional: the class member is expected to know best how to handle that class. | (since C++17) |

|  |  |
| --- | --- |
| When allocating objects and arrays of objects whose alignment does not exceed __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution is performed twice: first, for alignment-unaware function signatures, then for alignment-aware function signatures. | (since C++20) |

Run this code

```
#include <cstddef>
#include <iostream>
 
// class-specific allocation functions
struct X
{
    static void* operator new(std::size_t count)
    {
        std::cout << "custom new for size " << count << '\n';
        return ::operator new(count);
    }
 
    static void* operator new[](std::size_t count)
    {
        std::cout << "custom new[] for size " << count << '\n';
        return ::operator new[](count);
    }
};
 
int main()
{
    X* p1 = new X;
    delete p1;
    X* p2 = new X[10];
    delete[] p2;
}

```

Possible output:

```
custom new for size 1
custom new[] for size 10

```

Overloads of `operator new` and `operator new[]` with additional user-defined parameters ("placement forms"), may also be defined as class members (19-22)). When the placement new expression with the matching signature looks for the corresponding allocation function to call, it begins at class scope before examining the global scope, and if the class-specific placement new is provided, it is called.

|  |  |
| --- | --- |
| When allocating objects and arrays of objects whose alignment exceeds __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution for placement forms is performed twice just as for regular forms: first, for alignment-aware function signatures, then for alignment-unaware function signatures. | (since C++17) |

|  |  |
| --- | --- |
| When allocating objects and arrays of objects whose alignment does not exceed __STDCPP_DEFAULT_NEW_ALIGNMENT__, overload resolution for placement forms is performed twice just as for regular forms: first, for alignment-unaware function signatures, then for alignment-aware function signatures. | (since C++20) |

Run this code

```
#include <cstddef>
#include <iostream>
#include <stdexcept>
 
struct X
{
    X() { throw std::runtime_error(""); }
 
    // custom placement new
    static void* operator new(std::size_t count, bool b)
    {
        std::cout << "custom placement new called, b = " << b << '\n';
        return ::operator new(count);
    }
 
    // custom placement delete
    static void operator delete(void* ptr, bool b)
    {
        std::cout << "custom placement delete called, b = " << b << '\n';
        ::operator delete(ptr);
    }
};
 
int main()
{
    try
    {
        [[maybe_unused]] X* p1 = new (true) X;
    }
    catch (const std::exception&)
    {}
}

```

Output:

```
custom placement new called, b = 1
custom placement delete called, b = 1

```

If class-level `operator new` is a template function, it must have the return type of void\*, the first argument std::size_t, and it must have two or more parameters. In other words, only placement forms can be templates.

### Notes

Even though the non-allocating placement new (9,10) cannot be replaced, a function with the same signature may be defined at class scope as described above. In addition, global overloads that look like placement new but take a non-void pointer type as the second argument are allowed, so the code that wants to ensure that the true placement new is called (e.g. std::allocator::construct), must use ::new and also cast the pointer to void\*.

If the behavior of a deallocation function does not satisfy the default constraints, the behavior is undefined.

|  |  |
| --- | --- |
| The following functions are required to be thread-safe:   - The library versions of ****operator new**** and operator delete - User replacement versions of global ****operator new**** and operator delete - std::calloc, std::malloc, std::realloc, std::aligned_alloc(since C++17), std::free   Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call happens-before the next allocation (if any) in this order. | (since C++11) |

It is unspecified whether library versions of `operator new` make any calls to std::malloc or std::aligned_alloc(since C++17).

For loading a large file, file mapping via OS-specific functions, e.g., `mmap` on POSIX or `CreateFileMapping`(`A`/`W`) along with `MapViewOfFile` on Windows, is preferable to allocating a buffer for file reading.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_freestanding_operator_new` | `202306L` | (C++26) | freestanding support for replaceable operator new[[1]](operator_new.html#cite_note-1) |
| `0` | (C++26) | no freestanding support |
| `__cpp_lib_constexpr_new` | `202406L` | (C++26) | constexpr placement new and new[] |

1. ↑ Formally, this macro expands to 202306L if all the default versions of the replaceable global allocation functions meet the requirements of a hosted implementation.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 521 | C++98 | any class derived from std::bad_alloc could be thrown, even if the std::bad_alloc base is ambiguous or inaccessible | the exception thrown should match a handler of type std::bad_alloc |
| LWG 9 | C++98 | multiple calls for allocating zero bytes could yield the same pointer | only allowed if all such previously yielded pointers have been passed to deallocation functions |
| LWG 206 | C++98 | replacing the replaceable allocation functions did not affect the default behaviors of the corresponding replaceable non-throwing allocation functions | the default behaviors change accordingly |
| LWG 404 | C++98 | replacements of the replaceable allocation functions could be declared inline | prohibited, no diagnostic required |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 17.7 Dynamic memory management [support.dynamic]

- C++20 standard (ISO/IEC 14882:2020):

:   - 17.6 Dynamic memory management [support.dynamic]

- C++17 standard (ISO/IEC 14882:2017):

:   - 21.6 Dynamic memory management [support.dynamic]

- C++14 standard (ISO/IEC 14882:2014):

:   - 18.6 Dynamic memory management [support.dynamic]

- C++11 standard (ISO/IEC 14882:2011):

:   - 18.6 Dynamic memory management [support.dynamic]

- C++03 standard (ISO/IEC 14882:2003):

:   - 18.4 Dynamic memory management [lib.support.dynamic]

- C++98 standard (ISO/IEC 14882:1998):

:   - 18.4 Dynamic memory management [lib.support.dynamic]

### See also

|  |  |
| --- | --- |
| operator new[static] (C++23) | allocates memory using `Allocator`   (public static member function of `std::generator<Ref,V,Allocator>::promise_type`) |
| [operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete") | deallocation functions   (function) |
| get_new_handler(C++11) | obtains the current new handler   (function) |
| set_new_handler | registers a new handler   (function) |
| get_temporary_buffer(deprecated in C++17)(removed in C++20) | obtains uninitialized storage   (function template) |
| malloc | allocates memory   (function) |
| aligned_alloc(C++17) | allocates aligned memory   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory/new/operator_new&oldid=180161>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 February 2025, at 22:20.