# std::basic_stringbuf<CharT,Traits,Allocator>::overflow

From cppreference.com
< cpp‎ | io‎ | basic stringbuf
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

std::basic_stringbuf

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Public member functions | | | | |
| basic_stringbuf::basic_stringbuf | | | | |
| basic_stringbuf::operator=(C++11) | | | | |
| basic_stringbuf::swap(C++11) | | | | |
| basic_stringbuf::str | | | | |
| basic_stringbuf::get_allocator(C++20) | | | | |
| basic_stringbuf::view(C++20) | | | | |
| Protected member functions | | | | |
| basic_stringbuf::underflow | | | | |
| basic_stringbuf::pbackfail | | | | |
| ****basic_stringbuf::overflow**** | | | | |
| basic_stringbuf::setbuf | | | | |
| basic_stringbuf::seekoff | | | | |
| basic_stringbuf::seekpos | | | | |
| Non-member functions | | | | |
| swap(std::basic_stringbuf)(C++11) | | | | |
| Exposition-only member functions | | | | |
| basic_stringbuf::**init_buf_ptrs** | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  virtual int_type overflow( int_type c = Traits::eof() ); |  |  |
|  |  |  |

Appends the character c to the output character sequence.

If c is the end-of-file indicator (traits::eq_int_type(c, traits::eof()) == true), then there is no character to append. The function does nothing and returns an unspecified value other than traits::eof().

Otherwise, if the output sequence has a write position available or this function can successfully make a write position available, then calls sputc(c) and returns c.

This function can make a write position available if the std::stringbuf is open for output ((mode & ios_base::out) != 0): in this case, it reallocates (or initially allocates) the buffer big enough to hold the entire current buffer plus at least one more character. If the std::stringbuf is also open for input ((mode & ios_base::in) != 0), then `overflow` also increases the size of the get area by moving egptr() to point just past the new write position.

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | the character to store in the put area |

### Return value

Traits::eof() to indicate failure, c if the character c was successfully appended, or some value other than Traits::eof() if called with Traits::eof() as the argument.

### Notes

This function is different from a typical `overflow()` which moves the contents of the buffer to the associated character sequence because for a std::basic_stringbuf, the buffer and the associated sequence are one and the same.

### Example

In the implementation used to execute this example (e.g. GCC-4.9), `overflow()` over-allocates the put area to 512 bytes: a call to str() would only return the four initialized bytes, but the next 508 calls to sputc() would not require new calls to `overflow()`.

Run this code

```
#include <sstream>
#include <iostream>
 
struct mybuf : std::stringbuf
{
    mybuf(const std::string& new_str,
          std::ios_base::openmode which = std::ios_base::in | std::ios_base::out)
        : std::stringbuf(new_str, which) {}
 
    int_type overflow(int_type c = EOF) override
    {
        std::cout << "stringbuf::overflow('" << char(c) << "') called\n"
                  << "Before: size of get area: " << egptr() - eback() << '\n'
                  << "        size of put area: " << epptr() - pbase() << '\n';
 
        int_type ret = std::stringbuf::overflow(c);
 
        std::cout << "After : size of get area: " << egptr() - eback() << '\n'
                  << "        size of put area: " << epptr() - pbase() << '\n';
 
        return ret;
    }
};
 
int main()
{
    std::cout << "read-write stream:\n";
    mybuf sbuf("   "); // read-write stream
    std::iostream stream(&sbuf);
    stream << 1234;
    std::cout << sbuf.str() << '\n';
 
    std::cout << "\nread-only stream:\n";
    mybuf ro_buf("   ", std::ios_base::in); // read-only stream
    std::iostream ro_stream(&ro_buf);
    ro_stream << 1234;
 
    std::cout << "\nwrite-only stream:\n";
    mybuf wr_buf("   ", std::ios_base::out); // write-only stream
    std::iostream wr_stream(&wr_buf);
    wr_stream << 1234;
}

```

Possible output:

```
read-write stream:
stringbuf::overflow('4') called
Before: size of get area: 3
        size of put area: 3
After : size of get area: 4
        size of put area: 512
1234
 
read-only stream:
stringbuf::overflow('1') called
Before: size of get area: 3
        size of put area: 0
After : size of get area: 3
        size of put area: 0
 
write-only stream:
stringbuf::overflow('4') called
Before: size of get area: 0
        size of put area: 3
After : size of get area: 0
        size of put area: 512

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 169 | C++98 | the buffer (re)allocated could only hold one extra character | allows more extra characters |
| LWG 432 | C++98 | `overflow` moved epptr() to point just past the new write position if the `std::stringbuf` is open for input | it is not moved |

### See also

|  |  |
| --- | --- |
| overflow[virtual] | writes characters to the associated output sequence from the put area   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| underflow[virtual] | returns the next character available in the input sequence   (virtual protected member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_stringbuf/overflow&oldid=148671>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 February 2023, at 22:59.