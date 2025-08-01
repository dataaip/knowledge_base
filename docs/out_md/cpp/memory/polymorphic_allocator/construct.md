# std::pmr::polymorphic_allocator<T>::construct

From cppreference.com
< cpp‎ | memory‎ | polymorphic allocator
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

std::pmr::polymorphic_allocator

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| polymorphic_allocator::polymorphic_allocator | | | | |
| polymorphic_allocator::allocate | | | | |
| polymorphic_allocator::deallocate | | | | |
| ****polymorphic_allocator::construct**** | | | | |
| polymorphic_allocator::destroy(C++20/26\*) | | | | |
| polymorphic_allocator::allocate_bytes(C++20) | | | | |
| polymorphic_allocator::deallocate_bytes(C++20) | | | | |
| polymorphic_allocator::allocate_object(C++20) | | | | |
| polymorphic_allocator::deallocate_object(C++20) | | | | |
| polymorphic_allocator::new_object(C++20) | | | | |
| polymorphic_allocator::delete_object(C++20) | | | | |
| polymorphic_allocator::select_on_container_copy_construction | | | | |
| polymorphic_allocator::resource | | | | |
| Non-member functions | | | | |
| operator==operator!=(until C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class U, class... Args >  void construct( U\* p, Args&&... args ); | (1) | (since C++17) |
| template< class T1, class T2, class... Args1, class... Args2 >  void construct( std::pair<T1, T2>\* p,                  std::piecewise_construct_t,                  std::tuple<Args1...> x, std::tuple<Args2...> y ); | (2) | (since C++17)  (until C++20) |
| template< class T1, class T2 >  void construct( std::pair<T1, T2>\* p ); | (3) | (since C++17)  (until C++20) |
| template< class T1, class T2, class U, class V >  void construct( std::pair<T1, T2>\* p, U&& x, V&& y ); | (4) | (since C++17)  (until C++20) |
| template< class T1, class T2, class U, class V >  void construct( std::pair<T1, T2>\* p, const std::pair<U, V>& xy ); | (5) | (since C++17)  (until C++20) |
| template< class T1, class T2, class U, class V >  void construct( std::pair<T1, T2>\* p, std::pair<U, V>&& xy ); | (6) | (since C++17)  (until C++20) |
| template< class T1, class T2, class NonPair >  void construct( std::pair<T1, T2>\* p, NonPair&& non_pair ); | (7) | (since C++17)  (until C++20) |
|  |  |  |

Constructs an object in allocated, but not initialized storage pointed to by p the provided constructor arguments. If the object is of type that itself uses allocators, or if it is std::pair, passes \*this down to the constructed object.

1) Creates an object of the given type `U` by means of uses-allocator construction at the uninitialized memory location indicated by p, using \*this as the allocator. This overload participates in overload resolution only if `U` is not a specialization of std::pair.(until C++20)

|  |  |
| --- | --- |
| 2) First, if either `T1` or `T2` is allocator-aware, modifies the tuples x and y to include `this->resource()`, resulting in the two new tuples `xprime` and `yprime`, according to the following three rules:2a) if `T1` is not allocator-aware (std::uses_allocator<T1, polymorphic_allocator>::value==false) and std::is_constructible<T1, Args1...>::value==true, then `xprime` is x, unmodified.2b) if `T1` is allocator-aware (std::uses_allocator<T1, polymorphic_allocator>::value==true), and its constructor takes an allocator tag (std::is_constructible<T1, std::allocator_arg_t, polymorphic_allocator, Args1...>::value==true, then `xprime` is std::tuple_cat(std::make_tuple(std::allocator_arg, \*this), std::move(x)).2c) if `T1` is allocator-aware (std::uses_allocator<T1, polymorphic_allocator>::value==true), and its constructor takes the allocator as the last argument (std::is_constructible<T1, Args1..., polymorphic_allocator>::value==true), then `xprime` is std::tuple_cat(std::move(x), std::make_tuple(\*this)).2d) Otherwise, the program is ill-formed. Same rules apply to `T2` and the replacement of y with `yprime`. Once `xprime` and `yprime` are constructed, constructs the pair p in allocated storage as if by ::new((void \*) p) pair<T1, T2>(std::piecewise_construct, std::move(xprime), std::move(yprime));.3) Equivalent to construct(p, std::piecewise_construct, std::tuple<>(), std::tuple<>()), that is, passes the memory resource on to the pair's member types if they accept them.4) Equivalent to  ```text construct(p, std::piecewise_construct, std::forward_as_tuple(std::forward<U>(x)),                                        std::forward_as_tuple(std::forward<V>(y))) ```  5) Equivalent to  ```text construct(p, std::piecewise_construct, std::forward_as_tuple(xy.first),                                        std::forward_as_tuple(xy.second)) ```  6) Equivalent to  ```text construct(p, std::piecewise_construct, std::forward_as_tuple(std::forward<U>(xy.first)),                                        std::forward_as_tuple(std::forward<V>(xy.second))) ```  7) This overload participates in overload resolution only if given the exposition-only function template  ```text template< class A, class B > void /*deduce-as-pair*/( const std::pair<A, B>& ); ```   , /\*deduce-as-pair\*/(non_pair) is ill-formed when considered as an unevaluated operand. Equivalent to   ```text construct<T1, T2, T1, T2>(p, std::forward<NonPair>(non_pair)); ``` | (until C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | pointer to allocated, but not initialized storage |
| args... | - | the constructor arguments to pass to the constructor of `T` |
| x | - | the constructor arguments to pass to the constructor of `T1` |
| y | - | the constructor arguments to pass to the constructor of `T2` |
| xy | - | the pair whose two members are the constructor arguments for `T1` and `T2` |
| non_pair | - | non-`pair` argument to convert to `pair` for further construction |

### Return value

(none)

### Notes

This function is called (through std::allocator_traits) by any allocator-aware object, such as std::pmr::vector (or another std::vector that was given a `std::pmr::polymorphic_allocator` as the allocator to use).

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2969 | C++17 | uses-allocator construction passed `resource()` | passes \*this |
| LWG 2975 | C++17 | first overload is mistakenly used for pair construction in some cases | constrained to not accept pairs |
| LWG 3525 | C++17 | no overload could handle non-`pair` types convertible to `pair` | reconstructing overload added |

### See also

|  |  |
| --- | --- |
| construct[static] | constructs an object in the allocated storage   (function template) |
| construct(until C++20) | constructs an object in allocated storage   (public member function of `std::allocator<T>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory/polymorphic_allocator/construct&oldid=160244>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 October 2023, at 23:18.