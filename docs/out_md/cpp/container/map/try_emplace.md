# std::map<Key,T,Compare,Allocator>::try_emplace

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
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Element access | | | | | | map::at | | | | | | [map::operator[]](operator_at.html "cpp/container/map/operator at") | | | | | | Iterators | | | | | | map::beginmap::cbegin(C++11) | | | | | | map::endmap::cend(C++11) | | | | | | map::rbeginmap::crbegin(C++11) | | | | | | map::rendmap::crend(C++11) | | | | | | Capacity | | | | | | map::size | | | | | | map::max_size | | | | | | map::empty | | | | | | Observers | | | | | | map::key_comp | | | | | | map::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | map::clear | | | | | | map::insert | | | | | | map::erase | | | | | | map::swap | | | | | | map::extract(C++17) | | | | | | map::merge(C++17) | | | | | | map::insert_range(C++23) | | | | | | map::insert_or_assign(C++17) | | | | | | map::emplace(C++11) | | | | | | map::emplace_hint(C++11) | | | | | | ****map::try_emplace****(C++17) | | | | | | Lookup | | | | | | map::count | | | | | | map::find | | | | | | map::contains(C++20) | | | | | | map::equal_range | | | | | | map::lower_bound | | | | | | map::upper_bound | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | std::swap(std::map) | | | | | | erase_if(std::map)(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  std::pair<iterator, bool> try_emplace( const Key& k, Args&&... args ); | (1) | (since C++17) |
| template< class... Args >  std::pair<iterator, bool> try_emplace( Key&& k, Args&&... args ); | (2) | (since C++17) |
| template< class K, class... Args >  std::pair<iterator, bool> try_emplace( K&& k, Args&&... args ); | (3) | (since C++26) |
| template< class... Args >  iterator try_emplace( const_iterator hint, const Key& k, Args&&... args ); | (4) | (since C++17) |
| template< class... Args >  iterator try_emplace( const_iterator hint, Key&& k, Args&&... args ); | (5) | (since C++17) |
| template< class K, class... Args >  iterator try_emplace( const_iterator hint, K&& k, Args&&... args ); | (6) | (since C++26) |
|  |  |  |

If a key equivalent to k already exists in the container, does nothing. Otherwise, inserts a new element into the container with key k and value constructed with args. In such case:

1) Behaves like `emplace` except that the element is constructed as  
value_type(std::piecewise_construct,  

std::forward_as_tuple(k),

std::forward_as_tuple(std::forward<Args>(args)...))2) Behaves like `emplace` except that the element is constructed as  
value_type(std::piecewise_construct,  

std::forward_as_tuple(std::move(k)),

std::forward_as_tuple(std::forward<Args>(args)...))3) Behaves like `emplace` except that the element is constructed as  
value_type(std::piecewise_construct,  

std::forward_as_tuple(std::forward<K>(k)),

std::forward_as_tuple(std::forward<Args>(args)...))4) Behaves like `emplace_hint` except that the element is constructed as  
value_type(std::piecewise_construct,  

std::forward_as_tuple(k),

std::forward_as_tuple(std::forward<Args>(args)...))5) Behaves like `emplace_hint` except that the element is constructed as  
value_type(std::piecewise_construct,  

std::forward_as_tuple(std::move(k)),

std::forward_as_tuple(std::forward<Args>(args)...))6) Behaves like `emplace_hint` except that the element is constructed as  
value_type(std::piecewise_construct,  

std::forward_as_tuple(std::forward<K>(k)),

std::forward_as_tuple(std::forward<Args>(args)...))1-6) If `value_type` is not EmplaceConstructible into `map` from the corresponding expression, the behavior is undefined.3) This overload participates in overload resolution only if all following conditions are satisfied:

- std::is_convertible_v<K&&, const_iterator> and std::is_convertible_v<K&&, iterator> are both false.
- The qualified-id Compare::is_transparent is valid and denotes a type.
 If equal_range(u.first) == equal_range(k) is false, the behavior is undefined, where u is the new element to be inserted.6) This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type. If equal_range(u.first) == equal_range(k) is false, the behavior is undefined, where u is the new element to be inserted.

No iterators or references are invalidated.

### Parameters

|  |  |  |
| --- | --- | --- |
| k | - | the key used both to look up and to insert if not found |
| hint | - | iterator to the position before which the new element will be inserted |
| args | - | arguments to forward to the constructor of the element |

### Return value

1-3) Same as for `emplace`:  
A pair consisting of an iterator to the inserted element (or to the element that prevented the insertion) and a bool value set to true if and only if the insertion took place.4-6) Same as for `emplace_hint`:  
An iterator to the inserted element, or to the element that prevented the insertion.

### Complexity

1-3) Same as for `emplace`:  
Logarithmic in the size of the container.4-6) Same as for `emplace_hint`:  
Logarithmic in the size of the container in general, but amortized constant if the new element is inserted just before hint.

### Notes

Unlike `insert` or `emplace`, these functions do not move from rvalue arguments if the insertion does not happen, which makes it easy to manipulate maps whose values are move-only types, such as std::map<std::string, std::unique_ptr<foo>>. In addition, `try_emplace` treats the key and the arguments to the `mapped_type` separately, unlike `emplace`, which requires the arguments to construct a `value_type` (that is, a std::pair).

Overloads (3,6) can be called without constructing an object of type `Key`.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_map_try_emplace` | `201411L` | (C++17) | `std::map::try_emplace`, std::map::insert_or_assign |
| `__cpp_lib_associative_heterogeneous_insertion` | `202311L` | (C++26) | Heterogeneous overloads for the remaining member functions in ordered and unordered associative containers. Overloads (3) and (6). |

### Example

Run this code

```
#include <iostream>
#include <string>
#include <map>
#include <utility>
 
void print_node(const auto& node)
{
    std::cout << '[' << node.first << "] = " << node.second << '\n';
}
 
void print_result(auto const& pair)
{
    std::cout << (pair.second ? "inserted: " : "ignored:  ");
    print_node(*pair.first);
}
 
int main()
{
    using namespace std::literals;
    std::map<std::string, std::string> m;
 
    print_result(m.try_emplace("a", "a"s));
    print_result(m.try_emplace("b", "abcd"));
    print_result(m.try_emplace("c", 10, 'c'));
    print_result(m.try_emplace("c", "Won't be inserted"));
 
    for (const auto& p : m)
        print_node(p);
}

```

Output:

```
inserted: [a] = a
inserted: [b] = abcd
inserted: [c] = cccccccccc
ignored:  [c] = cccccccccc
[a] = a
[b] = abcd
[c] = cccccccccc

```

### See also

|  |  |
| --- | --- |
| emplace(C++11) | constructs element in-place   (public member function) |
| emplace_hint(C++11) | constructs elements in-place using a hint   (public member function) |
| insert | inserts elements or nodes(since C++17)   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/map/try_emplace&oldid=135736>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 November 2021, at 08:11.