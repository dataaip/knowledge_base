# std::format_to_n, std::format_to_n_result

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
| ****format_to_n****(C++20) | | | | |
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
| template< class OutputIt, class... Args >  std::format_to_n_result<OutputIt>      format_to_n( OutputIt out, std::iter_difference_t<OutputIt> n, std::format_string<Args...> fmt, Args&&... args ); | (1) | (since C++20) |
| template< class OutputIt, class... Args >  std::format_to_n_result<OutputIt>      format_to_n( OutputIt out, std::iter_difference_t<OutputIt> n, std::wformat_string<Args...> fmt, Args&&... args ); | (2) | (since C++20) |
| template< class OutputIt, class... Args >  std::format_to_n_result<OutputIt>      format_to_n( OutputIt out, std::iter_difference_t<OutputIt> n,                   const std::locale& loc, std::format_string<Args...> fmt, Args&&... args ); | (3) | (since C++20) |
| template< class OutputIt, class... Args >  std::format_to_n_result<OutputIt>      format_to_n( OutputIt out, std::iter_difference_t<OutputIt> n,                   const std::locale& loc, std::wformat_string<Args...> fmt, Args&&... args ); | (4) | (since C++20) |
| Helper types |  |  |
| template< class OutputIt >  struct format_to_n_result {      OutputIt out;      std::iter_difference_t<OutputIt> size; }; | (5) | (since C++20) |
|  |  |  |

Format args according to the format string fmt, and write the result to the output iterator out. At most n characters are written. If present, loc is used for locale-specific formatting.

Let `CharT` be char for overloads (1,3), wchar_t for overloads (2,4).

These overloads participate in overload resolution only if
`OutputIt` satisfies the concept std::output_iterator<const CharT&>.

The behavior is undefined if `OutputIt` does not model (meet the semantic requirements of) the concept std::output_iterator<const CharT&>, or if std::formatter<std::remove_cvref_t<Ti>, CharT> does not meet the BasicFormatter requirements for any `Ti` in `Args`.

5) `std::format_to_n_result` has no base classes, or members other than out, `size` and implicitly declared special member functions.

### Parameters

|  |  |  |
| --- | --- | --- |
| out | - | iterator to the output buffer |
| n | - | maximum number of characters to be written to the buffer |
| fmt | - | an object that represents the format string. The format string consists of  - ordinary characters (except { and }), which are copied unchanged to the output, - escape sequences {{ and }}, which are replaced with { and } respectively in the output, and - replacement fields.   Each replacement field has the following format:   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{` arg-id (optional) `}` | (1) |  | |  | | | | | | | | | | | `{` arg-id (optional) `:` format-spec `}` | (2) |  | |  | | | | | | | | | |  1) replacement field without a format specification2) replacement field with a format specification  |  |  |  | | --- | --- | --- | | arg-id | - | specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error. | | format-spec | - | the format specification defined by the std::formatter specialization for the corresponding argument. Cannot start with }. |      - For basic types and standard string types, the format specification is interpreted as standard format specification. - For chrono types, the format specification is interpreted as chrono format specification.  |  |  | | --- | --- | | - For range types, the format specification is interpreted as range format specification. - For std::pair and std::tuple, the format specification is interpreted as tuple format specification. - For std::thread::id and std::stacktrace_entry, see thread id format specification and stacktrace entry format specification. - For std::basic_stacktrace, no format specifier is allowed. | (since C++23) |  |  |  | | --- | --- | | - For std::filesystem::path, see path format specification. | (since C++26) |  - For other formattable types, the format specification is determined by user-defined `formatter` specializations. |
| args... | - | arguments to be formatted |
| loc | - | std::locale used for locale-specific formatting |

### Return value

A `format_to_n_result` such that the out member is an iterator past the end of the output range, and the `size` member is the total (not truncated) output size.

### Exceptions

Propagates any exception thrown by formatter or iterator operations.

### Notes

The libstdc++ implementation prior to GCC-13.3 had a bug in reporting the correct format_to_n_result::out value.

### Example

At Godbolt's Compiler Explorer: clang (trunk) + libc++, GCC (trunk) + libstdc++.

Run this code

```
#include <format>
#include <initializer_list>
#include <iomanip>
#include <iostream>
#include <string_view>
 
int main()
{
    char buffer[64];
 
    for (std::size_t max_chars_to_write : {std::size(buffer) - 1, 23uz, 21uz})
    {
        const std::format_to_n_result result =
            std::format_to_n(
                buffer, max_chars_to_write,
                "Hubble's H{2} {3} {0}{4}{1} km/sec/Mpc.", // 24 bytes w/o formatters
                71,       // {0}, occupies 2 bytes
                8,        // {1}, occupies 1 byte
                "\u2080", // {2}, occupies 3 bytes, '₀' (SUBSCRIPT ZERO)
                "\u2245", // {3}, occupies 3 bytes, '≅' (APPROXIMATELY EQUAL TO)
                "\u00B1"  // {4}, occupies 2 bytes, '±' (PLUS-MINUS SIGN)
                ); // 24 + 2 + 1 + 3 + 3 + 2 == 35, no trailing '\0'
 
        *result.out = '\0'; // adds terminator to buffer
 
        const std::string_view str(buffer, result.out);
 
        std::cout << "Buffer until '\\0': " << std::quoted(str) << '\n'
                  << "Max chars to write: " << max_chars_to_write << '\n'
                  << "result.out offset: " << result.out - buffer << '\n'
                  << "Untruncated output size: " << result.size << "\n\n";
    }
}

```

Output:

```
Buffer until '\0': "Hubble's H₀ ≅ 71±8 km/sec/Mpc."
Max chars to write: 63
result.out offset: 35
Untruncated output size: 35
 
Buffer until '\0': "Hubble's H₀ ≅ 71±8"
Max chars to write: 23
result.out offset: 23
Untruncated output size: 35
 
Buffer until '\0': "Hubble's H₀ ≅ 71�"
Max chars to write: 21
result.out offset: 21
Untruncated output size: 35

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
| format(C++20) | stores formatted representation of the arguments in a new string   (function template) |
| format_to(C++20) | writes out formatted representation of its arguments through an output iterator   (function template) |
| formatted_size(C++20) | determines the number of characters necessary to store the formatted representation of its arguments   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&oldid=173440>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 July 2024, at 12:37.