# Standard library header <concepts> (C++20)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | ****<concepts>**** (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the concepts library.

|  |  |
| --- | --- |
| Concepts | |
| Core language concepts | |
| same_as(C++20) | specifies that a type is the same as another type   (concept) |
| derived_from(C++20) | specifies that a type is derived from another type   (concept) |
| convertible_to(C++20) | specifies that a type is implicitly convertible to another type   (concept) |
| common_reference_with(C++20) | specifies that two types share a common reference type   (concept) |
| common_with(C++20) | specifies that two types share a common type   (concept) |
| integral(C++20) | specifies that a type is an integral type   (concept) |
| signed_integral(C++20) | specifies that a type is an integral type that is signed   (concept) |
| unsigned_integral(C++20) | specifies that a type is an integral type that is unsigned   (concept) |
| floating_point(C++20) | specifies that a type is a floating-point type   (concept) |
| assignable_from(C++20) | specifies that a type is assignable from another type   (concept) |
| swappableswappable_with(C++20) | specifies that a type can be swapped or that two types can be swapped with each other   (concept) |
| destructible(C++20) | specifies that an object of the type can be destroyed   (concept) |
| constructible_from(C++20) | specifies that a variable of the type can be constructed from or bound to a set of argument types   (concept) |
| default_initializable(C++20) | specifies that an object of a type can be default constructed   (concept) |
| move_constructible(C++20) | specifies that an object of a type can be move constructed   (concept) |
| copy_constructible(C++20) | specifies that an object of a type can be copy constructed and move constructed   (concept) |
| Comparison concepts | |
| equality_comparableequality_comparable_with(C++20) | specifies that operator == is an equivalence relation   (concept) |
| totally_orderedtotally_ordered_with(C++20) | specifies that the comparison operators on the type yield a total order   (concept) |
| Object concepts | |
| movable(C++20) | specifies that an object of a type can be moved and swapped   (concept) |
| copyable(C++20) | specifies that an object of a type can be copied, moved, and swapped   (concept) |
| semiregular(C++20) | specifies that an object of a type can be copied, moved, swapped, and default constructed   (concept) |
| regular(C++20) | specifies that a type is regular, that is, it is both `semiregular` and `equality_comparable`   (concept) |
| Callable concepts | |
| invocableregular_invocable(C++20) | specifies that a callable type can be invoked with a given set of argument types   (concept) |
| predicate(C++20) | specifies that a callable type is a Boolean predicate   (concept) |
| relation(C++20) | specifies that a callable type is a binary relation   (concept) |
| equivalence_relation(C++20) | specifies that a `relation` imposes an equivalence relation   (concept) |
| strict_weak_order(C++20) | specifies that a `relation` imposes a strict weak ordering   (concept) |
| Customization point objects | |
| ranges::swap(C++20) | swaps the values of two objects (customization point object) |

### Synopsis

```
// all freestanding
namespace std {
  // language-related concepts
  // concept same_as
  template<class T, class U>
  concept same_as = /* see description */;
 
  // concept derived_from
  template<class Derived, class Base>
  concept derived_from = /* see description */;
 
  // concept convertible_to
  template<class From, class To>
  concept convertible_to = /* see description */;
 
  // concept common_reference_with
  template<class T, class U>
  concept common_reference_with = /* see description */;
 
  // concept common_with
  template<class T, class U>
  concept common_with = /* see description */;
 
  // arithmetic concepts
  template<class T>
  concept integral = /* see description */;
  template<class T>
  concept signed_integral = /* see description */;
  template<class T>
  concept unsigned_integral = /* see description */;
  template<class T>
  concept floating_point = /* see description */;
 
  // concept assignable_from
  template<class LHS, class RHS>
  concept assignable_from = /* see description */;
 
  // concept swappable
  namespace ranges {
    inline namespace /* unspecified */ {
      inline constexpr /* unspecified */ swap = /* unspecified */;
    }
  }
  template<class T>
  concept swappable = /* see description */;
  template<class T, class U>
  concept swappable_with = /* see description */;
 
  // concept destructible
  template<class T>
  concept destructible = /* see description */;
 
  // concept constructible_from
  template<class T, class... Args>
  concept constructible_from = /* see description */;
 
  // concept default_initializable
  template<class T>
  concept default_initializable = /* see description */;
 
  // concept move_constructible
  template<class T>
  concept move_constructible = /* see description */;
 
  // concept copy_constructible
  template<class T>
  concept copy_constructible = /* see description */;
 
  // comparison concepts
  // concept equality_comparable
  template<class T>
  concept equality_comparable = /* see description */;
  template<class T, class U>
  concept equality_comparable_with = /* see description */;
 
  // concept totally_ordered
  template<class T>
  concept totally_ordered = /* see description */;
  template<class T, class U>
  concept totally_ordered_with = /* see description */;
 
  // object concepts
  template<class T>
  concept movable = /* see description */;
  template<class T>
  concept copyable = /* see description */;
  template<class T>
  concept semiregular = /* see description */;
  template<class T>
  concept regular = /* see description */;
 
  // callable concepts
  // concept invocable
  template<class F, class... Args>
  concept invocable = /* see description */;
 
  // concept regular_invocable
  template<class F, class... Args>
  concept regular_invocable = /* see description */;
 
  // concept predicate
  template<class F, class... Args>
  concept predicate = /* see description */;
 
  // concept relation
  template<class R, class T, class U>
  concept relation = /* see description */;
 
  // concept equivalence_relation
  template<class R, class T, class U>
  concept equivalence_relation = /* see description */;
 
  // concept strict_weak_order
  template<class R, class T, class U>
  concept strict_weak_order = /* see description */;
}

```

#### Helper concept `boolean-testable`

```
template<class T>
concept /*boolean-testable-impl*/ = convertible_to<T, bool>; // exposition only;
 
template<class T>
concept boolean-testable = // exposition only
  /*boolean-testable-impl*/<T> && requires(T&& t) {
    {
      !std::forward<T>(t)
    } -> /*boolean-testable-impl*/;
  };

```

#### Concept `same_as`

```
template<class T, class U>
concept /*same-as-impl*/ = is_same_v<T, U>; // exposition only
 
template<class T, class U>
concept same_as = /*same-as-impl*/<T, U> && /*same-as-impl*/<U, T>;

```

#### Concept `derived_from`

```
template<class Derived, class Base>
concept derived_from = is_base_of_v<Base, Derived> &&
                       is_convertible_v<const volatile Derived*, const volatile Base*>;

```

#### Concept `convertible_to`

```
template<class From, class To>
concept convertible_to =
  is_convertible_v<From, To> && requires { static_cast<To>(declval<From>()); };

```

#### Concept `common_reference_with`

```
template<class T, class U>
concept common_reference_with =
  same_as<common_reference_t<T, U>, common_reference_t<U, T>> &&
  convertible_to<T, common_reference_t<T, U>> &&
  convertible_to<U, common_reference_t<T, U>>;

```

#### Concept `common_with`

```
template<class T, class U>
concept common_with =
  same_as<common_type_t<T, U>, common_type_t<U, T>> &&
  requires {
    static_cast<common_type_t<T, U>>(declval<T>());
    static_cast<common_type_t<T, U>>(declval<U>());
  } &&
  common_reference_with<add_lvalue_reference_t<const T>,
                        add_lvalue_reference_t<const U>> &&
  common_reference_with<
    add_lvalue_reference_t<common_type_t<T, U>>,
    common_reference_t<add_lvalue_reference_t<const T>, add_lvalue_reference_t<const U>>>;

```

#### Concept `integral`

```
template<class T>
concept integral = is_integral_v<T>;

```

#### Concept `signed_integral`

```
template<class T>
concept signed_integral = integral<T> && is_signed_v<T>;

```

#### Concept `unsigned_integral`

```
template<class T>
concept unsigned_integral = integral<T> && !signed_integral<T>;

```

#### Concept `floating_point`

```
template<class T>
concept floating_point = is_floating_point_v<T>;

```

#### Concept `assignable_from`

```
template<class LHS, class RHS>
concept assignable_from =
  is_lvalue_reference_v<LHS> &&
  common_reference_with<const remove_reference_t<LHS>&, const remove_reference_t<RHS>&> &&
  requires(LHS lhs, RHS&& rhs) {
    {
      lhs = std::forward<RHS>(rhs)
    } -> same_as<LHS>;
  };

```

#### Concept `swappable`

```
template<class T>
concept swappable = requires(T& a, T& b) { ranges::swap(a, b); };

```

#### Concept `swappable_with`

```
template<class T, class U>
concept swappable_with = common_reference_with<T, U> && requires(T&& t, U&& u) {
  ranges::swap(std::forward<T>(t), std::forward<T>(t));
  ranges::swap(std::forward<U>(u), std::forward<U>(u));
  ranges::swap(std::forward<T>(t), std::forward<U>(u));
  ranges::swap(std::forward<U>(u), std::forward<T>(t));
};

```

#### Concept `destructible`

```
template<class T>
concept destructible = is_nothrow_destructible_v<T>;

```

#### Concept `constructible_from`

```
template<class T, class... Args>
concept constructible_from = destructible<T> && is_constructible_v<T, Args...>;

```

#### Concept `default_initializable`

```
template<class T>
constexpr bool /*is-default-initializable*/ = /* see description */; // exposition only
 
template<class T>
concept default_initializable =
  constructible_from<T> && requires { T{}; } && /*is-default-initializable*/<T>;

```

#### Concept `move_constructible`

```
template<class T>
concept move_constructible = constructible_from<T, T> && convertible_to<T, T>;

```

#### Concept `copy_constructible`

```
template<class T>
concept copy_constructible =
  move_constructible<T> && constructible_from<T, T&> && convertible_to<T&, T> &&
  constructible_from<T, const T&> && convertible_to<const T&, T> &&
  constructible_from<T, const T> && convertible_to<const T, T>;

```

#### Concept `equality_comparable`

```
template<class T, class U>
concept /*weakly-equality-comparable-with*/ = // exposition only
  requires(const remove_reference_t<T>& t, const remove_reference_t<U>& u) {
    { t == u } -> boolean-testable;
    { t != u } -> boolean-testable;
    { u == t } -> boolean-testable;
    { u != t } -> boolean-testable;
  };
 
template<class T>
concept equality_comparable = /*weakly-equality-comparable-with*/<T, T>;

```

#### Concept `equality_comparable_with`

```
template<class T, class U, class C = common_reference_t<const T&, const U&>>
concept /*comparison-common-type-with-impl*/ = // exposition only
  same_as<common_reference_t<const T&, const U&>,
          common_reference_t<const U&, const T&>> &&
  requires {
    requires convertible_to<const T&, const C&> || convertible_to<T, const C&>;
    requires convertible_to<const U&, const C&> || convertible_to<U, const C&>;
  };
 
template<class T, class U>
concept /*comparison-common-type-with*/ = // exposition only
  /*comparison-common-type-with-impl*/<remove_cvref_t<T>, remove_cvref_t<U>>;
 
template<class T, class U>
concept equality_comparable_with =
  equality_comparable<T> && equality_comparable<U> &&
  /*comparison-common-type-with*/<T, U> &&
  equality_comparable<
    common_reference_t<const remove_reference_t<T>&, const remove_reference_t<U>&>> &&
  /*weakly-equality-comparable-with*/<T, U>;

```

#### Helper concept **partially-ordered-with**

Defined in header <compare>

```
template<class T, class U>
concept /*partially-ordered-with*/ = // exposition only
  requires(const remove_reference_t<T>& t, const remove_reference_t<U>& u) {
    { t <  u } -> boolean-testable;
    { t >  u } -> boolean-testable;
    { t <= u } -> boolean-testable;
    { t >= u } -> boolean-testable;
    { u <  t } -> boolean-testable;
    { u >  t } -> boolean-testable;
    { u <= t } -> boolean-testable;
    { u >= t } -> boolean-testable;
  };

```

#### Concept `totally_ordered`

```
template<class T>
concept totally_ordered = equality_comparable<T> && /*partially-ordered-with*/<T, T>;

```

#### Concept `totally_ordered_with`

```
template<class T, class U>
concept totally_ordered_with =
  totally_ordered<T> && totally_ordered<U> && equality_comparable_with<T, U> &&
  totally_ordered<
    common_reference_t<const remove_reference_t<T>&, const remove_reference_t<U>&>> &&
  /*partially-ordered-with*/<T, U>;

```

#### Concept `movable`

```
template<class T>
concept movable =
  is_object_v<T> && move_constructible<T> && assignable_from<T&, T> && swappable<T>;

```

#### Concept `copyable`

```
template<class T>
concept copyable = copy_constructible<T> && movable<T> && assignable_from<T&, T&> &&
                   assignable_from<T&, const T&> && assignable_from<T&, const T>;

```

#### Concept `semiregular`

```
template<class T>
concept semiregular = copyable<T> && default_initializable<T>;

```

#### Concept `regular`

```
template<class T>
concept regular = semiregular<T> && equality_comparable<T>;

```

#### Concept `invocable`

```
template<class F, class... Args>
concept invocable = requires(F&& f, Args&&... args) {
  invoke(std::forward<F>(f),
         std::forward<Args>(args)...); // not required to be equality-preserving
};

```

#### Concept `regular_invocable`

```
template<class F, class... Args>
  concept regular_invocable = invocable<F, Args...>;

```

#### Concept `predicate`

```
template<class F, class... Args>
concept predicate =
  regular_invocable<F, Args...> && boolean-testable<invoke_result_t<F, Args...>>;

```

#### Concept `relation`

```
template<class R, class T, class U>
concept relation =
  predicate<R, T, T> && predicate<R, U, U> && predicate<R, T, U> && predicate<R, U, T>;

```

#### Concept `equivalence_relation`

```
template<class R, class T, class U>
concept equivalence_relation = relation<R, T, U>;

```

#### Concept `strict_weak_order`

```
template<class R, class T, class U>
concept strict_weak_order = relation<R, T, U>;

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/concepts&oldid=163949>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 07:01.