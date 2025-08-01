# std::basic_spanbuf<CharT,Traits>::basic_spanbuf

From cppreference.com
< cpp‎ | io‎ | basic spanbuf
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

std::basic_spanbuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| ****basic_spanbuf::basic_spanbuf****(C++23) | | | | |
| basic_spanbuf::operator=(C++23) | | | | |
| basic_spanbuf::swap(C++23) | | | | |
| basic_spanbuf::span(C++23) | | | | |
| Protected member functions | | | | |
| basic_spanbuf::setbuf(C++23) | | | | |
| basic_spanbuf::seekoff(C++23) | | | | |
| basic_spanbuf::seekpos(C++23) | | | | |
| Non-member functions | | | | |
| swap(std::basic_spanbuf)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| basic_spanbuf() : basic_spanbuf(std::ios_base::in | std::ios_base::out) {} | (1) | (since C++23) |
| explicit basic_spanbuf( std::ios_base::openmode which )      : basic_spanbuf(std::span<CharT>{}, which) {} | (2) | (since C++23) |
| explicit basic_spanbuf( std::span<CharT> buf, std::ios_base::openmode which =                              std::ios_base::in | std::ios_base::out ); | (3) | (since C++23) |
| basic_spanbuf( const basic_spanbuf& ) = delete; | (4) | (since C++23) |
| basic_spanbuf( basic_spanbuf&& rhs ); | (5) | (since C++23) |
|  |  |  |

1) Default constructor. Creates a `basic_spanbuf` that has no underlying buffer and is opened for both input and output. The pointers to get and put area are set to the null pointer value.2) Same as (1), except that the `basic_spanbuf` is opened in mode specified by which.3) Creates a `basic_spanbuf` that manages the underlying buffer referenced by buf (or has no underlying buffer if buf is empty) and is opened in mode specified by which. The pointers to get and put area are set as following, or to the null pointer value if not mentioned in the table:

| Set bits in open mode (affecting pointers to get area) | Return value after setting | | |
| --- | --- | --- | --- |
| eback() | gptr() | egptr() |
| std::ios_base::in | s.data() | s.data() | s.data() + s.size() |
|  | | | |
| Set bits in open mode (affecting pointers to put area) | Return value after setting | | |
| pbase() | pptr() | epptr() |
| std::ios_base::out && !std::ios_base::ate | s.data() | s.data() | s.data() + s.size() |
| std::ios_base::out && std::ios_base::ate | s.data() | s.data() + s.size() | s.data() + s.size() |

4) Copy constructor is deleted. `basic_spanbuf` is not copyable.5) Move constructor. Move-constructs the std::basic_streambuf base subobject from that of rhs. The pointers to get and put area, the open mode, and the underlying buffer (if any) are identical to those in rhs before construction.  
It is implementation-defined whether rhs still holds the underlying buffer after the move-construction.

### Parameters

|  |  |  |
| --- | --- | --- |
| buf | - | a std::span referencing the underlying buffer |
| rhs | - | another `basic_spanbuf` |
| which | - | specifies stream open mode. It is bitmask type, the following constants are defined:  |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode | |

### Notes

These constructors are typically called by the constructors of std::basic_ispanstream, std::basic_ospanstream, and std::basic_spanstream.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| (constructor) | constructs the `basic_ispanstream`   (public member function of `std::basic_ispanstream<CharT,Traits>`) |
| (constructor) | constructs the `basic_ospanstream`   (public member function of `std::basic_ospanstream<CharT,Traits>`) |
| (constructor) | constructs the `basic_spanstream`   (public member function of `std::basic_spanstream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/basic_spanbuf&oldid=160639>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 October 2023, at 08:49.