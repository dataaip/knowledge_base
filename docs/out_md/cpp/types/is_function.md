# std::is_function

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | ****is_function****(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | disjunction(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | is_convertibleis_nothrow_convertible(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | common_type(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<type_traits>` |  |  |
| template< class T >  struct is_function; |  | (since C++11) |
|  |  |  |

`std::is_function` is a UnaryTypeTrait.

Checks whether `T` is a function type. Types like std::function, lambdas, classes with overloaded `operator()` and pointers to functions don't count as function types. Provides the member constant `value` which is equal to true, if `T` is a function type. Otherwise, `value` is equal to false.

If the program adds specializations for `std::is_function` or `std::is_function_v`, the behavior is undefined.

### Template parameters

|  |  |  |
| --- | --- | --- |
| T | - | a type to check |

### Helper variable template

|  |  |  |
| --- | --- | --- |
| template< class T >  constexpr bool is_function_v = is_function<T>::value; |  | (since C++17) |
|  |  |  |

## Inherited from std::integral_constant

### Member constants

|  |  |
| --- | --- |
| value[static] | true if `T` is a function type, false otherwise   (public static member constant) |

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

### Notes

`std::is_function` can be implemented in much simpler ways. Implementations similar to the following one are used by new versions of libc++, libstdc++ and MS STL:

```
template<class T>
struct is_function : std::integral_constant<
    bool,
    !std::is_const<const T>::value && !std::is_reference<T>::value
> {};

```

The implementation shown below is for pedagogical purposes, since it exhibits the myriad kinds of function types.

### Possible implementation

|  |
| --- |
| ```text // primary template template<class> struct is_function : std::false_type {};   // specialization for regular functions template<class Ret, class... Args> struct is_function<Ret(Args...)> : std::true_type {};   // specialization for variadic functions such as std::printf template<class Ret, class... Args> struct is_function<Ret(Args......)> : std::true_type {};   // specialization for function types that have cv-qualifiers template<class Ret, class... Args> struct is_function<Ret(Args...) const> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) volatile> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const volatile> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) volatile> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const volatile> : std::true_type {};   // specialization for function types that have ref-qualifiers template<class Ret, class... Args> struct is_function<Ret(Args...) &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) volatile &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const volatile &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) volatile &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const volatile &> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) volatile &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const volatile &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) volatile &&> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const volatile &&> : std::true_type {};   // specializations for noexcept versions of all the above (C++17 and later) template<class Ret, class... Args> struct is_function<Ret(Args...) noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) volatile noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const volatile noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) volatile noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const volatile noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) volatile & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const volatile & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) volatile & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const volatile & noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) volatile && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args...) const volatile && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) volatile && noexcept> : std::true_type {}; template<class Ret, class... Args> struct is_function<Ret(Args......) const volatile && noexcept> : std::true_type {}; ``` |

### Example

Run this code

```
#include <functional>
#include <type_traits>
 
int f();
static_assert(std::is_function_v<decltype(f)>);
 
static_assert(std::is_function_v<int(int)>);
static_assert(!std::is_function_v<int>);
static_assert(!std::is_function_v<decltype([]{})>);
static_assert(!std::is_function_v<std::function<void()>>);
 
struct O { void operator()() {} };
static_assert(std::is_function_v<O()>);
 
struct A
{
    static int foo();
    int fun() const&;
};
static_assert(!std::is_function_v<A>);
static_assert(std::is_function_v<decltype(A::foo)>);
static_assert(!std::is_function_v<decltype(&A::fun)>);
 
template<typename>
struct PM_traits {};
template<class T, class U>
struct PM_traits<U T::*> { using member_type = U; };
 
int main()
{
    using T = PM_traits<decltype(&A::fun)>::member_type; // T is int() const&
    static_assert(std::is_function_v<T>);
}

```

### See also

|  |  |
| --- | --- |
| is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17) | checks if a type can be invoked (as if by std::invoke) with the given argument types   (class template) |
| is_object(C++11) | checks if a type is an object type   (class template) |
| is_class(C++11) | checks if a type is a non-union class type   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/is_function&oldid=170926>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 April 2024, at 08:38.