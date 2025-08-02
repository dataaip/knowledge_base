# std::assignable_from

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Core language concepts | | | | | | same_as(C++20) | | | | | | derived_from(C++20) | | | | | | convertible_to(C++20) | | | | | | common_reference_with(C++20) | | | | | | common_with(C++20) | | | | | | integral(C++20) | | | | | | signed_integral(C++20) | | | | | | unsigned_integral(C++20) | | | | | | floating_point(C++20) | | | | | | swappableswappable_with(C++20)(C++20) | | | | | | destructible(C++20) | | | | | | constructible_from(C++20) | | | | | | default_initializable(C++20) | | | | | | move_constructible(C++20) | | | | | | copy_constructible(C++20) | | | | | | ****assignable_from****(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Comparison concepts | | | | | | equality_comparableequality_comparable_with(C++20)(C++20) | | | | | | totally_orderedtotally_ordered_with(C++20)(C++20) | | | | | | Object concepts | | | | | | movable(C++20) | | | | | | copyable(C++20) | | | | | | semiregular(C++20) | | | | | | regular(C++20) | | | | | | Callable concepts | | | | | | invocableregular_invocable(C++20)(C++20) | | | | | | predicate(C++20) | | | | | | relation(C++20) | | | | | | equivalence_relation(C++20) | | | | | | strict_weak_order(C++20) | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exposition-only concepts | | | | | | **boolean-testable** ﻿(C++20) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<concepts>` |  |  |
| template< class LHS, class RHS >  concept assignable_from =      std::is_lvalue_reference_v<LHS> &&      std::common_reference_with<          const std::remove_reference_t<LHS>&,          const std::remove_reference_t<RHS>&> &&      requires(LHS lhs, RHS&& rhs) {          { lhs = std::forward<RHS>(rhs) } -> std::same_as<LHS>; }; |  | (since C++20) |
|  |  |  |

The concept `assignable_from<LHS, RHS>` specifies that an expression of the type and value category specified by `RHS` can be assigned to an lvalue expression whose type is specified by `LHS`.

### Semantic requirements

Given

- `lhs`, an lvalue that refers to an object `lcopy` such that decltype((lhs)) is `LHS`,
- `rhs`, an expression such that decltype((rhs)) is `RHS`,
- `rcopy`, a distinct object that is equal to `rhs`,

`assignable_from<LHS, RHS>` is modeled only if

- std::addressof(lhs = rhs) == std::addressof(lcopy) (i.e., the assignment expression yields an lvalue referring to the left operand);
- After evaluating lhs = rhs:
  - `lhs` is equal to `rcopy`, unless `rhs` is a non-const xvalue that refers to `lcopy` (i.e., the assignment is a self-move-assignment),
  - if `rhs` is a glvalue:
    - If it is a non-const xvalue, the object to which it refers is in a valid but unspecified state;
    - Otherwise, the object it refers to is not modified;

### Equality preservation

Expressions declared in requires expressions of the standard library concepts are required to be equality-preserving (except where stated otherwise).

### Notes

Assignment need not be a total function. In particular, if assigning to some object `x` can cause some other object `y` to be modified, then x = y is likely not in the domain of `=`. This typically happens if the right operand is owned directly or indirectly by the left operand (e.g., with smart pointers to nodes in a node-based data structure, or with something like std::vector<std::any>).

### Example

Run this code

```
#include <atomic>
#include <concepts>
#include <string>
 
int main()
{
    // Normal basic usage, checks lvalue reference assignment
    static_assert(std::is_assignable_v<int&, int>);
    static_assert(std::assignable_from<int&, int>);
 
    static_assert(std::is_assignable_v<std::string&, std::string>);
    static_assert(std::assignable_from<std::string&, std::string>);
 
    // Fundamental types don't support assignment to an rvalue
    static_assert(!std::is_assignable_v<int, int>);
    static_assert(!std::assignable_from<int, int>);
 
    // std::assignable_from doesn't accept all valid assignment expressions:
 
    // rvalue reference assignment
    static_assert(std::is_assignable_v<std::string&&, std::string>);
    static_assert(!std::assignable_from<std::string&&, std::string>);
 
    // rvalue assignment
    static_assert(std::is_assignable_v<std::string, std::string>);
    static_assert(!std::assignable_from<std::string, std::string>);
 
    // std::atomic::operator= returns by value
    static_assert(std::is_assignable_v<std::atomic<int>&, int>);
    static_assert(!std::assignable_from<std::atomic<int>&, int>);
}

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 18.4.8 Concept `assignable_from` [concept.assignable]

- C++20 standard (ISO/IEC 14882:2020):

:   - 18.4.8 Concept `assignable_from` [concept.assignable]

### See also

|  |  |
| --- | --- |
| is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | checks if a type has an assignment operator for a specific argument   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/assignable_from&oldid=177887>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 November 2024, at 13:33.