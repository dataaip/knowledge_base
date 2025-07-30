# std::basic_format_context

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
| ****basic_format_contextformat_contextwformat_context****(C++20)(C++20)(C++20) | | | | |
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
| template< class OutputIt, class CharT >  class basic_format_context; | (1) | (since C++20) |
| using format_context = basic_format_context</\* unspecified \*/, char>; | (2) | (since C++20) |
| using wformat_context = basic_format_context</\* unspecified \*/, wchar_t>; | (3) | (since C++20) |
|  |  |  |

Provides access to formatting state consisting of the formatting arguments and the output iterator.

2) The unspecified template argument is an output iterator that appends to std::string, such as std::back_insert_iterator<std::string>. Implementations typically use an iterator to type-erased buffer type that supports appending to any contiguous and resizable container.3) The unspecified template argument is an output iterator that appends to std::wstring.

The behavior is undefined if `OutputIt` does not model std::output_iterator<const CharT&>.

A program that declares an explicit or partial specialization of `std::basic_format_context` is ill-formed, no diagnostic required.

`std::basic_format_context` objects can only be created by the implementation. User codes are only allowed to modify the format context via the `format` function of std::formatter specializations.

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `iterator` | `OutputIt` |
| `char_type` | `CharT` |

### Member alias templates

|  |  |
| --- | --- |
| Type | Definition |
| formatter_type<T> | std::formatter<T, CharT> |

### Member functions

|  |  |
| --- | --- |
| (constructor)[deleted] | `basic_format_context` cannot be constructed by user code   (public member function) |
| operator=[deleted] | `basic_format_context` is not assignable   (public member function) |
| arg | returns the argument at the given index   (public member function) |
| locale | returns the locale used for locale-specific formatting   (public member function) |
| out | returns the iterator to output buffer   (public member function) |
| advance_to | advances the output iterator to the given position   (public member function) |

## std::basic_format_context::arg

|  |  |  |
| --- | --- | --- |
| std::basic_format_arg<basic_format_context> arg( std::size_t id ) const; |  |  |
|  |  |  |

Returns a `std::basic_format_arg` holding the `id`-th argument in `args`, where `args` is the parameter pack or `std::basic_format_args` object passed to the formatting function.

If `id` is not less than the number of formatting arguments, returns a default-constructed `std::basic_format_arg` (holding a std::monostate object).

## std::basic_format_context::locale

|  |  |  |
| --- | --- | --- |
| std::locale locale(); |  |  |
|  |  |  |

Returns the locale passed to the formatting function, or a default-constructed std::locale if the formatting function does not take a locale.

## std::basic_format_context::out

|  |  |  |
| --- | --- | --- |
| iterator out(); |  |  |
|  |  |  |

Returns the iterator to the output buffer. The result is move-constructed from the stored iterator.

## std::basic_format_context::advance_to

|  |  |  |
| --- | --- | --- |
| void advance_to( iterator it ); |  |  |
|  |  |  |

Move assigns `it` to the stored output iterator. After a call to `advance_to`, the next call to `out()` will return an iterator with the value that `it` had before the assignment.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3567 | C++20 | `basic_format_context` does not work move-only iterator types | made to move iterators |
| LWG 3975 | C++20 | user specialization of `basic_format_context` was allowed | disallowed |
| LWG 4061 | C++20 | `basic_format_context` was constructible and assignable by user code | made neither constructible nor assignable |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_context&oldid=173188>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 July 2024, at 00:04.