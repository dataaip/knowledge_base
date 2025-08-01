# std::basic_stringstream<CharT,Traits,Allocator>::basic_stringstream

From cppreference.com
< cpp‎ | io‎ | basic stringstream
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

std::basic_stringstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****basic_stringstream::basic_stringstream**** | | | | |
| basic_stringstream::operator= | | | | |
| basic_stringstream::swap(C++11) | | | | |
| basic_stringstream::rdbuf | | | | |
| String operations | | | | |
| basic_stringstream::str | | | | |
| basic_stringstream::view(C++20) | | | | |
| Non-member functions | | | | |
| swap(std::basic_stringstream)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| explicit basic_stringstream( std::ios_base::openmode mode =                                   std::ios_base::in | std::ios_base::out ); |  | (until C++11) |
| explicit basic_stringstream( std::ios_base::openmode mode ); |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
| basic_stringstream()      : basic_stringstream(std::ios_base::in | std::ios_base::out) {} | (2) | (since C++11) |
| explicit basic_stringstream  ( const std::basic_string<CharT, Traits, Allocator>& str,        std::ios_base::openmode mode = std::ios_base::in | std::ios_base::out ); | (3) |  |
| explicit basic_stringstream  ( std::basic_string<CharT, Traits, Allocator>&& str,        std::ios_base::openmode mode = std::ios_base::in | std::ios_base::out ); | (4) | (since C++20) |
| basic_stringstream( std::ios_base::openmode mode, const Allocator& a ); | (5) | (since C++20) |
| template< class SAlloc >  basic_stringstream( const std::basic_string<CharT, Traits, SAlloc>& str, std::ios_base::openmode mode, const Allocator& a ); | (6) | (since C++20) |
| template< class SAlloc >  basic_stringstream( const std::basic_string<CharT, Traits, SAlloc>& str,                      const Allocator& a ) : basic_stringstream(str, std::ios_base::in | std::ios_base::out, a) {} | (7) | (since C++20) |
| template< class SAlloc >  explicit basic_stringstream      ( const std::basic_string<CharT, Traits, SAlloc>& str,        std::ios_base::openmode mode = std::ios_base::in | std::ios_base::out ); | (8) | (since C++20) |
| template< class StringViewLike >  explicit basic_stringstream      ( const StringViewLike& t,        std::ios_base::openmode mode = std::ios_base::in | std::ios_base::out ); | (9) | (since C++26) |
| template< class StringViewLike >  basic_stringstream( const StringViewLike& t, std::ios_base::openmode mode, const Allocator& a ); | (10) | (since C++26) |
| template< class StringViewLike >  basic_stringstream( const StringViewLike& t, const Allocator& a ); | (11) | (since C++26) |
| basic_stringstream( basic_stringstream&& other ); | (12) | (since C++11) |
|  |  |  |

Constructs new string stream.

Given

- `base_type` as std::basic_iostream<CharT, Traits>, and
- `buf_type` as std::basic_stringbuf<CharT, Traits, Allocator>,

the std::basic_iostream base and the exposition-only data member `sb` are initialized as follows.

| Over  load | std::basic_iostream base | `sb` |
| --- | --- | --- |
| (1) | base_type(std::addressof(sb))[[1]](basic_stringstream.html#cite_note-1) | buf_type(mode) |
| (2) | buf_type(std::ios_base::in | std::ios_base::out) |
| (3) | buf_type(str, mode) |
| (4) | buf_type(std::move(str), mode) |
| (5) | buf_type(mode, a) |
| (6) | buf_type(str, mode, a) |
| (7) | buf_type(str, std::ios_base::in | std::ios_base::out, a) |
| (8) | buf_type(str, mode) |
| (9) | std::addressof(sb) | {t, mode, Allocator()} |
| (10) | {t, mode, a} |
| (11) | {t, std::ios_base::in | std::ios_base::out, a} |
| (12) | move constructed from other's std::basic_iostream base | move constructed from other.sb |

1. ↑ The std::basic_iostream base was intialized with base_type(&sb) (for overloads (1,3)) until C++11.

8) This overload participates in overload resolution only if std::is_same_v<SAlloc, Allocator> is false.9-11) These overloads participate in overload resolution only if std::is_convertible_v<const StringViewLike&, std::basic_string_view<CharT, Traits>> is true.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | string to use as initial contents of the string stream |
| t | - | an object (convertible to std::basic_string_view) to use as initial contents of the string stream |
| a | - | allocator used for allocating the contents of the string stream |
| mode | - | specifies stream open mode. It is a BitmaskType, the following constants are defined:  |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode | |
| other | - | another string stream to use as source |

### Notes

Construction of one-off `basic_stringstream` objects in a tight loop, such as when used for string conversion, may be significantly more costly than calling str() to reuse the same object.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_sstream_from_string_view` | `202306L` | (C++26) | Interfacing std::stringstreams with std::string_view, (9-11) |

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
int main()
{
    // default constructor (input/output stream)
    std::stringstream buf1;
    buf1 << 7;
    int n = 0;
    buf1 >> n;
    std::cout << "buf1 = " << buf1.str() << " n = " << n << '\n';
 
    // input stream
    std::istringstream inbuf("-10");
    inbuf >> n;
    std::cout << "n = " << n << '\n';
 
    // output stream in append mode (C++11)
    std::ostringstream buf2("test", std::ios_base::ate);
    buf2 << '1';
    std::cout << buf2.str() << '\n';
}

```

Output:

```
buf1 = 7 n = 7
n = -10
test1

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P0935R0 | C++11 | the default constructor was explicit | made implicit |

### See also

|  |  |
| --- | --- |
| str | gets or sets the contents of underlying string device object   (public member function) |
| (constructor) | constructs a `basic_stringbuf` object   (public member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_stringstream/basic_stringstream&oldid=116183>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 February 2020, at 01:24.