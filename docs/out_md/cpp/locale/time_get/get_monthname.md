# std::time_get<CharT,InputIt>::get_monthname, std::time_get<CharT,InputIt>::do_get_monthname

From cppreference.com
< cpp‎ | locale‎ | time get
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

Text processing library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Localization library | | | | |
| Regular expressions library (C++11) | | | | |
| Formatting library (C++20) | | | | |
| Null-terminated sequence utilities | | | | |
| Byte strings | | | | |
| Multibyte strings | | | | |
| Wide strings | | | | |
| Primitive numeric conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

Localization library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

std::time_get

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| time_get::time_get | | | | |
| time_get::~time_get | | | | |
| time_get::date_ordertime_get::do_date_order | | | | |
| time_get::get_timetime_get::do_get_time | | | | |
| time_get::get_datetime_get::do_get_date | | | | |
| time_get::get_weekdaytime_get::do_get_weekday | | | | |
| ****time_get::get_monthnametime_get::do_get_monthname**** | | | | |
| time_get::get_yeartime_get::do_get_year | | | | |
| time_get::gettime_get::do_get | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| public:  iter_type get_monthname( iter_type beg, iter_type end, std::ios_base& str, std::ios_base::iostate& err, std::tm\* t ) const; | (1) |  |
| protected:  virtual iter_type do_get_monthname( iter_type beg, iter_type end, std::ios_base& str, std::ios_base::iostate& err, std::tm\* t ) const; | (2) |  |
|  |  |  |

1) Public member function, calls the protected virtual member function `do_get_monthname` of the most derived class.2) Reads successive characters from the sequence ``beg`,`end`)` and parses out the month name (possibly abbreviated), using the default format for month names expected by this locale, which is the same format as "%b" as used by the functions [std::get_time, time_get::get, and the POSIX function `strptime()`.

If it finds abbreviated name, followed by the characters that are valid for the full name, it continues reading until it consumes all the characters for the full name or finds a character that isn't expected, in which case parsing fails even if the first few characters were a valid abbreviation.

The parsed month is stored in the std::tm field t->tm_mon.

If the end iterator is reached before a valid month name is read, the function sets std::ios_base::eofbit in err. If a parsing error is encountered, the function sets std::ios_base::failbit in err.

### Parameters

|  |  |  |
| --- | --- | --- |
| beg | - | iterator designating the start of the sequence to parse |
| end | - | one past the end iterator for the sequence to parse |
| str | - | a stream object that this function uses to obtain locale facets when needed, e.g. std::ctype to skip whitespace or std::collate to compare strings |
| err | - | stream error flags object that is modified by this function to indicate errors |
| t | - | pointer to the std::tm object that will hold the result of this function call |

### Return value

Iterator pointing one past the last character in ``beg`,`end`)` that was recognized as a part of a valid month name.

### Notes

This function is usually case-insensitive.

If a parsing error is encountered, most implementations of this function leave \*t unmodified.

### Example

Run this code

```
#include <ctime>
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>
#include <string_view>
 
void try_get_mon(std::string_view locale_name, std::string_view source)
{
    try
    {
        std::locale::global(std::locale(locale_name.data()));
    }
    catch (std::runtime_error const& ex)
    {
        std::cout << "Cannot setup locale: " << locale_name << "\n"
                     "Exception: " << ex.what() << '\n';
        return;
    }
 
    std::cout << "Parsing the month out of '" << source
              << "' in the locale " << std::locale().name() << '\n';
    std::istringstream str{source.data()};
    std::ios_base::iostate err = std::ios_base::goodbit;
 
    std::tm t;
    std::time_get<char> const& facet = std::use_facet<std::time_get<char>>(str.getloc());
    std::istreambuf_iterator<char> ret = facet.get_monthname({str}, {}, str, err, &t);
    str.setstate(err);
    std::istreambuf_iterator<char> last{};
 
    if (str)
    {
        std::cout << "Successfully parsed, month number is " << t.tm_mon;
 
        if (ret != last)
        {
            std::cout << ". Remaining content: ";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        }
        else
            std::cout << ". The input was fully consumed";
    }
    else
    {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
    }
 
    std::cout << '\n';
}
 
int main()
{
    try_get_mon("ja_JP.utf8", "2月");
    try_get_mon("th_TH.utf8", "กุมภาพันธ์");
    try_get_mon("el_GR.utf8", "Φεβ");
    try_get_mon("el_GR.utf8", "Φεβρουάριος");
    try_get_mon("en_US.utf8", "Febrile");
}

```

Possible output:

```
Parsing the month out of '2月' in the locale ja_JP.utf8
Successfully parsed, month number is 1. The input was fully consumed
Parsing the month out of 'กุมภาพันธ์' in the locale th_TH.utf8
Successfully parsed, month number is 1. The input was fully consumed
Parsing the month out of 'Φεβ' in the locale el_GR.utf8
Successfully parsed, month number is 1. The input was fully consumed
Parsing the month out of 'Φεβρουάριος' in the locale el_GR.utf8
Successfully parsed, month number is 1. The input was fully consumed
Parsing the month out of 'Febrile' in the locale en_US.utf8
Parse failed. Unparsed string: ile

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| [LWG 248 | C++98 | `eofbit` was not set upon reaching the end iterator | sets `eofbit` if a valid month name has not been read |

### See also

|  |  |
| --- | --- |
| get_time(C++11) | parses a date/time value of specified format   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/time_get/get_monthname&oldid=160214>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 October 2023, at 10:03.