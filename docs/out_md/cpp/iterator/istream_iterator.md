# std::istream_iterator

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Stream iterators | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****istream_iterator**** | | | | | | ostream_iterator | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istreambuf_iterator | | | | | | ostreambuf_iterator | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator customization points | | | | | | ranges::iter_move(C++20) | | | | | | ranges::iter_swap(C++20) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator operations | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | advance | | | | | | distance | | | | | | prev(C++11) | | | | | | next(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ranges::advance(C++20) | | | | | | ranges::distance(C++20) | | | | | | ranges::prev(C++20) | | | | | | ranges::next(C++20) | | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Range access | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | begincbegin(C++11)(C++14) | | | | | | rbegincrbegin(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | endcend(C++11)(C++14) | | | | | | rendcrend(C++14)(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sizessize(C++17)(C++20) | | | | | | empty(C++17) | | | | | | data(C++17) | | | | | | | |

****std::istream_iterator****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| istream_iterator::istream_iterator | | | | |
| istream_iterator::~istream_iterator | | | | |
| istream_iterator::operator\*istream_iterator::operator-> | | | | |
| istream_iterator::operator++istream_iterator::operator++(int) | | | | |
| Non-member functions | | | | |
| operator==operator!=(until C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<iterator>` |  |  |
|  |  |  |
| --- | --- | --- |
| template< class T,  class CharT = char,            class Traits = std::char_traits<CharT>,            class Distance = std::ptrdiff_t >  class istream_iterator : public std::iterator<std::input_iterator_tag, T, Distance, const T\*, const T&> |  | (until C++17) |
| template< class T,  class CharT = char,            class Traits = std::char_traits<CharT>,            class Distance = std::ptrdiff_t > class istream_iterator; |  | (since C++17) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

`std::istream_iterator` is a single-pass input iterator that reads successive objects of type `T` from the std::basic_istream object for which it was constructed, by calling the appropriate operator>>. The actual read operation is performed when the iterator is incremented, not when it is dereferenced. The first object is read when the iterator is constructed. Dereferencing only returns a copy of the most recently read object.

The default-constructed `std::istream_iterator` is known as the **end-of-stream** iterator. When a valid `std::istream_iterator` reaches the end of the underlying stream, it becomes equal to the end-of-stream iterator. Dereferencing or incrementing it further invokes undefined behavior. An end-of-stream iterator remains in the end-of-stream state even if the underlying stream changes state. Absent a reassignment, it cannot become a non-end-of-stream iterator anymore.

A typical implementation of `std::istream_iterator` holds two data members: a pointer to the associated std::basic_istream object and the most recently read value of type `T`.

`T` must meet the DefaultConstructible, CopyConstructible, and CopyAssignable requirements.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `iterator_category` | std::input_iterator_tag |
| `value_type` | T |
| `difference_type` | Distance |
| `pointer` | const T\* |
| `reference` | const T& |
| `char_type` | `CharT` |
| `traits_type` | `Traits` |
| `istream_type` | std::basic_istream<CharT, Traits> |

|  |  |
| --- | --- |
| Member types `iterator_category`, `value_type`, `difference_type`, `pointer` and `reference` are required to be obtained by inheriting from std::iterator<std::input_iterator_tag, T, Distance, const T\*, const T&>. | (until C++17) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `istream_iterator`   (public member function) |
| (destructor) | destructs an `istream_iterator`, including the cached value   (public member function) |
| operator\*operator-> | returns the current element   (public member function) |
| operator++operator++(int) | advances the iterator   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=(removed in C++20) | compares two `istream_iterator`s   (function template) |

### Notes

When reading characters, `std::istream_iterator` skips whitespace by default (unless disabled with std::noskipws or equivalent), while std::istreambuf_iterator does not. In addition, std::istreambuf_iterator is more efficient, since it avoids the overhead of constructing and destructing the sentry object once per character.

### Example

Run this code

```
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
 
int main()
{
    std::istringstream str("0.1 0.2 0.3 0.4");
    std::partial_sum(std::istream_iterator<double>(str),
                     std::istream_iterator<double>(),
                     std::ostream_iterator<double>(std::cout, " "));
 
    std::istringstream str2("1 3 5 7 8 9 10");
    auto it = std::find_if(std::istream_iterator<int>(str2),
                           std::istream_iterator<int>(),
                           [](int i){ return i % 2 == 0; });
 
    if (it != std::istream_iterator<int>())
        std::cout << "\nThe first even number is " << *it << ".\n";
    //" 9 10" left in the stream
}

```

Output:

```
0.1 0.3 0.6 1 
The first even number is 8.

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P0738R2 | C++98 | the first read might be deferred to the first dereference | always performed in the constructor |

### See also

|  |  |
| --- | --- |
| ostream_iterator | output iterator that writes to std::basic_ostream   (class template) |
| istreambuf_iterator | input iterator that reads from std::basic_streambuf   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/istream_iterator&oldid=159916>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 September 2023, at 23:10.