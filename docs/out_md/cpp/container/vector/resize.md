# std::vector<T,Allocator>::resize

From cppreference.com
< cpp‎ | container‎ | vector
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

std::vector

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | vector::vector | | | | | | vector::~vector | | | | | | vector::operator= | | | | | | vector::assign | | | | | | vector::assign_range(C++23) | | | | | | vector::get_allocator | | | | | | Element access | | | | | | [vector::operator[]](operator_at.html "cpp/container/vector/operator at") | | | | | | vector::at | | | | | | vector::data | | | | | | vector::front | | | | | | vector::back | | | | | | Iterators | | | | | | vector::beginvector::cbegin(C++11) | | | | | | vector::endvector::cend(C++11) | | | | | | vector::rbeginvector::crbegin(C++11) | | | | | | vector::rendvector::crend(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | vector::empty | | | | | | vector::size | | | | | | vector::max_size | | | | | | vector::reserve | | | | | | vector::capacity | | | | | | vector::shrink_to_fit(DR\*) | | | | | | Modifiers | | | | | | vector::clear | | | | | | vector::erase | | | | | | vector::insert | | | | | | vector::insert_range(C++23) | | | | | | vector::append_range(C++23) | | | | | | vector::emplace(C++11) | | | | | | vector::emplace_back(C++11) | | | | | | vector::push_back | | | | | | vector::pop_back | | | | | | ****vector::resize**** | | | | | | vector::swap | | | | | |  | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | swap(std::vector) | | | | | | erase(std::vector)erase_if(std::vector)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| void resize( size_type count ); | (1) | (constexpr since C++20) |
| void resize( size_type count, const value_type& value ); | (2) | (constexpr since C++20) |
|  |  |  |

Resizes the container to contain count elements, does nothing if count == size().

If the current size is greater than count, the container is reduced to its first count elements.

If the current size is less than count, then:

1) Additional default-inserted elements are appended.2) Additional copies of value are appended.

### Parameters

|  |  |  |
| --- | --- | --- |
| count | - | new size of the container |
| value | - | the value to initialize the new elements with |
| Type requirements | | |
| -`T` must meet the requirements of MoveInsertable and DefaultInsertable in order to use overload (1). | | |
| -`T` must meet the requirements of CopyInsertable in order to use overload (2). | | |

### Complexity

Linear in the difference between the current size and count. Additional complexity possible due to reallocation if capacity is less than count.

### Exceptions

If an exception is thrown for any reason, these functions have no effect (strong exception safety guarantee).
Although not explicitly specified, std::length_error is thrown if the capacity required by the new `vector` would exceed max_size().

|  |  |
| --- | --- |
| In overload (1), if `T`'s move constructor is not noexcept and T is not CopyInsertable into \*this, vector will use the throwing move constructor. If it throws, the guarantee is waived and the effects are unspecified. | (since C++11) |

### Notes

If value-initialization in overload (1) is undesirable, for example, if the elements are of non-class type and zeroing out is not needed, it can be avoided by providing a custom `Allocator::construct`.
  
Vector capacity is never reduced when resizing to smaller size because that would invalidate all iterators, rather than only the ones that would be invalidated by the equivalent sequence of pop_back() calls.

### Example

Run this code

```
#include <vector>
#include <iostream>
 
void print(auto rem, const std::vector<int>& c)
{
    for (std::cout << rem; const int el : c)
        std::cout << el << ' ';
    std::cout << '\n';
}
 
int main()
{
    std::vector<int> c = {1, 2, 3};
    print("The vector holds: ", c);
 
    c.resize(5);
    print("After resize up to 5: ", c);
 
    c.resize(2);
    print("After resize down to 2: ", c);
 
    c.resize(6, 4);
    print("After resize up to 6 (initializer = 4): ", c);
}

```

Output:

```
The vector holds: 1 2 3
After resize up to 5: 1 2 3 0 0
After resize down to 2: 1 2
After resize up to 6 (initializer = 4): 1 2 4 4 4 4

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 679 | C++98 | `resize()` passed value by value | passes by const reference |
| LWG 1525 | C++98 | the behavior of resize(size()) was not specified | specified |
| LWG 2033 | C++11 | 1. elements were removed by using erase()[[1]](resize.html#cite_note-1) 2. the type requirements of `T` were incorrect | 1. uses pop_back() 2. corrected |
| LWG 2066 | C++11 | overload (1) did not have the exception safety guarantee of overload (2) | added |
| LWG 2160 | C++11 | elements were removed by using pop_back()[[2]](resize.html#cite_note-2) due to the resolution of LWG 2033 | does not specify the method of removing elements |

1. ↑ erase() can remove elements in the middle of a `vector`, so the value type is required to be MoveAssignable so that the elements following the removed section can be moved forward to fill the gap. However, `resize()` can only remove elements at the end of the `vector`, making the MoveAssignable unnecessary.
2. ↑ Removing elements by using pop_back() implies that the elements are required to be removed from back to front.

### See also

|  |  |
| --- | --- |
| max_size | returns the maximum possible number of elements   (public member function) |
| size | returns the number of elements   (public member function) |
| capacity | returns the number of elements that can be held in currently allocated storage   (public member function) |
| empty | checks whether the container is empty   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector/resize&oldid=135148>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 November 2021, at 07:27.