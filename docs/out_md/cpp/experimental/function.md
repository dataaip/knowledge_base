# std::experimental::function

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
| experimental::weak_ptr | | | | |
| experimental::apply | | | | |
| experimental::invocation_typeexperimental::raw_invocation_type | | | | |
| experimental::search | | | | |
| experimental::default_searcherexperimental::make_default_searcher | | | | |
| experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher | | | | |
| experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher | | | | |
| Type-erased and polymorphic allocators | | | | |
| Variable templates for type traits | | | | |

Polymorphic allocator library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| polymorphic_allocator | | | | |
| Convenience aliases for containers using `polymorphic_allocator` | | | | |
| Memory resource classes | | | | |
| memory_resource | | | | |
| synchronized_pool_resource | | | | |
| unsynchronized_pool_resource | | | | |
| monotonic_buffer_resource | | | | |
| resource_adaptor | | | | |
| Global memory resources | | | | |
| new_delete_resource | | | | |
| null_memory_resource | | | | |
| get_default_resource | | | | |
| set_default_resource | | | | |
| Type-erased allocator support for existing classes | | | | |
| ****function**** | | | | |
| packaged_task | | | | |
| promise | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/functional>` |  |  |
| template< class >  class function; /\* undefined \*/ |  | (library fundamentals TS) |
| template< class R, class... Args >  class function<R(Args...)> |  | (library fundamentals TS) |
|  |  |  |

`std::experimental::function` is a modified version of std::function with support for type-erased allocators.

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `allocator_type` | |  |  | | --- | --- | | std::experimental::erased_type | (library fundamentals TS) (until library fundamentals TS v3) | | std::pmr::polymorphic_allocator<> | (library fundamentals TS v3) | |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `std::experimental::function` instance   (public member function) |
| operator= | assigns a new target   (public member function) |
| swap | swaps the contents   (public member function) |
| get_memory_resource(removed in library fundamentals TS v3) | retrieves a pointer to the memory resource used by this object to allocate memory   (public member function) |
| get_allocator(library fundamentals TS v3) | retrieves a type-erased std::pmr::polymorphic_allocator used by this object to allocate memory   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| std::experimental::swap(std::experimental::function) | specializes the `swap` algorithm   (function template) |
| operator==operator!=(removed in library fundamentals TS v3) | compares an std::experimental::function with nullptr   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::uses_allocator<std::experimental::function>(removed in library fundamentals TS v3) | specializes the std::uses_allocator type trait   (class template specialization) |

## Members identical to std::function

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `result_type` | `R` |
| Member types removed in Library Fundamental TS v3 | |
| `argument_type` | `T` if sizeof...(Args) == 1 and `T` is the first and only type in `Args...` |
| `first_argument_type` | `T1` if sizeof...(Args) == 2 and `T1` is the first of the two types in `Args...` |
| `second_argument_type` | `T2` if sizeof...(Args) == 2 and `T2` is the second of the two types in `Args...` |

|  |  |
| --- | --- |
| Member types `argument_type`, `first_argument_type`, and `second_argument_type` are removed, because the correponding member types of std::function are removed in C++20. | (library fundamentals TS v3) |

### Member functions

|  |  |
| --- | --- |
| (destructor) | destroys a `std::function` instance   (public member function of `std::function<R(Args...)>`) |
| operator bool | checks if a target is contained   (public member function of `std::function<R(Args...)>`) |
| operator()") | invokes the target   (public member function of `std::function<R(Args...)>`) |
| Target access | |
| target_type | obtains the typeid of the stored target   (public member function of `std::function<R(Args...)>`) |
| target | obtains a pointer to the stored target   (public member function of `std::function<R(Args...)>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/function&oldid=164105>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 10:43.