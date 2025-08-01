# std::basic_syncbuf<CharT,Traits,Allocator>::sync

From cppreference.com
< cpp‎ | io‎ | basic syncbuf
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

std::basic_syncbuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| basic_syncbuf::basic_syncbuf(C++20) | | | | |
| basic_syncbuf::operator=(C++20) | | | | |
| basic_syncbuf::~basic_syncbuf(C++20) | | | | |
| basic_syncbuf::swap(C++20) | | | | |
| basic_syncbuf::emit(C++20) | | | | |
| basic_syncbuf::get_wrapped(C++20) | | | | |
| basic_syncbuf::get_allocator(C++20) | | | | |
| basic_syncbuf::set_emit_on_sync(C++20) | | | | |
| Protected member functions | | | | |
| ****basic_syncbuf::sync****(C++20) | | | | |
| Non-member functions | | | | |
| swap(std::basic_syncbuf)(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  int sync() override; |  |  |
|  |  |  |

First, records that a flush is pending, by updating the appropriate private flag.

Then, if the current emit-on-sync policy is true, makes a call to emit().

Otherwise (if the emit-on-sync policy is false, which is the default), the flush is suspended until emit() is called, such as through std::basic_osyncstream::emit() or std::basic_osyncstream::~basic_osyncstream

### Parameters

(none)

### Notes

`sync()` or its equivalent is implicitly called by close(), seekoff(), and seekpos() and explicitly called by std::basic_streambuf::pubsync()

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| sync[virtual] | synchronizes the buffers with the associated character sequence   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| emit | calls emit() on the underlying `basic_syncbuf` to transmit its internal data to the final destination   (public member function of `std::basic_osyncstream<CharT,Traits,Allocator>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf/sync&oldid=144206>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 October 2022, at 06:52.