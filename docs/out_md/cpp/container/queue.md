# std::queue

From cppreference.com
< cpp‎ | container
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
| ****queue**** | | | | |
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

`std::queue`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| queue::queue | | | | |
| queue::~queue | | | | |
| queue::operator= | | | | |
| Element access | | | | |
| queue::front | | | | |
| queue::back | | | | |
| Capacity | | | | |
| queue::empty | | | | |
| queue::size | | | | |
| Modifiers | | | | |
| queue::push | | | | |
| queue::push_range(C++23) | | | | |
| queue::emplace(C++11) | | | | |
| queue::pop | | | | |
| queue::swap(C++11) | | | | |
| Non-member functions | | | | |
| swap(std::queue)(C++11) | | | | |
| operator==operator!=operator<operator>operator<=operator>=operator<=>(C++20) | | | | |
| Helper classes | | | | |
| uses_allocator<std::queue>(C++11) | | | | |
| formatter<std::queue>(C++23) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<queue>` |  |  |
| template<  class T,      class Container = std::deque<T> > class queue; |  |  |
|  |  |  |

The `std::queue` class template is a container adaptor that gives the functionality of a queue "enwiki:Queue (abstract data type)") - specifically, a FIFO (first-in, first-out) data structure.

The class template acts as a wrapper to the underlying container - only a specific set of functions is provided. The queue pushes the elements on the back of the underlying container and pops them from the front.

### Template parameters

|  |  |  |
| --- | --- | --- |
| T | - | The type of the stored elements. The program is ill-formed if `T` is not the same type as `Container::value_type`. |
| Container | - | The type of the underlying container to use to store the elements. The container must satisfy the requirements of SequenceContainer. Additionally, it must provide the following functions with the usual semantics:  - `back()`, e.g., std::deque::back(), - `front()`, e.g. std::list::front(), - `push_back()`, e.g., std::deque::push_back(), - `pop_front()`, e.g., std::list::pop_front().   The standard containers std::deque and std::list satisfy these requirements. |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `container_type` | `Container` |
| `value_type` | `Container::value_type` |
| `size_type` | Container::size_type |
| `reference` | `Container::reference` |
| `const_reference` | `Container::const_reference` |

### Member objects

|  |  |
| --- | --- |
| Member name | Definition |
| Container c | the underlying container   (protected member object) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs the `queue`   (public member function) |
| (destructor) | destructs the `queue`   (public member function) |
| operator= | assigns values to the container adaptor   (public member function) |
| Element access | |
| front | access the first element   (public member function) |
| back | access the last element   (public member function) |
| Capacity | |
| empty | checks whether the container adaptor is empty   (public member function) |
| size | returns the number of elements   (public member function) |
| Modifiers | |
| push | inserts element at the end   (public member function) |
| push_range(C++23) | inserts a range of elements at the end   (public member function) |
| emplace(C++11) | constructs element in-place at the end   (public member function) |
| pop | removes the first element   (public member function) |
| swap(C++11) | swaps the contents   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++20) | lexicographically compares the values of two `queue`s   (function template) |
| std::swap(std::queue)(C++11) | specializes the std::swap algorithm   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::uses_allocator<std::queue>(C++11) | specializes the std::uses_allocator type trait   (class template specialization) |
| std::formatter<std::queue>(C++23) | formatting support for `std::queue`   (class template specialization) |

|  |  |
| --- | --- |
| Deduction guides | (since C++17) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_containers_ranges` | `202202L` | (C++23) | Ranges construction and insertion for containers |

### Example

Run this code

```
#include <cassert>
#include <iostream>
#include <queue>
 
int main()
{
    std::queue<int> q;
 
    q.push(0); // back pushes 0
    q.push(1); // q = 0 1
    q.push(2); // q = 0 1 2
    q.push(3); // q = 0 1 2 3
 
    assert(q.front() == 0);
    assert(q.back() == 3);
    assert(q.size() == 4);
 
    q.pop(); // removes the front element, 0
    assert(q.size() == 3);
 
    // Print and remove all elements. Note that std::queue does not
    // support begin()/end(), so a range-for-loop cannot be used.
    std::cout << "q: ";
    for (; !q.empty(); q.pop())
        std::cout << q.front() << ' ';
    std::cout << '\n';
    assert(q.size() == 0);
}

```

Output:

```
q: 1 2 3

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 307 | C++98 | `std::queue` did not support containers using proxy reference types[[1]](queue.html#cite_note-1) in place of (`const`) `value_type&` | supported |
| LWG 2566 | C++98 | Missing the requirement for `Container::value_type` | ill-formed if `T` is not the same type as `Container::value_type` |

1. ↑ Such as containers similar to std::vector<bool> with additional support of `pop_front()`. The resolution of this DR  
   added support of std::vector<bool> for std::stack and std::priority_queue. The changes involving `std::queue`  
   are for maintaining consistency.

### See also

|  |  |
| --- | --- |
| priority_queue | adapts a container to provide priority queue   (class template) |
| deque | double-ended queue   (class template) |
| list | doubly-linked list   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/queue&oldid=174061>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 August 2024, at 23:51.