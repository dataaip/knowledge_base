# std::unordered_set<Key,Hash,KeyEqual,Allocator>::end, std::unordered_set<Key,Hash,KeyEqual,Allocator>::cend

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unordered_set::unordered_set | | | | | | unordered_set::~unordered_set | | | | | | unordered_set::operator= | | | | | | unordered_set::get_allocator | | | | | | Iterators | | | | | | unordered_set::beginunordered_set::cbegin | | | | | | ****unordered_set::endunordered_set::cend**** | | | | | | Capacity | | | | | | unordered_set::size | | | | | | unordered_set::max_size | | | | | | unordered_set::empty | | | | | | Modifiers | | | | | | unordered_set::clear | | | | | | unordered_set::erase | | | | | | unordered_set::swap | | | | | | unordered_set::extract(C++17) | | | | | | unordered_set::merge(C++17) | | | | | | unordered_set::insert | | | | | | unordered_set::insert_range(C++23) | | | | | | unordered_set::emplace | | | | | | unordered_set::emplace_hint | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lookup | | | | | | unordered_set::count | | | | | | unordered_set::find | | | | | | unordered_set::contains(C++20) | | | | | | unordered_set::equal_range | | | | | | Bucket interface | | | | | | unordered_set::begin(size_type)unordered_set::cbegin(size_type) | | | | | | unordered_set::end(size_type)unordered_set::cend(size_type) | | | | | | unordered_set::bucket_count | | | | | | unordered_set::max_bucket_count | | | | | | unordered_set::bucket_size | | | | | | unordered_set::bucket | | | | | | Hash policy | | | | | | unordered_set::load_factor | | | | | | unordered_set::max_load_factor | | | | | | unordered_set::rehash | | | | | | unordered_set::reserve | | | | | | Observers | | | | | | unordered_set::hash_function | | | | | | unordered_set::key_eq | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=(until C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | std::swap(std::unordered_set) | | | | | | erase_if(std::unordered_set)(C++20) | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| iterator end() noexcept; | (1) | (since C++11) |
| const_iterator end() const noexcept; | (2) | (since C++11) |
| const_iterator cend() const noexcept; | (3) | (since C++11) |
|  |  |  |

Returns an iterator to the element following the last element of the `unordered_set`.

This element acts as a placeholder; attempting to access it results in undefined behavior.

!range-begin-end.svg

### Parameters

(none)

### Return value

Iterator to the element following the last element.

### Complexity

Constant.

### Notes

Because both `iterator` and `const_iterator` are constant iterators (and may in fact be the same type), it is not possible to mutate the elements of the container through an iterator returned by any of these member functions.

### Example

Run this code

```
#include <iostream>
#include <unordered_set>
 
struct Point { double x, y; };
 
int main()
{
    Point pts[3] = {{1, 0}, {2, 0}, {3, 0}};
 
    // points is a set containing the addresses of points
    std::unordered_set<Point*> points = { pts, pts + 1, pts + 2 };
 
    // Change each y-coordinate of (i, 0) from 0 into i^2 and print the point
    for (auto iter = points.begin(); iter != points.end(); ++iter)
    {
        (*iter)->y = ((*iter)->x) * ((*iter)->x); // iter is a pointer-to-Point*
        std::cout << "(" << (*iter)->x << ", " << (*iter)->y << ") ";
    }
    std::cout << '\n';
 
    // Now using the range-based for loop, we increase each y-coordinate by 10
    for (Point* i : points)
    {
        i->y += 10;
        std::cout << "(" << i->x << ", " << i->y << ") ";
    }
}

```

Possible output:

```
(3, 9) (1, 1) (2, 4) 
(3, 19) (1, 11) (2, 14)

```

### See also

|  |  |
| --- | --- |
| begincbegin | returns an iterator to the beginning   (public member function) |
| endcend(C++11)(C++14) | returns an iterator to the end of a container or array   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/unordered_set/end&oldid=136007>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2021, at 07:31.