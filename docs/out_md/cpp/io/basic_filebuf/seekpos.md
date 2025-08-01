# std::basic_filebuf<CharT,Traits>::seekpos

From cppreference.com
< cpp‎ | io‎ | basic filebuf
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

std::basic_filebuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| basic_filebuf::basic_filebuf | | | | |
| basic_filebuf::~basic_filebuf | | | | |
| basic_filebuf::operator=(C++11) | | | | |
| basic_filebuf::swap(C++11) | | | | |
| basic_filebuf::native_handle(C++26) | | | | |
| basic_filebuf::is_open | | | | |
| basic_filebuf::open | | | | |
| basic_filebuf::close | | | | |
| Protected member functions | | | | |
| basic_filebuf::showmanyc | | | | |
| basic_filebuf::underflow | | | | |
| basic_filebuf::uflow | | | | |
| basic_filebuf::pbackfail | | | | |
| basic_filebuf::overflow | | | | |
| basic_filebuf::setbuf | | | | |
| basic_filebuf::seekoff | | | | |
| ****basic_filebuf::seekpos**** | | | | |
| basic_filebuf::sync | | | | |
| basic_filebuf::imbue | | | | |
| Non-member functions | | | | |
| swap(std::basic_filebuf)(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  virtual pos_type seekpos( pos_type sp, std::ios_base::openmode which = std::ios_base::in | std::ios_base::out ); |  |  |
|  |  |  |

Repositions the file pointer, if possible, to the position indicated by sp. If the associated file is not open (is_open() == false), fails immediately.

Reposition performs as follows:

1) If the file is open for writing, writes the put area and any unshift sequences required by the currently imbued locale, using overflow().2) Repositions the file pointer, as if by calling std::fsetpos().3) If the file is open for reading, updates the get area if necessary.

If sp was not obtained by calling seekoff() or `seekpos()` on the same file, the behavior is undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| sp | - | file position obtained by seekoff() or `seekpos()` called earlier on the same file |
| which | - | defines which of the input and/or output sequences to affect. It can be one or a combination of the following constants:  |  |  | | --- | --- | | Constant | Explanation | | in | affect the input sequence | | out | affect the output sequence | |

### Return value

sp on success or pos_type(off_type(-1)) on failure.

### Notes

`seekpos()` is called by std::basic_streambuf::pubseekpos(), which is called by the single-argument versions of std::basic_istream::seekg() and std::basic_ostream::seekp().

Many implementations do not update the get area in `seekpos()`, delegating to underflow() that is called by the next sgetc().

### Example

On some implementations, the get area is emptied by `seekpos()` and the second `underflow()` is necessary to observe the effects.

Run this code

```
#include <fstream>
#include <iostream>
 
struct mybuf : std::filebuf
{
    pos_type seekpos(pos_type sp, std::ios_base::openmode which)
    {
        std::cout << "Before seekpos(" << sp << "), size of the get area is "
                  << egptr() - eback() << " with "
                  << egptr() - gptr() << " read positions available.\n";
 
        pos_type rc = std::filebuf::seekpos(sp, which);
 
        std::cout << "seekpos() returns " << rc << ".\nAfter the call, "
                  << "size of the get area is "
                  << egptr() - eback() << " with "
                  << egptr() - gptr() << " read positions available.\n";
// uncomment if get area is emptied by seekpos()
//        std::filebuf::underflow();
//        std::cout << "after forced underflow(), size of the get area is "
//                  << egptr() - eback() << " with "
//                  << egptr() - gptr() << " read positions available.\n";
 
        return rc;
    }
};
 
int main()
{
    mybuf buf;
    buf.open("test.txt", std::ios_base::in);
    std::istream stream(&buf);
    stream.get(); // read one char to force underflow()
    stream.seekg(2);
}

```

Possible output:

```
Before seekpos(2), size of the get area is 110 with 109 read positions available.
seekpos() returns 2.
After the call, size of the get area is 110 with 108 read positions available.

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 55 | C++98 | `seekpos` returned an undefined invalid stream position on failure | pos_type(off_type(-1)) is returned on failure |
| LWG 171 | C++98 | the sequence of the operations of reposition was not clear | made clear |

### See also

|  |  |
| --- | --- |
| pubseekpos | invokes seekpos()   (public member function of `std::basic_streambuf<CharT,Traits>`) |
| seekoff[virtual] | repositions the file position, using relative addressing   (virtual protected member function) |
| fseek | moves the file position indicator to a specific location in a file   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_filebuf/seekpos&oldid=143604>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 September 2022, at 19:27.