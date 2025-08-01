# std::basic_ospanstream<CharT,Traits>::basic_ospanstream

From cppreference.com
< cpp‎ | io‎ | basic ospanstream
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

std::basic_ospanstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****basic_ospanstream::basic_ospanstream****(C++23) | | | | |
| basic_ospanstream::operator=(C++23) | | | | |
| basic_ospanstream::swap(C++23) | | | | |
| basic_ospanstream::rdbuf(C++23) | | | | |
| Underlying buffer operations | | | | |
| basic_ospanstream::span(C++23) | | | | |
| Non-member functions | | | | |
| swap(std::basic_ospanstream)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| explicit basic_ospanstream( std::span<CharT> s, std::ios_base::openmode mode =                                  std::ios_base::out ); | (1) | (since C++23) |
| basic_ospanstream( basic_ospanstream&& rhs ); | (2) | (since C++23) |
| basic_ospanstream( const basic_ospanstream& ) = delete; | (3) | (since C++23) |
|  |  |  |

Constructs a new `basic_ospanstream`.

1) Uses the storage referenced by s as initial underlying buffer of the wrapped std::basic_spanbuf device. The wrapped std::basic_spanbuf object is constructed as basic_spanbuf<Char, Traits>(s, mode | std::ios_base::out).2) Move constructor. Move constructs the std::basic_ostream base subobject and the wrapped std::basic_spanbuf from those of rhs, and then calls set_rdbuf with the address of the wrapped std::basic_spanbuf in \*this to install it.3) Copy constructor is deleted. `basic_ospanstream` is not copyable.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | std::span referencing the storage to be use as initial underlying buffer of stream |
| mode | - | specifies stream open mode. Following constants and bit-wise OR between them may be used:  |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode | |
| other | - | another `basic_ospanstream` to be moved from |

### Exceptions

May throw implementation-defined exceptions.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| (constructor) | constructs a `basic_spanbuf` object   (public member function of `std::basic_spanbuf<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ospanstream/basic_ospanstream&oldid=130842>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 June 2021, at 05:52.