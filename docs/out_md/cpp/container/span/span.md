# std::span<T,Extent>::span

From cppreference.com
< cpp‎ | container‎ | span
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

std::span

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****span::span**** | | | | |
| span::operator= | | | | |
| Element access | | | | |
| span::front | | | | |
| span::back | | | | |
| span::at(C++26) | | | | |
| [span::operator[]](operator_at.html "cpp/container/span/operator at") | | | | |
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
| constexpr span() noexcept; | (1) | (since C++20) |
| template< class It >  explicit(extent != std::dynamic_extent) constexpr span( It first, size_type count ); | (2) | (since C++20) |
| template< class It, class End >  explicit(extent != std::dynamic_extent) constexpr span( It first, End last ); | (3) | (since C++20) |
| template< std::size_t N >  constexpr span( std::type_identity_t<element_type> (&arr)[N] ) noexcept; | (4) | (since C++20) |
| template< class U, std::size_t N >  constexpr span( std::array<U, N>& arr ) noexcept; | (5) | (since C++20) |
| template< class U, std::size_t N >  constexpr span( const std::array<U, N>& arr ) noexcept; | (6) | (since C++20) |
| template< class R >  explicit(extent != std::dynamic_extent) constexpr span( R&& range ); | (7) | (since C++20) |
| explicit(extent != std::dynamic_extent)  constexpr span( std::initializer_list<value_type> il ) noexcept; | (8) | (since C++26) |
| template< class U, std::size_t N >  explicit(extent != std::dynamic_extent && N == std::dynamic_extent) constexpr span( const std::span<U, N>& source ) noexcept; | (9) | (since C++20) |
| constexpr span( const span& other ) noexcept = default; | (10) | (since C++20) |
|  |  |  |

Constructs a `span`.

1) Constructs an empty span whose data() == nullptr and size() == 0.

- This overload participates in overload resolution only if extent == 0 || extent == std::dynamic_extent.
2) Constructs a span that is a view over the range ``first`,`first + count`)`; the resulting span has data() == [std::to_address(first) and size() == count.

- The behavior is undefined if ``first`,`first + count`)` is not a valid range, if `It` does not actually model [`contiguous_iterator`, or if extent != std::dynamic_extent && count != extent.
- This overload participates in overload resolution only if

:   - `It` satisfies `contiguous_iterator`,
    - the conversion from std::iter_reference_t<It> to element_type is at most a qualification conversion.

3) Constructs a span that is a view over the range ``first`,`last`)`; the resulting span has data() == [std::to_address(first) and size() == last-first.

- The behavior is undefined if ``first`,`last`)` is not a valid range, if `It` does not actually model [`contiguous_iterator`, if `End` does not actually model `sized_sentinel_for` for `It`, or if extent != std::dynamic_extent && last-first != extent.
- This overload participates in overload resolution only if

:   - `It` satisfies `contiguous_iterator`,
    - `End` satisfies `sized_sentinel_for` for `It`,
    - the conversion from std::iter_reference_t<It> to element_type is at most a qualification conversion, and
    - std::is_convertible_v<End, std::size_t> is false.

4-6) Constructs a span that is a view over the array `arr`; the resulting span has size() == N and data() == std::data(arr).

- These overloads participate in overload resolution only if extent == std::dynamic_extent || N == extent is true and the conversion from std::remove_pointer_t<decltype(data(arr))> to element_type is at most a qualification conversion.
7) Constructs a span that is a view over the range range; the resulting span has size() == std::ranges::size(range) and data() == std::ranges::data(range).

- The behavior is undefined if `R` does not actually model `contiguous_range` and `sized_range` or if `R` does not model `borrowed_range` while element_type is non-const or both extent != dynamic_extent and std::ranges::size(range) != extent are true.
- This overload participates in overload resolution only if

:   - `R` satisfies `contiguous_range` and `sized_range`,
    - either `R` satisfies `borrowed_range` or std::is_const_v<element_type> is true,
    - std::remove_cvref_t<R> is not a specialization of `std::span`,
    - std::remove_cvref_t<R> is not a specialization of std::array,
    - std::is_array_v<std::remove_cvref_t<R>> is false, and
    - the conversion from std::ranges::range_reference_t<R> to element_type is at most a qualification conversion.

8) Constructs a span that is a view over the initializer list `il`; the resulting span has size() == il.size() and data() == il.begin().

- The behavior is undefined if both extent != dynamic_extent and il.size() != extent are true.
- This overload participates in overload resolution only if std::is_const_v<element_type> is true.
9) Converting constructor from another span `source`; the resulting span has size() == source.size() and data() == source.data().

- The behavior is undefined if both extent != dynamic_extent and source.size() != extent are true.
- This overload participates in overload resolution only if at least one of extent == std::dynamic_extent, N == std::dynamic_extent and N == extent is true and the conversion from `U` to element_type is at most a qualification conversion.
10) Defaulted copy constructor copies the size and data pointer; the resulting span has size() == other.size() and data() == other.data().

### Parameters

|  |  |  |
| --- | --- | --- |
| first | - | iterator to the first element of the sequence |
| count | - | number of elements in the sequence |
| last | - | iterator past the last element of the sequence or another sentinel |
| arr | - | array to construct a view for |
| range | - | range to construct a view for |
| source | - | another span to convert from |
| other | - | another span to copy from |

### Exceptions

2) Throws nothing.3) Throws what and when last - first throws.7) Throws what and when std::ranges::size(r) and std::ranges::data(r) throw.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_span_initializer_list` | `202311L` | (C++26) | Constructing `std::span` from a std::initializer_list, (8) |

### Example

Run this code

```
#include <array>
#include <iostream>
#include <span>
#include <vector>
 
void print_span(std::span<const int> s)
{
    for (int n : s)
        std::cout << n << ' ';
    std::cout << '\n';
}
 
int main()
{
    int c[]{1, 2, 3};
    print_span(c); // constructs from array
 
    std::array a{4, 5, 6};
    print_span(a); // constructs from std::array
 
    std::vector v{7, 8, 9};
    print_span(v); // constructs from std::vector
 
#if __cpp_lib_span_initializer_list
    print_span({0, 1, 2}); // constructs from initializer_list
#else
    print_span({{0, 1, 2}}); // ditto, a workaround
#endif
}

```

Output:

```
1 2 3 
4 5 6
7 8 9
0 1 2

```

### See also

|  |  |
| --- | --- |
| data | direct access to the underlying contiguous storage   (public member function) |
| size | returns the number of elements   (public member function) |
| operator= | assigns a `span`   (public member function) |
| sizessize(C++17)(C++20) | returns the size of a container or array   (function template) |
| data(C++17) | obtains the pointer to the underlying array   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/span/span&oldid=167798>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 December 2023, at 20:21.