# std::forward_list<T,Allocator>::remove, remove_if

From cppreference.com
< cpp‎ | container‎ | forward list
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

Containers library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Sequence | | | | |
| array(C++11) | | | | |
| vector | | | | |
| vector<bool> | | | | |
| inplace_vector(C++26) | | | | |
| deque | | | | |
| forward_list(C++11) | | | | |
| list | | | | |
| Associative | | | | |
| set | | | | |
| multiset | | | | |
| map | | | | |
| multimap | | | | |
| Unordered associative | | | | |
| unordered_set(C++11) | | | | |
| unordered_multiset(C++11) | | | | |
| unordered_map(C++11) | | | | |
| unordered_multimap(C++11) | | | | |
| Adaptors | | | | |
| stack | | | | |
| queue | | | | |
| priority_queue | | | | |
| flat_set(C++23) | | | | |
| flat_multiset(C++23) | | | | |
| flat_map(C++23) | | | | |
| flat_multimap(C++23) | | | | |
| Views | | | | |
| span(C++20) | | | | |
| mdspan(C++23) | | | | |
| Tables | | | | |
| Iterator invalidation | | | | |
| Member function table | | | | |
| Non-member function table | | | | |

std::forward_list

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward_list::forward_list | | | | | | forward_list::~forward_list | | | | | | forward_list::operator= | | | | | | forward_list::assign | | | | | | forward_list::assign_range(C++23) | | | | | | forward_list::get_allocator | | | | | | Element access | | | | | | forward_list::front | | | | | | Iterators | | | | | | forward_list::before_beginforward_list::cbefore_begin | | | | | | forward_list::beginforward_list::cbegin | | | | | | forward_list::endforward_list::cend | | | | | | Capacity | | | | | | forward_list::empty | | | | | | forward_list::max_size | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | forward_list::clear | | | | | | forward_list::emplace_front | | | | | | forward_list::push_front | | | | | | forward_list::insert_after | | | | | | forward_list::emplace_after | | | | | | forward_list::erase_after | | | | | | forward_list::insert_range_after(C++23) | | | | | | forward_list::prepend_range(C++23) | | | | | | forward_list::pop_front | | | | | | forward_list::resize | | | | | | forward_list::swap | | | | | | Operations | | | | | | forward_list::merge | | | | | | forward_list::splice_after | | | | | | ****forward_list::removeforward_list::remove_if**** | | | | | | forward_list::reverse | | | | | | forward_list::unique | | | | | | forward_list::sort | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | swap(std::forward_list) | | | | | | erase(std::forward_list)erase_if(std::forward_list)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| void remove( const T& value ); |  | (since C++11)  (until C++20) |
| size_type remove( const T& value ); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
|  | (2) |  |
| template< class UnaryPredicate >  void remove_if( UnaryPredicate p ); |  | (since C++11)  (until C++20) |
| template< class UnaryPredicate >  size_type remove_if( UnaryPredicate p ); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Removes all elements satisfying specific criteria. Invalidates only the iterators and references to the removed elements.

1) Removes all elements that are equal to value (using operator==).2) Removes all elements for which predicate p returns true.

### Parameters

|  |  |  |
| --- | --- | --- |
| value | - | value of the elements to remove |
| p | - | unary predicate which returns ​true if the element should be removed.   The expression p(v) must be convertible to bool for every argument `v` of type (possibly const) `T`, regardless of value category, and must not modify `v`. Thus, a parameter type of T&is not allowed, nor is T unless for `T` a move is equivalent to a copy(since C++11). ​ |
| Type requirements | | |
| -`UnaryPredicate` must meet the requirements of Predicate. | | |

### Return value

|  |  |
| --- | --- |
| (none) | (until C++20) |
| The number of elements removed. | (since C++20) |

### Complexity

Given \(\scriptsize N\)N as std::distance(begin(), end()):

1) Exactly \(\scriptsize N\)N comparisons using operator==.2) Exactly \(\scriptsize N\)N applications of the predicate p.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_list_remove_return_type` | `201806L` | (C++20) | Change the return type |

### Example

Run this code

```
#include <forward_list>
#include <iostream>
 
int main()
{
    std::forward_list<int> l = {1, 100, 2, 3, 10, 1, 11, -1, 12};
 
    auto count1 = l.remove(1);
    std::cout << count1 << " elements equal to 1 were removed\n";
 
    auto count2 = l.remove_if([](int n){ return n > 10; });
    std::cout << count2 << " elements greater than 10 were removed\n";
 
    std::cout << "Finally, the list contains: ";
    for (int n : l)
        std::cout << n << ' ';
    std::cout << '\n';
}

```

Output:

```
2 elements equal to 1 were removed
3 elements greater than 10 were removed
Finally, the list contains: 2 3 10 -1

```

### See also

|  |  |
| --- | --- |
| removeremove_if | removes elements satisfying specific criteria   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/forward_list/remove&oldid=156309>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 August 2023, at 14:05.