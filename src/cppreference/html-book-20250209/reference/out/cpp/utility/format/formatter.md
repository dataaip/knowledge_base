# std::formatter

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
| ****formatter****(C++20) | | | | |
| formatter<**pair-or-tuple**>(C++23) | | | | |
| formatter<**range**>(C++23) | | | | |
| range_formatter(C++23) | | | | |
| enable_nonlocking_formatter_optimization(C++23) | | | | |
| basic_format_parse_contextformat_parse_contextwformat_parse_context(C++20)(C++20)(C++20) | | | | |
| basic_format_contextformat_contextwformat_context(C++20)(C++20)(C++20) | | | | |
| range_format(C++23) | | | | |
| format_kind(C++23) | | | | |
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
| template< class T, class CharT = char >  struct formatter; |  | (since C++20) |
|  |  |  |

The enabled specializations of `std::formatter` define formatting rules for a given type. Enabled specializations meet the BasicFormatter requirements, and, unless otherwise specified, also meet the Formatter requirements.

For all types `T` and `CharT` for which no specialization `std::formatter<T, CharT>` is enabled, that specialization is a complete type and is disabled.

Disabled specializations do not meet the Formatter requirements, and the following are all false:

- std::is_default_constructible_v
- std::is_copy_constructible_v
- std::is_move_constructible_v
- std::is_copy_assignable_v
- std::is_move_assignable_v.

### Basic standard specializations

In the following list, `CharT` is either char or wchar_t, `ArithmeticT` is any cv-unqualified arithmetic type other than char, wchar_t, char8_t, char16_t, or char32_t:

|  |  |  |
| --- | --- | --- |
| Character formatters |  |  |
| template<>  struct formatter<char, char>; | (1) |  |
| template<>  struct formatter<char, wchar_t>; | (2) |  |
| template<>  struct formatter<wchar_t, wchar_t>; | (3) |  |
| String formatters |  |  |
| template<>  struct formatter<CharT\*, CharT>; | (4) |  |
| template<>  struct formatter<const CharT\*, CharT>; | (5) |  |
| template< std::size_t N >  struct formatter<CharT[N], CharT>; | (6) |  |
| template< class Traits, class Alloc >  struct formatter<std::basic_string<CharT, Traits, Alloc>, CharT>; | (7) |  |
| template< class Traits >  struct formatter<std::basic_string_view<CharT, Traits>, CharT>; | (8) |  |
| Arithmetic formatters |  |  |
| template<>  struct formatter<ArithmeticT, CharT>; | (9) |  |
| Pointer formatters |  |  |
| template<>  struct formatter<std::nullptr_t, CharT>; | (10) |  |
| template<>  struct formatter<void\*, CharT>; | (11) |  |
| template<>  struct formatter<const void\*, CharT>; | (12) |  |
|  |  |  |

Formatters for other pointers and pointers to members are disabled.

Specializations such as std::formatter<wchar_t, char> and std::formatter<const char\*, wchar_t> that would require encoding conversions are disabled.

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| The following specialization are still disabled in C++23 to avoid formatting some char sequences as ranges of wchar_t:   |  |  |  | | --- | --- | --- | | Disabled formatters for wchar_t |  |  | | template<>  struct formatter<char\*, wchar_t>; | (1) |  | | template<>  struct formatter<const char\*, wchar_t>; | (2) |  | | template< std::size_t N >  struct formatter<char[N], wchar_t>; | (3) |  | | template< class Traits, class Allocator >  struct formatter<std::basic_string<char, Traits, Allocator>, wchar_t>; | (4) |  | | template< class Traits >  struct formatter<std::basic_string_view<char, Traits>, wchar_t>; | (5) |  | |  |  |  |   A **debug-enabled** formatter specialization additionally provides a public non-static member function constexpr void set_debug_format(); which modifies the state of the formatter object so that it will format the values as escaped and quoted, as if the type of the format specifier parsed by the last call to `parse` were `?`.  Each formatter specialization for string or character type is **debug-enabled**. | (since C++23) |

### Standard format specification

|  |  |
| --- | --- |
|  | This section is incomplete Reason: The standard format specification is moved to a separate page. The section title is temporarily preserved for links to this section. This section will be removed after all those links are settled. |

### Standard specializations for library types

|  |  |
| --- | --- |
| std::formatter<std::chrono::duration>(C++20) | formatting support for `duration`   (class template specialization) |
| std::formatter<std::chrono::sys_time>(C++20) | formatting support for `sys_time`   (class template specialization) |
| std::formatter<std::chrono::utc_time>(C++20) | formatting support for `utc_time`   (class template specialization) |
| std::formatter<std::chrono::tai_time>(C++20) | formatting support for `tai_time`   (class template specialization) |
| std::formatter<std::chrono::gps_time>(C++20) | formatting support for `gps_time`   (class template specialization) |
| std::formatter<std::chrono::file_time>(C++20) | formatting support for `file_time`   (class template specialization) |
| std::formatter<std::chrono::local_time>(C++20) | formatting support for `local_time`   (class template specialization) |
| std::formatter<std::chrono::day>(C++20) | formatting support for `day`   (class template specialization) |
| std::formatter<std::chrono::month>(C++20) | formatting support for `month`   (class template specialization) |
| std::formatter<std::chrono::year>(C++20) | formatting support for `year`   (class template specialization) |
| std::formatter<std::chrono::weekday>(C++20) | formatting support for `weekday`   (class template specialization) |
| std::formatter<std::chrono::weekday_indexed>(C++20) | formatting support for `weekday_indexed`   (class template specialization) |
| std::formatter<std::chrono::weekday_last>(C++20) | formatting support for `weekday_last`   (class template specialization) |
| std::formatter<std::chrono::month_day>(C++20) | formatting support for `month_day`   (class template specialization) |
| std::formatter<std::chrono::month_day_last>(C++20) | formatting support for `month_day_last`   (class template specialization) |
| std::formatter<std::chrono::month_weekday>(C++20) | formatting support for `month_weekday`   (class template specialization) |
| std::formatter<std::chrono::month_weekday_last>(C++20) | formatting support for `month_weekday_last`   (class template specialization) |
| std::formatter<std::chrono::year_month>(C++20) | formatting support for `year_month`   (class template specialization) |
| std::formatter<std::chrono::year_month_day>(C++20) | formatting support for `year_month_day`   (class template specialization) |
| std::formatter<std::chrono::year_month_day_last>(C++20) | formatting support for `year_month_day_last`   (class template specialization) |
| std::formatter<std::chrono::year_month_weekday>(C++20) | formatting support for `year_month_weekday`   (class template specialization) |
| std::formatter<std::chrono::year_month_weekday_last>(C++20) | formatting support for `year_month_weekday_last`   (class template specialization) |
| std::formatter<std::chrono::hh_mm_ss>(C++20) | formatting support for `hh_mm_ss`   (class template specialization) |
| std::formatter<std::chrono::sys_info>(C++20) | formatting support for `sys_info`   (class template specialization) |
| std::formatter<std::chrono::local_info>(C++20) | formatting support for `local_info`   (class template specialization) |
| std::formatter<std::chrono::zoned_time>(C++20) | formatting support for `zoned_time`   (class template specialization) |
| std::formatter<std::basic_stacktrace>(C++23) | formatting support for `basic_stacktrace`   (class template specialization) |
| std::formatter<std::stacktrace_entry>(C++23) | formatting support for `stacktrace_entry`   (class template specialization) |
| std::formatter<std::thread::id>(C++23) | formatting support for `thread::id`   (class template specialization) |
| std::formatter<std::vector<bool>::reference>(C++23) | formatting support for `vector<bool>::reference`   (class template specialization) |
| std::formatter<**pair-or-tuple**>(C++23) | formatting support for `pair` and `tuple`   (class template specialization) |
| std::formatter<**range**>(C++23) | formatting support for ranges   (class template specialization) |
| std::formatter<std::stack>(C++23) | formatting support for `std::stack`   (class template specialization) |
| std::formatter<std::queue>(C++23) | formatting support for `std::queue`   (class template specialization) |
| std::formatter<std::priority_queue>(C++23) | formatting support for `std::priority_queue`   (class template specialization) |
| std::formatter<std::filesystem::path>(C++26) | formatting support for `filesystem::path`   (class template specialization) |

### Example

Run this code

```
#include <algorithm>
#include <format>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string_view>
 
struct QuotableString : std::string_view
{};
 
template<>
struct std::formatter<QuotableString, char>
{
    bool quoted = false;
 
    template<class ParseContext>
    constexpr ParseContext::iterator parse(ParseContext& ctx)
    {
        auto it = ctx.begin();
        if (it == ctx.end())
            return it;
 
        if (*it == '#')
        {
            quoted = true;
            ++it;
        }
        if (it != ctx.end() && *it != '}')
            throw std::format_error("Invalid format args for QuotableString.");
 
        return it;
    }
 
    template<class FmtContext>
    FmtContext::iterator format(QuotableString s, FmtContext& ctx) const
    {
        std::ostringstream out;
        if (quoted)
            out << std::quoted(s);
        else
            out << s;
 
        return std::ranges::copy(std::move(out).str(), ctx.out()).out;
    }
};
 
int main()
{
    QuotableString a("be"), a2(R"( " be " )");
    QuotableString b("a question");
    std::cout << std::format("To {0} or not to {0}, that is {1}.\n", a, b);
    std::cout << std::format("To {0:} or not to {0:}, that is {1:}.\n", a, b);
    std::cout << std::format("To {0:#} or not to {0:#}, that is {1:#}.\n", a2, b);
}

```

Output:

```
To be or not to be, that is a question.
To be or not to be, that is a question.
To " \" be \" " or not to " \" be \" ", that is "a question".

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3944 | C++23 | some char sequences were formattable as ranges of wchar_t | disable specializations added |

### See also

|  |  |
| --- | --- |
| basic_format_contextformat_contextwformat_context(C++20)(C++20)(C++20) | formatting state, including all formatting arguments and the output iterator   (class template) |
| formattable(C++23) | specifies that a type is formattable, that is, it specializes ****std::formatter**** and provides member functions `parse` and `format`   (concept) |
| range_formatter(C++23) | class template that helps implementing ****std::formatter**** specializations for range types   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/formatter&oldid=177164>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 October 2024, at 18:44.