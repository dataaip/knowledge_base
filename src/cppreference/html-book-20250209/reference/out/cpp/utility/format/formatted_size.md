# std::formatted_size

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
| ****formatted_size****(C++20) | | | | |
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
| template< class... Args >  std::size_t formatted_size( std::format_string<Args...> fmt, Args&&... args ); | (1) | (since C++20) |
| template< class... Args >  std::size_t formatted_size( std::wformat_string<Args...> fmt, Args&&... args ); | (2) | (since C++20) |
| template< class... Args >  std::size_t formatted_size( const std::locale& loc, std::format_string<Args...> fmt, Args&&... args ); | (3) | (since C++20) |
| template< class... Args >  std::size_t formatted_size( const std::locale& loc, std::wformat_string<Args...> fmt, Args&&... args ); | (4) | (since C++20) |
|  |  |  |

Determine the total number of characters in the formatted string by formatting args according to the format string fmt. If present, loc is used for locale-specific formatting.

The behavior is undefined if std::formatter<std::remove_cvref_t<Ti>, CharT> does not meet the BasicFormatter requirements for any `Ti` in `Args`.

### Parameters

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| fmt | - | an object that represents the format string. The format string consists of  - ordinary characters (except { and }), which are copied unchanged to the output, - escape sequences {{ and }}, which are replaced with { and } respectively in the output, and - replacement fields.   Each replacement field has the following format:   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{` arg-id (optional) `}` | (1) |  | |  | | | | | | | | | | | `{` arg-id (optional) `:` format-spec `}` | (2) |  | |  | | | | | | | | | |  1) replacement field without a format specification2) replacement field with a format specification  |  |  |  | | --- | --- | --- | | arg-id | - | specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error. | | format-spec | - | the format specification defined by the std::formatter specialization for the corresponding argument. Cannot start with }. |      - For basic types and standard string types, the format specification is interpreted as standard format specification. - For chrono types, the format specification is interpreted as chrono format specification.  |  |  | | --- | --- | | - For range types, the format specification is interpreted as range format specification. - For std::pair and std::tuple, the format specification is interpreted as tuple format specification. - For std::thread::id and std::stacktrace_entry, see thread id format specification and stacktrace entry format specification. - For std::basic_stacktrace, no format specifier is allowed. | (since C++23) |  |  |  | | --- | --- | | - For std::filesystem::path, see path format specification. | (since C++26) |  - For other formattable types, the format specification is determined by user-defined `formatter` specializations. |
| args... | - | arguments to be formatted |
| loc | - | std::locale used for locale-specific formatting |

### Return value

The total number of characters in the formatted string.

### Exceptions

Propagates any exception thrown by formatter.

### Example

Run this code

```
#include <format>
#include <iomanip>
#include <iostream>
#include <string_view>
#include <vector>
 
int main()
{
    using namespace std::literals::string_view_literals;
 
    constexpr auto fmt_str{"Hubble's H{0} {1} {2:*^4} miles/sec/mpc."sv};
    constexpr auto sub_zero{"\N{SUBSCRIPT ZERO}"sv}; // "₀" or {0342, 130, 128}
    constexpr auto aprox_equ{"\N{APPROXIMATELY EQUAL TO}"sv}; // "≅" or {0342, 137, 133}
    constexpr int Ho{42}; // H₀
 
    const auto min_buffer_size{std::formatted_size(fmt_str, sub_zero, aprox_equ, Ho)};
    std::cout << "Min buffer size = " << min_buffer_size << '\n';
 
    // Use std::vector as dynamic buffer. The buffer does not include the trailing '\0'.
    std::vector<char> buffer(min_buffer_size);
 
    std::format_to_n(buffer.data(), buffer.size(), fmt_str, sub_zero, aprox_equ, Ho);
    std::cout << "Buffer: "
              << std::quoted(std::string_view{buffer.data(), min_buffer_size})
              << '\n';
 
    // Print the buffer directly after adding the trailing '\0'.
    buffer.push_back('\0');
    std::cout << "Buffer: " << std::quoted(buffer.data()) << '\n';
}

```

Output:

```
Min buffer size = 37
Buffer: "Hubble's H₀ ≅ *42* miles/sec/mpc."
Buffer: "Hubble's H₀ ≅ *42* miles/sec/mpc."

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P2216R3 | C++20 | throws std::format_error for invalid format string | invalid format string results in compile-time error |
| P2418R2 | C++20 | objects that are neither const-usable nor copyable (such as generator-like objects) are not formattable | allow formatting these objects |
| P2508R1 | C++20 | there's no user-visible name for this facility | the name `basic_format_string` is exposed |

### See also

|  |  |
| --- | --- |
| format_to(C++20) | writes out formatted representation of its arguments through an output iterator   (function template) |
| format_to_n(C++20) | writes out formatted representation of its arguments through an output iterator, not exceeding specified size   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/formatted_size&oldid=173441>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 July 2024, at 13:08.