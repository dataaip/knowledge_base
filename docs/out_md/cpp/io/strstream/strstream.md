# std::strstream::strstream

From cppreference.com
< cpp‎ | io‎ | strstream
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

std::strstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****strstream::strstream**** | | | | |
| strstream::~strstream | | | | |
| strstream::rdbuf | | | | |
| strstream::str | | | | |
| strstream::pcount | | | | |
| strstream::freeze | | | | |

|  |  |  |
| --- | --- | --- |
| strstream(); | (1) | (deprecated in C++98)  (removed in C++26) |
| strstream( char\* s, int n, std::ios_base::openmode mode =                                 std::ios_base::in | std::ios_base::out ); | (2) | (deprecated in C++98)  (removed in C++26) |
|  |  |  |

Constructs new input/output strstream and its underlying std::strstreambuf.

1) Default-constructs the underlying std::strstreambuf, which creates a dynamically growing buffer, and initializes the base class with the address of the strstreambuf member.2) Initialized the base class with the address of the underlying std::strstreambuf member, which is initialized in one of the two possible ways, both of which use a user-provided fixed-size array:a) if (mode & app) == 0 (the app bit is not set in mode), constructs the buffer by calling strstreambuf(s, n, s). The behavior is undefined if there are less than n elements in the array whose first element is pointed to by s.b) if (mode & app) != 0 (the app bit is set in mode), constructs the buffer by calling strstreambuf(s, n, s + std::strlen(s)). The behavior is undefined if there are less than n elements in the array whose first element is pointed to by s or if the array does not contain a valid null-terminated character sequence.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | char array to use as the output buffer |
| n | - | size of the array to be used for output |
| mode | - | specifies stream open mode. It is a bitmask type, the following constants are defined (although only app is used):  |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode | |

### Example

Run this code

```
#include <iostream>
#include <string>
#include <strstream>
 
int main()
{
    // dynamic buffer
    std::strstream s1;
    s1 << 1 << ' ' << 3.14 << " example" << std::ends;
    std::cout << "Buffer holds: '" << s1.str() << "'\n";
    s1.freeze(false);
 
    int n;
    double d;
    std::string w;
    s1 >> n >> d >> w;
    std::cout << "Read back: n = " << n
              << ", d = " << d
              << ", w = '" << w << "'\n";
 
    // static buffer
    char arr[20] = "-1 -3.14 ";
    std::strstream s2(arr, sizeof arr, std::ios_base::app);
    s2 << "another" << std::ends;
    std::cout << "Buffer holds: '" << s2.str() << "'\n";
    s2 >> n >> d >> w;
    std::cout << "Read back: n = " << n
              << ", d = " << d
              << ", w = '" << w << "'\n";
}

```

Output:

```
Buffer holds: '1 3.14 example'
Read back: n = 1, d = 3.14, w = 'example'
Buffer holds: '-1 -3.14 another'
Read back: n = -1, d = -3.14, w = 'another'

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 115 | C++98 | overload (2) only considered the case mode & app == 0 (`==` has higher precedence than `&`) | considers cases (mode & app) == 0 and (mode & app) != 0 |

### See also

|  |  |
| --- | --- |
| (constructor) | constructs a `strstreambuf` object   (public member function of `std::strstreambuf`) |
| (constructor) | constructs an `istrstream` object, optionally allocating the buffer   (public member function of `std::istrstream`) |
| (constructor) | constructs an `ostrstream` object, optionally allocating the buffer   (public member function of `std::ostrstream`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstream/strstream&oldid=170629>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 April 2024, at 05:07.