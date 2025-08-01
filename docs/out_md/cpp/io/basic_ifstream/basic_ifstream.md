# std::basic_ifstream<CharT,Traits>::basic_ifstream

From cppreference.com
< cpp‎ | io‎ | basic ifstream
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

std::basic_ifstream

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****basic_ifstream::basic_ifstream**** | | | | |
| basic_ifstream::operator=(C++11) | | | | |
| basic_ifstream::swap(C++11) | | | | |
| basic_ifstream::rdbuf | | | | |
| basic_ifstream::native_handle(C++26) | | | | |
| File operations | | | | |
| basic_ifstream::is_open | | | | |
| basic_ifstream::open | | | | |
| basic_ifstream::close | | | | |
| Non-member functions | | | | |
| swap(std::basic_ifstream)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| basic_ifstream(); | (1) |  |
| explicit basic_ifstream( const char\* filename,  std::ios_base::openmode mode = std::ios_base::in ); | (2) |  |
| explicit basic_ifstream( const std::filesystem::path::value_type\* filename,  std::ios_base::openmode mode = std::ios_base::in ); | (3) | (since C++17) |
| explicit basic_ifstream( const std::string& filename,  std::ios_base::openmode mode = std::ios_base::in ); | (4) | (since C++11) |
| template< class FsPath >  explicit basic_ifstream( const FsPath& filename,                           std::ios_base::openmode mode = std::ios_base::in ); | (5) | (since C++17) |
| basic_ifstream( basic_ifstream&& other ); | (6) | (since C++11) |
| basic_ifstream( const basic_ifstream& rhs ) = delete; | (7) | (since C++11) |
|  |  |  |

Constructs new file stream.

1) Default constructor: constructs a stream that is not associated with a file: default-constructs the std::basic_filebuf and constructs the base with the pointer to this default-constructed std::basic_filebuf member.2,3) First, performs the same steps as the default constructor, then associates the stream with a file by calling rdbuf()->open(filename, mode | std::ios_base::in) (see std::basic_filebuf::open for the details on the effects of that call). If the `open()` call returns a null pointer, sets setstate(failbit). Overload (3) is only provided if std::filesystem::path::value_type is not char.(since C++17)4,5) Same as basic_ifstream(filename.c_str(), mode). (5) participates in overload resolution only if `FsPath` is std::filesystem::path.(since C++17)6) Move constructor. First, move-constructs the base class from other (which does not affect the `rdbuf()` pointer), then move-constructs the std::basic_filebuf member, then calls this->set_rdbuf() to install the new `basic_filebuf` as the `rdbuf()` pointer in the base class.7) The copy-constructor is deleted: this class is not copyable.

### Parameters

|  |  |  |
| --- | --- | --- |
| filename | - | the name of the file to be opened |
| mode | - | specifies stream open mode. Following constants and bit-wise OR between them may be used:  |  |  | | --- | --- | | Constant | Explanation | | app | seek to the end of stream before each write | | binary | open in binary mode | | in | open for reading | | out | open for writing | | trunc | discard the contents of the stream when opening | | ate | seek to the end of stream immediately after open | | noreplace (C++23) | open in exclusive mode | |
| other | - | another file stream to use as source |

### Example

Run this code

```
#include <fstream>
#include <string>
#include <utility>
 
int main()
{
    std::ifstream f0;
    std::ifstream f1("test.bin", std::ios::binary);
    std::string name = "example.txt";
    std::ifstream f2(name);
    std::ifstream f3(std::move(f1));
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3430 | C++17 | std::filesystem::path overload led to unwanted conversions | avoided by making it a template |

### See also

|  |  |
| --- | --- |
| open | opens a file and associates it with the stream   (public member function) |
| open | opens a file and configures it as the associated character sequence   (public member function of `std::basic_filebuf<CharT,Traits>`) |
| set_rdbuf | replaces the `rdbuf` without clearing its error state   (protected member function) |
| (constructor) | constructs the object   (public member function of `std::basic_istream<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ifstream/basic_ifstream&oldid=157175>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 August 2023, at 05:36.