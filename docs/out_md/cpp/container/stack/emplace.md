# std::stack<T,Container>::emplace

From cppreference.com
< cpp‎ | container‎ | stack
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

`std::stack`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| stack::stack | | | | |
| stack::~stack | | | | |
| stack::operator= | | | | |
| Element access | | | | |
| stack::top | | | | |
| Capacity | | | | |
| stack::empty | | | | |
| stack::size | | | | |
| Modifiers | | | | |
| stack::push | | | | |
| stack::push_range(C++23) | | | | |
| ****stack::emplace****(C++11) | | | | |
| stack::pop | | | | |
| stack::swap(C++11) | | | | |
| Non-member functions | | | | |
| swap(std::stack)(C++11) | | | | |
| operator==operator!=operator<operator>operator<=operator>=operator<=>(C++20) | | | | |
| Helper classes | | | | |
| uses_allocator<std::stack>(C++11) | | | | |
| formatter<std::stack>(C++23) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class... Args >  void emplace( Args&&... args ); |  | (since C++11)  (until C++17) |
| template< class... Args >  decltype(auto) emplace( Args&&... args ); |  | (since C++17) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Pushes a new element on top of the stack. The element is constructed in-place, i.e. no copy or move operations are performed. The constructor of the element is called with exactly the same arguments as supplied to the function.

Effectively calls c.emplace_back(std::forward<Args>(args)...);.

### Parameters

|  |  |  |
| --- | --- | --- |
| args | - | arguments to forward to the constructor of the element |

### Return value

|  |  |
| --- | --- |
| (none) | (until C++17) |
| The value or reference, if any, returned by the above call to Container::emplace_back. | (since C++17) |

### Complexity

Identical to the complexity of Container::emplace_back.

### Example

Run this code

```
#include <iostream>
#include <stack>
 
struct S
{
    int id;
 
    S(int i, double d, std::string s) : id{i}
    {
        std::cout << "S::S(" << i << ", " << d << ", \"" << s << "\");\n";
    }
};
 
int main()
{
    std::stack<S> stack;
    const S& s = stack.emplace(42, 3.14, "C++"); // for return value C++17 required
    std::cout << "id = " << s.id << '\n';
}

```

Output:

```
S::S(42, 3.14, "C++")
id = 42

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2783 | C++17 | `emplace` returned `reference`, breaking compatibility with pre-C++17 containers | returns `decltype(auto)` |

### See also

|  |  |
| --- | --- |
| push | inserts element at the top   (public member function) |
| pop | removes the top element   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/stack/emplace&oldid=133127>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 September 2021, at 12:00.