# std::time_get<CharT,InputIt>::get, std::time_get<CharT,InputIt>::do_get

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
| time_get::get_monthnametime_get::do_get_monthname | | | | |
| time_get::get_yeartime_get::do_get_year | | | | |
| ****time_get::gettime_get::do_get**** | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| public:  iter_type get( iter_type beg, iter_type end, std::ios_base& str,                 std::ios_base::iostate& err, std::tm\* t, const char_type\* fmtbeg, const char_type\* fmtend ) const; | (1) | (since C++11) |
| protected:  virtual iter_type do_get( iter_type beg, iter_type end, std::ios_base& str,                            std::ios_base::iostate& err, std::tm \*t, char format, char modifier ) const; | (2) | (since C++11) |
|  |  |  |

1) Parses the date and time from the input character sequence beg, end) according to the format provided in the character sequence [fmtbeg, fmtend). The format is expected to follow the format described below, although actual processing of each format specifier can be customized by overriding `do_get`. The `get` function performs the following:
First, clears the error bits in err by executing err = [std::ios_base::goodbit. Then enters a loop, which terminates whenever any of the following conditions becomes true (checked in this order):a) All characters have been read from the format string (fmtbeg == fmtend).b) There was a parsing error (err != std::ios_base::goodbit).c) All characters have been read from the input sequence (beg == end. If this condition terminates the loop, the function sets both `eofbit` and `failbit` in err.

:   :   In the body of the loop, the following steps take place:

a) If the next character in the format string is '%', followed by one or two characters that form a valid std::get_time conversion specifier (see below), these characters are used in the call do_get(beg, end, str, err, t, format, modifier), where format is the primary conversion specifier character, and modifier is the optional modifier (which appears between `%` and the format character, if present). If there is no modifier, the value '\0' is used. If the format string is ambiguous or ends too early to determine the conversion specifier after '%', `eofbit` is set in err and the loop is terminated. If, after the call to `do_get`, no error bits are set in err, the function increments fmtbeg to point right after the conversion specifier and continues the loop.b) If the next character is whitespace, as indicated by the locale provided in the stream str (i.e. std::isspace(\*fmtbeg, str.getloc()) == true, the function keeps incrementing fmtbeg until it either becomes equal to fmtend or points to a non-whitespace character.c) If the next character in the format string is equivalent to the next character in the input stream according to case-insensitive comparison, the function advances both sequences by one character ++fmtbeg, ++beg; and continues the loop, Otherwise, it sets the `failbit` in err.2) Parses one conversion specifier from the input sequence beg, end) and updates the [std::tm structure pointed to by t accordingly.

:   :   First, clears the error bits in err by executing err = std::ios_base::goodbit. Then reads characters from the input sequence beg, end) that are expected by the [std::time_get format specifier formed by combining '%', modifier (if not '\0'), and format. If the characters do not combine to form a valid conversion specifier, sets `failbit` in err. If the end of the input stream is reached after reading a character, sets `eofbit` in err. If the input string was parsed successfully, updates the corresponding fields of \*t.

:   :   For complex conversion specifiers, such as '%x' or '%c', or the directives that use the modifiers 'E' and 'O', the function may fail to determine some of the values to store in \*t. In such case, it sets `eofbit` in err and leaves these fields in unspecified state.

### Parameters

|  |  |  |
| --- | --- | --- |
| beg | - | iterator designating the start of the sequence to parse |
| end | - | one past the end iterator for the sequence to parse |
| str | - | a stream object that this function uses to obtain locale facets when needed, e.g. std::ctype to skip whitespace or std::collate to compare strings |
| err | - | stream error flags object that is modified by this function to indicate errors |
| t | - | pointer to the std::tm object that will hold the result of this function call |
| fmtbeg | - | pointer to the first character of a sequence of `char_type` characters specifying the conversion format (see below) |
| fmtend | - | pointer one past the last character of a sequence of `char_type` characters specifying the conversion format |
| format | - | the character that names a conversion specifier |
| modifier | - | the optional modifier that may appear between `%` and the conversion specifier |

The format string consists of zero or more conversion specifiers, whitespace characters, and ordinary characters (except `%`). Each ordinary character is expected to match one character in the input stream in case-insensitive comparison. Each whitespace character matches arbitrary whitespace in the input string. Each conversion specification begins with `%` character, optionally followed by `E` or `O` modifier (ignored if unsupported by the locale), followed by the character that determines the behavior of the specifier. The format specifiers match the POSIX function `strptime()`:

| Conversion specifier | Explanation | Writes to fields |
| --- | --- | --- |
| `%` | matches a literal `%`. The full conversion specification must be `%%` | (none) |
| `t` | matches any whitespace | (none) |
| `n` | matches any whitespace | (none) |
| Year | | |
| `Y` | parses full ****year**** as a 4 digit decimal number, leading zeroes permitted but not required | `tm_year` |
| `EY` | parses ****year**** in the alternative representation, e.g.平成23年 (year Heisei 23) which writes 2011 to tm_year in ja_JP locale | `tm_year` |
| `y` | parses last 2 digits of ****year**** as a decimal number. Range `[69,99]` results in values 1969 to 1999, range `[00,68]` results in 2000-2068 | `tm_year` |
| `Oy` | parses last 2 digits of ****year**** using the alternative numeric system, e.g. 十一 is parsed as 11 in ja_JP locale | `tm_year` |
| `Ey` | parses ****year**** as offset from locale's alternative calendar period `%EC` | `tm_year` |
| `C` | parses the first 2 digits of ****year**** as a decimal number (range `[00,99]`) | `tm_year` |
| `EC` | parses the name of the base year (period) in the locale's alternative representation, e.g. 平成 (Heisei era) in ja_JP | `tm_year` |
| Month | | |
| `b` | parses the month name, either full or abbreviated, e.g. `Oct` | `tm_mon` |
| `h` | synonym of `b` | `tm_mon` |
| `B` | synonym of `b` | `tm_mon` |
| `m` | parses the ****month**** as a decimal number (range `[01,12]`), leading zeroes permitted but not required | `tm_mon` |
| `Om` | parses the ****month**** using the alternative numeric system, e.g. 十二 parses as 12 in ja_JP locale | `tm_mon` |
| Week | | |
| `U` | parses the ****week of the year**** as a decimal number (Sunday is the first day of the week) (range `[00,53]`), leading zeroes permitted but not required | `tm_year`, `tm_wday`, `tm_yday` |
| `OU` | parses the ****week of the year****, as by `%U`, using the alternative numeric system, e.g. 五十二 parses as 52 in ja_JP locale | `tm_year`, `tm_wday`, `tm_yday` |
| `W` | parses the ****week of the year**** as a decimal number (Monday is the first day of the week) (range `[00,53]`), leading zeroes permitted but not required | `tm_year`, `tm_wday`, `tm_yday` |
| `OW` | parses the ****week of the year****, as by `%W`, using the alternative numeric system, e.g. 五十二 parses as 52 in ja_JP locale | `tm_year`, `tm_wday`, `tm_yday` |
| Day of the year/month | | |
| `j` | parses ****day of the year**** as a decimal number (range `[001,366]`), leading zeroes permitted but not required | `tm_yday` |
| `d` | parses the ****day of the month**** as a decimal number (range `[01,31]`), leading zeroes permitted but not required | `tm_mday` |
| `Od` | parses the ****day of the month**** using the alternative numeric system, e.g. 二十七 parses as 27 in ja_JP locale, leading zeroes permitted but not required | `tm_mday` |
| `e` | synonym of `d` | `tm_mday` |
| `Oe` | synonym of `Od` | `tm_mday` |
| Day of the week | | |
| `a` | parses the name of the day of the week, either full or abbreviated, e.g. `Fri` | `tm_wday` |
| `A` | synonym of `a` | `tm_wday` |
| `w` | parses ****weekday**** as a decimal number, where Sunday is `0` (range `[0-6]`) | `tm_wday` |
| `Ow` | parses ****weekday**** as a decimal number, where Sunday is `0`, using the alternative numeric system, e.g. 二 parses as 2 in ja_JP locale | `tm_wday` |
| Hour, minute, second | | |
| `H` | parses the ****hour**** as a decimal number, 24 hour clock (range `[00-23]`), leading zeroes permitted but not required | `tm_hour` |
| `OH` | parses ****hour**** from 24-hour clock using the alternative numeric system, e.g. 十八 parses as 18 in ja_JP locale | `tm_hour` |
| `I` | parses ****hour**** as a decimal number, 12 hour clock (range `[01,12]`), leading zeroes permitted but not required | `tm_hour` |
| `OI` | parses ****hour**** from 12-hour clock using the alternative numeric system, e.g. 六 reads as 06 in ja_JP locale | `tm_hour` |
| `M` | parses ****minute**** as a decimal number (range `[00,59]`), leading zeroes permitted but not required | `tm_min` |
| `OM` | parses ****minute**** using the alternative numeric system, e.g. 二十五 parses as 25 in ja_JP locale | `tm_min` |
| `S` | parses ****second**** as a decimal number (range `[00,60]`), leading zeroes permitted but not required | `tm_sec` |
| `OS` | parses ****second**** using the alternative numeric system, e.g. 二十四 parses as 24 in ja_JP locale | `tm_sec` |
| Other | | |
| `c` | parses the locale's standard date and time string format, e.g. `Sun Oct 17 04:41:13 2010` (locale dependent) | all |
| `Ec` | parses the locale's alternative date and time string format, e.g. expecting 平成23年 (year Heisei 23) instead of 2011年 (year 2011) in ja_JP locale | all |
| `x` | parses the locale's standard date representation | all |
| `Ex` | parses the locale's alternative date representation, e.g. expecting 平成23年 (year Heisei 23) instead of 2011年 (year 2011) in ja_JP locale | all |
| `X` | parses the locale's standard time representation | all |
| `EX` | parses the locale's alternative time representation | all |
| `D` | equivalent to ****"%m / %d / %y "**** | `tm_mon`, `tm_mday`, `tm_year` |
| `r` | parses locale's standard 12-hour clock time (in POSIX, ****"%I : %M : %S %p"****) | `tm_hour`, `tm_min`, `tm_sec` |
| `R` | equivalent to ****"%H : %M"**** | `tm_hour`, `tm_min` |
| `T` | equivalent to ****"%H : %M : %S"**** | `tm_hour`, `tm_min`, `tm_sec` |
| `p` | parses the locale's equivalent of ****a.m. or p.m.**** | `tm_hour` |

Note: `tm_isdst` is not written to, and needs to be set explicitly for use with functions such as `mktime`

### Return value

Iterator pointing one past the last character in beg, end) that was parsed successfully.

### Notes

The case-insensitive comparison for the non-whitespace non-'%' characters in the format string, the [std::collate facet of the locale provided by str is typically, but not necessarily, used.

If a parsing error is encountered, many implementations of this function leave \*t completely untouched.

It's unspecified if these functions zero out the fields in \*t that they do not set directly: portable programs should initialize every field to zero before calling `get()`.

### Example

Run this code

```
#include <iomanip>
#include <iostream>
#include <locale>
#include <sstream>
 
int main()
{
    std::istringstream ss("2026-März-12 23:45:56");
    ss.imbue(std::locale("de_DE.utf8"));
 
    auto& f = std::use_facet<std::time_get<char>>(ss.getloc());
    std::tm t{};
    std::string s = "%Y-%b-%d %H:%M:%S";
    std::ios_base::iostate err = std::ios_base::goodbit;
    auto ret = f.get({ss}, {}, ss, err, &t, &s[0], &s[0] + s.size());
    ss.setstate(err);
    std::istreambuf_iterator<char> last{};
 
    if (ss)
    {
        std::cout << "Successfully parsed as " << std::put_time(&t, "%c") << '\n';
        if (ret != last)
        {
            std::cout << "Remaining content: ";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        }
        else
            std::cout << "The input was fully consumed.";
    }
    else
    {
        std::cout << "Parse failed.\nUnparsed string: ";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
    }
    std::cout << '\n';
}

```

Output:

```
Successfully parsed as Sun Mar 12 23:45:56 2026
The input was fully consumed.

```

### See also

|  |  |
| --- | --- |
| get_time(C++11) | parses a date/time value of specified format   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/time_get/get&oldid=169770>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 February 2024, at 12:56.