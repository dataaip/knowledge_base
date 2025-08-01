# Variable templates for type traits (library fundamentals TS)

From cppreference.com
< cpp‎ | experimental
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

Library fundamentals

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::optional | | | | |
| experimental::any | | | | |
| experimental::basic_string_view | | | | |
| experimental::sample | | | | |
| experimental::shared_ptr | | | | |
| experimental::weak_ptr | | | | |
| experimental::apply | | | | |
| experimental::invocation_typeexperimental::raw_invocation_type | | | | |
| experimental::search | | | | |
| experimental::default_searcherexperimental::make_default_searcher | | | | |
| experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher | | | | |
| experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher | | | | |
| Type-erased and polymorphic allocators | | | | |
| ****Variable templates for type traits**** | | | | |

Version 1 of the C++ Extensions for Library Fundamentals provides a number of constexpr variable templates for type traits classes, as well as other similar class templates with public `::value` members.

Unless otherwise noted, the following variable templates are defined in the `std::experimental` namespace.

|  |  |
| --- | --- |
| Type traits | |
| Primary type categories | |
| Variable template | Value |
| Defined in header `<experimental/type_traits>` | |
| template<class T> constexpr bool is_void_v = | std::is_void<T>::value; |
| template<class T> constexpr bool is_null_pointer_v = | std::is_null_pointer<T>::value; |
| template<class T> constexpr bool is_integral_v = | std::is_integral<T>::value; |
| template<class T> constexpr bool is_floating_point_v = | std::is_floating_point<T>::value; |
| template<class T> constexpr bool is_array_v = | std::is_array<T>::value; |
| template<class T> constexpr bool is_pointer_v = | std::is_pointer<T>::value; |
| template<class T> constexpr bool is_lvalue_reference_v = | std::is_lvalue_reference<T>::value; |
| template<class T> constexpr bool is_rvalue_reference_v = | std::is_rvalue_reference<T>::value; |
| template<class T> constexpr bool is_member_object_pointer_v = | std::is_member_object_pointer<T>::value; |
| template<class T> constexpr bool is_member_function_pointer_v = | std::is_member_function_pointer<T>::value; |
| template<class T> constexpr bool is_enum_v = | std::is_enum<T>::value; |
| template<class T> constexpr bool is_union_v = | std::is_union<T>::value; |
| template<class T> constexpr bool is_class_v = | std::is_class<T>::value; |
| template<class T> constexpr bool is_function_v = | std::is_function<T>::value; |
| Composite type categories | |
| Variable template | Value |
| Defined in header `<experimental/type_traits>` | |
| template<class T> constexpr bool is_reference_v = | std::is_reference<T>::value; |
| template<class T> constexpr bool is_arithmetic_v = | std::is_arithmetic<T>::value; |
| template<class T> constexpr bool is_fundamental_v = | std::is_fundamental<T>::value; |
| template<class T> constexpr bool is_object_v = | std::is_object<T>::value; |
| template<class T> constexpr bool is_scalar_v = | std::is_scalar<T>::value; |
| template<class T> constexpr bool is_compound_v = | std::is_compound<T>::value; |
| template<class T> constexpr bool is_member_pointer_v = | std::is_member_pointer<T>::value; |
| Type properties | |
| Variable template | Value |
| Defined in header `<experimental/type_traits>` | |
| template<class T> constexpr bool is_const_v = | std::is_const<T>::value; |
| template<class T> constexpr bool is_volatile_v = | std::is_volatile<T>::value; |
| template<class T> constexpr bool is_trivial_v = | std::is_trivial<T>::value; |
| template<class T> constexpr bool is_trivially_copyable_v = | std::is_trivially_copyable<T>::value; |
| template<class T> constexpr bool is_standard_layout_v = | std::is_standard_layout<T>::value; |
| template<class T> constexpr bool is_pod_v = | std::is_pod<T>::value; |
| template<class T> constexpr bool is_literal_type_v = | std::is_literal_type<T>::value; |
| template<class T> constexpr bool is_empty_v = | std::is_empty<T>::value; |
| template<class T> constexpr bool is_polymorphic_v = | std::is_polymorphic<T>::value; |
| template<class T> constexpr bool is_abstract_v = | std::is_abstract<T>::value; |
| template<class T> constexpr bool is_final_v = | std::is_final<T>::value; |
| template<class T> constexpr bool is_signed_v = | std::is_signed<T>::value; |
| template<class T> constexpr bool is_unsigned_v = | std::is_unsigned<T>::value; |

|  |  |
| --- | --- |
| Supported operations | |
| Variable template | Value |
| Defined in header `<experimental/type_traits>` | |
| template<class T, class... Args> constexpr bool is_constructible_v = | std::is_constructible<T, Args...>::value; |
| template<class T, class... Args> constexpr bool is_trivially_constructible_v = | std::is_trivially_constructible<T, Args...>::value; |
| template<class T, class... Args> constexpr bool is_nothrow_constructible_v = | std::is_nothrow_constructible<T, Args...>::value; |
| template<class T> constexpr bool is_default_constructible_v = | std::is_default_constructible<T>::value; |
| template<class T> constexpr bool is_trivially_default_constructible_v = | std::is_trivially_default_constructible<T>::value; |
| template<class T> constexpr bool is_nothrow_default_constructible_v = | std::is_nothrow_default_constructible<T>::value; |
| template<class T> constexpr bool is_copy_constructible_v = | std::is_copy_constructible<T>::value; |
| template<class T> constexpr bool is_trivially_copy_constructible_v = | std::is_trivially_copy_constructible<T>::value; |
| template<class T> constexpr bool is_nothrow_copy_constructible_v = | std::is_nothrow_copy_constructible<T>::value; |
| template<class T> constexpr bool is_move_constructible_v = | std::is_move_constructible<T>::value; |
| template<class T> constexpr bool is_trivially_move_constructible_v = | std::is_trivially_move_constructible<T>::value; |
| template<class T> constexpr bool is_nothrow_move_constructible_v = | std::is_nothrow_move_constructible<T>::value; |
| template<class T, class U> constexpr bool is_assignable_v = | std::is_assignable<T, U>::value; |
| template<class T, class U> constexpr bool is_trivially_assignable_v = | std::is_trivially_assignable<T, U>::value; |
| template<class T, class U> constexpr bool is_nothrow_assignable_v = | std::is_nothrow_assignable<T, U>::value; |
| template<class T> constexpr bool is_copy_assignable_v = | std::is_copy_assignable<T>::value; |
| template<class T> constexpr bool is_trivially_copy_assignable_v = | std::is_trivially_copy_assignable<T>::value; |
| template<class T> constexpr bool is_nothrow_copy_assignable_v = | std::is_nothrow_copy_assignable<T>::value; |
| template<class T> constexpr bool is_move_assignable_v = | std::is_move_assignable<T>::value; |
| template<class T> constexpr bool is_trivially_move_assignable_v = | std::is_trivially_move_assignable<T>::value; |
| template<class T> constexpr bool is_nothrow_move_assignable_v = | std::is_nothrow_move_assignable<T>::value; |
| template<class T> constexpr bool is_destructible_v = | std::is_destructible<T>::value; |
| template<class T> constexpr bool is_trivially_destructible_v = | std::is_trivially_destructible<T>::value; |
| template<class T> constexpr bool is_nothrow_destructible_v = | std::is_nothrow_destructible<T>::value; |
| template<class T> constexpr bool has_virtual_destructor_v = | std::has_virtual_destructor<T>::value; |

|  |  |
| --- | --- |
| Property queries | |
| Variable template | Value |
| Defined in header `<experimental/type_traits>` | |
| template<class T> constexpr std::size_t alignment_of_v = | std::alignment_of<T>::value; |
| template<class T> constexpr std::size_t rank_v = | std::rank<T>::value; |
| template<class T, unsigned I = 0> constexpr std::size_t extent_v = | std::extent<T, I>::value; |
| Type relationships | |
| Variable template | Value |
| Defined in header `<experimental/type_traits>` | |
| template<class T, class U> constexpr bool is_same_v = | std::is_same<T, U>::value; |
| template<class Base, class Derived> constexpr bool is_base_of_v = | std::is_base_of<Base, Derived>::value; |
| template<class From, class To> constexpr bool is_convertible_v = | std::is_convertible<From, To>::value; |
| Other variable templates | |
| std::ratio comparison | |
| Variable template | Value |
| Defined in header `<experimental/ratio>` | |
| template<class R1, class R2> constexpr bool ratio_equal_v = | std::ratio_equal<R1, R2>::value; |
| template<class R1, class R2> constexpr bool ratio_not_equal_v = | std::ratio_not_equal<R1, R2>::value; |
| template<class R1, class R2> constexpr bool ratio_less_v = | std::ratio_less<R1, R2>::value; |
| template<class R1, class R2> constexpr bool ratio_less_equal_v = | std::ratio_less_equal<R1, R2>::value; |
| template<class R1, class R2> constexpr bool ratio_greater_v = | std::ratio_greater<R1, R2>::value; |
| template<class R1, class R2> constexpr bool ratio_greater_equal_v = | std::ratio_greater_equal<R1, R2>::value; |
| Miscellaneous | |
| Variable template | Value |
| Defined in header `<experimental/tuple>` | |
| template<class T> constexpr std::size_t tuple_size_v = | std::tuple_size<T>::value; |
| Defined in header `<experimental/chrono>` | |
| template<class Rep> constexpr bool treat_as_floating_point_v = | std::chrono::treat_as_floating_point<Rep>::value;[1] |
| Defined in header `<experimental/system_error>` | |
| template<class T> constexpr bool is_error_code_enum_v = | std::is_error_code_enum<T>::value; |
| template<class T> constexpr bool is_error_condition_enum_v = | std::is_error_condition_enum<T>::value; |
| Defined in header `<experimental/functional>` | |
| template<class T> constexpr bool is_bind_expression_v = | std::is_bind_expression<T>::value; |
| template<class T> constexpr int is_placeholder_v = | std::is_placeholder<T>::value; |
| Defined in header `<experimental/memory>` | |
| template<class T, class Alloc> constexpr bool uses_allocator_v = | std::uses_allocator<T, Alloc>::value; |

### Notes

[1]: Defined in the `std::chrono::experimental` namespace.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/type_trait_variable_templates&oldid=156342>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 August 2023, at 05:35.