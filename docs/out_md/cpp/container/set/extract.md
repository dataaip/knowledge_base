# std::set<Key,Compare,Allocator>::extract

From cppreference.com
< cpp‎ | container‎ | set
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

std::set

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set::set | | | | | | set::~set | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set::operator= | | | | | | set::get_allocator | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterators | | | | | | set::beginset::cbegin(C++11) | | | | | | set::endset::cend(C++11) | | | | | | set::rbeginset::crbegin(C++11) | | | | | | set::rendset::crend(C++11) | | | | | | Capacity | | | | | | set::size | | | | | | set::max_size | | | | | | set::empty | | | | | | Observers | | | | | | set::key_comp | | | | | | set::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | set::clear | | | | | | set::erase | | | | | | set::swap | | | | | | ****set::extract****(C++17) | | | | | | set::merge(C++17) | | | | | | set::insert | | | | | | set::insert_range(C++23) | | | | | | set::emplace(C++11) | | | | | | set::emplace_hint(C++11) | | | | | | Lookup | | | | | | set::count | | | | | | set::find | | | | | | set::contains(C++20) | | | | | | set::equal_range | | | | | | set::lower_bound | | | | | | set::upper_bound | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | std::swap(std::set) | | | | | | erase_if(std::set)(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| node_type extract( const_iterator position ); | (1) | (since C++17) |
| node_type extract( const Key& k ); | (2) | (since C++17) |
| template< class K >  node_type extract( K&& x ); | (3) | (since C++23) |
|  |  |  |

1) Unlinks the node that contains the element pointed to by position and returns a node handle that owns it.2) If the container has an element with key equivalent to k, unlinks the node that contains that element from the container and returns a node handle that owns it. Otherwise, returns an empty node handle.3) Same as (2). This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type, and neither `iterator` nor `const_iterator` is implicitly convertible from `K`. It allows calling this function without constructing an instance of `Key`.

In either case, no elements are copied or moved, only the internal pointers of the container nodes are repointed (rebalancing may occur, as with erase()).

Extracting a node invalidates only the iterators to the extracted element. Pointers and references to the extracted element remain valid, but cannot be used while element is owned by a node handle: they become usable if the element is inserted into a container.

### Parameters

|  |  |  |
| --- | --- | --- |
| position | - | a valid iterator into this container |
| k | - | a key to identify the node to be extracted |
| x | - | a value of any type that can be transparently compared with a key identifying the node to be extracted |

### Return value

A node handle that owns the extracted element, or empty node handle in case the element is not found in (2,3).

### Exceptions

1) Throws nothing.2,3) Any exceptions thrown by the `Compare` object.

### Complexity

1) Amortized constant.2,3) log(size())

### Notes

extract is the only way to take a move-only object out of a set:

```
std::set<move_only_type> s;
s.emplace(...);
move_only_type mot = std::move(s.extract(s.begin()).value());

```

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_associative_heterogeneous_erasure` | `202110L` | (C++23) | Heterogeneous erasure in associative containers and unordered associative containers, (3) |

### Example

Run this code

```
#include <algorithm>
#include <iostream>
#include <string_view>
#include <set>
 
void print(std::string_view comment, const auto& data)
{
    std::cout << comment;
    for (auto datum : data)
        std::cout << ' ' << datum;
 
    std::cout << '\n';
}
 
int main()
{
    std::set<int> cont{1, 2, 3};
 
    print("Start:", cont);
 
    // Extract node handle and change key
    auto nh = cont.extract(1);
    nh.value() = 4;
 
    print("After extract and before insert:", cont);
 
    // Insert node handle back
    cont.insert(std::move(nh));
 
    print("End:", cont);
}

```

Output:

```
Start: 1 2 3
After extract and before insert: 2 3
End: 2 3 4

```

### See also

|  |  |
| --- | --- |
| merge(C++17) | splices nodes from another container   (public member function) |
| insert | inserts elements or nodes(since C++17)   (public member function) |
| erase | erases elements   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/set/extract&oldid=134482>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 October 2021, at 00:46.