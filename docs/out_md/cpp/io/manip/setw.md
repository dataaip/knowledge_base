# std::setw

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setfill | | | | | | ****setw**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | internalleftright | | | | | |
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
| Defined in header `<iomanip>` |  |  |
| /\* unspecified \*/ setw( int n ); |  |  |
|  |  |  |

When used in an expression out << std::setw(n) or in >> std::setw(n), sets the `width` parameter of the stream out or in to exactly n.

Some operations reset the width to zero (see below), so `std::setw` may need to be repeatedly called to set the width for multiple operations.

### Parameters

|  |  |  |
| --- | --- | --- |
| n | - | new value for width |

### Return value

An object of unspecified type such that

- if out is an object of type std::basic_ostream<CharT, Traits>, the expression out << setw(n)
  - has type std::basic_ostream<CharT, Traits>&
  - has value out
  - behaves as if it called f(out, n)
- if in is an object of type std::basic_istream<CharT, Traits>, the expression in >> setw(n)
  - has type std::basic_istream<CharT, Traits>&
  - has value in
  - behaves as if it called f(in, n)

where the function f is defined as:

```
void f(std::ios_base& str, int n)
{
    // set width
    str.width(n);
}

```

### Notes

The width property of the stream will be reset to zero (meaning "unspecified") if any of the following functions are called:

- Input

:   - operator>>(basic_istream&, basic_string&)
    - operator>>(basic_istream&, char\*)

- Output

:   - Overloads of basic_ostream::operator<<() that take arithmetic types or void pointers (at Stage 3 of num_put::put())
    - operator<<(basic_ostream&, char) and operator<<(basic_ostream&, char\*)
    - operator<<(basic_ostream&, basic_string&)
    - std::put_money (inside money_put::put())
    - std::quoted (when used with an output stream)

The exact effects this modifier has on the input and output vary between the individual I/O functions and are described at each operator<< and operator>> overload page individually.

### Example

Run this code

```
#include <iomanip>
#include <iostream>
#include <sstream>
 
int main()
{
    std::cout << "no setw: [" << 42 << "]\n"
              << "setw(6): [" << std::setw(6) << 42 << "]\n"
              << "no setw, several elements: [" << 89 << 12 << 34 << "]\n"
              << "setw(6), several elements: [" << 89 << std::setw(6) << 12 << 34 << "]\n";
 
    std::istringstream is("hello, world");
    char arr[10];
 
    is >> std::setw(6) >> arr;
    std::cout << "Input from \"" << is.str() << "\" with setw(6) gave \""
              << arr << "\"\n";
}

```

Output:

```
no setw: [42]
setw(6): [    42]
no setw, several elements: [891234]
setw(6), several elements: [89    1234]
Input from "hello, world" with setw(6) gave "hello"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 183 | C++98 | `setw` could only be used with streams of type std::ostream or std::istream | usable with any character stream |

### See also

|  |  |
| --- | --- |
| width | manages field width   (public member function of `std::ios_base`) |
| setfill | changes the fill character   (function template) |
| internalleftright | sets the placement of fill characters   (function) |
| showbasenoshowbase | controls whether prefix is used to indicate numeric base   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/manip/setw&oldid=155373>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 July 2023, at 18:43.