# std::experimental::ranges::less_equal

From cppreference.com
< cpp‎ | experimental‎ | ranges
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

Ranges

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Concepts | | | | |
| General utilities | | | | |
| Iterators | | | | |
| Ranges | | | | |
| Algorithms | | | | |

General utilities library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Utility components | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | exchange | | | | | |
| Function objects | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | invoke | | | | | | identity | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_to | | | | | | not_equal_to | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | greater | | | | | | less | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | greater_equal | | | | | | ****less_equal**** | | | | | |
| Metaprogramming and type traits | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_swappable_withis_swappable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_nothrow_swappable_withis_nothrow_swappable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_reference | | | | | | common_type | | | | | |
| Tagged pairs and tuples | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | TagSpecifier | | | | | | TaggedType | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged | | | | | | tag specifiers | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_pair | | | | | | make_tagged_pair | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_tuple | | | | | | make_tagged_tuple | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/functional>` |  |  |
| template< class T = void >      requires StrictTotallyOrdered<T> ||               Same<T, void> ||               /\* < on two const T lvalues invokes a built-in operator comparing pointers \*/ struct less_equal; |  | (ranges TS) |
| template<>  struct less_equal<void>; |  | (ranges TS) |
|  |  |  |

Function object for performing comparisons. The primary template invokes operator< on const lvalues of type `T` with the argument order inverted and then negates the result. The specialization `less_equal<void>` deduces the parameter types of the function call operator from the arguments (but not the return type).

All specializations of `less_equal` are `Semiregular`.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `is_transparent` (member only of `less_equal<void>` specialization) | /\* unspecified \*/ |

### Member functions

|  |  |
| --- | --- |
| operator() | checks if the first argument is **less** than or **equal** to the second   (public member function) |

## std::experimental::ranges::less_equal::operator()

|  |  |  |
| --- | --- | --- |
| constexpr bool operator()(const T& x, const T& y) const; | (1) | (member only of primary `less_equal<T>` template) |
| template< class T, class U >      requires StrictTotallyOrderedWith<T, U> ||               /\* std::declval<T>() < std::declval<U>() resolves to                  a built-in operator comparing pointers \*/ constexpr bool operator()(T&& t, U&& u) const; | (2) | (member only of `less_equal<void>` specialization) |
|  |  |  |

1) Compares `x` and `y`. Equivalent to return !ranges::less<>{}(y, x);.2) Compares `t` and `u`. Equivalent to return !ranges::less<>{}(std::forward<U>(u), std::forward<T>(t));.

### Notes

Unlike std::less_equal, `ranges::less_equal` requires all six comparison operators `<`, `<=`, `>`, `>=`, `==` and `!=` to be valid (via the `StrictTotallyOrdered` and `StrictTotallyOrderedWith` constraints) and is entirely defined in terms of ranges::less. However, the implementation is free to use operator<= directly, because those concepts require the results of the comparison operators to be consistent.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| less_equal | function object implementing x <= y   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/functional/less_equal&oldid=155353>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 July 2023, at 11:15.