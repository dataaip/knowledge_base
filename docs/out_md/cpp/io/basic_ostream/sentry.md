# std::basic_ostream<CharT,Traits>::sentry

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
| basic_ostream::put | | | | |
| basic_ostream::write | | | | |
| Positioning | | | | |
| basic_ostream::tellp | | | | |
| basic_ostream::seekp | | | | |
| Miscellaneous | | | | |
| basic_ostream::flush | | | | |
| basic_ostream::swap(C++11) | | | | |
| Member classes | | | | |
| ****basic_ostream::sentry**** | | | | |
| Non-member functions | | | | |
| operator<<(std::basic_ostream) | | | | |
| print(std::ostream)(C++23) | | | | |
| println(std::ostream)(C++23) | | | | |
| vprint_unicode(std::ostream)(C++23) | | | | |
| vprint_nonunicode(std::ostream)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| class sentry; |  |  |
|  |  |  |

An object of class `basic_ostream::sentry` is constructed in local scope at the beginning of each member function of std::basic_ostream that performs output (both formatted and unformatted). Its constructor prepares the output stream: checks if the stream is already in a failed state, flushes the tie()'d output streams, and performs other implementation-defined tasks if necessary. Implementation-defined cleanup, as well as flushing of the output stream if necessary, is performed in the destructor, so that it is guaranteed to happen if exceptions are thrown during output.

### Member functions

|  |  |
| --- | --- |
| ****(constructor)**** | constructs the sentry object. All the preparation tasks are done here   (public member function) |
| ****(destructor)**** | finalizes the stream object after formatted output or after exception, if necessary   (public member function) |
| operator= | the assignment operator is deleted   (public member function) |
| ****operator bool**** | checks if the preparation of the stream object was successful   (public member function) |

## std::basic_ostream::sentry::sentry

|  |  |  |
| --- | --- | --- |
| explicit sentry( std::basic_ostream<CharT, Traits>& os ); |  |  |
|  |  |  |

Prepares the stream for formatted output.

If os.good() is false, returns. Otherwise, if os.tie() is not a null pointer, calls os.tie()->flush() to synchronize the output sequence with external streams. During preparation, the constructor may call setstate(failbit) (which may throw std::ios_base::failure).

If after preparation is completed, os.good() == true, then any subsequent calls to operator bool will return true.

### Parameters

|  |  |  |
| --- | --- | --- |
| os | - | output stream to prepare |

### Exceptions

std::ios_base::failure if the end of file condition occurs.

## std::basic_ostream::sentry::~sentry

|  |  |  |
| --- | --- | --- |
| ~sentry(); |  |  |
|  |  |  |

If (os.flags() & std::ios_base::unitbuf) && !std::uncaught_exception() && os.good()) is true, calls os.rdbuf()->pubsync(). If that function returns -1, sets badbit in os.rdstate() without propagating an exception.

## std::basic_ostream::sentry::operator bool

|  |  |  |
| --- | --- | --- |
| explicit operator bool() const; |  |  |
|  |  |  |

Checks whether the preparation of the output stream was successful.

### Parameters

(none)

### Return value

true if the preparation of the output stream was successful, false otherwise.

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
struct Foo
{
    char n[6];
};
 
std::ostream& operator<<(std::ostream& os, Foo& f)
{
    std::ostream::sentry s(os);
    if (s)
        os.write(f.n, 5);
    return os;
}
 
int main()
{
    Foo f = {"abcde"};
    std::cout << f << '\n';
}

```

Output:

```
abcde

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 397 | C++98 | the destructor might call os.flush(), which may throw exceptions | the exception is not propagated |
| LWG 442 | C++98 | operator bool was not declared const (it is const in the synopsis) | added const |
| LWG 835 | C++98 | if os sets `unitbuf`, the destructor would call os.flush(), which is an UnformattedOutputFunction and creates another sentry object (whose destructor then creates another sentry object and so on) | calls os.rdbuf()->pubsync() in this case instead |

### See also

|  |  |
| --- | --- |
| operator<< | inserts formatted data   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/sentry&oldid=149635>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 March 2023, at 00:54.