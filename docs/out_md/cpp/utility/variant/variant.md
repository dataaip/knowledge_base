# std::variant<Types...>::variant

From cppreference.com
< cpp‎ | utility‎ | variant
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

std::variant

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****variant::variant**** | | | | |
| variant::~variant | | | | |
| variant::operator= | | | | |
| Observers | | | | |
| variant::index | | | | |
| variant::valueless_by_exception | | | | |
| Modifiers | | | | |
| variant::emplace | | | | |
| variant::swap | | | | |
| Visitation | | | | |
| variant::visit(C++26) | | | | |
| Non-member functions | | | | |
| visit(std::variant) | | | | |
| holds_alternative | | | | |
| get(std::variant) | | | | |
| get_if | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++20) | | | | |
| swap(std::variant) | | | | |
| Helper classes | | | | |
| monostate | | | | |
| bad_variant_access | | | | |
| variant_size | | | | |
| variant_alternative | | | | |
| hash<std::variant> | | | | |
| Helper objects | | | | |
| variant_npos | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr variant() noexcept(/\* see below \*/); | (1) | (since C++17) |
| constexpr variant( const variant& other ); | (2) | (since C++17) |
| constexpr variant( variant&& other ) noexcept(/\* see below \*/); | (3) | (since C++17) |
| template< class T >  constexpr variant( T&& t ) noexcept(/\* see below \*/); | (4) | (since C++17) |
| template< class T,  class... Args >  constexpr explicit variant( std::in_place_type_t<T>,                             Args&&... args ); | (5) | (since C++17) |
| template< class T,  class U,            class... Args >  constexpr explicit variant( std::in_place_type_t<T>,                              std::initializer_list<U> il,                             Args&&... args ); | (6) | (since C++17) |
| template< std::size_t I,  class... Args >  constexpr explicit variant( std::in_place_index_t<I>,                             Args&&... args ); | (7) | (since C++17) |
| template< std::size_t I,  class U,            class... Args >  constexpr explicit variant( std::in_place_index_t<I>,                              std::initializer_list<U> il,                             Args&&... args ); | (8) | (since C++17) |
|  |  |  |

Constructs a new `variant` object.

1) Default constructor. Constructs a `variant` holding the value-initialized value of the first alternative (index() is zero).

- This constructor is constexpr if and only if the value initialization of the alternative type `T_0` would satisfy the requirements for a constexpr function.
- This overload participates in overload resolution only if std::is_default_constructible_v<T_0> is true.
2) Copy constructor. If other is not valueless_by_exception, constructs a `variant` holding the same alternative as other and direct-initializes the contained value with \*std::get_if<other.index()>(std::addressof(other)). Otherwise, initializes a valueless_by_exception variant.

- This constructor is defined as deleted unless std::is_copy_constructible_v<T_i> is true for all `T_i` in Types....
- It is trivial if std::is_trivially_copy_constructible_v<T_i> is true for all `T_i` in Types....
3) Move constructor. If other is not valueless_by_exception, constructs a `variant` holding the same alternative as other and direct-initializes the contained value with std::move(\*std::get_if<other.index()>(std::addressof(other))). Otherwise, initializes a valueless_by_exception variant.

- This overload participates in overload resolution only if std::is_move_constructible_v<T_i> is true for all `T_i` in Types....
- It is trivial if std::is_trivially_move_constructible_v<T_i> is true for all `T_i` in Types....
4) Converting constructor. Constructs a `variant` holding the alternative type `T_j` that would be selected by overload resolution for the expression F(std::forward<T>(t)) if there was an overload of imaginary function `F(T_i)` for each `T_i` in Types..., except that narrowing conversions aren't considered.

Formally:

:   - An overload F(T_i) is only considered if the declaration T_i x[] = { std::forward<T>(t) }; is valid for some invented variable `x`.

 Direct-initializes the contained value as if by direct non-list-initialization from std::forward<T>(t).

- This overload participates in overload resolution only if
  - sizeof...(Types) > 0,
  - std::decay_t<T>(until C++20)std::remove_cvref_t<T>(since C++20) is neither the same type as `variant`, nor a specialization of std::in_place_type_t, nor a specialization of std::in_place_index_t,
  - std::is_constructible_v<T_j, T> is true,
  - and the expression F(std::forward<T>(t)) (with F being the above-mentioned set of imaginary functions) is well formed.
- This constructor is a constexpr constructor if `T_j`'s selected constructor is a constexpr constructor.

```
std::variant<std::string> v("abc"); // OK
std::variant<std::string, std::string> w("abc"); // ill-formed
std::variant<std::string, const char*> x("abc"); // OK, chooses const char*
std::variant<std::string, bool> y("abc"); // OK, chooses string; bool is not a candidate
std::variant<float, long, double> z = 0; // OK, holds long
                                         // float and double are not candidates

```

5) Constructs a `variant` with the specified alternative `T` and initializes the contained value with the arguments std::forward<Args>(args)....

- If `T`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor.
- This overload participates in overload resolution only if there is exactly one occurrence of `T` in Types... and std::is_constructible_v<T, Args...> is true.
6) Constructs a `variant` with the specified alternative `T` and initializes the contained value with the arguments il, std::forward<Args>(args)....

- If `T`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor.
- This overload participates in overload resolution only if there is exactly one occurrence of `T` in Types... and std::is_constructible_v<T, initializer_list<U>&, Args...> is true.
7) Constructs a `variant` with the alternative `T_i` specified by the index `I` and initializes the contained value with the arguments std::forward<Args>(args)....

- If `T_i`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor.
- This overload participates in overload resolution only if I < sizeof...(Types) and std::is_constructible_v<T_i, Args...> is true.
8) Constructs a `variant` with the alternative `T_i` specified by the index `I` and initializes the contained value with the arguments il, std::forward<Args>(args)....

- If `T_i`'s selected constructor is a constexpr constructor, this constructor is also a constexpr constructor.
- This overload participates in overload resolution only if I < sizeof...(Types) and std::is_constructible_v<T_i, std::initializer_list<U>&, Args...> is true.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another `variant` object whose contained value to copy/move |
| t | - | value to initialize the contained value with |
| args... | - | arguments to initialize the contained value with |
| il | - | initializer list to initialize the contained value with |

### Exceptions

1) May throw any exception thrown by the value initialization of the first alternative.noexcept specification:noexcept(std::is_nothrow_default_constructible_v<T_0>)2) May throw any exception thrown by direct-initializing any `T_i` in Types....3) May throw any exception thrown by move-constructing any `T_i` in Types....noexcept specification:noexcept((std::is_nothrow_move_constructible_v<Types> && ...))4) May throw any exception thrown by the initialization of the selected alternative `T_j`.noexcept specification:noexcept(std::is_nothrow_constructible_v<T_j, T>)5-8) May throw any exception thrown by calling the selected constructor of the selected alternative.

### Notes

MSVC STL initially treated P0608R3 as a change in C++20. As of VS 2022 17.12, MSVC STL also treats P0608R3 as a defect report against C++17.

### Example

Run this code

```
#include <cassert>
#include <iostream>
#include <string>
#include <variant>
#include <vector>
 
using vector_t = std::vector<int>;
 
auto& operator<<(auto& out, const vector_t& v)
{
    out << "{ ";
    for (int e : v)
        out << e << ' ';
    return out << '}';
}
 
int main()
{
    // value-initializes first alternative
    std::variant<int, std::string> var0;
    assert(std::holds_alternative<int>(var0) and
           var0.index() == 0 and
           std::get<int>(var0) == 0);
 
    // initializes first alternative with std::string{"STR"};
    std::variant<std::string, int> var1{"STR"};
    assert(var1.index() == 0);
    std::cout << "1) " << std::get<std::string>(var1) << '\n';
 
    // initializes second alternative with int == 42;
    std::variant<std::string, int> var2{42};
    assert(std::holds_alternative<int>(var2));
    std::cout << "2) " << std::get<int>(var2) << '\n';
 
    // initializes first alternative with std::string{4, 'A'};
    std::variant<std::string, vector_t, float> var3
    {
        std::in_place_type<std::string>, 4, 'A'
    };
    assert(var3.index() == 0);
    std::cout << "3) " << std::get<std::string>(var3) << '\n';
 
    // initializes second alternative with std::vector{1,2,3,4,5};
    std::variant<std::string, vector_t, char> var4
    {
        std::in_place_type<vector_t>, {1, 2, 3, 4, 5}
    };
    assert(var4.index() == 1);
    std::cout << "4) " << std::get<vector_t>(var4) << '\n';
 
    // initializes first alternative with std::string{"ABCDE", 3};
    std::variant<std::string, vector_t, bool> var5 {std::in_place_index<0>, "ABCDE", 3};
    assert(var5.index() == 0);
    std::cout << "5) " << std::get<std::string>(var5) << '\n';
 
    // initializes second alternative with std::vector(4, 42);
    std::variant<std::string, vector_t, char> var6 {std::in_place_index<1>, 4, 42};
    assert(std::holds_alternative<vector_t>(var6));
    std::cout << "6) " << std::get<vector_t>(var6) << '\n';
}

```

Output:

```
1) STR
2) 42
3) AAAA
4) { 1 2 3 4 5 }
5) ABC
6) { 42 42 42 42 }

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2901 | C++17 | allocator-aware constructors provided but `variant` can't properly support allocators | constructors removed |
| P0739R0 | C++17 | converting constructor template interacts poorly with class template argument deduction | constraint added |
| LWG 3024 | C++17 | copy constructor doesn't participate in overload resolution if any member type is not copyable | defined as deleted instead |
| P0602R4 | C++17 | copy/move constructors may not be trivial even if underlying constructors are trivial | required to propagate triviality |
| P0608R3 | C++17 | converting constructor blindly assembles an overload set, leading to unintended conversions | narrowing and boolean conversions not considered |
| P1957R2 | C++17 | converting constructor for bool did not allow implicit conversion | Pointer to bool conversion is narrowing and converting constructor has no exception for bool |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/variant/variant&oldid=172821>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 June 2024, at 01:25.