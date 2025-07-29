# std::stacktrace_entry

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

Diagnostics library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception handling | | | | | | exception | | | | | | uncaught_exceptionuncaught_exceptions(until C++20\*)(C++17) | | | | | | exception_ptr(C++11) | | | | | | make_exception_ptr(C++11) | | | | | | current_exception(C++11) | | | | | | rethrow_exception(C++11) | | | | | | nested_exception(C++11) | | | | | | throw_with_nested(C++11) | | | | | | rethrow_if_nested(C++11) | | | | | | Exception handling failures | | | | | | terminate | | | | | | terminate_handler | | | | | | get_terminate(C++11) | | | | | | set_terminate | | | | | | bad_exception | | | | | | unexpected(until C++17\*) | | | | | | unexpected_handler(until C++17\*) | | | | | | get_unexpected(until C++17\*) | | | | | | set_unexpected(until C++17\*) | | | | | | Error numbers | | | | | | Error codes | | | | | | errno | | | | | | Assertions | | | | | | assert | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception categories | | | | | | logic_error | | | | | | invalid_argument | | | | | | domain_error | | | | | | length_error | | | | | | out_of_range | | | | | | runtime_error | | | | | | range_error | | | | | | overflow_error | | | | | | underflow_error | | | | | | tx_exception(TM TS) | | | | | | System error | | | | | | error_category(C++11) | | | | | | generic_category(C++11) | | | | | | system_category(C++11) | | | | | | error_condition(C++11) | | | | | | errc(C++11) | | | | | | error_code(C++11) | | | | | | system_error(C++11) | | | | | | Stacktrace | | | | | | ****stacktrace_entry****(C++23) | | | | | | basic_stacktrace(C++23) | | | | | | Debugging support | | | | | | is_debugger_present(C++26) | | | | | | breakpoint_if_debugging(C++26) | | | | | | breakpoint(C++26) | | | | | |

****std::stacktrace_entry****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| stacktrace_entry::stacktrace_entry | | | | |
| stacktrace_entry::operator= | | | | |
| Observers | | | | |
| stacktrace_entry::native_handle | | | | |
| stacktrace_entry::operator bool | | | | |
| Query | | | | |
| stacktrace_entry::description | | | | |
| stacktrace_entry::source_file | | | | |
| stacktrace_entry::source_line | | | | |
| Non-member functions | | | | |
| operator== operator<=> | | | | |
| to_string(std::stacktrace_entry) | | | | |
| operator<< | | | | |
| Helper classes | | | | |
| hash<std::stacktrace_entry> | | | | |
| formatter<std::stacktrace_entry> | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stacktrace>` |  |  |
| class stacktrace_entry; |  | (since C++23) |
|  |  |  |

The `stacktrace_entry` class provides operations for querying information about an evaluation in a stacktrace. Each `stacktrace_entry` object is either empty, or represents an evaluation in a stacktrace.

`stacktrace_entry` models std::regular and std::three_way_comparable<std::strong_ordering>.

### Member types

|  |  |
| --- | --- |
| `native_handle_type` | implementation-defined native handle type |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `stacktrace_entry`   (public member function) |
| (destructor) | destroys the `stacktrace_entry`   (public member function) |
| operator= | assigns the contents of one `stacktrace_entry` to another   (public member function) |
| Observers | |
| native_handle | gets the implementation-defined native handle of the `stacktrace_entry`   (public member function) |
| operator bool | checks whether the `stacktrace_entry` is empty   (public member function) |
| Query | |
| description | gets the description of the evaluation represented by the `stacktrace_entry`   (public member function) |
| source_file | gets the name of the source file that lexically contains the expression or statement whose evaluation is represented by the `stacktrace_entry`   (public member function) |
| source_line | gets the line number that lexically relates the evaluation represented by the `stacktrace_entry`   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator<=>(C++23) | compares two `stacktrace_entry` values   (function) |
| to_string(C++23) | returns a string with a description of the `stacktrace_entry`   (function) |
| operator<<(C++23) | performs stream output of `stacktrace_entry`   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::hash<std::stacktrace_entry>(C++23) | hash support for ****std::stacktrace_entry****   (class template specialization) |
| std::formatter<std::stacktrace_entry>(C++23) | formatting support for `stacktrace_entry`   (class template specialization) |

### Notes

`boost::stacktrace::frame` (available in Boost.Stacktrace) can be used instead when `std::stacktrace_entry` is not available.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_stacktrace` | `202011L` | (C++23) | Stacktrace library |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| basic_stacktrace(C++23) | approximate representation of an invocation sequence consists of stacktrace entries   (class template) |
| source_location(C++20) | a class representing information about the source code, such as file names, line numbers, and function names   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&oldid=177349>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 October 2024, at 14:07.