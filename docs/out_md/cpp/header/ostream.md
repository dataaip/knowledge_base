# Standard library header <ostream>

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | ****<ostream>**** | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the Input/output library.

|  |  |
| --- | --- |
| Classes | |
| basic_ostream | wraps a given abstract device (std::basic_streambuf) and provides high-level output interface   (class template) |
| std::ostream | std::basic_ostream<char>  (typedef) |
| std::wostream | std::basic_ostream<wchar_t>  (typedef) |
| Functions | |
| operator<<(std::basic_ostream) | inserts character data or insert into rvalue stream   (function template) |
| print(std::ostream)(C++23) | outputs formatted representation of the arguments   (function template) |
| println(std::ostream)(C++23) | outputs formatted representation of the arguments with appended '\n'   (function template) |
| vprint_unicode(std::ostream)(C++23) | performs Unicode aware output using type-erased argument representation   (function) |
| vprint_nonunicode(std::ostream)(C++23) | outputs character data using type-erased argument representation   (function) |
| Manipulators | |
| endl | outputs '\n' and flushes the output stream   (function template) |
| ends | outputs '\0'   (function template) |
| flush | flushes the output stream   (function template) |
| emit_on_flushnoemit_on_flush(C++20) | controls whether a stream's basic_syncbuf emits on flush   (function template) |
| flush_emit(C++20) | flushes a stream and emits the content if it is using a basic_syncbuf   (function template) |

### Synopsis

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
    class basic_ostream;
 
  using ostream  = basic_ostream<char>;
  using wostream = basic_ostream<wchar_t>;
 
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& endl(basic_ostream<CharT, Traits>& os);
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& ends(basic_ostream<CharT, Traits>& os);
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& flush(basic_ostream<CharT, Traits>& os);
 
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& emit_on_flush(basic_ostream<CharT, Traits>& os);
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& noemit_on_flush(basic_ostream<CharT, Traits>& os);
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& flush_emit(basic_ostream<CharT, Traits>& os);
 
  template<class Ostream, class T>
    Ostream&& operator<<(Ostream&& os, const T& x);
 
  // print functions
  template<class... Args>
    void print(ostream& os, format_string<Args...> fmt, Args&&... args);
  template<class... Args>
    void println(ostream& os, format_string<Args...> fmt, Args&&... args);
  void println(ostream& os);
 
  void vprint_unicode(ostream& os, string_view fmt, format_args args);
  void vprint_nonunicode(ostream& os, string_view fmt, format_args args);
}

```

#### Class template std::basic_ostream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
  class basic_ostream : virtual public basic_ios<CharT, Traits> {
  public:
    // types (inherited from basic_ios)
    using char_type   = CharT;
    using int_type    = typename Traits::int_type;
    using pos_type    = typename Traits::pos_type;
    using off_type    = typename Traits::off_type;
    using traits_type = Traits;
 
    // constructor/destructor
    explicit basic_ostream(basic_streambuf<char_type, Traits>* sb);
    virtual ~basic_ostream();
 
    // prefix/suffix
    class sentry;
 
    // formatted output
    basic_ostream& operator<<(basic_ostream& (*pf)(basic_ostream&));
    basic_ostream& operator<<(basic_ios<CharT, Traits>& (*pf)(basic_ios<CharT, Traits>&));
    basic_ostream& operator<<(ios_base& (*pf)(ios_base&));
 
    basic_ostream& operator<<(bool n);
    basic_ostream& operator<<(short n);
    basic_ostream& operator<<(unsigned short n);
    basic_ostream& operator<<(int n);
    basic_ostream& operator<<(unsigned int n);
    basic_ostream& operator<<(long n);
    basic_ostream& operator<<(unsigned long n);
    basic_ostream& operator<<(long long n);
    basic_ostream& operator<<(unsigned long long n);
    basic_ostream& operator<<(float f);
    basic_ostream& operator<<(double f);
    basic_ostream& operator<<(long double f);
    basic_ostream& operator<<(/*extended-floating-point-type*/ f);
 
    basic_ostream& operator<<(const void* p);
    basic_ostream& operator<<(const volatile void* p);
    basic_ostream& operator<<(nullptr_t);
    basic_ostream& operator<<(basic_streambuf<char_type, Traits>* sb);
 
    // unformatted output
    basic_ostream& put(char_type c);
    basic_ostream& write(const char_type* s, streamsize n);
 
    basic_ostream& flush();
 
    // seeks
    pos_type tellp();
    basic_ostream& seekp(pos_type);
    basic_ostream& seekp(off_type, ios_base::seekdir);
 
  protected:
    // copy/move constructor
    basic_ostream(const basic_ostream&) = delete;
    basic_ostream(basic_ostream&& rhs);
 
    // assignment and swap
    basic_ostream& operator=(const basic_ostream&) = delete;
    basic_ostream& operator=(basic_ostream&& rhs);
    void swap(basic_ostream& rhs);
  };
 
  // character inserters
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>&, CharT);
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>&, char);
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&, char);
 
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&, signed char);
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&, unsigned char);
 
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&,
                                            wchar_t) = delete;
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&,
                                            char8_t) = delete;
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&,
                                            char16_t) = delete;
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&,
                                            char32_t) = delete;
  template<class Traits>
    basic_ostream<wchar_t, Traits>&
      operator<<(basic_ostream<wchar_t, Traits>&, char8_t) = delete;
  template<class Traits>
    basic_ostream<wchar_t, Traits>&
      operator<<(basic_ostream<wchar_t, Traits>&, char16_t) = delete;
  template<class Traits>
    basic_ostream<wchar_t, Traits>&
      operator<<(basic_ostream<wchar_t, Traits>&, char32_t) = delete;
 
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>&, const CharT*);
  template<class CharT, class Traits>
    basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>&, const char*);
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&, const char*);
 
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&,
                                            const signed char*);
  template<class Traits>
    basic_ostream<char, Traits>& operator<<(basic_ostream<char, Traits>&,
                                            const unsigned char*);
 
  template<class Traits>
    basic_ostream<char, Traits>&
      operator<<(basic_ostream<char, Traits>&, const wchar_t*) = delete;
  template<class Traits>
    basic_ostream<char, Traits>&
      operator<<(basic_ostream<char, Traits>&, const char8_t*) = delete;
  template<class Traits>
    basic_ostream<char, Traits>&
      operator<<(basic_ostream<char, Traits>&, const char16_t*) = delete;
  template<class Traits>
    basic_ostream<char, Traits>&
      operator<<(basic_ostream<char, Traits>&, const char32_t*) = delete;
  template<class Traits>
    basic_ostream<wchar_t, Traits>&
      operator<<(basic_ostream<wchar_t, Traits>&, const char8_t*) = delete;
  template<class Traits>
    basic_ostream<wchar_t, Traits>&
      operator<<(basic_ostream<wchar_t, Traits>&, const char16_t*) = delete;
  template<class Traits>
    basic_ostream<wchar_t, Traits>&
      operator<<(basic_ostream<wchar_t, Traits>&, const char32_t*) = delete;
}

```

#### Class std::basic_ostream::sentry

```
namespace std {
  template<class CharT, class Traits>
  class basic_ostream<CharT, Traits>::sentry {
    bool ok_;       // exposition only
  public:
    explicit sentry(basic_ostream& os);
    ~sentry();
    explicit operator bool() const { return ok_; }
 
    sentry(const sentry&) = delete;
    sentry& operator=(const sentry&) = delete;
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/ostream&oldid=164049>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 07:51.