# std::format_error

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
| make_format_argsmake_wformat_args(C++20)(C++20) | | | | |
| Format error | | | | |
| ****format_error****(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<format>` |  |  |
| class format_error; |  | (since C++20) |
|  |  |  |

Defines the type of exception object thrown to report errors in the formatting library.

!std-format error-inheritance.svg

Inheritance diagram

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `format_error` object with the given message   (public member function) |
| operator= | replaces the `format_error` object   (public member function) |

## std::format_error::format_error

|  |  |  |
| --- | --- | --- |
| format_error( const std::string& what_arg ); | (1) |  |
| format_error( const char\* what_arg ); | (2) |  |
| format_error( const format_error& other ) noexcept; | (3) |  |
|  |  |  |

1) Constructs the exception object with what_arg as explanatory string. After construction, std::strcmp(what(), what_arg.c_str()) == 0.2) Constructs the exception object with what_arg as explanatory string. After construction, std::strcmp(what(), what_arg) == 0.3) Copy constructor. If \*this and other both have dynamic type `std::format_error` then std::strcmp(what(), other.what()) == 0. No exception can be thrown from the copy constructor.

### Parameters

|  |  |  |
| --- | --- | --- |
| what_arg | - | explanatory string |
| other | - | another exception object to copy |

### Exceptions

1,2) May throw std::bad_alloc.

### Notes

Because copying `std::format_error` is not permitted to throw exceptions, this message is typically stored internally as a separately-allocated reference-counted string. This is also why there is no constructor taking `std::string&&`: it would have to copy the content anyway.

A derived standard exception class must have a publicly accessible copy constructor. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object.

## std::format_error::operator=

|  |  |  |
| --- | --- | --- |
| format_error& operator=( const format_error& other ) noexcept; |  |  |
|  |  |  |

Assigns the contents with those of other. If \*this and other both have dynamic type `std::format_error` then std::strcmp(what(), other.what()) == 0 after assignment. No exception can be thrown from the copy assignment operator.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another exception object to assign with |

### Return value

\*this

### Notes

A derived standard exception class must have a publicly accessible copy assignment operator. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object.

## Inherited from std::runtime_error

## Inherited from std::exception

### Member functions

|  |  |
| --- | --- |
| (destructor)[virtual] | destroys the exception object   (virtual public member function of `std::exception`) |
| what[virtual] | returns an explanatory string   (virtual public member function of `std::exception`) |

### Example

Run this code

```
#include <format>
#include <print>
#include <string_view>
#include <utility>
 
int main()
{
    try
    {
        auto x13{37};
        auto args{std::make_format_args(x13)};
        std::ignore = std::vformat("{:()}", args); // throws
    }
    catch(const std::format_error& ex)
    {
        std::println("{}", ex.what());
    }
}

```

Possible output:

```
format error: failed to parse format-spec

```

### See also

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_error&oldid=176330>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 September 2024, at 02:35.