# C++ standard libraries extensions, version 3

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
| ****Library fundamentals 3**** (library fundamentals TS v3) | | | | |
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

****Library fundamentals v3****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::scope_exit | | | | |
| experimental::scope_fail | | | | |
| experimental::scope_success | | | | |
| experimental::unique_resource | | | | |

Version 3 of the C++ Extensions for Library Fundamentals, ISO/IEC TS 19568:2024, defines the following new components for the C++ standard library, in addition to those defined in version 1 and version 2.

Components merged into C++17/20 and the following components are removed in LFTS v3:

- std::experimental::make_array,
- std::experimental::erased_type,
- std::experimental::packaged_task, and
- std::experimental::promise.

### Scope guard

|  |  |
| --- | --- |
| Defined in header `<experimental/scope>` | |
| scope_exit | wraps a function object and invokes it on exiting the scope   (class template) |
| scope_fail | wraps a function object and invokes it on exiting the scope through an exception   (class template) |
| scope_success | wraps a function object and invokes it on exiting the scope normally   (class template) |
| unique_resource | universal RAII resource handle wrapper   (class template) |

### Feature test macros

|  |  |
| --- | --- |
| Defined in header `<experimental/memory_resource>` | |
| __cpp_lib_experimental_memory_resources | a value of at least 201803 indicates that resource_adaptor is supported   (macro constant) |
| Defined in header `<experimental/functional>` | |
| __cpp_lib_experimental_function_polymorphic_allocator | a value of at least 202211 indicates that std::pmr::polymorphic_allocator<> is used for std::experimental::function   (macro constant) |
| Defined in header `<experimental/scope>` | |
| __cpp_lib_experimental_scope | a value of at least 201902 indicates that the scope guards are supported   (macro constant) |

### Notes

The value of `__cpp_lib_experimental_memory_resources` has been increased in LFTS v3, because the design of resource_adaptor is rebased onto std::pmr::memory_resource.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/lib_extensions_3&oldid=177541>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 November 2024, at 00:23.