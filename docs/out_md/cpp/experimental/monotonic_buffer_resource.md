# std::experimental::pmr::monotonic_buffer_resource

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
| memory_resource | | | | |
| synchronized_pool_resource | | | | |
| unsynchronized_pool_resource | | | | |
| ****monotonic_buffer_resource**** | | | | |
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

****std::experimental::pmr::monotonic_buffer_resource****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| monotonic_buffer_resource::monotonic_buffer_resource | | | | |
| monotonic_buffer_resource::~monotonic_buffer_resource | | | | |
| Public member functions | | | | |
| monotonic_buffer_resource::release | | | | |
| monotonic_buffer_resource::upstream_resource | | | | |
| Protected member functions | | | | |
| monotonic_buffer_resource::do_allocate | | | | |
| monotonic_buffer_resource::do_deallocate | | | | |
| monotonic_buffer_resource::do_is_equal | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/memory_resource>` |  |  |
| class monotonic_buffer_resource : public memory_resource; |  | (library fundamentals TS) |
|  |  |  |

The class `std::experimental::pmr::monotonic_buffer_resource` is a special-purpose memory resource class that releases the allocated memory only when the resource is destroyed. It is intended for very fast memory allocations in situations where memory is used to build up a few objects and then is released all at once.

`monotonic_buffer_resource` can be constructed with an initial buffer. If there is no initial buffer, or if the buffer is exhausted, additional buffers are obtained from an **upstream memory resource** supplied at construction. The size of buffers obtained follows a geometric progression.

`monotonic_buffer_resource` is not thread-safe.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `monotonic_buffer_resource`   (public member function) |
| (destructor)[virtual] | destroys a `monotonic_buffer_resource`, releasing all allocated memory   (virtual public member function) |
| operator=[deleted] | copy assignment operator is deleted. `monotonic_buffer_resource` is not copy assignable   (public member function) |
| Public member functions | |
| release | release all allocated memory   (public member function) |
| upstream_resource | returns a pointer to the upstream memory resource   (public member function) |
| Protected member functions | |
| do_allocate[virtual] | allocate memory   (virtual protected member function) |
| do_deallocate[virtual] | no-op   (virtual protected member function) |
| do_is_equal[virtual] | compare for equality with another `memory_resource`   (virtual protected member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/monotonic_buffer_resource&oldid=164169>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 November 2023, at 00:53.