# std::flat_map<Key,T,Compare,KeyContainer,MappedContainer>::emplace_hint

From cppreference.com
< cpp‎ | container‎ | flat map
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

std::flat_map

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | flat_map::flat_map | | | | | | flat_map::operator= | | | | | | Element access | | | | | | flat_map::at | | | | | | [flat_map::operator[]](operator_at.html "cpp/container/flat map/operator at") | | | | | | Iterators | | | | | | flat_map::beginflat_map::cbegin | | | | | | flat_map::endflat_map::cend | | | | | | flat_map::rbeginflat_map::crbegin | | | | | | flat_map::rendflat_map::crend | | | | | | Lookup | | | | | | flat_map::count | | | | | | flat_map::find | | | | | | flat_map::contains | | | | | | flat_map::equal_range | | | | | | flat_map::lower_bound | | | | | | flat_map::upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | flat_map::size | | | | | | flat_map::max_size | | | | | | flat_map::empty | | | | | | Modifiers | | | | | | flat_map::clear | | | | | | flat_map::erase | | | | | | flat_map::swap | | | | | | flat_map::emplace | | | | | | flat_map::extract | | | | | | flat_map::replace | | | | | | flat_map::insert | | | | | | flat_map::insert_range | | | | | | flat_map::insert_or_assign | | | | | | ****flat_map::emplace_hint**** | | | | | | flat_map::try_emplace | | | | | | Observers | | | | | | flat_map::key_comp | | | | | | flat_map::keys | | | | | | flat_map::value_comp | | | | | | flat_map::values | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::flat_map) | | | | | | erase_if(std::flat_map) | | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uses_allocator<std::flat_map> | | | | | | |
| Tags | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_unique | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_unique_t | | | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  iterator emplace_hint( const_iterator hint, Args&&... args ); |  | (since C++23) |
|  |  |  |

Inserts a new element into the container as close as possible to the position just before hint.

The constructor of the element type (`value_type`, that is, std::pair<const Key, T>) is called with exactly the same arguments as supplied to the function, forwarded with std::forward<Args>(args)....

|  |  |
| --- | --- |
|  | Information on iterator invalidation is copied from here |

### Parameters

|  |  |  |
| --- | --- | --- |
| hint | - | iterator to the position before which the new element will be inserted |
| args | - | arguments to forward to the constructor of the element |

### Return value

An iterator to the inserted element, or to the element that prevented the insertion.

### Exceptions

If an exception is thrown for any reason, this function has no effect (strong exception safety guarantee).

### Complexity

|  |  |
| --- | --- |
|  | This section is incomplete |

### Example

Run this code

```
#include <chrono>
#include <cstddef>
#include <functional>
#include <iomanip>
#include <iostream>
#include <flat_map>
 
const int n_operations = 100'500'0;
 
std::size_t map_emplace()
{
    std::flat_map<int, char> map;
    for (int i = 0; i < n_operations; ++i)
        map.emplace(i, 'a');
    return map.size();
}
 
std::size_t map_emplace_hint()
{
    std::flat_map<int, char> map;
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
    std::flat_map<int, char> map;
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
    std::flat_map<int, char> map;
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
    std::flat_map<int, char> map;
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
...TODO...

```

### See also

|  |  |
| --- | --- |
| emplace | constructs element in-place   (public member function) |
| insert | inserts elements   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_map/emplace_hint&oldid=169414>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 January 2024, at 08:06.