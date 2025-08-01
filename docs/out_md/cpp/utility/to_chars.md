# std::to_chars

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****to_chars****(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<charconv>` |  |  |
| std::to_chars_result      to_chars( char\* first, char\* last, /\* integer-type \*/ value, int base = 10 ); | (1) | (since C++17)  (constexpr since C++23) |
| std::to_chars_result      to_chars( char\*, char\*, bool, int = 10 ) = delete; | (2) | (since C++17) |
| std::to_chars_result      to_chars( char\* first, char\* last, /\* floating-point-type \*/ value ); | (3) | (since C++17) |
| std::to_chars_result      to_chars( char\* first, char\* last, /\* floating-point-type \*/ value, std::chars_format fmt ); | (4) | (since C++17) |
| std::to_chars_result      to_chars( char\* first, char\* last, /\* floating-point-type \*/ value, std::chars_format fmt, int precision ); | (5) | (since C++17) |
|  |  |  |

Converts value into a character string by successively filling the range ``first`,`last`)`, where `[`first`,`last`)` is required to be a [valid range.

1) Integer formatters: value is converted to a string of digits in the given base (with no redundant leading zeroes). Digits in the range `10..35` (inclusive) are represented as lowercase characters `a..z`. If value is less than zero, the representation starts with a minus sign. The library provides overloads for all cv-unqualified(since C++23) signed and unsigned integer types and for the type char as the type of the parameter value.2) Overload for bool is deleted. `std::to_chars` rejects argument of type bool because the result would be "0"/"1" but not "false"/"true" if it is permitted.3) value is converted to a string as if by std::printf in the default ("C") locale. The conversion specifier is f or e (resolving in favor of f in case of a tie), chosen according to the requirement for a shortest representation: the string representation consists of the smallest number of characters such that there is at least one digit before the radix point (if present) and parsing the representation using the corresponding std::from_chars function recovers value exactly. If there are several such representations, one with the smallest difference to value is chosen, resolving any remaining ties using rounding according to std::round_to_nearest. The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the type of the parameter value.4) Same as (3), but the conversion specified for the as-if printf is f if fmt is std::chars_format::fixed, e if fmt is std::chars_format::scientific, a (but without leading "0x" in the result) if fmt is std::chars_format::hex, and g if fmt is chars_format::general. The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the type of the parameter value.5) Same as (4), except the precision is specified by the parameter precision rather than by the shortest representation requirement. The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the type of the parameter value.

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | character range to write to |
| value | - | the value to convert to its string representation |
| base | - | integer base to use: a value between 2 and 36 (inclusive). |
| fmt | - | floating-point formatting to use, a bitmask of type std::chars_format |
| precision | - | floating-point precision to use |

### Return value

On success, returns a value of type std::to_chars_result such that `ec` equals value-initialized std::errc and `ptr` is the one-past-the-end pointer of the characters written. Note that the string is **not** NUL-terminated.

On error, returns a value of type std::to_chars_result holding std::errc::value_too_large in `ec`, a copy of the value last in `ptr`, and leaves the contents of the range ``first`,`last`)` in unspecified state.

### Exceptions

Throws nothing.

### Notes

Unlike other formatting functions in C++ and C libraries, `std::to_chars` is locale-independent, non-allocating, and non-throwing. Only a small subset of formatting policies used by other libraries (such as [std::sprintf) is provided. This is intended to allow the fastest possible implementation that is useful in common high-throughput contexts such as text-based interchange (JSON or XML).

The guarantee that std::from_chars can recover every floating-point value formatted by `std::to_chars` exactly is only provided if both functions are from the same implementation.

It is required to explicitly cast a bool value to another integer type if it is wanted to format the value as "0"/"1".

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_to_chars` | `201611L` | (C++17) | Elementary string conversions (`std::to_chars`, std::from_chars) |
| `202306L` | (C++26) | Testing for success or failure of <charconv> functions |
| `__cpp_lib_constexpr_charconv` | `202207L` | (C++23) | Add constexpr modifiers to `std::to_chars` and std::from_chars overloads (1) for integral types |

### Example

Run this code

```
#include <charconv>
#include <iomanip>
#include <iostream>
#include <string_view>
#include <system_error>
 
void show_to_chars(auto... format_args)
{
    const size_t buf_size = 10;
    char buf[buf_size]{};
    std::to_chars_result result = std::to_chars(buf, buf + buf_size, format_args...);
 
    if (result.ec != std::errc())
        std::cout << std::make_error_code(result.ec).message() << '\n';
    else
    {
        std::string_view str(buf, result.ptr - buf);
        std::cout << std::quoted(str) << '\n';
    }
}
 
int main()
{
    show_to_chars(42);
    show_to_chars(+3.14159F);
    show_to_chars(-3.14159, std::chars_format::fixed);
    show_to_chars(-3.14159, std::chars_format::scientific, 3);
    show_to_chars(3.1415926535, std::chars_format::fixed, 10);
}

```

Possible output:

```
"42"
"3.14159"
"-3.14159"
"-3.142e+00"
Value too large for defined data type

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2955 | C++17 | this function was in <utility> and used std::error_code | moved to <charconv> and uses std::errc |
| LWG 3266 | C++17 | bool argument was accepted and promoted to int | rejected by a deleted overload |
| LWG 3373 | C++17 | `std::to_chars_result` might have additional members | additional members are disallowed |

### See also

|  |  |
| --- | --- |
| to_chars_result(C++17) | the return type of ****std::to_chars****   (class) |
| from_chars(C++17) | converts a character sequence to an integer or floating-point value   (function) |
| to_string(C++11) | converts an integral or floating-point value to `string`   (function) |
| printffprintfsprintfsnprintf(C++11) | prints formatted output to stdout, a file stream or a buffer   (function) |
| operator<< | inserts formatted data   (public member function of `std::basic_ostream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/to_chars&oldid=179100>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 January 2025, at 21:54.