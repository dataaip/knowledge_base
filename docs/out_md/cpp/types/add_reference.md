# std::add_lvalue_reference, std::add_rvalue_reference

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | is_function(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | disjunction(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | is_convertibleis_nothrow_convertible(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | ****add_lvalue_referenceadd_rvalue_reference****(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | common_type(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<type_traits>` |  |  |
| template< class T >  struct add_lvalue_reference; | (1) | (since C++11) |
| template< class T >  struct add_rvalue_reference; | (2) | (since C++11) |
|  |  |  |

Creates an lvalue or rvalue reference type of `T`.

| Type trait | The type referred by the nested type `type` | |
| --- | --- | --- |
| `T` is a referenceable type | `T` is not a referenceable type |
| (1) | `T&`[[1]](add_reference.html#cite_note-1) | `T` |
| (2) | `T&&`[[2]](add_reference.html#cite_note-2) |

1. ↑ This rule reflects the semantics of reference collapsing.
2. ↑ This rule reflects the semantics of reference collapsing. Note that std::add_rvalue_reference<T&>::type is `T&`, which is not an rvalue reference type.

If the program adds specializations for any of the templates described on this page, the behavior is undefined.

### Nested types

|  |  |
| --- | --- |
| Name | Definition |
| `type` | determined as above |

### Helper types

|  |  |  |
| --- | --- | --- |
| template< class T >  using add_lvalue_reference_t = typename add_lvalue_reference<T>::type; |  | (since C++14) |
| template< class T >  using add_rvalue_reference_t = typename add_rvalue_reference<T>::type; |  | (since C++14) |
|  |  |  |

### Notes

The major difference to directly using `T&` or `T&&` is that `T` can be a non-referenceable type. For example, std::add_lvalue_reference<void>::type is void, while void& leads to a compilation error.

### Possible implementation

|  |
| --- |
| ```text namespace detail {     template<class T>     struct type_identity { using type = T; }; // or use std::type_identity (since C++20)       template<class T> // Note that “cv void&” is a substitution failure     auto try_add_lvalue_reference(int) -> type_identity<T&>;     template<class T> // Handle T = cv void case     auto try_add_lvalue_reference(...) -> type_identity<T>;       template<class T>     auto try_add_rvalue_reference(int) -> type_identity<T&&>;     template<class T>     auto try_add_rvalue_reference(...) -> type_identity<T>; } // namespace detail   template<class T> struct add_lvalue_reference     : decltype(detail::try_add_lvalue_reference<T>(0)) {};   template<class T> struct add_rvalue_reference     : decltype(detail::try_add_rvalue_reference<T>(0)) {}; ``` |

### Example

Run this code

```
#include <type_traits>
 
using non_ref = int;
static_assert(std::is_lvalue_reference_v<non_ref> == false);
 
using l_ref = std::add_lvalue_reference_t<non_ref>;
static_assert(std::is_lvalue_reference_v<l_ref> == true);
 
using r_ref = std::add_rvalue_reference_t<non_ref>;
static_assert(std::is_rvalue_reference_v<r_ref> == true);
 
using void_ref = std::add_lvalue_reference_t<void>;
static_assert(std::is_reference_v<void_ref> == false);
 
int main() {}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2101 | C++11 | the program was ill-formed if `T` is a function type with cv or ref | the type produced is `T` in this case |

### See also

|  |  |
| --- | --- |
| is_reference(C++11) | checks if a type is either an **lvalue reference** or **rvalue reference**   (class template) |
| remove_reference(C++11) | removes a reference from the given type   (class template) |
| remove_cvref(C++20) | combines std::remove_cv and std::remove_reference   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/add_reference&oldid=177615>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 November 2024, at 01:03.