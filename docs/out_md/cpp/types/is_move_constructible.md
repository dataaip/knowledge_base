# std::is_move_constructible, std::is_trivially_move_constructible, std::is_nothrow_move_constructible

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | is_function(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | disjunction(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | ****is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible****(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | is_convertibleis_nothrow_convertible(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | common_type(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<type_traits>` |  |  |
| template< class T >  struct is_move_constructible; | (1) | (since C++11) |
| template< class T >  struct is_trivially_move_constructible; | (2) | (since C++11) |
| template< class T >  struct is_nothrow_move_constructible; | (3) | (since C++11) |
|  |  |  |

| Type trait | The value of the member constant `value` | |
| --- | --- | --- |
| `T` is a referenceable type | `T` is not a referenceable type |
| (1) | std::is_constructible<T, T&&>::value | false |
| (2) | std::is_trivially_constructible<T, T&&>::value |
| (3) | std::is_nothrow_constructible<T, T&&>::value |

If `T` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined.

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined.

If the program adds specializations for any of the templates described on this page, the behavior is undefined.

### Helper variable templates

|  |  |  |
| --- | --- | --- |
| template< class T >  inline constexpr bool is_move_constructible_v =     is_move_constructible<T>::value; |  | (since C++17) |
| template< class T >  inline constexpr bool is_trivially_move_constructible_v =     is_trivially_move_constructible<T>::value; |  | (since C++17) |
| template< class T >  inline constexpr bool is_nothrow_move_constructible_v =     is_nothrow_move_constructible<T>::value; |  | (since C++17) |
|  |  |  |

## Inherited from std::integral_constant

### Member constants

|  |  |
| --- | --- |
| value[static] | true if `T` is move-constructible, false otherwise   (public static member constant) |

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

|  |
| --- |
| ```text template<class T> struct is_move_constructible :     std::is_constructible<T, typename std::add_rvalue_reference<T>::type> {};   template<class T> struct is_trivially_move_constructible :     std::is_trivially_constructible<T, typename std::add_rvalue_reference<T>::type> {};   template<class T> struct is_nothrow_move_constructible :     std::is_nothrow_constructible<T, typename std::add_rvalue_reference<T>::type> {}; ``` |

### Notes

Types without a move constructor, but with a copy constructor that accepts const T& arguments, satisfy `std::is_move_constructible`.

Move constructors are usually noexcept, since otherwise they are unusable in any code that provides strong exception guarantee.

In many implementations, `std::is_nothrow_move_constructible` also checks if the destructor throws because it is effectively noexcept(T(arg)). Same applies to `std::is_trivially_move_constructible`, which, in these implementations, also requires that the destructor is trivial: GCC bug 51452, LWG issue 2116.

### Example

Run this code

```
#include <string>
#include <type_traits>
 
struct Ex1
{
    std::string str; // member has a non-trivial but non-throwing move constructor
};
static_assert(std::is_move_constructible_v<Ex1>);
static_assert(!std::is_trivially_move_constructible_v<Ex1>);
static_assert(std::is_nothrow_move_constructible_v<Ex1>);
 
struct Ex2
{
    int n;
    Ex2(Ex2&&) = default; // trivial and non-throwing
};
static_assert(std::is_move_constructible_v<Ex2>);
static_assert(std::is_trivially_move_constructible_v<Ex2>);
static_assert(std::is_nothrow_move_constructible_v<Ex2>);
 
struct NoMove1
{
    // prevents implicit declaration of default move constructor;
    // however, the class is still move-constructible because its
    // copy constructor can bind to an rvalue argument
    NoMove1(const NoMove1&) {}
};
static_assert(std::is_move_constructible_v<NoMove1>);
static_assert(!std::is_trivially_move_constructible_v<NoMove1>);
static_assert(!std::is_nothrow_move_constructible_v<NoMove1>);
 
struct NoMove2
{
    // Not move-constructible since the lvalue reference
    // can't bind to the rvalue argument
    NoMove2(NoMove2&) {}
};
static_assert(!std::is_move_constructible_v<NoMove2>);
static_assert(!std::is_trivially_move_constructible_v<NoMove2>);
static_assert(!std::is_nothrow_move_constructible_v<NoMove2>);
 
int main() {}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2196 | C++11 | the behavior was unclear if T&& cannot be formed | the value produced is false in this case |

### See also

|  |  |
| --- | --- |
| is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | checks if a type has a constructor for specific arguments   (class template) |
| is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | checks if a type has a default constructor   (class template) |
| is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | checks if a type has a copy constructor   (class template) |
| move_constructible(C++20) | specifies that an object of a type can be move constructed   (concept) |
| move(C++11) | converts the argument to an xvalue   (function template) |
| move_if_noexcept(C++11) | converts the argument to an xvalue if the move constructor does not throw   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/is_move_constructible&oldid=177621>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 November 2024, at 19:30.