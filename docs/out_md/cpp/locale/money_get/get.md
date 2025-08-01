# std::money_get<CharT,InputIt>::get, do_get

From cppreference.com
< cpp‎ | locale‎ | money get
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

std::money_get

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| money_get::money_get | | | | |
| money_get::~money_get | | | | |
| ****money_get::getmoney_get::do_get**** | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| public:  iter_type get( iter_type beg, iter_type end, bool intl, std::ios_base& str, std::ios_base::iostate& err, long double& units ) const; | (1) |  |
| iter_type get( iter_type beg, iter_type end, bool intl, std::ios_base& str,                 std::ios_base::iostate& err, string_type& digits ) const; | (2) |  |
| protected:  virtual iter_type do_get( iter_type beg, iter_type end, bool intl, std::ios_base& str, std::ios_base::iostate& err, long double& units ) const; | (3) |  |
| virtual iter_type do_get( iter_type beg, iter_type end, bool intl, std::ios_base& str,                            std::ios_base::iostate& err, string_type& digits ) const; | (4) |  |
|  |  |  |

Parses monetary value from an input iterator and writes the result to a long double or string.

1,2) Public member functions, call the member function `do_get` of the most derived class.3,4) Reads characters from the input iterator beg, expecting to find a monetary value formatted according to the rules specified by the std::ctype facet imbued in str.getloc() (`ct` for the rest of this page), the std::moneypunct<CharT, intl> facet imbued in str.getloc() (`mp` for the rest of this page), and the stream formatting flags obtained from str.flags().

If the input iterator beg becomes equal to end before the parsing was completed, sets both failbit and eofbit in err. If parsing fails for another reason, sets the `failbit` in err. Either way, does not modify the output parameter (units or digits) on error.

If the parsing succeeds, does not change err, and stores the result in units or digits.

The formatting pattern used by this function is always mp.neg_format().

If mp.grouping() does not permit thousands separators, the first separator encountered is treated as a parsing error, otherwise they are treated as optional.

If money_base::space or money_base::none is the last element in the pattern, the parser does not attempt to consume any whitespace after the other components of the monetary value were parsed. Otherwise, one or more whitespace characters are consumed where money_base::space appears.

If `showbase` flag is set in str.flags(), the currency symbol or currency string is required, if it is not set, the currency symbol is optional.

If the first character of the string returned by mp.positive_sign() or mp.negative_sign() is found in the money_base::sign position of the formatting pattern, it is consumed, and the rest of the characters in that string are expected and consumed after all other components of the monetary value. If both mp.positive_sign() and mp.negative_sign() are non-empty, the sign is required and must match the first character of one of these strings. If one of theses strings is empty, the sign is optional (and if it is absent, the sign of the result corresponds to the string that was empty). If both strings are empty, or have the same first character, the result is given the positive sign. If the output parameter is a string (digits) and the result is negative, the value ct.widen('-') is stored as the first character of the result.

Digits from the input are extracted in order in which they appear and are placed in digits (after widening by ct.widen() as necessary), or into a temporary buffer `buf1`, from which the value of units is constructed as if by

```
static const char src[] = "0123456789-";
CharT atoms[sizeof(src)];
ct.widen(src, src + sizeof(src) - 1, atoms);
for (int i = 0; i < n; ++i)
buf2[i] = src[find(atoms, atoms+sizeof(src), buf1[i]) - atoms];
buf2[n] = 0;
sscanf(buf2, "%Lf", &units);

```

(where `n` is the number of characters extracted from the input and stored in `buf1` and `buf2` is another sufficiently large character buffer).

### Return value

An iterator pointing immediately after the last character recognized as a valid part of the monetary string input.

### Notes

The currency units are assumed to be the smallest non-fractional units of the currency: cents in the U.S, yen in Japan. Thus, the input sequence "$1,056.23" in a U.S. locale produces the number 105623.0 in units or a string "105623" in digits.

Because currency symbol is optional if `showbase` is off but the entire multicharacter `negative_sign()` is required, given the formatting pattern {sign, value, space, symbol} with `showbase` off and negative_sign of "-", the string "-1.23 €" parses as -123 and leaves "€" unconsumed on the input stream, but if negative_sign is "()", the string "(1.23 €)" is consumed completely.

The I/O manipulator std::get_money offers a simpler interface to this function.

### Example

Run this code

```
#include <iostream>
#include <locale>
#include <sstream>
 
void demo_money_get(std::locale loc, const std::string& input)
{
    std::istringstream str(input);
    str.imbue(loc);
    long double units;
 
    // The following can be written simpler with std::get_money(units)
    std::ios_base::iostate err = std::ios_base::goodbit;
    std::istreambuf_iterator<char> ret =
        std::use_facet<std::money_get<char>>(loc).get(
            std::istreambuf_iterator<char>(str),
            std::istreambuf_iterator<char>(),
            false, str, err, units);
    str.setstate(err);
    std::istreambuf_iterator<char> last{};
    if (str)
    {
        std::cout << "Successfully parsed '" << str.str() << "' as "
                  << units / 100 << " units\n";
        if (ret != last)
        {
            std::cout << "Remaining content: '";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
            std::cout << "'\n";
        }
        else
            std::cout << "The input was fully consumed\n";
    }
    else
    {
        std::cout << "Parse failed. Unparsed string: '";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        std::cout << "'\n";
    }
}
 
int main()
{
    demo_money_get(std::locale("en_US.utf8"), "-$5.12 abc");
    demo_money_get(std::locale("ms_MY.utf8"), "(RM5.12) def");
}

```

Output:

```
Successfully parsed '-$5.12 abc' as -5.12 units
Remaining content: ' abc'
Successfully parsed '(RM5.12) def' as -5.12 units
Remaining content: ' def'

```

### See also

|  |  |
| --- | --- |
| moneypunct | defines monetary formatting parameters used by std::money_get and std::money_put   (class template) |
| money_get | parses and constructs a monetary value from an input character sequence   (class template) |
| get_money(C++11) | parses a monetary value   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/money_get/get&oldid=160159>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 October 2023, at 12:10.