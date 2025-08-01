# std::flat_set<Key,Compare,KeyContainer>::emplace_hint

From cppreference.com
< cpp‎ | container‎ | flat set
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

std::flat_set

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | flat_set::flat_set | | | | | | flat_set::operator= | | | | | | Iterators | | | | | | flat_set::beginflat_set::cbegin | | | | | | flat_set::endflat_set::cend | | | | | | flat_set::rbeginflat_set::crbegin | | | | | | flat_set::rendflat_set::crend | | | | | | Capacity | | | | | | flat_set::size | | | | | | flat_set::max_size | | | | | | flat_set::empty | | | | | | Observers | | | | | | flat_set::key_comp | | | | | | flat_set::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | flat_set::clear | | | | | | flat_set::insert | | | | | | flat_set::insert_range | | | | | | flat_set::emplace | | | | | | ****flat_set::emplace_hint**** | | | | | | flat_set::erase | | | | | | flat_set::swap | | | | | | flat_set::extract | | | | | | flat_set::replace | | | | | | Lookup | | | | | | flat_set::count | | | | | | flat_set::find | | | | | | flat_set::contains | | | | | | flat_set::equal_range | | | | | | flat_set::lower_bound | | | | | | flat_set::upper_bound | | | | | | | Non-member functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::flat_set) | | | | | | erase_if(std::flat_set) | | | | | | |
| Helper classes | | | | |
| uses_allocator<std::flat_set> | | | | |
| Tags | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_unique | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_unique_t | | | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  iterator emplace_hint( const_iterator hint, Args&&... args ); |  | (since C++23) |
|  |  |  |

Inserts a new element into the container as close as possible to the position just before hint.

The constructors of the key and mapped value are called with exactly the same arguments as supplied to the function, forwarded with std::forward<Args>(args)....

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
#include <flat_set>
 
const int n_operations = 100'500'0;
 
std::size_t set_emplace()
{
    std::flat_set<int> set;
    for (int i = 0; i < n_operations; ++i)
        set.emplace(i);
    return set.size();
}
 
std::size_t set_emplace_hint()
{
    std::flat_set<int> set;
    auto it = set.begin();
    for (int i = 0; i < n_operations; ++i)
    {
        set.emplace_hint(it, i);
        it = set.end();
    }
    return set.size();
}
 
std::size_t set_emplace_hint_wrong()
{
    std::flat_set<int> set;
    auto it = set.begin();
    for (int i = n_operations; i > 0; --i)
    {
        set.emplace_hint(it, i);
        it = set.end();
    }
    return set.size();
}
 
std::size_t set_emplace_hint_corrected()
{
    std::flat_set<int> set;
    auto it = set.begin();
    for (int i = n_operations; i > 0; --i)
    {
        set.emplace_hint(it, i);
        it = set.begin();
    }
    return set.size();
}
 
std::size_t set_emplace_hint_closest()
{
    std::flat_set<int> set;
    auto it = set.begin();
    for (int i = 0; i < n_operations; ++i)
        it = set.emplace_hint(it, i);
    return set.size();
}
 
double time_it(std::function<std::size_t()> set_test,
               const char* what = nullptr,
               double ratio = 0.0)
{
    const auto start = std::chrono::system_clock::now();
    const std::size_t setsize = set_test();
    const auto stop = std::chrono::system_clock::now();
    const std::chrono::duration<double, std::milli> time = stop - start;
    if (what != nullptr && setsize > 0)
        std::cout << std::setw(8) << time << " for " << what << " (ratio: "
                  << (ratio == 0.0 ? 1.0 : ratio / time.count()) << ")\n";
    return time.count();
}
 
int main()
{
    std::cout << std::fixed << std::setprecision(2);
    time_it(set_emplace); // cache warmup
    const auto x = time_it(set_emplace, "plain emplace");
    time_it(set_emplace_hint, "emplace with correct hint", x);
    time_it(set_emplace_hint_wrong, "emplace with wrong hint", x);
    time_it(set_emplace_hint_corrected, "corrected emplace", x);
    time_it(set_emplace_hint_closest, "emplace using returned iterator", x);
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

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_set/emplace_hint&oldid=169416>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 January 2024, at 08:06.