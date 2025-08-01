# std::experimental::weak_ptr

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
| experimental::any | | | | |
| experimental::basic_string_view | | | | |
| experimental::sample | | | | |
| experimental::shared_ptr | | | | |
| ****experimental::weak_ptr**** | | | | |
| experimental::apply | | | | |
| experimental::invocation_typeexperimental::raw_invocation_type | | | | |
| experimental::search | | | | |
| experimental::default_searcherexperimental::make_default_searcher | | | | |
| experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher | | | | |
| experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher | | | | |
| Type-erased and polymorphic allocators | | | | |
| Variable templates for type traits | | | | |

****std::experimental::weak_ptr****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| weak_ptr::weak_ptr | | | | |
| Members and non-members identical to those of `std::weak_ptr` | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/memory>` |  |  |
| template< class T > class weak_ptr; |  | (library fundamentals TS) |
|  |  |  |

`std::experimental::weak_ptr` is a modified version of std::weak_ptr that interoperates with std::experimental::shared_ptr and has support for arrays.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| element_type | std::remove_extent_t<T> |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs new `weak_ptr`   (public member function) |

## Members and non-members identical to std::weak_ptr

### Member functions

The following member functions work with std::experimental::shared_ptr instead of std::shared_ptr and std::experimental::weak_ptr instead of std::weak_ptr. The behavior is otherwise identical.

|  |  |
| --- | --- |
| (destructor) | destroys a `weak_ptr`   (public member function of `std::weak_ptr<T>`) |
| operator= | assigns the `weak_ptr`   (public member function of `std::weak_ptr<T>`) |
| Modifiers | |
| reset | releases the ownership of the managed object   (public member function of `std::weak_ptr<T>`) |
| swap | swaps the managed objects   (public member function of `std::weak_ptr<T>`) |
| Observers | |
| use_count | returns the number of `shared_ptr` objects that manage the object   (public member function of `std::weak_ptr<T>`) |
| expired | checks whether the referenced object was already deleted   (public member function of `std::weak_ptr<T>`) |
| lock | creates a `shared_ptr` that manages the referenced object   (public member function of `std::weak_ptr<T>`) |
| owner_before | provides owner-based ordering of weak pointers   (public member function of `std::weak_ptr<T>`) |

### Non-member functions

This non-member function is declared in the `std::experimental` namespace, and work with `std::experimental::weak_ptr` rather than std::weak_ptr, but otherwise behaves identically to the corresponding C++14 function.

|  |  |
| --- | --- |
| std::swap(std::weak_ptr)(C++11) | specializes the std::swap algorithm   (function template) |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/weak_ptr&oldid=164655>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 December 2023, at 08:11.