# std::put_money

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setfill | | | | | | setw | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | internalleftright | | | | | |
| Other formatting | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | showposnoshowpos | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uppercasenouppercase | | | | | |
| Whitespace processing | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ws | | | | | | ends | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | skipwsnoskipws | | | | | |
| Output flushing | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | flush | | | | | | endl | | | | | | flush_emit(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | unitbufnounitbuf | | | | | | emit_on_flushnoemit_on_flush(C++20)(C++20) | | | | | |
| Status flags manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | resetiosflags | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setiosflags | | | | | |
| Time and money I/O | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_money(C++11) | | | | | | get_time(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****put_money****(C++11) | | | | | | put_time(C++11) | | | | | |
| Quoted manipulator | | | | |
| quoted(C++14) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<iomanip>` |  |  |
| template< class MoneyT >  /\*unspecified\*/ put_money( const MoneyT& mon, bool intl = false ); |  | (since C++11) |
|  |  |  |

When used in an expression out << put_money(mon, intl), converts the monetary value mon to its character representation as specified by the std::money_put facet of the locale currently imbued in out.

The insertion operation in out << put_money(mon, intl) behaves as a FormattedOutputFunction.

### Parameters

|  |  |  |
| --- | --- | --- |
| mon | - | a monetary value, either long double or std::basic_string |
| intl | - | use international currency strings if true, use currency symbols otherwise |

### Return value

An object of unspecified type such that

- if out is an object of type std::basic_ostream<CharT, Traits>, the expression out << put_money(mon, intl)
  - has type std::basic_ostream<CharT, Traits>&
  - has value out
  - behaves as a FormattedOutputFunction that calls f(out, mon, intl)

where the function f is defined as:

```
template<class CharT, class Traits, class MoneyT>
void f(std::basic_ios<CharT, Traits>& str, const MoneyT& mon, bool intl)
{
    using Iter = std::ostreambuf_iterator<CharT, Traits>;
    using MoneyPut = std::money_put<CharT, Iter>;
 
    const MoneyPut& mp = std::use_facet<MoneyPut>(str.getloc());
    const Iter end = mp.put(Iter(str.rdbuf()), intl, str, str.fill(), mon);
 
    if (end.failed())
        str.setstate(std::ios_base::badbit);
}

```

### Example

Run this code

```
#include <iomanip>
#include <iostream>
 
int main()
{
    long double mon = 123.45; // or std::string mon = "123.45";
 
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << std::showbase
              << "en_US: " << std::put_money(mon)
              << " or " << std::put_money(mon, true) << '\n';
 
    std::cout.imbue(std::locale("ru_RU.UTF-8"));
    std::cout << "ru_RU: " << std::put_money(mon)
              << " or " << std::put_money(mon, true) << '\n';
 
    std::cout.imbue(std::locale("ja_JP.UTF-8"));
    std::cout << "ja_JP: " << std::put_money(mon)
              << " or " << std::put_money(mon, true) << '\n';
}

```

Possible output:

```
en_US: $1.23 or USD  1.23
ru_RU: 1.23 руб or 1.23 RUB 
ja_JP: ￥123 or JPY  123

```

### See also

|  |  |
| --- | --- |
| money_put | formats a monetary value for output as a character sequence   (class template) |
| get_money(C++11) | parses a monetary value   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/manip/put_money&oldid=159178>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 September 2023, at 22:38.