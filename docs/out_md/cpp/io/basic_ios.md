# std::basic_ios

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
| ****basic_ios**** | | | | |
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

****std::basic_ios****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| basic_ios::basic_ios | | | | |
| basic_ios::~basic_ios | | | | |
| State functions | | | | |
| basic_ios::good | | | | |
| basic_ios::eof | | | | |
| basic_ios::fail | | | | |
| basic_ios::bad | | | | |
| basic_ios::operator! | | | | |
| basic_ios::operator bool | | | | |
| basic_ios::rdstate | | | | |
| basic_ios::setstate | | | | |
| basic_ios::clear | | | | |
| Formatting | | | | |
| basic_ios::copyfmt | | | | |
| basic_ios::fill | | | | |
| Miscellaneous | | | | |
| basic_ios::exceptions | | | | |
| basic_ios::imbue | | | | |
| basic_ios::rdbuf | | | | |
| basic_ios::tie | | | | |
| basic_ios::narrow | | | | |
| basic_ios::widen | | | | |
| Protected member functions | | | | |
| basic_ios::init | | | | |
| basic_ios::move(C++11) | | | | |
| basic_ios::swap(C++11) | | | | |
| basic_ios::set_rdbuf(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ios>` |  |  |
| template<  class CharT,      class Traits = std::char_traits<CharT>  > class basic_ios : public std::ios_base |  |  |
|  |  |  |

The class `std::basic_ios` provides facilities for interfacing with objects that have std::basic_streambuf interface. Several `std::basic_ios` objects can refer to one actual `std::basic_streambuf` object.

!std-basic ios-inheritance.svg

Inheritance diagram

Several typedefs for common character types are provided:

|  |  |
| --- | --- |
| Defined in header `<ios>` | |
| Type | Definition |
| `std::ios` | std::basic_ios<char> |
| `std::wios` | std::basic_ios<wchar_t> |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `char_type` | `CharT` |
| `traits_type` | `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`. |
| `int_type` | `Traits::int_type` |
| `pos_type` | `Traits::pos_type` |
| `off_type` | `Traits::off_type` |

### Public member functions

|  |  |
| --- | --- |
| (constructor) | constructs the object   (public member function) |
| (destructor)[virtual] | destructs the object   (virtual public member function) |
| operator= | the copy assignment operator is deleted   (public member function) |
| State functions | |
| good | checks if no error has occurred i.e. I/O operations are available   (public member function) |
| eof | checks if end-of-file has been reached   (public member function) |
| fail | checks if an error has occurred   (public member function) |
| bad | checks if a non-recoverable error has occurred   (public member function) |
| operator! | checks if an error has occurred (synonym of fail())   (public member function) |
| operator bool | checks if no error has occurred (synonym of `!`fail())   (public member function) |
| rdstate | returns state flags   (public member function) |
| setstate | sets state flags   (public member function) |
| clear | modifies state flags   (public member function) |
| Formatting | |
| copyfmt | copies formatting information   (public member function) |
| fill | manages the fill character   (public member function) |
| Miscellaneous | |
| exceptions | manages exception mask   (public member function) |
| imbue | sets the locale   (public member function) |
| rdbuf | manages associated stream buffer   (public member function) |
| tie | manages tied stream   (public member function) |
| narrow | narrows characters   (public member function) |
| widen | widens characters   (public member function) |

### Protected member functions

|  |  |
| --- | --- |
| init | initializes a default-constructed ****std::basic_ios****   (protected member function) |
| move(C++11) | moves from another ****std::basic_ios**** except for `rdbuf`   (protected member function) |
| swap(C++11) | swaps with another ****std::basic_ios**** except for `rdbuf`   (protected member function) |
| set_rdbuf | replaces the `rdbuf` without clearing its error state   (protected member function) |

## Inherited from std::ios_base

### Member functions

|  |  |
| --- | --- |
| Formatting | |
| flags | manages format flags   (public member function of `std::ios_base`) |
| setf | sets specific format flag   (public member function of `std::ios_base`) |
| unsetf | clears specific format flag   (public member function of `std::ios_base`) |
| precision | manages decimal precision of floating point operations   (public member function of `std::ios_base`) |
| width | manages field width   (public member function of `std::ios_base`) |
| Locales | |
| imbue | sets locale   (public member function of `std::ios_base`) |
| getloc | returns current locale   (public member function of `std::ios_base`) |
| Internal extensible array | |
| xalloc[static] | returns a program-wide unique integer that is safe to use as index to pword() and iword()   (public static member function of `std::ios_base`) |
| iword | resizes the private storage if necessary and access to the long element at the given index   (public member function of `std::ios_base`) |
| pword | resizes the private storage if necessary and access to the void\* element at the given index   (public member function of `std::ios_base`) |
| Miscellaneous | |
| register_callback | registers event callback function   (public member function of `std::ios_base`) |
| sync_with_stdio[static] | sets whether C++ and C I/O libraries are interoperable   (public static member function of `std::ios_base`) |
| Member classes | |
| failure | stream exception   (public member class of `std::ios_base`) |
| Init | initializes standard stream objects   (public member class of `std::ios_base`) |

|  |  |
| --- | --- |
| Member types and constants | |
| Type | Explanation |
| openmode | stream open mode type The following constants are also defined:   |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode |    (typedef) |
| fmtflags | formatting flags type The following constants are also defined:   |  |  | | --- | --- | | Constant | Explanation | | dec | use decimal base for integer I/O: see std::dec | | oct | use octal base for integer I/O: see std::oct | | hex | use hexadecimal base for integer I/O: see std::hex | | basefield | dec | oct | hex. Useful for masking operations | | left | left adjustment (adds fill characters to the right): see std::left | | right | right adjustment (adds fill characters to the left): see std::right | | internal | internal adjustment (adds fill characters to the internal designated point): see std::internal | | adjustfield | left | right | internal. Useful for masking operations | | scientific | generate floating point types using scientific notation, or hex notation if combined with fixed: see std::scientific | | fixed | generate floating point types using fixed notation, or hex notation if combined with scientific: see std::fixed | | floatfield | scientific | fixed. Useful for masking operations | | boolalpha | insert and extract bool type in alphanumeric format: see std::boolalpha | | showbase | generate a prefix indicating the numeric base for integer output, require the currency indicator in monetary I/O: see std::showbase | | showpoint | generate a decimal-point character unconditionally for floating-point number output: see std::showpoint | | showpos | generate a + character for non-negative numeric output: see std::showpos | | skipws | skip leading whitespace before certain input operations: see std::skipws | | unitbuf | flush the output after each output operation: see std::unitbuf | | uppercase | replace certain lowercase letters with their uppercase equivalents in certain output operations: see std::uppercase |    (typedef) |
| iostate | state of the stream type The following constants are also defined:   |  |  | | --- | --- | | Constant | Explanation | | goodbit | no error | | badbit | irrecoverable stream error | | failbit | input/output operation failed (formatting or extraction error) | | eofbit | associated input sequence has reached end-of-file |    (typedef) |
| seekdir | seeking direction type The following constants are also defined:   |  |  | | --- | --- | | Constant | Explanation | | beg | the beginning of a stream | | end | the ending of a stream | | cur | the current position of stream position indicator |    (typedef) |
| event | specifies event type   (enum) |
| event_callback | callback function type   (typedef) |

### Notes

Straightforward implementation of `std::basic_ios` stores only the following members (which all depend on the template parameters and thus cannot be part of std::ios_base):

- the fill character (see `fill()`)
- the tied stream pointer (see `tie()`)
- the associated stream buffer pointer (see `rdbuf()`).

Actual implementations vary:

Microsoft Visual Studio stores just those three members.

LLVM libc++ stores 1 less member: it maintains the `rdbuf` pointer as a void\* member of `ios_base`.

GNU libstdc++ stores 4 additional members: three cached facets and a flag to indicate that fill was initialized.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ios&oldid=158253>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 September 2023, at 09:58.