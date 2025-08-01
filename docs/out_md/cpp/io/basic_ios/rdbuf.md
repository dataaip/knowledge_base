# std::basic_ios<CharT,Traits>::rdbuf

From cppreference.com
< cpp‎ | io‎ | basic ios
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

std::basic_ios

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
| ****basic_ios::rdbuf**** | | | | |
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
| std::basic_streambuf<CharT, Traits>\* rdbuf() const; | (1) |  |
| std::basic_streambuf<CharT, Traits>\* rdbuf( std::basic_streambuf<CharT, Traits>\* sb ); | (2) |  |
|  |  |  |

Manages the associated stream buffer.

1) Returns the associated stream buffer. If there is no associated stream buffer, returns a null pointer.2) Sets the associated stream buffer to sb. The error state is cleared by calling clear(). Returns the associated stream buffer before the operation. If there is no associated stream buffer, returns a null pointer.

### Parameters

|  |  |  |
| --- | --- | --- |
| sb | - | Stream buffer to associate to. |

### Return value

The associated stream buffer, or a null pointer if there was no associated stream buffer.

### Exceptions

May throw implementation-defined exceptions.

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
int main()
{
    std::ostringstream local;
    auto cout_buff = std::cout.rdbuf(); // save pointer to std::cout buffer
 
    std::cout.rdbuf(local.rdbuf()); // substitute internal std::cout buffer with
                                    // buffer of 'local' object
 
    // now std::cout work with 'local' buffer
    // you don't see this message
    std::cout << "some message";
 
    // go back to old buffer
    std::cout.rdbuf(cout_buff);
 
    // you will see this message
    std::cout << "back to default buffer\n";
 
    // print 'local' content
    std::cout << "local content: " << local.str() << "\n";
}

```

Output:

```
back to default buffer
local content: some message

```

### See also

|  |  |
| --- | --- |
| set_rdbuf | replaces the `rdbuf` without clearing its error state   (protected member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ios/rdbuf&oldid=180013>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2025, at 19:02.