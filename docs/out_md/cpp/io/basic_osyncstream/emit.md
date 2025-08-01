# std::basic_osyncstream<CharT,Traits,Allocator>::emit

From cppreference.com
< cpp‎ | io‎ | basic osyncstream
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

std::basic_osyncstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| basic_osyncstream::basic_osyncstream(C++20) | | | | |
| basic_osyncstream::operator=(C++20) | | | | |
| basic_osyncstream::~basic_osyncstream(C++20) | | | | |
| basic_osyncstream::rdbuf(C++20) | | | | |
| basic_osyncstream::get_wrapped(C++20) | | | | |
| ****basic_osyncstream::emit****(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| void emit(); |  |  |
|  |  |  |

Emits all buffered output and executes any pending flushes, by calling emit() on the underlying std::basic_syncbuf.

### Parameters

(none)

### Example

Run this code

```
#include <iostream>
#include <syncstream>
 
int main()
{
    {
        std::osyncstream bout(std::cout);
        bout << "Hello," << '\n'; // no flush
        bout.emit(); // characters transferred; cout not flushed
        bout << "World!" << std::endl; // flush noted; cout not flushed
        bout.emit(); // characters transferred; cout flushed
        bout << "Greetings." << '\n'; // no flush
    } // destructor calls emit(): characters transferred; cout not flushed
 
    // emit can be used for local exception-handling on the wrapped stream
    std::osyncstream bout(std::cout);
    bout << "Hello, " << "World!" << '\n';
    try
    {
        bout.emit();
    }
    catch (...)
    {
        // handle exceptions
    }
}

```

Output:

```
Hello,
World!
Greetings.
Hello, World!

```

### See also

|  |  |
| --- | --- |
| (destructor) | destroys the `basic_osyncstream` and emits its internal buffer   (public member function) |
| emit | atomically transmits the entire internal buffer to the wrapped streambuf   (public member function of `std::basic_syncbuf<CharT,Traits,Allocator>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_osyncstream/emit&oldid=158553>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 September 2023, at 09:15.