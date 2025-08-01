# std::basic_ofstream<CharT,Traits>::open

From cppreference.com
< cpp‎ | io‎ | basic ofstream
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

std::basic_ofstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| basic_ofstream::basic_ofstream | | | | |
| basic_ofstream::operator=(C++11) | | | | |
| basic_ofstream::swap(C++11) | | | | |
| basic_ofstream::rdbuf | | | | |
| basic_ofstream::native_handle(C++26) | | | | |
| File operations | | | | |
| basic_ofstream::is_open | | | | |
| ****basic_ofstream::open**** | | | | |
| basic_ofstream::close | | | | |
| Non-member functions | | | | |
| swap(std::basic_ofstream)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| void open( const char\* filename,  std::ios_base::openmode mode = std::ios_base::out ); | (1) |  |
| void open( const std::filesystem::path::value_type\* filename,  std::ios_base::openmode mode = std::ios_base::out ); | (2) | (since C++17) |
| void open( const std::string& filename,  std::ios_base::openmode mode = std::ios_base::out ); | (3) | (since C++11) |
| void open( const std::filesystem::path& filename,  std::ios_base::openmode mode = std::ios_base::out ); | (4) | (since C++17) |
|  |  |  |

Opens and associates the file with name filename with the file stream.

Calls clear() on success. Calls setstate(failbit) on failure.

1,2) Effectively calls rdbuf()->open(filename, mode | ios_base::out) (see std::basic_filebuf::open for the details on the effects of that call). Overload (2) is only provided if `std::filesystem::path::value_type` is not char.(since C++17)3,4) Effectively calls (1,2) as if by open(filename.c_str(), mode).

### Parameters

|  |  |  |
| --- | --- | --- |
| filename | - | the name of the file to be opened |
| mode | - | specifies stream open mode. It is a BitmaskType, the following constants are defined:  |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode | |

### Return value

(none)

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 22 | C++98 | it was unclear how error state changes upon a successful open | the error state is unchanged |
| LWG 409 | C++98 | the error state was unchanged upon a successful open | it is cleared[[1]](open.html#cite_note-1) |

1. ↑ The resolution of LWG issue #22 is overriden.

### See also

|  |  |
| --- | --- |
| is_open | checks if the stream has an associated file   (public member function) |
| close | closes the associated file   (public member function) |
| open | opens a file and configures it as the associated character sequence   (public member function of `std::basic_filebuf<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ofstream/open&oldid=147680>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 February 2023, at 19:26.