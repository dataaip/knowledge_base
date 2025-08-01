# std::basic_ostream<CharT,Traits>::put

From cppreference.com
< cpp‎ | io‎ | basic ostream
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

std::basic_ostream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Global objects | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | coutwcout | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cerrwcerr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clogwclog | | | | | |
| Member functions | | | | |
| basic_ostream::basic_ostream | | | | |
| basic_ostream::~basic_ostream | | | | |
| basic_ostream::operator=(C++11) | | | | |
| Formatted output | | | | |
| basic_ostream::operator<< | | | | |
| Unformatted output | | | | |
| ****basic_ostream::put**** | | | | |
| basic_ostream::write | | | | |
| Positioning | | | | |
| basic_ostream::tellp | | | | |
| basic_ostream::seekp | | | | |
| Miscellaneous | | | | |
| basic_ostream::flush | | | | |
| basic_ostream::swap(C++11) | | | | |
| Member classes | | | | |
| basic_ostream::sentry | | | | |
| Non-member functions | | | | |
| operator<<(std::basic_ostream) | | | | |
| print(std::ostream)(C++23) | | | | |
| println(std::ostream)(C++23) | | | | |
| vprint_unicode(std::ostream)(C++23) | | | | |
| vprint_nonunicode(std::ostream)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| basic_ostream& put( char_type ch ); |  |  |
|  |  |  |

Behaves as an UnformattedOutputFunction. After constructing and checking the sentry object, writes the character `ch` to the output stream.

If the output fails for any reason, sets `badbit`.

### Parameters

|  |  |  |
| --- | --- | --- |
| ch | - | character to write |

### Return value

\*this

### Notes

This function is not overloaded for the types signed char or unsigned char, unlike the formatted operator<<.

Unlike formatted output functions, this function does not set the `failbit` if the output fails.

### Example

Run this code

```
#include <fstream>
#include <iostream>
 
int main()
{
    std::cout.put('a'); // normal usage
    std::cout.put('\n');
 
    std::ofstream s("/does/not/exist/");
    s.clear(); // pretend the stream is good
    std::cout << "Unformatted output: ";
    s.put('c'); // this will set badbit, but not failbit
    std::cout << " fail=" << bool(s.rdstate() & s.failbit);
    std::cout << " bad=" << s.bad() << '\n';
    s.clear();
    std::cout << "Formatted output:   ";
    s << 'c'; // this will set badbit and failbit
    std::cout << " fail=" << bool(s.rdstate() & s.failbit);
    std::cout << " bad=" << s.bad() << '\n';
}

```

Output:

```
a
Unformatted output:  fail=0 bad=1
Formatted output:    fail=1 bad=1

```

### See also

|  |  |
| --- | --- |
| operator<<(std::basic_ostream) | inserts character data or insert into rvalue stream   (function template) |
| write | inserts blocks of characters   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/put&oldid=141918>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 August 2022, at 21:25.