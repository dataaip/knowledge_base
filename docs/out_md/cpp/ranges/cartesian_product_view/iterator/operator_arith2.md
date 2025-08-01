# operator+,-(ranges::cartesian_product_view::**iterator**)

From cppreference.com
< cpp‎ | ranges‎ | cartesian product view‎ | iterator
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

std::ranges::cartesian_product_view

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
| [cartesian_product_view::**iterator**::operator[]](operator_at.html "cpp/ranges/cartesian product view/iterator/operator at") | | | | |
| cartesian_product_view::**iterator**::operator++ cartesian_product_view::**iterator**::operator++(int) cartesian_product_view::**iterator**::operator-- cartesian_product_view::**iterator**::operator--(int) cartesian_product_view::**iterator**::operator+= cartesian_product_view::**iterator**::operator-= | | | | |
| cartesian_product_view::**iterator**::**next** | | | | |
| cartesian_product_view::**iterator**::**prev** | | | | |
| cartesian_product_view::**iterator**::**distance_from** | | | | |
| Non-member functions | | | | |
| operator==(cartesian_product_view::**iterator**) operator<=>(cartesian_product_view::**iterator**) | | | | |
| ****operator+(cartesian_product_view::**iterator**) operator-(cartesian_product_view::**iterator**)**** | | | | |
| iter_move(cartesian_product_view::**iterator**) | | | | |
| iter_swap(cartesian_product_view::**iterator**) | | | | |

|  |  |  |
| --- | --- | --- |
| friend constexpr /\*iterator\*/ operator+( const /\*iterator\*/& i,                                           difference_type n )     requires /\*cartesian-product-is-random-access\*/<Const, First, Vs...>; | (1) | (since C++23) |
| friend constexpr /\*iterator\*/ operator+( difference_type n,  const /\*iterator\*/& i )     requires /\*cartesian-product-is-random-access\*/<Const, First, Vs...>; | (2) | (since C++23) |
| friend constexpr /\*iterator\*/ operator-( const /\*iterator\*/& i,                                           difference_type n )     requires /\*cartesian-product-is-random-access\*/<Const, First, Vs...>; | (3) | (since C++23) |
| friend constexpr difference_type operator-( const /\*iterator\*/& i,  const /\*iterator\*/& j )      requires /\*cartesian-is-sized-sentinel\*/<Const, iterator_t, First, Vs...>; | (4) | (since C++23) |
| friend constexpr difference_type operator-( const /\*iterator\*/& i,  std::default_sentinel_t )      requires /\*cartesian-is-sized-sentinel\*/<Const, ranges::sentinel_t, First, Vs...>; | (5) | (since C++23) |
| friend constexpr difference_type operator-( std::default_sentinel_t s,  const /\*iterator\*/& i )      requires /\*cartesian-is-sized-sentinel\*/<Const, ranges::sentinel_t, First, Vs...>; | (6) | (since C++23) |
|  |  |  |

Performs iterator arithmetic or calculates the distance.

Let `current_` denote the underlying tuple of iterators and `parent_` denote the underlying pointer to `cartesian_product_view`.

1) Equivalent to: return /\*iterator\*/(i) += n;.2) Equivalent to: return i + n;.3) Equivalent to: return /\*iterator\*/(i) -= n;.4) Equivalent to: return i.`distance_from`(j.current_);.5) Let /\*end-tuple\*/ be an object of a type that is a specialization of tuple, such that:

- std::get<0>(/\*end-tuple\*/) has the same value as ranges::end(std::get<0>(i.parent_->bases_));
- std::get<N>(/\*end-tuple\*/) has the same value as ranges::begin(std::get<N>(i.parent_->bases_)) for every integer 1 ≤ N ≤ sizeof...(Vs).

Equivalent to: return i.`distance_from`(/\*end-tuple\*/);.6) Equivalent to: return -(i - s);.

These functions are not visible to ordinary unqualified or qualified lookup, and can only be found by argument-dependent lookup when `cartesian_product_view::iterator<Const>` is an associated class of the arguments.

### Parameters

|  |  |  |
| --- | --- | --- |
| i, j | - | the iterators |
| n | - | the position relative to current location |
| s | - | the sentinel |

### Return value

1,2) An incremented iterator.3) A decremented iterator.4) A distance between given iterators.5,6) A distance between given iterator and sentinel.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| operator++operator++(int)operator--operator--(int)operator+=operator-= | advances or decrements the underlying iterator   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/cartesian_product_view/iterator/operator_arith2&oldid=172635>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 June 2024, at 20:02.