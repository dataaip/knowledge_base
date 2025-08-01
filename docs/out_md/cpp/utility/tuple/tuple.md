# std::tuple<Types...>::tuple

From cppreference.com
< cpp‎ | utility‎ | tuple
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

std::tuple

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****tuple::tuple**** | | | | |
| tuple::operator= | | | | |
| tuple::swap | | | | |
| Non-member functions | | | | |
| make_tuple | | | | |
| tie | | | | |
| forward_as_tuple | | | | |
| tuple_cat | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | |
| swap(std::tuple) | | | | |
| get(std::tuple) | | | | |
| Helper concepts | | | | |
| `tuple-like`(C++23) | | | | |
| Helper classes | | | | |
| tuple_size<std::tuple> | | | | |
| tuple_element<std::tuple> | | | | |
| uses_allocator<std::tuple> | | | | |
| basic_common_reference<std::tuple>(C++23) | | | | |
| common_type<std::tuple>(C++23) | | | | |
| formatter<std::tuple>(C++23) | | | | |
| ignore | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<tuple>` |  |  |
| constexpr tuple(); | (1) | (since C++11)  (conditionally explicit) |
| tuple( const Types&... args ); | (2) | (since C++11)  (constexpr since C++14) (conditionally explicit) |
| template< class... UTypes >  tuple( UTypes&&... args ); | (3) | (since C++11)  (constexpr since C++14) (conditionally explicit) |
| template< class... UTypes >  constexpr tuple( tuple<UTypes...>& other ); | (4) | (since C++23)  (conditionally explicit) |
| template< class... UTypes >  tuple( const tuple<UTypes...>& other ); | (5) | (since C++11)  (constexpr since C++14) (conditionally explicit) |
| template< class... UTypes >  tuple( tuple<UTypes...>&& other ); | (6) | (since C++11)  (constexpr since C++14) (conditionally explicit) |
| template< class... UTypes >  constexpr tuple( const tuple<UTypes...>&& other ); | (7) | (since C++23)  (conditionally explicit) |
| template< class U1, class U2 >  constexpr tuple( std::pair<U1, U2>& p ); | (8) | (since C++23)  (conditionally explicit) |
| template< class U1, class U2 >  tuple( const std::pair<U1, U2>& p ); | (9) | (since C++11)  (constexpr since C++14) (conditionally explicit) |
| template< class U1, class U2 >  tuple( std::pair<U1, U2>&& p ); | (10) | (since C++11)  (constexpr since C++14) (conditionally explicit) |
| template< class U1, class U2 >  constexpr tuple( const std::pair<U1, U2>&& p ); | (11) | (since C++23)  (conditionally explicit) |
| template< tuple-like UTuple >  constexpr tuple( UTuple&& u ); | (12) | (since C++23)  (conditionally explicit) |
| tuple( const tuple& other ) = default; | (13) | (since C++11) |
| tuple( tuple&& other ) = default; | (14) | (since C++11) |
| Allocator-extended constructors |  |  |
| template< class Alloc >  tuple( std::allocator_arg_t, const Alloc& a ); | (15) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc >  tuple( std::allocator_arg_t, const Alloc& a, const Types&... args ); | (16) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc, class... UTypes >  tuple( std::allocator_arg_t, const Alloc& a,        UTypes&&... args ); | (17) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc, class... UTypes >  constexpr tuple( std::allocator_arg_t, const Alloc& a,                  tuple<UTypes...>& other ); | (18) | (since C++23)  (conditionally explicit) |
| template< class Alloc, class... UTypes >  tuple( std::allocator_arg_t, const Alloc& a, const tuple<UTypes...>& other ); | (19) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc, class... UTypes >  tuple( std::allocator_arg_t, const Alloc& a,        tuple<UTypes...>&& other ); | (20) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc, class... UTypes >  constexpr tuple( std::allocator_arg_t, const Alloc& a, const tuple<UTypes...>&& other ); | (21) | (since C++23)  (conditionally explicit) |
| template< class Alloc, class U1, class U2 >  constexpr tuple( std::allocator_arg_t, const Alloc& a, std::pair<U1, U2>& p ); | (22) | (since C++23)  (conditionally explicit) |
| template< class Alloc, class U1, class U2 >  tuple( std::allocator_arg_t, const Alloc& a, const std::pair<U1, U2>& p ); | (23) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc, class U1, class U2 >  tuple( std::allocator_arg_t, const Alloc& a, std::pair<U1, U2>&& p ); | (24) | (since C++11)  (constexpr since C++20) (conditionally explicit) |
| template< class Alloc, class U1, class U2 >  constexpr tuple( std::allocator_arg_t, const Alloc& a, const std::pair<U1, U2>&& p ); | (25) | (since C++23)  (conditionally explicit) |
| template< class Alloc, tuple-like UTuple >  constexpr tuple( std::allocator_arg_t, const Alloc& a, UTuple&& u ); | (26) | (since C++23)  (conditionally explicit) |
| template< class Alloc >  tuple( std::allocator_arg_t, const Alloc& a, const tuple& other ); | (27) | (since C++11)  (constexpr since C++20) |
| template< class Alloc >  tuple( std::allocator_arg_t, const Alloc& a,        tuple&& other ); | (28) | (since C++11)  (constexpr since C++20) |
|  |  |  |

Constructs a new tuple.

In the descriptions that follow, let

- i be in the range ``​0​`,`sizeof...(Types)`)` in order,
- `Ti` be the `i`th type in `Types`, and
- `Ui` be the `i`th type in a template parameter pack named `UTypes`,

where indexing is zero-based.

1) Default constructor. [Value-initializes all elements, if any. The default constructor is trivial if sizeof...(Types) == 0.

- This overload participates in overload resolution only if std::is_default_constructible<Ti>::value is true for all i.
- The constructor is explicit if and only if `Ti` is not copy-list-initializable from {} for at least one i.
2) Direct constructor. Initializes each element of the tuple with the corresponding parameter.

- This overload participates in overload resolution only if sizeof...(Types) >= 1 and std::is_copy_constructible<Ti>::value is true for all i.
- This constructor is explicit if and only if std::is_convertible<const Ti&, Ti>::value is false for at least one i.
3) Converting constructor. Initializes each element of the tuple with the corresponding value in std::forward<UTypes>(args).

- This overload participates in overload resolution only if
  - sizeof...(Types) == sizeof...(UTypes),
  - sizeof...(Types) >= 1,
  - std::is_constructible<Ti, Ui>::value is true for all i, and
  - let `D` be std::decay<U0>::type(until C++20)std::remove_cvref_t<U0>(since C++20),
    - if sizeof...(Types) == 1, then `D` is not `std::tuple`, otherwise,
    - if sizeof...(Types) == 2 or sizeof...(Types) == 3, then either `D` is not std::allocator_arg_t, or `T0` is std::allocator_arg_t.
- The constructor is explicit if and only if std::is_convertible<Ui, Ti>::value is false for at least one i.

|  |  |
| --- | --- |
| - This constructor is defined as deleted if the initialization of any element that is a reference would bind it to a temporary object. | (since C++23) |

4-7) Converting constructor. Initializes each element of the tuple with the corresponding element of other.

Formally, let FWD(other) be std::forward<decltype(other)>(other), for all i, initializes `i`th element of the tuple with std::get<i>(FWD(other)).

- This overload participates in overload resolution only if
  - sizeof...(Types) == sizeof...(UTypes),
  - std::is_constructible_v<Ti, decltype(std::get<i>(FWD(other)))> is true for all i, and
  - either
    - sizeof...(Types) is not 1, or
    - (when `Types...` expands to `T` and `UTypes...` expands to `U`) std::is_convertible_v<decltype(other), T>, std::is_constructible_v<T, decltype(other)>, and std::is_same_v<T, U> are all false.
- These constructors are explicit if and only if std::is_convertible_v<decltype(std::get<i>(FWD(other))), Ti> is false for at least one i.

|  |  |
| --- | --- |
| - These constructors are defined as deleted if the initialization of any element that is a reference would bind it to a temporary object. | (since C++23) |

8-11) Pair constructor. Constructs a 2-element tuple with each element constructed from the corresponding element of p.

Formally, let FWD(p) be std::forward<decltype(p)>(p), initializes the first element with std::get<0>(FWD(p)) and the second element with std::get<1>(FWD(p)).

- This overload participates in overload resolution only if
  - sizeof...(Types) == 2,
  - std::is_constructible_v<T0, decltype(std::get<0>(FWD(p)))> is true, and
  - std::is_constructible_v<T1, decltype(std::get<1>(FWD(p)))> is true.
- The constructor is explicit if and only if std::is_convertible_v<decltype(std::get<0>(FWD(p))), T0> or std::is_convertible_v<decltype(std::get<1>(FWD(p))), T1> is false.

|  |  |
| --- | --- |
| - These constructors are defined as deleted if the initialization of any element that is a reference would bind it to a temporary object. | (since C++23) |

12) `tuple-like` constructor. Constructs a tuple with each element constructed from the corresponding element of u.

Formally, for all i, initializes `i`th element of the tuple with std::get<i>(std::forward<UTuple>(u)).

- This overload participates in overload resolution only if
  - std::same_as<std::remove_cvref_t<UTuple>, std::tuple> is false,
  - std::remove_cvref_t<UTuple> is not a specialization of std::ranges::subrange,
  - sizeof...(Types) equals std::tuple_size_v<std::remove_cvref_t<UTuple>>,
  - std::is_constructible_v<Ti, decltype(std::get<i>(std::forward<UTuple>(u)))> is true for all i, and
  - either
    - sizeof...(Types) is not 1, or
    - (when `Types...` expands to `T`) std::is_convertible_v<UTuple, T> and std::is_constructible_v<T, UTuple> are both false.
- This constructor is defined as deleted if the initialization of any element that is a reference would bind it to a temporary object.
13) Implicitly-defined copy constructor. Initializes each element of the tuple with the corresponding element of other.

- This constructor is constexpr if every operation it performs is constexpr. For the empty tuple std::tuple<>, it is constexpr.
- std::is_copy_constructible<Ti>::value must be true for all i, otherwise the behavior is undefined(until C++20)the program is ill-formed(since C++20).
14) Implicitly-defined move constructor. For all i, initializes the `i`th element of the tuple with std::forward<Ui>(std::get<i>(other)).

- This constructor is constexpr if every operation it performs is constexpr. For the empty tuple std::tuple<>, it is constexpr.
- std::is_move_constructible<Ti>::value must be true for all i, otherwise the behavior is undefined(until C++20)this overload does not participate in overload resolution(since C++20).
15-28) Identical to (1-14) except each element is created by uses-allocator construction, that is, the Allocator object a is passed as an additional argument to the constructor of each element for which std::uses_allocator<Ui, Alloc>::value is true.

### Parameters

|  |  |  |
| --- | --- | --- |
| args | - | values used to initialize each element of the tuple |
| other | - | the tuple of values used to initialize each element of the tuple |
| p | - | the pair of values used to initialize both elements of the 2-tuple |
| u | - | the `tuple-like` object of values used to initialize each element of the tuple |
| a | - | the allocator to use in uses-allocator construction |

### Notes

Conditionally-explicit constructors make it possible to construct a tuple in copy-initialization context using list-initialization syntax:

```
std::tuple<int, int> foo_tuple() 
{
    // return {1, -1};             // Error before N4387
    return std::make_tuple(1, -1); // Always works
}

```

Note that if some element of the list is not implicitly convertible to the corresponding element of the target tuple, the constructors become explicit:

```
using namespace std::chrono;
void launch_rocket_at(std::tuple<hours, minutes, seconds>);
 
launch_rocket_at({hours(1), minutes(2), seconds(3)}); // OK
launch_rocket_at({1, 2, 3}); // Error: int is not implicitly convertible to duration
launch_rocket_at(std::tuple<hours, minutes, seconds>{1, 2, 3}); // OK

```

### Example

Run this code

```
#include <iomanip>
#include <iostream>
#include <memory>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <vector>
 
// helper function to print a vector to a stream
template<class Os, class T>
Os& operator<<(Os& os, std::vector<T> const& v)
{
    os << '{';
    for (auto i{v.size()}; const T& e : v)
        os << e << (--i ? "," : "");
    return os << '}';
}
 
template<class T>
void print_single(T const& v)
{
    if constexpr (std::is_same_v<T, std::decay_t<std::string>>)
        std::cout << std::quoted(v);
    else if constexpr (std::is_same_v<std::decay_t<T>, char>)
        std::cout << "'" << v << "'";
    else
        std::cout << v;
}
 
// helper function to print a tuple of any size
template<class Tuple, std::size_t N>
struct TuplePrinter
{
    static void print(const Tuple& t)
    {
        TuplePrinter<Tuple, N - 1>::print(t);
        std::cout << ", ";
        print_single(std::get<N - 1>(t));
    }
};
 
template<class Tuple>
struct TuplePrinter<Tuple, 1>
{
    static void print(const Tuple& t)
    {
        print_single(std::get<0>(t));
    }
};
 
template<class... Args>
void print(std::string_view message, const std::tuple<Args...>& t)
{
    std::cout << message << " (";
    TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
    std::cout << ")\n";
}
// end helper function
 
int main()
{
    std::tuple<int, std::string, double> t1;
    print("Value-initialized, t1:", t1);
 
    std::tuple<int, std::string, double> t2{42, "Test", -3.14};
    print("Initialized with values, t2:", t2);
 
    std::tuple<char, std::string, int> t3{t2};
    print("Implicitly converted, t3:", t3);
 
    std::tuple<int, double> t4{std::make_pair(42, 3.14)};
    print("Constructed from a pair, t4:", t4);
 
    // given Allocator my_alloc with a single-argument constructor
    // my_alloc(int); use my_alloc(1) to allocate 5 ints in a vector
    using my_alloc = std::allocator<int>;
    std::vector<int, my_alloc> v{5, 1, my_alloc{/* 1 */}};
 
    // use my_alloc(2) to allocate 5 ints in a vector in a tuple
    std::tuple<int, std::vector<int, my_alloc>, double> t5
        {std::allocator_arg, my_alloc{/* 2 */}, 42, v, -3.14};
    print("Constructed with allocator, t5:", t5);
}

```

Possible output:

```
Value-initialized, t1: (0, "", 0)
Initialized with values, t2: (42, "Test", -3.14)
Implicitly converted, t3: ('*', "Test", -3)
Constructed from a pair, t4: (42, 3.14)
Constructed with allocator, t5: (42, {1,1,1,1,1}, -3.14)

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2510 | C++11 | default constructor was implicit | made conditionally-explicit |
| LWG 3121 | C++11 | constructor of 1-tuple might recursively check the constraints; `allocator_arg_t` argument brought ambiguity | furtherly constrained the constructor |
| LWG 3158 | C++11 | the uses-allocator constructor corresponding to default constructor was implicit | made conditionally-explicit |
| LWG 3211 | C++11 | whether the default constructor of `tuple<>` is trivial was unspecified | require to be trivial |
| LWG 4045 | C++23 | `tuple-like` constructor may potentially create dangling references | made defined as deleted |
| N4387 | C++11 | some constructors were explicit, preventing useful behavior | most constructors made conditionally-explicit |

### See also

|  |  |
| --- | --- |
| operator= | assigns the contents of one `tuple` to another   (public member function) |
| make_tuple(C++11) | creates a `tuple` object of the type defined by the argument types   (function template) |
| tie(C++11) | creates a tuple of lvalue references or unpacks a tuple into individual objects   (function template) |
| forward_as_tuple(C++11) | creates a `tuple` of forwarding references   (function template) |
| (constructor) | constructs new `pair`   (public member function of `std::pair<T1,T2>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/tuple/tuple&oldid=173712>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 July 2024, at 22:32.