# std::strstreambuf::underflow

From cppreference.com
< cpp‎ | io‎ | strstreambuf
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

std::strstreambuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| strstreambuf::strstreambuf | | | | |
| strstreambuf::~strstreambuf | | | | |
| strstreambuf::freeze | | | | |
| strstreambuf::str | | | | |
| strstreambuf::pcount | | | | |
| Protected member functions | | | | |
| ****strstreambuf::underflow**** | | | | |
| strstreambuf::pbackfail | | | | |
| strstreambuf::overflow | | | | |
| strstreambuf::setbuf | | | | |
| strstreambuf::seekoff | | | | |
| strstreambuf::seekpos | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  virtual int_type underflow(); |  | (deprecated in C++98)  (removed in C++26) |
|  |  |  |

Reads the next character from the get area of the buffer.

If the input sequence has a read position available (gptr() < egptr(), returns (unsigned char)(\*gptr()).

Otherwise, if pptr() is not null and pptr() > egptr() (there is a put area and it is located after the get area), extends the end of the get area to include the characters that were recently written into the put area by incrementing egptr() to some value between gptr() and pptr(), and then returns (unsigned char)(\*gptr()).

Otherwise, returns EOF to indicate failure.

### Parameters

(none)

### Return value

The next character in the get area, (unsigned char)(\*gptr()) on success, EOF on failure.

### Example

Run this code

```
#include <iostream>
#include <strstream>
 
struct mybuf : std::strstreambuf
{
    int_type overflow(int_type c) 
    {
        std::cout << "Before overflow(): size of the get area is " << egptr()-eback()
                  << " size of the put area is " << epptr()-pbase() << '\n';
        int_type rc = std::strstreambuf::overflow(c);
        std::cout << "After overflow(): size of the get area is " << egptr()-eback()
                  << " size of the put area is " << epptr()-pbase() << '\n';
        return rc;
    }
 
    int_type underflow() 
    {
        std::cout << "Before underflow(): size of the get area is " << egptr()-eback()
                  << " size of the put area is " << epptr()-pbase() << '\n';
        int_type ch = std::strstreambuf::underflow();
        std::cout << "After underflow(): size of the get area is " << egptr()-eback()
                  << " size of the put area is " << epptr()-pbase() << '\n';
        if (ch == EOF)
            std::cout << "underflow() returns EOF\n";
        else
            std::cout << "underflow() returns '" << char(ch) << "'\n";
        return ch;
    }
};
 
int main()
{
    mybuf sbuf; // read-write dynamic strstreambuf
    std::iostream stream(&sbuf);
 
    int n;
    stream >> n;
    stream.clear();
    stream << "123";
    stream >> n;
    std::cout << n << '\n';
}

```

Possible output:

```
Before underflow(): size of the get area is 0 size of the put area is 0
After underflow(): size of the get area is 0 size of the put area is 0
underflow() returns EOF
Before overflow(): size of the get area is 0 size of the put area is 0
After overflow(): size of the get area is 0 size of the put area is 32
Before underflow(): size of the get area is 0 size of the put area is 32
After underflow(): size of the get area is 3 size of the put area is 32
underflow() returns '1'
Before underflow(): size of the get area is 3 size of the put area is 32
After underflow(): size of the get area is 3 size of the put area is 32
underflow() returns EOF
123

```

### See also

|  |  |
| --- | --- |
| underflow[virtual] | reads characters from the associated input sequence to the get area   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| underflow[virtual] | returns the next character available in the input sequence   (virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) |
| underflow[virtual] | reads from the associated file   (virtual protected member function of `std::basic_filebuf<CharT,Traits>`) |
| sgetc | reads one character from the input sequence without advancing the sequence   (public member function of `std::basic_streambuf<CharT,Traits>`) |
| get | extracts characters   (public member function of `std::basic_istream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/underflow&oldid=170649>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 April 2024, at 06:36.