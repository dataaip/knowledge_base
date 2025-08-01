# std::basic_stringbuf<CharT,Traits,Allocator>::underflow

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
| ****basic_stringbuf::underflow**** | | | | |
| basic_stringbuf::pbackfail | | | | |
| basic_stringbuf::overflow | | | | |
| basic_stringbuf::setbuf | | | | |
| basic_stringbuf::seekoff | | | | |
| basic_stringbuf::seekpos | | | | |
| Non-member functions | | | | |
| swap(std::basic_stringbuf)(C++11) | | | | |
| Exposition-only member functions | | | | |
| basic_stringbuf::**init_buf_ptrs** | | | | |

|  |  |  |
| --- | --- | --- |
| protected:  virtual int_type underflow() |  |  |
|  |  |  |

Reads the next character from the get area of the buffer.

Specifically:

1) If the input sequence has a read position available (egptr() > gptr()), returns Traits::to_int_type(\*gptr())2) Otherwise, if pptr() > egptr() (some characters were inserted into the stream since the last time overflow() changed egptr()) then extends the end of the get area to include the most recently inserted characters, by changing egptr() to equal pptr(), and then returns Traits::to_int_type(\*gptr())3) Otherwise, returns Traits::eof().

Any character in the buffer which has been initialized, regardless of whether it originated from the string passed in the constructor or was appended by overflow(), is considered to be part of the input sequence.

### Parameters

(none)

### Return value

Traits::to_int_type(\*gptr()) (the next character to read in the get area) in case of success, or Traits::eof() in case of failure.

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
struct mybuf : std::stringbuf
{
    mybuf(const std::string& new_str,
          std::ios_base::openmode which = std::ios_base::in | std::ios_base::out)
        : std::stringbuf(new_str, which) {}
 
    int_type overflow(int_type c)
    {
        std::cout << "Before overflow():  get area size is " << egptr() - eback()
                  << ", the put area size is " << epptr() - pbase() << '\n';
        int_type rc = std::stringbuf::overflow(c);
        std::cout << "After overflow():   get area size is " << egptr() - eback()
                  << ", put area size is " << epptr() - pbase() << '\n';
        return rc;
    }
 
    int_type underflow()
    {
        std::cout << "Before underflow(): get area size is " << egptr() - eback()
                  << ", put area size is " << epptr() - pbase() << '\n';
        int_type ch = std::stringbuf::underflow();
        std::cout << "After underflow():  get area size is " << egptr() - eback()
                  << ", put area size is " << epptr() - pbase() << '\n';
 
        if (ch == EOF)
            std::cout << "underflow() returns EOF\n";
        else
            std::cout << "underflow() returns '" << char(ch) << "'\n";
        return ch;
    }
};
 
int main()
{
    mybuf sbuf("123"); // read-write stream
    std::iostream stream(&sbuf);
    int n;
    stream >> n; // calls sgetc() four times
                 // three calls return the characters '1', '2', '3'
                 // the fourth call, gptr() == egptr() and underflow() is called
                 // underflow returns EOF
    std::cout << "n = " << n << '\n';
    stream.clear(); // clear the eofbit
 
    stream << "123456"; // sputc() is called 6 times
                        // first three calls store "123" in the existing buffer
                        // 4th call finds that pptr() == epptr() and calls overflow()
                        // overflow() grows the buffer and sets egptr() to 4
                        // 5th and 6th calls store '5' and '6', advancing pptr()
 
    stream >> n; // calls sgetc() 4 times
                 // 1st call returns the '4' that was made available by overflow()
                 // on the 2nd call, egptr() == egptr() and underflow() is called
                 // underflow advances egptr() to equal pptr() (which is 6)
                 // 3rd sgetc() returns '6'
                 // 4th sgetc() finds gptr() == egptr(), calls underflow()
                 // underflow() returns EOF
 
    std::cout << "n = " << n << '\n';
}

```

Possible output:

```
Before underflow(): get area size is 3, put area size is 15
After underflow():  get area size is 3, put area size is 15
underflow() returns EOF
n = 123
Before underflow(): get area size is 3, put area size is 15
After underflow():  get area size is 6, put area size is 15
underflow() returns '4'
Before underflow(): get area size is 6, put area size is 15
After underflow():  get area size is 6, put area size is 15
underflow() returns EOF
n = 456

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 432 | C++98 | it was unclear whether characters appended by overflow() are considered to be part of the input sequence | made clear |

### See also

|  |  |
| --- | --- |
| underflow[virtual] | reads characters from the associated input sequence to the get area   (virtual protected member function of `std::basic_streambuf<CharT,Traits>`) |
| underflow[virtual] | reads from the associated file   (virtual protected member function of `std::basic_filebuf<CharT,Traits>`) |
| underflow[virtual] | reads a character from the input sequence without advancing the next pointer   (virtual protected member function of `std::strstreambuf`) |
| sgetc | reads one character from the input sequence without advancing the sequence   (public member function of `std::basic_streambuf<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_stringbuf/underflow&oldid=148336>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 February 2023, at 04:16.