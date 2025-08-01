# std::is_convertible, std::is_nothrow_convertible

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | is_function(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | disjunction(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | ****is_convertibleis_nothrow_convertible****(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | common_type(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<type_traits>` |  |  |
| template< class From, class To >  struct is_convertible; | (1) | (since C++11) |
| template< class From, class To >  struct is_nothrow_convertible; | (2) | (since C++20) |
|  |  |  |

1) If the imaginary function definition To test() { return std::declval<From>(); } is well-formed, (that is, either std::declval<From>() can be converted to `To` using implicit conversions, or both `From` and `To` are possibly cv-qualified void), provides the member constant value equal to true. Otherwise value is false. For the purposes of this check, the use of std::declval in the return statement is not considered an ODR-use.

|  |  |
| --- | --- |
| If `To` is a reference type and a temporary object would be created when binding std::declval<From>() to `To`, the return statement in the imaginary function is considered well-formed, even though such binding is ill-formed in an actual function. | (since C++26) |

 Access checks are performed as if from a context unrelated to either type. Only the validity of the immediate context of the expression in the return statement (including conversions to the return type) is considered.2) Same as (1), but the conversion is also noexcept.

If `From` or `To` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined.

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined.

If the program adds specializations for any of the templates described on this page, the behavior is undefined.

### Helper variable template

|  |  |  |
| --- | --- | --- |
| template< class From, class To >  constexpr bool is_convertible_v = is_convertible<From, To>::value; |  | (since C++17) |
| template< class From, class To >  constexpr bool is_nothrow_convertible_v = is_nothrow_convertible<From, To>::value; |  | (since C++20) |
|  |  |  |

## Inherited from std::integral_constant

### Member constants

|  |  |
| --- | --- |
| value[static] | true if `From` is convertible to `To`, false otherwise   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| operator bool | converts the object to bool, returns value   (public member function) |
| operator()(C++14) | returns value   (public member function) |

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | bool |
| `type` | std::integral_constant<bool, value> |

### Possible implementation

| `is_convertible` (1) |
| --- |
| ```text namespace detail {     template<class T>     auto test_returnable(int) -> decltype(         void(static_cast<T(*)()>(nullptr)), std::true_type{}     );     template<class>     auto test_returnable(...) -> std::false_type;       template<class From, class To>     auto test_implicitly_convertible(int) -> decltype(         void(std::declval<void(&)(To)>()(std::declval<From>())), std::true_type{}     );     template<class, class>     auto test_implicitly_convertible(...) -> std::false_type; } // namespace detail   template<class From, class To> struct is_convertible : std::integral_constant<bool,     (decltype(detail::test_returnable<To>(0))::value &&      decltype(detail::test_implicitly_convertible<From, To>(0))::value) ||     (std::is_void<From>::value && std::is_void<To>::value) > {}; ``` |
| `is_nothrow_convertible` (2) |
| ```text template<class From, class To> struct is_nothrow_convertible : std::conjunction<std::is_void<From>, std::is_void<To>> {};   template<class From, class To>     requires         requires         {             static_cast<To(*)()>(nullptr);             { std::declval<void(&)(To) noexcept>()(std::declval<From>()) } noexcept;         } struct is_nothrow_convertible<From, To> : std::true_type {}; ``` |

### Notes

Gives well-defined results for reference types, void types, array types, and function types.

Currently the standard has not specified whether the destruction of the object produced by the conversion (either a result object or a temporary bound to a reference) is considered as a part of the conversion. This is LWG issue 3400.

All known implementations treat the destruction as a part of the conversion, as proposed in P0758R1.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_is_nothrow_convertible` | `201806L` | (C++20) | `std::is_nothrow_convertible` |

### Example

Run this code

```
#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>
 
class E { public: template<class T> E(T&&) {} };
 
int main()
{
    class A {};
    class B : public A {};
    class C {};
    class D { public: operator C() { return c; } C c; };
 
    static_assert(std::is_convertible_v<B*, A*>);
    static_assert(!std::is_convertible_v<A*, B*>);
    static_assert(std::is_convertible_v<D, C>);
    static_assert(!std::is_convertible_v<B*, C*>);
    // Note that the Perfect Forwarding constructor makes the class E be
    // "convertible" from everything. So, A is replaceable by B, C, D..:
    static_assert(std::is_convertible_v<A, E>);
 
    static_assert(!std::is_convertible_v<std::string_view, std::string>);
    static_assert(std::is_convertible_v<std::string, std::string_view>);
 
    auto stringify = []<typename T>(T x)
    {
        if constexpr (std::is_convertible_v<T, std::string> or
                      std::is_convertible_v<T, std::string_view>)
            return x;
        else
            return std::to_string(x);
    };
 
    using std::operator "" s, std::operator "" sv;
    const char* three = "three";
 
    std::cout << std::quoted(stringify("one"s)) << ' '
              << std::quoted(stringify("two"sv)) << ' '
              << std::quoted(stringify(three)) << ' '
              << std::quoted(stringify(42)) << ' '
              << std::quoted(stringify(42.0)) << '\n';
}

```

Output:

```
"one" "two" "three" "42" "42.000000"

```

### See also

|  |  |
| --- | --- |
| is_base_of(C++11) | checks if a type is a base of the other type   (class template) |
| is_pointer_interconvertible_base_of(C++20) | checks if a type is a **pointer-interconvertible** (initial) base of another type   (class template) |
| is_pointer_interconvertible_with_class(C++20) | checks if objects of a type are **pointer-interconvertible** with the specified subobject of that type   (function template) |
| convertible_to(C++20) | specifies that a type is implicitly convertible to another type   (concept) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/is_convertible&oldid=176476>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 September 2024, at 13:56.