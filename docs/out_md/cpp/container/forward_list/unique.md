# std::forward_list<T,Allocator>::unique

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward_list::forward_list | | | | | | forward_list::~forward_list | | | | | | forward_list::operator= | | | | | | forward_list::assign | | | | | | forward_list::assign_range(C++23) | | | | | | forward_list::get_allocator | | | | | | Element access | | | | | | forward_list::front | | | | | | Iterators | | | | | | forward_list::before_beginforward_list::cbefore_begin | | | | | | forward_list::beginforward_list::cbegin | | | | | | forward_list::endforward_list::cend | | | | | | Capacity | | | | | | forward_list::empty | | | | | | forward_list::max_size | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | forward_list::clear | | | | | | forward_list::emplace_front | | | | | | forward_list::push_front | | | | | | forward_list::insert_after | | | | | | forward_list::emplace_after | | | | | | forward_list::erase_after | | | | | | forward_list::insert_range_after(C++23) | | | | | | forward_list::prepend_range(C++23) | | | | | | forward_list::pop_front | | | | | | forward_list::resize | | | | | | forward_list::swap | | | | | | Operations | | | | | | forward_list::merge | | | | | | forward_list::splice_after | | | | | | forward_list::removeforward_list::remove_if | | | | | | forward_list::reverse | | | | | | ****forward_list::unique**** | | | | | | forward_list::sort | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | swap(std::forward_list) | | | | | | erase(std::forward_list)erase_if(std::forward_list)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| void unique(); |  | (since C++11)  (until C++20) |
| size_type unique(); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
|  | (2) |  |
| template< class BinaryPredicate >  void unique( BinaryPredicate p ); |  | (since C++11)  (until C++20) |
| template< class BinaryPredicate >  size_type unique( BinaryPredicate p ); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Removes all **consecutive** duplicate elements from the container. Only the first element in each group of equal elements is left. Invalidates only the iterators and references to the
removed elements.

1) Uses operator== to compare the elements.2) Uses p to compare the elements.

The behavior is undefined if the corresponding comparator does not establish an equivalence relation.

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | binary predicate which returns ​true if the elements should be treated as equal.   The signature of the predicate function should be equivalent to the following:   bool pred(const Type1 &a, const Type2 &b);  While the signature does not need to have const &, the function must not modify the objects passed to it and must be able to accept all values of type (possibly const) `Type1` and `Type2` regardless of value category (thus, Type1 & is not allowed, nor is Type1 unless for `Type1` a move is equivalent to a copy(since C++11)).  The types Type1 and Type2 must be such that an object of type forward_list<T,Allocator>::const_iterator can be dereferenced and then implicitly converted to both of them. ​ |
| Type requirements | | |
| -`BinaryPredicate` must meet the requirements of BinaryPredicate. | | |

### Return value

|  |  |
| --- | --- |
| (none) | (until C++20) |
| The number of elements removed. | (since C++20) |

### Complexity

If empty() is true, no comparison is performed.

Otherwise, given \(\scriptsize N\)N as std::distance(begin(), end()):

1) Exactly \(\scriptsize N-1\)N-1 comparisons using operator==.2) Exactly \(\scriptsize N-1\)N-1 applications of the predicate p.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_list_remove_return_type` | `201806L` | (C++20) | Change the return type |

### Example

Run this code

```
#include <iostream>
#include <forward_list>
 
std::ostream& operator<< (std::ostream& os, std::forward_list<int> const& container)
{
    for (int val : container)
        os << val << ' ';
    return os << '\n';
}
 
int main()
{
    std::forward_list<int> c{1, 2, 2, 3, 3, 2, 1, 1, 2};
    std::cout << "Before unique(): " << c;
    const auto count1 = c.unique();
    std::cout << "After unique():  " << c
              << count1 << " elements were removed\n";
 
    c = {1, 2, 12, 23, 3, 2, 51, 1, 2, 2};
    std::cout << "\nBefore unique(pred): " << c;
 
    const auto count2 = c.unique(mod = 10
    {
        return (x % mod) == (y % mod);
    });
 
    std::cout << "After unique(pred):  " << c
              << count2 << " elements were removed\n";
}

```

Output:

```
Before unique(): 1 2 2 3 3 2 1 1 2
After unique():  1 2 3 2 1 2
3 elements were removed
 
Before unique(pred): 1 2 12 23 3 2 51 1 2 2
After unique(pred):  1 2 23 2 51 2
4 elements were removed

```

### See also

|  |  |
| --- | --- |
| unique | removes consecutive duplicate elements in a range   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/forward_list/unique&oldid=130405>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 June 2021, at 03:47.