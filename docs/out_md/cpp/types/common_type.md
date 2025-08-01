# std::common_type

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Type categories | | | | | | is_void(C++11) | | | | | | is_null_pointer(C++11)(DR\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_array(C++11) | | | | | | is_pointer(C++11) | | | | | | is_enum(C++11) | | | | | | is_union(C++11) | | | | | | is_class(C++11) | | | | | | is_function(C++11) | | | | | | is_reference(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_object(C++11) | | | | | | is_scalar(C++11) | | | | | | is_compound(C++11) | | | | | | is_integral(C++11) | | | | | | is_floating_point(C++11) | | | | | | is_fundamental(C++11) | | | | | | is_arithmetic(C++11) | | | | | | | is_lvalue_reference(C++11) | | | | | | is_rvalue_reference(C++11) | | | | | | is_member_pointer(C++11) | | | | | | is_member_object_pointer(C++11) | | | | | | is_member_function_pointer(C++11) | | | | | | Type properties | | | | | | is_const(C++11) | | | | | | is_volatile(C++11) | | | | | | is_empty(C++11) | | | | | | is_polymorphic(C++11) | | | | | | is_final(C++14) | | | | | | is_abstract(C++11) | | | | | | is_aggregate(C++17) | | | | | | is_implicit_lifetime(C++23) | | | | | | is_trivial(C++11)(deprecated in C++26) | | | | | | is_trivially_copyable(C++11) | | | | | | is_standard_layout(C++11) | | | | | | is_literal_type(C++11)(until C++20\*) | | | | | | is_pod(C++11)(deprecated in C++20) | | | | | | is_signed(C++11) | | | | | | is_unsigned(C++11) | | | | | | is_bounded_array(C++20) | | | | | | is_unbounded_array(C++20) | | | | | | is_scoped_enum(C++23) | | | | | | has_unique_object_representations(C++17) | | | | | | Type trait constants | | | | | | integral_constantbool_constanttrue_typefalse_type(C++11)(C++17)(C++11)(C++11) | | | | | | Metafunctions | | | | | | conjunction(C++17) | | | | | | disjunction(C++17) | | | | | | negation(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Supported operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | | | | | | is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | | | | | | is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | | | | | | is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | | | | | | is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | | | | | | is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | | | | | | is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | | | | | | has_virtual_destructor(C++11) | | | | | | is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | | | | | |  | | | | | | | Relationships and property queries | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_same(C++11) | | | | | | is_convertibleis_nothrow_convertible(C++11)(C++20) | | | | | | is_layout_compatible(C++20) | | | | | | is_pointer_interconvertible_base_of(C++20) | | | | | | is_pointer_interconvertible_with_class(C++20) | | | | | | is_corresponding_member(C++20) | | | | | | reference_constructs_from_temporary(C++23) | | | | | | reference_converts_from_temporary(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_base_of(C++11) | | | | | | is_virtual_base_of(C++26) | | | | | | alignment_of(C++11) | | | | | | rank(C++11) | | | | | | extent(C++11) | | | | | | is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17)(C++17)(C++17)(C++17) | | | | | | | Type modifications | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | | | | | | add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | | | | | | make_signed(C++11) | | | | | | make_unsigned(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_reference(C++11) | | | | | | add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | | | | | | remove_pointer(C++11) | | | | | | add_pointer(C++11) | | | | | | remove_extent(C++11) | | | | | | remove_all_extents(C++11) | | | | | |  | | | | | | | Type transformations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_storage(C++11)(deprecated in C++23) | | | | | | aligned_union(C++11)(deprecated in C++23) | | | | | | decay(C++11) | | | | | | remove_cvref(C++20) | | | | | | result_ofinvoke_result(C++11)(until C++20\*)(C++17) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | conditional(C++11) | | | | | | ****common_type****(C++11) | | | | | | common_reference(C++20) | | | | | | underlying_type(C++11) | | | | | | type_identity(C++20) | | | | | | enable_if(C++11) | | | | | | void_t(C++17) | | | | | | |
| Compile-time rational arithmetic | | | | |
| Compile-time integer sequences | | | | |
| integer_sequence(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<type_traits>` |  |  |
| template< class... T >  struct common_type; |  | (since C++11) |
|  |  |  |

Determines the common type among all types `T...`, that is the type all `T...` can be implicitly converted to. If such a type exists (as determined according to the rules below), the member `type` names that type. Otherwise, there is no member `type`.

- If sizeof...(T) is zero, there is no member `type`.
- If sizeof...(T) is one (i.e., `T...` contains only one type `T0`), the member `type` names the same type as std::common_type<T0, T0>::type if it exists; otherwise there is no member `type`.
- If sizeof...(T) is two (i.e., `T...` contains exactly two types `T1` and `T2`),

:   - If applying std::decay to at least one of `T1` and `T2` produces a different type, the member `type` names the same type as std::common_type<std::decay<T1>::type, std::decay<T2>::type>::type, if it exists; if not, there is no member `type`;
    - Otherwise, if there is a user specialization for std::common_type<T1, T2>, that specialization is used;
    - Otherwise, if std::decay<decltype(false ? std::declval<T1>() : std::declval<T2>())>::type is a valid type, the member `type` denotes that type, see the conditional operator;

|  |  |
| --- | --- |
| - Otherwise, if std::decay<decltype(false ? std::declval<CR1>() : std::declval<CR2>())>::type is a valid type, where `CR1` and `CR2` are const std::remove_reference_t<T1>& and const std::remove_reference_t<T2>& respectively, the member `type` denotes that type; | (since C++20) |

:   - Otherwise, there is no member `type`.

- If sizeof...(T) is greater than two (i.e., `T...` consists of the types `T1, T2, R...`), then if std::common_type<T1, T2>::type exists, the member `type` denotes std::common_type<typename std::common_type<T1, T2>::type, R...>::type if such a type exists. In all other cases, there is no member `type`.

If any type in the parameter pack `T` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined.

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined.

### Nested types

|  |  |
| --- | --- |
| Name | Definition |
| `type` | the common type for all `T` |

### Helper types

|  |  |  |
| --- | --- | --- |
| template< class... T >  using common_type_t = typename common_type<T...>::type; |  | (since C++14) |
|  |  |  |

### Specializations

Users may specialize `common_type` for types `T1` and `T2` if

- At least one of `T1` and `T2` depends on a user-defined type, and
- std::decay is an identity transformation for both `T1` and `T2`.

If such a specialization has a member named `type`, it must be a public and unambiguous member that names a cv-unqualified non-reference type to which both `T1` and `T2` are explicitly convertible. Additionally, std::common_type<T1, T2>::type and std::common_type<T2, T1>::type must denote the same type.

A program that adds `common_type` specializations in violation of these rules has undefined behavior.

Note that the behavior of a program that adds a specialization to any other template (except for std::basic_common_reference)(since C++20) from `<type_traits>` is undefined.

The following specializations are already provided by the standard library:

|  |  |
| --- | --- |
| std::common_type<std::chrono::duration>(C++11) | specializes the ****std::common_type**** trait   (class template specialization) |
| std::common_type<std::chrono::time_point>(C++11) | specializes the ****std::common_type**** trait   (class template specialization) |
| std::common_type<std::pair>(C++23) | determines the common type of two `pair`s   (class template specialization) |
| std::common_type<**tuple-like**>(C++23) | determines the common type of a `tuple` and a `tuple-like` type   (class template specialization) |
| std::common_type<std::basic_const_iterator>(C++23) | determines the common type of an iterator and an adapted `basic_const_iterator` type   (class template specialization) |

### Possible implementation

|  |
| --- |
| ```text // primary template (used for zero types) template<class...> struct common_type {};   // one type template<class T> struct common_type<T> : common_type<T, T> {};   namespace detail {     template<class...>     using void_t = void;       template<class T1, class T2>     using conditional_result_t = decltype(false ? std::declval<T1>() : std::declval<T2>());       template<class, class, class = void>     struct decay_conditional_result {};     template<class T1, class T2>     struct decay_conditional_result<T1, T2, void_t<conditional_result_t<T1, T2>>>         : std::decay<conditional_result_t<T1, T2>> {};       template<class T1, class T2, class = void>     struct common_type_2_impl : decay_conditional_result<const T1&, const T2&> {};       // C++11 implementation:     // template<class, class, class = void>     // struct common_type_2_impl {};       template<class T1, class T2>     struct common_type_2_impl<T1, T2, void_t<conditional_result_t<T1, T2>>>         : decay_conditional_result<T1, T2> {}; }   // two types template<class T1, class T2> struct common_type<T1, T2>      : std::conditional<std::is_same<T1, typename std::decay<T1>::type>::value &&                        std::is_same<T2, typename std::decay<T2>::type>::value,                        detail::common_type_2_impl<T1, T2>,                        common_type<typename std::decay<T1>::type,                                    typename std::decay<T2>::type>>::type {};   // 3+ types namespace detail {     template<class AlwaysVoid, class T1, class T2, class... R>     struct common_type_multi_impl {};     template<class T1, class T2, class...R>     struct common_type_multi_impl<void_t<typename common_type<T1, T2>::type>, T1, T2, R...>         : common_type<typename common_type<T1, T2>::type, R...> {}; }   template<class T1, class T2, class... R> struct common_type<T1, T2, R...>     : detail::common_type_multi_impl<void, T1, T2, R...> {}; ``` |

### Notes

For arithmetic types not subject to promotion, the common type may be viewed as the type of the (possibly mixed-mode) arithmetic expression such as T0() + T1() + ... + Tn().

### Examples

Demonstrates mixed-mode arithmetic on a program-defined class:

Run this code

```
#include <iostream>
#include <type_traits>
 
template<class T>
struct Number { T n; };
 
template<class T, class U>
constexpr Number<std::common_type_t<T, U>>
    operator+(const Number<T>& lhs, const Number<U>& rhs)
{
    return {lhs.n + rhs.n};
}
 
void describe(const char* expr, const Number<int>& x)
{
    std::cout << expr << "  is  Number<int>{" << x.n << "}\n";
}
 
void describe(const char* expr, const Number<double>& x)
{
    std::cout << expr << "  is  Number<double>{" << x.n << "}\n";
}
 
int main()
{
    Number<int> i1 = {1}, i2 = {2};
    Number<double> d1 = {2.3}, d2 = {3.5};
    describe("i1 + i2", i1 + i2);
    describe("i1 + d2", i1 + d2);
    describe("d1 + i2", d1 + i2);
    describe("d1 + d2", d1 + d2);
}

```

Output:

```
i1 + i2  is  Number<int>{3}
i1 + d2  is  Number<double>{4.5}
d1 + i2  is  Number<double>{4.3}
d1 + d2  is  Number<double>{5.8}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2141 | C++11 | the result type of the conditional operator was not decayed | decayed the result type |
| LWG 2408 | C++11 | `common_type` was not SFINAE-friendly | made SFINAE-friendly |
| LWG 2460 | C++11 | `common_type` specializations were nearly impossible to write | reduced the number of specializations needed |

### See also

|  |  |
| --- | --- |
| common_with(C++20) | specifies that two types share a common type   (concept) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/common_type&oldid=170166>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 March 2024, at 00:05.