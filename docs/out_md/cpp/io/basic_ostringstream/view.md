# std::basic_ostringstream<CharT,Traits,Allocator>::view

From cppreference.com
< cpp‎ | io‎ | basic ostringstream
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

std::basic_ostringstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| basic_ostringstream::basic_ostringstream | | | | |
| basic_ostringstream::operator= | | | | |
| basic_ostringstream::swap(C++11) | | | | |
| basic_ostringstream::rdbuf | | | | |
| String operations | | | | |
| basic_ostringstream::str | | | | |
| ****basic_ostringstream::view****(C++20) | | | | |
| Non-member functions | | | | |
| swap(std::basic_ostringstream)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| std::basic_string_view<CharT, Traits> view() const noexcept; |  | (since C++20) |
|  |  |  |

Obtains a std::basic_string_view over the underlying string object. Equivalent to return rdbuf()->view();.

### Parameters

(none)

### Return value

A std::basic_string_view over the underlying string object.

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
int main()
{
    // input/output stream
    std::stringstream buf1;
    buf1 << 69;
    int n = 0;
    buf1 >> n;
    std::cout << "1) buf1 = [" << buf1.view() << "], n = " << n << '\n';
 
    // output stream in append mode
    std::ostringstream buf2("test", std::ios_base::ate);
    buf2 << '1';
    std::cout << "2) buf2 = [" << buf2.view() << "]\n";
 
    // input stream
    std::istringstream inbuf("-42");
    inbuf >> n;
    std::cout << "3) inbuf = [" << inbuf.view() << "], n = " << n << '\n';
}

```

Output:

```
1) buf1 = [69], n = 69
2) buf2 = [test1]
3) inbuf = [-42], n = -42

```

### See also

|  |  |
| --- | --- |
| view(C++20) | obtains a view over the underlying character sequence   (public member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostringstream/view&oldid=116195>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 February 2020, at 03:28.