# std::skipws, std::noskipws

From cppreference.com
< cpp‎ | io‎ | manip
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

Input/output manipulators

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Floating-point formatting | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | showpointnoshowpoint | | | | | | setprecision | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fixedscientifichexfloatdefaultfloat(C++11)(C++11) | | | | | |
| Integer formatting | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setbase | | | | | | showbasenoshowbase | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | dechexoct | | | | | |
| Boolean formatting | | | | |
| boolalphanoboolalpha | | | | |
| Field width and fill control | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setfill | | | | | | setw | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | internalleftright | | | | | |
| Other formatting | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | showposnoshowpos | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uppercasenouppercase | | | | | |
| Whitespace processing | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ws | | | | | | ends | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****skipwsnoskipws**** | | | | | |
| Output flushing | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | flush | | | | | | endl | | | | | | flush_emit(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | unitbufnounitbuf | | | | | | emit_on_flushnoemit_on_flush(C++20)(C++20) | | | | | |
| Status flags manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | resetiosflags | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setiosflags | | | | | |
| Time and money I/O | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_money(C++11) | | | | | | get_time(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | put_money(C++11) | | | | | | put_time(C++11) | | | | | |
| Quoted manipulator | | | | |
| quoted(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ios>` |  |  |
| std::ios_base& skipws( std::ios_base& str ); | (1) |  |
| std::ios_base& noskipws( std::ios_base& str ); | (2) |  |
|  |  |  |

Enables or disables skipping of leading whitespace by the formatted input functions (enabled by default). Has no effect on output.

1) Enables the `skipws` flag in the stream str as if by calling str.setf(std::ios_base::skipws).2) Disables the `skipws` flag in the stream str as if by calling str.unsetf(std::ios_base::skipws).

The whitespace skipping is performed by the constructor of std::basic_istream::sentry, which reads and discards the characters classified as whitespace by the std::ctype facet of the stream's imbued locale.

This is an I/O manipulator, it may be called with an expression such as out << std::noskipws for any `out` of type std::basic_ostream or with an expression such as in >> std::noskipws for any `in` of type std::basic_istream.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | reference to I/O stream |

### Return value

str (reference to the stream after manipulation).

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
int main()
{
    char c1, c2, c3;
    std::istringstream("a b c") >> c1 >> c2 >> c3;
    std::cout << "Default  behavior:"
                 " c1 = " << c1 << 
                 " c2 = " << c2 << 
                 " c3 = " << c3 << '\n';
    std::istringstream("a b c") >> std::noskipws >> c1 >> c2 >> c3;
    std::cout << "noskipws behavior:" 
                 " c1 = " << c1 <<
                 " c2 = " << c2 <<
                 " c3 = " << c3 << '\n';
}

```

Output:

```
Default  behavior: c1 = a c2 = b c3 = c
noskipws behavior: c1 = a c2 =   c3 = b

```

### See also

|  |  |
| --- | --- |
| resetiosflags | clears the specified ios_base flags   (function) |
| setiosflags | sets the specified `ios_base` flags   (function) |
| ws | consumes whitespace   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/manip/skipws&oldid=159203>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 September 2023, at 10:29.