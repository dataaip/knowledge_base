# std::map<Key,T,Compare,Allocator>::insert_or_assign

From cppreference.com
< cpp‎ | container‎ | map
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

`std::map`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | map::map | | | | | | map::~map | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | map::operator= | | | | | | map::get_allocator | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Element access | | | | | | map::at | | | | | | [map::operator[]](operator_at.html "cpp/container/map/operator at") | | | | | | Iterators | | | | | | map::beginmap::cbegin(C++11) | | | | | | map::endmap::cend(C++11) | | | | | | map::rbeginmap::crbegin(C++11) | | | | | | map::rendmap::crend(C++11) | | | | | | Capacity | | | | | | map::size | | | | | | map::max_size | | | | | | map::empty | | | | | | Observers | | | | | | map::key_comp | | | | | | map::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | map::clear | | | | | | map::insert | | | | | | map::erase | | | | | | map::swap | | | | | | map::extract(C++17) | | | | | | map::merge(C++17) | | | | | | map::insert_range(C++23) | | | | | | ****map::insert_or_assign****(C++17) | | | | | | map::emplace(C++11) | | | | | | map::emplace_hint(C++11) | | | | | | map::try_emplace(C++17) | | | | | | Lookup | | | | | | map::count | | | | | | map::find | | | | | | map::contains(C++20) | | | | | | map::equal_range | | | | | | map::lower_bound | | | | | | map::upper_bound | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | std::swap(std::map) | | | | | | erase_if(std::map)(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class M >  std::pair<iterator, bool> insert_or_assign( const Key& k, M&& obj ); | (1) | (since C++17) |
| template< class M >  std::pair<iterator, bool> insert_or_assign( Key&& k, M&& obj ); | (2) | (since C++17) |
| template< class K, class M >  std::pair<iterator, bool> insert_or_assign( K&& k, M&& obj ); | (3) | (since C++26) |
| template< class M >  iterator insert_or_assign( const_iterator hint, const Key& k, M&& obj ); | (4) | (since C++17) |
| template< class M >  iterator insert_or_assign( const_iterator hint, Key&& k, M&& obj ); | (5) | (since C++17) |
| template< class K, class M >  iterator insert_or_assign( const_iterator hint, K&& k, M&& obj ); | (6) | (since C++26) |
|  |  |  |

1,4) If a key equivalent to k already exists in the container, assigns std::forward<M>(obj) to the `mapped_type` corresponding to the key k. If the key does not exist, inserts the new value as if by `insert`, constructing it from value_type(k, std::forward<M>(obj)).2,5) Same as (1,4), except the mapped value is constructed from value_type(std::move(k), std::forward<M>(obj)).3,6) If a key equivalent to k already exists in the container, assigns std::forward<M>(obj) to the `mapped_type` corresponding to the key k. If the key does not exist, constructs an object `u` of `value_type` with std::forward<K>(k), std::forward<M>(obj)), then inserts `u` into \*this. If equal_range(u.first) == equal_range(k) is false, the behavior is undefined. The `value_type` must be EmplaceConstructible into `map` from std::forward<K>(k), std::forward<M>(obj). This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type. It allows calling this function without constructing an instance of `Key`.

The behavior is undefined(until C++20)The program is ill-formed(since C++20) if std::is_assignable_v<mapped_type&, M&&> is false.

No iterators or references are invalidated.

### Parameters

|  |  |  |
| --- | --- | --- |
| k | - | the key used both to look up and to insert if not found |
| hint | - | iterator to the position before which the new element will be inserted |
| obj | - | the value to insert or assign |

### Return value

1-3) The bool component is true if the insertion took place and false if the assignment took place. The iterator component is pointing at the element that was inserted or updated.4-6) Iterator pointing at the element that was inserted or updated.

### Complexity

1-3) Same as for `emplace`.4-6) Same as for `emplace_hint`.

### Notes

`insert_or_assign` returns more information than `operator`[] and does not require default-constructibility of the mapped type.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_map_try_emplace` | `201411L` | (C++17) | std::map::try_emplace, `std::map::insert_or_assign` |
| `__cpp_lib_associative_heterogeneous_insertion` | `202311L` | (C++26) | Heterogeneous overloads for the remaining member functions in ordered and unordered associative containers. Overloads (3) and (6). |

### Example

Run this code

```
#include <iostream>
#include <string>
#include <map>
 
void print_node(const auto& node)
{
    std::cout << '[' << node.first << "] = " << node.second << '\n';
}
 
void print_result(auto const& pair)
{
    std::cout << (pair.second ? "inserted: " : "assigned: ");
    print_node(*pair.first);
}
 
int main()
{
    std::map<std::string, std::string> myMap;
 
    print_result(myMap.insert_or_assign("a", "apple"));
    print_result(myMap.insert_or_assign("b", "banana"));
    print_result(myMap.insert_or_assign("c", "cherry"));
    print_result(myMap.insert_or_assign("c", "clementine"));
 
    for (const auto& node : myMap)
        print_node(node);
}

```

Output:

```
inserted: [a] = apple
inserted: [b] = banana
inserted: [c] = cherry
assigned: [c] = clementine
[a] = apple
[b] = banana
[c] = clementine

```

### See also

|  |  |
| --- | --- |
| [operator[]](operator_at.html "cpp/container/map/operator at") | access or insert specified element   (public member function) |
| at | access specified element with bounds checking   (public member function) |
| insert | inserts elements or nodes(since C++17)   (public member function) |
| emplace(C++11) | constructs element in-place   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/map/insert_or_assign&oldid=134930>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 October 2021, at 12:32.