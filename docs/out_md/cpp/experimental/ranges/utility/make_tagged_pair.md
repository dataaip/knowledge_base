# std::experimental::ranges::make_tagged_pair

From cppreference.com
< cpp‎ | experimental‎ | ranges
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Ranges

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Concepts | | | | |
| General utilities | | | | |
| Iterators | | | | |
| Ranges | | | | |
| Algorithms | | | | |

General utilities library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Utility components | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | exchange | | | | | |
| Function objects | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | invoke | | | | | | identity | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_to | | | | | | not_equal_to | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | greater | | | | | | less | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | greater_equal | | | | | | less_equal | | | | | |
| Metaprogramming and type traits | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_swappable_withis_swappable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_nothrow_swappable_withis_nothrow_swappable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_reference | | | | | | common_type | | | | | |
| Tagged pairs and tuples | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | TagSpecifier | | | | | | TaggedType | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged | | | | | | tag specifiers | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_pair | | | | | | ****make_tagged_pair**** | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_tuple | | | | | | make_tagged_tuple | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/utility>` |  |  |
| template< TagSpecifier Tag1, TagSpecifier Tag2, class T1, class T2 >  constexpr ranges::tagged</\*see below\*/, Tag1, Tag2> make_tagged_pair( T1&& x, T2&& y ); |  | (ranges TS) |
|  |  |  |

Convenience function for creating a tagged pair, deducing the element types from the arguments (the tag specifiers must be explicitly specified).

The **see below** portion of the return type is decltype(std::make_pair(std::forward<T1>(x), std::forward<T2>(y))).

### Return value

R(std::forward<T1>(x), std::forward<T2>(y)), where `R` is the return type.

### See also

|  |  |
| --- | --- |
| TaggedType | specifies that a type represents a tag specifier and its element type   (concept) |
| tagged | augument a tuple-like type with named accessors   (class template) |
| tagged_pair | alias template for a tagged std::pair (alias template) |
| tagged_tuple | alias template for a tagged std::tuple (alias template) |
| make_tagged_tuple | convenience function for creating a `tagged_tuple`   (function template) |
| inin1in2outout1out2funminmaxbeginend | tag specifiers for use with ranges::tagged   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/utility/make_tagged_pair&oldid=155623>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 July 2023, at 22:17.