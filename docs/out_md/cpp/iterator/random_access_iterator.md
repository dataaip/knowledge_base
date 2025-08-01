# std::random_access_iterator

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirectly_readable(C++20) | | | | | | indirectly_writable(C++20) | | | | | | weakly_incrementable(C++20) | | | | | | incrementable(C++20) | | | | | | **is-integer-like** **is-signed-integer-like**(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sentinel_for(C++20) | | | | | | sized_sentinel_for(C++20) | | | | | | input_iterator(C++20) | | | | | | output_iterator(C++20) | | | | | | input_or_output_iterator(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward_iterator(C++20) | | | | | | bidirectional_iterator(C++20) | | | | | | ****random_access_iterator****(C++20) | | | | | | contiguous_iterator(C++20) | | | | | |  | | | | | |  | | | | | |
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

|  |  |  |
| --- | --- | --- |
| Defined in header `<iterator>` |  |  |
| template< class I >      concept random_access_iterator =          std::bidirectional_iterator<I> &&          std::derived_from</\*ITER_CONCEPT\*/<I>, std::random_access_iterator_tag> &&          std::totally_ordered<I> &&          std::sized_sentinel_for<I, I> &&          requires(I i, const I j, const std::iter_difference_t<I> n) {              { i += n } -> std::same_as<I&>;              { j +  n } -> std::same_as<I>;              { n +  j } -> std::same_as<I>;              { i -= n } -> std::same_as<I&>;              { j -  n } -> std::same_as<I>;              {  j[n]  } -> std::same_as<std::iter_reference_t<I>>; }; |  | (since C++20) |
|  |  |  |

The concept `random_access_iterator` refines `bidirectional_iterator` by adding support for constant time advancement with the `+=`, `+`, `-=`, and `-` operators, constant time computation of distance with `-`, and array notation with subscripting `[]`.

### Iterator concept determination

Definition of this concept is specified via an exposition-only alias template /\*ITER_CONCEPT\*/.

In order to determine /\*ITER_CONCEPT\*/<I>, let ITER_TRAITS<I> denote I if the specialization std::iterator_traits<I> is generated from the primary template, or std::iterator_traits<I> otherwise:

- If ITER_TRAITS<I>::iterator_concept is valid and names a type, /\*ITER_CONCEPT\*/<I> denotes the type.
- Otherwise, if ITER_TRAITS<I>::iterator_category is valid and names a type, /\*ITER_CONCEPT\*/<I> denotes the type.
- Otherwise, if std::iterator_traits<I> is generated from the primary template, /\*ITER_CONCEPT\*/<I> denotes std::random_access_iterator_tag.
- Otherwise, /\*ITER_CONCEPT\*/<I> does not denote a type and results in a substitution failure.

### Semantic requirements

Let a and b be valid iterators of type `I` such that b is reachable from a, and let n be a value of type std::iter_difference_t<I> equal to b - a. std::random_access_iterator<I> is modeled only if all the concepts it subsumes are modeled and:

- (a += n) is equal to b.
- std::addressof(a += n) is equal to std::addressof(a). [[1]](random_access_iterator.html#addressof_note)
- (a + n) is equal to (a += n).
- (a + n) is equal to (n + a).
- For any two positive integers `x` and `y`, if a + (x + y) is valid, then a + (x + y) is equal to (a + x) + y.
- a + 0 is equal to a.
- If (a + (n - 1)) is valid, then --b is equal to (a + (n - 1)).
- (b += -n) and (b -= n) are both equal to a.
- std::addressof(b -= n) is equal to std::addressof(b). [[1]](random_access_iterator.html#addressof_note)
- (b - n) is equal to (b -= n).
- If b is dereferenceable, then a[n] is valid and is equal to \*b.
- bool(a <= b) is true.
- Every required operation has constant time complexity.

Note that std::addressof returns the address of the iterator object, not the address of the object the iterator points to. I.e. `operator+=` and `operator-=` must return a reference to \*this.

### Equality preservation

Expressions declared in requires expressions of the standard library concepts are required to be equality-preserving (except where stated otherwise).

### Implicit expression variations

A requires expression that uses an expression that is non-modifying for some constant lvalue operand also requires implicit expression variations.

### Notes

Unlike the LegacyRandomAccessIterator requirements, the `random_access_iterator` concept does not require dereference to return an lvalue.

### Example

Demonstrates a possible implementation of std::distance via C++20 concepts.

Run this code

```
#include <iterator>
 
namespace cxx20
{
    template<std::input_or_output_iterator Iter>
    constexpr std::iter_difference_t<Iter> distance(Iter first, Iter last)
    {
        if constexpr(std::random_access_iterator<Iter>)
            return last - first;
        else
        {
            std::iter_difference_t<Iter> result{};
            for (; first != last; ++first)
                ++result;
            return result;
        }
    }
}
 
int main()
{
    static constexpr auto il = {3, 1, 4};
 
    static_assert(std::random_access_iterator<decltype(il.begin())> &&
                  cxx20::distance(il.begin(), il.end()) == 3 &&
                  cxx20::distance(il.end(), il.begin()) == -3);
}

```

### See also

|  |  |
| --- | --- |
| bidirectional_iterator(C++20) | specifies that a `forward_iterator` is a bidirectional iterator, supporting movement backwards   (concept) |
| contiguous_iterator(C++20) | specifies that a ****`random_access_iterator`**** is a contiguous iterator, referring to elements that are contiguous in memory   (concept) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/random_access_iterator&oldid=159953>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 October 2023, at 11:04.