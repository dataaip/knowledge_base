# std::deque<T,Allocator>::operator[]

From cppreference.com
< cpp‎ | container‎ | deque
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

std::deque

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | deque::deque | | | | | | deque::~deque | | | | | | deque::operator= | | | | | | deque::assign | | | | | | deque::assign_range(C++23) | | | | | | deque::get_allocator | | | | | | Element access | | | | | | deque::at | | | | | | ****deque::operator[]**** | | | | | | deque::front | | | | | | deque::back | | | | | | Iterators | | | | | | deque::begindeque::cbegin(C++11) | | | | | | deque::enddeque::cend(C++11) | | | | | | deque::rbegindeque::crbegin(C++11) | | | | | | deque::renddeque::crend(C++11) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | deque::empty | | | | | | deque::size | | | | | | deque::max_size | | | | | | deque::shrink_to_fit(DR\*) | | | | | | Modifiers | | | | | | deque::clear | | | | | | deque::insert | | | | | | deque::insert_range(C++23) | | | | | | deque::emplace | | | | | | deque::erase | | | | | | deque::push_front | | | | | | deque::emplace_front(C++11) | | | | | | deque::prepend_range(C++23) | | | | | | deque::pop_front | | | | | | deque::push_back | | | | | | deque::emplace_back(C++11) | | | | | | deque::append_range(C++23) | | | | | | deque::pop_back | | | | | | deque::resize | | | | | | deque::swap | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | swap(std::deque) | | | | | | erase(std::deque)erase_if(std::deque)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| reference operator[]( size_type pos ); | (1) |  |
| const_reference operator[]( size_type pos ) const; | (2) |  |
|  |  |  |

Returns a reference to the element at specified location pos. No bounds checking is performed.

### Parameters

|  |  |  |
| --- | --- | --- |
| pos | - | position of the element to return |

### Return value

Reference to the requested element.

### Complexity

Constant.

### Notes

Unlike [std::map::operator[]](../map/operator_at.html "cpp/container/map/operator at"), this operator never inserts a new element into the container. Accessing a nonexistent element through this operator is undefined behavior.

### Example

The following code uses operator[] to read from and write to a std::deque<int>:

Run this code

```
#include <deque>
#include <iostream>
 
int main()
{
    std::deque<int> numbers{2, 4, 6, 8};
 
    std::cout << "Second element: " << numbers[1] << '\n';
 
    numbers[0] = 5;
 
    std::cout << "All numbers:";
    for (auto i : numbers)
        std::cout << ' ' << i;
    std::cout << '\n';
}

```

Output:

```
Second element: 4
All numbers: 5 4 6 8

```

### See also

|  |  |
| --- | --- |
| at | access specified element with bounds checking   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/deque/operator_at&oldid=135171>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 November 2021, at 17:50.