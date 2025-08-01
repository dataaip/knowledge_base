# std::strstreambuf::seekpos

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
| strstreambuf::underflow | | | | |
| strstreambuf::pbackfail | | | | |
| strstreambuf::overflow | | | | |
| strstreambuf::setbuf | | | | |
| strstreambuf::seekoff | | | | |
| ****strstreambuf::seekpos**** | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  virtual pos_type seekpos( pos_type sp,                            std::ios_base::openmode which = std::ios_base::in | std::ios_base::out ); |  | (deprecated in C++98)  (removed in C++26) |
|  |  |  |

Repositions std::basic_streambuf::gptr and/or std::basic_streambuf::pptr, if possible, to the position indicated by sp.

If std::ios_base::in is set in which, attempts to reposition `gptr()` (the next pointer in the get area). If std::ios_base::out is set in which, attempts to reposition `pptr()` (the next pointer in the put area). If neither bit is set in which, the operation fails.

Each next pointer is repositioned as follows:

- If the next pointer is null, the operation fails.
- Otherwise, the new offset newoff (of type `off_type`) is determined by calling sp.offset(). If newoff is negative, out of bounds of the buffer, or invalid, the operation fails.
- Otherwise, the next pointer is assigned as if by gptr() = eback() + newoff or pptr() = pbase() + newoff.

### Parameters

|  |  |  |
| --- | --- | --- |
| sp | - | stream position, such as one obtained by seekoff() or `seekpos()` |
| which | - | defines whether the input sequences, the output sequence, or both are affected. It can be one or a combination of the following constants:  |  |  | | --- | --- | | Constant | Explanation | | in | affect the input sequence | | out | affect the output sequence | |

### Return value

The resultant offset converted to `pos_type` on success or pos_type(off_type(-1)) on failure.

### Notes

`seekpos()` is called by std::basic_streambuf::pubseekpos(), which is called by the single-argument versions of std::basic_istream::seekg() and std::basic_ostream::seekp().

### Example

Run this code

```
#include <cstring>
#include <iostream>
#include <strstream>
 
struct mybuf : std::strstreambuf
{
    mybuf(const char* str) : std::strstreambuf(str, std::strlen(str)) {}
 
    pos_type seekpos(pos_type sp, std::ios_base::openmode which)
    {
        std::cout << "Before seekpos(" << sp << "), size of the get area is "
                  << egptr() - eback() << " with "
                  << egptr() - gptr() << " read positions available.\n";
 
        pos_type rc = std::strstreambuf::seekpos(sp, which);
 
        std::cout << "seekpos() returns " << rc << ".\nAfter the call, "
                  << "size of the get area is "
                  << egptr() - eback() << " with "
                  << egptr() - gptr() << " read positions available.\n";
 
        return rc;
    }
};
 
int main()
{
    mybuf buf("12345");
    std::iostream stream(&buf);
    stream.seekg(2);
}

```

Output:

```
Before seekpos(2), size of the get area is 5 with 5 read positions available.
seekpos() returns 2.
After the call, size of the get area is 5 with 3 read positions available.

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 55 | C++98 | `seekpos` returned an undefined invalid stream position on failure | pos_type(off_type(-1)) is returned on failure |

### See also

|  |  |
| --- | --- |
| seekoff[virtual] | repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   (virtual protected member function) |
| seekpos[virtual] | repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| seekpos[virtual] | repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   (virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) |
| seekpos[virtual] | repositions the file position, using absolute addressing   (virtual protected member function of `std::basic_filebuf<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/seekpos&oldid=170654>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 April 2024, at 06:49.