# std::experimental::pmr::memory_resource

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
| ****memory_resource**** | | | | |
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
| function | | | | |
| packaged_task | | | | |
| promise | | | | |

****std::experimental::pmr::memory_resource****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| memory_resource::memory_resource | | | | |
| Public member functions | | | | |
| memory_resource::allocate | | | | |
| memory_resource::deallocate | | | | |
| memory_resource::is_equal | | | | |
| Protected member functions | | | | |
| memory_resource::do_allocate | | | | |
| memory_resource::do_deallocate | | | | |
| memory_resource::do_is_equal | | | | |
| Non-member functions | | | | |
| operator==operator!= | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/memory_resource>` |  |  |
| class memory_resource; |  | (library fundamentals TS) |
|  |  |  |

The class `std::experimental::pmr::memory_resource` is an abstract interface to an unbounded set of classes encapsulating memory resources.

### Member functions

|  |  |
| --- | --- |
| (constructor)(implicitly declared) | constructs a new `memory_resource`   (public member function) |
| (destructor)[virtual] | destructs a `memory_resource`   (virtual public member function) |
| operator=(implicitly declared) | implicitly declared copy assignment operator   (public member function) |
| Public member functions | |
| allocate | allocates memory   (public member function) |
| deallocate | deallocates memory   (public member function) |
| is_equal | compare for equality with another `memory_resource`   (public member function) |
| Protected member functions | |
| do_allocate[virtual] | allocates memory   (virtual protected member function) |
| do_deallocate[virtual] | deallocates memory   (virtual protected member function) |
| do_is_equal[virtual] | compare for equality with another `memory_resource`   (virtual protected member function) |

### Non-member-functions

|  |  |
| --- | --- |
| operator==operator!= | compare two `memory_resource`s   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/memory_resource&oldid=164155>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 November 2023, at 00:27.