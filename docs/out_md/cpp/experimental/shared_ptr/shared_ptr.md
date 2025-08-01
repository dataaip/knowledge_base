# std::experimental::shared_ptr<T>::shared_ptr

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
| ****shared_ptr::shared_ptr**** | | | | |
| shared_ptr::get | | | | |
| shared_ptr::operator\*shared_ptr::operator-> | | | | |
| [shared_ptr::operator[]](operator_at.html "cpp/experimental/shared ptr/operator at") | | | | |
| Non-member functions | | | | |
| experimental::static_pointer_castexperimental::dynamic_pointer_castexperimental::const_pointer_castexperimental::reinterpret_pointer_cast | | | | |
| std::hash | | | | |
| Members and non-members identical to those of `std::shared_ptr` | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr shared_ptr() noexcept; | (1) |  |
| constexpr shared_ptr( std::nullptr_t ) noexcept; | (2) |  |
| template< class Y >   explicit shared_ptr( Y\* ptr ); | (3) |  |
| template< class Y, class Deleter >   shared_ptr( Y\* ptr, Deleter d ); | (4) |  |
| template< class Deleter >   shared_ptr( std::nullptr_t ptr, Deleter d ); | (5) |  |
| template< class Y, class Deleter, class Alloc >   shared_ptr( Y\* ptr, Deleter d, Alloc alloc ); | (6) |  |
| template< class Deleter, class Alloc >   shared_ptr( std::nullptr_t ptr, Deleter d, Alloc alloc ); | (7) |  |
| template< class Y >   shared_ptr( const shared_ptr<Y>& r, element_type \*ptr ) noexcept; | (8) |  |
| shared_ptr( const shared_ptr& r ) noexcept; | (9) |  |
| template< class Y >   shared_ptr( const shared_ptr<Y>& r ) noexcept; | (9) |  |
| shared_ptr( shared_ptr&& r ) noexcept; | (10) |  |
| template< class Y >   shared_ptr( shared_ptr<Y>&& r ) noexcept; | (10) |  |
| template< class Y >   explicit shared_ptr( const std::weak_ptr<Y>& r ); | (11) |  |
| template< class Y >   shared_ptr( std::auto_ptr<Y>&& r ); | (12) |  |
| template< class Y, class Deleter >   shared_ptr( std::unique_ptr<Y,Deleter>&& r ); | (13) |  |
|  |  |  |

Constructs new `shared_ptr` from a variety of pointer types that refer to an object to manage.

For the purposes of the description below, a pointer type `Y*` is said to be compatible with a pointer type `T*` if either `Y*` is convertible to `T*` or `Y` is the array type `U[N]` and `T` is `U cv []` (where cv is some set of cv-qualifiers).

1,2) Constructs a `shared_ptr` with no managed object, i.e. empty `shared_ptr`.3-7) Constructs a `shared_ptr` with ptr as the pointer to the managed object. If `T` is an array type `U[N]`, `Y(*)[N]` must be convertible to `T*`. If `T` is an array type `U[]`, `Y(*)[]` must be convertible to `T*`. Otherwise, `Y*` must be convertible to `T*`. Additionally:3) Uses a delete-expression (delete ptr, if `T` is not an array type; delete[] ptr if `T` is an array type) as the deleter. `Y` must be a complete type. That delete expression must be well formed, have well-defined behavior and not throw any exceptions.4,5) Uses the specified deleter d as the deleter. The expression d(ptr) must be well formed, have well-defined behavior and not throw any exceptions. `Deleter` must be CopyConstructible, and its copy constructor and destructor must not throw exceptions.6,7) Same as (4,5), but additionally uses a copy of alloc for allocation of data for internal use. `Alloc` must be a Allocator, and its copy constructor and destructor must not throw exceptions.8) The **aliasing constructor**: constructs a `shared_ptr` which shares ownership information with r, but holds an unrelated and unmanaged pointer ptr. Even if this `shared_ptr` is the last of the group to go out of scope, it will call the destructor for the object originally managed by r. However, calling `get()` on this will always return a copy of ptr. It is the responsibility of the programmer to make sure that this ptr remains valid as long as this shared_ptr exists, such as in the typical use cases where ptr is a member of the object managed by r or is an alias (e.g., downcast) of r.get().9) Constructs a `shared_ptr` which shares ownership of the object managed by r. If r manages no object, \*this manages no object too. The template overload doesn't participate in overload resolution if `Y*` is not **compatible with** `T*`.10) Move-constructs a `shared_ptr` from r. After the construction, \*this contains a copy of the previous state of r, r is empty. The template overload doesn't participate in overload resolution if `Y*` is not **compatible with** `T*`.11) Constructs a `shared_ptr` which shares ownership of the object managed by r. `Y*` must be **compatible with** `T*`. Note that r.lock() may be used for the same purpose: the difference is that this constructor throws an exception if the argument is empty, while weak_ptr<T>::lock() constructs an empty `shared_ptr` in that case.12) Constructs a `shared_ptr` that stores and owns the object formerly owned by r. `Y*` must be convertible to `T*`. After construction, r is empty.13) Constructs a `shared_ptr` which manages the object currently managed by r. The deleter associated with r is stored for future deletion of the managed object. r manages no object after the call. This overload doesn't participate in overload resolution if `Y*` is not **compatible with** `T*`.   
 If `D` is a reference type, equivalent to shared_ptr(r.release(), std::ref(r.get_deleter()). Otherwise, equivalent to shared_ptr(r.release(), r.get_deleter()).

### Notes

When constructing a `shared_ptr` from a raw pointer to an object of a type derived from std::experimental::enable_shared_from_this, the constructors of `shared_ptr` update the private `weak_ptr` member of the std::experimental::enable_shared_from_this base so that future calls to shared_from_this() would share ownership with the `shared_ptr` created by this raw pointer constructor.

The raw pointer overloads assume ownership of the pointed-to object, and so constructing a `shared_ptr` using the raw pointer overload for an object that is already managed by a `shared_ptr` may lead to undefined behavior, even if the object is of a type derived from std::experimental::enable_shared_from_this.

### Parameters

|  |  |  |
| --- | --- | --- |
| ptr | - | a pointer to an object to manage |
| d | - | a deleter to use to destroy the object |
| alloc | - | an allocator to use for allocations of data for internal use |
| r | - | another smart pointer to share the ownership to or acquire the ownership from |

### Exceptions

3) std::bad_alloc if required additional memory could not be obtained. May throw implementation-defined exception for other errors. The applicable delete-expression (delete ptr if `T` is not an array type, delete[] ptr otherwise) is called if an exception occurs.4-7) std::bad_alloc if required additional memory could not be obtained. May throw implementation-defined exception for other errors. d(ptr) is called if an exception occurs.11) std::bad_weak_ptr if r.expired() == true. The constructor has no effect in this case.12) std::bad_alloc if required additional memory could not be obtained. May throw implementation-defined exception for other errors. This constructor has no effect if an exception occurs.13) If an exception is thrown, the constructor has no effects.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| make_sharedmake_shared_for_overwrite(C++20) | creates a shared pointer that manages a new object   (function template) |
| allocate_sharedallocate_shared_for_overwrite(C++20) | creates a shared pointer that manages a new object allocated using an allocator   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/shared_ptr/shared_ptr&oldid=157773>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 September 2023, at 09:30.