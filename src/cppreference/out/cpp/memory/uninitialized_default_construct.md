# std::uninitialized_default_construct

From cppreference.com
< cpp‎ | memory
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **voidify**(exposition only\*) | | | | | | Uninitialized memory algorithms | | | | | | uninitialized_copy | | | | | | uninitialized_fill | | | | | | uninitialized_move(C++17) | | | | | | ****uninitialized_default_construct****(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | destroy(C++17) | | | | | | destroy_at(C++17) | | | | | | uninitialized_copy_n(C++11) | | | | | | uninitialized_fill_n | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | destroy_n(C++17) | | | | | | construct_at(C++20) | | | | | | Constrained uninitialized memory algorithms | | | | | | ranges::uninitialized_copy(C++20) | | | | | | ranges::uninitialized_fill(C++20) | | | | | | ranges::uninitialized_move(C++20) | | | | | | ranges::construct_at(C++20) | | | | | | ranges::destroy(C++20) | | | | | | ranges::destroy_n(C++20) | | | | | | ranges::destroy_at(C++20) | | | | | | ranges::uninitialized_copy_n(C++20) | | | | | | ranges::uninitialized_fill_n(C++20) | | | | | | ranges::uninitialized_move_n(C++20) | | | | | | ranges::uninitialized_default_construct(C++20) | | | | | | ranges::uninitialized_value_construct(C++20) | | | | | | ranges::uninitialized_default_construct_n(C++20) | | | | | | ranges::uninitialized_value_construct_n(C++20) | | | | | | C Library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | malloc | | | | | | calloc | | | | | | realloc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_alloc(C++17) | | | | | | free | | | | | |  | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Allocators | | | | | | allocator | | | | | | allocator_traits(C++11) | | | | | | allocation_result(C++23) | | | | | | allocator_arg(C++11) | | | | | | uses_allocator(C++11) | | | | | | uses_allocator_construction_args(C++20) | | | | | | make_obj_using_allocator(C++20) | | | | | | uninitialized_construct_using_allocator(C++20) | | | | | | scoped_allocator_adaptor(C++11) | | | | | | pmr::polymorphic_allocator(C++17) | | | | | | Memory resources | | | | | | pmr::memory_resource(C++17) | | | | | | pmr::get_default_resource(C++17) | | | | | | pmr::set_default_resource(C++17) | | | | | | pmr::new_delete_resource(C++17) | | | | | | pmr::null_memory_resource(C++17) | | | | | | pmr::synchronized_pool_resource(C++17) | | | | | | pmr::unsynchronized_pool_resource(C++17) | | | | | | pmr::monotonic_buffer_resource(C++17) | | | | | | pmr::pool_options(C++17) | | | | | | Garbage collection support | | | | | | declare_reachable(C++11)(until C++23) | | | | | | undeclare_reachable(C++11)(until C++23) | | | | | | declare_no_pointers(C++11)(until C++23) | | | | | | undeclare_no_pointers(C++11)(until C++23) | | | | | | pointer_safety(C++11)(until C++23) | | | | | | get_pointer_safety(C++11)(until C++23) | | | | | | Uninitialized storage | | | | | | raw_storage_iterator(until C++20\*) | | | | | | get_temporary_buffer(until C++20\*) | | | | | | return_temporary_buffer(until C++20\*) | | | | | | Explicit lifetime management | | | | | | start_lifetime_asstart_lifetime_as_array(C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Smart pointers | | | | | | unique_ptr(C++11) | | | | | | shared_ptr(C++11) | | | | | | weak_ptr(C++11) | | | | | | auto_ptr(until C++17\*) | | | | | | owner_less(C++11) | | | | | | owner_less<void>(C++17) | | | | | | owner_hash(C++26) | | | | | | owner_equal(C++26) | | | | | | enable_shared_from_this(C++11) | | | | | | bad_weak_ptr(C++11) | | | | | | default_delete(C++11) | | | | | | out_ptr_t(C++23) | | | | | | inout_ptr_t(C++23) | | | | | | Low level memory management | | | | | | operator new | | | | | | [operator new[]](new/operator_new.html "cpp/memory/new/operator new") | | | | | | operator delete | | | | | | [operator delete[]](new/operator_delete.html "cpp/memory/new/operator delete") | | | | | | get_new_handler(C++11) | | | | | | set_new_handler | | | | | | launder(C++17) | | | | | | bad_alloc | | | | | | bad_array_new_length(C++11) | | | | | | nothrow_t | | | | | | align_val_t(C++17) | | | | | | destroying_delete_t(C++20) | | | | | | new_handler | | | | | | nothrow | | | | | | Miscellaneous | | | | | | pointer_traits(C++11) | | | | | | to_address(C++20) | | | | | | addressof(C++11) | | | | | | align(C++11) | | | | | | assume_aligned(C++20) | | | | | | is_sufficiently_aligned(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<memory>` |  |  |
| template< class NoThrowForwardIt >  void uninitialized_default_construct( NoThrowForwardIt first,                                       NoThrowForwardIt last ); | (1) | (since C++17)  (constexpr since C++26) |
| template< class ExecutionPolicy, class NoThrowForwardIt >  void uninitialized_default_construct( ExecutionPolicy&& policy,                                        NoThrowForwardIt first,                                       NoThrowForwardIt last ); | (2) | (since C++17) |
|  |  |  |

1) Constructs objects of type typename std::iterator_traits<NoThrowForwardIt>::value_type in the uninitialized memory area ``first`,`last`)` by [default-initialization, as if by

for (; first != last; ++first)  
::new (`voidify`(\*first))  
typename std::iterator_traits<NoThrowForwardIt>::value_type;

 If an exception is thrown during the initialization, the objects already constructed are destroyed in an unspecified order.2) Same as (1), but executed according to policy. This overload participates in overload resolution only if all following conditions are satisfied:

|  |  |
| --- | --- |
| std::is_execution_policy_v<std::decay_t<ExecutionPolicy>> is true. | (until C++20) |
| std::is_execution_policy_v<std::remove_cvref_t<ExecutionPolicy>> is true. | (since C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | the range of the elements to initialize |
| policy | - | the execution policy to use |
| Type requirements | | |
| -`NoThrowForwardIt` must meet the requirements of LegacyForwardIterator. | | |
| -No increment, assignment, comparison, or indirection through valid instances of `NoThrowForwardIt` may throw exceptions. | | |

### Complexity

Linear in the distance between first and last.

### Exceptions

The overload with a template parameter named `ExecutionPolicy` reports errors as follows:

- If execution of a function invoked as part of the algorithm throws an exception and `ExecutionPolicy` is one of the standard policies, std::terminate is called. For any other `ExecutionPolicy`, the behavior is implementation-defined.
- If the algorithm fails to allocate memory, std::bad_alloc is thrown.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_raw_memory_algorithms` | `202411L` | (C++26) | constexpr for specialized memory algorithms, (1) |

### Possible implementation

|  |
| --- |
| ```text template<class NoThrowForwardIt> constexpr void uninitialized_default_construct(NoThrowForwardIt first,                                                NoThrowForwardIt last) {     using Value = typename std::iterator_traits<NoThrowForwardIt>::value_type;     NoThrowForwardIt current = first;     try     {         for (; current != last; ++current)         {             ::new (static_cast<void*>(std::addressof(*current))) Value;         }     }     catch (...)     {         std::destroy(first, current);         throw;     } } ``` |

### Example

Run this code

```
#include <cstring>
#include <iostream>
#include <memory>
#include <string>
 
struct S
{
    std::string m{"Default value"};
};
 
int main()
{
    constexpr int n{3};
    alignas(alignof(S)) unsigned char mem[n * sizeof(S)];
 
    try
    {
        auto first{reinterpret_cast<S*>(mem)};
        auto last{first + n};
 
        std::uninitialized_default_construct(first, last);
 
        for (auto it{first}; it != last; ++it)
            std::cout << it->m << '\n';
 
        std::destroy(first, last);
    }
    catch (...)
    {
        std::cout << "Exception!\n";
    }
 
    // For scalar types, uninitialized_default_construct
    // generally does not zero-fill the given uninitialized memory area.
    int v[]{1, 2, 3, 4};
    const int original[]{1, 2, 3, 4};
    std::uninitialized_default_construct(std::begin(v), std::end(v));
 
    // Maybe undefined behavior, pending CWG 1997 to be resolved.
    // for (const int i : v)
    //     std::cout << i << ' ';
 
    // The result is unspecified.
    std::cout <<
        (std::memcmp(v, original, sizeof(v)) == 0 ? "Unmodified\n" : "Modified\n");
}

```

Possible output:

```
Default value
Default value
Default value
Unmodified

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3870 | C++20 | this algorithm might create objects on a const storage | kept disallowed |

### See also

|  |  |
| --- | --- |
| uninitialized_default_construct_n(C++17) | constructs objects by default-initialization in an uninitialized area of memory, defined by a start and a count   (function template) |
| uninitialized_value_construct(C++17) | constructs objects by value-initialization in an uninitialized area of memory, defined by a range   (function template) |
| ranges::uninitialized_default_construct(C++20) | constructs objects by default-initialization in an uninitialized area of memory, defined by a range (algorithm function object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory/uninitialized_default_construct&oldid=179696>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 January 2025, at 11:52.