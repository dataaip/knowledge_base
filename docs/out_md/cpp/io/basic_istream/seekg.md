# std::basic_istream<CharT,Traits>::seekg

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
| basic_istream::basic_istream | | | | |
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
| ****basic_istream::seekg**** | | | | |
| Miscellaneous | | | | |
| basic_istream::sync | | | | |
| basic_istream::swap(C++11) | | | | |
| Member classes | | | | |
| basic_istream::sentry | | | | |
| Non-member functions | | | | |
| operator>>(std::basic_istream) | | | | |

|  |  |  |
| --- | --- | --- |
| basic_istream& seekg( pos_type pos ); | (1) |  |
| basic_istream& seekg( off_type off, std::ios_base::seekdir dir ); | (2) |  |
|  |  |  |

Sets input position indicator of the current associated `streambuf` object.

|  |  |
| --- | --- |
| Before doing anything else, `seekg` clears `eofbit`. | (since C++11) |

`seekg` behaves as UnformattedInputFunction, except that gcount() is not affected. After constructing and checking the sentry object,

1) if fail() != true, sets the input position indicator to absolute (relative to the beginning of the file) value pos. Specifically, executes rdbuf()->pubseekpos(pos, std::ios_base::in) (pubseekpos, in turn, calls seekpos of the specific buffer, such as basic_filebuf::seekpos, basic_stringbuf::seekpos, or strstreambuf::seekpos). In case of failure, calls setstate(std::ios_base::failbit).2) if fail() != true, sets the input position indicator to position off, relative to position, defined by dir. Specifically, executes rdbuf()->pubseekoff(off, dir, std::ios_base::in). In case of failure, calls setstate(std::ios_base::failbit).

### Parameters

|  |  |  |
| --- | --- | --- |
| pos | - | absolute position to set the input position indicator to |
| off | - | relative position (positive or negative) to set the input position indicator to |
| dir | - | defines base position to apply the relative offset to. It can be one of the following constants:  |  |  | | --- | --- | | Constant | Explanation | | beg | the beginning of a stream | | end | the ending of a stream | | cur | the current position of stream position indicator | |

### Return value

\*this

### Exceptions

failure if an error occurred (the error state flag is not goodbit) and exceptions() is set to throw for that state.

If an internal operation throws an exception, it is caught and badbit is set. If exceptions() is set for `badbit`, the exception is rethrown.

### Notes

seekg(n) is not necessarily equivalent to seekg(n, ios::beg). std::basic_ifstream, for example, requires the absolute position n to come from tellg().

### Example

Run this code

```
#include <iostream>
#include <sstream>
#include <string>
 
int main()
{
    std::string str = "Hello, world";
    std::istringstream in(str);
    std::string word1, word2;
 
    in >> word1;
    in.seekg(0); // rewind
    in >> word2;
 
    std::cout << "word1 = " << word1 << '\n'
              << "word2 = " << word2 << '\n';
}

```

Output:

```
word1 = Hello,
word2 = Hello,

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 129 | C++98 | there was no way to indicate a failure | sets `failbit` on failure |
| LWG 136 | C++98 | `seekg` could set the output stream | only sets the input stream |
| LWG 537 | C++98 | the type of off was `off_type&` | corrected to `off_type` |

### See also

|  |  |
| --- | --- |
| tellg | returns the input position indicator   (public member function) |
| tellp | returns the output position indicator   (public member function of `std::basic_ostream<CharT,Traits>`) |
| seekp | sets the output position indicator   (public member function of `std::basic_ostream<CharT,Traits>`) |
| pubseekpos | invokes seekpos()   (public member function of `std::basic_streambuf<CharT,Traits>`) |
| seekpos[virtual] | repositions the file position, using absolute addressing   (virtual protected member function of `std::basic_filebuf<CharT,Traits>`) |
| seekpos[virtual] | repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   (virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) |
| seekpos[virtual] | repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   (virtual protected member function of `std::strstreambuf`) |
| pubseekoff | invokes seekoff()   (public member function of `std::basic_streambuf<CharT,Traits>`) |
| seekoff[virtual] | repositions the file position, using relative addressing   (virtual protected member function of `std::basic_filebuf<CharT,Traits>`) |
| seekoff[virtual] | repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   (virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) |
| seekoff[virtual] | repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   (virtual protected member function of `std::strstreambuf`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_istream/seekg&oldid=158534>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 September 2023, at 06:45.