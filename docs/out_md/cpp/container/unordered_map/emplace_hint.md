# std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::emplace_hint

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_map::unordered_map | | | | | | unordered_map::~unordered_map | | | | | | unordered_map::operator= | | | | | | unordered_map::get_allocator | | | | | | Iterators | | | | | | unordered_map::beginunordered_map::cbegin | | | | | | unordered_map::endunordered_map::cend | | | | | | Capacity | | | | | | unordered_map::size | | | | | | unordered_map::max_size | | | | | | unordered_map::empty | | | | | | Modifiers | | | | | | unordered_map::clear | | | | | | unordered_map::erase | | | | | | unordered_map::swap | | | | | | unordered_map::extract(C++17) | | | | | | unordered_map::merge(C++17) | | | | | | unordered_map::insert | | | | | | unordered_map::insert_range(C++23) | | | | | | unordered_map::insert_or_assign(C++17) | | | | | | unordered_map::emplace | | | | | | ****unordered_map::emplace_hint**** | | | | | | unordered_map::try_emplace(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_map::at | | | | | | [unordered_map::operator[]](operator_at.html "cpp/container/unordered map/operator at") | | | | | | unordered_map::count | | | | | | unordered_map::find | | | | | | unordered_map::contains(C++20) | | | | | | unordered_map::equal_range | | | | | | Bucket interface | | | | | | unordered_map::begin(size_type)unordered_map::cbegin(size_type) | | | | | | unordered_map::end(size_type)unordered_map::cend(size_type) | | | | | | unordered_map::bucket_count | | | | | | unordered_map::max_bucket_count | | | | | | unordered_map::bucket_size | | | | | | unordered_map::bucket | | | | | | Hash policy | | | | | | unordered_map::load_factor | | | | | | unordered_map::max_load_factor | | | | | | unordered_map::rehash | | | | | | unordered_map::reserve | | | | | | Observers | | | | | | unordered_map::hash_function | | | | | | unordered_map::key_eq | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_map) | | | | | | erase_if(std::unordered_map)(C++20) | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  iterator emplace_hint( const_iterator hint, Args&&... args ); |  | (since C++11) |
|  |  |  |

Inserts a new element into the container, using hint as a suggestion where the element should go.

The constructor of the element type (`value_type`, that is, std::pair<const Key, T>) is called with exactly the same arguments as supplied to the function, forwarded with std::forward<Args>(args)....

If after the operation the new number of elements is greater than old `max_load_factor()` `*``bucket_count()` a rehashing takes place.  
If rehashing occurs (due to the insertion), all iterators are invalidated. Otherwise (no rehashing), iterators are not invalidated.

### Parameters

|  |  |  |
| --- | --- | --- |
| hint | - | iterator, used as a suggestion as to where to insert the new element |
| args | - | arguments to forward to the constructor of the element |

### Return value

An iterator to the inserted element, or to the element that prevented the insertion.

### Exceptions

If an exception is thrown for any reason, this function has no effect (strong exception safety guarantee).

### Complexity

Amortized constant on average, worst case linear in the size of the container.

### Example

Run this code

```
#include <chrono>
#include <cstddef>
#include <functional>
#include <iomanip>
#include <iostream>
#include <unordered_map>
 
const int n_operations = 100'500'0;
 
std::size_t map_emplace()
{
    std::unordered_map<int, char> map;
    for (int i = 0; i < n_operations; ++i)
        map.emplace(i, 'a');
    return map.size();
}
 
std::size_t map_emplace_hint()
{
    std::unordered_map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < n_operations; ++i)
    {
        map.emplace_hint(it, i, 'b');
        it = map.end();
    }
    return map.size();
}
 
std::size_t map_emplace_hint_wrong()
{
    std::unordered_map<int, char> map;
    auto it = map.begin();
    for (int i = n_operations; i > 0; --i)
    {
        map.emplace_hint(it, i, 'c');
        it = map.end();
    }
    return map.size();
}
 
std::size_t map_emplace_hint_corrected()
{
    std::unordered_map<int, char> map;
    auto it = map.begin();
    for (int i = n_operations; i > 0; --i)
    {
        map.emplace_hint(it, i, 'd');
        it = map.begin();
    }
    return map.size();
}
 
std::size_t map_emplace_hint_closest()
{
    std::unordered_map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < n_operations; ++i)
        it = map.emplace_hint(it, i, 'e');
    return map.size();
}
 
double time_it(std::function<std::size_t()> map_test,
               std::string what = "", double ratio = 0.0)
{
    const auto start = std::chrono::system_clock::now();
    const std::size_t map_size = map_test();
    const auto stop = std::chrono::system_clock::now();
    std::chrono::duration<double, std::milli> time = stop - start;
    if (what.size() && map_size)
        std::cout << std::setw(8) << time << " for " << what << " (ratio: "
                  << (ratio == 0.0 ? 1.0 : ratio / time.count()) << ")\n";
    return time.count();
}
 
int main()
{
    std::cout << std::fixed << std::setprecision(2);
    time_it(map_emplace); // cache warmup
    const auto x = time_it(map_emplace, "plain emplace");
    time_it(map_emplace_hint, "emplace with correct hint", x);
    time_it(map_emplace_hint_wrong, "emplace with wrong hint", x);
    time_it(map_emplace_hint_corrected, "corrected emplace", x);
    time_it(map_emplace_hint_closest, "emplace using returned iterator", x);
}

```

Possible output:

```
143.48ms for plain emplace (ratio: 1.00)
164.78ms for emplace with correct hint (ratio: 0.87)
171.22ms for emplace with wrong hint (ratio: 0.84)
166.55ms for corrected emplace (ratio: 0.86)
167.41ms for emplace using returned iterator (ratio: 0.86)

```

### See also

|  |  |
| --- | --- |
| emplace | constructs element in-place   (public member function) |
| insert | inserts elements or nodes(since C++17)   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_map/emplace_hint&oldid=169413>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 January 2024, at 08:04.