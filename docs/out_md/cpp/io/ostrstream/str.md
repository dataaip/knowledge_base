# std::ostrstream::str

From cppreference.com
< cpp‎ | io‎ | ostrstream
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

std::ostrstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ostrstream::ostrstream | | | | |
| ostrstream::~ostrstream | | | | |
| ostrstream::rdbuf | | | | |
| ****ostrstream::str**** | | | | |
| ostrstream::freeze | | | | |
| ostrstream::pcount | | | | |

|  |  |  |
| --- | --- | --- |
| char\* str(); |  | (deprecated in C++98)  (removed in C++26) |
|  |  |  |

Returns the pointer to the beginning of the buffer, after freezing it. Effectively calls rdbuf()->str().

### Parameters

(none)

### Return value

Pointer to the beginning of the buffer in the associated std::strstreambuf or a null pointer if no buffer is available.

### Notes

Before a call to `str()` that uses the result as a C-string, the stream buffer must be null-terminated. Regular output such as with stream << 1.2 does not store a null terminator, it must be appended explicitly, typically with the manipulator std::ends.

After a call to `str()`, dynamic streams become frozen. A call to `freeze(false)` is required before exiting the scope in which this ostrstream object was created. otherwise the destructor will leak memory. Also, additional output to a frozen stream may be truncated once it reaches the end of the allocated buffer, which may leave the buffer not null-terminated.

### Example

Run this code

```
#include <iostream>
#include <strstream>
 
int main()
{
    std::ostrstream dyn; // dynamically-allocated output buffer
    dyn << "Test: " << 1.23; // not adding std::ends to demonstrate append behavior
    std::cout << "The output stream holds \"";
    std::cout.write(dyn.str(), dyn.pcount()) << "\"\n"; 
    // the stream is now frozen due to str()
    dyn << " More text" << std::ends;
    std::cout << "The output stream holds \"";
    std::cout.write(dyn.str(), dyn.pcount()) << "\"\n";
    dyn.freeze(false);
}

```

Possible output:

```
The stream holds "Test: 1.23"
The stream holds "Test: 1.23 More "

```

### See also

|  |  |
| --- | --- |
| str | marks the buffer frozen and returns the beginning pointer of the input sequence   (public member function of `std::strstreambuf`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/ostrstream/str&oldid=105232>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 July 2018, at 03:42.