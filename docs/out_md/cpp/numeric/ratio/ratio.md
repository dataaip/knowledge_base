# std::ratio

From cppreference.com
< cpp‎ | numeric‎ | ratio
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

Metaprogramming library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Type traits | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | is_function(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | disjunction(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | is_convertibleis_nothrow_convertible(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | common_type(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

Compile time rational arithmetic

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| ****ratio****(C++11) | | | | |
| Arithmetic | | | | |
| ratio_add(C++11) | | | | |
| ratio_subtract(C++11) | | | | |
| ratio_multiply(C++11) | | | | |
| ratio_divide(C++11) | | | | |
| Comparison | | | | |
| ratio_equal(C++11) | | | | |
| ratio_not_equal(C++11) | | | | |
| ratio_less(C++11) | | | | |
| ratio_less_equal(C++11) | | | | |
| ratio_greater(C++11) | | | | |
| ratio_greater_equal(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ratio>` |  |  |
| template<  std::intmax_t Num,      std::intmax_t Denom = 1 > class ratio; |  | (since C++11) |
|  |  |  |

The class template `std::ratio` provides compile-time rational arithmetic support. Each instantiation of this template exactly represents any finite rational number as long as its numerator `Num` and denominator `Denom` are representable as compile-time constants of type std::intmax_t. In addition, `Denom` may not be zero and both `Num` and `Denom` may not be equal to the most negative value.

The static data members `num` and `den` representing the numerator and denominator are calculated by dividing `Num` and `Denom` by their greatest common divisor. However, two `std::ratio` with different `Num` or `Denom` are distinct types even if they represent the same rational number (after reduction). A `std::ratio` type can be reduced to the lowest terms via its `type` member: std::ratio<3, 6>::type is std::ratio<1, 2>.

The following convenience typedefs that correspond to the SI ratios are provided by the standard library:

|  |  |
| --- | --- |
| Defined in header `<ratio>` | |
| Type | Definition |
| `quecto` (since C++26) | std::ratio<1, 1000000000000000000000000000000>(10-30)[[1]](ratio.html#cite_note-too_small-1) |
| `ronto` (since C++26) | std::ratio<1, 1000000000000000000000000000>(10-27)[[1]](ratio.html#cite_note-too_small-1) |
| `yocto` (since C++11) | std::ratio<1, 1000000000000000000000000>(10-24)[[1]](ratio.html#cite_note-too_small-1) |
| `zepto` (since C++11) | std::ratio<1, 1000000000000000000000>(10-21)[[1]](ratio.html#cite_note-too_small-1) |
| `atto` (since C++11) | std::ratio<1, 1000000000000000000>(10-18) |
| `femto` (since C++11) | std::ratio<1, 1000000000000000>(10-15) |
| `pico` (since C++11) | std::ratio<1, 1000000000000>(10-12) |
| `nano` (since C++11) | std::ratio<1, 1000000000>(10-9) |
| `micro` (since C++11) | std::ratio<1, 1000000>(10-6) |
| `milli` (since C++11) | std::ratio<1, 1000>(10-3) |
| `centi` (since C++11) | std::ratio<1, 100>(10-2) |
| `deci` (since C++11) | std::ratio<1, 10>(10-1) |
| `deca` (since C++11) | std::ratio<10, 1>(101) |
| `hecto` (since C++11) | std::ratio<100, 1>(102) |
| `kilo` (since C++11) | std::ratio<1000, 1>(103) |
| `mega` (since C++11) | std::ratio<1000000, 1>(106) |
| `giga` (since C++11) | std::ratio<1000000000, 1>(109) |
| `tera` (since C++11) | std::ratio<1000000000000, 1>(1012) |
| `peta` (since C++11) | std::ratio<1000000000000000, 1>(1015) |
| `exa` (since C++11) | std::ratio<1000000000000000000, 1>(1018) |
| `zetta` (since C++11) | std::ratio<1000000000000000000000, 1>(1021)[[2]](ratio.html#cite_note-too_large-2) |
| `yotta` (since C++11) | std::ratio<1000000000000000000000000, 1>(1024)[[2]](ratio.html#cite_note-too_large-2) |
| `ronna` (since C++26) | std::ratio<1000000000000000000000000000, 1>(1027)[[2]](ratio.html#cite_note-too_large-2) |
| `quetta` (since C++26) | std::ratio<1000000000000000000000000000000, 1>(1030)[[2]](ratio.html#cite_note-too_large-2) |

1. ↑ 1.0 1.1 1.2 1.3 These typedefs are only declared if std::intmax_t can represent the denominator.
2. ↑ 2.0 2.1 2.2 2.3 These typedefs are only declared if std::intmax_t can represent the numerator.

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `type` | std::ratio<num, den> (the rational type after reduction) |

### Data members

In the definitions given below,

- sign(Denom) is -1 if Denom is negative, or 1 otherwise; and
- gcd(Num, Denom) is the greatest common divisor of std::abs(Num) and std::abs(Denom).

|  |  |
| --- | --- |
| Member | Definition |
| constexpr std::intmax_t num[static] | sign(Denom) \* Num / gcd(Num, Denom)   (public static member constant) |
| constexpr std::intmax_t den[static] | std::abs(Denom) / gcd(Num, Denom)   (public static member constant) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ratio` | `202306L` | (C++26) | Adding the new 2022 SI prefixes: quecto, quetta, ronto, ronna |

### Example

Run this code

```
#include <ratio>
 
static_assert
(
    std::ratio_equal_v<std::ratio_multiply<std::femto, std::exa>, std::kilo>
);
 
int main() {}

```

### See also

|  |  |
| --- | --- |
| Mathematical constants (C++20) | provides several mathematical constants, such as std::numbers::e for e |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/ratio/ratio&oldid=159718>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 September 2023, at 10:55.