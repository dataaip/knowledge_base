# std::experimental::ranges::less

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | invoke | | | | | | identity | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_to | | | | | | not_equal_to | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | greater | | | | | | ****less**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | greater_equal | | | | | | less_equal | | | | | |
| Metaprogramming and type traits | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_swappable_withis_swappable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_nothrow_swappable_withis_nothrow_swappable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_reference | | | | | | common_type | | | | | |
| Tagged pairs and tuples | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | TagSpecifier | | | | | | TaggedType | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged | | | | | | tag specifiers | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_pair | | | | | | make_tagged_pair | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tagged_tuple | | | | | | make_tagged_tuple | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/functional>` |  |  |
| template< class T = void >      requires StrictTotallyOrdered<T> ||               Same<T, void> ||               /\* < on two const T lvalues invokes a built-in operator comparing pointers \*/ struct less; |  | (ranges TS) |
| template<>  struct less<void>; |  | (ranges TS) |
|  |  |  |

Function object for performing comparisons. The primary template invokes operator< on const lvalues of type `T`. The specialization `less<void>` deduces the parameter types of the function call operator from the arguments (but not the return type).

All specializations of `less` are `Semiregular`.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `is_transparent` (member only of `less<void>` specialization) | /\* unspecified \*/ |

### Member functions

|  |  |
| --- | --- |
| operator() | checks if the first argument is **less** than the second   (public member function) |

## std::experimental::ranges::less::operator()

|  |  |  |
| --- | --- | --- |
| constexpr bool operator()(const T& x, const T& y) const; | (1) | (member only of primary `less<T>` template) |
| template< class T, class U >      requires StrictTotallyOrderedWith<T, U> ||               /\* std::declval<T>() < std::declval<U>() resolves to                  a built-in operator comparing pointers \*/ constexpr bool operator()(T&& t, U&& u) const; | (2) | (member only of `less<void>` specialization) |
|  |  |  |

1) Compares `x` and `y`. Equivalent to return ranges::less<>{}(x, y);.2) Compares `t` and `u`. Equivalent to return std::forward<T>(t) < std::forward<U>(u);, except when that expression resolves to a call to a builtin operator< comparing pointers.

When a call to (1) or (2) would invoke a built-in operator comparing pointers of type `P`, the result is instead determined as follows:

- Returns true if the (possibly converted) value of the first argument precedes the (possibly converted) value of the second argument in the implementation-defined strict total ordering over all pointer values of type `P`. This strict total ordering is consistent with the partial order imposed by the builtin operators `<`, `>`, `<=`, and `>=`.
- Otherwise, returns false.

The behavior is undefined unless the conversion sequences from both `T` and `U` to `P` are equality-preserving (see below).

### Equality preservation

An expression is **equality preserving** if it results in equal outputs given equal inputs.

- The inputs to an expression consist of its operands.
- The outputs of an expression consist of its result and all operands modified by the expression (if any).

Every expression required to be equality preserving is further required to be **stable**: two evaluations of such an expression with the same input objects must have equal outputs absent any explicit intervening modification of those input objects.

### Notes

Unlike std::less, `ranges::less` requires all six comparison operators `<`, `<=`, `>`, `>=`, `==` and `!=` to be valid (via the `StrictTotallyOrdered` and `StrictTotallyOrderedWith` constraints).

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| less | function object implementing x < y   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/functional/less&oldid=155352>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 July 2023, at 11:13.