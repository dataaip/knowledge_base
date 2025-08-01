# std::counted_iterator

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_iterator | | | | | | make_reverse_iterator(C++14) | | | | | | move_iterator(C++11) | | | | | | make_move_iterator(C++11) | | | | | | default_sentinel_tdefault_sentinel(C++20)(C++20) | | | | | | unreachable_sentinel_tunreachable_sentinel(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | front_insert_iterator | | | | | | back_insert_iterator | | | | | | inserter | | | | | | insert_iterator | | | | | | front_inserter | | | | | | back_inserter | | | | | | move_sentinel(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_iterator(C++20) | | | | | | ****counted_iterator****(C++20) | | | | | | basic_const_iterator(C++23) | | | | | | const_iterator(C++23) | | | | | | const_sentinel(C++23) | | | | | | make_const_iterator(C++23) | | | | | | make_const_sentinel(C++23) | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Stream iterators | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istream_iterator | | | | | | ostream_iterator | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istreambuf_iterator | | | | | | ostreambuf_iterator | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator customization points | | | | | | ranges::iter_move(C++20) | | | | | | ranges::iter_swap(C++20) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator operations | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | advance | | | | | | distance | | | | | | prev(C++11) | | | | | | next(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ranges::advance(C++20) | | | | | | ranges::distance(C++20) | | | | | | ranges::prev(C++20) | | | | | | ranges::next(C++20) | | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range access | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | begincbegin(C++11)(C++14) | | | | | | rbegincrbegin(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | endcend(C++11)(C++14) | | | | | | rendcrend(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sizessize(C++17)(C++20) | | | | | | empty(C++17) | | | | | | data(C++17) | | | | | | | |

****std::counted_iterator****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| counted_iterator::counted_iterator | | | | |
| counted_iterator::operator= | | | | |
| counted_iterator::base | | | | |
| counted_iterator::count | | | | |
| counted_iterator::operator\*counted_iterator::operator-> | | | | |
| [counted_iterator::operator[]](counted_iterator/operator_at.html "cpp/iterator/counted iterator/operator at") | | | | |
| counted_iterator::operator++counted_iterator::operator++(int)counted_iterator::operator+counted_iterator::operator+=counted_iterator::operator--counted_iterator::operator--(int)counted_iterator::operator-counted_iterator::operator-= | | | | |
| Non-member functions | | | | |
| operator==operator<=>(C++20)(C++20) | | | | |
| operator==(default_sentinel_t)(C++20) | | | | |
| operator+(C++20) | | | | |
| operator-(C++20) | | | | |
| operator-(default_sentinel_t)(C++20) | | | | |
| iter_move(C++20) | | | | |
| iter_swap(C++20) | | | | |
| Helper classes | | | | |
| iterator_traits<std::counted_iterator>(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<iterator>` |  |  |
| template< std::input_or_output_iterator I >  class counted_iterator; |  | (since C++20) |
|  |  |  |

`std::counted_iterator` is an iterator adaptor which behaves exactly like the underlying iterator, except that it keeps track of the distance to the end of its range. This iterator is equal to std::default_sentinel if and only if its count reaches zero.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `iterator_type` | `I` |
| `value_type` (conditionally present) | std::iter_value_t<I> if `I` models `indirectly_readable`; otherwise, not defined |
| `difference_type` | std::iter_difference_t<I> |
| `iterator_concept` (conditionally present) | I::iterator_concept if present; otherwise, not defined |
| `iterator_category` (conditionally present) | I::iterator_category if present; otherwise, not defined |

### Member objects

|  |  |
| --- | --- |
| Member name | Definition |
| `current` (private) | the underlying iterator which `base()` accesses (exposition-only member object\*) |
| `length` (private) | the distance between the underlying iterator and the end of its range (exposition-only member object\*) |

### Member functions

|  |  |
| --- | --- |
| (constructor)(C++20) | constructs a new iterator adaptor   (public member function) |
| operator=(C++20) | assigns another iterator adaptor   (public member function) |
| base(C++20) | accesses the underlying iterator   (public member function) |
| count(C++20) | returns the distance to the end   (public member function) |
| operator\*operator->(C++20) | accesses the pointed-to element   (public member function) |
| [operator[]](counted_iterator/operator_at.html "cpp/iterator/counted iterator/operator at")(C++20) | accesses an element by index   (public member function) |
| operator++operator++(int)operator+=operator+operator--operator--(int)operator-=operator-(C++20) | advances or decrements the iterator   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator<=>(C++20) | compares the distances to the end   (function template) |
| operator==(std::default_sentinel)(C++20) | checks if the distance to the end is equal to `​0​`   (function template) |
| operator+(C++20) | advances the iterator   (function template) |
| operator-(C++20) | computes the distance between two iterator adaptors   (function template) |
| operator-(std::default_sentinel_t)(C++20) | computes the signed distance to the end   (function template) |
| iter_move(C++20) | casts the result of dereferencing the underlying iterator to its associated rvalue reference type   (function) |
| iter_swap(C++20) | swaps the objects pointed to by two underlying iterators   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::iterator_traits<std::counted_iterator>(C++20) | provides uniform interface to the properties of the ****std::counted_iterator**** type   (class template specialization) |

### Example

Run this code

```
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
 
using std::operator""s;
 
void print(auto const remark, auto const& v)
{
    const auto size = std::ssize(v);
    std::cout << remark << '[' << size << "] { ";
    for (auto it = std::counted_iterator{std::cbegin(v), size};
         it != std::default_sentinel; ++it)
        std::cout << *it << (it.count() > 1 ? ", " : " ");
    std::cout << "}\n";
}
 
int main()
{
    const auto src = {"Arcturus"s, "Betelgeuse"s, "Canopus"s, "Deneb"s, "Elnath"s};
    print("src", src);
    std::vector<decltype(src)::value_type> dst;
    std::ranges::copy(std::counted_iterator{src.begin(), 3},
                      std::default_sentinel,
                      std::back_inserter(dst));
    print("dst", dst);
}

```

Output:

```
src[5] { Arcturus, Betelgeuse, Canopus, Deneb, Elnath }
dst[3] { Arcturus, Betelgeuse, Canopus }

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P2259R1 | C++20 | member typedefs are not provided std::incrementable_traits is specialized for `counted_iterator` | member typedefs are added to account for iterator_traits fix redundant std::incrementable_traits specialization is removed |

### See also

|  |  |
| --- | --- |
| default_sentinel_t(C++20) | default sentinel for use with iterators that know the bound of their range   (class) |
| views::counted(C++20) | creates a subrange from an iterator and a count (customization point object) |
| ranges::take_viewviews::take(C++20) | a `view` consisting of the first N elements of another `view` (class template) (range adaptor object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/counted_iterator&oldid=173507>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 July 2024, at 05:27.