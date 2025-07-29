# std::vprint_unicode, std::vprint_unicode_buffered

From cppreference.com
< cpp‎ | io
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

Input/output library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| I/O manipulators | | | | |
| Print functions (C++23) | | | | |
| C-style I/O | | | | |
| Buffers | | | | |
| basic_streambuf | | | | |
| basic_filebuf | | | | |
| basic_stringbuf | | | | |
| basic_spanbuf(C++23) | | | | |
| strstreambuf(C++98/26\*) | | | | |
| basic_syncbuf(C++20) | | | | |
| Streams | | | | |
| Abstractions | | | | |
| ios_base | | | | |
| basic_ios | | | | |
| basic_istream | | | | |
| basic_ostream | | | | |
| basic_iostream | | | | |
| File I/O | | | | |
| basic_ifstream | | | | |
| basic_ofstream | | | | |
| basic_fstream | | | | |
| String I/O | | | | |
| basic_istringstream | | | | |
| basic_ostringstream | | | | |
| basic_stringstream | | | | |
| Array I/O | | | | |
| basic_ispanstream(C++23) | | | | |
| basic_ospanstream(C++23) | | | | |
| basic_spanstream(C++23) | | | | |
| istrstream(C++98/26\*) | | | | |
| ostrstream(C++98/26\*) | | | | |
| strstream(C++98/26\*) | | | | |
| Synchronized Output | | | | |
| basic_osyncstream(C++20) | | | | |
| Types | | | | |
| streamoff | | | | |
| streamsize | | | | |
| fpos | | | | |
| Error category interface | | | | |
| iostream_category(C++11) | | | | |
| io_errc(C++11) | | | | |

 Print functions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Print functions | | | | |
| print(C++23) | | | | |
| println(C++23) | | | | |
| ****vprint_unicodevprint_unicode_buffered****(C++23)(C++23) | | | | |
| vprint_nonunicodevprint_nonunicode_buffered(C++23)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<print>` |  |  |
| void vprint_unicode( std::FILE\* stream,                       std::string_view fmt, std::format_args args ); | (1) | (since C++23) |
| void vprint_unicode_buffered( std::FILE\* stream,                                std::string_view fmt, std::format_args args ); | (2) | (since C++23) |
| void vprint_unicode_buffered( std::string_view fmt, std::format_args args ); | (3) | (since C++23) |
|  |  |  |

Format args according to the format string fmt, and writes the result to the output stream.

1) Performs the following operations in order:

1. Locks stream.
2. Let out denote the character representation of formatting arguments provided by args formatted according to specifications given in fmt.
3. Writes out to stream:

:   - If stream refers to a terminal that is only capable of displaying Unicode via a native Unicode API, flushes stream and writes out to the terminal using the native Unicode API.
    - Otherwise, writes unmodified out to the stream.

 Unconditionally unlocks stream on function exit. If any of the following conditions is satisfied, the behavior is undefined:

- stream is not a valid pointer to an output C stream.
- out contains invalid Unicode code units when the native Unicode API is used.
2) Equivalent to std::string out = std::vformat(fmt, args);  
std::vprint_unicode(stream, "{}", std::make_format_args(out));.3) Equivalent to std::vprint_unicode_buffered(stdout, fmt, args).

### Parameters

|  |  |  |
| --- | --- | --- |
| stream | - | output file stream to write to |
| fmt | - | an object that represents the format string. The format string consists of  - ordinary characters (except { and }), which are copied unchanged to the output, - escape sequences {{ and }}, which are replaced with { and } respectively in the output, and - replacement fields.   Each replacement field has the following format:   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{` arg-id (optional) `}` | (1) |  | |  | | | | | | | | | | | `{` arg-id (optional) `:` format-spec `}` | (2) |  | |  | | | | | | | | | |  1) replacement field without a format specification2) replacement field with a format specification  |  |  |  | | --- | --- | --- | | arg-id | - | specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error. | | format-spec | - | the format specification defined by the std::formatter specialization for the corresponding argument. Cannot start with }. |      - For basic types and standard string types, the format specification is interpreted as standard format specification. - For chrono types, the format specification is interpreted as chrono format specification.  |  |  | | --- | --- | | - For range types, the format specification is interpreted as range format specification. - For std::pair and std::tuple, the format specification is interpreted as tuple format specification. - For std::thread::id and std::stacktrace_entry, see thread id format specification and stacktrace entry format specification. - For std::basic_stacktrace, no format specifier is allowed. | (since C++23) |  |  |  | | --- | --- | | - For std::filesystem::path, see path format specification. | (since C++26) |  - For other formattable types, the format specification is determined by user-defined `formatter` specializations. |
| args | - | arguments to be formatted |

### Exceptions

- std::bad_alloc on allocation failure.
- std::system_error, if writing to the stream fails.
- Propagates any exception thrown by used formatters, e.g. std::format_error.

### Notes

The C++ standard encourages the implementers to produce a diagnostic message if out contains invalid Unicode code units.

On POSIX, writing to a terminal is done using the usual standard I/O functions, so there is no need to treat a terminal differently to any other file stream.

On Windows, the stream refers to a terminal if GetConsoleMode(_get_osfhandle(_fileno(stream))) returns nonzero (see Windows documentation for `GetConsoleMode`, `_get_osfhandle`, and `_fileno`). The native Unicode API on Windows is `WriteConsoleW`.

If invoking the native Unicode API requires transcoding, the invalid code units are substituted with `U+FFFD` REPLACEMENT CHARACTER (see "The Unicode Standard - Core Specification", Chapter 3.9).

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_print` | `202207L` | (C++23) | Formatted output |
| `202403L` | (C++26) (DR23) | Unbuffered formatted output |
| `202406L` | (C++26) (DR23) | Enabling unbuffered formatted output for more formattable types |
| `__cpp_lib_format` | `202207L` | (C++23) | Exposing std::basic_format_string |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 4044 | C++23 | the native Unicode API was always used if the terminal referred to by stream can display Unicode | only used if the terminal can only use the native Unicode API to display Unicode |
| P3107R5 | C++23 | printing operations were always buffered | provides unbuffered printing operations |
| P3235R3 | C++23 | the names of the functions added by P3107R5 were misleading | changed the function names |

### See also

|  |  |
| --- | --- |
| vprint_nonunicodevprint_nonunicode_buffered(C++23) | prints to stdout or a file stream using type-erased argument representation   (function) |
| vprint_unicode(std::ostream)(C++23) | performs Unicode aware output using type-erased argument representation   (function) |
| print(C++23) | prints to stdout or a file stream using formatted representation of the arguments   (function template) |
| format(C++20) | stores formatted representation of the arguments in a new string   (function template) |

### External links

|  |  |
| --- | --- |
| 1. | Unicode |
| 2. | The Unicode Standard Version 14.0 - Core Specification |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&oldid=180265>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 February 2025, at 22:13.