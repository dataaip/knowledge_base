# std::unordered_set<Key,Hash,KeyEqual,Allocator>::find

From cppreference.com
< cpp‎ | container‎ | unordered set
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

`std::unordered_set`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_set::unordered_set | | | | | | unordered_set::~unordered_set | | | | | | unordered_set::operator= | | | | | | unordered_set::get_allocator | | | | | | Iterators | | | | | | unordered_set::beginunordered_set::cbegin | | | | | | unordered_set::endunordered_set::cend | | | | | | Capacity | | | | | | unordered_set::size | | | | | | unordered_set::max_size | | | | | | unordered_set::empty | | | | | | Modifiers | | | | | | unordered_set::clear | | | | | | unordered_set::erase | | | | | | unordered_set::swap | | | | | | unordered_set::extract(C++17) | | | | | | unordered_set::merge(C++17) | | | | | | unordered_set::insert | | | | | | unordered_set::insert_range(C++23) | | | | | | unordered_set::emplace | | | | | | unordered_set::emplace_hint | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_set::count | | | | | | ****unordered_set::find**** | | | | | | unordered_set::contains(C++20) | | | | | | unordered_set::equal_range | | | | | | Bucket interface | | | | | | unordered_set::begin(size_type)unordered_set::cbegin(size_type) | | | | | | unordered_set::end(size_type)unordered_set::cend(size_type) | | | | | | unordered_set::bucket_count | | | | | | unordered_set::max_bucket_count | | | | | | unordered_set::bucket_size | | | | | | unordered_set::bucket | | | | | | Hash policy | | | | | | unordered_set::load_factor | | | | | | unordered_set::max_load_factor | | | | | | unordered_set::rehash | | | | | | unordered_set::reserve | | | | | | Observers | | | | | | unordered_set::hash_function | | | | | | unordered_set::key_eq | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_set) | | | | | | erase_if(std::unordered_set)(C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| iterator find( const Key& key ); | (1) | (since C++11) |
| const_iterator find( const Key& key ) const; | (2) | (since C++11) |
| template< class K >  iterator find( const K& x ); | (3) | (since C++20) |
| template< class K >  const_iterator find( const K& x ) const; | (4) | (since C++20) |
|  |  |  |

1,2) Finds an element with key equivalent to key.3,4) Finds an element with key that compares **equivalent** to the value x. This overload participates in overload resolution only if Hash::is_transparent and KeyEqual::is_transparent are valid and each denotes a type. This assumes that such `Hash` is callable with both `K` and `Key` type, and that the `KeyEqual` is transparent, which, together, allows calling this function without constructing an instance of `Key`.

### Parameters

|  |  |  |
| --- | --- | --- |
| key | - | key value of the element to search for |
| x | - | a value of any type that can be transparently compared with a key |

### Return value

An iterator to the requested element. If no such element is found, past-the-end (see end()) iterator is returned.

### Complexity

Constant on average, worst case linear in the size of the container.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_generic_unordered_lookup` | `201811L` | (C++20) | Heterogeneous comparison lookup in unordered associative containers; overloads (3,4) |

### Example

Run this code

```
#include <cstddef>
#include <functional>
#include <iostream>
#include <source_location>
#include <string>
#include <string_view>
#include <unordered_set>
 
using namespace std::literals;
 
namespace logger { bool enabled{false}; }
 
inline void who(const std::source_location sloc = std::source_location::current())
{
    if (logger::enabled)
        std::cout << sloc.function_name() << '\n';
}
 
struct string_hash // C++20's transparent hashing
{
    using hash_type = std::hash<std::string_view>;
    using is_transparent = void;
 
    std::size_t operator()(const char* str) const
    {
        who();
        return hash_type{}(str);
    }
    std::size_t operator()(std::string_view str) const
    {
        who();
        return hash_type{}(str);
    }
    std::size_t operator()(std::string const& str) const
    {
        who();
        return hash_type{}(str);
    }
};
 
int main()
{
    std::unordered_set<int> example{1, 2, -10};
 
    std::cout << "Simple comparison demo:\n" << std::boolalpha;
    if (auto search = example.find(2); search != example.end())
        std::cout << "Found " << *search << '\n';
    else
        std::cout << "Not found\n";
 
    std::unordered_set<std::string, string_hash, std::equal_to<>> set{"one"s, "two"s};
 
    logger::enabled = true;
    std::cout << "Heterogeneous lookup for unordered containers (transparent hashing):\n"
              << (set.find("one")   != set.end()) << '\n'
              << (set.find("one"s)  != set.end()) << '\n'
              << (set.find("one"sv) != set.end()) << '\n';
}

```

Possible output:

```
Simple comparison demo:
Found 2
Heterogeneous lookup for unordered containers (transparent hashing):
std::size_t string_hash::operator()(const char*) const
true
std::size_t string_hash::operator()(const std::string&) const
true
std::size_t string_hash::operator()(std::string_view) const
true

```

### See also

|  |  |
| --- | --- |
| count | returns the number of elements matching specific key   (public member function) |
| equal_range | returns range of elements matching a specific key   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_set/find&oldid=135902>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 November 2021, at 12:47.