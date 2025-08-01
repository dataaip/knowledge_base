# std::ranges::views::enumerate, std::ranges::enumerate_view

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | views::all_tviews::all | | | | | | ref_view | | | | | | owning_view | | | | | | as_rvalue_viewviews::as_rvalue(C++23)(C++23) | | | | | | filter_viewviews::filter | | | | | | transform_viewviews::transform | | | | | | take_viewviews::take | | | | | | take_while_viewviews::take_while | | | | | | concat_viewviews::concat(C++26)(C++26) | | | | | | views::counted | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | drop_viewviews::drop | | | | | | drop_while_viewviews::drop_while | | | | | | join_viewviews::join | | | | | | join_with_viewviews::join_with(C++23)(C++23) | | | | | | lazy_split_viewviews::lazy_split | | | | | | split_viewviews::split | | | | | | common_viewviews::common | | | | | | cache_latest_viewviews::cache_latest")(C++26)(C++26) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_viewviews::reverse | | | | | | as_const_viewviews::as_const(C++23)(C++23) | | | | | | elements_viewviews::elements | | | | | | keys_viewviews::keys | | | | | | values_viewviews::values | | | | | | ****enumerate_viewviews::enumerate****(C++23)(C++23) | | | | | | zip_viewviews::zip(C++23)(C++23) | | | | | | zip_transform_viewviews::zip_transform(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_viewviews::adjacent(C++23)(C++23) | | | | | | views::pairwise(C++23) | | | | | | adjacent_transform_viewviews::adjacent_transform(C++23)(C++23) | | | | | | views::pairwise_transform(C++23) | | | | | | chunk_viewviews::chunk(C++23)(C++23) | | | | | | slide_viewviews::slide(C++23)(C++23) | | | | | | chunk_by_viewviews::chunk_by(C++23)(C++23) | | | | | | stride_viewviews::stride(C++23)(C++23) | | | | | | cartesian_product_viewviews::cartesian_product(C++23)(C++23) | | | | | |  | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range generators | | | | | | std::generator(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor closure objects | | | | | | range_adaptor_closure(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor objects | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Helper items | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **copyable-box** **movable-box**(until C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | **simple-view** | | | | | | **non-propagating-cache** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |  | | | | | |

****std::ranges::enumerate_view****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| enumerate_view::enumerate_view | | | | |
| enumerate_view::base | | | | |
| enumerate_view::begin | | | | |
| enumerate_view::end | | | | |
| enumerate_view::size | | | | |
| Deduction guides | | | | |
| Nested classes | | | | |
| Iterator | | | | |
| enumerate_view::**iterator**::**iterator** | | | | |
| enumerate_view::**iterator**::base | | | | |
| enumerate_view::**iterator**::index | | | | |
| enumerate_view::**iterator**::operator\* | | | | |
| [enumerate_view::**iterator**::operator[]](enumerate_view/iterator/operator_at.html "cpp/ranges/enumerate view/iterator/operator at") | | | | |
| enumerate_view::**iterator**::operator++ enumerate_view::**iterator**::operator++(int) enumerate_view::**iterator**::operator-- enumerate_view::**iterator**::operator--(int) enumerate_view::**iterator**::operator+= enumerate_view::**iterator**::operator-= | | | | |
| operator==(enumerate_view::**iterator**) operator<=>(enumerate_view::**iterator**) | | | | |
| operator+(enumerate_view::**iterator**) operator-(enumerate_view::**iterator**) | | | | |
| iter_move(enumerate_view::**iterator**) | | | | |
| Sentinel | | | | |
| enumerate_view::**sentinel**::**sentinel** | | | | |
| enumerate_view::**sentinel**::base | | | | |
| operator==(enumerate_view::**iterator**,enumerate_view::**sentinel**) | | | | |
| operator-(enumerate_view::**iterator**,enumerate_view::**sentinel**) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ranges>` |  |  |
| template< ranges::view V >      requires /\*range-with-movable-references\*/<V>  class enumerate_view : public ranges::view_interface<enumerate_view<V>> | (1) | (since C++23) |
| namespace views {  inline constexpr /\* unspecified \*/ enumerate = /\* unspecified \*/; } | (2) | (since C++23) |
| Call signature |  |  |
| template< ranges::viewable_range R >      requires /\* see below \*/ constexpr /\* see below \*/ enumerate( R&& r ); |  | (since C++23) |
| Helper concepts |  |  |
| template< class R >      concept /\*range-with-movable-references\*/ =          ranges::input_range<R> &&          std::move_constructible<ranges::range_reference_t<R>> && std::move_constructible<ranges::range_rvalue_reference_t<R>>; | (3) | (exposition only\*) |
|  |  |  |

1) `enumerate_view` is a range adaptor that takes a `view` and produces a view of tuples. `i`th element (the tuple) of the resulting sequence holds:

- the value equal to `i`, which is a zero-based index of the element of underlying sequence, and
- the reference to the underlying element.
2) The name `views::enumerate` denotes a RangeAdaptorObject. Given a subexpression e, the expression views::enumerate(e) is expression-equivalent to enumerate_view<views::all_t<decltype((e))>>(e) for any suitable subexpression e.3) Ensures that the reference type of the underlying type can be moved.

`enumerate_view` models the concepts `random_access_range`, `bidirectional_range`, `forward_range`, `input_range`, `common_range`, and `sized_range` when the underlying view `V` models respective concepts.

### Data members

|  |  |
| --- | --- |
| Member name | Definition |
| `base_` (private) | An iterator to the underlying sequence of type `V`. (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `enumerate_view`   (public member function) |
| base | returns a copy of the underlying (adapted) view   (public member function) |
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
| **sentinel**(C++23) | the sentinel type (exposition-only member class template\*) |

### Helper templates

|  |  |  |
| --- | --- | --- |
| template< class View >  constexpr bool enable_borrowed_range<ranges::enumerate_view<View>> = ranges::enable_borrowed_range<View>; |  | (since C++23) |
|  |  |  |

This specialization of ranges::enable_borrowed_range makes `enumerate_view` satisfy `borrowed_range` when the underlying view satisfies it.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ranges_enumerate` | `202302L` | (C++23) | `std::ranges::enumerate_view` |

### Example

Run this code

```
#include <iostream>
#include <map>
#include <ranges>
#include <vector>
 
int main()
{
    constexpr static auto v = {'A', 'B', 'C', 'D'};
 
    for (auto const [index, letter] : std::views::enumerate(v))
        std::cout << '(' << index << ':' << letter << ") ";
    std::cout << '\n';
 
#if __cpp_lib_ranges_to_container
    // create a map using the position of each element as key
    auto m = v | std::views::enumerate | std::ranges::to<std::map>();
 
    for (auto const [key, value] : m)
        std::cout << '[' << key << "]:" << value << ' ';
    std::cout << '\n';
#endif
 
    std::vector<int> numbers{1, 3, 5, 7};
 
    // num is mutable even with const, which does not propagate to reference to
    // make it const, use `std::views::enumerate(numbers) | std::views::as_const`
    // or `std::views::enumerate(std::as_const(numbers))`
    for (auto const [index, num] : std::views::enumerate(numbers))
    {
        ++num; // the type is int&
        std::cout << numbers[index] << ' ';
    }
    std::cout << '\n';
}

```

Possible output:

```
(0:A) (1:B) (2:C) (3:D)
[0]:A [1]:B [2]:C [3]:D
2 4 6 8

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 26.7.23 Enumerate view [range.enumerate]

### See also

|  |  |
| --- | --- |
| ranges::iota_viewviews::iota(C++20) | a `view` consisting of a sequence generated by repeatedly incrementing an initial value (class template) (customization point object) |
| ranges::zip_viewviews::zip(C++23) | a `view` consisting of tuples of references to corresponding elements of the adapted views (class template) (customization point object) |
| ranges::elements_viewviews::elements(C++20) | takes a `view` consisting of **tuple-like** values and a number N and produces a `view` of Nth element of each tuple (class template) (range adaptor object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/enumerate_view&oldid=173592>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 July 2024, at 11:16.