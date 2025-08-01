# iter_move(std::move_iterator)

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
| operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(C++20) | | | | |
| operator==(move_sentinel)(C++20) | | | | |
| operator+ | | | | |
| operator- | | | | |
| operator-(move_sentinel)(C++20) | | | | |
| ****iter_move****(C++20) | | | | |
| iter_swap(C++20) | | | | |
| make_move_iterator(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| friend constexpr std::iter_rvalue_reference_t<Iter>      iter_move( const std::move_iterator& i ) noexcept(/\* see below \*/); |  | (since C++20) |
|  |  |  |

Casts the result of dereferencing the underlying iterator to its associated rvalue reference type.

Equivalent to return std::ranges::iter_move(i.base());.

This function template is not visible to ordinary unqualified or qualified lookup, and can only be found by argument-dependent lookup when std::move_iterator<Iter> is an associated class of the arguments.

### Parameters

|  |  |  |
| --- | --- | --- |
| i | - | a source move iterator |

### Return value

An rvalue reference or a prvalue temporary.

### Complexity

Constant.

### Exceptions

noexcept specification:noexcept(noexcept(ranges::iter_move(i.base())))

### Example

Run this code

```
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
 
void print(const auto& rem, const auto& v)
{
    std::cout << rem << '[' << size(v) << "] { ";
    for (char comma[]{0, ' ', 0}; const auto& s : v)
        std::cout << comma << std::quoted(s), comma[0] = ',';
    std::cout << " }\n";
}
 
int main()
{
    std::vector<std::string> p{"Andromeda", "Cassiopeia", "Phoenix"}, q;
 
    print("p", p), print("q", q);
 
    using MI = std::move_iterator<std::vector<std::string>::iterator>;
 
    for (MI first{p.begin()}, last{p.end()}; first != last; ++first)
        q.emplace_back(/* ADL */ iter_move(first));
 
    print("p", p), print("q", q);
}

```

Possible output:

```
p[3] { "Andromeda", "Cassiopeia", "Phoenix" }
q[0] {  }
p[3] { "", "", "" }
q[3] { "Andromeda", "Cassiopeia", "Phoenix" }

```

### See also

|  |  |
| --- | --- |
| iter_move(C++20) | casts the result of dereferencing an object to its associated rvalue reference type (customization point object) |
| iter_move(C++20) | casts the result of dereferencing the adjusted underlying iterator to its associated rvalue reference type   (function) |
| move(C++11) | converts the argument to an xvalue   (function template) |
| move_if_noexcept(C++11) | converts the argument to an xvalue if the move constructor does not throw   (function template) |
| forward(C++11) | forwards a function argument and use the type template argument to preserve its value category   (function template) |
| ranges::move(C++20) | moves a range of elements to a new location (algorithm function object) |
| ranges::move_backward(C++20) | moves a range of elements to a new location in backwards order (algorithm function object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/iterator/move_iterator/iter_move&oldid=177528>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 November 2024, at 19:28.