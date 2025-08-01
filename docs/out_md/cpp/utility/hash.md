# std::hash

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | ****hash****(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

****std::hash****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| hash::hash | | | | |
| hash::operator()") | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<bitset>` |  |  |
| Defined in header `<coroutine>` |  |  |
| Defined in header `<chrono>` |  | (since C++26) |
| Defined in header `<filesystem>` |  |  |
| Defined in header `<functional>` |  |  |
| Defined in header `<memory>` |  |  |
| Defined in header `<optional>` |  |  |
| Defined in header `<stacktrace>` |  |  |
| Defined in header `<string>` |  |  |
| Defined in header `<string_view>` |  |  |
| Defined in header `<system_error>` |  |  |
| Defined in header `<text_encoding>` |  |  |
| Defined in header `<thread>` |  |  |
| Defined in header `<typeindex>` |  |  |
| Defined in header `<variant>` |  |  |
| Defined in header `<vector>` |  |  |
| template< class Key >  struct hash; |  | (since C++11) |
|  |  |  |

The unordered associative containers std::unordered_set, std::unordered_multiset, std::unordered_map, std::unordered_multimap use specializations of the template `std::hash` as the default hash function.

Given a type `Key`, each specialization `std::hash<Key>` is either **enabled** or **disabled** ﻿:

- If `std::hash<Key>` is not provided by the program or the user, it is disabled.
- Otherwise, `std::hash<Key>` is enabled if all following conditions are satisfied:

:   - All following requirements are satisfied:

    :   - Hash (with `Key` as the function call argument type)
        - DefaultConstructible
        - CopyAssignable
        - Swappable

    - Given the following values:

    :   - h, an object of type `std::hash<Key>`.
        - k1 and k2, objects of type `Key`.
    :   All following requirements are satisfied:

        - If k1 == k2 is true, h(k1) == h(k2) is also true.
        - Unless `std::hash<Key>` is a program-defined specialization, h(k1) will never throw an exception.

- Otherwise, `std::hash<Key>` is disabled.

Disabled specializations do not satisfy Hash, do not satisfy FunctionObject, and following values are all false:

- std::is_default_constructible<std::hash<Key>>::value
- std::is_copy_constructible<std::hash<Key>>::value
- std::is_move_constructible<std::hash<Key>>::value
- std::is_copy_assignable<std::hash<Key>>::value
- std::is_move_assignable<std::hash<Key>>::value

In other words, they exist, but cannot be used.

|  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| Nested types  |  |  | | --- | --- | | Name | Definition | | `argument_type` (deprecated in C++17) | `Key` | | `result_type` (deprecated in C++17) | std::size_t | | (until C++20) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a hash function object   (public member function) |
| operator()") | calculates the hash of the argument   (public member function) |

### Standard library specializations

Each header that declares the template `std::hash` also provides enabled specializations of `std::hash` for the following types:

- all cv-unqualified arithmetic types
- all cv-unqualified enumeration types
- all cv-unqualified pointer types
- std::nullptr_t

On top of that, some headers also provide other enabled `std::hash` specializations for library types (see below).

|  |  |  |  |
| --- | --- | --- | --- |
| For all `std::hash` specializations provided by the standard library except the following, all their member functions are noexcept:   - std::hash<std::optional> - std::hash<std::variant> - std::hash<std::unique_ptr>  |  |  | | --- | --- | | - std::hash<std::chrono::duration> - std::hash<std::chrono::time_point> - std::hash<std::chrono::zoned_time> | (since C++26) | | (since C++17) |

### Specializations for library types

|  |  |
| --- | --- |
| std::hash<std::coroutine_handle>(C++20) | hash support for std::coroutine_handle   (class template specialization) |
| std::hash<std::error_code>(C++11) | hash support for std::error_code   (class template specialization) |
| std::hash<std::error_condition>(C++17) | hash support for std::error_condition   (class template specialization) |
| std::hash<std::stacktrace_entry>(C++23) | hash support for std::stacktrace_entry   (class template specialization) |
| std::hash<std::basic_stacktrace>(C++23) | hash support for std::basic_stacktrace   (class template specialization) |
| std::hash<std::optional>(C++17) | hash support for std::optional   (class template specialization) |
| std::hash<std::variant>(C++17) | hash support for std::variant   (class template specialization) |
| std::hash<std::monostate>(C++17) | hash support for std::monostate   (class template specialization) |
| std::hash<std::bitset>(C++11) | hash support for std::bitset   (class template specialization) |
| std::hash<std::unique_ptr>(C++11) | hash support for std::unique_ptr   (class template specialization) |
| std::hash<std::shared_ptr>(C++11) | hash support for std::shared_ptr   (class template specialization) |
| std::hash<std::type_index>(C++11) | hash support for std::type_index   (class template specialization) |
| std::hash<std::basic_string>(C++11) | hash support for strings   (class template specialization) |
| std::hash<std::string_view>std::hash<std::wstring_view>std::hash<std::u8string_view>std::hash<std::u16string_view>std::hash<std::u32string_view>(C++17)(C++17)(C++20)(C++17)(C++17) | hash support for string views   (class template specialization) |
| std::hash<std::text_encoding>(C++26) | hash support for std::text_encoding   (class template specialization) |
| std::hash<std::vector<bool>>(C++11) | hash support for std::vector<bool>   (class template specialization) |
| std::hash<std::filesystem::path>(C++17) | hash support for std::filesystem::path   (class template specialization) |
| std::hash<std::thread::id>(C++11) | hash support for std::thread::id   (class template specialization) |
| std::hash<std::chrono::duration>(C++26) | hash support for std::chrono::duration   (class template specialization) |
| std::hash<std::chrono::time_point>(C++26) | hash support for std::chrono::time_point   (class template specialization) |
| std::hash<std::chrono::day>(C++26) | hash support for std::chrono::day   (class template specialization) |
| std::hash<std::chrono::month>(C++26) | hash support for std::chrono::month   (class template specialization) |
| std::hash<std::chrono::year>(C++26) | hash support for std::chrono::year   (class template specialization) |
| std::hash<std::chrono::weekday>(C++26) | hash support for std::chrono::weekday   (class template specialization) |
| std::hash<std::chrono::weekday_indexed>(C++26) | hash support for std::chrono::weekday_indexed   (class template specialization) |
| std::hash<std::chrono::weekday_last>(C++26) | hash support for std::chrono::weekday_last   (class template specialization) |
| std::hash<std::chrono::month_day>(C++26) | hash support for std::chrono::month_day   (class template specialization) |
| std::hash<std::chrono::month_day_last>(C++26) | hash support for std::chrono::month_day_last   (class template specialization) |
| std::hash<std::chrono::month_weekday>(C++26) | hash support for std::chrono::month_weekday   (class template specialization) |
| std::hash<std::chrono::month_weekday_last>(C++26) | hash support for std::chrono::month_weekday_last   (class template specialization) |
| std::hash<std::chrono::year_month>(C++26) | hash support for std::chrono::year_month   (class template specialization) |
| std::hash<std::chrono::year_month_day>(C++26) | hash support for std::chrono::year_month_day   (class template specialization) |
| std::hash<std::chrono::year_month_day_last>(C++26) | hash support for std::chrono::year_month_day_last   (class template specialization) |
| std::hash<std::chrono::year_month_weekday>(C++26) | hash support for std::chrono::year_month_weekday   (class template specialization) |
| std::hash<std::chrono::year_month_weekday_last>(C++26) | hash support for std::chrono::year_month_weekday_last   (class template specialization) |
| std::hash<std::chrono::zoned_time>(C++26) | hash support for std::chrono::zoned_time   (class template specialization) |
| std::hash<std::chrono::leap_second>(C++26) | hash support for std::chrono::leap_second   (class template specialization) |

### Notes

The actual hash functions are implementation-dependent and are not required to fulfill any other quality criteria except those specified above. Notably, some implementations use trivial (identity) hash functions which map an integer to itself. In other words, these hash functions are designed to work with unordered associative containers, but not as cryptographic hashes, for example.

Hash functions are only required to produce the same result for the same input within a single execution of a program; this allows salted hashes that prevent collision denial-of-service attacks.

There is no specialization for C strings. std::hash<const char\*> produces a hash of the value of the pointer (the memory address), it does not examine the contents of any character array.

Additional specializations for std::pair and the standard container types, as well as utility functions to compose hashes are available in `boost::hash`.

### Example

Run this code

```
#include <cstddef>
#include <functional>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_set>
 
struct S
{
    std::string first_name;
    std::string last_name;
    bool operator==(const S&) const = default; // since C++20
};
 
// Before C++20.
// bool operator==(const S& lhs, const S& rhs)
// {
//     return lhs.first_name == rhs.first_name && lhs.last_name == rhs.last_name;
// }
 
// Custom hash can be a standalone function object.
struct MyHash
{
    std::size_t operator()(const S& s) const noexcept
    {
        std::size_t h1 = std::hash<std::string>{}(s.first_name);
        std::size_t h2 = std::hash<std::string>{}(s.last_name);
        return h1 ^ (h2 << 1); // or use boost::hash_combine
    }
};
 
// Custom specialization of std::hash can be injected in namespace std.
template<>
struct std::hash<S>
{
    std::size_t operator()(const S& s) const noexcept
    {
        std::size_t h1 = std::hash<std::string>{}(s.first_name);
        std::size_t h2 = std::hash<std::string>{}(s.last_name);
        return h1 ^ (h2 << 1); // or use boost::hash_combine
    }
};
 
int main()
{
    std::string str = "Meet the new boss...";
    std::size_t str_hash = std::hash<std::string>{}(str);
    std::cout << "hash(" << std::quoted(str) << ") =\t" << str_hash << '\n';
 
    S obj = {"Hubert", "Farnsworth"};
    // Using the standalone function object.
    std::cout << "hash(" << std::quoted(obj.first_name) << ", "
              << std::quoted(obj.last_name) << ") =\t"
              << MyHash{}(obj) << " (using MyHash) or\n\t\t\t\t"
              << std::hash<S>{}(obj) << " (using injected specialization)\n";
 
    // Custom hash makes it possible to use custom types in unordered containers.
    // The example will use the injected std::hash<S> specialization above,
    // to use MyHash instead, pass it as a second template argument.
    std::unordered_set<S> names = {obj, {"Bender", "Rodriguez"}, {"Turanga", "Leela"}};
    for (auto const& s: names)
        std::cout << std::quoted(s.first_name) << ' '
                  << std::quoted(s.last_name) << '\n';
}

```

Possible output:

```
hash("Meet the new boss...") =  10656026664466977650
hash("Hubert", "Farnsworth") =  12922914235676820612 (using MyHash) or
                                12922914235676820612 (using injected specialization)
"Bender" "Rodriguez"
"Turanga" "Leela"
"Hubert" "Farnsworth"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2119 | C++11 | specializations for extended integer types were missing | provided |
| LWG 2148 | C++11 | specializations for enumerations were missing | provided |
| LWG 2543 | C++11 | `std::hash` might not be SFINAE-friendly | made SFINAE-friendly |
| LWG 2817 | C++11 | specialization for std::nullptr_t was missing | provided |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/hash&oldid=179088>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 January 2025, at 20:57.