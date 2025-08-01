# std::multimap<Key,T,Compare,Allocator>::operator=

From cppreference.com
< cpp‎ | container‎ | multimap
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

std::multimap

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | multimap::multimap | | | | | | multimap::~multimap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****multimap::operator=**** | | | | | | multimap::get_allocator | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterators | | | | | | multimap::beginmultimap::cbegin(C++11) | | | | | | multimap::endmultimap::cend(C++11) | | | | | | multimap::rbeginmultimap::crbegin(C++11) | | | | | | multimap::rendmultimap::crend(C++11) | | | | | | Capacity | | | | | | multimap::size | | | | | | multimap::max_size | | | | | | multimap::empty | | | | | | Observers | | | | | | multimap::key_comp | | | | | | multimap::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | multimap::clear | | | | | | multimap::insert | | | | | | multimap::erase | | | | | | multimap::swap | | | | | | multimap::merge(C++17) | | | | | | multimap::insert_range(C++23) | | | | | | multimap::emplace(C++11) | | | | | | multimap::emplace_hint(C++11) | | | | | | multimap::extract(C++17) | | | | | | Lookup | | | | | | multimap::count | | | | | | multimap::find | | | | | | multimap::contains(C++20) | | | | | | multimap::equal_range | | | | | | multimap::lower_bound | | | | | | multimap::upper_bound | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | std::swap(std::multimap) | | | | | | erase_if(std::multimap)(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| multimap& operator=( const multimap& other ); | (1) |  |
|  |  |  |
| --- | --- | --- |
|  | (2) |  |
| multimap& operator=( multimap&& other ); |  | (since C++11)  (until C++17) |
| multimap& operator=( multimap&& other ) noexcept(/\* see below \*/); |  | (since C++17) |
|  |  |  |
| --- | --- | --- |
| multimap& operator=( std::initializer_list<value_type> ilist ); | (3) | (since C++11) |
|  |  |  |

Replaces the contents of the container.

1) Copy assignment operator. Replaces the contents with a copy of the contents of other.

|  |  |
| --- | --- |
| If std::allocator_traits<allocator_type>::propagate_on_container_copy_assignment::value is true, the allocator of \*this is replaced by a copy of other. If the allocator of \*this after assignment would compare unequal to its old value, the old allocator is used to deallocate the memory, then the new allocator is used to allocate it before copying the elements. Otherwise, the memory owned by \*this may be reused when possible. In any case, the elements originally belonging to \*this may be either destroyed or replaced by element-wise copy-assignment. | (since C++11) |

2) Move assignment operator. Replaces the contents with those of other using move semantics (i.e. the data in other is moved from other into this container). other is in a valid but unspecified state afterwards. If std::allocator_traits<allocator_type>::propagate_on_container_move_assignment::value is true, the allocator of \*this is replaced by a copy of that of other. If it is false and the allocators of \*this and other do not compare equal, \*this cannot take ownership of the memory owned by other and must move-assign each element individually, allocating additional memory using its own allocator as needed. In any case, all elements originally belonging to \*this are either destroyed or replaced by element-wise move-assignment.3) Replaces the contents with those identified by initializer list ilist.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another container to use as data source |
| ilist | - | initializer list to use as data source |

### Return value

\*this

### Complexity

1) Linear in the size of \*this and other.2) Linear in the size of \*this unless the allocators do not compare equal and do not propagate, in which case linear in the size of \*this and other.3) O(NlogN) in general, where N is size() + ilist.size(). Linear if ilist is sorted with respect to value_comp().

### Exceptions

|  |  |
| --- | --- |
| 1-3) May throw implementation-defined exceptions. | (until C++17) |
| 1,3) May throw implementation-defined exceptions.2)noexcept specification:noexcept(std::allocator_traits<Allocator>::is_always_equal::value  && std::is_nothrow_move_assignable<Compare>::value) | (since C++17) |

### Notes

After container move assignment (overload (2)), unless element-wise move assignment is forced by incompatible allocators, references, pointers, and iterators (other than the end iterator) to `other` remain valid, but refer to elements that are now in \*this. The current standard makes this guarantee via the blanket statement in [[container.reqmts]/67](https://eel.is/c++draft/container.reqmts#67), and a more direct guarantee is under consideration via LWG issue 2321.

### Example

The following code uses operator= to assign one std::multimap to another:

Run this code

```
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <map>
#include <utility>
 
void print(auto const comment, auto const& container)
{
    auto size = std::size(container);
    std::cout << comment << "{ ";
    for (auto const& [key, value] : container)
        std::cout << '{' << key << ',' << value << (--size ? "}, " : "} ");
    std::cout << "}\n";
}
 
int main()
{
    std::multimap<int, int> x{{1,1}, {2,2}, {3,3}}, y, z;
    const auto w = {std::pair<const int, int>{4,4}, {5,5}, {6,6}, {7,7}};
 
    std::cout << "Initially:\n";
    print("x = ", x);
    print("y = ", y);
    print("z = ", z);
 
    std::cout << "Copy assignment copies data from x to y:\n";
    y = x;
    print("x = ", x);
    print("y = ", y);
 
    std::cout << "Move assignment moves data from x to z, modifying both x and z:\n";
    z = std::move(x);
    print("x = ", x);
    print("z = ", z);
 
    std::cout << "Assignment of initializer_list w to z:\n";
    z = w;
    print("w = ", w);
    print("z = ", z);
}

```

Output:

```
Initially:
x = { {1,1}, {2,2}, {3,3} }
y = { }
z = { }
Copy assignment copies data from x to y:
x = { {1,1}, {2,2}, {3,3} }
y = { {1,1}, {2,2}, {3,3} }
Move assignment moves data from x to z, modifying both x and z:
x = { }
z = { {1,1}, {2,2}, {3,3} }
Assignment of initializer_list w to z:
w = { {4,4}, {5,5}, {6,6}, {7,7} }
z = { {4,4}, {5,5}, {6,6}, {7,7} }

```

### See also

|  |  |
| --- | --- |
| (constructor) | constructs the `multimap`   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/multimap/operator%3D&oldid=136087>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2021, at 11:57.