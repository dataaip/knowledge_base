# std::is_error_code_enum<std::io_errc>

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
| make_error_code(std::io_errc)(C++11) | | | | |
| make_error_condition(std::io_errc)(C++11) | | | | |
| Helper classes | | | | |
| ****is_error_code_enum<std::io_errc>****(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ios>` |  |  |
| template<>  struct is_error_code_enum<std::io_errc> : public std::true_type {}; |  | (since C++11) |
|  |  |  |

This specialization of std::is_error_code_enum informs other library components that values of type std::io_errc are enumerations that hold error codes, which makes them implicitly convertible and assignable to objects of type std::error_code.

## Inherited from std::integral_constant

### Member constants

|  |  |
| --- | --- |
| value[static] | true   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| operator bool | converts the object to bool, returns value   (public member function) |
| operator()(C++14) | returns value   (public member function) |

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | bool |
| `type` | std::integral_constant<bool, value> |

### Example

The comparison between e.code() and std::io_errc::stream compiles because std::is_error_code_enum<std::io_errc>::value == true.

Run this code

```
#include <fstream>
#include <iostream>
 
int main()
{
    std::ifstream f("doesn't exist");
    try
    {
        f.exceptions(f.failbit);
    }
    catch (const std::ios_base::failure& e)
    {
        std::cout << "Caught an ios_base::failure.\n";
        if (e.code() == std::io_errc::stream)
            std::cout << "The error code is std::io_errc::stream\n";
    }
}

```

Output:

```
Caught an ios_base::failure.
The error code is std::io_errc::stream

```

### See also

|  |  |
| --- | --- |
| is_error_code_enum(C++11) | identifies a class as an `error_code` enumeration   (class template) |
| error_code(C++11) | holds a platform-dependent error code   (class) |
| io_errc(C++11) | the IO stream error codes   (enum) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/io_errc/is_error_code_enum&oldid=159107>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 September 2023, at 10:54.