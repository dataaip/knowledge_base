# std::experimental::any::operator=

From cppreference.com
< cpp‎ | experimental‎ | any
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

std::experimental::any

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| any::any | | | | |
| ****any::operator=**** | | | | |
| Modifiers | | | | |
| any::clear | | | | |
| any::swap | | | | |
| Observers | | | | |
| any::empty | | | | |
| any::type | | | | |
| Non-member functions | | | | |
| swap(std::experimental::any) | | | | |
| any_cast | | | | |

|  |  |  |
| --- | --- | --- |
| any& operator=( const any& rhs ); | (1) | (library fundamentals TS) |
| any& operator=( any&& rhs ) noexcept; | (2) | (library fundamentals TS) |
| template< typename ValueType >      any& operator=( ValueType&& rhs ); | (3) | (library fundamentals TS) |
|  |  |  |

Assigns contents to the contained value.

1) Assigns by copying the state of rhs, as if by any(rhs).swap(\*this).2) Assigns by moving the state of rhs, as if by any(std::move(rhs)).swap(\*this). rhs is left in a valid but unspecified state after the assignment.3) Assigns the type and value of rhs, as if by any(std::forward<ValueType>(rhs)).swap(\*this). If std::is_copy_constructible<std::decay_t<ValueType>>::value is false, the program is ill-formed. This overload participates in overload resolution only if std::decay_t<ValueType> is not the same type as any.

### Template parameters

|  |  |  |
| --- | --- | --- |
| ValueType | - | contained value type |
| Type requirements | | |
| -`std::decay_t<ValueType>` must meet the requirements of CopyConstructible. | | |

### Parameters

|  |  |  |
| --- | --- | --- |
| rhs | - | object whose contained value to assign |

### Return value

\*this

### Exceptions

1,3) Throws bad_alloc or any exception thrown by the constructor of the contained type. If an exception is thrown, there are no effects (strong exception guarantee).

### See also

|  |  |
| --- | --- |
| (constructor) | constructs an `any` object   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/operator%3D&oldid=160528>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 October 2023, at 09:32.