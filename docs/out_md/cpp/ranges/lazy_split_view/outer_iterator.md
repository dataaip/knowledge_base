# std::ranges::lazy_split_view<V, Pattern>::**outer_iterator**

From cppreference.com
< cpp‎ | ranges‎ | lazy split view
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | views::all_tviews::all | | | | | | ref_view | | | | | | owning_view | | | | | | as_rvalue_viewviews::as_rvalue(C++23)(C++23) | | | | | | filter_viewviews::filter | | | | | | transform_viewviews::transform | | | | | | take_viewviews::take | | | | | | take_while_viewviews::take_while | | | | | | concat_viewviews::concat(C++26)(C++26) | | | | | | views::counted | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | drop_viewviews::drop | | | | | | drop_while_viewviews::drop_while | | | | | | join_viewviews::join | | | | | | join_with_viewviews::join_with(C++23)(C++23) | | | | | | lazy_split_viewviews::lazy_split | | | | | | split_viewviews::split | | | | | | common_viewviews::common | | | | | | cache_latest_viewviews::cache_latest")(C++26)(C++26) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_viewviews::reverse | | | | | | as_const_viewviews::as_const(C++23)(C++23) | | | | | | elements_viewviews::elements | | | | | | keys_viewviews::keys | | | | | | values_viewviews::values | | | | | | enumerate_viewviews::enumerate(C++23)(C++23) | | | | | | zip_viewviews::zip(C++23)(C++23) | | | | | | zip_transform_viewviews::zip_transform(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_viewviews::adjacent(C++23)(C++23) | | | | | | views::pairwise(C++23) | | | | | | adjacent_transform_viewviews::adjacent_transform(C++23)(C++23) | | | | | | views::pairwise_transform(C++23) | | | | | | chunk_viewviews::chunk(C++23)(C++23) | | | | | | slide_viewviews::slide(C++23)(C++23) | | | | | | chunk_by_viewviews::chunk_by(C++23)(C++23) | | | | | | stride_viewviews::stride(C++23)(C++23) | | | | | | cartesian_product_viewviews::cartesian_product(C++23)(C++23) | | | | | |  | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range generators | | | | | | std::generator(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor closure objects | | | | | | range_adaptor_closure(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range adaptor objects | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Helper items | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **copyable-box** **movable-box**(until C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | **simple-view** | | | | | | **non-propagating-cache** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | |  | | | | | |

std::ranges::lazy_split_view

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| lazy_split_view::lazy_split_view | | | | |
| lazy_split_view::base | | | | |
| lazy_split_view::begin | | | | |
| lazy_split_view::end | | | | |
| Nested classes | | | | |
| ****lazy_split_view::**outer_iterator****** | | | | |
| lazy_split_view::**outer_iterator**::value_type | | | | |
| lazy_split_view::**inner_iterator** | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| template< bool Const >  struct /\*outer_iterator\*/; |  | (since C++20)  (exposition only\*) |
|  |  |  |

The return type of `lazy_split_view::begin`, and of `lazy_split_view::end` when the underlying view is a `common_range` and `forward_range`.

If either `V` or `Pattern` is not a simple view (e.g. if ranges::iterator_t<const V> is invalid or different from ranges::iterator_t<V>), `Const` is true for iterators returned from the const overloads, and false otherwise. If `V` is a simple view, `Const` is true if and only if `V` is a `forward_range`.

### Member types

|  |  |
| --- | --- |
| Member | Definition |
| `Parent` | `maybe-const` ﻿<Const, ranges::lazy_split_view> (exposition-only member type\*) |
| `Base` | `maybe-const` ﻿<Const, V> (exposition-only member type\*) |
| `iterator_concept` | - std::forward_iterator_tag, if `Base` models `forward_range`, - std::input_iterator_tag, otherwise |
| `iterator_category` (present only if `Base` models `forward_range`) | std::input_iterator_tag |
| value_type | the value type of the `outer_iterator`   (public member class) |
| `difference_type` | ranges::range_difference_t<Base> |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| Parent\* `parent_` (private) | a pointer to the parent object `lazy_split_view` (exposition-only member object\*) |
| ranges::iterator_t<Base> `current_` (private)  (present only if `V` models `forward_range`) | an iterator into the underlying `view` (exposition-only member object\*) |
| bool `trailing_empty_` (private) | a flag that indicates whether an empty trailing subrange (if any) was reached (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an iterator   (public member function) |
| operator\* | returns the current subrange   (public member function) |
| operator++operator++(int) | advances the iterator   (public member function) |
| **cur** | returns conditionally a reference to the `current_` (if present) or to the \*`parent_`->`current_` (exposition-only member function\*) |

### Member functions

## std::ranges::lazy_split_view::**outer_iterator** ﻿::**outer_iterator**

|  |  |  |
| --- | --- | --- |
| /\*outer_iterator\*/() = default; | (1) | (since C++20) |
| constexpr explicit /\*outer_iterator\*/( Parent& parent )      requires (!ranges::forward_range<Base>); | (2) | (since C++20) |
| constexpr /\*outer_iterator\*/( Parent& parent,  ranges::iterator_t<Base> current )     requires ranges::forward_range<Base>; | (3) | (since C++20) |
| constexpr /\*outer_iterator\*/( /\*outer_iterator\*/<!Const> i )      requires Const && std::convertible_to<ranges::iterator_t<V>, ranges::iterator_t<Base>>; | (4) | (since C++20) |
|  |  |  |

1) Value initializes the non-static data members with their default member initializer, that is:

- parent_ = nullptr;,
- current_ = iterator_t<Base>(); (present only if `V` models `forward_range`),
2) Initializes `parent_` with std::addressof(parent).3) Initializes `parent_` with std::addressof(parent) and `current_` with std::move(current).4) Initializes `parent_` with i.parent_, `current_` with std::move(i.current_), and `trailing_empty_` with t.trailing_empty_.

The `trailing_empty_` is initialized with its default member initializer to false.

## std::ranges::lazy_split_view::**outer_iterator** ﻿::operator\*

|  |  |  |
| --- | --- | --- |
| constexpr value_type operator\*() const; |  | (since C++20) |
|  |  |  |

Equivalent to return value_type{\*this};.

## std::ranges::lazy_split_view::**outer_iterator** ﻿::operator++

|  |  |  |
| --- | --- | --- |
| constexpr /\*outer_iterator\*/& operator++(); | (1) | (since C++20) |
| constexpr decltype(auto) operator++(int); | (2) | (since C++20) |
|  |  |  |

1) The function body is equivalent to

```
const auto end = ranges::end(parent_->base_);
if (/*cur*/() == end)
{
    trailing_empty_ = false;
    return *this;
}
const auto [pbegin, pend] = ranges::subrange{parent_->pattern_};
if (pbegin == pend)
    ++/*cur*/();
else if constexpr (/*tiny_range*/<Pattern>)
{
    /*cur*/() = ranges::find(std::move(/*cur*/()), end, *pbegin);
    if (/*cur*/() != end)
    {
        ++/*cur*/();
        if (/*cur*/() == end)
            trailing_empty_ = true;
    }
}
else
{
    do
    {
        auto [b, p] = ranges::mismatch(/*cur*/(), end, pbegin, pend);
        if (p == pend)
        {
            /*cur*/() = b;
            if (/*cur*/() == end)
                trailing_empty_ = true;
            break; // The pattern matched; skip it
        }
    } while (++/*cur*/() != end);
}
return *this;

```

2) Equivalent to

```
if constexpr (ranges::forward_range<Base>)
{
    auto tmp = *this;
    ++*this;
    return tmp;
}
else
{
    ++*this; // no return statement
}

```

## std::ranges::lazy_split_view::**outer_iterator** ﻿::**cur** ﻿()

|  |  |  |
| --- | --- | --- |
| constexpr auto& /\*cur\*/() noexcept; | (1) | (since C++20)  (exposition only\*) |
| constexpr auto& /\*cur\*/() const noexcept; | (2) | (since C++20)  (exposition only\*) |
|  |  |  |

This convenience member function is referred to from /\*outer_iterator\*/::operator++(), from the non-member operator==(const /\*outer_iterator\*/&, std::default_sentinel_t), and from some member functions of the possible implementation of `inner_iterator`.

1,2) Equivalent to

```
if constexpr (ranges::forward_range<V>)
    return current_;
else
    return *parent->current_;

```

### Non-member functions

|  |  |
| --- | --- |
| operator==(C++20) | compares the underlying iterators or the underlying iterator and std::default_sentinel   (function) |

## operator==(std::ranges::split_view::**outer_iterator**)

|  |  |  |
| --- | --- | --- |
| friend constexpr bool operator==( const /\*outer_iterator\*/& x,  const /\*outer_iterator\*/& y )       requires forward_range<Base>; | (1) | (since C++20) |
| friend constexpr bool operator==( const /\*outer_iterator\*/& x,                                    std::default_sentinel_t ); | (2) | (since C++20) |
|  |  |  |

1) Equivalent to return x.current_ == y.current_ and x.trailing_empty_ == y.trailing_empty_;.2) Equivalent to return x./\*cur\*/() == ranges::end(x.parent_->base_) and !x.trailing_empty_;.

The `!=` operator is synthesized from `operator==`.

These functions are not visible to ordinary unqualified or qualified lookup, and can only be found by argument-dependent lookup when `std::ranges::split_view::outer_iterator` is an associated class of the arguments.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3904 | C++20 | `trailing_empty_` was not initialized in constructor (4) | initialized |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/lazy_split_view/outer_iterator&oldid=179921>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2025, at 15:07.