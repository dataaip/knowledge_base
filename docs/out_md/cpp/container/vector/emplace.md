# std::vector<T,Allocator>::emplace

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | vector::vector | | | | | | vector::~vector | | | | | | vector::operator= | | | | | | vector::assign | | | | | | vector::assign_range(C++23) | | | | | | vector::get_allocator | | | | | | Element access | | | | | | [vector::operator[]](operator_at.html "cpp/container/vector/operator at") | | | | | | vector::at | | | | | | vector::data | | | | | | vector::front | | | | | | vector::back | | | | | | Iterators | | | | | | vector::beginvector::cbegin(C++11) | | | | | | vector::endvector::cend(C++11) | | | | | | vector::rbeginvector::crbegin(C++11) | | | | | | vector::rendvector::crend(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | vector::empty | | | | | | vector::size | | | | | | vector::max_size | | | | | | vector::reserve | | | | | | vector::capacity | | | | | | vector::shrink_to_fit(DR\*) | | | | | | Modifiers | | | | | | vector::clear | | | | | | vector::erase | | | | | | vector::insert | | | | | | vector::insert_range(C++23) | | | | | | vector::append_range(C++23) | | | | | | ****vector::emplace****(C++11) | | | | | | vector::emplace_back(C++11) | | | | | | vector::push_back | | | | | | vector::pop_back | | | | | | vector::resize | | | | | | vector::swap | | | | | |  | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | swap(std::vector) | | | | | | erase(std::vector)erase_if(std::vector)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  iterator emplace( const_iterator pos, Args&&... args ); |  | (since C++11)  (constexpr since C++20) |
|  |  |  |

Inserts a new element into the container directly before pos.

The element is constructed through std::allocator_traits::construct, which typically uses placement-new to construct the element in-place at a location provided by the container. However, if the required location has been occupied by an existing element, the inserted element is constructed at another location at first, and then move assigned into the required location.

The arguments args... are forwarded to the constructor as std::forward<Args>(args).... args... may directly or indirectly refer to a value in the container.

If after the operation the new `size()` is greater than old `capacity()` a reallocation takes place, in which case all iterators (including the `end()` iterator) and all references to the elements are invalidated. Otherwise, only the iterators and references before the insertion point remain valid.

### Parameters

|  |  |  |
| --- | --- | --- |
| pos | - | iterator before which the new element will be constructed |
| args | - | arguments to forward to the constructor of the element |
| Type requirements | | |
| -`T (the container's element type)` must meet the requirements of MoveAssignable, MoveInsertable and EmplaceConstructible. | | |

### Return value

Iterator pointing to the emplaced element.

### Complexity

Linear in the distance between pos and end of the container.

### Exceptions

If an exception is thrown other than by the copy constructor, move constructor, assignment operator, or move assignment operator of `T`, or if an exception is thrown while `emplace` is used to insert a single element at the end and `T` is either CopyInsertable or nothrow move constructible, there are no effects (strong exception guarantee).

Otherwise, the effects are unspecified.

### Example

Run this code

```
#include <iostream>
#include <string>
#include <vector>
 
struct A
{
    std::string s;
 
    A(std::string str) : s(std::move(str)) { std::cout << " constructed\n"; }
 
    A(const A& o) : s(o.s) { std::cout << " copy constructed\n"; }
 
    A(A&& o) : s(std::move(o.s)) { std::cout << " move constructed\n"; }
 
    A& operator=(const A& other)
    {
        s = other.s;
        std::cout << " copy assigned\n";
        return *this;
    }
 
    A& operator=(A&& other)
    {
        s = std::move(other.s);
        std::cout << " move assigned\n";
        return *this;
    }
};
 
int main()
{
    std::vector<A> container;
    // reserve enough place so vector does not have to resize
    container.reserve(10);
    std::cout << "construct 2 times A:\n";
    A two{"two"};
    A three{"three"};
 
    std::cout << "emplace:\n";
    container.emplace(container.end(), "one");
 
    std::cout << "emplace with A&:\n";
    container.emplace(container.end(), two);
 
    std::cout << "emplace with A&&:\n";
    container.emplace(container.end(), std::move(three));
 
    std::cout << "content:\n";
    for (const auto& obj : container)
        std::cout << ' ' << obj.s;
    std::cout << '\n';
}

```

Output:

```
construct 2 times A:
 constructed
 constructed
emplace:
 constructed
emplace with A&:
 copy constructed
emplace with A&&:
 move constructed
content:
 one two three

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2164 | C++11 | it was not clear whether the arguments can refer to the container | clarified |

### See also

|  |  |
| --- | --- |
| insert | inserts elements   (public member function) |
| emplace_back(C++11) | constructs an element in-place at the end   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector/emplace&oldid=124994>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 December 2020, at 03:23.