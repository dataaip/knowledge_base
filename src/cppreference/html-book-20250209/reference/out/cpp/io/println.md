# std::println

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
| ****println****(C++23) | | | | |
| vprint_unicodevprint_unicode_buffered(C++23)(C++23) | | | | |
| vprint_nonunicodevprint_nonunicode_buffered(C++23)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<print>` |  |  |
| template< class... Args >  void println( std::format_string<Args...> fmt, Args&&... args ); | (1) | (since C++23) |
| template< class... Args >  void println( std::FILE\* stream, std::format_string<Args...> fmt, Args&&... args ); | (2) | (since C++23) |
| void println(); | (3) | (since C++26) |
| void println( std::FILE\* stream ); | (4) | (since C++26) |
|  |  |  |

Format args according to the format string fmt with appended '\n' (which means that each output ends with a new-line), and print the result to a stream.

1) Equivalent to std::println(stdout, fmt, std::forward<Args>(args)...).2) Equivalent to performing the following operations:

|  |  |
| --- | --- |
| std::print(stream, "{}\n", std::format(fmt, std::forward<Args>(args)...)); | (until C++26) |
| std::print(stream, std::runtime_format(std::string(fmt.get()) + '\n'),            std::forward<Args>(args)...) | (since C++26) |

3) Equivalent to std::println(stdout).4) Equivalent to std::print(stream, "\n").

If std::formatter<Ti, char> does not meet the BasicFormatter requirements for any `Ti` in `Args` (as required by std::make_format_args), the behavior is undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| stream | - | output file stream to write to |
| fmt | - | an object that represents the format string. The format string consists of  - ordinary characters (except { and }), which are copied unchanged to the output, - escape sequences {{ and }}, which are replaced with { and } respectively in the output, and - replacement fields.   Each replacement field has the following format:   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{` arg-id (optional) `}` | (1) |  | |  | | | | | | | | | | | `{` arg-id (optional) `:` format-spec `}` | (2) |  | |  | | | | | | | | | |  1) replacement field without a format specification2) replacement field with a format specification  |  |  |  | | --- | --- | --- | | arg-id | - | specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error. | | format-spec | - | the format specification defined by the std::formatter specialization for the corresponding argument. Cannot start with }. |      - For basic types and standard string types, the format specification is interpreted as standard format specification. - For chrono types, the format specification is interpreted as chrono format specification.  |  |  | | --- | --- | | - For range types, the format specification is interpreted as range format specification. - For std::pair and std::tuple, the format specification is interpreted as tuple format specification. - For std::thread::id and std::stacktrace_entry, see thread id format specification and stacktrace entry format specification. - For std::basic_stacktrace, no format specifier is allowed. | (since C++23) |  |  |  | | --- | --- | | - For std::filesystem::path, see path format specification. | (since C++26) |  - For other formattable types, the format specification is determined by user-defined `formatter` specializations. |
| args... | - | arguments to be formatted |

### Exceptions

- std::bad_alloc on allocation failure.
- std::system_error, if writing to the stream fails.
- Propagates any exception thrown by used formatters, e.g. std::format_error.

### Notes

Although overloads (3,4) are added in C++26, all known implementations make them available in C++23 mode.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_print` | `202207L` | (C++23) | Formatted output |
| `202403L` | (C++26) | Unbuffered formatted output[[1]](println.html#cite_note-1) |
| `__cpp_lib_format` | `202207L` | (C++23) | Exposing std::basic_format_string |

1. ↑ Although P3107R5 is accepted as a DR, std::runtime_format is only avilable since C++26. As a result, the resolution cannot be applied in C++23.

### Example

Run this code

```
#include <print>
 
int main()
{
    // Each call to std::println ends with new-line
    std::println("Please"); // overload (1)
    std::println("enter"); // (1)
 
    std::print("pass");
    std::print("word");
 
    std::println(); // (3); valid since C++26; same effect as std::print("\n"); 
}

```

Output:

```
Please
enter
password
 


```

### See also

|  |  |
| --- | --- |
| print(C++23) | prints to stdout or a file stream using formatted representation of the arguments   (function template) |
| println(std::ostream)(C++23) | outputs formatted representation of the arguments with appended '\n'   (function template) |
| format(C++20) | stores formatted representation of the arguments in a new string   (function template) |
| printffprintfsprintfsnprintf(C++11) | prints formatted output to stdout, a file stream or a buffer   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/println&oldid=180269>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 February 2025, at 23:39.