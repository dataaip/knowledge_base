# std::format

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
| ****format****(C++20) | | | | |
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
| template< class... Args >  std::string format( std::format_string<Args...> fmt, Args&&... args ); | (1) | (since C++20) |
| template< class... Args >  std::wstring format( std::wformat_string<Args...> fmt, Args&&... args ); | (2) | (since C++20) |
| template< class... Args >  std::string format( const std::locale& loc, std::format_string<Args...> fmt, Args&&... args ); | (3) | (since C++20) |
| template< class... Args >  std::wstring format( const std::locale& loc, std::wformat_string<Args...> fmt, Args&&... args ); | (4) | (since C++20) |
|  |  |  |

Format args according to the format string fmt, and return the result as a string. If present, loc is used for locale-specific formatting.

1) Equivalent to return std::vformat(fmt.get(), std::make_format_args(args...));.2) Equivalent to return std::vformat(fmt.get(), std::make_wformat_args(args...));.3) Equivalent to return std::vformat(loc, fmt.get(), std::make_format_args(args...));.4) Equivalent to return std::vformat(loc, fmt.get(), std::make_wformat_args(args...));.

Since P2216R3, `std::format` does a compile-time check on the format string (via the helper type std::format_string or std::wformat_string). If it is found to be invalid for the types of the arguments to be formatted, a compilation error will be emitted. If the format string cannot be a compile-time constant, or the compile-time check needs to be avoided, use std::vformat or `std::runtime_format` on fmt(since C++26) instead.

The following requirements apply to each type `T` in `Args`, where `CharT` is char for overloads (1,3), wchar_t for overloads (2,4):

- std::formatter<T, CharT> must satisfy BasicFormatter
- std::formatter<T, CharT>::parse() must be constexpr since P2216R3 (std::vformat does not have this requirement)

### Parameters

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| fmt | - | an object that represents the format string. The format string consists of  - ordinary characters (except { and }), which are copied unchanged to the output, - escape sequences {{ and }}, which are replaced with { and } respectively in the output, and - replacement fields.   Each replacement field has the following format:   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{` arg-id (optional) `}` | (1) |  | |  | | | | | | | | | | | `{` arg-id (optional) `:` format-spec `}` | (2) |  | |  | | | | | | | | | |  1) replacement field without a format specification2) replacement field with a format specification  |  |  |  | | --- | --- | --- | | arg-id | - | specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error. | | format-spec | - | the format specification defined by the std::formatter specialization for the corresponding argument. Cannot start with }. |      - For basic types and standard string types, the format specification is interpreted as standard format specification. - For chrono types, the format specification is interpreted as chrono format specification.  |  |  | | --- | --- | | - For range types, the format specification is interpreted as range format specification. - For std::pair and std::tuple, the format specification is interpreted as tuple format specification. - For std::thread::id and std::stacktrace_entry, see thread id format specification and stacktrace entry format specification. - For std::basic_stacktrace, no format specifier is allowed. | (since C++23) |  |  |  | | --- | --- | | - For std::filesystem::path, see path format specification. | (since C++26) |  - For other formattable types, the format specification is determined by user-defined `formatter` specializations. |
| args... | - | arguments to be formatted |
| loc | - | std::locale used for locale-specific formatting |

### Return value

A string object holding the formatted result.

### Exceptions

Throws std::bad_alloc on allocation failure. Also propagates exception thrown by any formatter.

### Notes

It is not an error to provide more arguments than the format string requires:

```
std::format("{} {}!", "Hello", "world", "something"); // OK, produces "Hello world!"

```

As of P2216R3, it is an error if the format string is not a constant expression. std::vformat can be used in this case.

```
std::string f(std::string_view runtime_format_string)
{
    // return std::format(runtime_format_string, "foo", "bar"); // error
    return std::vformat(runtime_format_string, std::make_format_args("foo", "bar")); // OK
}

```

|  |  |
| --- | --- |
| std::runtime_format can be used directly on `std::format` instead of std::vformat which requires std::basic_format_args as an argument.   ```text std::string f(std::string_view runtime_format_string) {     return std::format(std::runtime_format(runtime_format_string), "foo", "bar"); } ``` | (since C++26) |

### Example

Run this code

```
#include <format>
#include <iostream>
#include <string>
#include <string_view>
 
template<typename... Args>
std::string dyna_print(std::string_view rt_fmt_str, Args&&... args)
{
    return std::vformat(rt_fmt_str, std::make_format_args(args...));
}
 
int main()
{
    std::cout << std::format("Hello {}!\n", "world");
 
    std::string fmt;
    for (int i{}; i != 3; ++i)
    {
        fmt += "{} "; // constructs the formatting string
        std::cout << fmt << " : ";
        std::cout << dyna_print(fmt, "alpha", 'Z', 3.14, "unused");
        std::cout << '\n';
    }
}

```

Output:

```
Hello world!
{}  : alpha
{} {}  : alpha Z
{} {} {}  : alpha Z 3.14

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

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format&oldid=171996>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 May 2024, at 02:46.