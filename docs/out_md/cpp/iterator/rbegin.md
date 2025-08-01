# std::rbegin, std::crbegin

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_iterator | | | | | | make_reverse_iterator(C++14) | | | | | | move_iterator(C++11) | | | | | | make_move_iterator(C++11) | | | | | | default_sentinel_tdefault_sentinel(C++20)(C++20) | | | | | | unreachable_sentinel_tunreachable_sentinel(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | front_insert_iterator | | | | | | back_insert_iterator | | | | | | inserter | | | | | | insert_iterator | | | | | | front_inserter | | | | | | back_inserter | | | | | | move_sentinel(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_iterator(C++20) | | | | | | counted_iterator(C++20) | | | | | | basic_const_iterator(C++23) | | | | | | const_iterator(C++23) | | | | | | const_sentinel(C++23) | | | | | | make_const_iterator(C++23) | | | | | | make_const_sentinel(C++23) | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Stream iterators | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istream_iterator | | | | | | ostream_iterator | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istreambuf_iterator | | | | | | ostreambuf_iterator | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator customization points | | | | | | ranges::iter_move(C++20) | | | | | | ranges::iter_swap(C++20) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator operations | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | advance | | | | | | distance | | | | | | prev(C++11) | | | | | | next(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ranges::advance(C++20) | | | | | | ranges::distance(C++20) | | | | | | ranges::prev(C++20) | | | | | | ranges::next(C++20) | | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range access | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | begincbegin(C++11)(C++14) | | | | | | ****rbegincrbegin****(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | endcend(C++11)(C++14) | | | | | | rendcrend(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sizessize(C++17)(C++20) | | | | | | empty(C++17) | | | | | | data(C++17) | | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<array>` |  |  |
| Defined in header `<deque>` |  |  |
| Defined in header `<flat_map>` |  |  |
| Defined in header `<flat_set>` |  |  |
| Defined in header `<forward_list>` |  |  |
| Defined in header `<inplace_vector>` |  |  |
| Defined in header `<iterator>` |  |  |
| Defined in header `<list>` |  |  |
| Defined in header `<map>` |  |  |
| Defined in header `<regex>` |  |  |
| Defined in header `<set>` |  |  |
| Defined in header `<span>` |  |  |
| Defined in header `<string>` |  |  |
| Defined in header `<string_view>` |  |  |
| Defined in header `<unordered_map>` |  |  |
| Defined in header `<unordered_set>` |  |  |
| Defined in header `<vector>` |  |  |
| template< class C >  auto rbegin( C& c ) -> decltype(c.rbegin()); | (1) | (since C++14)  (constexpr since C++17) |
| template< class C >  auto rbegin( const C& c ) -> decltype(c.rbegin()); | (2) | (since C++14)  (constexpr since C++17) |
| template< class T, std::size_t N >  std::reverse_iterator<T\*> rbegin( T (&array)[N] ); | (3) | (since C++14)  (constexpr since C++17) |
| template< class T >  std::reverse_iterator<const T\*> rbegin( std::initializer_list<T> il ); | (4) | (since C++14)  (constexpr since C++17) |
| template< class C >  auto crbegin( const C& c ) -> decltype(std::rbegin(c)); | (5) | (since C++14)  (constexpr since C++17) |
|  |  |  |

Returns an iterator to the reverse-beginning of the given range.

1,2) Returns c.rbegin(), which is typically an iterator to the reverse-beginning of the sequence represented by c.1) If `C` is a standard Container, returns a `C::reverse_iterator` object.2) If `C` is a standard Container, returns a `C::const_reverse_iterator` object.3) Returns a std::reverse_iterator<T\*> object to the reverse-beginning of array.4) Returns a std::reverse_iterator<const T\*> object to the reverse-beginning of il.5) Returns std::rbegin(c), with c always treated as const-qualified. If `C` is a standard Container, returns a `C::const_reverse_iterator` object.

!range-rbegin-rend.svg

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | a container or view with a `rbegin` member function |
| array | - | an array of arbitrary type |
| il | - | an std::initializer_list |

### Return value

1,2) c.rbegin()3) std::reverse_iterator<T\*>(array + N)4) std::reverse_iterator<const T\*>(il.end())5) c.rbegin()

### Exceptions

May throw implementation-defined exceptions.

### Overloads

Custom overloads of `rbegin` may be provided for classes and enumerations that do not expose a suitable `rbegin()` member function, yet can be iterated.

|  |  |
| --- | --- |
| Overloads of `rbegin` found by argument-dependent lookup can be used to customize the behavior of std::ranges::rbegin and std::ranges::crbegin. | (since C++20) |

### Notes

The overload for std::initializer_list is necessary because it does not have a member function `rbegin`.

### Example

Run this code

```
#include <iostream>
#include <iterator>
#include <vector>
 
int main()
{
    std::vector<int> v = {3, 1, 4};
    auto vi = std::rbegin(v); // the type of “vi” is std::vector<int>::reverse_iterator
    std::cout << "*vi = " << *vi << '\n';
 
    *std::rbegin(v) = 42; // OK: after assignment v[2] == 42
//  *std::crbegin(v) = 13; // error: the location is read-only
 
    int a[] = {-5, 10, 15};
    auto ai = std::rbegin(a); // the type of “ai” is std::reverse_iterator<int*>
    std::cout << "*ai = " << *ai << '\n';
 
    auto il = {3, 1, 4};
    // the type of “it” below is std::reverse_iterator<int const*>:
    for (auto it = std::rbegin(il); it != std::rend(il); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
}

```

Output:

```
*vi = 4
*ai = 15
4 1 3

```

### See also

|  |  |
| --- | --- |
| begincbegin(C++11)(C++14) | returns an iterator to the beginning of a container or array   (function template) |
| endcend(C++11)(C++14) | returns an iterator to the end of a container or array   (function template) |
| rendcrend(C++14) | returns a reverse end iterator for a container or array   (function template) |
| ranges::rbegin(C++20) | returns a reverse iterator to a range (customization point object) |
| ranges::crbegin(C++20) | returns a reverse iterator to a read-only range (customization point object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/rbegin&oldid=177484>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 November 2024, at 21:59.