# std::basic_iostream<CharT,Traits>::basic_iostream

From cppreference.com
< cpp‎ | io‎ | basic iostream
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

std::basic_iostream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****basic_iostream::basic_iostream**** | | | | |
| basic_iostream::~basic_iostream | | | | |
| Protected member functions | | | | |
| basic_iostream::operator= | | | | |
| basic_iostream::swap | | | | |

|  |  |  |
| --- | --- | --- |
| explicit basic_iostream( std::basic_streambuf<CharT,Traits>\* sb ); | (1) |  |
| basic_iostream( const basic_iostream& other ) = delete; | (2) | (since C++11) |
| protected:  basic_iostream( basic_iostream&& other ); | (3) | (since C++11) |
|  |  |  |

Constructs new stream object.

1) Initializes with streambuf sb. The base classes are initialized as basic_istream<CharT,Traits>(sb) and basic_ostream<CharT,Traits>(sb). After the call rdbuf() == sb and gcount() == 0.2) Copy construction is not allowed.3) Move constructor: move-constructs the first base class `basic_istream` as basic_istream<CharT,Traits>(std::move(rhs));, which in turn move-constructs and initializes the virtual base std::basic_ios. The initialization of the other base, `basic_ostream`, is implementation-defined (e.g., a protected default constructor may be added to std::basic_ostream, which does nothing) because move-construction cannot use `rhs` twice. This move constructor is protected: it is called by the move constructors of the derived stream classes std::basic_fstream and std::basic_stringstream before they move-construct and associate the stream buffer.

### Parameters

|  |  |  |
| --- | --- | --- |
| sb | - | streambuf to initialize with |
| other | - | another stream to initialize with |

### See also

|  |  |
| --- | --- |
| operator=(C++11) | move-assigns another `basic_iostream`   (protected member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_iostream/basic_iostream&oldid=160636>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 October 2023, at 08:26.