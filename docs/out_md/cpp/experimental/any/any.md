# std::experimental::any::any

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
| ****any::any**** | | | | |
| any::operator= | | | | |
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
| any() noexcept; | (1) | (library fundamentals TS) |
| any( const any& other ); | (2) | (library fundamentals TS) |
| any( any&& other ) noexcept; | (3) | (library fundamentals TS) |
| template<typename ValueType>      any( ValueType&& value ); | (4) | (library fundamentals TS) |
|  |  |  |

Constructs a new `any` object.

1) Constructs an empty object.2,3) Copies (2) or moves (3) content of other into a new instance, so that any content is equivalent in both type and value to those of other prior to the constructor call, or empty if other is empty.4) Constructs an object with initial content an object of type std::decay_t<ValueType>, direct-initialized from std::forward<ValueType>(value). If std::is_copy_constructible<std::decay_t<ValueType>>::value is false, the program is ill-formed. This overload participates in overload resolution only if std::decay_t<ValueType> is not the same type as any.

### Template parameters

|  |  |  |
| --- | --- | --- |
| ValueType | - | contained value type |
| Type requirements | | |
| -`std::decay_t<ValueType>` must meet the requirements of CopyConstructible. | | |

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another `any` object to copy or move from |
| value | - | value to initialize the contained value with |

### Exceptions

2,4) Throws any exception thrown by the constructor of the contained type.

### See also

|  |  |
| --- | --- |
| operator= | assigns an `any` object   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/any&oldid=157713>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 September 2023, at 22:26.