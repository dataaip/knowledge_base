# std::move_iterator

From cppreference.com
< cpp‎ | iterator
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_iterator | | | | | | make_reverse_iterator(C++14) | | | | | | ****move_iterator****(C++11) | | | | | | make_move_iterator(C++11) | | | | | | default_sentinel_tdefault_sentinel(C++20)(C++20) | | | | | | unreachable_sentinel_tunreachable_sentinel(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | front_insert_iterator | | | | | | back_insert_iterator | | | | | | inserter | | | | | | insert_iterator | | | | | | front_inserter | | | | | | back_inserter | | | | | | move_sentinel(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_iterator(C++20) | | | | | | counted_iterator(C++20) | | | | | | basic_const_iterator(C++23) | | | | | | const_iterator(C++23) | | | | | | const_sentinel(C++23) | | | | | | make_const_iterator(C++23) | | | | | | make_const_sentinel(C++23) | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Stream iterators | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istream_iterator | | | | | | ostream_iterator | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istreambuf_iterator | | | | | | ostreambuf_iterator | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator customization points | | | | | | ranges::iter_move(C++20) | | | | | | ranges::iter_swap(C++20) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator operations | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | advance | | | | | | distance | | | | | | prev(C++11) | | | | | | next(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ranges::advance(C++20) | | | | | | ranges::distance(C++20) | | | | | | ranges::prev(C++20) | | | | | | ranges::next(C++20) | | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range access | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | begincbegin(C++11)(C++14) | | | | | | rbegincrbegin(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | endcend(C++11)(C++14) | | | | | | rendcrend(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sizessize(C++17)(C++20) | | | | | | empty(C++17) | | | | | | data(C++17) | | | | | | | |

****std::move_iterator****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| move_iterator::move_iterator | | | | |
| move_iterator::operator= | | | | |
| move_iterator::base | | | | |
| move_iterator::operator\*move_iterator::operator-> | | | | |
| [move_iterator::operator[]](move_iterator/operator_at.html "cpp/iterator/move iterator/operator at") | | | | |
| move_iterator::operator++move_iterator::operator+move_iterator::operator+=move_iterator::operator--move_iterator::operator-move_iterator::operator-= | | | | |
| Non-member functions | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(C++20) | | | | |
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
| template< class Iter >  class move_iterator; |  | (since C++11) |
|  |  |  |

`std::move_iterator` is an iterator adaptor which behaves exactly like the underlying iterator (which must be at least a LegacyInputIterator or model `input_iterator`(since C++20), or stronger iterator concept(since C++23)), except that dereferencing converts the value returned by the underlying iterator into an rvalue. If this iterator is used as an input iterator, the effect is that the values are moved from, rather than copied from.

### Nested types

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  | | --- | --- | | Type | Definition | | `iterator_type` | `Iter` | | `iterator_category` | std::iterator_traits<Iter>::iterator_category | | `value_type` | std::iterator_traits<Iter>::value_type | | `difference_type` | std::iterator_traits<Iter>::difference_type | | `pointer` | `Iter` | | `reference` | - the rvalue reference version of std::iterator_traits<Iter>::reference if std::iterator_traits<Iter>::reference is a reference type - std::iterator_traits<Iter>::reference otherwise | | (until C++20) |
| |  |  | | --- | --- | | Type | Definition | | `iterator_type` | `Iter` | | `iterator_category` (conditionally present) | - undefined if std::iterator_traits<Iter>::iterator_category is invalid or does not denote a type - std::random_access_iterator_tag if std::iterator_traits<Iter>::iterator_category models std::derived_from<std::random_access_iterator_tag> - std::iterator_traits<Iter>::iterator_category otherwise | | `iterator_concept` | |  |  | | --- | --- | | std::input_iterator_tag | (until C++23) | | - std::random_access_iterator_tag if `Iter` models std::random_access_iterator - std::bidirectional_iterator_tag if `Iter` only models std::bidirectional_iterator - std::forward_iterator_tag if `Iter` only models std::forward_iterator - std::input_iterator_tag otherwise | (since C++23) | | | `value_type` | std::iter_value_t<Iter> | | `difference_type` | std::iter_difference_t<Iter> | | `pointer` | `Iter` | | `reference` | std::iter_rvalue_reference_t<Iter> | | (since C++20) |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| `Iter` `current` | the underlying iterator (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor)(C++11) | constructs a new iterator adaptor   (public member function) |
| operator=(C++11) | assigns another iterator adaptor   (public member function) |
| base(C++11) | accesses the underlying iterator   (public member function) |
| operator\*operator->(C++11)(C++11)(deprecated in C++20) | accesses the pointed-to element   (public member function) |
| [operator[]](move_iterator/operator_at.html "cpp/iterator/move iterator/operator at")(C++11) | accesses an element by index   (public member function) |
| operator++operator++(int)operator+=operator+operator--operator--(int)operator-=operator-(C++11) | advances or decrements the iterator   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) | compares the underlying iterators   (function template) |
| operator==(std::move_sentinel)(C++20) | compares the underlying iterator and the underlying sentinel   (function template) |
| operator+(C++11) | advances the iterator   (function template) |
| operator-(C++11) | computes the distance between two iterator adaptors   (function template) |
| operator-(std::move_sentinel)(C++20) | computes the distance between the underlying iterator and the underlying sentinel   (function template) |
| iter_move(C++20) | casts the result of dereferencing the underlying iterator to its associated rvalue reference type   (function) |
| iter_swap(C++20) | swaps the objects pointed to by two underlying iterators   (function template) |
| make_move_iterator(C++11) | creates a ****std::move_iterator**** of type inferred from the argument   (function template) |

### Helper templates

|  |  |  |
| --- | --- | --- |
| template< class Iterator1, class Iterator2 >      requires (!std::sized_sentinel_for<Iterator1, Iterator2>)  constexpr bool disable_sized_sentinel_for <std::move_iterator<Iterator1>, std::move_iterator<Iterator2>> = true; |  | (since C++20) |
|  |  |  |

This partial specialization of `std::disable_sized_sentinel_for` prevents specializations of `move_iterator` from satisfying `sized_sentinel_for` if their underlying iterators do not satisfy the concept.

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_move_iterator_concept` | `202207L` | (C++23) | Make std::move_iterator<T\*> a random access iterator |

### Example

Run this code

```
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>
 
void print(const std::string_view rem, const auto& v)
{
    std::cout << rem;
    for (const auto& s : v)
        std::cout << std::quoted(s) << ' ';
    std::cout << '\n';
};
 
int main()
{
    std::vector<std::string> v{"this", "_", "is", "_", "an", "_", "example"};
    print("Old contents of the vector: ", v);
    std::string concat;
    for (auto begin = std::make_move_iterator(v.begin()),
              end = std::make_move_iterator(v.end());
         begin != end; ++begin)
    {
        std::string temp{*begin}; // moves the contents of *begin to temp
        concat += temp;
    }
 
    // Starting from C++17, which introduced class template argument deduction,
    // the constructor of std::move_iterator can be used directly:
    // std::string concat = std::accumulate(std::move_iterator(v.begin()),
    //                                      std::move_iterator(v.end()),
    //                                      std::string());
 
    print("New contents of the vector: ", v);
    print("Concatenated as string: ", std::ranges::single_view(concat));
}

```

Possible output:

```
Old contents of the vector: "this" "_" "is" "_" "an" "_" "example"
New contents of the vector: "" "" "" "" "" "" ""
Concatenated as string: "this_is_an_example"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2106 | C++11 | dereferencing a `move_iterator` could return a dangling reference if the dereferencing the underlying iterator returns a prvalue | returns the object instead |
| LWG 3736 | C++20 | `move_iterator` was missing `disable_sized_sentinel_for` specialization | added |
| P2259R1 | C++20 | member `iterator_category` was defined even if std::iterator_traits<Iter>::iterator_category is not defined | `iterator_category` is not defined in this case |

### See also

|  |  |
| --- | --- |
| make_move_iterator(C++11) | creates a ****std::move_iterator**** of type inferred from the argument   (function template) |
| move_sentinel(C++20) | sentinel adaptor for ****std::move_iterator****   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/move_iterator&oldid=177327>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 October 2024, at 01:50.