# std::basic_format_args

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
| ****basic_format_argsformat_argswformat_args****(C++20)(C++20)(C++20) | | | | |
| visit_format_arg(C++20) (deprecated in C++26) | | | | |
| make_format_argsmake_wformat_args(C++20)(C++20) | | | | |
| Format error | | | | |
| format_error(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<format>` |  |  |
| template< class Context >  class basic_format_args; | (1) | (since C++20) |
| using format_args = basic_format_args<std::format_context>; | (2) | (since C++20) |
| using wformat_args = basic_format_args<std::wformat_context>; | (3) | (since C++20) |
|  |  |  |

Provides access to formatting arguments.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `basic_format_args` object   (public member function) |
| get | returns formatting argument at the given index   (public member function) |

## std::basic_format_args::basic_format_args

|  |  |  |
| --- | --- | --- |
| template< class... Args >  basic_format_args( const /\*format-arg-store\*/<Context, Args...>& store ) noexcept; |  |  |
|  |  |  |

Constructs a `basic_format_args` object from the result of a call to std::make_format_args or std::make_wformat_args.

## std::basic_format_args::get

|  |  |  |
| --- | --- | --- |
| std::basic_format_arg<Context> get( std::size_t i ) const noexcept; |  |  |
|  |  |  |

Returns a std::basic_format_arg holding the i-th argument in `args`, where `args` is the parameter pack passed to std::make_format_args or std::make_wformat_args.

If there's no such formatting argument (i.e. \*this was default-constructed or i is not less than the number of formatting arguments), returns a default-constructed std::basic_format_arg (holding a std::monostate object).

### Deduction guides

|  |  |  |
| --- | --- | --- |
| template< class Context, class... Args >  basic_format_args( /\*format-arg-store\*/<Context, Args...> ) -> basic_format_args<Context>; |  | (since C++20) |
|  |  |  |

### Notes

`std::basic_format_args` has reference semantics. It is the programmer's responsibility to ensure that \*this does not outlive store (which, in turn, should not outlive the arguments to std::make_format_args or std::make_wformat_args).

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P2216R3 | C++20 | `format_args_t` was provided due to overparameterization of `vformat_to` | removed |
| LWG 3810 | C++20 | `basic_format_args` has no deduction guide | added |
| LWG 4106 | C++20 | `basic_format_args` was default-constructible | default constructor removed |

### See also

|  |  |
| --- | --- |
| basic_format_arg(C++20) | class template that provides access to a formatting argument for user-defined formatters   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_args&oldid=173189>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 July 2024, at 00:11.