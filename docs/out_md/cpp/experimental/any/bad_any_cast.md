# std::experimental::bad_any_cast

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
| Defined in header `<experimental/any>` |  |  |
| class bad_any_cast : public std::bad_cast; |  | (library fundamentals TS) |
|  |  |  |

Defines a type of object to be thrown by the value-returning forms of std::experimental::any_cast on failure.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `bad_any_cast` object   (public member function) |
| operator= | replaces the `bad_any_cast` object   (public member function) |
| what | returns the explanatory string   (public member function) |

## std::experimental::bad_any_cast::bad_any_cast

|  |  |  |
| --- | --- | --- |
| bad_any_cast() noexcept; | (1) | (library fundamentals TS) |
| bad_any_cast( const bad_any_cast& other ) noexcept; | (2) | (library fundamentals TS) |
|  |  |  |

Constructs a new `bad_any_cast` object with an implementation-defined null-terminated byte string which is accessible through what().

1) Default constructor.2) Copy constructor. If \*this and other both have dynamic type `std::experimental::bad_any_cast` then std::strcmp(what(), other.what()) == 0.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another exception object to copy |

## std::experimental::bad_any_cast::operator=

|  |  |  |
| --- | --- | --- |
| bad_any_cast& operator=( const bad_any_cast& other ) noexcept; |  | (library fundamentals TS) |
|  |  |  |

Assigns the contents with those of other.If \*this and other both have dynamic type `std::experimental::bad_any_cast` then std::strcmp(what(), other.what()) == 0 after assignment.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another exception object to assign with |

### Return value

\*this

## std::experimental::bad_any_cast::what

|  |  |  |
| --- | --- | --- |
| virtual const char\* what() const noexcept; |  | (library fundamentals TS) |
|  |  |  |

Returns the explanatory string.

### Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a std::wstring. The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called.

|  |  |
| --- | --- |
| The returned string is encoded with the ordinary literal encoding during constant evaluation. | (since C++26) |

### Notes

Implementations are allowed but not required to override `what()`.

## Inherited from std::bad_cast

## Inherited from std::exception

### Member functions

|  |  |
| --- | --- |
| (destructor)[virtual] | destroys the exception object   (virtual public member function of `std::exception`) |
| what[virtual] | returns an explanatory string   (virtual public member function of `std::exception`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/bad_any_cast&oldid=160414>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 October 2023, at 11:21.