# std::basic_stringbuf<CharT,Traits,Allocator>::pbackfail

From cppreference.com
< cpp‎ | io‎ | basic stringbuf
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

std::basic_stringbuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| basic_stringbuf::basic_stringbuf | | | | |
| basic_stringbuf::operator=(C++11) | | | | |
| basic_stringbuf::swap(C++11) | | | | |
| basic_stringbuf::str | | | | |
| basic_stringbuf::get_allocator(C++20) | | | | |
| basic_stringbuf::view(C++20) | | | | |
| Protected member functions | | | | |
| basic_stringbuf::underflow | | | | |
| ****basic_stringbuf::pbackfail**** | | | | |
| basic_stringbuf::overflow | | | | |
| basic_stringbuf::setbuf | | | | |
| basic_stringbuf::seekoff | | | | |
| basic_stringbuf::seekpos | | | | |
| Non-member functions | | | | |
| swap(std::basic_stringbuf)(C++11) | | | | |
| Exposition-only member functions | | | | |
| basic_stringbuf::**init_buf_ptrs** | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  virtual int_type pbackfail( int_type c = Traits::eof() ) |  |  |
|  |  |  |

This protected virtual function is called by the public functions basic_streambuf::sungetc and basic_streambuf::sputbackc (which, in turn, are called by basic_istream::unget and basic_istream::putback).

1) The caller is requesting that the get area is backed up by one character (`pbackfail()` is called with no arguments or with Traits::eof() as the argument)a) First, checks if there is a putback position, and if there really isn't, fails. (stringbuf has no external character source to re-read)b) If the caller was wrong and the putback position is in fact available, simply decrements basic_streambuf::gptr(), e.g. by calling gbump(-1).2) The caller attempts to putback a different character from the one retrieved earlier (`pbackfail()` is called with the character that needs to be put back), in which casea) First, checks if there is a putback position, and if there isn't, fails.b) Then checks what character is in the putback position. If the character held there is already equal to `c`, as determined by Traits::eq(to_char_type(c), gptr()[-1]), then simply decrements basic_streambuf::gptr().c) Otherwise, if the buffer is open for reading only, fails.d) Otherwise, if the buffer is open for writing (mode && std::ios_base::out is nonzero), then decrements basic_streambuf::gptr() and writes `c` to the location pointed to gptr() after adjustment.

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | the character to put back, or Traits::eof() to indicate that backing up of the get area is requested |

### Return value

c on success except if `c` was Traits::eof(), in which case Traits::not_eof(c) is returned.

Traits::eof() on failure.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| pbackfail[virtual] | puts a character back into the input sequence, possibly modifying the input sequence   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| sungetc | moves the next pointer in the input sequence back by one   (public member function of `std::basic_streambuf<CharT,Traits>`) |
| sputbackc | puts one character back in the input sequence   (public member function of `std::basic_streambuf<CharT,Traits>`) |
| unget | unextracts a character   (public member function of `std::basic_istream<CharT,Traits>`) |
| putback | puts a character into input stream   (public member function of `std::basic_istream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_stringbuf/pbackfail&oldid=105212>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 July 2018, at 03:29.