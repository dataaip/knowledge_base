# std::experimental::ranges::tagged

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | TagSpecifier | | | | | | TaggedType | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****tagged**** | | | | | | tag specifiers | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_pair | | | | | | make_tagged_pair | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_tuple | | | | | | make_tagged_tuple | | | | | |  | | | | | |

****std::experimental::ranges::tagged****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| tagged::tagged | | | | |
| tagged::operator= | | | | |
| tagged::swap | | | | |
| Named accessors | | | | |
| Non-member functions | | | | |
| ranges::swap(ranges::tagged) | | | | |
| Helper classes | | | | |
| tuple_size | | | | |
| tuple_element | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/utility>` |  |  |
| template< class Base, TagSpecifier... Tags >      requires sizeof...(Tags) <= std::tuple_size<Base>::value struct tagged; |  | (ranges TS) |
|  |  |  |

The class template `tagged` augments a tuple-like class type `Base`, which it publicly derives from, with a set of named accessors specified by the tag specifiers `Tags...`. The tags are applied in order: the i-th tag specifier in `Tags...` correspond to the i-th element of the tuple.

The tag specifiers in `Tags...` shall be unique. Otherwise, the behavior is undefined.

It is not possible to delete an instance of `tagged` through a pointer to any base other than `Base`.

### Member functions

|  |  |
| --- | --- |
| (constructor) | construct a `tagged` object   (public member function) |
| operator= | assigns a `tagged` object   (public member function) |
| swap | swaps the contents of two `tagged` objects   (public member function) |

#### Named element accessors

For the **N**-th tag specifier in `Tags...` whose corresponding element name is **name**, `tagged` provides accessors named **name** as follows:

```
constexpr decltype(auto) name() &       { return std::get<N>(*this); }
constexpr decltype(auto) name() const & { return std::get<N>(*this); }
constexpr decltype(auto) name() &&      { return std::get<N>(std::move(*this)); }

```

### Non-member functions

|  |  |
| --- | --- |
| ranges::swap(ranges::tagged) | specializes `swap` for `tagged` objects   (function) |

### Tuple-like access

|  |  |
| --- | --- |
| std::tuple_size<std::experimental::ranges::tagged> | obtains the size of a `tagged`   (class template specialization) |
| std::tuple_element<std::experimental::ranges::tagged> | obtains the types of the elements of a `tagged`   (class template specialization) |

### See also

|  |  |
| --- | --- |
| TagSpecifier | specifies that a type is a tag specifier   (concept) |
| tagged_pair | alias template for a tagged std::pair (alias template) |
| make_tagged_pair | convenience function for creating a `tagged_pair`   (function template) |
| tagged_tuple | alias template for a tagged std::tuple (alias template) |
| make_tagged_tuple | convenience function for creating a `tagged_tuple`   (function template) |
| inin1in2outout1out2funminmaxbeginend | tag specifiers for use with ranges::tagged   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/utility/tagged&oldid=105827>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 July 2018, at 13:30.