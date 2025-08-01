# std::ranges::views::cartesian_product, std::ranges::cartesian_product_view

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | views::all_tviews::all | | | | | | ref_view | | | | | | owning_view | | | | | | as_rvalue_viewviews::as_rvalue(C++23)(C++23) | | | | | | filter_viewviews::filter | | | | | | transform_viewviews::transform | | | | | | take_viewviews::take | | | | | | take_while_viewviews::take_while | | | | | | concat_viewviews::concat(C++26)(C++26) | | | | | | views::counted | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | drop_viewviews::drop | | | | | | drop_while_viewviews::drop_while | | | | | | join_viewviews::join | | | | | | join_with_viewviews::join_with(C++23)(C++23) | | | | | | lazy_split_viewviews::lazy_split | | | | | | split_viewviews::split | | | | | | common_viewviews::common | | | | | | cache_latest_viewviews::cache_latest")(C++26)(C++26) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_viewviews::reverse | | | | | | as_const_viewviews::as_const(C++23)(C++23) | | | | | | elements_viewviews::elements | | | | | | keys_viewviews::keys | | | | | | values_viewviews::values | | | | | | enumerate_viewviews::enumerate(C++23)(C++23) | | | | | | zip_viewviews::zip(C++23)(C++23) | | | | | | zip_transform_viewviews::zip_transform(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_viewviews::adjacent(C++23)(C++23) | | | | | | views::pairwise(C++23) | | | | | | adjacent_transform_viewviews::adjacent_transform(C++23)(C++23) | | | | | | views::pairwise_transform(C++23) | | | | | | chunk_viewviews::chunk(C++23)(C++23) | | | | | | slide_viewviews::slide(C++23)(C++23) | | | | | | chunk_by_viewviews::chunk_by(C++23)(C++23) | | | | | | stride_viewviews::stride(C++23)(C++23) | | | | | | ****cartesian_product_viewviews::cartesian_product****(C++23)(C++23) | | | | | |  | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range generators | | | | | | std::generator(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor closure objects | | | | | | range_adaptor_closure(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor objects | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Helper items | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **copyable-box** **movable-box**(until C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | **simple-view** | | | | | | **non-propagating-cache** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |  | | | | | |

****std::ranges::cartesian_product_view****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| cartesian_product_view::cartesian_product_view | | | | |
| cartesian_product_view::begin | | | | |
| cartesian_product_view::end | | | | |
| cartesian_product_view::size | | | | |
| Deduction guides | | | | |
| Iterator | | | | |
| Member functions | | | | |
| cartesian_product_view::**iterator**::**iterator** | | | | |
| cartesian_product_view::**iterator**::operator\* | | | | |
| [cartesian_product_view::**iterator**::operator[]](cartesian_product_view/iterator/operator_at.html "cpp/ranges/cartesian product view/iterator/operator at") | | | | |
| cartesian_product_view::**iterator**::operator++ cartesian_product_view::**iterator**::operator++(int) cartesian_product_view::**iterator**::operator-- cartesian_product_view::**iterator**::operator--(int) cartesian_product_view::**iterator**::operator+= cartesian_product_view::**iterator**::operator-= | | | | |
| cartesian_product_view::**iterator**::**next** | | | | |
| cartesian_product_view::**iterator**::**prev** | | | | |
| cartesian_product_view::**iterator**::**distance_from** | | | | |
| Non-member functions | | | | |
| operator==(cartesian_product_view::**iterator**) operator<=>(cartesian_product_view::**iterator**) | | | | |
| operator+(cartesian_product_view::**iterator**) operator-(cartesian_product_view::**iterator**) | | | | |
| iter_move(cartesian_product_view::**iterator**) | | | | |
| iter_swap(cartesian_product_view::**iterator**) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ranges>` |  |  |
| template< ranges::input_range First, ranges::forward_range... Vs >      requires (ranges::view<First> && ... && ranges::view<Vs>)  class cartesian_product_view : public ranges::view_interface<cartesian_product_view<First, Vs...>> | (1) | (since C++23) |
| namespace views {  inline constexpr /\*unspecified\*/ cartesian_product = /\*unspecified\*/; } | (2) | (since C++23) |
| Call signature |  |  |
| template< ranges::viewable_range... Rs >      requires /\* see below \*/ constexpr ranges::view auto cartesian_product( Rs&&... rs ); |  | (since C++23) |
| Helper concepts |  |  |
| template< bool Const, class First, class... Vs >  concept /\*cartesian-product-is-random-access\*/ =      (ranges::random_access_range</\*maybe-const\*/<Const, First>> && ... &&          (ranges::random_access_range</\*maybe-const\*/<Const, Vs>> && ranges::sized_range</\*maybe-const\*/<Const, Vs>>)); | (3) | (exposition only\*) |
| template< class R >  concept /\*cartesian-product-common-arg\*/ =      ranges::common_range<R> || (ranges::sized_range<R> && ranges::random_access_range<R>); | (4) | (exposition only\*) |
| template< bool Const, class First, class... Vs >  concept /\*cartesian-product-is-bidirectional\*/ =      (ranges::bidirectional_range</\*maybe-const\*/<Const, First>> && ... &&          (ranges::bidirectional_range</\*maybe-const\*/<Const, Vs>> && /\*cartesian-product-common-arg\*/</\*maybe-const\*/<Const, Vs>>)); | (5) | (exposition only\*) |
| template< class First, class... Vs >  concept /\*cartesian-product-is-common\*/ = /\*cartesian-product-common-arg\*/<First>; | (6) | (exposition only\*) |
| template< class... Vs >  concept /\*cartesian-product-is-sized\*/ = (ranges::sized_range<Vs> && ...); | (7) | (exposition only\*) |
| template< bool Const, template<class> class FirstSent, class First, class... Vs >  concept /\*cartesian-is-sized-sentinel\*/ =      (std::sized_sentinel_for<FirstSent</\*maybe-const\*/<Const, First>>,          ranges::iterator_t</\*maybe-const\*/<Const, First>>> && ... &&              (ranges::sized_range</\*maybe-const\*/<Const, Vs>> &&                  std::sized_sentinel_for<ranges::iterator_t<                      /\*maybe-const\*/<Const, Vs>>, ranges::iterator_t</\*maybe-const\*/<Const, Vs>>>)); | (8) | (exposition only\*) |
| Helper function templates |  |  |
| template< /\*cartesian-product-common-arg\*/ R >  constexpr auto /\*cartesian-common-arg-end\*/( R& r )  {      if constexpr (ranges::common_range<R>)          return ranges::end(r);      else          return ranges::begin(r) + ranges::distance(r); } | (9) | (exposition only\*) |
|  |  |  |

1) `cartesian_product_view` is a range adaptor that takes **n** `view`s, where **n > 0**, and produces a `view` of tuples calculated by the n-ary cartesian product of the provided ranges. The size of produced view is a multiple of sizes of provided ranges, while each element is a tuple (of references) of the size **n**.2) `views::cartesian_product` is a customization point object.

- When calling with no argument, views::cartesian_product() is expression-equivalent to views::single(std::tuple()).
- Otherwise, views::cartesian_product(rs...) is expression-equivalent to ranges::cartesian_product_view<views::all_t<decltype((rs))>...>(rs...).
3) Determines if `cartesian_product` is a random access range (see also `random_access_range`).4) Determines if `cartesian_product` is a common range (see also `common_range`).5) Determines if `cartesian_product` is a bidirectional range (see also `bidirectional_range`).6) Determines if `cartesian_product` satisfies the helper concept /\*cartesian-product-is-common\*/ (see also `common_range`).7) Determines if `cartesian_product` is a sized range (see also `sized_range`).8) Determines if `cartesian_product` uses sized sentinel.9) Returns the end of the produced `view`. Participates in overload resolution only if `cartesian_product` satisfies the helper concept /\*cartesian-product-common-arg\*/.

The `First` `range` passed to `cartesian_product_view` is treated specially, since it is only passed through a single time. As a result, several constrains are relaxed on it:

- `First` is an `input_range` instead of `forward_range`;
- `First` does not have to be a `sized_range` in order for the `cartesian_product_view` to be `random_access_range` or `common_range`;
- `First` does not have to be `common_range` in order for the `cartesian_product_view` to be `bidirectional_range`.

### Customization point objects

The name `views::cartesian_product` denotes a **customization point object**, which is a const function object of a literal `semiregular` class type. For exposition purposes, the cv-unqualified version of its type is denoted as `__cartesian_product_fn`.

All instances of `__cartesian_product_fn` are equal. The effects of invoking different instances of type `__cartesian_product_fn` on the same arguments are equivalent, regardless of whether the expression denoting the instance is an lvalue or rvalue, and is const-qualified or not (however, a volatile-qualified instance is not required to be invocable). Thus, `views::cartesian_product` can be copied freely and its copies can be used interchangeably.

Given a set of types `Args...`, if std::declval<Args>()... meet the requirements for arguments to `views::cartesian_product` above, `__cartesian_product_fn` models

- std::invocable<__cartesian_product_fn, Args...>,
- std::invocable<const __cartesian_product_fn, Args...>,
- std::invocable<__cartesian_product_fn&, Args...>, and
- std::invocable<const __cartesian_product_fn&, Args...>.

Otherwise, no function call operator of `__cartesian_product_fn` participates in overload resolution.

### Data members

|  |  |
| --- | --- |
| Member | Definition |
| std::tuple<First, Vs...> `base_` (private) | An object that holds all adapted `view` objects. (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `cartesian_product_view`   (public member function) |
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
| **iterator** | the iterator type (exposition-only member class template\*) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ranges_cartesian_product` | `202207L` | (C++23) | `std::ranges::cartesian_product_view` |

### Example

Run this code

```
#include <array>
#include <iostream>
#include <list>
#include <ranges>
#include <string>
#include <vector>
 
void print(std::tuple<char const&, int const&, std::string const&> t, int pos)
{
    const auto& [a, b, c] = t;
    std::cout << '(' << a << ' ' << b << ' ' << c << ')' << (pos % 4 ? " " : "\n");
}
 
int main()
{
    const auto x = std::array{'A', 'B'};
    const auto y = std::vector{1, 2, 3};
    const auto z = std::list<std::string>{"α", "β", "γ", "δ"};
 
    for (int i{1}; auto const& tuple : std::views::cartesian_product(x, y, z))
        print(tuple, i++);
}

```

Output:

```
(A 1 α) (A 1 β) (A 1 γ) (A 1 δ)
(A 2 α) (A 2 β) (A 2 γ) (A 2 δ)
(A 3 α) (A 3 β) (A 3 γ) (A 3 δ)
(B 1 α) (B 1 β) (B 1 γ) (B 1 δ)
(B 2 α) (B 2 β) (B 2 γ) (B 2 δ)
(B 3 α) (B 3 β) (B 3 γ) (B 3 δ)

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 26.7.31 Cartesian product view [range.stride]

### See also

|  |  |
| --- | --- |
| ranges::zip_viewviews::zip(C++23) | a `view` consisting of tuples of references to corresponding elements of the adapted views (class template) (customization point object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/cartesian_product_view&oldid=177003>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 October 2024, at 19:44.