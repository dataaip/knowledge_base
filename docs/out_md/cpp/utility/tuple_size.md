# std::tuple_size

From cppreference.com
< cpp‎ | utility
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

Utilities library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****tuple_size****(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<array>` |  |  |
| Defined in header `<tuple>` |  |  |
| Defined in header `<utility>` |  |  |
| Defined in header `<ranges>` |  | (since C++20) |
| Defined in header `<complex>` |  | (since C++26) |
| template< class T >  struct tuple_size; // not defined | (1) | (since C++11) |
| template< class T >  struct tuple_size< const T > : std::integral_constant<std::size_t, std::tuple_size<T>::value> {}; | (2) | (since C++11) |
| template< class T >  struct tuple_size< volatile T > : std::integral_constant<std::size_t, std::tuple_size<T>::value> {}; | (3) | (since C++11)  (deprecated in C++20) |
| template< class T >  struct tuple_size< const volatile T > : std::integral_constant<std::size_t, std::tuple_size<T>::value> {}; | (4) | (since C++11)  (deprecated in C++20) |
|  |  |  |

Provides access to the number of elements in a tuple-like type as a compile-time constant expression.

1) The primary template is not defined. An explicit (full) or partial specialization is required to make a type tuple-like.2-4) Specializations for a cv-qualified types reuse the value from the corresponding cv-unqualified versions by default.

|  |  |
| --- | --- |
| `std::tuple_size` interacts with the core language: it can provide structured binding support in the tuple-like case.  (2-4) are SFINAE-friendly: if std::tuple_size<T>::value is ill-formed when treated as an unevaluated operand, they do not provide the member value. Access checking is performed as if in a context unrelated to `tuple_size` and `T`. Only the validity of the immediate context of the expression is considered. This allows   ```text #include <utility>   struct X { int a, b; }; const auto [x, y] = X(); // structured binding declaration first attempts                          // tuple_size<const X> which attempts to use tuple_size<X>::value,                          // then soft error encountered, binds to public data members ``` | (since C++17) |

### Specializations

The standard library provides following specializations for standard library types:

|  |  |
| --- | --- |
| std::tuple_size<std::tuple>(C++11) | obtains the size of a `tuple`   (class template specialization) |
| std::tuple_size<std::pair>(C++11) | obtains the size of a `pair`   (class template specialization) |
| std::tuple_size<std::array>(C++11) | obtains the size of an `array`   (class template specialization) |
| std::tuple_size<std::ranges::subrange>(C++20) | obtains the size of a std::ranges::subrange   (class template specialization) |
| std::tuple_size<std::complex>(C++26) | obtains the size of a std::complex   (class template specialization) |

All specializations of `std::tuple_size` satisfy UnaryTypeTrait with **base characteristic** std::integral_constant<std::size_t, N> for some `N`.

Users may specialize `std::tuple_size` for program-defined types to make them tuple-like. Program-defined specializations must meet the requirements above.

Usually only specialization for cv-unqualified types are needed to be customized.

### Helper variable template

|  |  |  |
| --- | --- | --- |
| Defined in header `<tuple>` |  |  |
| template< class T >  constexpr std::size_t tuple_size_v = tuple_size<T>::value; |  | (since C++17) |
|  |  |  |

## Inherited from std::integral_constant

### Member constants

|  |  |
| --- | --- |
| value[static] | for a standard specialization, the number of elements in the tuple-like type `T`   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| operator std::size_t | converts the object to std::size_t, returns value   (public member function) |
| operator()(C++14) | returns value   (public member function) |

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | std::size_t |
| `type` | std::integral_constant<std::size_t, value> |

### Example

Run this code

```
#include <array>
#include <cstddef>
#include <ranges>
#include <tuple>
#include <utility>
 
template<class T, std::size_t Size> struct Arr { T data[Size]; };
 
// Program-defined specialization of std::tuple_size:
template<class T, std::size_t Size> struct std::tuple_size<Arr<T, Size>>
    : public integral_constant<std::size_t, Size> {};
 
int main()
{
    using tuple1 = std::tuple<int, char, double>;
    static_assert(3 == std::tuple_size_v<tuple1>); // uses using template (C++17)
 
    using array3x4 = std::array<std::array<int, 3>, 4>;
    static_assert(4 == std::tuple_size<array3x4>{}); // uses operator std::size_t
 
    using pair = std::pair<tuple1, array3x4>;
    static_assert(2 == std::tuple_size<pair>()); // uses operator()
 
    using sub = std::ranges::subrange<char*, char*>;
    static_assert(2 == std::tuple_size<sub>::value);
 
    using Arr5 = Arr<int, 5>;
    static_assert(5 == std::tuple_size_v<Arr5>);
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2212 | C++11 | specializations for cv types were not required in some headers, which led to ambiguity | required |

### See also

|  |  |
| --- | --- |
| Structured binding (C++17) | binds the specified names to sub-objects or tuple elements of the initializer |
| tuple_element(C++11) | obtains the element types of a tuple-like type   (class template) |
| tuple_cat(C++11) | creates a `tuple` by concatenating any number of tuples   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/tuple_size&oldid=176453>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 September 2024, at 09:02.