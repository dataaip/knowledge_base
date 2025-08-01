# operator<<(std::basic_ostream)

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
| basic_ostream::sentry | | | | |
| Non-member functions | | | | |
| ****operator<<(std::basic_ostream)**** | | | | |
| print(std::ostream)(C++23) | | | | |
| println(std::ostream)(C++23) | | | | |
| vprint_unicode(std::ostream)(C++23) | | | | |
| vprint_nonunicode(std::ostream)(C++23) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ostream>` |  |  |
| basic_ostream and character |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| template< class CharT, class Traits >  basic_ostream<CharT, Traits>&     operator<<( basic_ostream<CharT, Traits>& os, CharT ch ); |  |  |
| template< class CharT, class Traits >  basic_ostream<CharT, Traits>&     operator<<( basic_ostream<CharT, Traits>& os, char ch ); |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, char ch ); |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, signed char ch ); |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, unsigned char ch ); |  |  |
|  |  |  |
| --- | --- | --- |
| basic_ostream and character array |  |  |
|  |  |  |
| --- | --- | --- |
|  | (2) |  |
| template< class CharT, class Traits >  basic_ostream<CharT, Traits>&     operator<<( basic_ostream<CharT, Traits>& os, const CharT\* s ); |  |  |
| template< class CharT, class Traits >  basic_ostream<CharT, Traits>&     operator<<( basic_ostream<CharT, Traits>& os, const char\* s ); |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const char\* s ); |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const signed char\* s ); |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const unsigned char\* s ); |  |  |
|  |  |  |
| --- | --- | --- |
| basic_ostream rvalue |  |  |
| template< class Ostream, class T >  Ostream&& operator<<( Ostream&& os, const T& value ); | (3) | (since C++11) |
| deleted overloads for basic_ostream and UTF character/array |  |  |
|  |  |  |
| --- | --- | --- |
|  | (4) | (since C++20) |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, wchar_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, char8_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, char16_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, char32_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<wchar_t, Traits>&     operator<<( basic_ostream<wchar_t, Traits>& os, char8_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<wchar_t, Traits>&     operator<<( basic_ostream<wchar_t, Traits>& os, char16_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<wchar_t, Traits>&     operator<<( basic_ostream<wchar_t, Traits>& os, char32_t ch ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const wchar_t\* s ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const char8_t\* s ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const char16_t\* s ) = delete; |  |  |
| template< class Traits >  basic_ostream<char, Traits>&     operator<<( basic_ostream<char, Traits>& os, const char32_t\* s ) = delete; |  |  |
| template< class Traits >  basic_ostream<wchar_t, Traits>&     operator<<( basic_ostream<wchar_t, Traits>& os, const char8_t\* s ) = delete; |  |  |
| template< class Traits >  basic_ostream<wchar_t, Traits>&     operator<<( basic_ostream<wchar_t, Traits>& os, const char16_t\* s ) = delete; |  |  |
| template< class Traits >  basic_ostream<wchar_t, Traits>&     operator<<( basic_ostream<wchar_t, Traits>& os, const char32_t\* s ) = delete; |  |  |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Inserts a character or a character string.

1) Behaves as a FormattedOutputFunction. After constructing and checking the sentry object, inserts the character ch. If ch has type char and the character container type of os is not char, os.widen(ch) will be inserted instead. Padding is determined as follows:

- If os.width() > 1, then os.width() - 1 copies of os.fill() are added to the output character to form the output character sequence.
- If (out.flags() & std::ios_base::adjustfield) == std::ios_base::left, the fill characters are placed after the output character, otherwise before.
 After insertion, os.width(0) is called to cancel the effects of std::setw, if any.2) Behaves as a FormattedOutputFunction. After constructing and checking the sentry object, inserts successive characters from the character array whose first element is pointed to by s.

- For the first and third overloads (where `CharT` matches the type of ch), exactly traits::length(s) characters are inserted.
- For the second overload, exactly std::char_traits<char>::length(s) characters are inserted.
- For the last two overloads, exactly traits::length(reinterpret_cast<const char\*>(s)) are inserted.
 Before insertion, first, all characters are widened using os.widen(), then padding is determined as follows:

- If the number of characters to insert is less than os.width(), then enough copies of os.fill() are added to the character sequence to make its length equal os.width().
- If (out.flags() & std::ios_base::adjustfield) == std::ios_base::left, the fill characters are added at the end of the output sequence, otherwise they are added before the output sequence.
 After insertion, os.width(0) is called to cancel the effects of std::setw, if any. If s is a null pointer, the behavior is undefined.3) Calls the appropriate insertion operator, given an rvalue reference to an output stream object (equivalent to os << value). This overload participates in overload resolution only if the expression os << value is well-formed and `Ostream` is a class type publicly and unambiguously derived from std::ios_base.4) Overloads that accept char16_t, char32_t etc (or null terminated sequence thereof) are deleted: std::cout << u'X' is not allowed. Previously, these would print an integer or pointer value.

### Parameters

|  |  |  |
| --- | --- | --- |
| os | - | output stream to insert data to |
| ch | - | reference to a character to insert |
| s | - | pointer to a character string to insert |

### Return value

1,2) os3) std::move(os)

### Notes

Before LWG issue 1203, code such as (std::ostringstream() << 1.2).str() does not compile.

### Example

Run this code

```
#include <fstream>
#include <iostream>
 
void foo()
{
    // error: operator<< (basic_ostream<char, _Traits>&, char8_t) is deleted
//  std::cout << u8'z' << '\n';
}
 
std::ostream& operator<<(std::ostream& os, char8_t const& ch)
{
    return os << static_cast<char>(ch);
}
 
int main()
{
    std::cout << "Hello, world" // uses `const char*` overload
              << '\n';          // uses `char` overload
    std::ofstream{"test.txt"} << 1.2; // uses rvalue overload
 
    std::cout << u8'!' << '\n'; // uses program-defined operator<<(os, char8_t const&)
}

```

Output:

```
Hello, world
!

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 167 | C++98 | the number of characters inserted for all overloads in (2) was traits::length(s) | updated the numbers for the overloads where `CharT` does not match the type of ch |
| LWG 1203 | C++11 | overload for rvalue stream returned lvalue reference to the base class | returns rvalue reference to the derived class |
| LWG 2011 | C++98 | padding was determined by std::num_put::do_put() | determined by the operator itself |
| LWG 2534 | C++11 | overload for rvalue stream was not constrained | constrained |

### See also

|  |  |
| --- | --- |
| operator<< | inserts formatted data   (public member function) |
| print(std::ostream)(C++23) | outputs formatted representation of the arguments   (function template) |
| widen | widens characters   (public member function of `std::basic_ios<CharT,Traits>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt2&oldid=169503>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 February 2024, at 00:52.