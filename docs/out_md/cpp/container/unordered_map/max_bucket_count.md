# std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::max_bucket_count

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_map::unordered_map | | | | | | unordered_map::~unordered_map | | | | | | unordered_map::operator= | | | | | | unordered_map::get_allocator | | | | | | Iterators | | | | | | unordered_map::beginunordered_map::cbegin | | | | | | unordered_map::endunordered_map::cend | | | | | | Capacity | | | | | | unordered_map::size | | | | | | unordered_map::max_size | | | | | | unordered_map::empty | | | | | | Modifiers | | | | | | unordered_map::clear | | | | | | unordered_map::erase | | | | | | unordered_map::swap | | | | | | unordered_map::extract(C++17) | | | | | | unordered_map::merge(C++17) | | | | | | unordered_map::insert | | | | | | unordered_map::insert_range(C++23) | | | | | | unordered_map::insert_or_assign(C++17) | | | | | | unordered_map::emplace | | | | | | unordered_map::emplace_hint | | | | | | unordered_map::try_emplace(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_map::at | | | | | | [unordered_map::operator[]](operator_at.html "cpp/container/unordered map/operator at") | | | | | | unordered_map::count | | | | | | unordered_map::find | | | | | | unordered_map::contains(C++20) | | | | | | unordered_map::equal_range | | | | | | Bucket interface | | | | | | unordered_map::begin(size_type)unordered_map::cbegin(size_type) | | | | | | unordered_map::end(size_type)unordered_map::cend(size_type) | | | | | | unordered_map::bucket_count | | | | | | ****unordered_map::max_bucket_count**** | | | | | | unordered_map::bucket_size | | | | | | unordered_map::bucket | | | | | | Hash policy | | | | | | unordered_map::load_factor | | | | | | unordered_map::max_load_factor | | | | | | unordered_map::rehash | | | | | | unordered_map::reserve | | | | | | Observers | | | | | | unordered_map::hash_function | | | | | | unordered_map::key_eq | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_map) | | | | | | erase_if(std::unordered_map)(C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| size_type max_bucket_count() const; |  | (since C++11) |
|  |  |  |

Returns the maximum number of buckets the container is able to hold due to system or library implementation limitations.

### Parameters

(none)

### Return value

Maximum number of buckets.

### Complexity

Constant.

### Example

Run this code

```
#include <iostream>
#include <unordered_map>
 
int main()
{
    struct Ha { std::size_t operator()(long x) const { return std::hash<long>{}(x); }; };
 
    auto c1 = std::unordered_map<char, long>{};
    auto c2 = std::unordered_map<long, long>{};
    auto c3 = std::unordered_map<long, long, std::hash<int>>{};
    auto c4 = std::unordered_map<long, long, Ha>{};
 
    std::cout
        << "Max bucket count of\n" << std::hex << std::showbase
        << "c1: " << c1.max_bucket_count() << '\n'
        << "c2: " << c2.max_bucket_count() << '\n'
        << "c3: " << c3.max_bucket_count() << '\n'
        << "c4: " << c4.max_bucket_count() << '\n'
        ;
}

```

Possible output:

```
Max bucket count of
c1: 0xfffffffffffffff
c2: 0xfffffffffffffff
c3: 0xfffffffffffffff
c4: 0xaaaaaaaaaaaaaaa

```

### See also

|  |  |
| --- | --- |
| bucket_count | returns the number of buckets   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_map/max_bucket_count&oldid=136045>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2021, at 08:12.