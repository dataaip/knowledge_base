# Input/output library

From cppreference.com
< cpp
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
| ****Input/output library**** | | | | |
| Filesystem library (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

****Input/output library****

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

C++ includes the following input/output libraries: an OOP-style stream-based I/O library, print-based family of functions(since C++23), and the standard set of C-style I/O functions.

### Stream-based I/O

The stream-based input/output library is organized around abstract input/output devices. These abstract devices allow the same code to handle input/output to files, memory streams, or custom adaptor devices that perform arbitrary operations (e.g. compression) on the fly.

Most of the classes are templated, so they can be adapted to any basic character type. Separate typedefs are provided for the most common basic character types (char and wchar_t). The classes are organized into the following hierarchy:

!std-io-complete-inheritance.svg

Inheritance diagram

|  |  |
| --- | --- |
| Abstraction | |
| Defined in header `<ios>` | |
| ios_base | manages formatting flags and input/output exceptions   (class) |
| basic_ios | manages an arbitrary stream buffer   (class template) |
| Defined in header `<streambuf>` | |
| basic_streambuf | abstracts a raw device   (class template) |
| Defined in header `<ostream>` | |
| basic_ostream | wraps a given abstract device (std::basic_streambuf) and provides high-level output interface   (class template) |
| Defined in header `<istream>` | |
| basic_istream | wraps a given abstract device (std::basic_streambuf) and provides high-level input interface   (class template) |
| basic_iostream | wraps a given abstract device (std::basic_streambuf) and provides high-level input/output interface   (class template) |
| File I/O implementation | |
| Defined in header `<fstream>` | |
| basic_filebuf | implements raw file device   (class template) |
| basic_ifstream | implements high-level file stream input operations   (class template) |
| basic_ofstream | implements high-level file stream output operations   (class template) |
| basic_fstream | implements high-level file stream input/output operations   (class template) |
| String I/O implementation | |
| Defined in header `<sstream>` | |
| basic_stringbuf | implements raw string device   (class template) |
| basic_istringstream | implements high-level string stream input operations   (class template) |
| basic_ostringstream | implements high-level string stream output operations   (class template) |
| basic_stringstream | implements high-level string stream input/output operations   (class template) |
| Array I/O implementations | |
| Defined in header `<spanstream>` | |
| basic_spanbuf(C++23) | implements raw fixed character buffer device   (class template) |
| basic_ispanstream(C++23) | implements fixed character buffer input operations   (class template) |
| basic_ospanstream(C++23) | implements fixed character buffer output operations   (class template) |
| basic_spanstream(C++23) | implements fixed character buffer input/output operations   (class template) |
| Defined in header `<strstream>` | |
| strstreambuf(deprecated in C++98)(removed in C++26) | implements raw character array device   (class) |
| istrstream(deprecated in C++98)(removed in C++26) | implements character array input operations   (class) |
| ostrstream(deprecated in C++98)(removed in C++26) | implements character array output operations   (class) |
| strstream(deprecated in C++98)(removed in C++26) | implements character array input/output operations   (class) |
| Synchronized output (since C++20) | |
| Defined in header `<syncstream>` | |
| basic_syncbuf(C++20) | synchronized output device wrapper   (class template) |
| basic_osyncstream(C++20) | synchronized output stream wrapper   (class template) |

#### Typedefs

The following typedefs for common character types are provided in namespace `std`:

|  |  |
| --- | --- |
| Type | Definition |
| Defined in header `<ios>` | |
| std::ios | std::basic_ios<char> |
| std::wios | std::basic_ios<wchar_t> |
| Defined in header `<streambuf>` | |
| std::streambuf | std::basic_streambuf<char> |
| std::wstreambuf | std::basic_streambuf<wchar_t> |
| Defined in header `<istream>` | |
| std::istream | std::basic_istream<char> |
| std::wistream | std::basic_istream<wchar_t> |
| std::iostream | std::basic_iostream<char> |
| std::wiostream | std::basic_iostream<wchar_t> |
| Defined in header `<ostream>` | |
| std::ostream | std::basic_ostream<char> |
| std::wostream | std::basic_ostream<wchar_t> |
| Defined in header `<fstream>` | |
| std::filebuf | std::basic_filebuf<char> |
| std::wfilebuf | std::basic_filebuf<wchar_t> |
| std::ifstream | std::basic_ifstream<char> |
| std::wifstream | std::basic_ifstream<wchar_t> |
| std::ofstream | std::basic_ofstream<char> |
| std::wofstream | std::basic_ofstream<wchar_t> |
| std::fstream | std::basic_fstream<char> |
| std::wfstream | std::basic_fstream<wchar_t> |
| Defined in header `<sstream>` | |
| std::stringbuf | std::basic_stringbuf<char> |
| std::wstringbuf | std::basic_stringbuf<wchar_t> |
| std::istringstream | std::basic_istringstream<char> |
| std::wistringstream | std::basic_istringstream<wchar_t> |
| std::ostringstream | std::basic_ostringstream<char> |
| std::wostringstream | std::basic_ostringstream<wchar_t> |
| std::stringstream | std::basic_stringstream<char> |
| std::wstringstream | std::basic_stringstream<wchar_t> |
| Defined in header `<spanstream>` | |
| std::spanbuf (C++23) | std::basic_spanbuf<char> |
| std::wspanbuf (C++23) | std::basic_spanbuf<wchar_t> |
| std::ispanstream (C++23) | std::basic_ispanstream<char> |
| std::wispanstream (C++23) | std::basic_ispanstream<wchar_t> |
| std::ospanstream (C++23) | std::basic_ospanstream<char> |
| std::wospanstream (C++23) | std::basic_ospanstream<wchar_t> |
| std::spanstream (C++23) | std::basic_spanstream<char> |
| std::wspanstream (C++23) | std::basic_spanstream<wchar_t> |
| Defined in header `<syncstream>` | |
| std::syncbuf (C++20) | std::basic_syncbuf<char> |
| std::wsyncbuf (C++20) | std::basic_syncbuf<wchar_t> |
| std::osyncstream (C++20) | std::basic_osyncstream<char> |
| std::wosyncstream (C++20) | std::basic_osyncstream<wchar_t> |

#### Predefined standard stream objects

|  |  |
| --- | --- |
| Defined in header `<iostream>` | |
| cinwcin | reads from the standard C input stream stdin (global object) |
| coutwcout | writes to the standard C output stream stdout (global object) |
| cerrwcerr | writes to the standard C error stream stderr, unbuffered (global object) |
| clogwclog | writes to the standard C error stream stderr (global object) |

#### I/O Manipulators

The stream-based I/O library uses I/O manipulators (e.g. std::boolalpha, std::hex, etc.) to control how streams behave.

#### Types

The following auxiliary types are defined:

|  |  |
| --- | --- |
| Defined in header `<ios>` | |
| streamoff | represents relative file/stream position (offset from fpos), sufficient to represent any file size   (typedef) |
| streamsize | represents the number of characters transferred in an I/O operation or the size of an I/O buffer   (typedef) |
| fpos | represents absolute position in a stream or a file   (class template) |

The following typedef names for std::fpos<std::mbstate_t> are provided:

|  |  |
| --- | --- |
| Defined in header `<iosfwd>` | |
| Type | Definition |
| `std::streampos` | std::fpos<std::char_traits<char>::state_type> |
| `std::wstreampos` | std::fpos<std::char_traits<wchar_t>::state_type> |
| `std::u8streampos` (C++20) | std::fpos<std::char_traits<char8_t>::state_type> |
| `std::u16streampos` (C++11) | std::fpos<std::char_traits<char16_t>::state_type> |
| `std::u32streampos` (C++11) | std::fpos<std::char_traits<char32_t>::state_type> |

#### Error category interface (since C++11)

|  |  |
| --- | --- |
| Defined in header `<ios>` | |
| io_errc(C++11) | the IO stream error codes   (enum) |
| iostream_category(C++11) | identifies the iostream error category   (function) |

### Print functions (since C++23)

The Unicode-aware print-family functions that perform formatted I/O on text that is already formatted. They bring all the performance benefits of std::format, are locale-independent by default, reduce global state, avoid allocating a temporary std::string object and calling operator<<, and in general make formatting more efficient compared to iostreams and stdio.

The following print-like functions are provided:

|  |  |
| --- | --- |
| Defined in header `<print>` | |
| print(C++23) | prints to stdout or a file stream using formatted representation of the arguments   (function template) |
| println(C++23) | same as std::print except that each print is terminated by additional new line   (function template) |
| vprint_unicodevprint_unicode_buffered(C++23) | prints to Unicode capable stdout or a file stream using type-erased argument representation   (function) |
| vprint_nonunicodevprint_nonunicode_buffered(C++23) | prints to stdout or a file stream using type-erased argument representation   (function) |
|  | |
| Defined in header `<ostream>` | |
| print(std::ostream)(C++23) | outputs formatted representation of the arguments   (function template) |
| println(std::ostream)(C++23) | outputs formatted representation of the arguments with appended '\n'   (function template) |

### C-style I/O

C++ also includes the input/output functions defined by C, such as std::fopen, std::getc, etc.

### See also

|  |  |
| --- | --- |
| Filesystem library (since C++17) | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io&oldid=179905>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2025, at 11:21.