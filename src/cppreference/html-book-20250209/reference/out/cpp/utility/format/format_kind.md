# std::format_kind

From cppreference.com
< cpp‎ | utility‎ | format
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

Text processing library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Localization library | | | | |
| Regular expressions library (C++11) | | | | |
| Formatting library (C++20) | | | | |
| Null-terminated sequence utilities | | | | |
| Byte strings | | | | |
| Multibyte strings | | | | |
| Wide strings | | | | |
| Primitive numeric conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

Formatting library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Standard format specification | | | | |
| Formatting functions | | | | |
| format(C++20) | | | | |
| format_to(C++20) | | | | |
| format_to_n(C++20) | | | | |
| formatted_size(C++20) | | | | |
| vformat(C++20) | | | | |
| vformat_to(C++20) | | | | |
| Format strings | | | | |
| basic_format_stringformat_stringwformat_string(C++20)(C++20)(C++20) | | | | |
| runtime_format(C++26) | | | | |
| Formatting concepts | | | | |
| formattable(C++23) | | | | |
| Formatter | | | | |
| formatter(C++20) | | | | |
| formatter<**pair-or-tuple**>(C++23) | | | | |
| formatter<**range**>(C++23) | | | | |
| range_formatter(C++23) | | | | |
| enable_nonlocking_formatter_optimization(C++23) | | | | |
| basic_format_parse_contextformat_parse_contextwformat_parse_context(C++20)(C++20)(C++20) | | | | |
| basic_format_contextformat_contextwformat_context(C++20)(C++20)(C++20) | | | | |
| range_format(C++23) | | | | |
| ****format_kind****(C++23) | | | | |
| Formatting arguments | | | | |
| basic_format_arg(C++20) | | | | |
| basic_format_arg::handle(C++20) | | | | |
| basic_format_argsformat_argswformat_args(C++20)(C++20)(C++20) | | | | |
| visit_format_arg(C++20) (deprecated in C++26) | | | | |
| make_format_argsmake_wformat_args(C++20)(C++20) | | | | |
| Format error | | | | |
| format_error(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<format>` |  |  |
| template< class R >  constexpr /\* unspecified \*/ format_kind = /\* unspecified \*/; | (1) | (since C++23) |
| template< ranges::input_range R >      requires std::same_as<R, std::remove_cvref_t<R>> constexpr range_format format_kind<R> = /\* see description \*/; | (2) | (since C++23) |
|  |  |  |

The variable template `format_kind` selects an appropriate std::range_format for a range `R`.

std::format_kind<R> is defined as follows:

- If std::same_as<std::remove_cvref_t<ranges::range_reference_t<R>>, R> is true, std::format_kind<R> is std::range_format::disabled.
- Otherwise, if `R::key_type` is valid and denotes a type:
  - If `R::mapped_type` is valid and denotes a type, let `U` be std::remove_cvref_t<ranges::range_reference_t<R>>.

:   :   If either `U` is a specialization of std::pair or `U` is a specialization of std::tuple and std::tuple_size_v<U> == 2, std::format_kind<R> is std::range_format::map.

    - Otherwise, std::format_kind<R> is std::range_format::set.

- Otherwise, std::format_kind<R> is std::range_format::sequence.

A program that instantiates a primary template of the `format_kind` variable template is ill-formed.

Given a cv-unqualified program-defined type `T` that models `input_range`, a program can specialize `format_kind` for `T`. Such specializations are usable in constant expressions, and have type const std::range_format.

### Possible implementation

|  |
| --- |
| ```text namespace detail {     template< typename >     constexpr bool is_pair_or_tuple_2 = false;       template< typename T, typename U >     constexpr bool is_pair_or_tuple_2<std::pair<T, U>> = true;       template< typename T, typename U >     constexpr bool is_pair_or_tuple_2<std::tuple<T, U>> = true;       template < typename T >         requires std::is_reference_v<T> || std::is_const_v<T>     constexpr bool is_pair_or_tuple_2<T> =         is_pair_or_tuple_2<std::remove_cvref_t<T>>; }   template< class R > constexpr range_format format_kind = [] {     static_assert(false, "instantiating a primary template is not allowed");     return range_format::disabled; }();   template< ranges::input_range R >     requires std::same_as<R, std::remove_cvref_t<R>> constexpr range_format format_kind<R> = [] {     if constexpr (std::same_as<std::remove_cvref_t<std::ranges::range_reference_t<R>>, R>)         return range_format::disabled;     else if constexpr (requires { typename R::key_type; })     {         if constexpr (requires { typename R::mapped_type; } &&                       detail::is_pair_or_tuple_2<std::ranges::range_reference_t<R>>)             return range_format::map;         else             return range_format::set;     }     else         return range_format::sequence; }(); ``` |

### Example

Run this code

```
#include <filesystem>
#include <format>
#include <map>
#include <set>
#include <vector>
 
struct A {};
 
static_assert(std::format_kind<std::vector<int>> == std::range_format::sequence);
static_assert(std::format_kind<std::map<int>> == std::range_format::map);
static_assert(std::format_kind<std::set<int>> == std::range_format::set);
static_assert(std::format_kind<std::filesystem::path> == std::range_format::disabled);
// ill-formed:
// static_assert(std::format_kind<A> == std::range_format::disabled);
 
int main() {}

```

### See also

|  |  |
| --- | --- |
| range_format(C++23) | specifies how a range should be formatted   (enum) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_kind&oldid=176428>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 September 2024, at 06:10.