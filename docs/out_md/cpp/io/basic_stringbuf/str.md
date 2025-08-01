# std::basic_stringbuf<CharT,Traits,Allocator>::str

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
| ****basic_stringbuf::str**** | | | | |
| basic_stringbuf::get_allocator(C++20) | | | | |
| basic_stringbuf::view(C++20) | | | | |
| Protected member functions | | | | |
| basic_stringbuf::underflow | | | | |
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
|  | (1) |  |
| std::basic_string<CharT, Traits, Allocator> str() const; |  | (until C++20) |
| std::basic_string<CharT, Traits, Allocator> str() const&; |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
| template<class SAlloc>  std::basic_string<CharT, Traits, SAlloc> str( const SAlloc& a ) const; | (2) | (since C++20) |
| std::basic_string<CharT, Traits, Allocator> str() &&; | (3) | (since C++20) |
| void str( const std::basic_string<CharT, Traits, Allocator>& s ); | (4) |  |
| template<class SAlloc>  void str( const std::basic_string<CharT, Traits, SAlloc>& s ); | (5) | (since C++20) |
| void str( std::basic_string<CharT, Traits, Allocator>&& s ); | (6) | (since C++20) |
| template< class StringViewLike >  void str( const StringViewLike& t ); | (7) | (since C++26) |
|  |  |  |

Gets and sets the underlying string.

In the descriptions below, buf and mode are exposition-only data members of \*this.

1) Creates and returns a std::basic_string object containing a copy of this `std::basic_stringbuf`'s underlying character sequence. For input-only streams, the returned string contains the characters from the range ``[eback()`,`egptr()`)`. For input/output or output-only streams, contains the characters from pbase() to the last character in the sequence regardless of egptr() and epptr().

:   :   The member character sequence in a buffer open for writing can be over-allocated for efficiency purposes. In that case, only the **initialized characters** are returned: these characters are the ones that were obtained from the string argument of the constructor, the string argument of the most recent call to a setter overload of `str()`, or from a write operation. A typical implementation that uses over-allocation maintains a high-watermark pointer to track the end of the initialized part of the buffer and this overload returns the characters from pbase() to the high-watermark pointer.

|  |  |
| --- | --- |
| Equivalent to return std::basic_string<CharT, Traits, Allocator>(view(), get_allocator());. | (since C++20) |

2) Same as (1), except that a is used to construct the returned std::basic_string. Equivalent to return std::basic_string<CharT, Traits, SAlloc>(view(), a);. This overload participates in overload resolution only if `SAlloc` meets the requirements of Allocator.3) Creates a std::basic_string object as if by move constructing it from \*this's underlying character sequence in buf. buf may need to be adjusted to contain the same content as in (1) at first. After that, sets buf to empty and calls `init_buf_ptrs()`, then returns the std::basic_string object.4) Replaces the underlying character sequence as if by buf = s, then calls `init_buf_ptrs()`.5) Same as (4), except the type of s's allocator is not `Allocator`. This overload participates in overload resolution only if std::is_same_v<SAlloc, Allocator> is false.6) Replaces the underlying character sequence as if by buf = std::move(s), then calls `init_buf_ptrs()`.7) Implicitly converts t to a string view sv as if by std::basic_string_view<CharT, Traits> sv = t;, then replaces the underlying character sequence as if by buf = sv, then calls `init_buf_ptrs()`. This overload participates in overload resolution only if std::is_convertible_v<const StringViewLike&,  
                      std::basic_string_view<CharT, Traits>> is true.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | a std::basic_string object holding the replacement character sequence |
| t | - | an object (convertible to std::basic_string_view) holding the replacement character sequence |
| a | - | allocator to use for all memory allocations of the returned std::basic_string |

### Return value

1-3) A std::basic_string object holding this buffer's underlying character sequence.4-7) (none)

### Notes

This function is typically accessed through std::basic_istringstream::str(), std::basic_ostringstream::str(), or std::basic_stringstream::str().

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_sstream_from_string_view` | `202306L` | (C++26) | Interfacing string streams with std::string_view |

### Example

Run this code

```
#include <iostream>
#include <sstream>
 
int main()
{
    int n;
 
    std::istringstream in;  // could also use in("1 2")
    in.rdbuf()->str("1 2"); // set the get area
    in >> n;
    std::cout << "after reading the first int from \"1 2\", the int is " 
              << n << ", str() = \"" << in.rdbuf()->str() << "\"\n"; // or in.str()
 
    std::ostringstream out("1 2");
    out << 3;
    std::cout << "after writing the int '3' to output stream \"1 2\""
              << ", str() = \"" << out.str() << "\"\n";
 
    std::ostringstream ate("1 2", std::ios_base::ate); // C++11
    ate << 3;
    std::cout << "after writing the int '3' to append stream \"1 2\""
              << ", str() = \"" << ate.str() << "\"\n";
}

```

Output:

```
after reading the first int from "1 2", the int is 1, str() = "1 2"
after writing the int '3' to output stream "1 2", str() = "3 2"
after writing the int '3' to append stream "1 2", str() = "1 23"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 432 | C++98 | 1. overload (1) did not specify the content of the underlying character sequence 2. overload (4) did not specify how the input and output sequences are initialized | both specified |
| LWG 562 | C++98 | overload (4) set epptr() to point one past the last underlying character if bool(mode & std::ios_base::out) == true | epptr() can be set beyond that position |

### See also

|  |  |
| --- | --- |
| str | gets or sets the contents of underlying string device object   (public member function of `std::basic_stringstream<CharT,Traits,Allocator>`) |
| view(C++20) | obtains a view over the underlying character sequence   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_stringbuf/str&oldid=158933>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 September 2023, at 15:31.