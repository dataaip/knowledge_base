# std::ios_base::unsetf

From cppreference.com
< cpp‎ | io‎ | ios base
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

std::ios_base

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ios_base::ios_base | | | | |
| ios_base::~ios_base | | | | |
| ios_base::operator= | | | | |
| Formatting | | | | |
| ios_base::flags | | | | |
| ios_base::setf | | | | |
| ****ios_base::unsetf**** | | | | |
| ios_base::precision | | | | |
| ios_base::width | | | | |
| Locales | | | | |
| ios_base::imbue | | | | |
| ios_base::getloc | | | | |
| Internal extensible array | | | | |
| ios_base::xalloc | | | | |
| ios_base::iword | | | | |
| ios_base::pword | | | | |
| Miscellaneous | | | | |
| ios_base::register_callback | | | | |
| ios_base::sync_with_stdio | | | | |
| Member classes | | | | |
| ios_base::failure | | | | |
| ios_base::Init | | | | |
| Member types | | | | |
| ios_base::openmode | | | | |
| ios_base::fmtflags | | | | |
| ios_base::iostate | | | | |
| ios_base::seekdir | | | | |
| ios_base::event | | | | |
| ios_base::event_callback | | | | |

|  |  |  |
| --- | --- | --- |
| void unsetf( fmtflags flags ); |  |  |
|  |  |  |

Unsets the formatting flags identified by flags.

### Parameters

|  |  |  |
| --- | --- | --- |
| flags | - | formatting flags to unset. It can be a combination of the formatting flags constants. |

##### Formatting flags

|  |  |
| --- | --- |
| Constant | Explanation |
| dec | use decimal base for integer I/O: see std::dec |
| oct | use octal base for integer I/O: see std::oct |
| hex | use hexadecimal base for integer I/O: see std::hex |
| basefield | dec | oct | hex. Useful for masking operations |
| left | left adjustment (adds fill characters to the right): see std::left |
| right | right adjustment (adds fill characters to the left): see std::right |
| internal | internal adjustment (adds fill characters to the internal designated point): see std::internal |
| adjustfield | left | right | internal. Useful for masking operations |
| scientific | generate floating point types using scientific notation, or hex notation if combined with fixed: see std::scientific |
| fixed | generate floating point types using fixed notation, or hex notation if combined with scientific: see std::fixed |
| floatfield | scientific | fixed. Useful for masking operations |
| boolalpha | insert and extract bool type in alphanumeric format: see std::boolalpha |
| showbase | generate a prefix indicating the numeric base for integer output, require the currency indicator in monetary I/O: see std::showbase |
| showpoint | generate a decimal-point character unconditionally for floating-point number output: see std::showpoint |
| showpos | generate a + character for non-negative numeric output: see std::showpos |
| skipws | skip leading whitespace before certain input operations: see std::skipws |
| unitbuf | flush the output after each output operation: see std::unitbuf |
| uppercase | replace certain lowercase letters with their uppercase equivalents in certain output operations: see std::uppercase |

### Return value

(none)

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| flags | manages format flags   (public member function) |
| setf | sets specific format flag   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base/unsetf&oldid=151077>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 April 2023, at 08:29.