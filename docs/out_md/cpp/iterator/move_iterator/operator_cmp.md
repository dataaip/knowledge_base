# operator==,!=,<,<=,>,>=,<=>(std::move_iterator)

From cppreference.com
< cpp‎ | iterator‎ | move iterator
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

Iterator library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Iterator concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirectly_readable(C++20) | | | | | | indirectly_writable(C++20) | | | | | | weakly_incrementable(C++20) | | | | | | incrementable(C++20) | | | | | | **is-integer-like** **is-signed-integer-like**(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sentinel_for(C++20) | | | | | | sized_sentinel_for(C++20) | | | | | | input_iterator(C++20) | | | | | | output_iterator(C++20) | | | | | | input_or_output_iterator(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward_iterator(C++20) | | | | | | bidirectional_iterator(C++20) | | | | | | random_access_iterator(C++20) | | | | | | contiguous_iterator(C++20) | | | | | |  | | | | | |  | | | | | |
| Iterator primitives | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tagcontiguous_iterator_tag(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iter_value_titer_difference_titer_reference_titer_const_reference_titer_rvalue_reference_titer_common_reference_t(C++20)(C++20)(C++20)(C++23)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iterator(deprecated in C++17) | | | | | | iterator_traits | | | | | | incrementable_traits(C++20) | | | | | | indirectly_readable_traits(C++20) | | | | | |  | | | | | |  | | | | | |
| Algorithm concepts and utilities | | | | |
| Indirect callable concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirectly_unary_invocableindirectly_regular_unary_invocable(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirect_unary_predicate(C++20) | | | | | | indirect_binary_predicate(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirect_equivalence_relation(C++20) | | | | | | indirect_strict_weak_order(C++20) | | | | | |
| Common algorithm requirements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirectly_movable(C++20) | | | | | | indirectly_movable_storable(C++20) | | | | | | indirectly_copyable(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirectly_copyable_storable(C++20) | | | | | | indirectly_swappable(C++20) | | | | | | indirectly_comparable(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | permutable(C++20) | | | | | | mergeable(C++20) | | | | | | sortable(C++20) | | | | | |
| Utilities | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirect_result_t(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | projected(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | projected_value_t(C++26) | | | | | |
| Iterator adaptors | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_iterator | | | | | | make_reverse_iterator(C++14) | | | | | | move_iterator(C++11) | | | | | | make_move_iterator(C++11) | | | | | | default_sentinel_tdefault_sentinel(C++20)(C++20) | | | | | | unreachable_sentinel_tunreachable_sentinel(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | front_insert_iterator | | | | | | back_insert_iterator | | | | | | inserter | | | | | | insert_iterator | | | | | | front_inserter | | | | | | back_inserter | | | | | | move_sentinel(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_iterator(C++20) | | | | | | counted_iterator(C++20) | | | | | | basic_const_iterator(C++23) | | | | | | const_iterator(C++23) | | | | | | const_sentinel(C++23) | | | | | | make_const_iterator(C++23) | | | | | | make_const_sentinel(C++23) | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Stream iterators | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istream_iterator | | | | | | ostream_iterator | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istreambuf_iterator | | | | | | ostreambuf_iterator | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator customization points | | | | | | ranges::iter_move(C++20) | | | | | | ranges::iter_swap(C++20) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator operations | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | advance | | | | | | distance | | | | | | prev(C++11) | | | | | | next(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ranges::advance(C++20) | | | | | | ranges::distance(C++20) | | | | | | ranges::prev(C++20) | | | | | | ranges::next(C++20) | | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range access | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | begincbegin(C++11)(C++14) | | | | | | rbegincrbegin(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | endcend(C++11)(C++14) | | | | | | rendcrend(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sizessize(C++17)(C++20) | | | | | | empty(C++17) | | | | | | data(C++17) | | | | | | | |

std::move_iterator

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| move_iterator::move_iterator | | | | |
| move_iterator::operator= | | | | |
| move_iterator::base | | | | |
| move_iterator::operator\*move_iterator::operator-> | | | | |
| [move_iterator::operator[]](operator_at.html "cpp/iterator/move iterator/operator at") | | | | |
| move_iterator::operator++move_iterator::operator+move_iterator::operator+=move_iterator::operator--move_iterator::operator-move_iterator::operator-= | | | | |
| Non-member functions | | | | |
| ****operator==operator!=operator<operator<=operator>operator>=operator<=>****(until C++20)(C++20) | | | | |
| operator==(move_sentinel)(C++20) | | | | |
| operator+ | | | | |
| operator- | | | | |
| operator-(move_sentinel)(C++20) | | | | |
| iter_move(C++20) | | | | |
| iter_swap(C++20) | | | | |
| make_move_iterator(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<iterator>` |  |  |
| template< class Iter1, class Iter2 >  bool operator==( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (1) | (constexpr since C++17) |
| template< class Iter1, class Iter2 >  bool operator!=( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (2) | (constexpr since C++17)  (until C++20) |
| template< class Iter1, class Iter2 >  bool operator< ( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (3) | (constexpr since C++17) |
| template< class Iter1, class Iter2 >  bool operator<=( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (4) | (constexpr since C++17) |
| template< class Iter1, class Iter2 >  bool operator> ( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (5) | (constexpr since C++17) |
| template< class Iter1, class Iter2 >  bool operator>=( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (6) | (constexpr since C++17) |
| template< class Iter1, std::three_way_comparable_with<Iter1> Iter2 >  constexpr std::compare_three_way_result_t<Iter1, Iter2>      operator<=>( const std::move_iterator<Iter1>& lhs, const std::move_iterator<Iter2>& rhs ); | (7) | (since C++20) |
|  |  |  |

Compares the underlying iterators of lhs and rhs.

|  |  |
| --- | --- |
| 1) This overload participates in overload resolution only if lhs.base() == rhs.base() is well-formed and convertible to bool.3-6) These overloads participate in overload resolution only if lhs.base() < rhs.base() is well-formed and convertible to bool. The `!=` operator is synthesized from `operator==`. | (since C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | iterator adaptors to compare |

### Return value

1) lhs.base() == rhs.base()2) !(lhs == rhs)3) lhs.base() < rhs.base()4) !(rhs < lhs)5) rhs < lhs6) !(lhs < rhs)7) lhs.base() <=> rhs.base()

### Example

Run this code

```
#include <cassert>
#include <iterator>
 
int main()
{
    int a[]{9, 8, 7, 6};
    //            │  └───── x, y
    //            └──────── z
 
    // “x” and “y” are equal, but “x” is greater than “z”
    std::move_iterator<int*>
        x{std::end(a) - 1},
        y{std::end(a) - 1},
        z{std::end(a) - 2};
 
    // two-way comparisons
    assert(  x == y );
    assert(!(x != y));
    assert(!(x <  y));
    assert(  x <= y );
    assert(!(x == z));
    assert(  x != z );
    assert(!(x <  z));
    assert(!(x <= z));
 
    // three-way comparisons
    assert(  x <=> y == 0 );
    assert(!(x <=> y <  0));
    assert(!(x <=> y >  0));
    assert(!(x <=> z == 0));
    assert(!(x <=> z <  0));
    assert(  x <=> z >  0 );
}

```

### See also

|  |  |
| --- | --- |
| operator==(std::move_sentinel)(C++20) | compares the underlying iterator and the underlying sentinel   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/move_iterator/operator_cmp&oldid=177505>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 November 2024, at 16:17.