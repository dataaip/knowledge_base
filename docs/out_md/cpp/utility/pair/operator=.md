# std::pair<T1,T2>::operator=

From cppreference.com
< cpp‎ | utility‎ | pair
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

std::pair

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| pair::pair | | | | |
| ****pair::operator=**** | | | | |
| pair::swap(C++11) | | | | |
| Non-member functions | | | | |
| make_pair | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | |
| swap(std::pair)(C++11) | | | | |
| get(std::pair)(C++11) | | | | |
| Helper classes | | | | |
| tuple_size<std::pair>(C++11) | | | | |
| tuple_element<std::pair>(C++11) | | | | |
| basic_common_reference<std::pair>(C++23) | | | | |
| common_type<std::pair>(C++23) | | | | |
| formatter<std::pair>(C++23) | | | | |
| piecewise_construct_t(C++11) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| pair& operator=( const pair& other ); |  | (until C++20) |
| constexpr pair& operator=( const pair& other ); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
| constexpr const pair& operator=( const pair& other ) const; | (2) | (since C++23) |
|  |  |  |
| --- | --- | --- |
|  | (3) |  |
| template< class U1, class U2 >  pair& operator=( const pair<U1, U2>& other ); |  | (until C++20) |
| template< class U1, class U2 >  constexpr pair& operator=( const pair<U1, U2>& other ); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
| template< class U1, class U2 >  constexpr const pair& operator=( const pair<U1, U2>& other ) const; | (4) | (since C++23) |
|  |  |  |
| --- | --- | --- |
|  | (5) |  |
| pair& operator=( pair&& other ) noexcept(/\* see below \*/); |  | (since C++11)  (until C++20) |
| constexpr pair& operator=( pair&& other ) noexcept(/\* see below \*/); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
| constexpr const pair& operator=( pair&& other ) const; | (6) | (since C++23) |
|  |  |  |
| --- | --- | --- |
|  | (7) |  |
| template< class U1, class U2 >  pair& operator=( pair<U1, U2>&& p ); |  | (since C++11)  (until C++20) |
| template< class U1, class U2 >  constexpr pair& operator=( pair<U1, U2>&& p ); |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
| template< class U1, class U2 >  constexpr const pair& operator=( pair<U1, U2>&& p ) const; | (8) | (since C++23) |
| template< pair-like P >  constexpr pair& operator=( P&& u ); | (9) | (since C++23) |
| template< pair-like P >  constexpr const pair& operator=( P&& u ) const; | (10) | (since C++23) |
|  |  |  |

Replaces the contents of the pair.

1) Copy assignment operator. Replaces the contents with a copy of the contents of other.

|  |  |
| --- | --- |
| The assignment operator is implicitly declared. Using this assignment operator makes the program ill-formed if either `T1` or `T2` is a const-qualified type, or a reference type, or a class type with an inaccessible copy assignment operator, or an array type of such class. | (until C++11) |
| This overload is defined as deleted if either std::is_copy_assignable<T1>::value or std::is_copy_assignable<T2>::value is false. | (since C++11) |

2) Copy assignment operator for const-qualified operand. This overload participates in overload resolution only if std::is_copy_assignable_v<const T1> and std::is_copy_assignable_v<const T2> are both true.3) Assigns other.first to `first` and other.second to `second`.

|  |  |
| --- | --- |
| This overload participates in overload resolution only if std::is_assignable<T1&, const U1&>::value and std::is_assignable<T2&, const U2&>::value are both true. | (since C++11) |

4) Assigns other.first to `first` and other.second to `second`. This overload participates in overload resolution only if std::is_assignable_v<const T1&, const U1&> and std::is_assignable_v<const T2&, const U2&> are both true.5) Move assignment operator. Replaces the contents with those of other using move semantics. This overload participates in overload resolution only if std::is_move_assignable<T1>::value and std::is_move_assignable<T2>::value are both true.6) Move assignment operator for const-qualified operand. This overload participates in overload resolution only if std::is_assignable_v<const T1&, T1> and std::is_assignable_v<const T2&, T2> are both true.7) Assigns std::forward<U1>(p.first) to `first` and std::forward<U2>(p.second) to `second`. This overload participates in overload resolution only if std::is_assignable<T1&, U1>::value and std::is_assignable<T2&, U2>::value are both true.8) Assigns std::forward<U1>(p.first) to `first` and std::forward<U2>(p.second) to `second`. This overload participates in overload resolution only if std::is_assignable_v<const T1&, U1> and std::is_assignable_v<const T2&, U2> are both true.9) Assigns std::get<0>(std::forward<P>(u)) to `first` and std::get<1>(std::forward<P>(u)) to `second`. This overload participates in overload resolution only if

- std::same_as<std::remove_cvref_t<P>, std::pair> is false,
- std::remove_cvref_t<P> is not a specialization of std::ranges::subrange,
- std::is_assignable_v<T1&, decltype(std::get<0>(std::forward<P>(p)))> is true, and
- std::is_assignable_v<T1&, decltype(std::get<1>(std::forward<P>(p)))> is true.
10) Assigns std::get<0>(std::forward<P>(u)) to `first` and std::get<1>(std::forward<P>(u)) to `second`. This overload participates in overload resolution only if

- std::same_as<std::remove_cvref_t<P>, std::pair> is false,
- std::remove_cvref_t<P> is not a specialization of std::ranges::subrange,
- std::is_assignable_v<const T1&, decltype(std::get<0>(std::forward<P>(p)))> is true, and
- std::is_assignable_v<const T1&, decltype(std::get<1>(std::forward<P>(p)))> is true.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | pair of values to replace the contents of this pair |
| p | - | pair of values of possibly different types to replace the contents of this pair |
| u | - | **pair-like** object of values to replace the contents of this pair |
| Type requirements | | |
| -`T1` must meet the requirements of CopyAssignable from `U1`. (until C++11) | | |
| -`T2` must meet the requirements of CopyAssignable from `U2`. (until C++11) | | |

### Return value

\*this

### Exceptions

1-4) May throw implementation-defined exceptions.5)noexcept specification:noexcept(  

std::is_nothrow_move_assignable<T1>::value &&  
    std::is_nothrow_move_assignable<T2>::value

)6-10) May throw implementation-defined exceptions.

### Example

Run this code

```
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
 
template<class Os, class T>
Os& operator<<(Os& os, const std::vector<T>& v)
{
    os << '{';
    for (std::size_t t = 0; t != v.size(); ++t)
        os << v[t] << (t + 1 < v.size() ? ", " : "");
    return os << '}';
}
 
template<class Os, class U1, class U2>
Os& operator<<(Os& os, const std::pair<U1, U2>& pair)
{
    return os << '{' << pair.first << ", " << pair.second << '}';
}
 
int main()
{
    std::pair<int, std::vector<int>> p{1, {2}}, q{2, {5, 6}};
 
    p = q; // (1) operator=(const pair& other);
    std::cout << std::setw(23) << std::left
              << "(1) p = q;"
              << "p: " << p << "     q: " << q << '\n';
 
    std::pair<short, std::vector<int>> r{4, {7, 8, 9}};
    p = r; // (3) operator=(const pair<U1, U2>& other);
    std::cout << std::setw(23)
              << "(3) p = r;"
              << "p: " << p << "  r: " << r << '\n';
 
    p = std::pair<int, std::vector<int>>{3, {4}};
    p = std::move(q); // (5) operator=(pair&& other);
    std::cout << std::setw(23)
              << "(5) p = std::move(q);"
              << "p: " << p << "     q: " << q << '\n';
 
    p = std::pair<int, std::vector<int>>{5, {6}};
    p = std::move(r); // (7) operator=(pair<U1, U2>&& other);
    std::cout << std::setw(23)
              << "(7) p = std::move(r);"
              << "p: " << p << "  r: " << r << '\n';
}

```

Output:

```

(1) p = q;             p: {2, {5, 6}}     q: {2, {5, 6}}
(3) p = r;             p: {4, {7, 8, 9}}  r: {4, {7, 8, 9}}
(5) p = std::move(q);  p: {2, {5, 6}}     q: {2, {}}
(7) p = std::move(r);  p: {4, {7, 8, 9}}  r: {4, {}}


```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 885 | C++98 | missing heterogeneous copy assignment | added (as overload (3)) |
| LWG 2729 | C++11 | `pair::operator=` was unconstrained and might result in unnecessary undefined behavior | constrained |

### See also

|  |  |
| --- | --- |
| operator= | assigns the contents of one `tuple` to another   (public member function of `std::tuple<Types...>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/pair/operator%3D&oldid=161398>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 October 2023, at 21:28.