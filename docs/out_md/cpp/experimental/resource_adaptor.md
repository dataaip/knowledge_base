# std::experimental::pmr::resource_adaptor, std::pmr::experimental::resource_adaptor

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
| ****resource_adaptor**** | | | | |
| Global memory resources | | | | |
| new_delete_resource | | | | |
| null_memory_resource | | | | |
| get_default_resource | | | | |
| set_default_resource | | | | |
| Type-erased allocator support for existing classes | | | | |
| function | | | | |
| packaged_task | | | | |
| promise | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/memory_resource>` |  |  |
| template< class Alloc >  using resource_adaptor = /\*resource-adaptor-imp\*/<                               typename std::allocator_traits<Alloc>:: template rebind_alloc<char>>; |  | (library fundamentals TS) |
| template< class Alloc >  class /\*resource-adaptor-imp\*/ : public memory_resource; // for exposition only |  | (library fundamentals TS) |
|  |  |  |

The alias template `resource_adaptor` adapts the allocator type `Alloc` with a `memory_resource` interface. The allocator is rebound to a `char` value type before it is actually adapted (using the **`resource-adaptor-imp`** class template), so that adapting specializations of the same allocator template always yields the same type, regardless of the value type the allocator template is originally instantiated with.

|  |  |
| --- | --- |
| `resource_adaptor` is defined in namespace `std::experimental::pmr`, and the base type `memory_resorce` in this page is std::experimental::pmr::memory_resource. | (library fundamentals TS) (until library fundamentals TS v3) |
| `resource_adaptor` is defined in namespace `std::pmr::experimental`, and the base type `memory_resorce` in this page is std::pmr::memory_resource. | (library fundamentals TS v3) |

**`resource-adaptor-imp`** is a class template whose members are described below. The name **`resource-adaptor-imp`** is for exposition purposes only and not normative.

In addition to meeting the Allocator requirements, `Alloc` must additionally satisfy the following requirements:

- std::allocator_traits<Alloc>::pointer shall be identical to Alloc::value_type\*.
- std::allocator_traits<Alloc>::const_pointer shall be identical to Alloc::value_type const\*.
- std::allocator_traits<Alloc>::void_pointer shall be identical to void\*.
- std::allocator_traits<Alloc>::const_const_pointer shall be identical to void const\*.

### Member types of **resource-adaptor-imp**

|  |  |
| --- | --- |
| Member type | Definition |
| `allocator_type` | `Alloc` |

### Member functions of **resource-adaptor-imp**

## **resource-adaptor-imp**::**resource-adaptor-imp**

|  |  |  |
| --- | --- | --- |
| /\*resource-adaptor-imp\*/() = default; | (1) | (library fundamentals TS) |
| /\*resource-adaptor-imp\*/(const /\*resource-adaptor-imp\*/& other)      = default; | (2) | (library fundamentals TS) |
| /\*resource-adaptor-imp\*/(/\*resource-adaptor-imp\*/&& other)      = default; | (3) | (library fundamentals TS) |
| explicit /\*resource-adaptor-imp\*/(const Alloc& a2); | (4) | (library fundamentals TS) |
| explicit /\*resource-adaptor-imp\*/(Alloc&& a2); | (5) | (library fundamentals TS) |
|  |  |  |

1) Default constructor. Default constructs the wrapped allocator.2) Copy constructor. Copy constructs the wrapped allocator from the allocator wrapped by `other`.3) Move constructor. Move constructs the wrapped allocator from the allocator wrapped by `other`.4) Initializes the wrapped allocator with `a2`.5) Initializes the wrapped allocator with std::move(a2).

#### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another **`resource-adaptor-imp`** object to copy or move from |
| a2 | - | another `Alloc` object to copy or move from |

## **resource-adaptor-imp**::get_allocator

|  |  |  |
| --- | --- | --- |
| allocator_type get_allocator() const; |  | (library fundamentals TS) |
|  |  |  |

Returns a copy of the wrapped allocator.

## **resource-adaptor-imp**::operator=

|  |  |  |
| --- | --- | --- |
| /\*resource-adaptor-imp\*/& operator=(const /\*resource-adaptor-imp\*/& other)      = default; |  | (library fundamentals TS) |
|  |  |  |

Defaulted copy assignment operator. Copy assigns the wrapped allocator from that of `other`.

## **resource-adaptor-imp**::do_allocate

|  |  |  |
| --- | --- | --- |
| protected:  virtual void\* do_allocate(std::size_t bytes, std::size_t alignment); |  | (library fundamentals TS) |
|  |  |  |

Allocates memory using the `allocate` member function of the wrapped allocator.

## **resource-adaptor-imp**::do_deallocate

|  |  |  |
| --- | --- | --- |
| protected:  virtual void do_deallocate(void \*p, std::size_t bytes, std::size_t alignment); |  | (library fundamentals TS) |
|  |  |  |

Deallocates the storage pointed to by `p` using the `deallocate` member function of the wrapped allocator.

`p` must have been allocated using the `allocate` member function of an allocator that compares equal to the wrapped allocator, and must not have been subsequently deallocated.

## **resource-adaptor-imp**::do_is_equal

|  |  |  |
| --- | --- | --- |
| protected:  virtual bool do_is_equal(const memory_resource& other) const noexcept; |  | (library fundamentals TS) |
|  |  |  |

Let `p` be dynamic_cast<const /\*resource-adaptor-imp\*/\*>(&other). If `p` is a null pointer value, returns false. Otherwise, return the result of comparing the allocators wrapped by \*p and \*this using operator==.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/resource_adaptor&oldid=150327>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 April 2023, at 18:20.