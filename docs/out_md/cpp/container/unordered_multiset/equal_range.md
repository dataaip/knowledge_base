# std::unordered_multiset<Key,Hash,KeyEqual,Allocator>::equal_range

From cppreference.com
< cpp‎ | container‎ | unordered multiset
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

`std::unordered_multiset`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_multiset::unordered_multiset | | | | | | unordered_multiset::~unordered_multiset | | | | | | unordered_multiset::operator= | | | | | | unordered_multiset::get_allocator | | | | | | Iterators | | | | | | unordered_multiset::beginunordered_multiset::cbegin | | | | | | unordered_multiset::endunordered_multiset::cend | | | | | | Capacity | | | | | | unordered_multiset::size | | | | | | unordered_multiset::max_size | | | | | | unordered_multiset::empty | | | | | | Modifiers | | | | | | unordered_multiset::clear | | | | | | unordered_multiset::insert | | | | | | unordered_multiset::insert_range(C++23) | | | | | | unordered_multiset::emplace | | | | | | unordered_multiset::emplace_hint | | | | | | unordered_multiset::erase | | | | | | unordered_multiset::swap | | | | | | unordered_multiset::extract(C++17) | | | | | | unordered_multiset::merge(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_multiset::count | | | | | | unordered_multiset::find | | | | | | unordered_multiset::contains(C++20) | | | | | | ****unordered_multiset::equal_range**** | | | | | | Bucket interface | | | | | | unordered_multiset::begin(size_type)unordered_multiset::cbegin(size_type) | | | | | | unordered_multiset::end(size_type)unordered_multiset::cend(size_type) | | | | | | unordered_multiset::bucket_count | | | | | | unordered_multiset::max_bucket_count | | | | | | unordered_multiset::bucket_size | | | | | | unordered_multiset::bucket | | | | | | Hash policy | | | | | | unordered_multiset::load_factor | | | | | | unordered_multiset::max_load_factor | | | | | | unordered_multiset::rehash | | | | | | unordered_multiset::reserve | | | | | | Observers | | | | | | unordered_multiset::hash_function | | | | | | unordered_multiset::key_eq | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_multiset) | | | | | | erase_if(std::unordered_multiset)(C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| std::pair<iterator, iterator> equal_range( const Key& key ); | (1) | (since C++11) |
| std::pair<const_iterator, const_iterator> equal_range( const Key& key ) const; | (2) | (since C++11) |
| template< class K >  std::pair<iterator, iterator> equal_range( const K& x ); | (3) | (since C++20) |
| template< class K >  std::pair<const_iterator, const_iterator> equal_range( const K& x ) const; | (4) | (since C++20) |
|  |  |  |

1,2) Returns a range containing all elements with key key in the container. The range is defined by two iterators, the first pointing to the first element of the wanted range and the second pointing past the last element of the range.3,4) Returns a range containing all elements in the container with key equivalent to x. This overload participates in overload resolution only if Hash::is_transparent and KeyEqual::is_transparent are valid and each denotes a type. This assumes that such `Hash` is callable with both `K` and `Key` type, and that the `KeyEqual` is transparent, which, together, allows calling this function without constructing an instance of `Key`.

### Parameters

|  |  |  |
| --- | --- | --- |
| key | - | key value to compare the elements to |
| x | - | a value of any type that can be transparently compared with a key |

### Return value

std::pair containing a pair of iterators defining the wanted range. If there are no such elements, past-the-end (see end()) iterators are returned as both elements of the pair.

### Complexity

Average case linear in the number of elements with the key key, worst case linear in the size of the container.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_generic_unordered_lookup` | `201811L` | (C++20) | Heterogeneous comparison lookup in unordered associative containers, overloads (3,4) |

### Example

Estimates the characters frequency for given string.

Run this code

```
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_set>
 
int main()
{
    std::string sentence{"cppreference.com"};
    std::cout << "The sentence: " << sentence << '\n';
 
    std::unordered_multiset<char> sequence;
    for (char x : sentence)
        sequence.insert(x);
 
    std::cout << "The sequence: { ";
    for (char x : sequence)
        std::cout << x << ' ';
 
    std::cout << "}\n" "Symbol:Frequency: ";
    for (auto it = sequence.begin(); it != sequence.end();)
    {
        if (auto [first, last] = sequence.equal_range(*it); first != last)
        {
            std::cout << *first << ":" << std::distance(first, last) << "  ";
            it = last;
        }
        else
            ++it;
    }
}

```

Possible output:

```
The sentence: cppreference.com
The sequence: { m o c c c p p r r e e e e f n . }
Symbol:Frequency: m:1  o:1  c:3  p:2  r:2  e:4  f:1  n:1  .:1

```

### See also

|  |  |
| --- | --- |
| find | finds element with specific key   (public member function) |
| contains(C++20) | checks if the container contains element with specific key   (public member function) |
| count | returns the number of elements matching specific key   (public member function) |
| equal_range | returns range of elements matching a specific key   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_multiset/equal_range&oldid=136016>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2021, at 07:39.