# std::unordered_map

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
| ****unordered_map****(C++11) | | | | |
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

****std::unordered_map****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_map::unordered_map | | | | | | unordered_map::~unordered_map | | | | | | unordered_map::operator= | | | | | | unordered_map::get_allocator | | | | | | Iterators | | | | | | unordered_map::beginunordered_map::cbegin | | | | | | unordered_map::endunordered_map::cend | | | | | | Capacity | | | | | | unordered_map::size | | | | | | unordered_map::max_size | | | | | | unordered_map::empty | | | | | | Modifiers | | | | | | unordered_map::clear | | | | | | unordered_map::erase | | | | | | unordered_map::swap | | | | | | unordered_map::extract(C++17) | | | | | | unordered_map::merge(C++17) | | | | | | unordered_map::insert | | | | | | unordered_map::insert_range(C++23) | | | | | | unordered_map::insert_or_assign(C++17) | | | | | | unordered_map::emplace | | | | | | unordered_map::emplace_hint | | | | | | unordered_map::try_emplace(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_map::at | | | | | | [unordered_map::operator[]](unordered_map/operator_at.html "cpp/container/unordered map/operator at") | | | | | | unordered_map::count | | | | | | unordered_map::find | | | | | | unordered_map::contains(C++20) | | | | | | unordered_map::equal_range | | | | | | Bucket interface | | | | | | unordered_map::begin(size_type)unordered_map::cbegin(size_type) | | | | | | unordered_map::end(size_type)unordered_map::cend(size_type) | | | | | | unordered_map::bucket_count | | | | | | unordered_map::max_bucket_count | | | | | | unordered_map::bucket_size | | | | | | unordered_map::bucket | | | | | | Hash policy | | | | | | unordered_map::load_factor | | | | | | unordered_map::max_load_factor | | | | | | unordered_map::rehash | | | | | | unordered_map::reserve | | | | | | Observers | | | | | | unordered_map::hash_function | | | | | | unordered_map::key_eq | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_map) | | | | | | erase_if(std::unordered_map)(C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<unordered_map>` |  |  |
| template<  class Key,      class T,      class Hash = std::hash<Key>,      class KeyEqual = std::equal_to<Key>,      class Allocator = std::allocator<std::pair<const Key, T>> > class unordered_map; | (1) | (since C++11) |
| namespace pmr {  template<          class Key,          class T,          class Hash = std::hash<Key>,          class KeyEqual = std::equal_to<Key>      > using unordered_map =            std::unordered_map<Key, T, Hash, KeyEqual,                std::pmr::polymorphic_allocator<std::pair<const Key, T>>>; } | (2) | (since C++17) |
|  |  |  |

`std::unordered_map` is an associative container that contains key-value pairs with unique keys. Search, insertion, and removal of elements have average constant-time complexity.

Internally, the elements are not sorted in any particular order, but organized into buckets. Which bucket an element is placed into depends entirely on the hash of its key. Keys with the same hash code appear in the same bucket. This allows fast access to individual elements, since once the hash is computed, it refers to the exact bucket the element is placed into.

Two keys are considered **equivalent** if the map's key equality predicate returns true when passed those keys. If two keys are equivalent, the hash function must return the same value for both keys.

`std::unordered_map` meets the requirements of Container, AllocatorAwareContainer, UnorderedAssociativeContainer.

### Iterator invalidation

| Operations | Invalidated |
| --- | --- |
| All read only operations, swap, std::swap | Never |
| clear, rehash, reserve, operator= | Always |
| insert, emplace, emplace_hint, [operator[]](unordered_map/operator_at.html "cpp/container/unordered map/operator at") | Only if causes rehash |
| erase | Only to the element erased |

#### Notes

- The swap functions do not invalidate any of the iterators inside the container, but they do invalidate the iterator marking the end of the swap region.

- References and pointers to either key or data stored in the container are only invalidated by erasing that element, even when the corresponding iterator is invalidated.

### Template parameters

|  |  |
| --- | --- |
|  | This section is incomplete Reason: Add descriptions of the template parameters. |

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `key_type` | `Key` |
| `mapped_type` | `T` |
| `value_type` | std::pair<const Key, T> |
| `size_type` | Unsigned integer type (usually std::size_t) |
| `difference_type` | Signed integer type (usually std::ptrdiff_t) |
| `hasher` | `Hash` |
| `key_equal` | `KeyEqual` |
| `allocator_type` | `Allocator` |
| `reference` | value_type& |
| `const_reference` | const value_type& |
| `pointer` | std::allocator_traits<Allocator>::pointer |
| `const_pointer` | std::allocator_traits<Allocator>::const_pointer |
| `iterator` | LegacyForwardIterator to `value_type` |
| `const_iterator` | LegacyForwardIterator to const value_type |
| `local_iterator` | An iterator type whose category, value, difference, pointer and reference types are the same as `iterator`. This iterator can be used to iterate through a single bucket but not across buckets |
| `const_local_iterator` | An iterator type whose category, value, difference, pointer and reference types are the same as `const_iterator`. This iterator can be used to iterate through a single bucket but not across buckets |
| `node_type` (since C++17) | a specialization of node handle representing a container node |
| `insert_return_type` (since C++17) | type describing the result of inserting a `node_type`, a specialization of  template<class Iter, class NodeType>  struct /\*unspecified\*/  {      Iter     position;      bool     inserted;      NodeType node;  };  instantiated with template arguments `iterator` and `node_type`. |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs the `unordered_map`   (public member function) |
| (destructor) | destructs the `unordered_map`   (public member function) |
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
| insert_or_assign(C++17) | inserts an element or assigns to the current element if the key already exists   (public member function) |
| emplace | constructs element in-place   (public member function) |
| emplace_hint | constructs elements in-place using a hint   (public member function) |
| try_emplace(C++17) | inserts in-place if the key does not exist, does nothing if the key exists   (public member function) |
| erase | erases elements   (public member function) |
| swap | swaps the contents   (public member function) |
| extract(C++17) | extracts nodes from the container   (public member function) |
| merge(C++17) | splices nodes from another container   (public member function) |
| Lookup | |
| at | access specified element with bounds checking   (public member function) |
| [operator[]](unordered_map/operator_at.html "cpp/container/unordered map/operator at") | access or insert specified element   (public member function) |
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
| operator==operator!=(C++11)(C++11)(removed in C++20) | compares the values in the unordered_map   (function template) |
| std::swap(std::unordered_map)(C++11) | specializes the std::swap algorithm   (function template) |
| erase_if(std::unordered_map)(C++20) | erases all elements satisfying specific criteria   (function template) |

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
#include <iostream>
#include <string>
#include <unordered_map>
 
int main()
{
    // Create an unordered_map of three strings (that map to strings)
    std::unordered_map<std::string, std::string> u =
    {
        {"RED", "#FF0000"},
        {"GREEN", "#00FF00"},
        {"BLUE", "#0000FF"}
    };
 
    // Helper lambda function to print key-value pairs
    auto print_key_value = [](const auto& key, const auto& value)
    {
        std::cout << "Key:[" << key << "] Value:[" << value << "]\n";
    };
 
    std::cout << "Iterate and print key-value pairs of unordered_map, being\n"
                 "explicit with their types:\n";
    for (const std::pair<const std::string, std::string>& n : u)
        print_key_value(n.first, n.second);
 
    std::cout << "\nIterate and print key-value pairs using C++17 structured binding:\n";
    for (const auto& [key, value] : u)
        print_key_value(key, value);
 
    // Add two new entries to the unordered_map
    u["BLACK"] = "#000000";
    u["WHITE"] = "#FFFFFF";
 
    std::cout << "\nOutput values by key:\n"
                 "The HEX of color RED is:[" << u["RED"] << "]\n"
                 "The HEX of color BLACK is:[" << u["BLACK"] << "]\n\n";
 
    std::cout << "Use operator[] with non-existent key to insert a new key-value pair:\n";
    print_key_value("new_key", u["new_key"]);
 
    std::cout << "\nIterate and print key-value pairs, using `auto`;\n"
                 "new_key is now one of the keys in the map:\n";
    for (const auto& n : u)
        print_key_value(n.first, n.second);
}

```

Possible output:

```
Iterate and print key-value pairs of unordered_map, being
explicit with their types:
Key:[BLUE] Value:[#0000FF]
Key:[GREEN] Value:[#00FF00]
Key:[RED] Value:[#FF0000]
 
Iterate and print key-value pairs using C++17 structured binding:
Key:[BLUE] Value:[#0000FF]
Key:[GREEN] Value:[#00FF00]
Key:[RED] Value:[#FF0000]
 
Output values by key:
The HEX of color RED is:[#FF0000]
The HEX of color BLACK is:[#000000]
 
Use operator[] with non-existent key to insert a new key-value pair:
Key:[new_key] Value:[]
 
Iterate and print key-value pairs, using `auto`;
new_key is now one of the keys in the map:
Key:[new_key] Value:[]
Key:[WHITE] Value:[#FFFFFF]
Key:[BLACK] Value:[#000000]
Key:[BLUE] Value:[#0000FF]
Key:[GREEN] Value:[#00FF00]
Key:[RED] Value:[#FF0000]

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2050 | C++11 | the definitions of `reference`, `const_reference`, `pointer` and `const_pointer` were based on `allocator_type` | based on `value_type` and std::allocator_traits |

### See also

|  |  |
| --- | --- |
| unordered_multimap(C++11) | collection of key-value pairs, hashed by keys   (class template) |
| map | collection of key-value pairs, sorted by keys, keys are unique   (class template) |
| flat_map(C++23) | adapts two containers to provide a collection of key-value pairs, sorted by unique keys   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_map&oldid=177451>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 November 2024, at 15:45.