# std::three_way_comparable, std::three_way_comparable_with

From cppreference.com
< cpp‎ | utility
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

Utilities library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | ****three_way_comparablethree_way_comparable_with****(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<compare>` |  |  |
| template< class T, class Cat = std::partial_ordering >  concept three_way_comparable =      __WeaklyEqualityComparableWith<T, T> &&      __PartiallyOrderedWith<T, T> &&      requires(const std::remove_reference_t<T>& a,               const std::remove_reference_t<T>& b) {          { a <=> b } -> __ComparesAs<Cat>; }; | (1) | (since C++20) |
| template< class T, class U, class Cat = std::partial_ordering >  concept three_way_comparable_with =      std::three_way_comparable<T, Cat> &&      std::three_way_comparable<U, Cat> &&      __ComparisonCommonTypeWith<T, U> &&      std::three_way_comparable<          std::common_reference_t<              const std::remove_reference_t<T>&,              const std::remove_reference_t<U>&>, Cat> &&      __WeaklyEqualityComparableWith<T, U> &&      __PartiallyOrderedWith<T, U> &&      requires(const std::remove_reference_t<T>& t,               const std::remove_reference_t<U>& u) {          { t <=> u } -> __ComparesAs<Cat>;          { u <=> t } -> __ComparesAs<Cat>; }; | (2) | (since C++20) |
| template< class T, class Cat >  concept __ComparesAs = std::same_as<std::common_comparison_category_t<T, Cat>, Cat>; | (3) | (exposition only\*) |
|  |  |  |

1) The concept `std::three_way_comparable` specifies that the three way comparison operator `<=>` on `T` yield results consistent with the comparison category implied by `Cat`.2) The concept `std::three_way_comparable_with` specifies that the three way comparison operator `<=>` on (possibly mixed) `T` and `U` operands yield results consistent with the comparison category implied by `Cat`. Comparing mixed operands yields results equivalent to comparing the operands converted to their common type.

**__WeaklyEqualityComparableWith**, **__PartiallyOrderedWith**, and **__ComparisonCommonTypeWith** are exposition-only concepts. See descriptions of `equality_comparable` and `totally_ordered`.

### Semantic requirements

These concepts are modeled only if they are satisfied and all concepts they subsume are modeled.

1) `T` and `Cat` model std::three_way_comparable<T, Cat> only if, given lvalues `a` and `b` of type const std::remove_reference_t<T>, following are true:

- (a <=> b == 0) == bool(a == b),
- (a <=> b != 0) == bool(a != b),
- ((a <=> b) <=> 0) and (0 <=> (b <=> a)) are equal,
- bool(a > b) == bool(b < a),
- bool(a >= b) == !bool(a < b),
- bool(a <= b) == !bool(b < a),
- (a <=> b < 0) == bool(a < b),
- (a <=> b > 0) == bool(a > b),
- (a <=> b <= 0) == bool(a <= b), and
- (a <=> b >= 0) == bool(a >= b), and
- if `Cat` is convertible to std::strong_ordering, `T` models `totally_ordered`.
2) `T`, `U`, and `Cat` model std::three_way_comparable_with<T, U, Cat> only if given

- `t` and `t2`, lvalues denoting distinct equal objects of types const std::remove_reference_t<T> and std::remove_reference_t<T> respectively, and
- `u` and `u2`, lvalues denoting distinct equal objects of types const std::remove_reference_t<U> and std::remove_reference_t<U> respectively.

Let `C` be std::common_reference_t<const std::remove_reference_t<T>&, const std::remove_reference_t<U>&> and given an expression `E` and a type `C`, let CONVERT_TO<C>(E) be:

|  |  |
| --- | --- |
| - static_cast<C>(std::as_const(E)). | (until C++23) |
| - static_cast<const C&>(std::as_const(E)) if that is a valid expression, - static_cast<const C&>(std::move(E)) otherwise. | (since C++23) |

the following are true:

- t <=> u and u <=> t have the same domain,
- ((t <=> u) <=> 0) and (0 <=> (u <=> t)) are equal,
- (t <=> u == 0) == bool(t == u),
- (t <=> u != 0) == bool(t != u),
- Cat(t <=> u) == Cat(CONVERT_TO<C>(t2) <=> CONVERT_TO<C>(u2)),
- (t <=> u < 0) == bool(t < u),
- (t <=> u > 0) == bool(t > u),
- (t <=> u <= 0) == bool(t <= u),
- (t <=> u >= 0) == bool(t >= u), and
- if `Cat` is convertible to std::strong_ordering, `T` and `U` model std::totally_ordered_with<T, U>.

### Equality preservation

Expressions declared in requires expressions of the standard library concepts are required to be equality-preserving (except where stated otherwise).

### Implicit expression variations

A requires expression that uses an expression that is non-modifying for some constant lvalue operand also requires implicit expression variations.

### See also

|  |  |
| --- | --- |
| equality_comparableequality_comparable_with(C++20) | specifies that operator == is an equivalence relation   (concept) |
| totally_orderedtotally_ordered_with(C++20) | specifies that the comparison operators on the type yield a total order   (concept) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/compare/three_way_comparable&oldid=158782>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 September 2023, at 09:48.