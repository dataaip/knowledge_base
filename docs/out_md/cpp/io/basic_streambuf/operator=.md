# std::basic_streambuf<CharT,Traits>::operator=

From cppreference.com
< cpp‎ | io‎ | basic streambuf
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

std::basic_streambuf

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Public member functions | | | | | | basic_streambuf::~basic_streambuf | | | | | | Locales | | | | | | basic_streambuf::pubimbue | | | | | | basic_streambuf::getloc | | | | | | Positioning | | | | | | basic_streambuf::pubsetbuf | | | | | | basic_streambuf::pubseekoff | | | | | | basic_streambuf::pubseekpos | | | | | | basic_streambuf::pubsync | | | | | | Get area | | | | | | basic_streambuf::in_avail | | | | | | basic_streambuf::snextc | | | | | | basic_streambuf::sbumpc | | | | | | basic_streambuf::sgetc | | | | | | basic_streambuf::sgetn | | | | | | Put area | | | | | | basic_streambuf::sputc | | | | | | basic_streambuf::sputn | | | | | | Putback | | | | | | basic_streambuf::sputbackc | | | | | | basic_streambuf::sungetc | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Protected member functions | | | | | | basic_streambuf::basic_streambuf | | | | | | ****basic_streambuf::operator=****(C++11) | | | | | | basic_streambuf::swap(C++11) | | | | | | Locales | | | | | | basic_streambuf::imbue | | | | | | Positioning | | | | | | basic_streambuf::setbuf | | | | | | basic_streambuf::seekoff | | | | | | basic_streambuf::seekpos | | | | | | basic_streambuf::sync | | | | | | Get area | | | | | | basic_streambuf::showmanyc | | | | | | basic_streambuf::underflow | | | | | | basic_streambuf::uflow | | | | | | basic_streambuf::xsgetn | | | | | | basic_streambuf::ebackbasic_streambuf::gptrbasic_streambuf::egptr | | | | | | basic_streambuf::gbump | | | | | | basic_streambuf::setg | | | | | | Put area | | | | | | basic_streambuf::xsputn | | | | | | basic_streambuf::overflow | | | | | | basic_streambuf::pbasebasic_streambuf::pptrbasic_streambuf::epptr | | | | | | basic_streambuf::pbump | | | | | | basic_streambuf::setp | | | | | | Putback | | | | | | basic_streambuf::pbackfail | | | | | |

|  |  |  |
| --- | --- | --- |
| basic_streambuf& operator=( const basic_streambuf& other ); |  | (since C++11) |
|  |  |  |

Assigns the data members of other to \*this.

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | stream buffer to assign |

### Return value

\*this

### Exceptions

May throw implementation-defined exceptions.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_streambuf/operator%3D&oldid=158561>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 September 2023, at 09:56.