# operator==,!=(std::unordered_map)

From cppreference.com
< cpp‎ | container‎ | unordered map
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

std::unordered_map

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_map::unordered_map | | | | | | unordered_map::~unordered_map | | | | | | unordered_map::operator= | | | | | | unordered_map::get_allocator | | | | | | Iterators | | | | | | unordered_map::beginunordered_map::cbegin | | | | | | unordered_map::endunordered_map::cend | | | | | | Capacity | | | | | | unordered_map::size | | | | | | unordered_map::max_size | | | | | | unordered_map::empty | | | | | | Modifiers | | | | | | unordered_map::clear | | | | | | unordered_map::erase | | | | | | unordered_map::swap | | | | | | unordered_map::extract(C++17) | | | | | | unordered_map::merge(C++17) | | | | | | unordered_map::insert | | | | | | unordered_map::insert_range(C++23) | | | | | | unordered_map::insert_or_assign(C++17) | | | | | | unordered_map::emplace | | | | | | unordered_map::emplace_hint | | | | | | unordered_map::try_emplace(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_map::at | | | | | | [unordered_map::operator[]](operator_at.html "cpp/container/unordered map/operator at") | | | | | | unordered_map::count | | | | | | unordered_map::find | | | | | | unordered_map::contains(C++20) | | | | | | unordered_map::equal_range | | | | | | Bucket interface | | | | | | unordered_map::begin(size_type)unordered_map::cbegin(size_type) | | | | | | unordered_map::end(size_type)unordered_map::cend(size_type) | | | | | | unordered_map::bucket_count | | | | | | unordered_map::max_bucket_count | | | | | | unordered_map::bucket_size | | | | | | unordered_map::bucket | | | | | | Hash policy | | | | | | unordered_map::load_factor | | | | | | unordered_map::max_load_factor | | | | | | unordered_map::rehash | | | | | | unordered_map::reserve | | | | | | Observers | | | | | | unordered_map::hash_function | | | | | | unordered_map::key_eq | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****operator==operator!=****(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_map) | | | | | | erase_if(std::unordered_map)(C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class Key, class T, class Hash, class KeyEqual, class Alloc >  bool operator==( const std::unordered_map<Key, T, Hash, KeyEqual, Alloc>& lhs, const std::unordered_map<Key, T, Hash, KeyEqual, Alloc>& rhs ); | (1) |  |
| template< class Key, class T, class Hash, class KeyEqual, class Alloc >  bool operator!=( const std::unordered_map<Key, T, Hash, KeyEqual, Alloc>& lhs, const std::unordered_map<Key, T, Hash, KeyEqual, Alloc>& rhs ); | (2) | (until C++20) |
|  |  |  |

Compares the contents of two unordered containers.

The contents of two unordered containers lhs and rhs are equal if the following conditions hold:

- lhs.size() == rhs.size().
- each group of equivalent elements ``lhs_eq1`,`lhs_eq2`)` obtained from lhs.equal_range(lhs_eq1) has a corresponding group of equivalent elements in the other container `[`rhs_eq1`,`rhs_eq2`)` obtained from rhs.equal_range(rhs_eq1), that has the following properties:

:   - [std::distance(lhs_eq1, lhs_eq2) == std::distance(rhs_eq1, rhs_eq2).
    - std::is_permutation(lhs_eq1, lhs_eq2, rhs_eq1) == true.

The behavior is undefined if `Key` or `T` are not EqualityComparable.

The behavior is also undefined if `hash_function()` and `key_eq()` do(until C++20)`key_eq()` does(since C++20) not have the same behavior on lhs and rhs or if operator== for `Key` is not a refinement of the partition into equivalent-key groups introduced by `key_eq()` (that is, if two elements that compare equal using operator== fall into different partitions).

|  |  |
| --- | --- |
| The `!=` operator is synthesized from `operator==`. | (since C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | unordered containers to compare |

### Return value

1) true if the contents of the containers are equal, false otherwise.2) true if the contents of the containers are not equal, false otherwise.

### Complexity

Proportional to **N** calls to operator== on `value_type`, calls to the predicate returned by `key_eq`, and calls to the hasher returned by `hash_function`, in the average case, proportional to **N2** in the worst case where **N** is the size of the container.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_map/operator_cmp&oldid=136049>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2021, at 08:14.