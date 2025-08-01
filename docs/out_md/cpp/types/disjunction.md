# std::disjunction

From cppreference.com
< cpp‎ | types
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | is_function(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | ****disjunction****(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | is_convertibleis_nothrow_convertible(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | common_type(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<type_traits>` |  |  |
| template< class... B >  struct disjunction; |  | (since C++17) |
|  |  |  |

Forms the logical disjunction of the type traits B..., effectively performing a logical OR on the sequence of traits.

The specialization std::disjunction<B1, ..., BN> has a public and unambiguous base that is

- if sizeof...(B) == 0, std::false_type; otherwise
- the first type `Bi` in `B1, ..., BN` for which bool(Bi::value) == true, or `BN` if there is no such type.

The member names of the base class, other than `disjunction` and `operator=`, are not hidden and are unambiguously available in `disjunction`.

Disjunction is short-circuiting: if there is a template type argument `Bi` with bool(Bi::value) != false, then instantiating disjunction<B1, ..., BN>::value does not require the instantiation of Bj::value for `j > i`.

If the program adds specializations for `std::disjunction` or `std::disjunction_v`, the behavior is undefined.

### Template parameters

|  |  |  |
| --- | --- | --- |
| B... | - | every template argument `Bi` for which Bi::value is instantiated must be usable as a base class and define member `value` that is convertible to bool |

### Helper variable template

|  |  |  |
| --- | --- | --- |
| template< class... B >  constexpr bool disjunction_v = disjunction<B...>::value; |  | (since C++17) |
|  |  |  |

### Possible implementation

|  |
| --- |
| ```text template<class...> struct disjunction : std::false_type {};   template<class B1> struct disjunction<B1> : B1 {};   template<class B1, class... Bn> struct disjunction<B1, Bn...>     : std::conditional_t<bool(B1::value), B1, disjunction<Bn...>>  {}; ``` |

### Notes

A specialization of `disjunction` does not necessarily inherit from of either std::true_type or std::false_type: it simply inherits from the first `B` whose `::value`, explicitly converted to bool, is true, or from the very last `B` when all of them convert to false. For example, std::disjunction<std::integral_constant<int, 2>, std::integral_constant<int, 4>>::value is 2.

The short-circuit instantiation differentiates `disjunction` from fold expressions: a fold expression like (... || Bs::value) instantiates every `B` in `Bs`, while std::disjunction_v<Bs...> stops instantiation once the value can be determined. This is particularly useful if the later type is expensive to instantiate or can cause a hard error when instantiated with the wrong type.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_logical_traits` | `201510L` | (C++17) | Logical operator type traits |

### Example

Run this code

```
#include <cstdint>
#include <string>
#include <type_traits>
 
// values_equal<a, b, T>::value is true if and only if a == b.
template<auto V1, decltype(V1) V2, typename T>
struct values_equal : std::bool_constant<V1 == V2>
{
    using type = T;
};
 
// default_type<T>::value is always true
template<typename T>
struct default_type : std::true_type
{
    using type = T;
};
 
// Now we can use disjunction like a switch statement:
template<int I>
using int_of_size = typename std::disjunction< //
    values_equal<I, 1, std::int8_t>,           //
    values_equal<I, 2, std::int16_t>,          //
    values_equal<I, 4, std::int32_t>,          //
    values_equal<I, 8, std::int64_t>,          //
    default_type<void>                         // must be last!
    >::type;
 
static_assert(sizeof(int_of_size<1>) == 1);
static_assert(sizeof(int_of_size<2>) == 2);
static_assert(sizeof(int_of_size<4>) == 4);
static_assert(sizeof(int_of_size<8>) == 8);
static_assert(std::is_same_v<int_of_size<13>, void>);
 
// checking if Foo is constructible from double will cause a hard error
struct Foo
{
    template<class T>
    struct sfinae_unfriendly_check { static_assert(!std::is_same_v<T, double>); };
 
    template<class T>
    Foo(T, sfinae_unfriendly_check<T> = {});
};
 
template<class... Ts>
struct first_constructible
{
    template<class T, class...Args>
    struct is_constructible_x : std::is_constructible<T, Args...>
    {
        using type = T;
    };
 
    struct fallback
    {
        static constexpr bool value = true;
        using type = void; // type to return if nothing is found
    };
 
    template<class... Args>
    using with = typename std::disjunction<is_constructible_x<Ts, Args...>...,
                                           fallback>::type;
};
 
// OK, is_constructible<Foo, double> not instantiated
static_assert(std::is_same_v<first_constructible<std::string, int, Foo>::with<double>,
                             int>);
 
static_assert(std::is_same_v<first_constructible<std::string, int>::with<>, std::string>);
static_assert(std::is_same_v<first_constructible<std::string, int>::with<const char*>,
                             std::string>);
static_assert(std::is_same_v<first_constructible<std::string, int>::with<void*>, void>);
 
int main() {}

```

### See also

|  |  |
| --- | --- |
| negation(C++17) | logical NOT metafunction   (class template) |
| conjunction(C++17) | variadic logical AND metafunction   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/disjunction&oldid=176422>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 September 2024, at 04:57.