# std::experimental::is_detected, std::experimental::detected_t, std::experimental::detected_or

From cppreference.com
< cpp‎ | experimental
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Library fundamentals v2

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::propagate_const | | | | |
| experimental::not_fn | | | | |
| experimental::observer_ptr | | | | |
| experimental::make_array | | | | |
| experimental::to_array | | | | |
| experimental::ostream_joiner | | | | |
| experimental::gcd | | | | |
| experimental::lcm | | | | |
| experimental::source_location | | | | |
| experimental::randint | | | | |
| ****detection idiom**** | | | | |
| uniform container erasure | | | | |
| logical operator type traits | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/type_traits>` |  |  |
| template< template<class...> class Op, class... Args >  using is_detected = /\* see below \*/; |  | (library fundamentals TS v2) |
| template< template<class...> class Op, class... Args >  using detected_t = /\* see below \*/; |  | (library fundamentals TS v2) |
| template< class Default, template<class...> class Op, class... Args >  using detected_or = /\* see below \*/; |  | (library fundamentals TS v2) |
|  |  |  |

The alias template `detected_or` is an alias for an unspecified class type with two public member typedefs `value_t` and `type`, which are defined as follows:

- If the **template-id** Op<Args...> denotes a valid type, then `value_t` is an alias for std::true_type, and `type` is an alias for Op<Args...>;
- Otherwise, `value_t` is an alias for std::false_type and `type` is an alias for `Default`.

The alias template `is_detected` is equivalent to typename detected_or<std::experimental::nonesuch, Op, Args...>::value_t. It is an alias for std::true_type if the **template-id** Op<Args...> denotes a valid type; otherwise it is an alias for std::false_type.

The alias template `detected_t` is equivalent to typename detected_or<std::experimental::nonesuch, Op, Args...>::type. It is an alias for Op<Args...> if that **template-id** denotes a valid type; otherwise it is an alias for the class std::experimental::nonesuch.

### Additional utilities

|  |  |  |
| --- | --- | --- |
| template< template<class...> class Op, class... Args >  constexpr bool is_detected_v = is_detected<Op, Args...>::value; |  | (library fundamentals TS v2) |
| template< template<class...> class Op, class... Args >  constexpr inline bool is_detected_v = is_detected<Op, Args...>::value; |  | (library fundamentals TS v3) |
|  |  |  |
| --- | --- | --- |
| template< class Default, template<class...> class Op, class... Args >  using detected_or_t = typename detected_or<Default, Op, Args...>::type; |  | (library fundamentals TS v2) |
| template< class Expected, template<class...> class Op, class... Args >  using is_detected_exact = std::is_same<Expected, detected_t<Op, Args...>>; |  | (library fundamentals TS v2) |
|  |  |  |
| --- | --- | --- |
| template< class Expected, template<class...> class Op, class... Args >  constexpr bool is_detected_exact_v =     is_detected_exact<Expected, Op, Args...>::value; |  | (library fundamentals TS v2) |
| template< class Expected, template<class...> class Op, class... Args >  constexpr inline bool is_detected_exact_v =     is_detected_exact<Expected, Op, Args...>::value; |  | (library fundamentals TS v3) |
|  |  |  |
| --- | --- | --- |
| template< class To, template<class...> class Op, class... Args >  using is_detected_convertible = std::is_convertible<detected_t<Op, Args...>, To>; |  | (library fundamentals TS v2) |
|  |  |  |
| --- | --- | --- |
| template< class To, template<class...> class Op, class... Args >  constexpr bool is_detected_convertible_v =     is_detected_convertible<To, Op, Args...>::value; |  | (library fundamentals TS v2) |
| template< class To, template<class...> class Op, class... Args >  constexpr inline bool is_detected_convertible_v =     is_detected_convertible<To, Op, Args...>::value; |  | (library fundamentals TS v3) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

The alias template `is_detected_exact` checks whether detected_t<Op, Args...> is `Expected`.

The alias template `is_detected_convertible` checks whether detected_t<Op, Args...> is convertible to `To`.

### Possible implementation

```
namespace detail
{
    template<class Default, class AlwaysVoid, template<class...> class Op, class... Args>
    struct detector
    {
        using value_t = std::false_type;
        using type = Default;
    };
 
    template<class Default, template<class...> class Op, class... Args>
    struct detector<Default, std::void_t<Op<Args...>>, Op, Args...>
    {
        using value_t = std::true_type;
        using type = Op<Args...>;
    };
} // namespace detail
 
template<template<class...> class Op, class... Args>
using is_detected = typename detail::detector<nonesuch, void, Op, Args...>::value_t;
 
template<template<class...> class Op, class... Args>
using detected_t = typename detail::detector<nonesuch, void, Op, Args...>::type;
 
template<class Default, template<class...> class Op, class... Args>
using detected_or = detail::detector<Default, void, Op, Args...>;

```

### Example

Run this code

```
#include <cstddef>
#include <experimental/type_traits>
 
template<class T>
using copy_assign_t = decltype(std::declval<T&>() = std::declval<const T&>());
 
struct Meow {};
struct Purr { void operator=(const Purr&) = delete; };
 
static_assert(std::experimental::is_detected<copy_assign_t, Meow>::value,
              "Meow should be copy assignable!");
static_assert(!std::experimental::is_detected_v<copy_assign_t, Purr>,
              "Purr should not be copy assignable!");
static_assert(std::experimental::is_detected_exact_v<Meow&, copy_assign_t, Meow>,
              "Copy assignment of Meow should return Meow&!");
 
template<class T>
using diff_t = typename T::difference_type;
 
template<class Ptr>
using difference_type = std::experimental::detected_or_t<std::ptrdiff_t, diff_t, Ptr>;
 
struct Woof { using difference_type = int; };
struct Bark {};
 
static_assert(std::is_same<difference_type<Woof>, int>::value,
              "Woof's difference_type should be int!");
static_assert(std::is_same<difference_type<Bark>, std::ptrdiff_t>::value,
              "Bark's difference_type should be ptrdiff_t!");
 
int main() {}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/is_detected&oldid=154972>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 17 July 2023, at 01:04.