# std::ios_base::width

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
| ****ios_base::width**** | | | | |
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
| ios_base::seekdir | | | | |
| ios_base::event | | | | |
| ios_base::event_callback | | | | |

|  |  |  |
| --- | --- | --- |
| streamsize width() const; | (1) |  |
| streamsize width( streamsize new_width ); | (2) |  |
|  |  |  |

Manages the minimum number of characters to generate on certain output operations and the maximum number of characters to generate on certain input operations.

1) Returns the current field width.2) Sets the field width to the given one. Returns the previous field width.

### Parameters

|  |  |  |
| --- | --- | --- |
| new_width | - | new field width setting |

### Return value

The field width before the call to the function.

### Notes

Some I/O functions call width(0) before returning, see std::setw (this results in this field having effect on the next I/O function only, and not on any subsequent I/O).

The exact effects this modifier has on the input and output vary between the individual I/O functions and are described at each `operator<<` and `operator>>` overload page individually.

### Example

Run this code

```
#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <span>
#include <string_view>
using namespace std::string_view_literals;
 
constexpr std::array table_header =
{
    "Language"sv, "Author"sv, "Birthdate"sv, "RIP date"sv
};
 
using row_t = std::array<std::string_view, table_header.size()>;
using widths_t = std::array<std::size_t, table_header.size()>;
 
constexpr std::array table_body = std::to_array<row_t>
({
    {"C", "Dennis Ritchie", "1941-09-09", "2011-10-12"},
    {"C++", "Bjarne Stroustrup", "1950-12-30"},
    {"C#", "Anders Hejlsberg", "1960-12-02"},
    {"Python", "Guido van Rossum", "1956-01-31"},
    {"Javascript", "Brendan Eich", "1961-07-04"}
});
 
constexpr widths_t calculate_column_widths(std::span<const row_t> table)
{
    widths_t widths{};
    for (const row_t& row : table)
        for (size_t i = 0; i != row.size(); ++i)
            widths[i] = std::max(widths[i], row[i].size());
    return widths;
}
 
void print_row(const row_t& row, const widths_t& widths)
{
    std::cout << '|';
    for (size_t i = 0; i != row.size(); ++i)
    {
        std::cout << ' ';
        std::cout.width(widths[i]);
        std::cout << row[i] << " |";
    }
    std::cout << '\n';
};
 
void print_break(const widths_t& widths)
{
    const std::size_t margin = 1;
    std::cout.put('+').fill('-');
    for (std::size_t w : widths)
    {
        std::cout.width(w + margin * 2);
        std::cout << '-' << '+';
    }
    std::cout.put('\n').fill(' ');
};
 
int main()
{
    constexpr widths_t widths = calculate_column_widths(table_body);
 
    std::cout.setf(std::ios::left, std::ios::adjustfield);
    print_break(widths);
    print_row(table_header, widths);
    print_break(widths);
    for (const row_t& row : table_body)
        print_row(row, widths);
    print_break(widths);
}

```

Output:

```
+------------+-------------------+------------+------------+
| Language   | Author            | Birthdate  | RIP date   |
+------------+-------------------+------------+------------+
| C          | Dennis Ritchie    | 1941-09-09 | 2011-10-12 |
| C++        | Bjarne Stroustrup | 1950-12-30 |            |
| C#         | Anders Hejlsberg  | 1960-12-02 |            |
| Python     | Guido van Rossum  | 1956-01-31 |            |
| Javascript | Brendan Eich      | 1961-07-04 |            |
+------------+-------------------+------------+------------+

```

### See also

|  |  |
| --- | --- |
| precision | manages decimal precision of floating point operations   (public member function) |
| setw | changes the width of the next input/output field   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base/width&oldid=169678>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 February 2024, at 22:41.