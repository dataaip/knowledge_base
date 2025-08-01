# std::span

From cppreference.com
< cpp‎ | container
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
| ****span****(C++20) | | | | |
| mdspan(C++23) | | | | |
| Tables | | | | |
| Iterator invalidation | | | | |
| Member function table | | | | |
| Non-member function table | | | | |

****std::span****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| span::span | | | | |
| span::operator= | | | | |
| Element access | | | | |
| span::front | | | | |
| span::back | | | | |
| span::at(C++26) | | | | |
| [span::operator[]](span/operator_at.html "cpp/container/span/operator at") | | | | |
| span::data | | | | |
| Iterators | | | | |
| span::beginspan::cbegin(C++23) | | | | |
| span::endspan::cend(C++23) | | | | |
| span::rbeginspan::crbegin(C++23) | | | | |
| span::rendspan::crend(C++23) | | | | |
| Observers | | | | |
| span::empty | | | | |
| span::size | | | | |
| span::size_bytes | | | | |
| Subviews | | | | |
| span::first | | | | |
| span::last | | | | |
| span::subspan | | | | |
| Non-member functions | | | | |
| as_bytesas_writable_bytes | | | | |
| Non-member constant | | | | |
| dynamic_extent | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<span>` |  |  |
| template<  class T,      std::size_t Extent = std::dynamic_extent > class span; |  | (since C++20) |
|  |  |  |

The class template `span` describes an object that can refer to a contiguous sequence of objects with the first element of the sequence at position zero. A `span` can either have a **static** extent, in which case the number of elements in the sequence is known at compile-time and encoded in the type, or a **dynamic** extent.

For a `span` s, pointers, iterators, and references to elements of s are invalidated when an operation invalidates a pointer in the range ``s.data()`,`s.data() + s.size()`)`.

|  |  |
| --- | --- |
| Every specialization of `std::span` is a [TriviallyCopyable type. | (since C++23) |

A typical implementation holds a pointer to `T`, if the extent is dynamic, the implementation also holds a size.

### Template parameters

|  |  |  |
| --- | --- | --- |
| T | - | element type; must be a complete object type that is not an abstract class type |
| Extent | - | the number of elements in the sequence, or `std::dynamic_extent` if dynamic |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `element_type` | `T` |
| `value_type` | std::remove_cv_t<T> |
| `size_type` | std::size_t |
| `difference_type` | std::ptrdiff_t |
| `pointer` | T\* |
| `const_pointer` | const T\* |
| `reference` | T& |
| `const_reference` | const T& |
| `iterator` | implementation-defined LegacyRandomAccessIterator, ConstexprIterator, and `contiguous_iterator` whose `value_type` is `value_type` |
| `const_iterator` (since C++23) | std::const_iterator<iterator> |
| `reverse_iterator` | std::reverse_iterator<iterator> |
| `const_reverse_iterator` (since C++23) | std::const_iterator<reverse_iterator> |

Note: `iterator` is a mutable iterator if `T` is not const-qualified.

All requirements on the iterator types of a Container apply to the `iterator` type of `span` as well.

### Member constant

|  |  |
| --- | --- |
| Name | Value |
| constexpr std::size_t extent[static] | Extent   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `span`   (public member function) |
| operator= | assigns a `span`   (public member function) |
| (destructor)(implicitly declared) | destructs a `span`   (public member function) |
| Iterators | |
| begincbegin(C++23) | returns an iterator to the beginning   (public member function) |
| endcend(C++23) | returns an iterator to the end   (public member function) |
| rbegincrbegin(C++23) | returns a reverse iterator to the beginning   (public member function) |
| rendcrend(C++23) | returns a reverse iterator to the end   (public member function) |
| Element access | |
| front | access the first element   (public member function) |
| back | access the last element   (public member function) |
| at(C++26) | access specified element with bounds checking   (public member function) |
| [operator[]](span/operator_at.html "cpp/container/span/operator at") | access specified element   (public member function) |
| data | direct access to the underlying contiguous storage   (public member function) |
| Observers | |
| size | returns the number of elements   (public member function) |
| size_bytes | returns the size of the sequence in bytes   (public member function) |
| empty | checks if the sequence is empty   (public member function) |
| Subviews | |
| first | obtains a subspan consisting of the first `N` elements of the sequence   (public member function) |
| last | obtains a subspan consisting of the last `N` elements of the sequence   (public member function) |
| subspan | obtains a subspan   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| as_bytesas_writable_bytes(C++20) | converts a `span` into a view of its underlying bytes   (function template) |

### Non-member constant

|  |  |
| --- | --- |
| dynamic_extent(C++20) | a constant of type std::size_t signifying that the `span` has dynamic extent   (constant) |

### Helper templates

|  |  |  |
| --- | --- | --- |
| template< class T, std::size_t Extent >  constexpr bool ranges::enable_borrowed_range<std::span<T, Extent>> = true; |  | (since C++20) |
|  |  |  |

This specialization of ranges::enable_borrowed_range makes `span` satisfy `borrowed_range`.

|  |  |  |
| --- | --- | --- |
| template< class T, std::size_t Extent >  constexpr bool ranges::enable_view<std::span<T, Extent>> = true; |  | (since C++20) |
|  |  |  |

This specialization of ranges::enable_view makes `span` satisfy `view`.

### Deduction guides

### Notes

Specializations of `std::span` are already trivially copyable types in all existing implementations, even before the formal requirement introduced in C++23.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_span` | `202002L` | (C++20) | `std::span` |
| `202311L` | (C++26) | std::span::at |
| `__cpp_lib_span_initializer_list` | `202311L` | (C++26) | Constructing `std::span` from a std::initializer_list |

### Example

The example uses `std::span` to implement some algorithms on contiguous ranges.

Run this code

```
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <span>
 
template<class T, std::size_t N>
[[nodiscard]]
constexpr auto slide(std::span<T, N> s, std::size_t offset, std::size_t width)
{
    return s.subspan(offset, offset + width <= s.size() ? width : 0U);
}
 
template<class T, std::size_t N, std::size_t M>
constexpr bool starts_with(std::span<T, N> data, std::span<T, M> prefix)
{
    return data.size() >= prefix.size()
        && std::equal(prefix.begin(), prefix.end(), data.begin());
}
 
template<class T, std::size_t N, std::size_t M>
constexpr bool ends_with(std::span<T, N> data, std::span<T, M> suffix)
{
    return data.size() >= suffix.size()
        && std::equal(data.end() - suffix.size(), data.end(),
                      suffix.end() - suffix.size());
}
 
template<class T, std::size_t N, std::size_t M>
constexpr bool contains(std::span<T, N> span, std::span<T, M> sub)
{
    return std::ranges::search(span, sub).begin() != span.end();
}
 
void println(const auto& seq)
{
    for (const auto& elem : seq)
        std::cout << elem << ' ';
    std::cout << '\n';
}
 
int main()
{
    constexpr int a[]{0, 1, 2, 3, 4, 5, 6, 7, 8};
    constexpr int b[]{8, 7, 6};
    constexpr static std::size_t width{6};
 
    for (std::size_t offset{}; ; ++offset)
        if (auto s = slide(std::span{a}, offset, width); !s.empty())
            println(s);
        else
            break;
 
    static_assert(""
        && starts_with(std::span{a}, std::span{a, 4})
        && starts_with(std::span{a + 1, 4}, std::span{a + 1, 3})
        && !starts_with(std::span{a}, std::span{b})
        && !starts_with(std::span{a, 8}, std::span{a + 1, 3})
        && ends_with(std::span{a}, std::span{a + 6, 3})
        && !ends_with(std::span{a}, std::span{a + 6, 2})
        && contains(std::span{a}, std::span{a + 1, 4})
        && !contains(std::span{a, 8}, std::span{a, 9})
    );
}

```

Output:

```
0 1 2 3 4 5
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3203 | C++20 | it was unclear when the pointers, iterators, and references to elements of `span` are invalidated | made clear |
| LWG 3903 | C++20 | the declaration of `span`'s destructor was unnecessary | removed the declaration |
| P2325R3 | C++20 | a `span` of non-zero static extents was not a `view` | any `span` is a `view` |

### See also

|  |  |
| --- | --- |
| mdspan(C++23) | a multi-dimensional non-owning array view   (class template) |
| ranges::subrange(C++20) | combines an iterator-sentinel pair into a `view`   (class template) |
| initializer_list(C++11) | references a temporary array created in list-initialization   (class template) |
| basic_string_view(C++17) | read-only string view   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/span&oldid=176449>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 September 2024, at 08:41.