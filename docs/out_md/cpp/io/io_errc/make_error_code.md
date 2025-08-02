# std::make_error_code(std::io_errc)

From cppreference.com
< cpp‎ | io‎ | io errc
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

std::io_errc

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Non-member functions | | | | |
| ****make_error_code(std::io_errc)****(C++11) | | | | |
| make_error_condition(std::io_errc)(C++11) | | | | |
| Helper classes | | | | |
| is_error_code_enum<std::io_errc>(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ios>` |  |  |
| std::error_code make_error_code( std::io_errc e ) noexcept; |  | (since C++11) |
|  |  |  |

Constructs an std::error_code object from a value of type std::io_errc as if by return std::error_code(static_cast<int>(e), std::iostream_category()).

This function is called by the constructor of std::error_code with an std::io_errc argument.

### Parameters

|  |  |  |
| --- | --- | --- |
| e | - | error code number |

### Return value

A value of type std::error_code that holds the error code number from e associated with the error category "iostream".

### Example

Run this code

```
#include <iostream>
#include <system_error>
 
int main()
{
    std::error_code ec = std::make_error_code(std::io_errc::stream);
 
    // This works because of the overloaded method
    //    and the is_error_code_enum specialization.
    ec = std::io_errc::stream;
 
    std::cout << "Error code from io_errc::stream has category "
              << ec.category().name() << '\n';
}

```

Output:

```
Error code from io_errc::stream has category iostream

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2087 | C++11 | `make_error_code(io_errc)` was not declared noexcept | declared noexcept |

### See also

|  |  |
| --- | --- |
| error_code(C++11) | holds a platform-dependent error code   (class) |
| io_errc(C++11) | the IO stream error codes   (enum) |
| make_error_code(std::errc)(C++11) | creates error code value for `errc` enum e   (function) |
| make_error_code(std::future_errc)(C++11) | constructs a future error code   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/io_errc/make_error_code&oldid=157069>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 August 2023, at 00:57.