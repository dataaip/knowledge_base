# std::codecvt_byname

From cppreference.com
< cpp‎ | locale
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | ****codecvt_byname**** | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| template< class InternT, class ExternT, class State >  class codecvt_byname : public std::codecvt<InternT, ExternT, State>; |  |  |
|  |  |  |

`std::codecvt_byname` is a std::codecvt facet which encapsulates multibyte/wide character conversion rules of a locale specified at its construction.

### Specializations

The standard library is guaranteed to provide the following specializations:

|  |  |
| --- | --- |
| Defined in header `<locale>` | |
| std::codecvt_byname<char, char, std::mbstate_t> | identity conversion |
| std::codecvt_byname<char16_t, char, std::mbstate_t> (since C++11)(deprecated in C++20) | conversion between UTF-16 and UTF-8 |
| std::codecvt_byname<char16_t, char8_t, std::mbstate_t> (since C++20) | conversion between UTF-16 and UTF-8 |
| std::codecvt_byname<char32_t, char, std::mbstate_t> (since C++11)(deprecated in C++20) | conversion between UTF-32 and UTF-8 |
| std::codecvt_byname<char32_t, char8_t, std::mbstate_t> (since C++20) | conversion between UTF-32 and UTF-8 |
| std::codecvt_byname<wchar_t, char, std::mbstate_t> | locale-specific conversion between wide string and narrow character sets |

### Member functions

|  |  |
| --- | --- |
| ****(constructor)**** | constructs a new `codecvt_byname` facet   (public member function) |
| ****(destructor)**** | destroys a `codecvt_byname` facet   (protected member function) |

## std::codecvt_byname::codecvt_byname

|  |  |  |
| --- | --- | --- |
| explicit codecvt_byname( const char\* name, std::size_t refs = 0 ); |  |  |
| explicit codecvt_byname( const std::string& name, std::size_t refs = 0 ); |  | (since C++11) |
|  |  |  |

Constructs a new `std::codecvt_byname` facet for a locale with name.

refs is used for resource management: if refs == 0, the implementation destroys the facet, when the last std::locale object holding it is destroyed. Otherwise, the object is not destroyed.

### Parameters

|  |  |  |
| --- | --- | --- |
| name | - | the name of the locale |
| refs | - | the number of references that link to the facet |

## std::codecvt_byname::~codecvt_byname

|  |  |  |
| --- | --- | --- |
| protected:  ~codecvt_byname(); |  |  |
|  |  |  |

Destroys the facet.

## Inherited from std::codecvt

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `intern_type` | `internT` |
| `extern_type` | `externT` |
| `state_type` | `stateT` |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| std::locale::id `id` [static] | the identifier of the facet |

### Member functions

|  |  |
| --- | --- |
| out | invokes `do_out`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |
| in | invokes `do_in`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |
| unshift | invokes `do_unshift`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |
| encoding | invokes `do_encoding`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |
| always_noconv | invokes `do_always_noconv`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |
| length | invokes `do_length`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |
| max_length | invokes `do_max_length`   (public member function of `std::codecvt<InternT,ExternT,StateT>`) |

### Protected member functions

|  |  |
| --- | --- |
| do_out[virtual] | converts a string from `InternT` to `ExternT`, such as when writing to file   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| do_in[virtual] | converts a string from `ExternT` to `InternT`, such as when reading from file   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| do_unshift[virtual] | generates the termination character sequence of `ExternT` characters for incomplete conversion   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| do_encoding[virtual] | returns the number of `ExternT` characters necessary to produce one `InternT` character, if constant   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| do_always_noconv[virtual] | tests if the facet encodes an identity conversion for all valid argument values   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| do_length[virtual] | calculates the length of the `ExternT` string that would be consumed by conversion into given `InternT` buffer   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| do_max_length[virtual] | returns the maximum number of `ExternT` characters that could be converted into a single `InternT` character   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |

## Inherited from std::codecvt_base

|  |  |
| --- | --- |
| Nested type | Definition |
| enum result { ok, partial, error, noconv }; | Unscoped enumeration type |

|  |  |
| --- | --- |
| Enumeration constant | Definition |
| `ok` | conversion was completed with no error |
| `partial` | not all source characters were converted |
| `error` | encountered an invalid character |
| `noconv` | no conversion required, input and output types are the same |

### Example

This example demonstrates reading a GB18030-encoded file using the codecvt facet from a GB18030-aware locale.

Run this code

```
#include <fstream>
#include <iostream>
#include <locale>
#include <string>
 
int main()
{
    // GB18030 narrow multibyte encoding
    std::ofstream("text.txt") << "\x7a"              // letter 'z', U+007a
                                 "\x81\x30\x89\x38"  // letter 'ß', U+00df
                                 "\xcb\xae"          // CJK ideogram '水' (water), U+6c34
                                 "\x94\x32\xbc\x35"; // musical sign '𝄋' (segno), U+1d10b
 
    std::wifstream fin("text.txt");
    fin.imbue(std::locale(fin.getloc(),
              new std::codecvt_byname<wchar_t, char, std::mbstate_t>("zh_CN.gb18030")));
 
    for (wchar_t c; fin.get(c);)
        std::cout << std::hex << std::showbase << static_cast<unsigned>(c) << '\n';
}

```

Possible output:

```
0x7a
0xdf
0x6c34
0x1d10b

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 21 | C++98 | the standard library did not need to provide any `std::codecvt_byname` specializations | two specializations are required |

### See also

|  |  |
| --- | --- |
| codecvt | converts between character encodings, including UTF-8, UTF-16, UTF-32   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/codecvt_byname&oldid=178263>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 December 2024, at 20:18.