# std::experimental::ranges::value_type

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

Iterators library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Iterator concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Readable | | | | | | Writable | | | | | | WeaklyIncrementable | | | | | | Incrementable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterator | | | | | | Sentinel | | | | | | SizedSentinel | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | InputIterator | | | | | | ForwardIterator | | | | | | BidirectionalIterator | | | | | | RandomAccessIterator | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | OutputIterator | | | | | |  | | | | | |  | | | | | |  | | | | | |
| Indirect callable concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectUnaryInvocableIndirectRegularUnaryInvocable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectUnaryPredicate | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectRelation | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectStrictWeakOrder | | | | | |  | | | | | |
| Common algorithm requirements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectlyMovable | | | | | | IndirectlyMovableStorable | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectlyCopyable | | | | | | IndirectlyCopyableStorable | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | IndirectlySwappable | | | | | | IndirectlyComparable | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Permutable | | | | | | Mergeable | | | | | | Sortable | | | | | |
| Concept utilities | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | indirect_result_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | projected | | | | | |
| Iterator utilities and operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iter_move") | | | | | | iter_swap") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | advance | | | | | | distance | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | next | | | | | | prev | | | | | |
| Iterator traits | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | difference_type | | | | | | ****value_type**** | | | | | | reference_trvalue_reference_titer_common_reference_t | | | | | | iterator_category | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tag | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ranges::iterator_traits") | | | | | | std::iterator_traits<InputIterator>std::iterator_traits<OutputIterator>") | | | | | |  | | | | | |  | | | | | |  | | | | | |
| Iterator adaptors | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse_iterator") | | | | | | move_iterator") | | | | | | move_sentinel") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | back_insert_iterator") | | | | | | front_insert_iterator") | | | | | | insert_iterator") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_iterator") | | | | | | counted_iterator") | | | | | | default_sentinel") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | danglingborrowed_iterator_t | | | | | | unreachable") | | | | | |
| Stream iterators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | istream_iterator") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ostream_iterator") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | istreambuf_iterator") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ostreambuf_iterator") | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/iterator>` |  |  |
| template< class I >  struct value_type {}; | (1) |  |
| template< class T >  struct value_type<T\*>; | (2) |  |
| template< class I >      requires std::is_array<I>::value struct value_type<I> : value_type<std::decay_t<I>> {}; | (3) |  |
| template< class T >  struct value_type<const T> : value_type<std::decay_t<T>> {}; | (4) |  |
| template< class T >      requires requires { typename T::value_type; } struct value_type<T>; | (5) |  |
| template< class T >      requires requires { typename T::element_type; } struct value_type<T>; | (6) |  |
|  |  |  |

Computes the associated value type of the type `I`, if any. Users may specialize `value_type` for a program-defined type.

1) Primary template is an empty struct.2) Specialization for pointers. If `T` is an object type, provides a member type `type` equal to std::remove_cv_t<T>. Otherwise, there is no member `type`.3) Specialization for array types.4) Specialization for const-qualified types.5) Specialization for types that define a public and accessible member type `value_type`. If `T::value_type` is an object type, provides a member type `type` equal to `T::value_type`. Otherwise, there is no member `type`.6) Specialization for types that define a public and accessible member type `element_type` (e.g., std::shared_ptr). If `T::element_type` is an object type, provides a member type `type` equal to std::remove_cv_t<typename T::element_type>. Otherwise, there is no member `type`.

### Helper alias template

|  |  |  |
| --- | --- | --- |
| template< class T >   using value_type_t = typename ranges::value_type<T>::type; |  | (ranges TS) |
|  |  |  |

### Notes

If a type contains both a `value_type` member and a `element_type` member, then the specializations (5) and (6) are ambiguous.

`value_type` is intended for use with `Readable` types such as iterators. It is not intended for use with ranges.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| Readable | specifies that a type is readable by applying operator `*`   (concept) |
| iterator_traits") | compatibility traits class that collects an iterator’s associated types (alias template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/iterator/value_type&oldid=155554>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 July 2023, at 23:13.