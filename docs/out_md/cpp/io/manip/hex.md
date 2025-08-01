# std::dec, std::hex, std::oct

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setbase | | | | | | showbasenoshowbase | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****dechexoct**** | | | | | |
| Boolean formatting | | | | |
| boolalphanoboolalpha | | | | |
| Field width and fill control | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setfill | | | | | | setw | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | internalleftright | | | | | |
| Other formatting | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | showposnoshowpos | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uppercasenouppercase | | | | | |
| Whitespace processing | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ws | | | | | | ends | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | skipwsnoskipws | | | | | |
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
| std::ios_base& dec( std::ios_base& str ); | (1) |  |
| std::ios_base& hex( std::ios_base& str ); | (2) |  |
| std::ios_base& oct( std::ios_base& str ); | (3) |  |
|  |  |  |

Modifies the default numeric base for integer I/O.

1) Sets the `basefield` of the stream str to `dec` as if by calling str.setf(std::ios_base::dec, std::ios_base::basefield).2) Sets the `basefield` of the stream str to `hex` as if by calling str.setf(std::ios_base::hex, std::ios_base::basefield).3) Sets the `basefield` of the stream str to `oct` as if by calling str.setf(std::ios_base::oct, std::ios_base::basefield).

This is an I/O manipulator. It may be called with an expression such as out << std::hex for any `out` of type std::basic_ostream or with an expression such as in >> std::hex for any `in` of type std::basic_istream.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | reference to I/O stream |

### Return value

str (reference to the stream after manipulation).

### Example

Run this code

```
#include <bitset>
#include <iostream>
#include <sstream>
 
int main()
{
    std::cout << "The number 42 in octal:   " << std::oct << 42 << '\n'
              << "The number 42 in decimal: " << std::dec << 42 << '\n'
              << "The number 42 in hex:     " << std::hex << 42 << '\n';
    int n;
    std::istringstream("2A") >> std::hex >> n;
    std::cout << std::dec << "Parsing \"2A\" as hex gives " << n << '\n';
    // the output base is sticky until changed
    std::cout << std::hex << "42 as hex gives " << 42
        << " and 21 as hex gives " << 21 << '\n';
 
    // Note: there is no I/O manipulator that sets up a stream to print out
    // numbers in binary format (e.g. bin). If binary output is necessary
    // the std::bitset trick can be used:
    std::cout << "The number 42 in binary:  " << std::bitset<8>{42} << '\n';
}

```

Output:

```
The number 42 in octal:   52
The number 42 in decimal: 42
The number 42 in hex:     2a
Parsing "2A" as hex gives 42
42 as hex gives 2a and 21 as hex gives 15
The number 42 in binary:  00101010

```

### See also

|  |  |
| --- | --- |
| setbase | changes the base used for integer I/O   (function) |
| showbasenoshowbase | controls whether prefix is used to indicate numeric base   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/manip/hex&oldid=159176>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 September 2023, at 22:33.