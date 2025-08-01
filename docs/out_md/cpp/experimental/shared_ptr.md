# std::experimental::shared_ptr

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
| ****experimental::shared_ptr**** | | | | |
| experimental::weak_ptr | | | | |
| experimental::apply | | | | |
| experimental::invocation_typeexperimental::raw_invocation_type | | | | |
| experimental::search | | | | |
| experimental::default_searcherexperimental::make_default_searcher | | | | |
| experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher | | | | |
| experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher | | | | |
| Type-erased and polymorphic allocators | | | | |
| Variable templates for type traits | | | | |

****std::experimental::shared_ptr****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| shared_ptr::shared_ptr | | | | |
| shared_ptr::get | | | | |
| shared_ptr::operator\*shared_ptr::operator-> | | | | |
| [shared_ptr::operator[]](shared_ptr/operator_at.html "cpp/experimental/shared ptr/operator at") | | | | |
| Non-member functions | | | | |
| experimental::static_pointer_castexperimental::dynamic_pointer_castexperimental::const_pointer_castexperimental::reinterpret_pointer_cast | | | | |
| std::hash | | | | |
| Members and non-members identical to those of `std::shared_ptr` | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/memory>` |  |  |
| template< class T > class shared_ptr; |  | (library fundamentals TS) |
|  |  |  |

`std::experimental::shared_ptr` is a modified version of std::shared_ptr that adds support for arrays.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| element_type | std::remove_extent_t<T> |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs new `shared_ptr`   (public member function) |
| Observers | |
| get | returns the stored pointer   (public member function) |
| operator\*operator-> | dereferences the stored pointer   (public member function) |
| [operator[]](shared_ptr/operator_at.html "cpp/experimental/shared ptr/operator at") | provides index access to the array   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast | applies static_cast, dynamic_cast, const_cast, or reinterpret_cast to the stored pointer   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::hash<std::experimental::shared_ptr> | hash support for std::experimental::shared_ptr   (class template specialization) |

## Members and non-members identical to std::shared_ptr

### Member functions

The following member functions work with std::experimental::shared_ptr instead of std::shared_ptr and std::experimental::weak_ptr instead of std::weak_ptr. The behavior is otherwise identical.

|  |  |
| --- | --- |
| (destructor) | destructs the owned object if no more `shared_ptr`s link to it   (public member function of `std::shared_ptr<T>`) |
| operator= | assigns the `shared_ptr`   (public member function of `std::shared_ptr<T>`) |
| Modifiers | |
| reset | replaces the managed object   (public member function of `std::shared_ptr<T>`) |
| swap | swaps the managed objects   (public member function of `std::shared_ptr<T>`) |
| Observers | |
| use_count | returns the number of `shared_ptr` objects referring to the same managed object   (public member function of `std::shared_ptr<T>`) |
| unique(until C++20) | checks whether the managed object is managed only by the current `shared_ptr` object   (public member function of `std::shared_ptr<T>`) |
| operator bool | checks if the stored pointer is not null   (public member function of `std::shared_ptr<T>`) |
| owner_before | provides owner-based ordering of shared pointers   (public member function of `std::shared_ptr<T>`) |

### Non-member functions

These non-member functions are declared in the `std::experimental` namespace, and work with `std::experimental::shared_ptr` rather than std::shared_ptr, but otherwise behaves identically to the corresponding C++14 function.

|  |  |
| --- | --- |
| make_sharedmake_shared_for_overwrite(C++20) | creates a shared pointer that manages a new object   (function template) |
| allocate_sharedallocate_shared_for_overwrite(C++20) | creates a shared pointer that manages a new object allocated using an allocator   (function template) |
| get_deleter | returns the deleter of specified type, if owned   (function template) |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) | compares with another `shared_ptr` or with nullptr   (function template) |
| operator<<(std::shared_ptr) | outputs the value of the stored pointer to an output stream   (function template) |
| std::swap(std::shared_ptr)(C++11) | specializes the std::swap algorithm   (function template) |

|  |  |
| --- | --- |
| std::atomic_is_lock_free(std::shared_ptr)std::atomic_load(std::shared_ptr)std::atomic_load_explicit(std::shared_ptr)std::atomic_store(std::shared_ptr)std::atomic_store_explicit(std::shared_ptr)std::atomic_exchange(std::shared_ptr)std::atomic_exchange_explicit(std::shared_ptr)std::atomic_compare_exchange_weak(std::shared_ptr)std::atomic_compare_exchange_strong(std::shared_ptr)std::atomic_compare_exchange_weak_explicit(std::shared_ptr)std::atomic_compare_exchange_strong_explicit(std::shared_ptr)(deprecated in C++20)(removed in C++26) | specializes atomic operations for `std::shared_ptr`   (function template) |

### Helper class templates

These class templates are declared in the `std::experimental` namespace, and work with `std::experimental::shared_ptr` and std::experimental::weak_ptr rather than std::shared_ptr and std::weak_ptr, but otherwise behaves identically to the corresponding C++14 class template.

|  |  |
| --- | --- |
| owner_less(C++11) | provides mixed-type owner-based ordering of shared and weak pointers   (class template) |
| enable_shared_from_this(C++11) | allows an object to create a `shared_ptr` referring to itself   (class template) |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/shared_ptr&oldid=164521>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 December 2023, at 02:01.