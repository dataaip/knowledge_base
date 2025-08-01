# std::basic_ios<CharT,Traits>::clear

From cppreference.com
< cpp‎ | io‎ | basic ios
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

std::basic_ios

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| basic_ios::basic_ios | | | | |
| basic_ios::~basic_ios | | | | |
| State functions | | | | |
| basic_ios::good | | | | |
| basic_ios::eof | | | | |
| basic_ios::fail | | | | |
| basic_ios::bad | | | | |
| basic_ios::operator! | | | | |
| basic_ios::operator bool | | | | |
| basic_ios::rdstate | | | | |
| basic_ios::setstate | | | | |
| ****basic_ios::clear**** | | | | |
| Formatting | | | | |
| basic_ios::copyfmt | | | | |
| basic_ios::fill | | | | |
| Miscellaneous | | | | |
| basic_ios::exceptions | | | | |
| basic_ios::imbue | | | | |
| basic_ios::rdbuf | | | | |
| basic_ios::tie | | | | |
| basic_ios::narrow | | | | |
| basic_ios::widen | | | | |
| Protected member functions | | | | |
| basic_ios::init | | | | |
| basic_ios::move(C++11) | | | | |
| basic_ios::swap(C++11) | | | | |
| basic_ios::set_rdbuf(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| void clear( std::ios_base::iostate state = std::ios_base::goodbit ); |  |  |
|  |  |  |

Sets the stream error state flags by assigning them the value of state. By default, assigns std::ios_base::goodbit which has the effect of clearing all error state flags.

If rdbuf() is a null pointer (i.e. there is no associated stream buffer), then state | std::ios_base::badbit is assigned.

### Parameters

|  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| state | - | new error state flags setting. It can be a combination of the following constants:  |  |  | | --- | --- | | Constant | Explanation | | goodbit | no error | | badbit | irrecoverable stream error | | failbit | input/output operation failed (formatting or extraction error) | | eofbit | associated input sequence has reached end-of-file | |

### Return value

(none)

### Exceptions

If the new error state includes a bit that is also included in the exceptions() mask, throws an exception of type failure.

### Example

`clear()` without arguments can be used to unset the `failbit` after unexpected input; for std::cin.putback(c) see `ungetc`.

Run this code

```
#include <iostream>
#include <string>
 
int main()
{
    for (char c : {'\n', '4', '1', '.', '3', '\n', 'Z', 'Y', 'X'})
        std::cin.putback(c); // emulate user's input (not portable: see ungetc Notes)
 
    double n;
    while (std::cout << "Please, enter a number: " && !(std::cin >> n))
    {
        std::cin.clear();
        std::string line;
        std::getline(std::cin, line);
        std::cout << line << "\nI am sorry, but '" << line << "' is not a number\n";
    }
    std::cout << n << "\nThank you for entering the number " << n << '\n';
}

```

Output:

```
Please, enter a number: XYZ
I am sorry, but 'XYZ' is not a number
Please, enter a number: 3.14
Thank you for entering the number 3.14

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 412 | C++98 | an excption would be thrown if the current error state includes a bit that is also included in the exceptions() mask | checks the new error state instead |

### See also

|  |  |
| --- | --- |
| setstate | sets state flags   (public member function) |
| rdstate | returns state flags   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ios/clear&oldid=176647>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 October 2024, at 12:59.