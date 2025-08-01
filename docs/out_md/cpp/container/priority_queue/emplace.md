# std::priority_queue<T,Container,Compare>::emplace

From cppreference.com
< cpp‎ | container‎ | priority queue
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

`std::priority_queue`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| priority_queue::priority_queue | | | | |
| priority_queue::~priority_queue | | | | |
| priority_queue::operator= | | | | |
| Element access | | | | |
| priority_queue::top | | | | |
| Capacity | | | | |
| priority_queue::empty | | | | |
| priority_queue::size | | | | |
| Modifiers | | | | |
| priority_queue::push | | | | |
| priority_queue::push_range(C++23) | | | | |
| ****priority_queue::emplace****(C++11) | | | | |
| priority_queue::pop | | | | |
| priority_queue::swap(C++11) | | | | |
| Non-member functions | | | | |
| swap(std::priority_queue)(C++11) | | | | |
| Helper classes | | | | |
| uses_allocator<std::priority_queue>(C++11) | | | | |
| formatter<std::priority_queue>(C++23) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  void emplace( Args&&... args ); |  | (since C++11) |
|  |  |  |

Pushes a new element to the priority queue. The element is constructed in-place, i.e. no copy or move operations are performed. The constructor of the element is called with exactly the same arguments as supplied to the function.

Effectively calls

```
c.emplace_back(std::forward<Args>(args)...);
std::push_heap(c.begin(), c.end(), comp);

```

### Parameters

|  |  |  |
| --- | --- | --- |
| args | - | arguments to forward to the constructor of the element |

### Return value

(none)

### Complexity

Logarithmic number of comparisons plus the complexity of Container::emplace_back.

### Example

Run this code

```
#include <iostream>
#include <queue>
 
struct S
{
    int id;
 
    S(int i, double d, std::string s) : id{i}
    {
        std::cout << "S::S(" << i << ", " << d << ", \"" << s << "\");\n";
    }
    friend bool operator< (S const& x, S const& y) { return x.id < y.id; }
};
 
int main()
{
    std::priority_queue<S> queue;
    queue.emplace(42, 3.14, "C++");
    std::cout << "id: " << queue.top().id << '\n';
}

```

Output:

```
S::S(42, 3.14, "C++")
id = 42

```

### See also

|  |  |
| --- | --- |
| push | inserts element and sorts the underlying container   (public member function) |
| pop | removes the top element   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/priority_queue/emplace&oldid=133088>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 August 2021, at 23:57.