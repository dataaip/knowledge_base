# std::array

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
| ****array****(C++11) | | | | |
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

****std::array****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Element access | | | | | | array::at | | | | | | [array::operator[]](array/operator_at.html "cpp/container/array/operator at") | | | | | | array::front | | | | | | array::back | | | | | | array::data | | | | | | Operations | | | | | | array::fill | | | | | | array::swap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterators | | | | | | array::beginarray::cbegin | | | | | | array::endarray::cend | | | | | | array::rbeginarray::crbegin | | | | | | array::rendarray::crend | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | array::empty | | | | | | array::size | | | | | | array::max_size | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | get(std::array) | | | | | | swap(std::array) | | | | | | to_array(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator|=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | |
| Helper classes | | | | |
| tuple_size<std::array> | | | | |
| tuple_element<std::array> | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<array>` |  |  |
| template<  class T,      std::size_t N > struct array; |  | (since C++11) |
|  |  |  |

`std::array` is a container that encapsulates fixed size arrays.

This container is an aggregate type with the same semantics as a struct holding a C-style array T[N] as its only non-static data member. Unlike a C-style array, it doesn't decay to T\* automatically. As an aggregate type, it can be initialized with aggregate-initialization given at most `N` initializers that are convertible to `T`: std::array<int, 3> a = {1, 2, 3};.

The struct combines the performance and accessibility of a C-style array with the benefits of a standard container, such as knowing its own size, supporting assignment, random access iterators, etc.

`std::array` satisfies the requirements of Container and ReversibleContainer except that default-constructed array is not empty and that the complexity of swapping is linear, satisfies the requirements of ContiguousContainer,(since C++17) and partially satisfies the requirements of SequenceContainer.

There is a special case for a zero-length array (`N == 0`). In that case, array.begin() == array.end(), which is some unique value. The effect of calling front() or back() on a zero-sized array is undefined.

An array can also be used as a tuple of `N` elements of the same type.

### Iterator invalidation

As a rule, iterators to an array are never invalidated throughout the lifetime of the array. One should take note, however, that during swap, the iterator will continue to point to the same array element, and will thus change its value.

### Template parameters

|  |  |  |
| --- | --- | --- |
| T | - | element type Must be MoveConstructible and MoveAssignable. |
| N | - | the number of elements in the array or ​0​. |

|  |  |
| --- | --- |
|  | This section is incomplete Reason: Complete the descriptions of template parameters. |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `value_type` | `T` |
| `size_type` | std::size_t |
| `difference_type` | std::ptrdiff_t |
| `reference` | value_type& |
| `const_reference` | const value_type& |
| `pointer` | value_type\* |
| `const_pointer` | const value_type\* |
| `iterator` | |  |  | | --- | --- | | LegacyRandomAccessIterator and LegacyContiguousIterator to `value_type` | (until C++17) | | LegacyRandomAccessIterator and LegacyContiguousIterator that is a LiteralType to `value_type` | (since C++17) (until C++20) | | LegacyRandomAccessIterator, `contiguous_iterator`, and ConstexprIterator to `value_type` | (since C++20) | |
| `const_iterator` | |  |  | | --- | --- | | LegacyRandomAccessIterator and LegacyContiguousIterator to const value_type | (until C++17) | | LegacyRandomAccessIterator and LegacyContiguousIterator that is a LiteralType to const value_type | (since C++17) (until C++20) | | LegacyRandomAccessIterator, `contiguous_iterator`, and ConstexprIterator to const value_type | (since C++20) | |
| `reverse_iterator` | std::reverse_iterator<iterator> |
| `const_reverse_iterator` | std::reverse_iterator<const_iterator> |

### Member functions

|  |  |
| --- | --- |
| Implicitly-defined member functions | |
| (constructor)(implicitly declared) | initializes the array following the rules of aggregate initialization (note that default initialization may result in indeterminate values for non-class `T`)   (public member function) |
| (destructor)(implicitly declared) | destroys every element of the array   (public member function) |
| operator=(implicitly declared) | overwrites every element of the array with the corresponding element of another array   (public member function) |
| Element access | |
| at | access specified element with bounds checking   (public member function) |
| [operator[]](array/operator_at.html "cpp/container/array/operator at") | access specified element   (public member function) |
| front | access the first element   (public member function) |
| back | access the last element   (public member function) |
| data | direct access to the underlying contiguous storage   (public member function) |
| Iterators | |
| begincbegin | returns an iterator to the beginning   (public member function) |
| endcend | returns an iterator to the end   (public member function) |
| rbegincrbegin | returns a reverse iterator to the beginning   (public member function) |
| rendcrend | returns a reverse iterator to the end   (public member function) |
| Capacity | |
| empty | checks whether the container is empty   (public member function) |
| size | returns the number of elements   (public member function) |
| max_size | returns the maximum possible number of elements   (public member function) |
| Operations | |
| fill | fill the container with specified value   (public member function) |
| swap | swaps the contents   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++11)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++11)(removed in C++20)(C++20) | lexicographically compares the values of two `array`s   (function template) |
| get(std::array)(C++11) | accesses an element of an `array`   (function template) |
| std::swap(std::array)(C++11) | specializes the std::swap algorithm   (function template) |
| to_array(C++20) | creates a `std::array` object from a built-in array   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::tuple_size<std::array>(C++11) | obtains the size of an `array`   (class template specialization) |
| std::tuple_element<std::array>(C++11) | obtains the type of the elements of `array`   (class template specialization) |

|  |  |
| --- | --- |
| Deduction guides | (since C++17) |

### Example

Run this code

```
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
 
int main()
{
    // Construction uses aggregate initialization
    std::array<int, 3> a1{{1, 2, 3}}; // Double-braces required in C++11 prior to
                                      // the CWG 1270 revision (not needed in C++11
                                      // after the revision and in C++14 and beyond)
 
    std::array<int, 3> a2 = {1, 2, 3}; // Double braces never required after =
 
    // Container operations are supported
    std::sort(a1.begin(), a1.end());
    std::ranges::reverse_copy(a2, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    // Ranged for loop is supported
    std::array<std::string, 2> a3{"E", "\u018E"};
    for (const auto& s : a3)
        std::cout << s << ' ';
    std::cout << '\n';
 
    // Deduction guide for array creation (since C++17)
    [[maybe_unused]] std::array a4{3.0, 1.0, 4.0}; // std::array<double, 3>
 
    // Behavior of unspecified elements is the same as with built-in arrays
    [[maybe_unused]] std::array<int, 2> a5; // No list init, a5[0] and a5[1]
                                            // are default initialized
    [[maybe_unused]] std::array<int, 2> a6{}; // List init, both elements are value
                                              // initialized, a6[0] = a6[1] = 0
    [[maybe_unused]] std::array<int, 2> a7{1}; // List init, unspecified element is value
                                               // initialized, a7[0] = 1, a7[1] = 0
}

```

Output:

```
3 2 1
E Ǝ

```

### See also

|  |  |
| --- | --- |
| inplace_vector(C++26) | dynamically-resizable, fixed capacity, inplace contiguous array   (class template) |
| vector | dynamic contiguous array   (class template) |
| deque | double-ended queue   (class template) |
| make_array(library fundamentals TS v2) | creates a ****std::array**** object whose size and optionally element type are deduced from the arguments   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/array&oldid=174050>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 August 2024, at 21:20.