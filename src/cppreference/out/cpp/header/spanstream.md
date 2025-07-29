# Standard library header <spanstream> (C++23)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | ****<spanstream>**** (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the Input/Output library.

|  |  |
| --- | --- |
| Classes | |
| basic_spanbuf(C++23) | implements raw fixed character buffer device   (class template) |
| basic_ispanstream(C++23) | implements fixed character buffer input operations   (class template) |
| basic_ospanstream(C++23) | implements fixed character buffer output operations   (class template) |
| basic_spanstream(C++23) | implements fixed character buffer input/output operations   (class template) |
| `spanbuf` (C++23) | std::basic_spanbuf<char> (typedef) |
| `wspanbuf` (C++23) | std::basic_spanbuf<wchar_t> (typedef) |
| `ispanstream` (C++23) | std::basic_ispanstream<char> (typedef) |
| `wispanstream` (C++23) | std::basic_ispanstream<wchar_t> (typedef) |
| `ospanstream` (C++23) | std::basic_ospanstream<char> (typedef) |
| `wospanstream` (C++23) | std::basic_ospanstream<wchar_t> (typedef) |
| `spanstream` (C++23) | std::basic_spanstream<char> (typedef) |
| `wspanstream` (C++23) | std::basic_spanstream<wchar_t> (typedef) |
| Functions | |
| std::swap(std::basic_spanbuf)(C++23) | specializes the std::swap algorithm   (function template) |
| std::swap(std::basic_ispanstream)(C++23) | specializes the std::swap algorithm   (function template) |
| std::swap(std::basic_ospanstream)(C++23) | specializes the std::swap algorithm   (function template) |
| std::swap(std::basic_spanstream)(C++23) | specializes the std::swap algorithm   (function template) |

### Synopsis

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
    class basic_spanbuf;
 
  using spanbuf = basic_spanbuf<char>;
  using wspanbuf = basic_spanbuf<wchar_t>;
 
  template<class CharT, class Traits = char_traits<CharT>>
    class basic_ispanstream;
 
  using ispanstream = basic_ispanstream<char>;
  using wispanstream = basic_ispanstream<wchar_t>;
 
  template<class CharT, class Traits = char_traits<CharT>>
    class basic_ospanstream;
 
  using ospanstream = basic_ospanstream<char>;
  using wospanstream = basic_ospanstream<wchar_t>;
 
  template<class CharT, class Traits = char_traits<CharT>>
    class basic_spanstream;
 
  using spanstream = basic_spanstream<char>;
  using wspanstream = basic_spanstream<wchar_t>;
}

```

#### Class template std::basic_spanbuf

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
  class basic_spanbuf
    : public basic_streambuf<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
 
    // constructors
    basic_spanbuf() : basic_spanbuf(ios_base::in | ios_base::out) {}
    explicit basic_spanbuf(ios_base::openmode which)
      : basic_spanbuf(std::span<CharT>(), which) {}
    explicit basic_spanbuf(
      std::span<CharT> s,
      ios_base::openmode which = ios_base::in | ios_base::out);
    basic_spanbuf(const basic_spanbuf&) = delete;
    basic_spanbuf(basic_spanbuf&& rhs);
 
    // assign and swap
    basic_spanbuf& operator=(const basic_spanbuf&) = delete;
    basic_spanbuf& operator=(basic_spanbuf&& rhs);
    void swap(basic_spanbuf& rhs);
 
    // get and set
    std::span<CharT> span() const noexcept;
    void span(std::span<CharT> s) noexcept;
 
    protected:
    // overridden virtual functions
    basic_streambuf<CharT, Traits>* setbuf(CharT*, streamsize) override;
    pos_type seekoff(off_type off, ios_base::seekdir way,
                     ios_base::openmode which
                       = ios_base::in | ios_base::out) override;
    pos_type seekpos(pos_type sp,
                     ios_base::openmode which
                       = ios_base::in | ios_base::out) override;
 
  private:
    ios_base::openmode mode; // exposition only
    std::span<CharT> buf; // exposition only
  };
 
  template<class CharT, class Traits>
    void swap(basic_spanbuf<CharT, Traits>& x,
              basic_spanbuf<CharT, Traits>& y);
}

```

#### Class template std::basic_ispanstream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
  class basic_ispanstream
    : public basic_istream<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
 
    // constructors
    explicit basic_ispanstream(
      std::span<CharT> s,
      ios_base::openmode which = ios_base::in);
    basic_ispanstream(const basic_ispanstream&) = delete;
    basic_ispanstream(basic_ispanstream&& rhs);
    template<class ROS>
    explicit basic_ispanstream(ROS&& s);
 
    // assign and swap
    basic_ispanstream& operator=(const basic_ispanstream&) = delete;
    basic_ispanstream& operator=(basic_ispanstream&& rhs);
    void swap(basic_ispanstream& rhs);
 
    // members
    basic_spanbuf<CharT, Traits>* rdbuf() const noexcept;
    std::span<const CharT> span() const noexcept;
    void span(std::span<CharT> s) noexcept;
    template<class ROS>
    void span(ROS&& s) noexcept;
 
  private:
    basic_spanbuf<CharT, Traits> sb; // exposition only
  };
 
  template<class CharT, class Traits>
    void swap(basic_ispanstream<CharT, Traits>& x,
              basic_ispanstream<CharT, Traits>& y);
}

```

#### Class template std::basic_ospanstream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
  class basic_ospanstream
    : public basic_ostream<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
 
    // constructors
    explicit basic_ospanstream(
      std::span<CharT> s,
      ios_base::openmode which = ios_base::out);
    basic_ospanstream(const basic_ospanstream&) = delete;
    basic_ospanstream(basic_ospanstream&& rhs);
 
    // assign and swap
    basic_ospanstream& operator=(const basic_ospanstream&) = delete;
    basic_ospanstream& operator=(basic_ospanstream&& rhs);
    void swap(basic_ospanstream& rhs);
 
    // members
    basic_spanbuf<CharT, Traits>* rdbuf() const noexcept;
    std::span<CharT> span() const noexcept;
    void span(std::span<CharT> s) noexcept;
 
  private:
    basic_spanbuf<CharT, Traits> sb; // exposition only
  };
 
  template<class CharT, class Traits>
    void swap(basic_ospanstream<CharT, Traits>& x,
              basic_ospanstream<CharT, Traits>& y);
}

```

#### Class template std::basic_spanstream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>>
  class basic_spanstream
    : public basic_iostream<CharT, Traits> {
  public:
    using char_type     = CharT;
    using int_type      = typename Traits::int_type;
    using pos_type      = typename Traits::pos_type;
    using off_type      = typename Traits::off_type;
    using traits_type   = Traits;
 
    // constructors
    explicit basic_spanstream(
      std::span<CharT> s,
      ios_base::openmode which = ios_base::out | ios_base::in);
    basic_spanstream(const basic_spanstream&) = delete;
    basic_spanstream(basic_spanstream&& rhs);
 
    // assign and swap
    basic_spanstream& operator=(const basic_spanstream&) = delete;
    basic_spanstream& operator=(basic_spanstream&& rhs);
    void swap(basic_spanstream& rhs);
 
    // members
    basic_spanbuf<CharT, Traits>* rdbuf() const noexcept;
    std::span<CharT> span() const noexcept;
    void span(std::span<CharT> s) noexcept;
 
  private:
    basic_spanbuf<CharT, Traits> sb; // exposition only
  };
 
  template<class CharT, class Traits>
    void swap(basic_spanstream<CharT, Traits>& x,
              basic_spanstream<CharT, Traits>& y);
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/spanstream&oldid=163921>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 06:48.