# std::strong_ordering

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | ****strong_ordering****(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<compare>` |  |  |
| class strong_ordering; |  | (since C++20) |
|  |  |  |

The class type `std::strong_ordering` is the result type of a three-way comparison that:

- Admits all six relational operators (`==`, `!=`, `<`, `<=`, `>`, `>=`).

- Implies substitutability: if a is equivalent to b, f(a) is also equivalent to f(b), where f denotes a function that reads only comparison-salient state that is accessible via the argument's public const members. In other words, equivalent values are indistinguishable.
- Does not allow incomparable values: exactly one of a < b, a == b, or a > b must be true.

### Constants

The type `std::strong_ordering` has four valid values, implemented as const static data members of its type:

|  |  |
| --- | --- |
| Name | Definition |
| inline constexpr std::strong_ordering less[static] | a valid value indicating less-than (ordered before) relationship   (public static member constant) |
| inline constexpr std::strong_ordering equivalent[static] | a valid value indicating equivalence (neither ordered before nor ordered after), the same as `equal`   (public static member constant) |
| inline constexpr std::strong_ordering equal[static] | a valid value indicating equivalence (neither ordered before nor ordered after), the same as `equivalent`   (public static member constant) |
| inline constexpr std::strong_ordering greater[static] | a valid value indicating greater-than (ordered after) relationship   (public static member constant) |

### Conversions

`std::strong_ordering` is the strongest of the three comparison categories: it is not implicitly-convertible from any other category and is implicitly-convertible to the other two.

|  |  |
| --- | --- |
| ****operator partial_ordering**** | implicit conversion to std::partial_ordering   (public member function) |

## std::strong_ordering::operator partial_ordering

|  |  |  |
| --- | --- | --- |
| constexpr operator partial_ordering() const noexcept; |  |  |
|  |  |  |

### Return value

std::partial_ordering::less if `v` is `less`,
std::partial_ordering::greater if `v` is `greater`,
std::partial_ordering::equivalent if `v` is `equal` or `equivalent`.

|  |  |
| --- | --- |
| ****operator weak_ordering**** | implicit conversion to std::weak_ordering   (public member function) |

## std::strong_ordering::operator weak_ordering

|  |  |  |
| --- | --- | --- |
| constexpr operator weak_ordering() const noexcept; |  |  |
|  |  |  |

### Return value

std::weak_ordering::less if `v` is `less`,
std::weak_ordering::greater if `v` is `greater`,
std::weak_ordering::equivalent if `v` is `equal` or `equivalent`.

### Comparisons

Comparison operators are defined between values of this type and literal ​0​. This supports the expressions a <=> b == 0 or a <=> b < 0 that can be used to convert the result of a three-way comparison operator to a boolean relationship; see std::is_eq, std::is_lt, etc.

These functions are not visible to ordinary unqualified or qualified lookup, and can only be found by argument-dependent lookup when `std::strong_ordering` is an associated class of the arguments.

The behavior of a program that attempts to compare a `strong_ordering` with anything other than the integer literal ​0​ is undefined.

|  |  |
| --- | --- |
| ****operator==operator<operator>operator<=operator>=operator<=>**** | compares with zero or a `strong_ordering`   (function) |

## operator==

|  |  |  |
| --- | --- | --- |
| friend constexpr bool  operator==( strong_ordering v, /\*unspecified\*/ u ) noexcept; | (1) |  |
| friend constexpr bool  operator==( strong_ordering v, strong_ordering w ) noexcept = default; | (2) |  |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| v, w | - | `std::strong_ordering` values to check |
| u | - | an unused parameter of any type that accepts literal zero argument |

### Return value

1) true if `v` is `equivalent` or `equal`, false if `v` is `less` or `greater`2) true if both parameters hold the same value, false otherwise. Note that `equal` is the same as `equivalent`.

## operator<

|  |  |  |
| --- | --- | --- |
| friend constexpr bool operator<( strong_ordering v, /\*unspecified\*/ u ) noexcept; | (1) |  |
| friend constexpr bool operator<( /\*unspecified\*/ u, strong_ordering v ) noexcept; | (2) |  |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| v | - | a `std::strong_ordering` value to check |
| u | - | an unused parameter of any type that accepts literal zero argument |

### Return value

1) true if `v` is `less`, and false if `v` is `greater`, `equivalent`, or `equal`2) true if `v` is `greater`, and false if `v` is `less`, `equivalent`, or `equal`

## operator<=

|  |  |  |
| --- | --- | --- |
| friend constexpr bool operator<=( strong_ordering v, /\*unspecified\*/ u ) noexcept; | (1) |  |
| friend constexpr bool operator<=( /\*unspecified\*/ u, strong_ordering v ) noexcept; | (2) |  |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| v | - | a `std::strong_ordering` value to check |
| u | - | an unused parameter of any type that accepts literal zero argument |

### Return value

1) true if `v` is `less`, `equivalent`, or `equal`, and false if `v` is `greater`2) true if `v` is `greater`, `equivalent`, or `equal`, and false if `v` is `less`

## operator>

|  |  |  |
| --- | --- | --- |
| friend constexpr bool operator>( strong_ordering v, /\*unspecified\*/ u ) noexcept; | (1) |  |
| friend constexpr bool operator>( /\*unspecified\*/ u, strong_ordering v ) noexcept; | (2) |  |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| v | - | a `std::strong_ordering` value to check |
| u | - | an unused parameter of any type that accepts literal zero argument |

### Return value

1) true if `v` is `greater`, and false if `v` is `less`, `equivalent`, or `equal`2) true if `v` is `less`, and false if `v` is `greater`, `equivalent`, or `equal`

## operator>=

|  |  |  |
| --- | --- | --- |
| friend constexpr bool operator>=( strong_ordering v, /\*unspecified\*/ u ) noexcept; | (1) |  |
| friend constexpr bool operator>=( /\*unspecified\*/ u, strong_ordering v ) noexcept; | (2) |  |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| v | - | a `std::strong_ordering` value to check |
| u | - | an unused parameter of any type that accepts literal zero argument |

### Return value

1) true if `v` is `greater`, `equivalent`, or `equal`, and false if `v` is `less`2) true if `v` is `less`, `equivalent`, or `equal`, and false if `v` is `greater`

## operator<=>

|  |  |  |
| --- | --- | --- |
| friend constexpr strong_ordering  operator<=>( strong_ordering v, /\*unspecified\*/ u ) noexcept; | (1) |  |
| friend constexpr strong_ordering  operator<=>( /\*unspecified\*/ u, strong_ordering v ) noexcept; | (2) |  |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| v | - | a `std::strong_ordering` value to check |
| u | - | an unused parameter of any type that accepts literal zero argument |

### Return value

1) v.2) `greater` if `v` is `less`, `less` if `v` is `greater`, otherwise `v`.

### Example

Run this code

```
#include <compare>
#include <iostream>
 
struct Point
{
    int x{}, y{};
 
    friend constexpr std::strong_ordering operator<=>(Point lhs, Point rhs)
    {
        if (lhs.x < rhs.x or (lhs.x == rhs.x and lhs.y < rhs.y))
            return std::strong_ordering::less;
        if (lhs.x > rhs.x or (lhs.x == rhs.x and lhs.y > rhs.y))
            return std::strong_ordering::greater;
        return std::strong_ordering::equivalent;
    }
 
    friend std::ostream& operator<<(std::ostream& os, Point s)
    {
        return os << '(' << s.x << ',' << s.y << ')';
    }
};
 
void print_three_way_comparison(const auto& p, const auto& q)
{
    const auto cmp{p <=> q};
    std::cout << p
              << (cmp < 0 ? " <  " : cmp > 0 ? " >  " : " == " ) // compares with 0
              << q << '\n';
}
 
void print_two_way_comparison(const auto& p, const auto& q)
{
    std::cout << p
              << (p < q ? " <  " : p > q ? " >  " : " == ") // compares p and q
              << q << '\n';
}
 
int main()
{
    const Point p1{0, 1}, p2{0, 1}, p3{0, 2};
 
    print_three_way_comparison(p1, p2);
    print_two_way_comparison(p1, p2);
 
    print_three_way_comparison(p2, p3);
    print_two_way_comparison(p2, p3);
 
    print_three_way_comparison(p3, p2);
    print_two_way_comparison(p3, p2);
}

```

Output:

```
(0,1) == (0,1)
(0,1) == (0,1)
(0,1) <  (0,2)
(0,1) <  (0,2)
(0,2) >  (0,1)
(0,2) >  (0,1)

```

### See also

|  |  |
| --- | --- |
| weak_ordering(C++20) | the result type of 3-way comparison that supports all 6 operators and is not substitutable   (class) |
| partial_ordering(C++20) | the result type of 3-way comparison that supports all 6 operators, is not substitutable, and allows incomparable values   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/compare/strong_ordering&oldid=173503>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 July 2024, at 05:01.