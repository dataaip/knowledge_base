# std::text_encoding::id

From cppreference.com
< cpp‎ | text‎ | text encoding
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

std::text_encoding

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| Creation | | | | |
| text_encoding::text_encoding") | | | | |
| text_encoding::literal | | | | |
| text_encoding::environment | | | | |
| Observers | | | | |
| text_encoding::mib | | | | |
| text_encoding::name | | | | |
| text_encoding::aliases | | | | |
| text_encoding::environment_is | | | | |
| Helpers | | | | |
| text_encoding::**comp-name** | | | | |
| Non-member functions | | | | |
| operator==(std::text_encoding) | | | | |
| Member types | | | | |
| ****text_encoding::id**** | | | | |
| text_encoding::aliases_view | | | | |
| Helper classes | | | | |
| hash<std::text_encoding> | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<text_encoding>` |  |  |
| enum class text_encoding::id : std::int_least32_t; |  | (since C++26) |
|  |  |  |

The scoped enumeration `std::text_encoding​::​id` contains an enumerator for each known registered character encoding with their corresponding MIBenum value.

### Member constants

|  |  |
| --- | --- |
| Name | MIBenum value |
| `other` | 1 |
| `unknown` | 2 |
| `ASCII` | 3 |
| `ISOLatin1` | 4 |
| `ISOLatin2` | 5 |
| `ISOLatin3` | 6 |
| `ISOLatin4` | 7 |
| `ISOLatinCyrillic` | 8 |
| `ISOLatinArabic` | 9 |
| `ISOLatinGreek` | 10 |
| `ISOLatinHebrew` | 11 |
| `ISOLatin5` | 12 |
| `ISOLatin6` | 13 |
| `ISOTextComm` | 14 |
| `HalfWidthKatakana` | 15 |
| `JISEncoding` | 16 |
| `ShiftJIS` | 17 |
| `EUCPkdFmtJapanese` | 18 |
| `EUCFixWidJapanese` | 19 |
| `ISO4UnitedKingdom` | 20 |
| `ISO11SwedishForNames` | 21 |
| `ISO15Italian` | 22 |
| `ISO17Spanish` | 23 |
| `ISO21German` | 24 |
| `ISO60DanishNorwegian` | 25 |
| `ISO69French` | 26 |
| `ISO10646UTF1` | 27 |
| `ISO646basic1983` | 28 |
| `INVARIANT` | 29 |
| `ISO2IntlRefVersion` | 30 |
| `NATSSEFI` | 31 |
| `NATSSEFIADD` | 32 |
| `ISO10Swedish` | 35 |
| `KSC56011987` | 36 |
| `ISO2022KR` | 37 |
| `EUCKR` | 38 |
| `ISO2022JP` | 39 |
| `ISO2022JP2` | 40 |
| `ISO13JISC6220jp` | 41 |
| `ISO14JISC6220ro` | 42 |
| `ISO16Portuguese` | 43 |
| `ISO18Greek7Old` | 44 |
| `ISO19LatinGreek` | 45 |
| `ISO25French` | 46 |
| `ISO27LatinGreek1` | 47 |
| `ISO5427Cyrillic` | 48 |
| `ISO42JISC62261978` | 49 |
| `ISO47BSViewdata` | 50 |
| `ISO49INIS` | 51 |
| `ISO50INIS8` | 52 |
| `ISO51INISCyrillic` | 53 |
| `ISO54271981` | 54 |
| `ISO5428Greek` | 55 |
| `ISO57GB1988` | 56 |
| `ISO58GB231280` | 57 |
| `ISO61Norwegian2` | 58 |
| `ISO70VideotexSupp1` | 59 |
| `ISO84Portuguese2` | 60 |
| `ISO85Spanish2` | 61 |
| `ISO86Hungarian` | 62 |
| `ISO87JISX0208` | 63 |
| `ISO88Greek7` | 64 |
| `ISO89ASMO449` | 65 |
| `ISO90` | 66 |
| `ISO91JISC62291984a` | 67 |
| `ISO92JISC62991984b` | 68 |
| `ISO93JIS62291984badd` | 69 |
| `ISO94JIS62291984hand` | 70 |
| `ISO95JIS62291984handadd` | 71 |
| `ISO96JISC62291984kana` | 72 |
| `ISO2033` | 73 |
| `ISO99NAPLPS` | 74 |
| `ISO102T617bit` | 75 |
| `ISO103T618bit` | 76 |
| `ISO111ECMACyrillic` | 77 |
| `ISO121Canadian1` | 78 |
| `ISO122Canadian2` | 79 |
| `ISO123CSAZ24341985gr` | 80 |
| `ISO88596E` | 81 |
| `ISO88596I` | 82 |
| `ISO128T101G2` | 83 |
| `ISO88598E` | 84 |
| `ISO88598I` | 85 |
| `ISO139CSN369103` | 86 |
| `ISO141JUSIB1002` | 87 |
| `ISO143IECP271` | 88 |
| `ISO146Serbian` | 89 |
| `ISO147Macedonian` | 90 |
| `ISO150` | 91 |
| `ISO151Cuba` | 92 |
| `ISO6937Add` | 93 |
| `ISO153GOST1976874` | 94 |
| `ISO8859Supp` | 95 |
| `ISO10367Box` | 96 |
| `ISO158Lap` | 97 |
| `ISO159JISX02121990` | 98 |
| `ISO646Danish` | 99 |
| `USDK` | 100 |
| `DKUS` | 101 |
| `KSC5636` | 102 |
| `Unicode11UTF7` | 103 |
| `ISO2022CN` | 104 |
| `ISO2022CNEXT` | 105 |
| `UTF8` | 106 |
| `ISO885913` | 109 |
| `ISO885914` | 110 |
| `ISO885915` | 111 |
| `ISO885916` | 112 |
| `GBK` | 113 |
| `GB18030` | 114 |
| `OSDEBCDICDF0415` | 115 |
| `OSDEBCDICDF03IRV` | 116 |
| `OSDEBCDICDF041` | 117 |
| `ISO115481` | 118 |
| `KZ1048` | 119 |
| `UCS2` | 1000 |
| `UCS4` | 1001 |
| `UnicodeASCII` | 1002 |
| `UnicodeLatin1` | 1003 |
| `UnicodeJapanese` | 1004 |
| `UnicodeIBM1261` | 1005 |
| `UnicodeIBM1268` | 1006 |
| `UnicodeIBM1276` | 1007 |
| `UnicodeIBM1264` | 1008 |
| `UnicodeIBM1265` | 1009 |
| `Unicode11` | 1010 |
| `SCSU` | 1011 |
| `UTF7` | 1012 |
| `UTF16BE` | 1013 |
| `UTF16LE` | 1014 |
| `UTF16` | 1015 |
| `CESU8` | 1016 |
| `UTF32` | 1017 |
| `UTF32BE` | 1018 |
| `UTF32LE` | 1019 |
| `BOCU1` | 1020 |
| `UTF7IMAP` | 1021 |
| `Windows30Latin1` | 2000 |
| `Windows31Latin1` | 2001 |
| `Windows31Latin2` | 2002 |
| `Windows31Latin5` | 2003 |
| `HPRoman8` | 2004 |
| `AdobeStandardEncoding` | 2005 |
| `VenturaUS` | 2006 |
| `VenturaInternational` | 2007 |
| `DECMCS` | 2008 |
| `PC850Multilingual` | 2009 |
| `PC8DanishNorwegian` | 2012 |
| `PC862LatinHebrew` | 2013 |
| `PC8Turkish` | 2014 |
| `IBMSymbols` | 2015 |
| `IBMThai` | 2016 |
| `HPLegal` | 2017 |
| `HPPiFont` | 2018 |
| `HPMath8` | 2019 |
| `HPPSMath` | 2020 |
| `HPDesktop` | 2021 |
| `VenturaMath` | 2022 |
| `MicrosoftPublishing` | 2023 |
| `Windows31J` | 2024 |
| `GB2312` | 2025 |
| `Big5` | 2026 |
| `Macintosh` | 2027 |
| `IBM037` | 2028 |
| `IBM038` | 2029 |
| `IBM273` | 2030 |
| `IBM274` | 2031 |
| `IBM275` | 2032 |
| `IBM277` | 2033 |
| `IBM278` | 2034 |
| `IBM280` | 2035 |
| `IBM281` | 2036 |
| `IBM284` | 2037 |
| `IBM285` | 2038 |
| `IBM290` | 2039 |
| `IBM297` | 2040 |
| `IBM420` | 2041 |
| `IBM423` | 2042 |
| `IBM424` | 2043 |
| `PC8CodePage437` | 2011 |
| `IBM500` | 2044 |
| `IBM851` | 2045 |
| `PCp852` | 2010 |
| `IBM855` | 2046 |
| `IBM857` | 2047 |
| `IBM860` | 2048 |
| `IBM861` | 2049 |
| `IBM863` | 2050 |
| `IBM864` | 2051 |
| `IBM865` | 2052 |
| `IBM868` | 2053 |
| `IBM869` | 2054 |
| `IBM870` | 2055 |
| `IBM871` | 2056 |
| `IBM880` | 2057 |
| `IBM891` | 2058 |
| `IBM903` | 2059 |
| `IBM904` | 2060 |
| `IBM905` | 2061 |
| `IBM918` | 2062 |
| `IBM1026` | 2063 |
| `IBMEBCDICATDE` | 2064 |
| `EBCDICATDEA` | 2065 |
| `EBCDICCAFR` | 2066 |
| `EBCDICDKNO` | 2067 |
| `EBCDICDKNOA` | 2068 |
| `EBCDICFISE` | 2069 |
| `EBCDICFISEA` | 2070 |
| `EBCDICFR` | 2071 |
| `EBCDICIT` | 2072 |
| `EBCDICPT` | 2073 |
| `EBCDICES` | 2074 |
| `EBCDICESA` | 2075 |
| `EBCDICESS` | 2076 |
| `EBCDICUK` | 2077 |
| `EBCDICUS` | 2078 |
| `Unknown8BiT` | 2079 |
| `Mnemonic` | 2080 |
| `Mnem` | 2081 |
| `VISCII` | 2082 |
| `VIQR` | 2083 |
| `KOI8R` | 2084 |
| `HZGB2312` | 2085 |
| `IBM866` | 2086 |
| `PC775Baltic` | 2087 |
| `KOI8U` | 2088 |
| `IBM00858` | 2089 |
| `IBM00924` | 2090 |
| `IBM01140` | 2091 |
| `IBM01141` | 2092 |
| `IBM01142` | 2093 |
| `IBM01143` | 2094 |
| `IBM01144` | 2095 |
| `IBM01145` | 2096 |
| `IBM01146` | 2097 |
| `IBM01147` | 2098 |
| `IBM01148` | 2099 |
| `IBM01149` | 2100 |
| `Big5HKSCS` | 2101 |
| `IBM1047` | 2102 |
| `PTCP154` | 2103 |
| `Amiga1251` | 2104 |
| `KOI7switched` | 2105 |
| `BRF` | 2106 |
| `TSCII` | 2107 |
| `CP51932` | 2108 |
| `windows874` | 2109 |
| `windows1250` | 2250 |
| `windows1251` | 2251 |
| `windows1252` | 2252 |
| `windows1253` | 2253 |
| `windows1254` | 2254 |
| `windows1255` | 2255 |
| `windows1256` | 2256 |
| `windows1257` | 2257 |
| `windows1258` | 2258 |
| `TIS620` | 2259 |
| `CP50220` | 2260 |

### Notes

For each encoding, the corresponding enumerator is derived from the alias beginning with "cs", as follows:

- **csUnicode** is mapped to ​id​::​UCS2,
- **csIBBM904** is mapped to ​id​::​IBM904,
- and the "cs" prefix is removed from other names.

### See also

|  |  |
| --- | --- |
| id | the facet index type: each facet class must declare or inherit a public static member of this type   (class) |
| errc(C++11) | the std::error_condition enumeration listing all standard <cerrno> macro constants   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/id&oldid=179713>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 January 2025, at 15:56.