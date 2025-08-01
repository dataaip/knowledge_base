# std::swap(std::basic_ofstream)

From cppreference.com
< cpp‎ | io‎ | basic ofstream
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

std::basic_ofstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| basic_ofstream::basic_ofstream | | | | |
| basic_ofstream::operator=(C++11) | | | | |
| basic_ofstream::swap(C++11) | | | | |
| basic_ofstream::rdbuf | | | | |
| basic_ofstream::native_handle(C++26) | | | | |
| File operations | | | | |
| basic_ofstream::is_open | | | | |
| basic_ofstream::open | | | | |
| basic_ofstream::close | | | | |
| Non-member functions | | | | |
| ****swap(std::basic_ofstream)****(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class CharT, class Traits >  void swap( basic_ofstream<CharT, Traits>& lhs, basic_ofstream<CharT, Traits>& rhs ); |  |  |
|  |  |  |

Specializes the std::swap algorithm for std::basic_ofstream. Exchanges the state of lhs with that of rhs. Effectively calls lhs.swap(rhs).

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | streams whose state to swap |

### Return value

(none)

### Exceptions

May throw implementation-defined exceptions.

### Example

Run this code

```
#include <fstream>
#include <iostream>
#include <string>
 
bool create_stream(std::ofstream& fs)
{
    try
    {
        std::string some_name = "/tmp/test_file.txt";
        std::ios_base::openmode some_flags = fs.trunc; // | other flags
 
        if (std::ofstream ts{some_name, some_flags}; ts.is_open())
        {
            std::swap(ts, fs); // stream objects are not copyable => swap
            return true;
        }
    }
    catch (...)
    {
        std::cout << "Exception!\n";
    }
    return false;
}
 
int main()
{
    if (std::ofstream fs; create_stream(fs))
    {
        // use fs stream
    }
}

```

### See also

|  |  |
| --- | --- |
| swap(C++11) | swaps two file streams   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ofstream/swap2&oldid=157180>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 August 2023, at 07:03.