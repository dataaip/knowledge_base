# std::unordered_multiset

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
| ****unordered_multiset****(C++11) | | | | |
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

`std::unordered_multiset`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_multiset::unordered_multiset | | | | | | unordered_multiset::~unordered_multiset | | | | | | unordered_multiset::operator= | | | | | | unordered_multiset::get_allocator | | | | | | Iterators | | | | | | unordered_multiset::beginunordered_multiset::cbegin | | | | | | unordered_multiset::endunordered_multiset::cend | | | | | | Capacity | | | | | | unordered_multiset::size | | | | | | unordered_multiset::max_size | | | | | | unordered_multiset::empty | | | | | | Modifiers | | | | | | unordered_multiset::clear | | | | | | unordered_multiset::insert | | | | | | unordered_multiset::insert_range(C++23) | | | | | | unordered_multiset::emplace | | | | | | unordered_multiset::emplace_hint | | | | | | unordered_multiset::erase | | | | | | unordered_multiset::swap | | | | | | unordered_multiset::extract(C++17) | | | | | | unordered_multiset::merge(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_multiset::count | | | | | | unordered_multiset::find | | | | | | unordered_multiset::contains(C++20) | | | | | | unordered_multiset::equal_range | | | | | | Bucket interface | | | | | | unordered_multiset::begin(size_type)unordered_multiset::cbegin(size_type) | | | | | | unordered_multiset::end(size_type)unordered_multiset::cend(size_type) | | | | | | unordered_multiset::bucket_count | | | | | | unordered_multiset::max_bucket_count | | | | | | unordered_multiset::bucket_size | | | | | | unordered_multiset::bucket | | | | | | Hash policy | | | | | | unordered_multiset::load_factor | | | | | | unordered_multiset::max_load_factor | | | | | | unordered_multiset::rehash | | | | | | unordered_multiset::reserve | | | | | | Observers | | | | | | unordered_multiset::hash_function | | | | | | unordered_multiset::key_eq | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_multiset) | | | | | | erase_if(std::unordered_multiset)(C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<unordered_set>` |  |  |
| template<  class Key,      class Hash = std::hash<Key>,      class KeyEqual = std::equal_to<Key>,      class Allocator = std::allocator<Key> > class unordered_multiset; | (1) | (since C++11) |
| namespace pmr {  template<          class Key,          class Hash = std::hash<Key>,          class Pred = std::equal_to<Key>      > using unordered_multiset = std::unordered_multiset<Key, Hash, Pred,                                       std::pmr::polymorphic_allocator<Key>>; } | (2) | (since C++17) |
|  |  |  |

`std::unordered_multiset` is an associative container that contains set of possibly non-unique objects of type Key. Search, insertion, and removal have average constant-time complexity.

Internally, the elements are not sorted in any particular order, but organized into buckets. Which bucket an element is placed into depends entirely on the hash of its value. This allows fast access to individual elements, since once hash is computed, it refers to the exact bucket the element is placed into.

The iteration order of this container is not required to be stable (so, for example, std::equal cannot be used to compare two `std::unordered_multiset`s), except that every group of elements whose keys compare **equivalent** (compare equal with key_eq() as the comparator) forms a contiguous subrange in the iteration order, also accessible with equal_range().

`std::unordered_multiset` meets the requirements of Container, AllocatorAwareContainer, UnorderedAssociativeContainer.

### Template parameters

|  |  |
| --- | --- |
|  | This section is incomplete Reason: Add descriptions of the template parameters. |

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `key_type` | `Key` |
| `value_type` | `Key` |
| `size_type` | Unsigned integer type (usually std::size_t) |
| `difference_type` | Signed integer type (usually std::ptrdiff_t) |
| `hasher` | `Hash` |
| `key_equal` | `KeyEqual` |
| `allocator_type` | `Allocator` |
| `reference` | value_type& |
| `const_reference` | const value_type& |
| `pointer` | std::allocator_traits<Allocator>::pointer |
| `const_pointer` | std::allocator_traits<Allocator>::const_pointer |
| `iterator` | Constant LegacyForwardIterator to `value_type` |
| `const_iterator` | LegacyForwardIterator to const value_type |
| `local_iterator` | An iterator type whose category, value, difference, pointer and reference types are the same as `iterator`. This iterator can be used to iterate through a single bucket but not across buckets |
| `const_local_iterator` | An iterator type whose category, value, difference, pointer and reference types are the same as `const_iterator`. This iterator can be used to iterate through a single bucket but not across buckets |
| `node_type` (since C++17) | a specialization of node handle representing a container node |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs the `unordered_multiset`   (public member function) |
| (destructor) | destructs the `unordered_multiset`   (public member function) |
| operator= | assigns values to the container   (public member function) |
| get_allocator | returns the associated allocator   (public member function) |
| Iterators | |
| begincbegin | returns an iterator to the beginning   (public member function) |
| endcend | returns an iterator to the end   (public member function) |
| Capacity | |
| empty | checks whether the container is empty   (public member function) |
| size | returns the number of elements   (public member function) |
| max_size | returns the maximum possible number of elements   (public member function) |
| Modifiers | |
| clear | clears the contents   (public member function) |
| insert | inserts elements or nodes(since C++17)   (public member function) |
| insert_range(C++23) | inserts a range of elements   (public member function) |
| emplace | constructs element in-place   (public member function) |
| emplace_hint | constructs elements in-place using a hint   (public member function) |
| erase | erases elements   (public member function) |
| swap | swaps the contents   (public member function) |
| extract(C++17) | extracts nodes from the container   (public member function) |
| merge(C++17) | splices nodes from another container   (public member function) |
| Lookup | |
| count | returns the number of elements matching specific key   (public member function) |
| find | finds element with specific key   (public member function) |
| contains(C++20) | checks if the container contains element with specific key   (public member function) |
| equal_range | returns range of elements matching a specific key   (public member function) |
| Bucket interface | |
| begin(size_type)cbegin(size_type) | returns an iterator to the beginning of the specified bucket   (public member function) |
| end(size_type)cend(size_type) | returns an iterator to the end of the specified bucket   (public member function) |
| bucket_count | returns the number of buckets   (public member function) |
| max_bucket_count | returns the maximum number of buckets   (public member function) |
| bucket_size | returns the number of elements in specific bucket   (public member function) |
| bucket | returns the bucket for specific key   (public member function) |
| Hash policy | |
| load_factor | returns average number of elements per bucket   (public member function) |
| max_load_factor | manages maximum average number of elements per bucket   (public member function) |
| rehash | reserves at least the specified number of buckets and regenerates the hash table   (public member function) |
| reserve | reserves space for at least the specified number of elements and regenerates the hash table   (public member function) |
| Observers | |
| hash_function | returns function used to hash the keys   (public member function) |
| key_eq | returns the function used to compare keys for equality   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=(C++11)(C++11)(removed in C++20) | compares the values in the unordered_multiset   (function template) |
| std::swap(std::unordered_multiset)(C++11) | specializes the std::swap algorithm   (function template) |
| erase_if(std::unordered_multiset)(C++20) | erases all elements satisfying specific criteria   (function template) |

|  |  |
| --- | --- |
| Deduction guides | (since C++17) |

### Notes

The member types `iterator` and `const_iterator` may be aliases to the same type. This means defining a pair of function overloads using the two types as parameter types may violate the One Definition Rule. Since `iterator` is convertible to `const_iterator`, a single function with a `const_iterator` as parameter type will work instead.

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
| LWG 2050 | C++11 | the definitions of `reference`, `const_reference`, `pointer` and `const_pointer` were based on `allocator_type` | based on `value_type` and std::allocator_traits |

### See also

|  |  |
| --- | --- |
| unordered_set(C++11) | collection of unique keys, hashed by keys   (class template) |
| multiset | collection of keys, sorted by keys   (class template) |
| flat_multiset(C++23) | adapts a container to provide a collection of keys, sorted by keys   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_multiset&oldid=177450>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 November 2024, at 15:45.