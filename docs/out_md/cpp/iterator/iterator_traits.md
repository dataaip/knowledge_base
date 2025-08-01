# std::iterator_traits

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tagcontiguous_iterator_tag(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iter_value_titer_difference_titer_reference_titer_const_reference_titer_rvalue_reference_titer_common_reference_t(C++20)(C++20)(C++20)(C++23)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iterator(deprecated in C++17) | | | | | | ****iterator_traits**** | | | | | | incrementable_traits(C++20) | | | | | | indirectly_readable_traits(C++20) | | | | | |  | | | | | |  | | | | | |
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

|  |  |  |
| --- | --- | --- |
| Defined in header `<iterator>` |  |  |
| template< class Iter >  struct iterator_traits; |  |  |
| template< class T >  struct iterator_traits<T\*>; |  |  |
| template< class T >  struct iterator_traits<const T\*>; |  | (removed in C++20) |
|  |  |  |

`std::iterator_traits` is the type trait class that provides uniform interface to the properties of LegacyIterator types. This makes it possible to implement algorithms only in terms of iterators.

The template can be specialized for user-defined iterators so that the information about the iterator can be retrieved even if the type does not provide the usual typedefs.

|  |  |
| --- | --- |
| User specializations may define the nested type `iterator_concept` to one of iterator category tags, to indicate conformance to the iterator concepts. | (since C++20) |

### Template parameters

|  |  |  |
| --- | --- | --- |
| Iter | - | the iterator type to retrieve properties for |

### Member types

|  |  |
| --- | --- |
| Nested type | Definition |
| `difference_type` | `Iter::difference_type` |
| `value_type` | `Iter::value_type` |
| `pointer` | `Iter::pointer` |
| `reference` | `Iter::reference` |
| `iterator_category` | `Iter::iterator_category` |

|  |  |
| --- | --- |
| If `Iter` does not have any of the five nested types above, then this template has no members by any of those names (`std::iterator_traits` is SFINAE-friendly). | (since C++17) (until C++20) |
| If `Iter` does not have `pointer`, but has all four remaining nested types, then these four nested types are declared as follows:   |  |  | | --- | --- | | Nested type | Definition | | `difference_type` | `Iter::difference_type` | | `value_type` | `Iter::value_type` | | `pointer` | void | | `reference` | `Iter::reference` | | `iterator_category` | `Iter::iterator_category` |   Otherwise, if `Iter` satisfies the exposition-only concept __LegacyInputIterator, the nested types are declared as follows:   |  |  | | --- | --- | | Nested type | Definition | | `difference_type` | std::incrementable_traits<Iter>::difference_type | | `value_type` | std::indirectly_readable_traits<Iter>::value_type | | `pointer` | - `Iter::pointer` if valid. - Otherwise decltype(std::declval<Iter&>().operator->()) if valid. - Otherwise void. | | `reference` | - `Iter::reference` if valid. - Otherwise std::iter_reference_t<Iter>. | | `iterator_category` | - `Iter::iterator_category` if valid. - Otherwise, std::random_access_iterator_tag if `Iter` satisfies __LegacyRandomAccessIterator. - Otherwise, std::bidirectional_iterator_tag if `Iter` satisfies __LegacyBidirectionalIterator. - Otherwise, std::forward_iterator_tag if `Iter` satisfies __LegacyForwardIterator. - Otherwise, std::input_iterator_tag. |   Otherwise, if `Iter` satisfies the exposition-only concept __LegacyIterator, the nested types are declared as follows:   |  |  | | --- | --- | | Nested type | Definition | | `difference_type` | - std::incrementable_traits<Iter>::difference_type if valid. - Otherwise void. | | `value_type` | void | | `pointer` | void | | `reference` | void | | `iterator_category` | std::output_iterator_tag |   Otherwise, this template has no members by any of those names (`std::iterator_traits` is SFINAE-friendly). | (since C++20) |

### Specializations

This type trait may be specialized for user-provided types that may be used as iterators. The standard library provides partial specializations for pointer types `T*`, which makes it possible to use all iterator-based algorithms with raw pointers.

|  |  |
| --- | --- |
| The standard library also provides partial specializations for some standard iterator adaptors. | (since C++20) |

#### `T*` specialization nested types

|  |  |
| --- | --- |
| Only specialized if std::is_object_v<T> is true. | (since C++20) |

|  |  |
| --- | --- |
| Nested type | Definition |
| `difference_type` | std::ptrdiff_t |
| `value_type` | `T`(until C++20)std::remove_cv_t<T>(since C++20) |
| `pointer` | `T*` |
| `reference` | `T&` |
| `iterator_category` | std::random_access_iterator_tag |
| `iterator_concept` (since C++20) | std::contiguous_iterator_tag |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| const T\* specialization nested types  |  |  | | --- | --- | | Nested type | Definition | | `difference_type` | std::ptrdiff_t | | `value_type` | `T` | | `pointer` | const T\* | | `reference` | const T& | | `iterator_category` | std::random_access_iterator_tag | | (until C++20) |

#### Specializations for library types

|  |  |
| --- | --- |
| std::iterator_traits<std::common_iterator>(C++20) | provides uniform interface to the properties of the std::common_iterator type   (class template specialization) |
| std::iterator_traits<std::counted_iterator>(C++20) | provides uniform interface to the properties of the std::counted_iterator type   (class template specialization) |

### Example

Shows a general-purpose std::reverse() implementation for bidirectional iterators.

Run this code

```
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
 
template<class BidirIt>
void my_reverse(BidirIt first, BidirIt last)
{
    typename std::iterator_traits<BidirIt>::difference_type n = std::distance(first, last);
    for (--n; n > 0; n -= 2)
    {
        typename std::iterator_traits<BidirIt>::value_type tmp = *first;
        *first++ = *--last;
        *last = tmp;
    }
}
 
int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    my_reverse(v.begin(), v.end());
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
 
    std::list<int> l{1, 2, 3, 4, 5};
    my_reverse(l.begin(), l.end());
    for (int n : l)
        std::cout << n << ' ';
    std::cout << '\n';
 
    int a[]{1, 2, 3, 4, 5};
    my_reverse(a, a + std::size(a));
    for (int n : a)
        std::cout << n << ' ';
    std::cout << '\n';
 
//  std::istreambuf_iterator<char> i1(std::cin), i2;
//  my_reverse(i1, i2); // compilation error: i1, i2 are input iterators
}

```

Output:

```
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

```

### See also

|  |  |
| --- | --- |
| iterator(deprecated in C++17) | base class to ease the definition of required types for simple iterators   (class template) |
| input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tagcontiguous_iterator_tag(C++20) | empty class types used to indicate iterator categories   (class) |
| iter_value_titer_reference_titer_const_reference_titer_difference_titer_rvalue_reference_titer_common_reference_t(C++20)(C++20)(C++23)(C++20)(C++20)(C++20) | computes the associated types of an iterator (alias template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/iterator_traits&oldid=173508>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 July 2024, at 05:29.