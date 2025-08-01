# Standard library header <text_encoding> (C++26)

From cppreference.com
< cpp‎ | header
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | ****<text_encoding>**** (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the text processing library.

|  |  |
| --- | --- |
| Types | |
| text_encoding(C++26) | describes an interface for accessing the IANA Character Sets registry   (class) |
| std::hash<std::text_encoding>(C++26) | hash support for std::text_encoding   (class template specialization) |

### Synopsis

```
namespace std {
  // text_encoding
  struct text_encoding;
 
  // hash support for text_encoding
  template<class T> struct hash;
  template<> struct hash<text_encoding>;
}

```

#### Class std::text_encoding

```
namespace std {
  struct text_encoding {
    static constexpr size_t max_name_length = 63;
 
    // enumeration text_encoding::id
    enum class id : int_least32_t {
      /* see description */
    };
    using enum id;
 
    constexpr text_encoding() = default;
    constexpr explicit text_encoding(string_view enc) noexcept;
    constexpr text_encoding(id i) noexcept;
 
    constexpr id mib() const noexcept;
    constexpr const char* name() const noexcept;
 
    // class text_encoding::aliases_view
    struct aliases_view;
    constexpr aliases_view aliases() const noexcept;
 
    friend constexpr bool operator==(const text_encoding& encoding,
                                     const text_encoding& other) noexcept;
    friend constexpr bool operator==(const text_encoding& encoding, id i) noexcept;
 
    static consteval text_encoding literal() noexcept;
    static text_encoding environment();
    template<id i> static bool environment_is();
 
  private:
    id mib_ = id::unknown;                                              // exposition only
    char name_[max_name_length + 1] = {0};                              // exposition only
    // exposition only
    static constexpr bool /*comp-name*/(string_view a, string_view b);
  };
}

```

#### Class std::text_encoding::aliases_view

```
struct text_encoding::aliases_view : ranges::view_interface<text_encoding::aliases_view> {
  constexpr /* implementation-defined */ begin() const;
  constexpr /* implementation-defined */ end() const;
};

```

#### Enumeration std::text_encoding::id

```
namespace std {
  enum class text_encoding::id : int_least32_t {
    other = 1,
    unknown = 2,
    ASCII = 3,
    ISOLatin1 = 4,
    ISOLatin2 = 5,
    ISOLatin3 = 6,
    ISOLatin4 = 7,
    ISOLatinCyrillic = 8,
    ISOLatinArabic = 9,
    ISOLatinGreek = 10,
    ISOLatinHebrew = 11,
    ISOLatin5 = 12,
    ISOLatin6 = 13,
    ISOTextComm = 14,
    HalfWidthKatakana = 15,
    JISEncoding = 16,
    ShiftJIS = 17,
    EUCPkdFmtJapanese = 18,
    EUCFixWidJapanese = 19,
    ISO4UnitedKingdom = 20,
    ISO11SwedishForNames = 21,
    ISO15Italian = 22,
    ISO17Spanish = 23,
    ISO21German = 24,
    ISO60DanishNorwegian = 25,
    ISO69French = 26,
    ISO10646UTF1 = 27,
    ISO646basic1983 = 28,
    INVARIANT = 29,
    ISO2IntlRefVersion = 30,
    NATSSEFI = 31,
    NATSSEFIADD = 32,
    ISO10Swedish = 35,
    KSC56011987 = 36,
    ISO2022KR = 37,
    EUCKR = 38,
    ISO2022JP = 39,
    ISO2022JP2 = 40,
    ISO13JISC6220jp = 41,
    ISO14JISC6220ro = 42,
    ISO16Portuguese = 43,
    ISO18Greek7Old = 44,
    ISO19LatinGreek = 45,
    ISO25French = 46,
    ISO27LatinGreek1 = 47,
    ISO5427Cyrillic = 48,
    ISO42JISC62261978 = 49,
    ISO47BSViewdata = 50,
    ISO49INIS = 51,
    ISO50INIS8 = 52,
    ISO51INISCyrillic = 53,
    ISO54271981 = 54,
    ISO5428Greek = 55,
    ISO57GB1988 = 56,
    ISO58GB231280 = 57,
    ISO61Norwegian2 = 58,
    ISO70VideotexSupp1 = 59,
    ISO84Portuguese2 = 60,
    ISO85Spanish2 = 61,
    ISO86Hungarian = 62,
    ISO87JISX0208 = 63,
    ISO88Greek7 = 64,
    ISO89ASMO449 = 65,
    ISO90 = 66,
    ISO91JISC62291984a = 67,
    ISO92JISC62991984b = 68,
    ISO93JIS62291984badd = 69,
    ISO94JIS62291984hand = 70,
    ISO95JIS62291984handadd = 71,
    ISO96JISC62291984kana = 72,
    ISO2033 = 73,
    ISO99NAPLPS = 74,
    ISO102T617bit = 75,
    ISO103T618bit = 76,
    ISO111ECMACyrillic = 77,
    ISO121Canadian1 = 78,
    ISO122Canadian2 = 79,
    ISO123CSAZ24341985gr = 80,
    ISO88596E = 81,
    ISO88596I = 82,
    ISO128T101G2 = 83,
    ISO88598E = 84,
    ISO88598I = 85,
    ISO139CSN369103 = 86,
    ISO141JUSIB1002 = 87,
    ISO143IECP271 = 88,
    ISO146Serbian = 89,
    ISO147Macedonian = 90,
    ISO150 = 91,
    ISO151Cuba = 92,
    ISO6937Add = 93,
    ISO153GOST1976874 = 94,
    ISO8859Supp = 95,
    ISO10367Box = 96,
    ISO158Lap = 97,
    ISO159JISX02121990 = 98,
    ISO646Danish = 99,
    USDK = 100,
    DKUS = 101,
    KSC5636 = 102,
    Unicode11UTF7 = 103,
    ISO2022CN = 104,
    ISO2022CNEXT = 105,
    UTF8 = 106,
    ISO885913 = 109,
    ISO885914 = 110,
    ISO885915 = 111,
    ISO885916 = 112,
    GBK = 113,
    GB18030 = 114,
    OSDEBCDICDF0415 = 115,
    OSDEBCDICDF03IRV = 116,
    OSDEBCDICDF041 = 117,
    ISO115481 = 118,
    KZ1048 = 119,
    UCS2 = 1000,
    UCS4 = 1001,
    UnicodeASCII = 1002,
    UnicodeLatin1 = 1003,
    UnicodeJapanese = 1004,
    UnicodeIBM1261 = 1005,
    UnicodeIBM1268 = 1006,
    UnicodeIBM1276 = 1007,
    UnicodeIBM1264 = 1008,
    UnicodeIBM1265 = 1009,
    Unicode11 = 1010,
    SCSU = 1011,
    UTF7 = 1012,
    UTF16BE = 1013,
    UTF16LE = 1014,
    UTF16 = 1015,
    CESU8 = 1016,
    UTF32 = 1017,
    UTF32BE = 1018,
    UTF32LE = 1019,
    BOCU1 = 1020,
    UTF7IMAP = 1021,
    Windows30Latin1 = 2000,
    Windows31Latin1 = 2001,
    Windows31Latin2 = 2002,
    Windows31Latin5 = 2003,
    HPRoman8 = 2004,
    AdobeStandardEncoding = 2005,
    VenturaUS = 2006,
    VenturaInternational = 2007,
    DECMCS = 2008,
    PC850Multilingual = 2009,
    PC8DanishNorwegian = 2012,
    PC862LatinHebrew = 2013,
    PC8Turkish = 2014,
    IBMSymbols = 2015,
    IBMThai = 2016,
    HPLegal = 2017,
    HPPiFont = 2018,
    HPMath8 = 2019,
    HPPSMath = 2020,
    HPDesktop = 2021,
    VenturaMath = 2022,
    MicrosoftPublishing = 2023,
    Windows31J = 2024,
    GB2312 = 2025,
    Big5 = 2026,
    Macintosh = 2027,
    IBM037 = 2028,
    IBM038 = 2029,
    IBM273 = 2030,
    IBM274 = 2031,
    IBM275 = 2032,
    IBM277 = 2033,
    IBM278 = 2034,
    IBM280 = 2035,
    IBM281 = 2036,
    IBM284 = 2037,
    IBM285 = 2038,
    IBM290 = 2039,
    IBM297 = 2040,
    IBM420 = 2041,
    IBM423 = 2042,
    IBM424 = 2043,
    PC8CodePage437 = 2011,
    IBM500 = 2044,
    IBM851 = 2045,
    PCp852 = 2010,
    IBM855 = 2046,
    IBM857 = 2047,
    IBM860 = 2048,
    IBM861 = 2049,
    IBM863 = 2050,
    IBM864 = 2051,
    IBM865 = 2052,
    IBM868 = 2053,
    IBM869 = 2054,
    IBM870 = 2055,
    IBM871 = 2056,
    IBM880 = 2057,
    IBM891 = 2058,
    IBM903 = 2059,
    IBM904 = 2060,
    IBM905 = 2061,
    IBM918 = 2062,
    IBM1026 = 2063,
    IBMEBCDICATDE = 2064,
    EBCDICATDEA = 2065,
    EBCDICCAFR = 2066,
    EBCDICDKNO = 2067,
    EBCDICDKNOA = 2068,
    EBCDICFISE = 2069,
    EBCDICFISEA = 2070,
    EBCDICFR = 2071,
    EBCDICIT = 2072,
    EBCDICPT = 2073,
    EBCDICES = 2074,
    EBCDICESA = 2075,
    EBCDICESS = 2076,
    EBCDICUK = 2077,
    EBCDICUS = 2078,
    Unknown8BiT = 2079,
    Mnemonic = 2080,
    Mnem = 2081,
    VISCII = 2082,
    VIQR = 2083,
    KOI8R = 2084,
    HZGB2312 = 2085,
    IBM866 = 2086,
    PC775Baltic = 2087,
    KOI8U = 2088,
    IBM00858 = 2089,
    IBM00924 = 2090,
    IBM01140 = 2091,
    IBM01141 = 2092,
    IBM01142 = 2093,
    IBM01143 = 2094,
    IBM01144 = 2095,
    IBM01145 = 2096,
    IBM01146 = 2097,
    IBM01147 = 2098,
    IBM01148 = 2099,
    IBM01149 = 2100,
    Big5HKSCS = 2101,
    IBM1047 = 2102,
    PTCP154 = 2103,
    Amiga1251 = 2104,
    KOI7switched = 2105,
    BRF = 2106,
    TSCII = 2107,
    CP51932 = 2108,
    windows874 = 2109,
    windows1250 = 2250,
    windows1251 = 2251,
    windows1252 = 2252,
    windows1253 = 2253,
    windows1254 = 2254,
    windows1255 = 2255,
    windows1256 = 2256,
    windows1257 = 2257,
    windows1258 = 2258,
    TIS620 = 2259,
    CP50220 = 2260
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/text_encoding&oldid=179089>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 January 2025, at 20:57.