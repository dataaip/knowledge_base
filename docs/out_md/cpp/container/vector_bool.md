# std::vector<bool>

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
| ****vector<bool>**** | | | | |
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

****std::vector<bool>****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| vector<bool>::reference | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | vector::vector | | | | | | vector::~vector | | | | | | vector::operator= | | | | | | vector::assign | | | | | | vector::assign_range(C++23) | | | | | | vector::get_allocator | | | | | | Element access | | | | | | [vector::operator[]](vector/operator_at.html "cpp/container/vector/operator at") | | | | | | vector::at | | | | | | vector::front | | | | | | vector::back | | | | | | Iterators | | | | | | vector::beginvector::cbegin(C++11) | | | | | | vector::endvector::cend(C++11) | | | | | | vector::rbeginvector::crbegin(C++11) | | | | | | vector::rendvector::crend(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | vector::empty | | | | | | vector::size | | | | | | vector::max_size | | | | | | vector::capacity | | | | | | vector::resize | | | | | | vector::reserve | | | | | | vector::shrink_to_fit(DR\*) | | | | | | Modifiers | | | | | | vector::clear | | | | | | vector::erase | | | | | | vector::insert | | | | | | vector::insert_range(C++23) | | | | | | vector::append_range(C++23) | | | | | | vector::emplace(C++11) | | | | | | vector::emplace_back(C++11) | | | | | | vector::push_back | | | | | | vector::pop_back | | | | | | vector::swap | | | | | | vector<bool>::flip | | | | | | vector<bool>::swap | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | swap(std::vector<bool>) | | | | | | erase(std::vector<bool>)erase_if(std::vector<bool>)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Helper classes | | | | |
| hash<std::vector<bool>>(C++11) | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<vector>` |  |  |
| template<  class Allocator > class vector<bool, Allocator>; |  |  |
|  |  |  |

std::`vector`<bool> is a possibly space-efficient specialization of std::vector for the type bool.

The manner in which std::`vector`<bool> is made space efficient (as well as whether it is optimized at all) is implementation defined. One potential optimization involves coalescing vector elements such that each element occupies a single bit instead of sizeof(bool) bytes.

std::`vector`<bool> behaves similarly to std::vector, but in order to be space efficient, it:

- Does not necessarily store its elements as a contiguous array.
- Exposes class std::`vector`<bool>::`reference` as a method of accessing individual bits. In particular, objects of this class are returned by [operator[]](vector/operator_at.html "cpp/container/vector/operator at") by value.
- Does not use std::allocator_traits::construct to construct bit values.
- Does not guarantee that different elements in the same container can be modified concurrently by different threads.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `value_type` | bool |
| `allocator_type` | `Allocator` |
| `size_type` | implementation-defined |
| `difference_type` | implementation-defined |
| reference | proxy class representing a reference to a single bool   (class) |
| `const_reference` | bool |
| `pointer` | implementation-defined |
| `const_pointer` | implementation-defined |
| `iterator` | |  |  | | --- | --- | | implementation-defined | (until C++20) | | implementation-defined ConstexprIterator | (since C++20) | |
| `const_iterator` | |  |  | | --- | --- | | implementation-defined | (until C++20) | | implementation-defined ConstexprIterator | (since C++20) | |
| `reverse_iterator` | std::reverse_iterator<iterator> |
| `const_reverse_iterator` | std::reverse_iterator<const_iterator> |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs the `vector`   (public member function of `std::vector<T,Allocator>`) |
| (destructor) | destructs the `vector`   (public member function of `std::vector<T,Allocator>`) |
| operator= | assigns values to the container   (public member function of `std::vector<T,Allocator>`) |
| assign | assigns values to the container   (public member function of `std::vector<T,Allocator>`) |
| assign_range(C++23) | assigns a range of values to the container   (public member function of `std::vector<T,Allocator>`) |
| get_allocator | returns the associated allocator   (public member function of `std::vector<T,Allocator>`) |
| Element access | |
| at | access specified element with bounds checking   (public member function of `std::vector<T,Allocator>`) |
| [operator[]](vector/operator_at.html "cpp/container/vector/operator at") | access specified element   (public member function of `std::vector<T,Allocator>`) |
| front | access the first element   (public member function of `std::vector<T,Allocator>`) |
| back | access the last element   (public member function of `std::vector<T,Allocator>`) |
| Iterators | |
| begincbegin(C++11) | returns an iterator to the beginning   (public member function of `std::vector<T,Allocator>`) |
| endcend(C++11) | returns an iterator to the end   (public member function of `std::vector<T,Allocator>`) |
| rbegincrbegin(C++11) | returns a reverse iterator to the beginning   (public member function of `std::vector<T,Allocator>`) |
| rendcrend(C++11) | returns a reverse iterator to the end   (public member function of `std::vector<T,Allocator>`) |
| Capacity | |
| empty | checks whether the container is empty   (public member function of `std::vector<T,Allocator>`) |
| size | returns the number of elements   (public member function of `std::vector<T,Allocator>`) |
| max_size | returns the maximum possible number of elements   (public member function of `std::vector<T,Allocator>`) |
| reserve | reserves storage   (public member function of `std::vector<T,Allocator>`) |
| capacity | returns the number of elements that can be held in currently allocated storage   (public member function of `std::vector<T,Allocator>`) |
| Modifiers | |
| clear | clears the contents   (public member function of `std::vector<T,Allocator>`) |
| insert | inserts elements   (public member function of `std::vector<T,Allocator>`) |
| insert_range(C++23) | inserts a range of elements   (public member function of `std::vector<T,Allocator>`) |
| append_range(C++23) | adds a range of elements to the end   (public member function of `std::vector<T,Allocator>`) |
| emplace(C++11) | constructs element in-place   (public member function of `std::vector<T,Allocator>`) |
| erase | erases elements   (public member function of `std::vector<T,Allocator>`) |
| push_back | adds an element to the end   (public member function of `std::vector<T,Allocator>`) |
| emplace_back(C++11) | constructs an element in-place at the end   (public member function of `std::vector<T,Allocator>`) |
| pop_back | removes the last element   (public member function of `std::vector<T,Allocator>`) |
| resize | changes the number of elements stored   (public member function of `std::vector<T,Allocator>`) |
| swap | swaps the contents   (public member function of `std::vector<T,Allocator>`) |
| `vector<bool>` specific modifiers | |
| flip | flips all the bits   (public member function) |
| swap[static] | swaps two `std::vector<bool>::`references   (public static member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) | lexicographically compares the values of two `vector`s   (function template) |
| std::swap(std::vector) | specializes the std::swap algorithm   (function template) |
| erase(std::vector)erase_if(std::vector)(C++20) | erases all elements satisfying specific criteria   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::hash<std::vector<bool>>(C++11) | hash support for std::****vector****<bool>   (class template specialization) |

### Deduction guides (C++17)

### Notes

If the size of the bitset is known at compile time, std::bitset may be used, which offers a richer set of member functions. In addition, `boost::dynamic_bitset` exists as an alternative to std::`vector`<bool>.

Since its representation may be optimized, std::`vector`<bool> does not necessarily meet all Container or SequenceContainer requirements. For example, because std::`vector`<bool>::iterator is implementation-defined, it may not satisfy the LegacyForwardIterator requirement. Use of algorithms such as std::search that require LegacyForwardIterators may result in either compile-time or run-time errors.

The Boost.Container version of `vector` does not specialize for bool.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_containers_ranges` | `202202L` | (C++23) | Ranges construction and insertion for containers |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2187 | C++11 | specializations for bool lacked `emplace` and `emplace_back` member functions | added |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector_bool&oldid=178316>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 December 2024, at 14:15.