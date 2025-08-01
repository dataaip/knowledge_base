# std::experimental::pmr::unsynchronized_pool_resource

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
| ****unsynchronized_pool_resource**** | | | | |
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

****std::experimental::pmr::unsynchronized_pool_resource****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| unsynchronized_pool_resource::unsynchronized_pool_resource | | | | |
| unsynchronized_pool_resource::~unsynchronized_pool_resource | | | | |
| Public member functions | | | | |
| unsynchronized_pool_resource::release | | | | |
| unsynchronized_pool_resource::upstream_resource | | | | |
| unsynchronized_pool_resource::options | | | | |
| Protected member functions | | | | |
| unsynchronized_pool_resource::do_allocate | | | | |
| unsynchronized_pool_resource::do_deallocate | | | | |
| unsynchronized_pool_resource::do_is_equal | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/memory_resource>` |  |  |
| class unsynchronized_pool_resource : public memory_resource; |  | (library fundamentals TS) |
|  |  |  |

The class `std::experimental::pmr::unsynchronized_pool_resource` is a general-purpose memory resource class with the following properties:

- It owns the allocated memory and frees it on destruction, even if `deallocate` has not been called for some of the allocated blocks.
- It consists of a collection of **pools** that serves request for different block sizes. Each pool manages a collection of **chunks** that are then divided into blocks of uniform size.
- Calls to do_allocate are dispatched to the pool serving the smallest blocks accommodating the requested size.
- Exhausting memory in the pool causes the next allocation request for that pool to allocate an additional chunk of memory from the **upstream allocator** to replenish the pool. The chunk size obtained increases geometrically.
- Allocations requests that exceed the largest block size are served from the **upstream allocator** directly.
- The largest block size and maximum chunk size may be tuned by passing a std::experimental::pmr::pool_options struct to its constructor.

`unsynchronized_pool_resource` is not thread-safe, and cannot be accessed from multiple threads simultaneously; use synchronized_pool_resource if access from multiple threads is required.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs an `unsynchronized_pool_resource`   (public member function) |
| (destructor)[virtual] | destroys an `unsynchronized_pool_resource`, releasing all allocated memory   (virtual public member function) |
| operator=[deleted] | copy assignment operator is deleted. `unsynchronized_pool_resource` is not copy assignable   (public member function) |
| Public member functions | |
| release | release all allocated memory   (public member function) |
| upstream_resource | returns a pointer to the upstream memory resource   (public member function) |
| options | returns the options that control the pooling behavior of this resource   (public member function) |
| Protected member functions | |
| do_allocate[virtual] | allocate memory   (virtual protected member function) |
| do_deallocate[virtual] | return memory to the pool   (virtual protected member function) |
| do_is_equal[virtual] | compare for equality with another `memory_resource`   (virtual protected member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unsynchronized_pool_resource&oldid=164640>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 December 2023, at 07:53.