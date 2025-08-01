# std::regex_traits<CharT>::isctype

From cppreference.com
< cpp‎ | regex‎ | regex traits
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

Regular expressions library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| basic_regex(C++11) | | | | |
| sub_match(C++11) | | | | |
| match_results(C++11) | | | | |
| Algorithms | | | | |
| regex_match(C++11) | | | | |
| regex_search(C++11) | | | | |
| regex_replace(C++11) | | | | |
| Iterators | | | | |
| regex_iterator(C++11) | | | | |
| regex_token_iterator(C++11) | | | | |
| Exceptions | | | | |
| regex_error(C++11) | | | | |
| Traits | | | | |
| regex_traits(C++11) | | | | |
| Constants | | | | |
| syntax_option_type(C++11) | | | | |
| match_flag_type(C++11) | | | | |
| error_type(C++11) | | | | |
| Regex Grammar | | | | |
| Modified ECMAScript-262(C++11) | | | | |

std::regex_traits

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| regex_traits::regex_traits | | | | |
| regex_traits::length | | | | |
| regex_traits::translate | | | | |
| regex_traits::translate_nocase | | | | |
| regex_traits::transform | | | | |
| regex_traits::transform_primary | | | | |
| regex_traits::lookup_collatename | | | | |
| regex_traits::lookup_classname | | | | |
| ****regex_traits::isctype**** | | | | |
| regex_traits::value | | | | |
| regex_traits::imbue | | | | |
| regex_traits::getloc | | | | |

|  |  |  |
| --- | --- | --- |
| bool isctype( CharT c, char_class_type f ) const; |  |  |
|  |  |  |

Determines whether the character c belongs to the character class identified by f, which, in turn, is a value returned by lookup_classname() or a bitwise OR of several such values.

The version of this function provided in the standard library specializations of std::regex_traits does the following:

1) First converts f to a value m of type std::ctype_base::mask. For each std::ctype category listed in the table in the page lookup_classname(), if the bits in f corresponding to the category are set, the corresponding bits in m will also be set.2) Then attempts to classify the character in the imbued locale by calling std::use_facet<std::ctype<CharT>>(getloc()).is(m, c).

- If that returns true, `isctype()` will also return true.
- Otherwise, if c equals '_', and f includes the result of calling lookup_classname() for the character class `[:w:]`, true is returned, otherwise false is returned.

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | the character to classify |
| f | - | the bitmask obtained from one or several calls to lookup_classname() |

### Return value

true if c is classified by f, false otherwise.

### Example

Run this code

```
#include <iostream>
#include <regex>
#include <string>
 
int main()
{
    std::regex_traits<char> t;
    std::string str_alnum = "alnum";
    auto a = t.lookup_classname(str_alnum.begin(), str_alnum.end());
    std::string str_w = "w"; // [:w:] is [:alnum:] plus '_'
    auto w = t.lookup_classname(str_w.begin(), str_w.end());
    std::cout << std::boolalpha
              << t.isctype('A', w) << ' ' << t.isctype('A', a) << '\n'
              << t.isctype('_', w) << ' ' << t.isctype('_', a) << '\n'
              << t.isctype(' ', w) << ' ' << t.isctype(' ', a) << '\n';
}

```

Output:

```
true true
true false
false false

```

Demonstrates a custom regex traits implementation of lookup_classname() / `isctype()`:

Run this code

```
#include <cwctype>
#include <iostream>
#include <locale>
#include <regex>
 
// This custom regex traits uses wctype/iswctype to implement lookup_classname/isctype.
struct wctype_traits : std::regex_traits<wchar_t>
{
    using char_class_type = std::wctype_t;
 
    template<class It>
    char_class_type lookup_classname(It first, It last, bool = false) const
    {
        return std::wctype(std::string(first, last).c_str());
    }
 
    bool isctype(wchar_t c, char_class_type f) const
    {
        return std::iswctype(c, f);
    }
};
 
int main()
{
    std::locale::global(std::locale("ja_JP.utf8"));
    std::wcout.sync_with_stdio(false);
    std::wcout.imbue(std::locale());
 
    std::wsmatch m;
    std::wstring in = L"風の谷のナウシカ";
    // matches all characters (they are classified as alnum)
    std::regex_search(in, m, std::wregex(L"([[:alnum:]]+)"));
    std::wcout << "alnums: " << m[1] << '\n'; // prints "風の谷のナウシカ"
    // matches only the katakana
    std::regex_search(in, m,
                      std::basic_regex<wchar_t, wctype_traits>(L"([[:jkata:]]+)"));
    std::wcout << "katakana: " << m[1] << '\n'; // prints "ナウシカ"
}

```

Output:

```
alnums: 風の谷のナウシカ
katakana: ナウシカ

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2018 | C++11 | the value of m was unspecified | matches lookup_classname()'s minimal support |

### See also

|  |  |
| --- | --- |
| lookup_classname | gets a character class by name   (public member function) |
| do_is[virtual] | classifies a character or a character sequence   (virtual protected member function of `std::ctype<CharT>`) |
| iswctype | classifies a wide character according to the specified `LC_CTYPE` category   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits/isctype&oldid=161049>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 October 2023, at 09:09.