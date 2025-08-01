# std::optional<T>::optional

From cppreference.com
< cpp‎ | utility‎ | optional
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

std::optional

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****optional::optional**** | | | | |
| optional::~optional | | | | |
| optional::operator= | | | | |
| Observers | | | | |
| optional::operator->optional::operator\* | | | | |
| optional::operator booloptional::has_value | | | | |
| optional::value | | | | |
| optional::value_or | | | | |
| Iterators | | | | |
| optional::begin(C++26) | | | | |
| optional::end(C++26) | | | | |
| Monadic operations | | | | |
| optional::and_then(C++23) | | | | |
| optional::transform(C++23) | | | | |
| optional::or_else(C++23) | | | | |
| Modifiers | | | | |
| optional::emplace | | | | |
| optional::swap | | | | |
| optional::reset | | | | |
| Non-member functions | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++20) | | | | |
| make_optional | | | | |
| swap(std::optional) | | | | |
| Deduction guides | | | | |
| Helper classes | | | | |
| hash<std::optional> | | | | |
| nullopt_t | | | | |
| in_place_t | | | | |
| bad_optional_access | | | | |
| Helper objects | | | | |
| nullopt | | | | |
| in_place | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr optional() noexcept;  constexpr optional( std::nullopt_t ) noexcept; | (1) | (since C++17) |
| constexpr optional( const optional& other ); | (2) | (since C++17) |
| constexpr optional( optional&& other ) noexcept(/\* see below \*/); | (3) | (since C++17) |
| template < class U >  optional( const optional<U>& other ); | (4) | (since C++17)  (constexpr since C++20)  (conditionally explicit) |
| template < class U >  optional( optional<U>&& other ); | (5) | (since C++17)  (constexpr since C++20)  (conditionally explicit) |
| template< class... Args >  constexpr explicit optional( std::in_place_t, Args&&... args ); | (6) | (since C++17) |
| template< class U, class... Args >  constexpr explicit optional( std::in_place_t,                               std::initializer_list<U> ilist,                              Args&&... args ); | (7) | (since C++17) |
| template < class U = T >  constexpr optional( U&& value ); | (8) | (since C++17)  (conditionally explicit) |
|  |  |  |

Constructs a new optional object.

1) Constructs an object that **does not contain** a value.2) Copy constructor: If other contains a value, initializes the contained value as if direct-initializing (but not direct-list-initializing) an object of type `T` with the expression \*other. If other does not contain a value, constructs an object that **does not contain** a value.

- This constructor is defined as deleted if std::is_copy_constructible_v<T> is false.
- It is a trivial constructor if std::is_trivially_copy_constructible_v<T> is true.
3) Move constructor: If other contains a value, initializes the contained value as if direct-initializing (but not direct-list-initializing) an object of type `T` with the expression std::move(\*other) and **does not** make other empty: a moved-from `std::optional` still **contains** a value, but the value itself is moved from. If other does not contain a value, constructs an object that **does not contain** a value.

- This constructor does not participate in overload resolution unless std::is_move_constructible_v<T> is true.
- It is a trivial constructor if std::is_trivially_move_constructible_v<T> is true.
4) Converting copy constructor: If other does not contain a value, constructs an optional object that **does not contain** a value. Otherwise, constructs an optional object that **contains** a value, initialized as if direct-initializing (but not direct-list-initializing) an object of type `T` with the expression \*other.

- This constructor does not participate in overload resolution unless the following conditions are met:
  - std::is_constructible_v<T, const U&> is true.
  - If `T` is not (possibly cv-qualified) bool, `T` is not constructible or convertible from any expression of type (possibly const) std::optional<U>, i.e., the following 8 values are all false:
    - std::is_constructible_v<T, std::optional<U>&>
    - std::is_constructible_v<T, const std::optional<U>&>
    - std::is_constructible_v<T, std::optional<U>&&>
    - std::is_constructible_v<T, const std::optional<U>&&>
    - std::is_convertible_v<std::optional<U>&, T>
    - std::is_convertible_v<const std::optional<U>&, T>
    - std::is_convertible_v<std::optional<U>&&, T>
    - std::is_convertible_v<const std::optional<U>&&, T>
- This constructor is explicit if and only if std::is_convertible_v<const U&, T> is false.
5) Converting move constructor: If other does not contain a value, constructs an optional object that **does not contain** a value. Otherwise, constructs an optional object that **contains** a value, initialized as if direct-initializing (but not direct-list-initializing) an object of type `T` with the expression std::move(\*other).

- This constructor does not participate in overload resolution unless the following conditions are met:
  - std::is_constructible_v<T, U&&> is true.
  - If `T` is not (possibly cv-qualified) bool, `T` is not constructible or convertible from any expression of type (possibly const) std::optional<U>, i.e., the following 8 values are all false:
    - std::is_constructible_v<T, std::optional<U>&>
    - std::is_constructible_v<T, const std::optional<U>&>
    - std::is_constructible_v<T, std::optional<U>&&>
    - std::is_constructible_v<T, const std::optional<U>&&>
    - std::is_convertible_v<std::optional<U>&, T>
    - std::is_convertible_v<const std::optional<U>&, T>
    - std::is_convertible_v<std::optional<U>&&, T>
    - std::is_convertible_v<const std::optional<U>&&, T>
- This constructor is explicit if and only if std::is_convertible_v<U&&, T> is false.
6) Constructs an optional object that **contains** a value, initialized as if direct-initializing (but not direct-list-initializing) an object of type `T` from the arguments std::forward<Args>(args)....

- If the selected constructor of `T` is a constexpr constructor, this constructor is a constexpr constructor.
- The function does not participate in the overload resolution unless std::is_constructible_v<T, Args...> is true.
7) Constructs an optional object that **contains** a value, initialized as if direct-initializing (but not direct-list-initializing) an object of type `T` from the arguments ilist, std::forward<Args>(args)....

- If the selected constructor of `T` is a constexpr constructor, this constructor is a constexpr constructor.
- The function does not participate in the overload resolution unless std::is_constructible_v<T, std::initializer_list<U>&, Args...> is true.
8) Constructs an optional object that **contains** a value, initialized as if direct-initializing (but not direct-list-initializing) an object of type `T` with the expression std::forward<U>(value).

- If the selected constructor of `T` is a constexpr constructor, this constructor is a constexpr constructor.
- This constructor does not participate in overload resolution unless the following conditions are met:
  - std::is_constructible_v<T, U&&> is true.
  - std::decay_t<U>(until C++20)std::remove_cvref_t<U>(since C++20) is neither std::in_place_t nor std::optional<T>.
  - If `T` is (possibly cv-qualified) bool, std::decay_t<U>(until C++20)std::remove_cvref_t<U>(since C++20) is not a specialization of `std::optional`.
- This constructor is explicit if and only if std::is_convertible_v<U&&, T> is false.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another optional object whose contained value is copied |
| value | - | value with which to initialize the contained value |
| args... | - | arguments with which to initialize the contained value |
| ilist | - | initializer list with which to initialize the contained value |

### Exceptions

2) Throws any exception thrown by the constructor of `T`.3) Throws any exception thrown by the constructor of `T`. Has the followingnoexcept specification:noexcept(std::is_nothrow_move_constructible<T>::value)4-8) Throws any exception thrown by the constructor of `T`.

### Deduction guides

### Notes

Before the resolution of LWG issue 3836, constructing an std::optional<bool> from std::optional<U> would select overload (8) instead of overloads (4,5) if `U` is not bool. This is because overloads (4,5) did not participate in overload resolution if `T` (bool in this case) can be constructed or converted from std::optional<U>, but `std::optional::operator bool` makes the conversion possible for any `U`.

As a result, the constructed std::optional<bool> always contains a value. That value is determined by whether the provided std::optional<U> object contains a value, rather than the bool value direct-initialized from the contained value:

```
std::optional<bool> op_false(false);
std::optional<int> op_zero(0);
 
std::optional<int> from_bool(op_false); // OK: contains 0 (initialized from false)
std::optional<bool> from_int(op_zero);  // DEFECT (LWG 3836): contains true because
                                        // op_zero contains a value, even if initializing
                                        // bool from that value gives false

```

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_optional` | `202106L` | (C++20) (DR20) | Fully constexpr (4,5) |

### Example

Run this code

```
#include <iostream>
#include <optional>
#include <string>
 
int main()
{
    std::optional<int> o1, // empty
                       o2 = 1, // init from rvalue
                       o3 = o2; // copy-constructor
 
    // calls std::string( initializer_list<CharT> ) constructor
    std::optional<std::string> o4(std::in_place, {'a', 'b', 'c'});
 
    // calls std::string( size_type count, CharT ch ) constructor
    std::optional<std::string> o5(std::in_place, 3, 'A');
 
    // Move-constructed from std::string using deduction guide to pick the type
 
    std::optional o6(std::string{"deduction"});
 
    std::cout << *o2 << ' ' << *o3 << ' ' << *o4 << ' ' << *o5  << ' ' << *o6 << '\n';
}

```

Output:

```
1 1 abc AAA deduction

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3836 | C++17 | when constructing an std::optional<bool> from std::optional<U>, the overload resolution would select overload (8) if `U` is not bool | always selects the converting copy/move constructor in this case |
| P0602R4 | C++17 | copy/move constructors might not be trivial even if underlying constructor is trivial | required to propagate triviality |
| P2231R1 | C++20 | converting constructors (4,5) from another `std::optional` was not constexpr while the required operations can be in C++20 | made constexpr |

### See also

|  |  |
| --- | --- |
| make_optional(C++17) | creates an `optional` object   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/optional/optional&oldid=172885>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 June 2024, at 15:34.