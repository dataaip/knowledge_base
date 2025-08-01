# std::experimental::ranges::Boolean

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Boolean**** | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | WeaklyEqualityComparableWith | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | EqualityComparableEqualityComparableWith | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | StrictTotallyOrderedStrictTotallyOrderedWith | | | | | |
| Callable concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | InvocableRegularInvocable | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Predicate | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Relation | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | StrictWeakOrder | | | | | |  | | | | | |
| URNG concept | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | UniformRandomNumberGenerator | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/concepts>` |  |  |
| template< class B >  concept bool Boolean =      Movable<std::decay_t<B>> &&      requires(const std::remove_reference_t<B>& b1,               const std::remove_reference_t<B>& b2, const bool a) {          { b1 }       -> ConvertibleTo<bool>&&;          { !b1 }      -> ConvertibleTo<bool>&&;          { b1 && a }  -> Same<bool>&&;          { b1 || a }  -> Same<bool>&&;          { b1 && b2 } -> Same<bool>&&;          { a && b2  } -> Same<bool>&&;          { b1 || b2 } -> Same<bool>&&;          { a || b2  } -> Same<bool>&&;          { b1 == b2 } -> ConvertibleTo<bool>&&;          { b1 == a  } -> ConvertibleTo<bool>&&;          { a == b2  } -> ConvertibleTo<bool>&&;          { b1 != b2 } -> ConvertibleTo<bool>&&;          { b1 != a  } -> ConvertibleTo<bool>&&;          { a != b2  } -> ConvertibleTo<bool>&&; }; |  | (ranges TS) |
|  |  |  |

The concept `Boolean<B>` specifies the requirements for a type usable in Boolean contexts. For `Boolean` to be satisfied, the logical operators must have the usual behavior (including short-circuiting). More precisely, given

- `b1`, `b2`, two lvalues of type const std::remove_reference_t<B>,

`Boolean<B>` is satisfied only if:

- bool(b1) == !bool(!b1);
- b1 && b2, b1 && bool(b2) and bool(b1) && b2 are all equal to bool(b1) && bool(b2) and have the same short-circuit evaluation;
- b1 || b2, b1 || bool(b2) and bool(b1) || b2 are all equal to bool(b1) || bool(b2) and have the same short-circuit evaluation;
- bool(b1 == b2), bool(b1 == bool(b2)), and bool(bool(b1) == b2) are all equal to (bool(b1) == bool(b2));
- bool(b1 != b2), bool(b1 != bool(b2)), and bool(bool(b1) != b2) are all equal to (bool(b1) != bool(b2)).

### Equality preservation

An expression is **equality preserving** if it results in equal outputs given equal inputs.

- The inputs to an expression consist of its operands.
- The outputs of an expression consist of its result and all operands modified by the expression (if any).

Every expression required to be equality preserving is further required to be **stable**: two evaluations of such an expression with the same input objects must have equal outputs absent any explicit intervening modification of those input objects.

Unless noted otherwise, every expression used in a **requires-expression** is required to be equality preserving and stable, and the evaluation of the expression may only modify its non-constant operands. Operands that are constant must not be modified.

### Implicit expression variations

A **requires-expression** that uses an expression that is non-modifying for some constant lvalue operand also implicitly requires additional variations of that expression that accept a non-constant lvalue or (possibly constant) rvalue for the given operand unless such an expression variation is explicitly required with differing semantics. These **implicit expression variations** must meet the same semantic requirements of the declared expression. The extent to which an implementation validates the syntax of the variations is unspecified.

### Notes

Examples of `Boolean` types include bool, std::true_type, and std::bitset<N>::reference. Pointers are not `Boolean` types.

A deduction constraint of the form { expression } -> Same<T>&& effectively requires decltype((expression))&& to be the exact same type as `T&&`. This constrains both the expression's type and its value category.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/concepts/Boolean&oldid=155293>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 July 2023, at 00:12.