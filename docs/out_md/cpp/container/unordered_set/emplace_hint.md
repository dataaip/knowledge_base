# std::unordered_set<Key,Hash,KeyEqual,Allocator>::emplace_hint

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_set::unordered_set | | | | | | unordered_set::~unordered_set | | | | | | unordered_set::operator= | | | | | | unordered_set::get_allocator | | | | | | Iterators | | | | | | unordered_set::beginunordered_set::cbegin | | | | | | unordered_set::endunordered_set::cend | | | | | | Capacity | | | | | | unordered_set::size | | | | | | unordered_set::max_size | | | | | | unordered_set::empty | | | | | | Modifiers | | | | | | unordered_set::clear | | | | | | unordered_set::erase | | | | | | unordered_set::swap | | | | | | unordered_set::extract(C++17) | | | | | | unordered_set::merge(C++17) | | | | | | unordered_set::insert | | | | | | unordered_set::insert_range(C++23) | | | | | | unordered_set::emplace | | | | | | ****unordered_set::emplace_hint**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_set::count | | | | | | unordered_set::find | | | | | | unordered_set::contains(C++20) | | | | | | unordered_set::equal_range | | | | | | Bucket interface | | | | | | unordered_set::begin(size_type)unordered_set::cbegin(size_type) | | | | | | unordered_set::end(size_type)unordered_set::cend(size_type) | | | | | | unordered_set::bucket_count | | | | | | unordered_set::max_bucket_count | | | | | | unordered_set::bucket_size | | | | | | unordered_set::bucket | | | | | | Hash policy | | | | | | unordered_set::load_factor | | | | | | unordered_set::max_load_factor | | | | | | unordered_set::rehash | | | | | | unordered_set::reserve | | | | | | Observers | | | | | | unordered_set::hash_function | | | | | | unordered_set::key_eq | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_set) | | | | | | erase_if(std::unordered_set)(C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  iterator emplace_hint( const_iterator hint, Args&&... args ); |  | (since C++11) |
|  |  |  |

Inserts a new element into the container, using hint as a suggestion where the element should go.

The constructors of the key and mapped value are called with exactly the same arguments as supplied to the function, forwarded with std::forward<Args>(args)....

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
#include <unordered_set>
 
const int n_operations = 100'500'0;
 
std::size_t set_emplace()
{
    std::unordered_set<int> set;
    for (int i = 0; i < n_operations; ++i)
        set.emplace(i);
    return set.size();
}
 
std::size_t set_emplace_hint()
{
    std::unordered_set<int> set;
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
    std::unordered_set<int> set;
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
    std::unordered_set<int> set;
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
    std::unordered_set<int> set;
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
146.88ms for plain emplace (ratio: 1.00)
168.20ms for emplace with correct hint (ratio: 0.87)
168.78ms for emplace with wrong hint (ratio: 0.87)
166.58ms for corrected emplace (ratio: 0.88)
168.27ms for emplace using returned iterator (ratio: 0.87)

```

### See also

|  |  |
| --- | --- |
| emplace | constructs element in-place   (public member function) |
| insert | inserts elements or nodes(since C++17)   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_set/emplace_hint&oldid=169410>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 January 2024, at 08:03.