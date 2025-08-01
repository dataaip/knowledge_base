# std::ranges::join_view<V>::**iterator**

From cppreference.com
< cpp‎ | ranges‎ | join view
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

std::ranges::join_view

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| join_view::join_view | | | | |
| join_view::base | | | | |
| join_view::begin | | | | |
| join_view::end | | | | |
| Deduction guides | | | | |
| ****Iterator**** | | | | |
| join_view::**iterator**::**iterator** | | | | |
| join_view::**iterator**::operator\* join_view::**iterator**::operator-> | | | | |
| join_view::**iterator**::operator++ join_view::**iterator**::operator++(int) join_view::**iterator**::operator-- join_view::**iterator**::operator--(int) | | | | |
| join_view::**iterator**::**satisfy** | | | | |
| operator==(join_view::**iterator**) | | | | |
| iter_move(join_view::**iterator**) | | | | |
| iter_swap(join_view::**iterator**) | | | | |
| Sentinel | | | | |
| join_view::**sentinel**::**sentinel** | | | | |
| operator==(join_view::**iterator**,join_view::**sentinel**) | | | | |

|  |  |  |
| --- | --- | --- |
| template< bool Const >  class /\*iterator\*/ |  | (since C++20)  (exposition only\*) |
|  |  |  |

The return type of `join_view::begin`, and of `join_view::end` when both the outer range `V` and the inner range ranges::range_reference_t<V> satisfy `common_range` and the parent `join_view` is a `forward_range`.

If `V` is not a simple view (e.g. if ranges::iterator_t<const V> is invalid or different from ranges::iterator_t<V>), `Const` is true for iterators returned from the const overloads, and false otherwise. If `V` is a simple view, `Const` is true if and only if ranges::range_reference_t<V> is a reference.

### Member types

|  |  |
| --- | --- |
| Member | Definition |
| `Parent` | `maybe-const` ﻿<Const, ranges::join_view<V>> (exposition-only member type\*) |
| `Base` | `maybe-const` ﻿<Const, V> (exposition-only member type\*) |
| `OuterIter` | ranges::iterator_t<Base> (exposition-only member type\*) |
| `InnerIter` | ranges::iterator_t<ranges::range_reference_t<Base>> (exposition-only member type\*) |
| `iterator_concept` | - std::bidirectional_iterator_tag, if ranges::range_reference_t<Base> is a reference type, and `Base` and ranges::range_reference_t<Base> each model `bidirectional_range`; - std::forward_iterator_tag, if ranges::range_reference_t<Base> is a reference type, and `Base` and ranges::range_reference_t<Base> each model `forward_range`; - std::input_iterator_tag otherwise. |
| `iterator_category` (conditionally present) | Defined only if `iterator::iterator_concept` (see above) denotes std::forward_iterator_tag.  Let `OUTERC` be std::iterator_traits<ranges::iterator_t<Base>>::iterator_category, and let `INNERC` be std::iterator_traits<ranges::iterator_t<ranges::range_reference_t<Base>>>::     iterator_category.   - std::bidirectional_iterator_tag, if `OUTERC` and `INNERC` each model std::derived_from<std::bidirectional_iterator_tag>; - std::forward_iterator_tag, if `OUTERC` and `INNERC` each model std::derived_from<std::forward_iterator_tag>; - std::input_iterator_tag otherwise. |
| `value_type` | ranges::range_value_t<ranges::range_reference_t<Base>> |
| `difference_type` | std::common_type_t<ranges::range_difference_t<Base>,                    ranges::range_difference_t<ranges::range_reference_t<Base>>> |

### Data members

|  |  |
| --- | --- |
| Member | Definition |
| `OuterIter` `outer_` (private) | An outer iterator (exposition-only member object\*) |
| `InnerIter` `inner_` (private) | An inner iterator (exposition-only member object\*) |
| `Parent*` `parent_` (private) | A pointer to the parent object (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an iterator   (public member function) |
| operator\*operator-> | accesses the element   (public member function) |
| operator++operator++(int)operator--operator--(int) | advances or decrements the underlying iterators   (public member function) |
| **satisfy** | skips over empty inner ranges (exposition-only member function\*) |

### Non-member functions

|  |  |
| --- | --- |
| operator==(C++20) | compares the underlying iterators   (function) |
| iter_move(C++20) | casts the result of dereferencing the underlying iterator to its associated rvalue reference type   (function) |
| iter_swap(C++20) | swaps the objects pointed to by two underlying iterators   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view/iterator&oldid=175905>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 September 2024, at 11:44.