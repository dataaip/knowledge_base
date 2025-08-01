# std::basic_istream<CharT,Traits>::basic_istream

From cppreference.com
< cpp‎ | io‎ | basic istream
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

std::basic_istream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Global objects | | | | |
| cinwcin | | | | |
| Member functions | | | | |
| ****basic_istream::basic_istream**** | | | | |
| basic_istream::~basic_istream | | | | |
| basic_istream::operator=(C++11) | | | | |
| Formatted input | | | | |
| basic_istream::operator>> | | | | |
| Unformatted input | | | | |
| basic_istream::get | | | | |
| basic_istream::peek | | | | |
| basic_istream::unget | | | | |
| basic_istream::putback | | | | |
| basic_istream::getline | | | | |
| basic_istream::ignore | | | | |
| basic_istream::read | | | | |
| basic_istream::readsome | | | | |
| basic_istream::gcount | | | | |
| Positioning | | | | |
| basic_istream::tellg | | | | |
| basic_istream::seekg | | | | |
| Miscellaneous | | | | |
| basic_istream::sync | | | | |
| basic_istream::swap(C++11) | | | | |
| Member classes | | | | |
| basic_istream::sentry | | | | |
| Non-member functions | | | | |
| operator>>(std::basic_istream) | | | | |

|  |  |  |
| --- | --- | --- |
| explicit basic_istream( std::basic_streambuf<CharT, Traits>\* sb ); | (1) |  |
| protected:  basic_istream( const basic_istream& rhs ) = delete; | (2) | (since C++11) |
| protected:  basic_istream( basic_istream&& rhs ); | (3) | (since C++11) |
|  |  |  |

1) Constructs the `basic_istream` object, assigning initial values to the base class by calling basic_ios::init(sb). The value of `gcount()` is initialized to zero.

2) The copy constructor is protected, and is deleted. Input streams are not copyable.

3) The move constructor copies the value of `gcount()` from rhs, sets the gcount() value of rhs to zero, and uses basic_ios<CharT, Traits>::move(rhs) to move all basic_ios members, except for the `rdbuf()`, from rhs into \*this. This move constructor is protected: it is called by the move constructors of movable input stream classes std::basic_ifstream and std::basic_istringstream, which know how to correctly move the associated stream buffer.

### Parameters

|  |  |  |
| --- | --- | --- |
| sb | - | streambuffer to use as underlying device |

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
int main()
{
    std::istringstream s1("hello");
    std::istream s2(s1.rdbuf()); // OK: s2 shares the buffer with s1
 
//  std::istream s3(std::istringstream("test")); // ERROR: move constructor is protected
//  std::istream s4(s2);                         // ERROR: copy constructor is deleted
    std::istringstream s5(std::istringstream("world")); // OK: move ctor called
                                                        //     by derived class
 
    std::cout << s2.rdbuf() << ' ' << s5.rdbuf() << '\n';
}

```

Output:

```
hello world

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_istream/basic_istream&oldid=158515>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 September 2023, at 23:41.