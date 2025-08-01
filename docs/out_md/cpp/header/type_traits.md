# Standard library header <type_traits> (C++11)

From cppreference.com
< cpp‎ | header
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | ****<type_traits>**** (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the metaprogramming library.

|  |  |
| --- | --- |
| Classes | |
| Helper Classes | |
| integral_constantbool_constant(C++11)(C++17) | compile-time constant of specified type with specified value   (class template) |
| `true_type` | std::integral_constant<bool, true> |
| `false_type` | std::integral_constant<bool, false> |
| Primary type categories | |
| is_void(C++11) | checks if a type is void   (class template) |
| is_null_pointer(C++11)(DR\*) | checks if a type is std::nullptr_t   (class template) |
| is_integral(C++11) | checks if a type is an integral type   (class template) |
| is_floating_point(C++11) | checks if a type is a floating-point type   (class template) |
| is_array(C++11) | checks if a type is an array type   (class template) |
| is_enum(C++11) | checks if a type is an enumeration type   (class template) |
| is_union(C++11) | checks if a type is a union type   (class template) |
| is_class(C++11) | checks if a type is a non-union class type   (class template) |
| is_function(C++11) | checks if a type is a function type   (class template) |
| is_pointer(C++11) | checks if a type is a pointer type   (class template) |
| is_lvalue_reference(C++11) | checks if a type is an **lvalue reference**   (class template) |
| is_rvalue_reference(C++11) | checks if a type is an **rvalue reference**   (class template) |
| is_member_object_pointer(C++11) | checks if a type is a non-static member object pointer   (class template) |
| is_member_function_pointer(C++11) | checks if a type is a non-static member function pointer   (class template) |
| Composite type categories | |
| is_fundamental(C++11) | checks if a type is a fundamental type   (class template) |
| is_arithmetic(C++11) | checks if a type is an arithmetic type   (class template) |
| is_scalar(C++11) | checks if a type is a scalar type   (class template) |
| is_object(C++11) | checks if a type is an object type   (class template) |
| is_compound(C++11) | checks if a type is a compound type   (class template) |
| is_reference(C++11) | checks if a type is either an **lvalue reference** or **rvalue reference**   (class template) |
| is_member_pointer(C++11) | checks if a type is a pointer to a non-static member function or object   (class template) |
| Type properties | |
| is_const(C++11) | checks if a type is const-qualified   (class template) |
| is_volatile(C++11) | checks if a type is volatile-qualified   (class template) |
| is_trivial(C++11)(deprecated in C++26) | checks if a type is trivial   (class template) |
| is_trivially_copyable(C++11) | checks if a type is trivially copyable   (class template) |
| is_standard_layout(C++11) | checks if a type is a standard-layout type   (class template) |
| is_pod(C++11)(deprecated in C++20) | checks if a type is a plain-old data (POD) type   (class template) |
| is_literal_type(C++11)(deprecated in C++17)(removed in C++20) | checks if a type is a literal type   (class template) |
| has_unique_object_representations(C++17) | checks if every bit in the type's object representation contributes to its value   (class template) |
| is_empty(C++11) | checks if a type is a class (but not union) type and has no non-static data members   (class template) |
| is_polymorphic(C++11) | checks if a type is a polymorphic class type   (class template) |
| is_abstract(C++11) | checks if a type is an abstract class type   (class template) |
| is_final(C++14) | checks if a type is a final class type   (class template) |
| is_aggregate(C++17) | checks if a type is an aggregate type   (class template) |
| is_implicit_lifetime(C++23) | checks if a type is an implicit-lifetime type   (class template) |
| is_signed(C++11) | checks if a type is a signed arithmetic type   (class template) |
| is_unsigned(C++11) | checks if a type is an unsigned arithmetic type   (class template) |
| is_bounded_array(C++20) | checks if a type is an array type of known bound   (class template) |
| is_unbounded_array(C++20) | checks if a type is an array type of unknown bound   (class template) |
| is_scoped_enum(C++23) | checks if a type is a scoped enumeration type   (class template) |

|  |  |
| --- | --- |
| Supported operations | |
| is_constructibleis_trivially_constructibleis_nothrow_constructible(C++11)(C++11)(C++11) | checks if a type has a constructor for specific arguments   (class template) |
| is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible(C++11)(C++11)(C++11) | checks if a type has a default constructor   (class template) |
| is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible(C++11)(C++11)(C++11) | checks if a type has a copy constructor   (class template) |
| is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible(C++11)(C++11)(C++11) | checks if a type can be constructed from an rvalue reference   (class template) |
| is_assignableis_trivially_assignableis_nothrow_assignable(C++11)(C++11)(C++11) | checks if a type has an assignment operator for a specific argument   (class template) |
| is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable(C++11)(C++11)(C++11) | checks if a type has a copy assignment operator   (class template) |
| is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable(C++11)(C++11)(C++11) | checks if a type has a move assignment operator   (class template) |
| is_destructibleis_trivially_destructibleis_nothrow_destructible(C++11)(C++11)(C++11) | checks if a type has a non-deleted destructor   (class template) |
| has_virtual_destructor(C++11) | checks if a type has a virtual destructor   (class template) |
| is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable(C++17)(C++17)(C++17)(C++17) | checks if objects of a type can be swapped with objects of same or different type   (class template) |
| reference_converts_from_temporary(C++23) | checks if a reference is bound to a temporary in copy-initialization   (class template) |
| reference_constructs_from_temporary(C++23) | checks if a reference is bound to a temporary in direct-initialization   (class template) |

|  |  |
| --- | --- |
| Property queries | |
| alignment_of(C++11) | obtains the type's alignment requirements   (class template) |
| rank(C++11) | obtains the number of dimensions of an array type   (class template) |
| extent(C++11) | obtains the size of an array type along a specified dimension   (class template) |

|  |  |
| --- | --- |
| Type relationships | |
| is_same(C++11) | checks if two types are the same   (class template) |
| is_base_of(C++11) | checks if a type is a base of the other type   (class template) |
| is_virtual_base_of(C++26) | checks if a type is a virtual base of the other type   (class template) |
| is_convertibleis_nothrow_convertible(C++11)(C++20) | checks if a type can be converted to the other type   (class template) |
| is_layout_compatible(C++20) | checks if two types are **layout-compatible**   (class template) |
| is_pointer_interconvertible_base_of(C++20) | checks if a type is a **pointer-interconvertible** (initial) base of another type   (class template) |
| is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r(C++17) | checks if a type can be invoked (as if by std::invoke) with the given argument types   (class template) |
| Const-volatility specifiers | |
| remove_cvremove_constremove_volatile(C++11)(C++11)(C++11) | removes const and/or volatile specifiers from the given type   (class template) |
| add_cvadd_constadd_volatile(C++11)(C++11)(C++11) | adds const and/or volatile specifiers to the given type   (class template) |
| References | |
| remove_reference(C++11) | removes a reference from the given type   (class template) |
| add_lvalue_referenceadd_rvalue_reference(C++11)(C++11) | adds an **lvalue** or **rvalue** reference to the given type   (class template) |
| Pointers | |
| remove_pointer(C++11) | removes a pointer from the given type   (class template) |
| add_pointer(C++11) | adds a pointer to the given type   (class template) |
| Sign modifiers | |
| make_signed(C++11) | obtains the corresponding signed type for the given integral type   (class template) |
| make_unsigned(C++11) | obtains the corresponding signed type for the given integral type   (class template) |
| Arrays | |
| remove_extent(C++11) | removes one extent from the given array type   (class template) |
| remove_all_extents(C++11) | removes all extents from the given array type   (class template) |
| Miscellaneous transformations | |
| aligned_storage(since C++11)(deprecated in C++23) | defines the type suitable for use as uninitialized storage for types of given size   (class template) |
| aligned_union(since C++11)(deprecated in C++23) | defines the type suitable for use as uninitialized storage for all given types   (class template) |
| decay(C++11) | applies type transformations as when passing a function argument by value   (class template) |
| remove_cvref(C++20) | combines std::remove_cv and std::remove_reference   (class template) |
| enable_if(C++11) | conditionally removes a function overload or template specialization from overload resolution   (class template) |
| conditional(C++11) | chooses one type or another based on compile-time boolean   (class template) |
| common_type(C++11) | determines the common type of a group of types   (class template) |
| common_referencebasic_common_reference(C++20) | determines the common reference type of a group of types   (class template) |
| underlying_type(C++11) | obtains the underlying integer type for a given enumeration type   (class template) |
| result_ofinvoke_result(C++11)(removed in C++20)(C++17) | deduces the result type of invoking a callable object with a set of arguments   (class template) |
| void_t(C++17) | void variadic alias template  (alias template) |
| type_identity(C++20) | returns the type argument unchanged   (class template) |
| unwrap_referenceunwrap_ref_decay(C++20)(C++20) | get the reference type wrapped in std::reference_wrapper   (class template) |
| Operations on traits | |
| conjunction(C++17) | variadic logical AND metafunction   (class template) |
| disjunction(C++17) | variadic logical OR metafunction   (class template) |
| negation(C++17) | logical NOT metafunction   (class template) |
| Functions | |
| Member relationships | |
| is_pointer_interconvertible_with_class(C++20) | checks if objects of a type are **pointer-interconvertible** with the specified subobject of that type   (function template) |
| is_corresponding_member(C++20) | checks if two specified members correspond to each other in the common initial subsequence of two specified types   (function template) |
| Constant evaluation context | |
| is_constant_evaluated(C++20) | detects whether the call occurs within a constant-evaluated context   (function) |
| is_within_lifetime(C++26) | checks whether a pointer is within the object's lifetime at compile time   (function) |

### Synopsis

```
namespace std {
  // helper class
  template<class T, T v> struct integral_constant;
 
  template<bool B>
    using bool_constant = integral_constant<bool, B>;
  using true_type  = bool_constant<true>;
  using false_type = bool_constant<false>;
 
  // primary type categories
  template<class T> struct is_void;
  template<class T> struct is_null_pointer;
  template<class T> struct is_integral;
  template<class T> struct is_floating_point;
  template<class T> struct is_array;
  template<class T> struct is_pointer;
  template<class T> struct is_lvalue_reference;
  template<class T> struct is_rvalue_reference;
  template<class T> struct is_member_object_pointer;
  template<class T> struct is_member_function_pointer;
  template<class T> struct is_enum;
  template<class T> struct is_union;
  template<class T> struct is_class;
  template<class T> struct is_function;
 
  // composite type categories
  template<class T> struct is_reference;
  template<class T> struct is_arithmetic;
  template<class T> struct is_fundamental;
  template<class T> struct is_object;
  template<class T> struct is_scalar;
  template<class T> struct is_compound;
  template<class T> struct is_member_pointer;
 
  // type properties
  template<class T> struct is_const;
  template<class T> struct is_volatile;
  template<class T> struct is_trivial;
  template<class T> struct is_trivially_copyable;
  template<class T> struct is_standard_layout;
  template<class T> struct is_empty;
  template<class T> struct is_polymorphic;
  template<class T> struct is_abstract;
  template<class T> struct is_final;
  template<class T> struct is_aggregate;
 
  template<class T> struct is_signed;
  template<class T> struct is_unsigned;
  template<class T> struct is_bounded_array;
  template<class T> struct is_unbounded_array;
  template<class T> struct is_scoped_enum;
 
  template<class T, class... Args> struct is_constructible;
  template<class T> struct is_default_constructible;
  template<class T> struct is_copy_constructible;
  template<class T> struct is_move_constructible;
 
  template<class T, class U> struct is_assignable;
  template<class T> struct is_copy_assignable;
  template<class T> struct is_move_assignable;
 
  template<class T, class U> struct is_swappable_with;
  template<class T> struct is_swappable;
 
  template<class T> struct is_destructible;
 
  template<class T, class... Args> struct is_trivially_constructible;
  template<class T> struct is_trivially_default_constructible;
  template<class T> struct is_trivially_copy_constructible;
  template<class T> struct is_trivially_move_constructible;
 
  template<class T, class U> struct is_trivially_assignable;
  template<class T> struct is_trivially_copy_assignable;
  template<class T> struct is_trivially_move_assignable;
  template<class T> struct is_trivially_destructible;
 
  template<class T, class... Args> struct is_nothrow_constructible;
  template<class T> struct is_nothrow_default_constructible;
  template<class T> struct is_nothrow_copy_constructible;
  template<class T> struct is_nothrow_move_constructible;
 
  template<class T, class U> struct is_nothrow_assignable;
  template<class T> struct is_nothrow_copy_assignable;
  template<class T> struct is_nothrow_move_assignable;
 
  template<class T, class U> struct is_nothrow_swappable_with;
  template<class T> struct is_nothrow_swappable;
 
  template<class T> struct is_nothrow_destructible;
 
  template<class T> struct has_virtual_destructor;
 
  template<class T> struct has_unique_object_representations;
 
  template<class T, class U> struct reference_constructs_from_temporary;
  template<class T, class U> struct reference_converts_from_temporary;
 
  // type property queries
  template<class T> struct alignment_of;
  template<class T> struct rank;
  template<class T, unsigned I = 0> struct extent;
 
  // type relations
  template<class T, class U> struct is_same;
  template<class Base, class Derived> struct is_base_of;
  template<class Base, class Derived> struct is_virtual_base_of;
  template<class From, class To> struct is_convertible;
  template<class From, class To> struct is_nothrow_convertible;
  template<class T, class U> struct is_layout_compatible;
  template<class Base, class Derived> struct is_pointer_interconvertible_base_of;
 
  template<class Fn, class... ArgTypes> struct is_invocable;
  template<class R, class Fn, class... ArgTypes> struct is_invocable_r;
 
  template<class Fn, class... ArgTypes> struct is_nothrow_invocable;
  template<class R, class Fn, class... ArgTypes> struct is_nothrow_invocable_r;
 
  // const-volatile modifications
  template<class T> struct remove_const;
  template<class T> struct remove_volatile;
  template<class T> struct remove_cv;
  template<class T> struct add_const;
  template<class T> struct add_volatile;
  template<class T> struct add_cv;
 
  template<class T>
    using remove_const_t    = typename remove_const<T>::type;
  template<class T>
    using remove_volatile_t = typename remove_volatile<T>::type;
  template<class T>
    using remove_cv_t       = typename remove_cv<T>::type;
  template<class T>
    using add_const_t       = typename add_const<T>::type;
  template<class T>
    using add_volatile_t    = typename add_volatile<T>::type;
  template<class T>
    using add_cv_t          = typename add_cv<T>::type;
 
  // reference modifications
  template<class T> struct remove_reference;
  template<class T> struct add_lvalue_reference;
  template<class T> struct add_rvalue_reference;
 
  template<class T>
    using remove_reference_t     = typename remove_reference<T>::type;
  template<class T>
    using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;
  template<class T>
    using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;
 
  // sign modifications
  template<class T> struct make_signed;
  template<class T> struct make_unsigned;
 
  template<class T>
    using make_signed_t   = typename make_signed<T>::type;
  template<class T>
    using make_unsigned_t = typename make_unsigned<T>::type;
 
  // array modifications
  template<class T> struct remove_extent;
  template<class T> struct remove_all_extents;
 
  template<class T>
    using remove_extent_t      = typename remove_extent<T>::type;
  template<class T>
    using remove_all_extents_t = typename remove_all_extents<T>::type;
 
  // pointer modifications
  template<class T> struct remove_pointer;
  template<class T> struct add_pointer;
 
  template<class T>
    using remove_pointer_t = typename remove_pointer<T>::type;
  template<class T>
    using add_pointer_t    = typename add_pointer<T>::type;
 
  // other transformations
  template<class T> struct type_identity;
  template<class T> struct remove_cvref;
  template<class T> struct decay;
  template<bool, class T = void> struct enable_if;
  template<bool, class T, class F> struct conditional;
  template<class... T> struct common_type;
  template<class T, class U, template<class> class TQual, template<class> class UQual>
    struct basic_common_reference { };
  template<class... T> struct common_reference;
  template<class T> struct underlying_type;
  template<class Fn, class... ArgTypes> struct invoke_result;
  template<class T> struct unwrap_reference;
  template<class T> struct unwrap_ref_decay;
 
  template<class T>
    using type_identity_t    = typename type_identity<T>::type;
  template<class T>
    using remove_cvref_t     = typename remove_cvref<T>::type;
  template<class T>
    using decay_t            = typename decay<T>::type;
  template<bool b, class T = void>
    using enable_if_t        = typename enable_if<b, T>::type;
  template<bool b, class T, class F>
    using conditional_t      = typename conditional<b, T, F>::type;
  template<class... T>
    using common_type_t      = typename common_type<T...>::type;
  template<class... T>
    using common_reference_t = typename common_reference<T...>::type;
  template<class T>
    using underlying_type_t  = typename underlying_type<T>::type;
  template<class Fn, class... ArgTypes>
    using invoke_result_t    = typename invoke_result<Fn, ArgTypes...>::type;
  template<class T>
    using unwrap_reference_t = typename unwrap_reference<T>::type;
  template<class T>
    using unwrap_ref_decay_t = typename unwrap_ref_decay<T>::type;
  template<class...>
    using void_t             = void;
 
  // logical operator traits
  template<class... B> struct conjunction;
  template<class... B> struct disjunction;
  template<class B> struct negation;
 
  // primary type categories
  template<class T>
    inline constexpr bool is_void_v = is_void<T>::value;
  template<class T>
    inline constexpr bool is_null_pointer_v = is_null_pointer<T>::value;
  template<class T>
    inline constexpr bool is_integral_v = is_integral<T>::value;
  template<class T>
    inline constexpr bool is_floating_point_v = is_floating_point<T>::value;
  template<class T>
    inline constexpr bool is_array_v = is_array<T>::value;
  template<class T>
    inline constexpr bool is_pointer_v = is_pointer<T>::value;
  template<class T>
    inline constexpr bool is_lvalue_reference_v = is_lvalue_reference<T>::value;
  template<class T>
    inline constexpr bool is_rvalue_reference_v = is_rvalue_reference<T>::value;
  template<class T>
    inline constexpr bool is_member_object_pointer_v = is_member_object_pointer<T>::value;
  template<class T>
    inline constexpr bool is_member_function_pointer_v = is_member_function_pointer<T>::value;
  template<class T>
    inline constexpr bool is_enum_v = is_enum<T>::value;
  template<class T>
    inline constexpr bool is_union_v = is_union<T>::value;
  template<class T>
    inline constexpr bool is_class_v = is_class<T>::value;
  template<class T>
    inline constexpr bool is_function_v = is_function<T>::value;
 
  // composite type categories
  template<class T>
    inline constexpr bool is_reference_v = is_reference<T>::value;
  template<class T>
    inline constexpr bool is_arithmetic_v = is_arithmetic<T>::value;
  template<class T>
    inline constexpr bool is_fundamental_v = is_fundamental<T>::value;
  template<class T>
    inline constexpr bool is_object_v = is_object<T>::value;
  template<class T>
    inline constexpr bool is_scalar_v = is_scalar<T>::value;
  template<class T>
    inline constexpr bool is_compound_v = is_compound<T>::value;
  template<class T>
    inline constexpr bool is_member_pointer_v = is_member_pointer<T>::value;
 
  // type properties
  template<class T>
    inline constexpr bool is_const_v = is_const<T>::value;
  template<class T>
    inline constexpr bool is_volatile_v = is_volatile<T>::value;
  template<class T>
    inline constexpr bool is_trivial_v = is_trivial<T>::value;
  template<class T>
    inline constexpr bool is_trivially_copyable_v = is_trivially_copyable<T>::value;
  template<class T>
    inline constexpr bool is_standard_layout_v = is_standard_layout<T>::value;
  template<class T>
    inline constexpr bool is_empty_v = is_empty<T>::value;
  template<class T>
    inline constexpr bool is_polymorphic_v = is_polymorphic<T>::value;
  template<class T>
    inline constexpr bool is_abstract_v = is_abstract<T>::value;
  template<class T>
    inline constexpr bool is_final_v = is_final<T>::value;
  template<class T>
    inline constexpr bool is_aggregate_v = is_aggregate<T>::value;
  template<class T>
    inline constexpr bool is_signed_v = is_signed<T>::value;
  template<class T>
    inline constexpr bool is_unsigned_v = is_unsigned<T>::value;
  template<class T>
    inline constexpr bool is_bounded_array_v = is_bounded_array<T>::value;
  template<class T>
    inline constexpr bool is_unbounded_array_v = is_unbounded_array<T>::value;
  template<class T>
    inline constexpr bool is_scoped_enum_v = is_scoped_enum<T>::value;
  template<class T, class... Args>
    inline constexpr bool is_constructible_v = is_constructible<T, Args...>::value;
  template<class T>
    inline constexpr bool is_default_constructible_v = is_default_constructible<T>::value;
  template<class T>
    inline constexpr bool is_copy_constructible_v = is_copy_constructible<T>::value;
  template<class T>
    inline constexpr bool is_move_constructible_v = is_move_constructible<T>::value;
  template<class T, class U>
    inline constexpr bool is_assignable_v = is_assignable<T, U>::value;
  template<class T>
    inline constexpr bool is_copy_assignable_v = is_copy_assignable<T>::value;
  template<class T>
    inline constexpr bool is_move_assignable_v = is_move_assignable<T>::value;
  template<class T, class U>
    inline constexpr bool is_swappable_with_v = is_swappable_with<T, U>::value;
  template<class T>
    inline constexpr bool is_swappable_v = is_swappable<T>::value;
  template<class T>
    inline constexpr bool is_destructible_v = is_destructible<T>::value;
  template<class T, class... Args>
    inline constexpr bool is_trivially_constructible_v
      = is_trivially_constructible<T, Args...>::value;
  template<class T>
    inline constexpr bool is_trivially_default_constructible_v
      = is_trivially_default_constructible<T>::value;
  template<class T>
    inline constexpr bool is_trivially_copy_constructible_v
      = is_trivially_copy_constructible<T>::value;
  template<class T>
    inline constexpr bool is_trivially_move_constructible_v
      = is_trivially_move_constructible<T>::value;
  template<class T, class U>
    inline constexpr bool is_trivially_assignable_v = is_trivially_assignable<T, U>::value;
  template<class T>
    inline constexpr bool is_trivially_copy_assignable_v
      = is_trivially_copy_assignable<T>::value;
  template<class T>
    inline constexpr bool is_trivially_move_assignable_v
      = is_trivially_move_assignable<T>::value;
  template<class T>
    inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<T>::value;
  template<class T, class... Args>
    inline constexpr bool is_nothrow_constructible_v
      = is_nothrow_constructible<T, Args...>::value;
  template<class T>
    inline constexpr bool is_nothrow_default_constructible_v
      = is_nothrow_default_constructible<T>::value;
  template<class T>
    inline constexpr bool is_nothrow_copy_constructible_v
      = is_nothrow_copy_constructible<T>::value;
  template<class T>
    inline constexpr bool is_nothrow_move_constructible_v
      = is_nothrow_move_constructible<T>::value;
  template<class T, class U>
    inline constexpr bool is_nothrow_assignable_v = is_nothrow_assignable<T, U>::value;
  template<class T>
    inline constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<T>::value;
  template<class T>
    inline constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<T>::value;
  template<class T, class U>
    inline constexpr bool is_nothrow_swappable_with_v = is_nothrow_swappable_with<T, U>::value;
  template<class T>
    inline constexpr bool is_nothrow_swappable_v = is_nothrow_swappable<T>::value;
  template<class T>
    inline constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<T>::value;
  template<class T>
    inline constexpr bool has_virtual_destructor_v = has_virtual_destructor<T>::value;
  template<class T>
    inline constexpr bool has_unique_object_representations_v
      = has_unique_object_representations<T>::value;
  template<class T, class U>
    inline constexpr bool reference_constructs_from_temporary_v
      = reference_constructs_from_temporary<T, U>::value;
  template<class T, class U>
    inline constexpr bool reference_converts_from_temporary_v
      = reference_converts_from_temporary<T, U>::value;
 
  // type property queries
  template<class T>
    inline constexpr size_t alignment_of_v = alignment_of<T>::value;
  template<class T>
    inline constexpr size_t rank_v = rank<T>::value;
  template<class T, unsigned I = 0>
    inline constexpr size_t extent_v = extent<T, I>::value;
 
  // type relations
  template<class T, class U>
    inline constexpr bool is_same_v = is_same<T, U>::value;
  template<class Base, class Derived>
    inline constexpr bool is_base_of_v = is_base_of<Base, Derived>::value;
  template<class Base, class Derived>
    inline constexpr bool is_virtual_base_of_v = is_virtual_base_of<Base, Derived>::value;
  template<class From, class To>
    inline constexpr bool is_convertible_v = is_convertible<From, To>::value;
  template<class From, class To>
    inline constexpr bool is_nothrow_convertible_v = is_nothrow_convertible<From, To>::value;
  template<class T, class U>
    inline constexpr bool is_layout_compatible_v = is_layout_compatible<T, U>::value;
  template<class Base, class Derived>
    inline constexpr bool is_pointer_interconvertible_base_of_v
      = is_pointer_interconvertible_base_of<Base, Derived>::value;
  template<class Fn, class... ArgTypes>
    inline constexpr bool is_invocable_v = is_invocable<Fn, ArgTypes...>::value;
  template<class R, class Fn, class... ArgTypes>
    inline constexpr bool is_invocable_r_v = is_invocable_r<R, Fn, ArgTypes...>::value;
  template<class Fn, class... ArgTypes>
    inline constexpr bool is_nothrow_invocable_v = is_nothrow_invocable<Fn, ArgTypes...>::value;
  template<class R, class Fn, class... ArgTypes>
    inline constexpr bool is_nothrow_invocable_r_v
      = is_nothrow_invocable_r<R, Fn, ArgTypes...>::value;
 
  // logical operator traits
  template<class... B>
    inline constexpr bool conjunction_v = conjunction<B...>::value;
  template<class... B>
    inline constexpr bool disjunction_v = disjunction<B...>::value;
  template<class B>
    inline constexpr bool negation_v = negation<B>::value;
 
  // member relationships
  template<class S, class M>
    constexpr bool is_pointer_interconvertible_with_class(M S::*m) noexcept;
  template<class S1, class S2, class M1, class M2>
    constexpr bool is_corresponding_member(M1 S1::*m1, M2 S2::*m2) noexcept;
 
  // constant evaluation context
  constexpr bool is_constant_evaluated() noexcept;
  consteval bool is_within_lifetime(const auto*) noexcept;
}

```

#### Class template std::integral_constant

```
namespace std {
  template <class T, T v>
  struct integral_constant {
    static constexpr T value = v;
    using value_type = T;
    using type = integral_constant<T, v>;
    constexpr operator value_type() const noexcept { return value; }
    constexpr value_type operator()() const noexcept { return value; }
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/type_traits&oldid=174018>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 August 2024, at 06:06.