# std::ranges::views::as_const, std::ranges::as_const_view

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | views::all_tviews::all | | | | | | ref_view | | | | | | owning_view | | | | | | as_rvalue_viewviews::as_rvalue(C++23)(C++23) | | | | | | filter_viewviews::filter | | | | | | transform_viewviews::transform | | | | | | take_viewviews::take | | | | | | take_while_viewviews::take_while | | | | | | concat_viewviews::concat(C++26)(C++26) | | | | | | views::counted | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | drop_viewviews::drop | | | | | | drop_while_viewviews::drop_while | | | | | | join_viewviews::join | | | | | | join_with_viewviews::join_with(C++23)(C++23) | | | | | | lazy_split_viewviews::lazy_split | | | | | | split_viewviews::split | | | | | | common_viewviews::common | | | | | | cache_latest_viewviews::cache_latest")(C++26)(C++26) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_viewviews::reverse | | | | | | ****as_const_viewviews::as_const****(C++23)(C++23) | | | | | | elements_viewviews::elements | | | | | | keys_viewviews::keys | | | | | | values_viewviews::values | | | | | | enumerate_viewviews::enumerate(C++23)(C++23) | | | | | | zip_viewviews::zip(C++23)(C++23) | | | | | | zip_transform_viewviews::zip_transform(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_viewviews::adjacent(C++23)(C++23) | | | | | | views::pairwise(C++23) | | | | | | adjacent_transform_viewviews::adjacent_transform(C++23)(C++23) | | | | | | views::pairwise_transform(C++23) | | | | | | chunk_viewviews::chunk(C++23)(C++23) | | | | | | slide_viewviews::slide(C++23)(C++23) | | | | | | chunk_by_viewviews::chunk_by(C++23)(C++23) | | | | | | stride_viewviews::stride(C++23)(C++23) | | | | | | cartesian_product_viewviews::cartesian_product(C++23)(C++23) | | | | | |  | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range generators | | | | | | std::generator(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor closure objects | | | | | | range_adaptor_closure(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor objects | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Helper items | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **copyable-box** **movable-box**(until C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | **simple-view** | | | | | | **non-propagating-cache** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ranges>` |  |  |
| template< ranges::view V >      requires ranges::input_range<V>  class as_const_view : public ranges::view_interface<as_const_view<V>> | (1) | (since C++23) |
| namespace views {  inline constexpr /\* unspecified \*/ as_const = /\* unspecified \*/; } | (2) | (since C++23) |
| Call signature |  |  |
| template< ranges::viewable_range R >      requires /\* see below \*/ constexpr ranges::view auto as_const( R&& r ); |  | (since C++23) |
|  |  |  |

1) A range adaptor that represents a view of underlying `view` that is also a `constant_range`. An `as_const_view` always has read-only elements (if not empty).2) RangeAdaptorObject. Let e be a subexpression, let T be decltype((e)), and let U be std::remove_cvref_t<T>. Then the expression views::as_const(e) is expression-equivalent to:

- views::all(e), if it is a well-formed expression and views::all_t<T> models `constant_range`;
- otherwise, std::span<const X, Extent>(e) for some type `X` and some extent `Extent` if `U` denotes std::span<X, Extent>;
- otherwise, ranges::ref_view(static_cast<const X&>(e.base())) if `U` denotes ranges::ref_view<X> for some type `X` and const X models `constant_range`;
- otherwise, ranges::ref_view(static_cast<const U&>(e)) if `e` is an lvalue, const U models `constant_range`, and `U` does not model `view`.
- otherwise, as_const_view{e}.

`as_const_view` always models `constant_range`, and it models the `contiguous_range`, `random_access_range`, `bidirectional_range`, `forward_range`, `borrowed_range`, `common_range`, and `sized_range` when the underlying view `V` models respective concepts.

### Data members

|  |  |
| --- | --- |
| Member object | Definition |
| `base_` (private) | The underlying view of type `V`. (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an `as_const_view`   (public member function) |
| base | returns the underlying view `V`   (public member function) |
| begin | returns the beginning iterator of the `as_const_view`   (public member function) |
| end | returns the end iterator of the `as_const_view`   (public member function) |
| size | returns the size of the view if it is bounded   (public member function) |
| Inherited from std::ranges::view_interface | |
| empty | returns whether the derived view is empty. Provided if it satisfies `sized_range` or `forward_range`.   (public member function of `std::ranges::view_interface<D>`) |
| cbegin(C++23) | returns a constant iterator to the beginning of the range.   (public member function of `std::ranges::view_interface<D>`) |
| cend(C++23) | returns a sentinel for the constant iterator of the range.   (public member function of `std::ranges::view_interface<D>`) |
| operator bool | returns whether the derived view is not empty. Provided if ranges::empty is applicable to it.   (public member function of `std::ranges::view_interface<D>`) |
| data | gets the address of derived view's data. Provided if its iterator type satisfies `contiguous_iterator`.   (public member function of `std::ranges::view_interface<D>`) |
| front | returns the first element in the derived view. Provided if it satisfies `forward_range`.   (public member function of `std::ranges::view_interface<D>`) |
| back | returns the last element in the derived view. Provided if it satisfies `bidirectional_range` and `common_range`.   (public member function of `std::ranges::view_interface<D>`) |
| [operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") | returns the `n`th element in the derived view. Provided if it satisfies `random_access_range`.   (public member function of `std::ranges::view_interface<D>`) |

## std::ranges::as_const_view::as_const_view

|  |  |  |
| --- | --- | --- |
| as_const_view() requires std::default_initializable<V> = default; | (1) | (since C++23) |
| constexpr explicit as_const_view( V base ); | (2) | (since C++23) |
|  |  |  |

1) Value-initializes `base_` via its default member initializer (= V()).2) Initializes `base_` with std::move(base).

### Parameters

|  |  |  |
| --- | --- | --- |
| base | - | a view |

## std::ranges::as_const_view::base

|  |  |  |
| --- | --- | --- |
| constexpr V base() const& requires std::copy_constructible<V>; | (1) | (since C++23) |
| constexpr V base() &&; | (2) | (since C++23) |
|  |  |  |

Returns the underlying view.

1) Copy-constructs the result from the underlying view. Equivalent to return base_;.2) Move-constructs the result from the underlying view. Equivalent to return std::move(base_);.

## std::ranges::as_const_view::begin

|  |  |  |
| --- | --- | --- |
| constexpr auto begin() requires (!__simple_view<V>); | (1) | (since C++23) |
| constexpr auto begin() const requires ranges::range<const V>; | (2) | (since C++23) |
|  |  |  |

Returns the constant iterator of the view.

1,2) Equivalent to return ranges::cbegin(base_);

## std::ranges::as_const_view::end

|  |  |  |
| --- | --- | --- |
| constexpr auto end() requires (!__simple_view<V>); | (1) | (since C++23) |
| constexpr auto end() const requires ranges::range<const V>; | (2) | (since C++23) |
|  |  |  |

Returns the constant sentinel of the view.

1,2) Equivalent to return ranges::cend(base_);

## std::ranges::as_const_view::size

|  |  |  |
| --- | --- | --- |
| constexpr auto size() requires ranges::sized_range<V>; | (1) | (since C++23) |
| constexpr auto size() const requires ranges::sized_range<const V>; | (2) | (since C++23) |
|  |  |  |

Returns the size of the view if the view is bounded.

1,2) Equivalent to return ranges::size(base_);

### Deduction guides

|  |  |  |
| --- | --- | --- |
| template< class R >  as_const_view( R&& ) -> as_const_view<views::all_t<R>>; |  | (since C++23) |
|  |  |  |

### Helper templates

|  |  |  |
| --- | --- | --- |
| template< class T >  constexpr bool enable_borrowed_range<std::ranges::as_const_view<T>> = ranges::enable_borrowed_range<T>; |  | (since C++23) |
|  |  |  |

This specialization of std::ranges::enable_borrowed_range makes `as_const_view` satisfy `borrowed_range` when the underlying view satisfies it.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ranges_as_const` | `202207L` | (C++23) | `ranges::as_const_view`, std::const_iterator |

### Example

Run this code

```
#include <cassert>
#include <ranges>
 
int main()
{
    int x[]{1, 2, 3, 4, 5};
 
    auto v1 = x | std::views::drop(2);
    assert(v1.back() == 5);
    v1[0]++; // OK, can modify non-const element
 
    auto v2 = x | std::views::drop(2) | std::views::as_const;
    assert(v2.back() == 5);
    // v2[0]++; // Compile-time error, cannot modify read-only element
}

```

### See also

|  |  |
| --- | --- |
| ranges::as_rvalue_viewviews::as_rvalue(C++23) | a `view` of a sequence that casts each element to an rvalue (class template) (range adaptor object) |
| ranges::cbegin(C++20) | returns an iterator to the beginning of a read-only range (customization point object) |
| ranges::cend(C++20) | returns a sentinel indicating the end of a read-only range (customization point object) |
| as_const(C++17) | obtains a reference to const to its argument   (function template) |
| basic_const_iterator(C++23) | iterator adaptor that converts an iterator into a constant iterator   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/as_const_view&oldid=172506>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 June 2024, at 14:47.