# std::experimental::unique_resource<R, D>::operator=

From cppreference.com
< cpp‎ | experimental‎ | unique resource
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

Library fundamentals v3

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::scope_exit | | | | |
| experimental::scope_fail | | | | |
| experimental::scope_success | | | | |
| experimental::unique_resource | | | | |

std::experimental::unique_resource

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| unique_resource::unique_resource | | | | |
| unique_resource::~unique_resource | | | | |
| ****unique_resource::operator=**** | | | | |
| Modifiers | | | | |
| unique_resource::release | | | | |
| unique_resource::reset | | | | |
| Observers | | | | |
| unique_resource::get | | | | |
| unique_resource::get_deleter | | | | |
| unique_resource::operator\*unique_resource::operator-> | | | | |
| Non-member functions | | | | |
| make_unique_resource_checked | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| unique_resource& operator=( unique_resource&& other )      noexcept(/\*see below\*/); |  | (library fundamentals TS v3) |
|  |  |  |

Move assignment operator. Replaces the managed resource and the deleter with other's.

Formally, let `RS` be the type of stored resource handle:

- First, calls reset() to dispose the currently owned resource, if any.
- Then assigns the stored resource handle and the deleter with other's. `std::move` is applied to the stored resource handle or the deleter of other if std::is_nothrow_move_assignable_v<RS> or std::is_nothrow_move_assignable_v<D> is true respectively. Assignment of the stored resource handle is executed first, unless std::is_nothrow_move_assignable_v<D> is false and std::is_nothrow_move_assignable_v<RS> is true.
- Finally, sets \*this to own the resource if and only if other owned it before assignment, and other not to own the resource.

If std::is_nothrow_move_assignable_v<RS> is true, `RS` shall satisfy the MoveAssignable requirements; otherwise `RS` shall satisfy the CopyAssignable requirements. If std::is_nothrow_move_assignable_v<D> is true, `D` shall satisfy the MoveAssignable requirements; otherwise `D` shall satisfy the CopyAssignable requirements. Failing to satisfy above requirements results in undefined behavior.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | resource wrapper from which ownership will be transferred |

### Return value

\*this

### Exceptions

Any exception thrown in copy-assignment.

noexcept specification:noexcept(std::is_nothrow_move_assignable_v<RS> && std::is_nothrow_move_assignable_v<D>)

### Notes

If a copy of a member throws an exception, this mechanism leaves other intact and \*this in the released state.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| reset | disposes or replaces the managed resource   (public member function) |
| operator= | assigns the `unique_ptr`   (public member function of `std::unique_ptr<T,Deleter>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/operator%3D&oldid=156350>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 August 2023, at 22:48.