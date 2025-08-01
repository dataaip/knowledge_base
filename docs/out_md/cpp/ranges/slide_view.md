# std::ranges::views::slide, std::ranges::slide_view

From cppreference.com
< cpp‎ | ranges
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

Ranges library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | begin | | | | | | cbegin | | | | | | end | | | | | | cend | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rbegin | | | | | | crbegin | | | | | | rend | | | | | | crend | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | size | | | | | | ssize | | | | | | data | | | | | | cdata | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | empty | | | | | |  | | | | | |  | | | | | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range conversions | | | | | | std::from_range_t std::from_range(C++23)(C++23) | | | | | | to(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Dangling iterator handling | | | | | | dangling | | | | | | borrowed_iterator_t | | | | | | borrowed_subrange_t | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Range primitives | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | range_size_trange_difference_trange_value_t | | | | | | elements_of(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iterator_tconst_iterator_tsentinel_tconst_sentinel_t(C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | range_reference_trange_const_reference_trange_rvalue_reference_trange_common_reference_t(C++23) | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Range concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | range | | | | | | borrowed_range | | | | | | sized_range | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_range | | | | | | view | | | | | | viewable_range | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | input_range | | | | | | output_range | | | | | | forward_range | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | bidirectional_range | | | | | | random_access_range | | | | | | contiguous_range | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | constant_range(C++23) | | | | | |  | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Views | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | view_interface | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | subrange | | | | | |  | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Range factories | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | empty_viewviews::empty | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | single_viewviews::single | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | basic_istream_viewviews::istream | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota_viewviews::iota | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | repeat_viewviews::repeat(C++23)(C++23) | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Range adaptors | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | views::all_tviews::all | | | | | | ref_view | | | | | | owning_view | | | | | | as_rvalue_viewviews::as_rvalue(C++23)(C++23) | | | | | | filter_viewviews::filter | | | | | | transform_viewviews::transform | | | | | | take_viewviews::take | | | | | | take_while_viewviews::take_while | | | | | | concat_viewviews::concat(C++26)(C++26) | | | | | | views::counted | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | drop_viewviews::drop | | | | | | drop_while_viewviews::drop_while | | | | | | join_viewviews::join | | | | | | join_with_viewviews::join_with(C++23)(C++23) | | | | | | lazy_split_viewviews::lazy_split | | | | | | split_viewviews::split | | | | | | common_viewviews::common | | | | | | cache_latest_viewviews::cache_latest")(C++26)(C++26) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_viewviews::reverse | | | | | | as_const_viewviews::as_const(C++23)(C++23) | | | | | | elements_viewviews::elements | | | | | | keys_viewviews::keys | | | | | | values_viewviews::values | | | | | | enumerate_viewviews::enumerate(C++23)(C++23) | | | | | | zip_viewviews::zip(C++23)(C++23) | | | | | | zip_transform_viewviews::zip_transform(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_viewviews::adjacent(C++23)(C++23) | | | | | | views::pairwise(C++23) | | | | | | adjacent_transform_viewviews::adjacent_transform(C++23)(C++23) | | | | | | views::pairwise_transform(C++23) | | | | | | chunk_viewviews::chunk(C++23)(C++23) | | | | | | ****slide_viewviews::slide****(C++23)(C++23) | | | | | | chunk_by_viewviews::chunk_by(C++23)(C++23) | | | | | | stride_viewviews::stride(C++23)(C++23) | | | | | | cartesian_product_viewviews::cartesian_product(C++23)(C++23) | | | | | |  | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range generators | | | | | | std::generator(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor closure objects | | | | | | range_adaptor_closure(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor objects | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Helper items | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **copyable-box** **movable-box**(until C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | **simple-view** | | | | | | **non-propagating-cache** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |  | | | | | |

****std::ranges::slide_view****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| slide_view::slide_view | | | | |
| slide_view::begin | | | | |
| slide_view::end | | | | |
| slide_view::size | | | | |
| Deduction guides | | | | |
| Iterator | | | | |
| Member functions | | | | |
| slide_view::**iterator**::**iterator** | | | | |
| slide_view::**iterator**::operator\* | | | | |
| [slide_view::**iterator**::operator[]](slide_view/iterator/operator_at.html "cpp/ranges/slide view/iterator/operator at") | | | | |
| slide_view::**iterator**::operator++ slide_view::**iterator**::operator++(int) slide_view::**iterator**::operator-- slide_view::**iterator**::operator--(int) slide_view::**iterator**::operator+= slide_view::**iterator**::operator-= | | | | |
| Non-member functions | | | | |
| operator==(slide_view::**iterator**) operator<(slide_view::**iterator**) operator>(slide_view::**iterator**) operator<=(slide_view::**iterator**) operator>=(slide_view::**iterator**) operator<=>(slide_view::**iterator**) | | | | |
| operator+(slide_view::**iterator**) operator-(slide_view::**iterator**) | | | | |
| Sentinel | | | | |
| Member functions | | | | |
| slide_view::**sentinel**::**sentinel** | | | | |
| Non-member functions | | | | |
| operator==(slide_view::**iterator**,slide_view::**sentinel**) | | | | |
| operator-(slide_view::**iterator**,slide_view::**sentinel**) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ranges>` |  |  |
| template< ranges::forward_range V >      requires ranges::view<V>  class slide_view : public ranges::view_interface<slide_view<V>> | (1) | (since C++23) |
| namespace views {  inline constexpr /\* unspecified \*/ slide = /\* unspecified \*/; } | (2) | (since C++23) |
| Call signature |  |  |
| template< ranges::viewable_range R >  constexpr ranges::view auto slide( R&& r, ranges::range_difference_t<R> n ); |  | (since C++23) |
| template< class DifferenceType >  constexpr /\* range adaptor object \*/ slide( DifferenceType&& n ); |  | (since C++23) |
| Helper concepts |  |  |
| template< class V >  concept /\*slide-caches-nothing\*/ = ranges::random_access_range<V> && ranges::sized_range<V>; | (3) | (exposition only\*) |
| template< class V >  concept /\*slide-caches-last\*/ =      !/\*slide-caches-nothing\*/<V> && ranges::bidirectional_range<V> && ranges::common_range<V>; | (4) | (exposition only\*) |
| template< class V >  concept /\*slide-caches-first\*/ = !/\*slide-caches-nothing\*/<V> && !/\*slide-caches-last\*/<V>; | (5) | (exposition only\*) |
|  |  |  |

1) `slide_view` is a range adaptor that takes a `view` and a number n and produces a view whose `mth` element (a "window") is a view over the `mth` through `(m + n - 1)th` elements of the original view. Let s be the size of the original view. Then the size of produced view is:

- s - n + 1, if s >= n,
- ​0​ otherwise, and the resulting view is empty.
2) The name views::slide denotes a RangeAdaptorObject. Given subexpressions e and n, the expression views::slide(e, n) is expression-equivalent to slide_view(e, n).

If n is not greater than ​0​, the behavior is undefined.

`slide_view` always models `forward_range`, and models `bidirectional_range`, `random_access_range`, or `sized_range` if adapted `view` type models the corresponding concept.

### Data members

|  |  |
| --- | --- |
| Member object | Definition |
| `base_` (private) | The underlying `view` of type `V`. (exposition-only member object\*) |
| `n_` (private) | The "window size" of type ranges::range_difference_t<V>. (exposition-only member object\*) |
| `cached_begin_` (private)  (present only if `V` models the `slide-caches-first`) | An optional-like object. (exposition-only member object\*) |
| `cached_end_` (private)  (present only if `V` models the `slide-caches-last`) | An optional-like object. (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `slide_view`   (public member function) |
| begin | returns an iterator to the beginning   (public member function) |
| end | returns an iterator or a sentinel to the end   (public member function) |
| size | returns the number of elements. Provided only if the underlying (adapted) range satisfies `sized_range`.   (public member function) |
| Inherited from std::ranges::view_interface | |
| empty | returns whether the derived view is empty. Provided if it satisfies `sized_range` or `forward_range`.   (public member function of `std::ranges::view_interface<D>`) |
| cbegin(C++23) | returns a constant iterator to the beginning of the range.   (public member function of `std::ranges::view_interface<D>`) |
| cend(C++23) | returns a sentinel for the constant iterator of the range.   (public member function of `std::ranges::view_interface<D>`) |
| operator bool | returns whether the derived view is not empty. Provided if ranges::empty is applicable to it.   (public member function of `std::ranges::view_interface<D>`) |
| front | returns the first element in the derived view. Provided if it satisfies `forward_range`.   (public member function of `std::ranges::view_interface<D>`) |
| back | returns the last element in the derived view. Provided if it satisfies `bidirectional_range` and `common_range`.   (public member function of `std::ranges::view_interface<D>`) |
| [operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") | returns the `n`th element in the derived view. Provided if it satisfies `random_access_range`.   (public member function of `std::ranges::view_interface<D>`) |

### Deduction guides

### Nested classes

|  |  |
| --- | --- |
| **iterator**(C++23) | the iterator type (exposition-only member class template\*) |
| **sentinel**(C++23) | the sentinel type used when `slide_view` is not a `common_range` (exposition-only member class template\*) |

### Helper templates

|  |  |  |
| --- | --- | --- |
| template< class V >  constexpr bool ranges::enable_borrowed_range<slide_view<V>> = ranges::enable_borrowed_range<V>; |  | (since C++23) |
|  |  |  |

This specialization of ranges::enable_borrowed_range makes `slide_view` satisfy `borrowed_range` when the underlying view satisfies it.

### Notes

There are similarities between ranges::adjacent_view and ranges::slide_view:

- Both create a "sliding window" of size `N`.
- Both have the same size `S - N + 1`, where `S` is the size of an adapted `view` such that `S >= N > 0`.

The following table shows the differences between these adaptors:

| View adaptor | `value_type` | The window size `N` |
| --- | --- | --- |
| ranges::adjacent_view | std::tuple | A template parameter |
| ranges::slide_view | ranges::range | A runtime argument |

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ranges_slide` | `202202L` | (C++23) | `std::ranges::slide_view` |

### Example

Run this code

```
#include <algorithm>
#include <iostream>
#include <ranges>
 
auto print_subrange = [](std::ranges::viewable_range auto&& r)
{
    std::cout << '[';
    for (char space[]{0,0}; auto elem : r)
        std::cout << space << elem, *space = ' ';
    std::cout << "] ";
};
 
int main()
{
    const auto v = {1, 2, 3, 4, 5, 6};
 
    std::cout << "All sliding windows of width:\n";
    for (const unsigned width : std::views::iota(1U, 1U + v.size()))
    {
        auto const windows = v | std::views::slide(width);
        std::cout << "W = " << width << ": ";
        std::ranges::for_each(windows, print_subrange);
        std::cout << '\n';
    }
}

```

Output:

```
All sliding windows of width W:
W = 1: [1] [2] [3] [4] [5] [6] 
W = 2: [1 2] [2 3] [3 4] [4 5] [5 6] 
W = 3: [1 2 3] [2 3 4] [3 4 5] [4 5 6] 
W = 4: [1 2 3 4] [2 3 4 5] [3 4 5 6] 
W = 5: [1 2 3 4 5] [2 3 4 5 6] 
W = 6: [1 2 3 4 5 6]

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 26.7.29 Slide view [range.slide]

### See also

|  |  |
| --- | --- |
| ranges::adjacent_viewviews::adjacent(C++23) | a `view` consisting of tuples of references to adjacent elements of the adapted view (class template) (range adaptor object) |
| ranges::chunk_viewviews::chunk(C++23) | a range of `view`s that are `N`-sized non-overlapping successive chunks of the elements of another `view` (class template) (range adaptor object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/slide_view&oldid=176103>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 September 2024, at 13:32.