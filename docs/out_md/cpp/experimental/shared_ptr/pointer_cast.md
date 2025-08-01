# std::experimental::static_pointer_cast, std::experimental::dynamic_pointer_cast, std::experimental::const_pointer_cast, std::experimental::reinterpret_pointer_cast

From cppreference.com
< cpp‎ | experimental‎ | shared ptr
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

std::experimental::shared_ptr

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| shared_ptr::shared_ptr | | | | |
| shared_ptr::get | | | | |
| shared_ptr::operator\*shared_ptr::operator-> | | | | |
| [shared_ptr::operator[]](operator_at.html "cpp/experimental/shared ptr/operator at") | | | | |
| Non-member functions | | | | |
| ****experimental::static_pointer_castexperimental::dynamic_pointer_castexperimental::const_pointer_castexperimental::reinterpret_pointer_cast**** | | | | |
| std::hash | | | | |
| Members and non-members identical to those of `std::shared_ptr` | | | | |

|  |  |  |
| --- | --- | --- |
| template< class T, class U >   std::experimental::shared_ptr<T>     static_pointer_cast( const std::experimental::shared_ptr<U>& r ) noexcept; | (1) | (library fundamentals TS) |
| template< class T, class U >   std::experimental::shared_ptr<T>     dynamic_pointer_cast( const std::experimental::shared_ptr<U>& r ) noexcept; | (2) | (library fundamentals TS) |
| template< class T, class U >   std::experimental::shared_ptr<T>     const_pointer_cast( const std::experimental::shared_ptr<U>& r ) noexcept; | (3) | (library fundamentals TS) |
| template< class T, class U >   std::experimental::shared_ptr<T>     reinterpret_pointer_cast( const std::experimental::shared_ptr<U>& r ) noexcept; | (4) | (library fundamentals TS) |
|  |  |  |

Creates a new instance of std::experimental::shared_ptr whose stored pointer is obtained from r's stored pointer using a cast expression. If r is empty, so is the new `shared_ptr` (but its stored pointer is not necessarily null).

Otherwise, the new `shared_ptr` will share ownership with r, except that it is empty if the `dynamic_cast` performed by `dynamic_pointer_cast` returns a null pointer.

Let `Y` be typename std::experimental::shared_ptr<T>::element_type, then the resulting std::experimental::shared_ptr's stored pointer will be obtained by calling (in respective order):

1) static_cast<Y\*>(r.get()).2) dynamic_cast<Y\*>(r.get()) (if the result of the `dynamic_cast` is a null pointer value, the returned `shared_ptr` will be empty).3) const_cast<Y\*>(r.get()).4) reinterpret_cast<Y\*>(r.get()).

The behavior of these functions is undefined unless the corresponding cast from `U*` to `T*` is well formed:

1) The behavior is undefined unless static_cast<T\*>((U\*)nullptr) is well formed.2) The behavior is undefined unless dynamic_cast<T\*>((U\*)nullptr) is well formed.3) The behavior is undefined unless const_cast<T\*>((U\*)nullptr) is well formed.4) The behavior is undefined unless reinterpret_cast<T\*>((U\*)nullptr) is well formed.

### Parameters

|  |  |  |
| --- | --- | --- |
| r | - | the pointer to convert |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| (constructor) | constructs new `shared_ptr`   (public member function) |
| static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast(C++17) | applies static_cast, dynamic_cast, const_cast, or reinterpret_cast to the stored pointer   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/shared_ptr/pointer_cast&oldid=156223>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 August 2023, at 08:43.