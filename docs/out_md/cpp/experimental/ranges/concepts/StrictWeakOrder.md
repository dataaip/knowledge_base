# std::experimental::ranges::StrictWeakOrder

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

Concepts library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Core language concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Same | | | | | | DerivedFrom | | | | | | ConvertibleTo | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | CommonReference | | | | | | Common | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integral | | | | | | SignedIntegral | | | | | | UnsignedIntegral | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignable | | | | | | SwappableSwappableWith | | | | | |
| Object concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Destructible | | | | | | Constructible | | | | | | DefaultConstructible | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MoveConstructible | | | | | | CopyConstructible | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Movable | | | | | | Copyable | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Semiregular | | | | | | Regular | | | | | |  | | | | | |
| Comparison concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Boolean | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | WeaklyEqualityComparableWith | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | EqualityComparableEqualityComparableWith | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | StrictTotallyOrderedStrictTotallyOrderedWith | | | | | |
| Callable concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | InvocableRegularInvocable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Predicate | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Relation | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****StrictWeakOrder**** | | | | | |  | | | | | |
| URNG concept | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | UniformRandomNumberGenerator | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/concepts>` |  |  |
| template< class R, class T, class U >  concept bool StrictWeakOrder = Relation<R, T, U>; | (1) | (ranges TS) |
|  |  |  |

The concept `StrictWeakOrder<R, T, U>` specifies that the `Relation` `R` imposes a strict weak ordering on its arguments. A relation `r` is a strict weak ordering if

- it is irreflexive: for all `x`, `r(x, x)` is false;
- it is transitive: for all `a`, `b` and `c`, if `r(a, b)` and `r(b, c)` are both true then `r(a, c)` is true;
- let `e(a, b)` be `!r(a, b) && !r(b, a)`, then `e` is transitive: `e(a, b) && e(b, c)` implies `e(a, c)`.

Under these conditions, it can be shown that `e` is an equivalence relation, and `r` induces a strict total ordering on the equivalence classes determined by `e`.

### Notes

The distinction between `Relation` and `StrictWeakOrder` is purely semantic.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/concepts/StrictWeakOrder&oldid=155317>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 July 2023, at 09:40.