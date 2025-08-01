# std::make_format_args, std::make_wformat_args

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
| format_kind(C++23) | | | | |
| Formatting arguments | | | | |
| basic_format_arg(C++20) | | | | |
| basic_format_arg::handle(C++20) | | | | |
| basic_format_argsformat_argswformat_args(C++20)(C++20)(C++20) | | | | |
| visit_format_arg(C++20) (deprecated in C++26) | | | | |
| ****make_format_argsmake_wformat_args****(C++20)(C++20) | | | | |
| Format error | | | | |
| format_error(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<format>` |  |  |
| template< class Context = std::format_context, class... Args >  /\*format-arg-store\*/<Context, Args...>     make_format_args( Args&... args ); | (1) | (since C++20) |
| template< class... Args >  /\*format-arg-store\*/<std::wformat_context, Args...>     make_wformat_args( Args&... args ); | (2) | (since C++20) |
|  |  |  |

Returns an object that stores an array of formatting arguments and can be implicitly converted to std::basic_format_args<Context>.

The behavior is undefined if typename Context::template formatter_type<std::remove_const_t<Ti>> does not meet the BasicFormatter requirements for any `Ti` in `Args`.

The program is ill-formed if for any type `Ti` in `Args`, `Ti` does not satisfy **__formattable_with**<Context>.

2) Equivalent to return std::make_format_args<std::wformat_context>(args...);.

### Parameters

|  |  |  |
| --- | --- | --- |
| args... | - | values to be used as formatting arguments |

### Returns

An object that holds the formatting arguments.

For each argument `t` of type `T`, let `TD` be std::remove_const_t<std::remove_reference_t<T>>. The corresponding std::basic_format_arg in the result is determined as below:

- if `TD` is bool or `Context::char_type`, the std::basic_format_arg stores t;
- otherwise, if `TD` is char and `Context::char_type` is wchar_t, the std::basic_format_arg stores static_cast<wchar_t>(static_cast<unsigned char>(t));
- otherwise, if `TD` is a signed integer type whose size is not greater than int, the std::basic_format_arg stores static_cast<int>(t);
- otherwise, if `TD` is a unsigned integer type whose size is not greater than unsigned int, the std::basic_format_arg stores static_cast<unsigned int>(t);
- otherwise, if `TD` is a signed integer type whose size is not greater than long long, the std::basic_format_arg stores static_cast<long long>(t);
- otherwise, if `TD` is a unsigned integer type whose size is not greater than unsigned long long, the std::basic_format_arg stores static_cast<unsigned long long>(t);
- otherwise, if `TD` is float, double, or long double, the std::basic_format_arg stores t;
- otherwise, if `TD` is a std::basic_string_view or std::basic_string specialization and `TD::char_type` is `Context::char_type`, the std::basic_format_arg stores std::basic_string_view<Context::char_type>(t.data(), t.size());
- otherwise, if std::decay_t<TD> is Context::char_type\* or const Context::char_type\*, the std::basic_format_arg stores static_cast<const Context::char_type\*>(t);
- otherwise, if std::is_void_v<std::remove_pointer_t<TD>> is true or std::is_null_pointer_v<TD> is true, the std::basic_format_arg stores static_cast<const void\*>(t);
- otherwise, the std::basic_format_arg stores a std::basic_format_arg<Context>::handle to `t`, along with extra data needed for `handle::format()`.

### Notes

A formatting argument has reference semantics for user-defined types and does not extend the lifetime of args. It is the programmer's responsibility to ensure that args outlive the return value. Usually, the result is only used as argument to formatting function.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_format_uchar` | `202311L` | (C++20) (DR) | Formatting of code units as unsigned integers |

### Example

Run this code

```
#include <array>
#include <format>
#include <iostream>
#include <string_view>
 
void raw_write_to_log(std::string_view users_fmt, std::format_args&& args)
{
    static int n{};
    std::clog << std::format("{:04} : ", n++) << std::vformat(users_fmt, args) << '\n';
}
 
template<typename... Args>
constexpr void log(Args&&... args)
{
    // Generate formatting string "{} "...
    std::array<char, sizeof...(Args) * 3 + 1> braces{};
    constexpr const char c[4] = "{} ";
    for (auto i{0uz}; i != braces.size() - 1; ++i)
        braces[i] = c[i % 3];
    braces.back() = '\0';
 
    raw_write_to_log(std::string_view{braces.data()}, std::make_format_args(args...));
}
 
template<typename T>
const T& unmove(T&& x)
{
    return x;
}
 
int main()
{
    log("Number", "of", "arguments", "is", "arbitrary.");
    log("Any type that meets the BasicFormatter requirements", "can be printed.");
    log("For example:", 1, 2.0, '3', "*42*");
 
    raw_write_to_log("{:02} │ {} │ {} │ {}",
                     std::make_format_args(unmove(1), unmove(2.0), unmove('3'), "4"));
}

```

Output:

```
0000 : Number of arguments is arbitrary.
0001 : Any type that meets the BasicFormatter requirements can be printed.
0002 : For example: 1 2.0 3 *42*
0003 : 01 │ 2.0 │ 3 │ 4

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P2418R2 | C++20 | objects that are neither const-usable nor copyable (such as generator-like objects) are not formattable | allow formatting these objects |
| P2905R2 | C++20 | `make_format_args` accepted rvalue arguments by forwarding references | only takes lvalue references |
| P2909R4 | C++20 | char or wchar_t might be formatted as out-of-range unsigned integer values | code units are converted to the corresponding unsigned type before such formatting |
| LWG 3631 | C++20 | cv-qualified arguments were incorrectly handled after P2418R2 | handling corrected |

### See also

|  |  |
| --- | --- |
| basic_format_argsformat_argswformat_args(C++20)(C++20)(C++20) | class that provides access to all formatting arguments   (class template) |
| vformat(C++20) | non-template variant of std::format using type-erased argument representation   (function) |
| vformat_to(C++20) | non-template variant of std::format_to using type-erased argument representation   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&oldid=169943>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 February 2024, at 13:24.