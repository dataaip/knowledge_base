# std::from_chars

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | ****from_chars****(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<charconv>` |  |  |
| std::from_chars_result      from_chars( const char\* first, const char\* last, /\* integer-type \*/& value, int base = 10 ); | (1) | (since C++17)  (constexpr since C++23) |
| std::from_chars_result      from_chars( const char\* first, const char\* last,                  /\* floating-point-type \*/& value, std::chars_format fmt = std::chars_format::general ); | (2) | (since C++17) |
|  |  |  |

Analyzes the character sequence ``first`,`last`)` for a pattern described below. If no characters match the pattern or if the value obtained by parsing the matched characters is not representable in the type of value, value is unmodified, otherwise the characters matching the pattern are interpreted as a text representation of an arithmetic value, which is stored in value.

1) Integer parsers: Expects the pattern identical to the one used by [std::strtol in the default ("C") locale and the given non-zero numeric base, except that

- "0x" or "0X" prefixes are not recognized if base is 16
- only the minus sign is recognized (not the plus sign), and only for signed integer types of value
- leading whitespace is not ignored.

The library provides overloads for all cv-unqualified(since C++23) signed and unsigned integer types and char as the referenced type of the parameter value.2) Floating-point parsers: Expects the pattern identical to the one used by std::strtod in the default ("C") locale, except that

- the plus sign is not recognized outside of the exponent (only the minus sign is permitted at the beginning)
- if `fmt` has std::chars_format::scientific set but not std::chars_format::fixed, the exponent part is required (otherwise it is optional)
- if `fmt` has std::chars_format::fixed set but not std::chars_format::scientific, the optional exponent is not permitted
- if `fmt` is std::chars_format::hex, the prefix "0x" or "0X" is not permitted (the string "0x123" parses as the value "0" with unparsed remainder "x123")
- leading whitespace is not ignored.
 In any case, the resulting value is one of at most two floating-point values closest to the value of the string matching the pattern, after rounding according to std::round_to_nearest. The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the referenced type of the parameter value.

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | valid character range to parse |
| value | - | the out-parameter where the parsed value is stored if successful |
| base | - | integer base to use: a value between 2 and 36 (inclusive). |
| fmt | - | floating-point formatting to use, a bitmask of type std::chars_format |

### Return value

On success, returns a value of type std::from_chars_result such that `ptr` points at the first character not matching the pattern, or has the value equal to last if all characters match and `ec` is value-initialized.

If there is no pattern match, returns a value of type std::from_chars_result such that `ptr` equals first and `ec` equals std::errc::invalid_argument. value is unmodified.

If the pattern was matched, but the parsed value is not in the range representable by the type of value, returns value of type std::from_chars_result such that `ec` equals std::errc::result_out_of_range and `ptr` points at the first character not matching the pattern. value is unmodified.

### Exceptions

Throws nothing.

### Notes

Unlike other parsing functions in C++ and C libraries, `std::from_chars` is locale-independent, non-allocating, and non-throwing. Only a small subset of parsing policies used by other libraries (such as std::sscanf) is provided. This is intended to allow the fastest possible implementation that is useful in common high-throughput contexts such as text-based interchange (JSON or XML).

The guarantee that `std::from_chars` can recover every floating-point value formatted by std::to_chars exactly is only provided if both functions are from the same implementation.

A pattern consisting of a sign with no digits following it is treated as pattern that did not match anything.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_to_chars` | `201611L` | (C++17) | Elementary string conversions (`std::from_chars`, std::to_chars) |
| `202306L` | (C++26) | Testing for success or failure of <charconv> functions |
| `__cpp_lib_constexpr_charconv` | `202207L` | (C++23) | Add constexpr modifiers to `std::from_chars` and std::to_chars overloads for integral types |

### Example

Run this code

```
#include <cassert>
#include <charconv>
#include <iomanip>
#include <iostream>
#include <optional>
#include <string_view>
#include <system_error>
 
int main()
{
    for (std::string_view const str : {"1234", "15 foo", "bar", " 42", "5000000000"})
    {
        std::cout << "String: " << std::quoted(str) << ". ";
        int result{};
        auto [ptr, ec] = std::from_chars(str.data(), str.data() + str.size(), result);
 
        if (ec == std::errc())
            std::cout << "Result: " << result << ", ptr -> " << std::quoted(ptr) << '\n';
        else if (ec == std::errc::invalid_argument)
            std::cout << "This is not a number.\n";
        else if (ec == std::errc::result_out_of_range)
            std::cout << "This number is larger than an int.\n";
    }
 
    // C++23's constexpr from_char demo / C++26's operator bool() demo:
    auto to_int = [](std::string_view s) -> std::optional<int>
    {
        int value{};
#if __cpp_lib_to_chars >= 202306L
        if (std::from_chars(s.data(), s.data() + s.size(), value))
#else
        if (std::from_chars(s.data(), s.data() + s.size(), value).ec == std::errc{})
#endif
            return value;
        else
            return std::nullopt;
    };
 
    assert(to_int("42") == 42);
    assert(to_int("foo") == std::nullopt);
#if __cpp_lib_constexpr_charconv and __cpp_lib_optional >= 202106
    static_assert(to_int("42") == 42);
    static_assert(to_int("foo") == std::nullopt);
#endif
}

```

Output:

```
String: "1234". Result: 1234, ptr -> ""
String: "15 foo". Result: 15, ptr -> " foo"
String: "bar". This is not a number.
String: " 42". This is not a number.
String: "5000000000". This number is larger than an int.

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2955 | C++17 | this function was in <utility> and used std::error_code | moved to <charconv> and uses std::errc |
| LWG 3373 | C++17 | `std::from_chars_result` might have additional members | additional members are prohibited |

### See also

|  |  |
| --- | --- |
| from_chars_result(C++17) | the return type of ****std::from_chars****   (class) |
| to_chars(C++17) | converts an integer or floating-point value to a character sequence   (function) |
| stoistolstoll(C++11)(C++11)(C++11) | converts a string to a signed integer   (function) |
| stofstodstold(C++11)(C++11)(C++11) | converts a string to a floating point value   (function) |
| strtolstrtoll(C++11) | converts a byte string to an integer value   (function) |
| strtofstrtodstrtold | converts a byte string to a floating-point value   (function) |
| scanffscanfsscanf | reads formatted input from stdin, a file stream or a buffer   (function) |
| operator>> | extracts formatted data   (public member function of `std::basic_istream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/from_chars&oldid=179101>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 January 2025, at 21:54.