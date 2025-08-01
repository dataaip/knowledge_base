# std::swap(std::queue)

From cppreference.com
< cpp‎ | container‎ | queue
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

`std::queue`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| queue::queue | | | | |
| queue::~queue | | | | |
| queue::operator= | | | | |
| Element access | | | | |
| queue::front | | | | |
| queue::back | | | | |
| Capacity | | | | |
| queue::empty | | | | |
| queue::size | | | | |
| Modifiers | | | | |
| queue::push | | | | |
| queue::push_range(C++23) | | | | |
| queue::emplace(C++11) | | | | |
| queue::pop | | | | |
| queue::swap(C++11) | | | | |
| Non-member functions | | | | |
| ****swap(std::queue)****(C++11) | | | | |
| operator==operator!=operator<operator>operator<=operator>=operator<=>(C++20) | | | | |
| Helper classes | | | | |
| uses_allocator<std::queue>(C++11) | | | | |
| formatter<std::queue>(C++23) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<queue>` |  |  |
|  |  |  |
| --- | --- | --- |
| template< class T, class Container >  void swap( std::queue<T, Container>& lhs, std::queue<T, Container>& rhs ); |  | (since C++11)  (until C++17) |
| template< class T, class Container >  void swap( std::queue<T, Container>& lhs,             std::queue<T, Container>& rhs ) noexcept(/\* see below \*/); |  | (since C++17) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Specializes the std::swap algorithm for std::queue. Swaps the contents of lhs and rhs. Calls lhs.swap(rhs).

|  |  |
| --- | --- |
| This overload participates in overload resolution only if std::is_swappable_v<Container> is true. | (since C++17) |

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | containers whose contents to swap |

### Return value

(none)

### Complexity

Same as swapping the underlying containers.

### Exceptions

|  |  |
| --- | --- |
| noexcept specification:noexcept(noexcept(lhs.swap(rhs))) | (since C++17) |

### Notes

Although the overloads of std::swap for container adaptors are introduced in C++11, container adaptors can already be swapped by std::swap in C++98. Such calls to std::swap usually have linear time complexity, but better complexity may be provided.

### Example

Run this code

```
#include <algorithm>
#include <iostream>
#include <queue>
 
int main()
{
    std::queue<int> alice;
    std::queue<int> bob;
 
    auto print = [](const auto& title, const auto& cont)
    {
        std::cout << title << " size=" << cont.size();
        std::cout << " front=" << cont.front();
        std::cout << " back=" << cont.back() << '\n';
    };
 
    for (int i = 1; i < 4; ++i)
        alice.push(i);
    for (int i = 7; i < 11; ++i)
        bob.push(i);
 
    // Print state before swap
    print("Alice:", alice);
    print("Bobby:", bob);
 
    std::cout << "-- SWAP\n";
    std::swap(alice, bob);
 
    // Print state after swap
    print("Alice:", alice);
    print("Bobby:", bob);
}

```

Output:

```
Alice: size=3 front=1 back=3
Bobby: size=4 front=7 back=10
-- SWAP
Alice: size=4 front=7 back=10
Bobby: size=3 front=1 back=3

```

### See also

|  |  |
| --- | --- |
| swap(C++11) | swaps the contents   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/queue/swap2&oldid=135388>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 November 2021, at 07:17.