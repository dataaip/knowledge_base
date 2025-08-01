# std::experimental::any

From cppreference.com
< cpp‎ | experimental
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

Library fundamentals

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::optional | | | | |
| ****experimental::any**** | | | | |
| experimental::basic_string_view | | | | |
| experimental::sample | | | | |
| experimental::shared_ptr | | | | |
| experimental::weak_ptr | | | | |
| experimental::apply | | | | |
| experimental::invocation_typeexperimental::raw_invocation_type | | | | |
| experimental::search | | | | |
| experimental::default_searcherexperimental::make_default_searcher | | | | |
| experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher | | | | |
| experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher | | | | |
| Type-erased and polymorphic allocators | | | | |
| Variable templates for type traits | | | | |

****std::experimental::any****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| any::any | | | | |
| any::operator= | | | | |
| Modifiers | | | | |
| any::clear | | | | |
| any::swap | | | | |
| Observers | | | | |
| any::empty | | | | |
| any::type | | | | |
| Non-member functions | | | | |
| swap(std::experimental::any) | | | | |
| any_cast | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/any>` |  |  |
| class any; |  | (library fundamentals TS) |
|  |  |  |

The class `any` describes a type-safe container for single values of any type.

1) An object of class `any` stores an instance of any type that satisfies the constructor requirements or is empty, and this is referred to as the **state** of the class `any` object. The stored instance is called the contained object. Two states are equivalent if they are either both empty or if both are not empty and if the contained objects are equivalent.2) The non-member `any_cast` functions provide type-safe access to the contained object.

Implementations are encouraged to avoid dynamic allocations for small objects, but such an optimization may only be applied to types that for which std::is_nothrow_move_constructible returns true.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an `any` object   (public member function) |
| operator= | assigns an `any` object   (public member function) |
| (destructor) | destroys an `any` object   (public member function) |
| Modifiers | |
| clear | destroys contained object   (public member function) |
| swap | swaps two `any` objects   (public member function) |
| Observers | |
| empty | checks if object holds a value   (public member function) |
| type | returns the `typeid` of the contained value   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| swap | swaps two `any` instances   (function) |
| any_cast | type-safe access to the contained object   (function template) |

### Helper classes

|  |  |
| --- | --- |
| bad_any_cast(library fundamentals TS) | exception thrown by the value-returning forms of `any_cast` on a type mismatch   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any&oldid=163621>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 November 2023, at 23:40.