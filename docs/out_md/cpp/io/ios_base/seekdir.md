# std::ios_base::seekdir

From cppreference.com
< cpp‎ | io‎ | ios base
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

std::ios_base

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ios_base::ios_base | | | | |
| ios_base::~ios_base | | | | |
| ios_base::operator= | | | | |
| Formatting | | | | |
| ios_base::flags | | | | |
| ios_base::setf | | | | |
| ios_base::unsetf | | | | |
| ios_base::precision | | | | |
| ios_base::width | | | | |
| Locales | | | | |
| ios_base::imbue | | | | |
| ios_base::getloc | | | | |
| Internal extensible array | | | | |
| ios_base::xalloc | | | | |
| ios_base::iword | | | | |
| ios_base::pword | | | | |
| Miscellaneous | | | | |
| ios_base::register_callback | | | | |
| ios_base::sync_with_stdio | | | | |
| Member classes | | | | |
| ios_base::failure | | | | |
| ios_base::Init | | | | |
| Member types | | | | |
| ios_base::openmode | | | | |
| ios_base::fmtflags | | | | |
| ios_base::iostate | | | | |
| ****ios_base::seekdir**** | | | | |
| ios_base::event | | | | |
| ios_base::event_callback | | | | |

|  |  |  |
| --- | --- | --- |
| typedef /\*implementation defined\*/ seekdir; |  |  |
| static constexpr seekdir beg = /\*implementation defined\*/  static constexpr seekdir end = /\*implementation defined\*/ static constexpr seekdir cur = /\*implementation defined\*/ |  |  |
|  |  |  |

Specifies file seeking direction type. The following constants are defined:

|  |  |
| --- | --- |
| Constant | Explanation |
| ****beg**** | the beginning of a stream |
| ****end**** | the ending of a stream |
| ****cur**** | the current position of stream position indicator |

### Example

Run this code

```
#include <iostream>
#include <sstream>
#include <string>
 
int main()
{
    std::istringstream in("Hello, World!");
    std::string word1, word2, word3, word4, word5;
 
    in >> word1;
    in.seekg(0, std::ios_base::beg); // <- rewind
    in >> word2;
    in.seekg(1, std::ios_base::cur); // -> seek from cur pos toward the end
    in >> word3;
    in.seekg(-6, std::ios_base::cur); // <- seek from cur pos (end) toward begin
    in >> word4;
    in.seekg(-6, std::ios_base::end); // <- seek from end toward begin
    in >> word5;
 
    std::cout << "word1 = " << word1 << '\n'
              << "word2 = " << word2 << '\n'
              << "word3 = " << word3 << '\n'
              << "word4 = " << word4 << '\n'
              << "word5 = " << word5 << '\n';
}

```

Output:

```
word1 = Hello,
word2 = Hello,
word3 = World!
word4 = World!
word5 = World!

```

### See also

|  |  |
| --- | --- |
| seekg | sets the input position indicator   (public member function of `std::basic_istream<CharT,Traits>`) |
| seekp | sets the output position indicator   (public member function of `std::basic_ostream<CharT,Traits>`) |
| pubseekoff | invokes seekoff()   (public member function of `std::basic_streambuf<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base/seekdir&oldid=159120>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 September 2023, at 11:29.