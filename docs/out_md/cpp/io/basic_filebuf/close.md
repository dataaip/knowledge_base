# std::basic_filebuf<CharT,Traits>::close

From cppreference.com
< cpp‎ | io‎ | basic filebuf
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

std::basic_filebuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| basic_filebuf::basic_filebuf | | | | |
| basic_filebuf::~basic_filebuf | | | | |
| basic_filebuf::operator=(C++11) | | | | |
| basic_filebuf::swap(C++11) | | | | |
| basic_filebuf::native_handle(C++26) | | | | |
| basic_filebuf::is_open | | | | |
| basic_filebuf::open | | | | |
| ****basic_filebuf::close**** | | | | |
| Protected member functions | | | | |
| basic_filebuf::showmanyc | | | | |
| basic_filebuf::underflow | | | | |
| basic_filebuf::uflow | | | | |
| basic_filebuf::pbackfail | | | | |
| basic_filebuf::overflow | | | | |
| basic_filebuf::setbuf | | | | |
| basic_filebuf::seekoff | | | | |
| basic_filebuf::seekpos | | | | |
| basic_filebuf::sync | | | | |
| basic_filebuf::imbue | | | | |
| Non-member functions | | | | |
| swap(std::basic_filebuf)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| std::basic_filebuf<CharT, Traits>\* close(); |  |  |
|  |  |  |

If a put area exist (e.g. file was opened for writing), first calls overflow(Traits::eof()) to write all pending output to the file, including any unshift sequences.

If the most recently called function, out of `underflow()`, `overflow()`, `seekpos()`, and `seekoff()`, was `overflow()`, then calls std::codecvt::unshift(), perhaps multiple times, to determine the unshift sequence according to the imbued locale, and writes that sequence to file with overflow(Traits::eof()).

Then, closes the file as if by calling std::fclose(), regardless of whether any of the preceding calls succeeded or failed.

If any of the function calls made, including the call to std::fclose(), fails, returns a null pointer. If any of the function calls made throws an exception, the exception is caught and rethrown after closing the file. If the file is already closed, returns a null pointer right away.

In any case, updates the private member variable that is accessed by is_open().

### Parameters

(none)

### Return value

this on success, a null pointer on failure.

### Notes

`close()` is typically called through the destructor of std::basic_filebuf (which, in turn, is typically called by the destructor of std::basic_fstream.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 443 | C++98 | the file was written using overflow(EOF) | changed to overflow(Traits::eof()) |
| LWG 622 | C++98 | it was unclear how to handle the exception thrown during closing | it is rethrown after closing the file |

### See also

|  |  |
| --- | --- |
| is_open | checks if the associated file is open   (public member function) |
| (destructor)[virtual] | destructs a `basic_filebuf` object and closes the file if it is open   (virtual public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_filebuf/close&oldid=148743>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 March 2023, at 22:24.