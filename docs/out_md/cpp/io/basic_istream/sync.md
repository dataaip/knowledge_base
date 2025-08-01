# std::basic_istream<CharT,Traits>::sync

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
| basic_istream::seekg | | | | |
| Miscellaneous | | | | |
| ****basic_istream::sync**** | | | | |
| basic_istream::swap(C++11) | | | | |
| Member classes | | | | |
| basic_istream::sentry | | | | |
| Non-member functions | | | | |
| operator>>(std::basic_istream) | | | | |

|  |  |  |
| --- | --- | --- |
| int sync(); |  |  |
|  |  |  |

Synchronizes the input buffer with the associated data source.

Behaves as UnformattedInputFunction, except that gcount() is not affected. After constructing and checking the sentry object,

If rdbuf() is a null pointer, returns -1.

Otherwise, calls rdbuf()->pubsync(). If that function returns -1, calls setstate(badbit) and returns -1. Otherwise, returns ​0​.

### Parameters

(none)

### Return value

​0​ on success, -1 on failure or if the stream does not support this operation (is unbuffered).

### Notes

As with readsome(), it is implementation-defined whether this function does anything with library-supplied streams. The intent is typically for the next read operation to pick up any changes that may have been made to the associated input sequence after the stream buffer last filled its get area. To achieve that, `sync()` may empty the get area, or it may refill it, or it may do nothing. A notable exception is Visual Studio, where this operation discards the unprocessed input when called with a standard input stream.

### Example

Demonstrates the use of input stream `sync()` with file input. Note that output here is implementation-defined, since calls to std::basic_filebuf::sync are implementation-defined for reads.

Run this code

```
#include <fstream>
#include <iostream>
 
void file_abc()
{
    std::ofstream f("test.txt");
    f << "abc\n";
}
 
void file_123()
{
    std::ofstream f("test.txt");
    f << "123\n";
}
 
int main()
{
    file_abc(); // file now contains "abc"
    std::ifstream f("test.txt");
    std::cout << "Reading from the file\n";
    char c;
    f >> c;
    std::cout << c;
    file_123(); // file now contains "123"
    f >> c;
    std::cout << c;
    f >> c;
    std::cout << c << '\n';
    f.close();
 
    file_abc(); // file now contains "abc"
    f.open("test.txt");
    std::cout << "Reading from the file, with sync()\n";
    f >> c;
    std::cout << c;
    file_123(); // file now contains "123"
    f.sync();
    f >> c;
    std::cout << c;
    f >> c;
    std::cout << c << '\n';
}

```

Possible output:

```
Reading from the file
abc
Reading from the file, with sync()
a23

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 62 | C++98 | `sync()` returned traits::eof() if rdbuf()->pubsync() returns -1 | returns -1 in this case |

### See also

|  |  |
| --- | --- |
| sync[virtual] | synchronizes the buffers with the associated character sequence   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| flush | synchronizes with the underlying storage device   (public member function of `std::basic_ostream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_istream/sync&oldid=158537>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 September 2023, at 06:53.