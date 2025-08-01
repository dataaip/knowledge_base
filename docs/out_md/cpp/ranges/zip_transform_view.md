# std::ranges::views::zip_transform, std::ranges::zip_transform_view

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | views::all_tviews::all | | | | | | ref_view | | | | | | owning_view | | | | | | as_rvalue_viewviews::as_rvalue(C++23)(C++23) | | | | | | filter_viewviews::filter | | | | | | transform_viewviews::transform | | | | | | take_viewviews::take | | | | | | take_while_viewviews::take_while | | | | | | concat_viewviews::concat(C++26)(C++26) | | | | | | views::counted | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | drop_viewviews::drop | | | | | | drop_while_viewviews::drop_while | | | | | | join_viewviews::join | | | | | | join_with_viewviews::join_with(C++23)(C++23) | | | | | | lazy_split_viewviews::lazy_split | | | | | | split_viewviews::split | | | | | | common_viewviews::common | | | | | | cache_latest_viewviews::cache_latest")(C++26)(C++26) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_viewviews::reverse | | | | | | as_const_viewviews::as_const(C++23)(C++23) | | | | | | elements_viewviews::elements | | | | | | keys_viewviews::keys | | | | | | values_viewviews::values | | | | | | enumerate_viewviews::enumerate(C++23)(C++23) | | | | | | zip_viewviews::zip(C++23)(C++23) | | | | | | ****zip_transform_viewviews::zip_transform****(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_viewviews::adjacent(C++23)(C++23) | | | | | | views::pairwise(C++23) | | | | | | adjacent_transform_viewviews::adjacent_transform(C++23)(C++23) | | | | | | views::pairwise_transform(C++23) | | | | | | chunk_viewviews::chunk(C++23)(C++23) | | | | | | slide_viewviews::slide(C++23)(C++23) | | | | | | chunk_by_viewviews::chunk_by(C++23)(C++23) | | | | | | stride_viewviews::stride(C++23)(C++23) | | | | | | cartesian_product_viewviews::cartesian_product(C++23)(C++23) | | | | | |  | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range generators | | | | | | std::generator(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor closure objects | | | | | | range_adaptor_closure(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor objects | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Helper items | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **copyable-box** **movable-box**(until C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | **simple-view** | | | | | | **non-propagating-cache** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |  | | | | | |

****std::ranges::zip_transform_view****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| zip_transform_view::zip_transform_view | | | | |
| zip_transform_view::begin | | | | |
| zip_transform_view::end | | | | |
| zip_transform_view::size | | | | |
| Deduction guides | | | | |
| Iterator | | | | |
| Member functions | | | | |
| zip_transform_view::**iterator**::**iterator** | | | | |
| zip_transform_view::**iterator**::operator\* | | | | |
| [zip_transform_view::**iterator**::operator[]](zip_transform_view/iterator/operator_at.html "cpp/ranges/zip transform view/iterator/operator at") | | | | |
| zip_transform_view::**iterator**::operator++ zip_transform_view::**iterator**::operator++(int) zip_transform_view::**iterator**::operator-- zip_transform_view::**iterator**::operator--(int) zip_transform_view::**iterator**::operator+= zip_transform_view::**iterator**::operator-= | | | | |
| Non-member functions | | | | |
| operator==(zip_transform_view::**iterator**) operator<=>(zip_transform_view::**iterator**) | | | | |
| operator+(zip_transform_view::**iterator**) operator-(zip_transform_view::**iterator**) | | | | |
| Sentinel | | | | |
| Member functions | | | | |
| zip_transform_view::**sentinel**::**sentinel** | | | | |
| Non-member functions | | | | |
| operator==(zip_transform_view::**sentinel**) | | | | |
| operator-(zip_transform_view::**sentinel**) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ranges>` |  |  |
| template< std::move_constructible F, ranges::input_range... Views >      requires (ranges::view<Views> && ...) && (sizeof...(Views) > 0) &&                std::is_object_v<F> && std::regular_invocable<                    F&, ranges::range_reference_t<Views>...> &&                /\*can-reference\*/<std::invoke_result_t<                    F&, ranges::range_reference_t<Views>...>>  class zip_transform_view : public ranges::view_interface<zip_transform_view<F, Views...>> | (1) | (since C++23) |
| namespace views {  inline constexpr /\*unspecified\*/ zip_transform = /\*unspecified\*/; } | (2) | (since C++23) |
| Call signature |  |  |
| template< class F, ranges::viewable_range... Rs >      requires /\* see below \*/ constexpr auto zip_transform( F&& f, Rs&&... rs ); |  | (since C++23) |
|  |  |  |

1) `zip_transform_view` is a range adaptor that takes an invocable object and one or more `view`s, and produces a `view` whose `i`**th** element is the result of applying the invocable object to the `i`**th** elements of all views.  
A type `T` models the exposition-only concept /\*can-reference\*/ if and only if `T&` is a valid type.2) `views::zip_transform` is a customization point object.

When calling with one argument f, let `FD` be std::decay_t<decltype(f)>, if:

- `FD` models `copy_constructible`,
- FD& models `regular_invocable`, and
- std::invoke_result_t<FD&> is an object type,

then views::zip_transform(f) is expression-equivalent to ((void)f, auto(views::empty<std::decay_t<std::invoke_result_t<FD&>>>)). Otherwise, the call to `views::zip_transform` is ill-formed.

When calling with more than one arguments f and rs..., views::zip_transform(f, rs...) is expression-equivalent to ranges::zip_transform_view(f, rs...).

`zip_transform_view` models the concepts `random_access_range`, `bidirectional_range`, `forward_range`, `input_range`, `common_range`, and `sized_range` when the underlying ranges::zip_view<Views...> models respective concepts.

### Customization point objects

The name `views::zip_transform` denotes a **customization point object**, which is a const function object of a literal `semiregular` class type. For exposition purposes, the cv-unqualified version of its type is denoted as `__zip_transform_fn`.

All instances of `__zip_transform_fn` are equal. The effects of invoking different instances of type `__zip_transform_fn` on the same arguments are equivalent, regardless of whether the expression denoting the instance is an lvalue or rvalue, and is const-qualified or not (however, a volatile-qualified instance is not required to be invocable). Thus, `views::zip_transform` can be copied freely and its copies can be used interchangeably.

Given a set of types `Args...`, if std::declval<Args>()... meet the requirements for arguments to `views::zip_transform` above, `__zip_transform_fn` models

- std::invocable<__zip_transform_fn, Args...>,
- std::invocable<const __zip_transform_fn, Args...>,
- std::invocable<__zip_transform_fn&, Args...>, and
- std::invocable<const __zip_transform_fn&, Args...>.

Otherwise, no function call operator of `__zip_transform_fn` participates in overload resolution.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `zip_transform_view`   (public member function) |
| begin | returns an iterator to the beginning   (public member function) |
| end | returns an iterator or a sentinel to the end   (public member function) |
| size | returns the number of elements. Provided only if each underlying (adapted) range satisfies `sized_range`.   (public member function) |
| Inherited from std::ranges::view_interface | |
| empty | returns whether the derived view is empty. Provided if it satisfies `sized_range` or `forward_range`.   (public member function of `std::ranges::view_interface<D>`) |
| cbegin(C++23) | returns a constant iterator to the beginning of the range.   (public member function of `std::ranges::view_interface<D>`) |
| cend(C++23) | returns a sentinel for the constant iterator of the range.   (public member function of `std::ranges::view_interface<D>`) |
| operator bool | returns whether the derived view is not empty. Provided if ranges::empty is applicable to it.   (public member function of `std::ranges::view_interface<D>`) |
| front | returns the first element in the derived view. Provided if it satisfies `forward_range`.   (public member function of `std::ranges::view_interface<D>`) |
| back | returns the last element in the derived view. Provided if it satisfies `bidirectional_range` and `common_range`.   (public member function of `std::ranges::view_interface<D>`) |
| [operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") | returns the `n`th element in the derived view. Provided if it satisfies `random_access_range`.   (public member function of `std::ranges::view_interface<D>`) |

### Deduction guides

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `InnerView` (private) | ranges::zip_view<Views...>. (exposition-only member type\*) |
| `ziperator` (private) | - ranges::iterator_t<const InnerView> if Const is true, otherwise - ranges::iterator_t<InnerView>. (exposition-only member type\*) |
| `zentinel` (private) | - ranges::sentinel_t<const InnerView> if Const is true, otherwise - ranges::sentinel_t<InnerView>. (exposition-only member type\*) |

### Data members

|  |  |
| --- | --- |
| Member object | Definition |
| `zip_` (private) | An underlying view object of type `InnerView` (exposition-only member object\*) |
| `fun_` (private) | A wrapped invocable object of type **movable-box**`<F>` (exposition-only member object\*) |

### Nested classes

|  |  |
| --- | --- |
| **iterator** | the iterator type (exposition-only member class template\*) |
| **sentinel** | the sentinel type used when the underlying `zip_view` is not a `common_range` (exposition-only member class template\*) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ranges_zip` | `202110L` | (C++23) | ranges::zip_view, `std::ranges::zip_transform_view`, ranges::adjacent_view, ranges::adjacent_transform_view |

### Example

Run this code

```
#include <array>
#include <iostream>
#include <list>
#include <ranges>
#include <vector>
 
void print(auto const rem, auto const& r)
{
    std::cout << rem << '{'; 
    for (char o[]{0,' ',0}; auto const& e : r)
        std::cout << o << e, *o = ',';
    std::cout << "}\n";
}
 
int main()
{
    auto v1 = std::vector<float>{1, 2, 3};
    auto v2 = std::list<short>{1, 2, 3, 4};
    auto v3 = std::to_array({1, 2, 3, 4, 5});
 
    auto add = [](auto a, auto b, auto c) { return a + b + c; };
 
    auto sum = std::views::zip_transform(add, v1, v2, v3);
 
    print("v1:  ", v1);
    print("v2:  ", v2);
    print("v3:  ", v3);
    print("sum: ", sum);
}

```

Output:

```
v1:  {1, 2, 3}
v2:  {1, 2, 3, 4}
v3:  {1, 2, 3, 4, 5}
sum: {3, 6, 9}

```

### See also

|  |  |
| --- | --- |
| ranges::zip_viewviews::zip(C++23) | a `view` consisting of tuples of references to corresponding elements of the adapted views (class template) (customization point object) |
| ranges::transform_viewviews::transform(C++20) | a `view` of a sequence that applies a transformation function to each element (class template) (range adaptor object) |
| ranges::elements_viewviews::elements(C++20) | takes a `view` consisting of **tuple-like** values and a number N and produces a `view` of Nth element of each tuple (class template) (range adaptor object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&oldid=172616>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 June 2024, at 19:26.