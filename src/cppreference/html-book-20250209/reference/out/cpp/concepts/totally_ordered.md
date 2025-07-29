# std::totally_ordered, std::totally_ordered_with

From cppreference.com
< cpp‎ | concepts
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

Concepts library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Core language concepts | | | | | | same_as(C++20) | | | | | | derived_from(C++20) | | | | | | convertible_to(C++20) | | | | | | common_reference_with(C++20) | | | | | | common_with(C++20) | | | | | | integral(C++20) | | | | | | signed_integral(C++20) | | | | | | unsigned_integral(C++20) | | | | | | floating_point(C++20) | | | | | | swappableswappable_with(C++20)(C++20) | | | | | | destructible(C++20) | | | | | | constructible_from(C++20) | | | | | | default_initializable(C++20) | | | | | | move_constructible(C++20) | | | | | | copy_constructible(C++20) | | | | | | assignable_from(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Comparison concepts | | | | | | equality_comparableequality_comparable_with(C++20)(C++20) | | | | | | ****totally_orderedtotally_ordered_with****(C++20)(C++20) | | | | | | Object concepts | | | | | | movable(C++20) | | | | | | copyable(C++20) | | | | | | semiregular(C++20) | | | | | | regular(C++20) | | | | | | Callable concepts | | | | | | invocableregular_invocable(C++20)(C++20) | | | | | | predicate(C++20) | | | | | | relation(C++20) | | | | | | equivalence_relation(C++20) | | | | | | strict_weak_order(C++20) | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exposition-only concepts | | | | | | **boolean-testable** ﻿(C++20) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<concepts>` |  |  |
| template< class T >  concept totally_ordered = std::equality_comparable<T> && __PartiallyOrderedWith<T, T>; | (1) | (since C++20) |
| template< class T, class U >  concept totally_ordered_with =      std::totally_ordered<T> &&      std::totally_ordered<U> &&      std::equality_comparable_with<T, U> &&      std::totally_ordered<          std::common_reference_t<              const std::remove_reference_t<T>&,              const std::remove_reference_t<U>&>> &&     __PartiallyOrderedWith<T, U>; | (2) | (since C++20) |
| Helper concepts |  |  |
| template< class T, class U >  concept __PartiallyOrderedWith =      requires(const std::remove_reference_t<T>& t,               const std::remove_reference_t<U>& u) {          { t <  u } -> boolean-testable;          { t >  u } -> boolean-testable;          { t <= u } -> boolean-testable;          { t >= u } -> boolean-testable;          { u <  t } -> boolean-testable;          { u >  t } -> boolean-testable;          { u <= t } -> boolean-testable;          { u >= t } -> boolean-testable; }; | (3) | (exposition only\*) |
|  |  |  |

1) The concept `std::totally_ordered` specifies that the comparison operators `==,!=,<,>,<=,>=` on a type yield results consistent with a strict total order on the type.2) The concept `std::totally_ordered_with` specifies that the comparison operators `==,!=,<,>,<=,>=` on (possibly mixed) `T` and `U` operands yield results consistent with a strict total order. Comparing mixed operands yields results equivalent to comparing the operands converted to their common type.3) The exposition-only concept `__PartiallyOrderedWith` specifies that a value of type `T` and a value of type `U` can be compared in a partial order with each other (in either order) using `<`, `>`, `<=`, and `>=`, and the results of the comparisons are consistent.

### Semantic requirements

These concepts are modeled only if they are satisfied and all concepts they subsume are modeled.

1) std::totally_ordered<T> is modeled only if, given lvalues `a`, `b` and `c` of type const std::remove_reference_t<T>:

- Exactly one of bool(a < b), bool(a > b) and bool(a == b) is true;
- If bool(a < b) and bool(b < c) are both true, then bool(a < c) is true;
- bool(a > b) == bool(b < a)
- bool(a >= b) == !bool(a < b)
- bool(a <= b) == !bool(b < a)
2) std::totally_ordered_with<T, U> is modeled only if, given

- `t` and `t2`, lvalues denoting distinct equal objects of types const std::remove_reference_t<T> and std::remove_reference_t<T> respectively, and
- `u` and `u2`, lvalues denoting distinct equal objects of types const std::remove_reference_t<U> and std::remove_reference_t<U> respectively,

let `C` be std::common_reference_t<const std::remove_reference_t<T>&, const std::remove_reference_t<U>&>, and, given an expression `E` and a type `C`, let CONVERT_TO<C>(E) be:

|  |  |
| --- | --- |
| - static_cast<C>(std::as_const(E)). | (until C++23) |
| - static_cast<const C&>(std::as_const(E)) if that is a valid expression, - static_cast<const C&>(std::move(E)) otherwise. | (since C++23) |

the following are true:

- bool(t < u) == bool(CONVERT_TO<C>(t2) < CONVERT_TO<C>(u2))
- bool(t > u) == bool(CONVERT_TO<C>(t2) > CONVERT_TO<C>(u2))
- bool(t <= u) == bool(CONVERT_TO<C>(t2) <= CONVERT_TO<C>(u2))
- bool(t >= u) == bool(CONVERT_TO<C>(t2) >= CONVERT_TO<C>(u2))
- bool(u < t) == bool(CONVERT_TO<C>(u2) < CONVERT_TO<C>(t2))
- bool(u > t) == bool(CONVERT_TO<C>(u2) > CONVERT_TO<C>(t2))
- bool(u <= t) == bool(CONVERT_TO<C>(u2) <= CONVERT_TO<C>(t2))
- bool(u >= t) == bool(CONVERT_TO<C>(u2) >= CONVERT_TO<C>(t2))
3) __PartiallyOrderedWith<T, U> is modeled only if given

- any lvalue `t` of type const std::remove_reference_t<T>, and
- any lvalue `u` of type const std::remove_reference_t<U>,

the following are true:

- t < u, t <= u, t > u, t >= u, u < t, u <= t, u > t, and u >= t have the same domain;
- bool(t < u) == bool(u > t);
- bool(u < t) == bool(t > u);
- bool(t <= u) == bool(u >= t); and
- bool(u <= t) == bool(t >= u).

### Equality preservation

Expressions declared in requires expressions of the standard library concepts are required to be equality-preserving (except where stated otherwise).

### Implicit expression variations

A requires expression that uses an expression that is non-modifying for some constant lvalue operand also requires implicit expression variations.

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 18.5.5 Concept `totally_ordered` [concept.totallyordered]

- C++20 standard (ISO/IEC 14882:2020):

:   - 18.5.4 Concept `totally_ordered` [concept.totallyordered]

### See also

|  |  |
| --- | --- |
| three_way_comparablethree_way_comparable_with(C++20) | specifies that operator <=> produces consistent result on given types   (concept) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/totally_ordered&oldid=177895>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 November 2024, at 13:36.