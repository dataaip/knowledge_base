# std::sorted_equivalent_t, std::sorted_equivalent

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

|  |  |  |
| --- | --- | --- |
| Defined in header `<flat_map>` |  |  |
| Defined in header `<flat_set>` |  |  |
| struct sorted_equivalent_t { explicit sorted_equivalent_t() = default; }; | (1) | (since C++23) |
| inline constexpr sorted_equivalent_t sorted_equivalent{}; | (2) | (since C++23) |
|  |  |  |

1) The type `std::sorted_equivalent_t` can be used in the function's (including constructor's) parameter list to match the intended tag.2) The corresponding `std::sorted_equivalent` instance of (1) is a disambiguation tag that can be passed to the functions of std::flat_multimap and std::flat_multiset to indicate that the input range or container is sorted (with respect to the comparator used in flat container adaptor), whilst uniqueness of elements is not required.

### Standard library

The following standard library container adaptors use (1,2) as disambiguation tags:

|  |  |
| --- | --- |
| flat_multimap(C++23) | adapts two containers to provide a collection of key-value pairs, sorted by keys   (class template) |
| flat_multiset(C++23) | adapts a container to provide a collection of keys, sorted by keys   (class template) |

### See also

|  |  |
| --- | --- |
| sorted_uniquesorted_unique_t(C++23) | indicates that elements of a range are sorted and unique (tag) |
| from_range_tfrom_range(C++23) | from-range construction tag (tag) |
| in_placein_place_typein_place_indexin_place_tin_place_type_tin_place_index_t(C++17) | in-place construction tag (tag) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/sorted_equivalent&oldid=171753>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 May 2024, at 18:10.