# Standard library header <sstream>

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | ****<sstream>**** | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the Input/Output library.

|  |  |
| --- | --- |
| Classes | |
| basic_stringbuf | implements raw string device   (class template) |
| basic_istringstream | implements high-level string stream input operations   (class template) |
| basic_ostringstream | implements high-level string stream output operations   (class template) |
| basic_stringstream | implements high-level string stream input/output operations   (class template) |
| `stringbuf` | std::basic_stringbuf<char> (typedef) |
| `wstringbuf` | std::basic_stringbuf<wchar_t> (typedef) |
| `istringstream` | std::basic_istringstream<char> (typedef) |
| `wistringstream` | std::basic_istringstream<wchar_t> (typedef) |
| `ostringstream` | std::basic_ostringstream<char> (typedef) |
| `wostringstream` | std::basic_ostringstream<wchar_t> (typedef) |
| `stringstream` | std::basic_stringstream<char> (typedef) |
| `wstringstream` | std::basic_stringstream<wchar_t> (typedef) |
| Functions | |
| std::swap(std::basic_stringbuf)(C++11) | specializes the std::swap algorithm   (function template) |
| std::swap(std::basic_istringstream)(C++11) | specializes the std::swap algorithm   (function template) |
| std::swap(std::basic_ostringstream)(C++11) | specializes the std::swap algorithm   (function template) |
| std::swap(std::basic_stringstream)(C++11) | specializes the std::swap algorithm   (function template) |

### Synopsis

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
    class basic_stringbuf;
 
  using stringbuf  = basic_stringbuf<char>;
  using wstringbuf = basic_stringbuf<wchar_t>;
 
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
    class basic_istringstream;
 
  using istringstream  = basic_istringstream<char>;
  using wistringstream = basic_istringstream<wchar_t>;
 
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
    class basic_ostringstream;
  using ostringstream  = basic_ostringstream<char>;
  using wostringstream = basic_ostringstream<wchar_t>;
 
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
    class basic_stringstream;
  using stringstream  = basic_stringstream<char>;
  using wstringstream = basic_stringstream<wchar_t>;
}

```

#### Class template std::basic_stringbuf

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
  class basic_stringbuf : public basic_streambuf<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
    using allocator_type = Allocator;
 
    // constructors
    basic_stringbuf() : basic_stringbuf(ios_base::in | ios_base::out) {}
    explicit basic_stringbuf(ios_base::openmode which);
    explicit basic_stringbuf(
      const basic_string<CharT, Traits, Allocator>& s,
      ios_base::openmode which = ios_base::in | ios_base::out);
    explicit basic_stringbuf(const Allocator& a)
      : basic_stringbuf(ios_base::in | ios_base::out, a) {}
    basic_stringbuf(ios_base::openmode which, const Allocator& a);
    explicit basic_stringbuf(
      basic_string<CharT, Traits, Allocator>&& s,
      ios_base::openmode which = ios_base::in | ios_base::out);
    template<class SAlloc>
      basic_stringbuf(
        const basic_string<CharT, Traits, SAlloc>& s, const Allocator& a)
        : basic_stringbuf(s, ios_base::in | ios_base::out, a) {}
    template<class SAlloc>
      basic_stringbuf(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which, const Allocator& a);
    template<class SAlloc>
      explicit basic_stringbuf(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which = ios_base::in | ios_base::out);
    basic_stringbuf(const basic_stringbuf&) = delete;
    basic_stringbuf(basic_stringbuf&& rhs);
    basic_stringbuf(basic_stringbuf&& rhs, const Allocator& a);
 
    // assign and swap
    basic_stringbuf& operator=(const basic_stringbuf&) = delete;
    basic_stringbuf& operator=(basic_stringbuf&& rhs);
    void swap(basic_stringbuf& rhs) noexcept(see below);
 
    // getters and setters
    allocator_type get_allocator() const noexcept;
 
    basic_string<CharT, Traits, Allocator> str() const &;
    template<class SAlloc>
      basic_string<CharT,Traits,SAlloc> str(const SAlloc& sa) const;
    basic_string<CharT, Traits, Allocator> str() &&;
    basic_string_view<CharT, Traits> view() const noexcept;
 
    void str(const basic_string<CharT, Traits, Allocator>& s);
    template<class SAlloc>
      void str(const basic_string<CharT, Traits, SAlloc>& s);
    void str(basic_string<CharT, Traits, Allocator>&& s);
 
  protected:
    // overridden virtual functions
    int_type underflow() override;
    int_type pbackfail(int_type c = Traits::eof()) override;
    int_type overflow (int_type c = Traits::eof()) override;
    basic_streambuf<CharT, Traits>* setbuf(CharT*, streamsize) override;
 
    pos_type seekoff(off_type off, ios_base::seekdir way,
                     ios_base::openmode which
                      = ios_base::in | ios_base::out) override;
    pos_type seekpos(pos_type sp,
                     ios_base::openmode which
                      = ios_base::in | ios_base::out) override;
 
  private:
    ios_base::openmode mode;                        // exposition only
    basic_string<CharT, Traits, Allocator> buf;     // exposition only
    void init_buf_ptrs();                           // exposition only
  };
 
  template<class CharT, class Traits, class Allocator>
    void swap(basic_stringbuf<CharT, Traits, Allocator>& x,
              basic_stringbuf<CharT, Traits, Allocator>& y) noexcept(noexcept(x.swap(y)));
}

```

#### Class template std::basic_istringstream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
  class basic_istringstream : public basic_istream<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
    using allocator_type = Allocator;
 
    // constructors
    basic_istringstream() : basic_istringstream(ios_base::in) {}
    explicit basic_istringstream(ios_base::openmode which);
    explicit basic_istringstream(
      const basic_string<CharT, Traits, Allocator>& s,
      ios_base::openmode which = ios_base::in);
    basic_istringstream(ios_base::openmode which, const Allocator& a);
    explicit basic_istringstream(
      basic_string<CharT, Traits, Allocator>&& s,
      ios_base::openmode which = ios_base::in);
    template<class SAlloc>
      basic_istringstream(
        const basic_string<CharT, Traits, SAlloc>& s, const Allocator& a)
        : basic_istringstream(s, ios_base::in, a) {}
    template<class SAlloc>
      basic_istringstream(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which, const Allocator& a);
    template<class SAlloc>
      explicit basic_istringstream(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which = ios_base::in);
    basic_istringstream(const basic_istringstream&) = delete;
    basic_istringstream(basic_istringstream&& rhs);
 
    // assign and swap
    basic_istringstream& operator=(const basic_istringstream&) = delete;
    basic_istringstream& operator=(basic_istringstream&& rhs);
    void swap(basic_istringstream& rhs);
 
    // members
    basic_stringbuf<CharT, Traits, Allocator>* rdbuf() const;
    basic_string<CharT, Traits, Allocator> str() const &;
    template<class SAlloc>
      basic_string<CharT,Traits,SAlloc> str(const SAlloc& sa) const;
    basic_string<CharT, Traits, Allocator> str() &&;
    basic_string_view<CharT, Traits> view() const noexcept;
 
    void str(const basic_string<CharT, Traits, Allocator>& s);
    template<class SAlloc>
      void str(const basic_string<CharT, Traits, SAlloc>& s);
    void str(basic_string<CharT, Traits, Allocator>&& s);
 
  private:
    basic_stringbuf<CharT, Traits, Allocator> sb;   // exposition only
  };
 
  template<class CharT, class Traits, class Allocator>
    void swap(basic_istringstream<CharT, Traits, Allocator>& x,
              basic_istringstream<CharT, Traits, Allocator>& y);
}

```

#### Class template std::basic_ostringstream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
  class basic_ostringstream : public basic_ostream<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
    using allocator_type = Allocator;
 
    // constructors
    basic_ostringstream() : basic_ostringstream(ios_base::out) {}
    explicit basic_ostringstream(ios_base::openmode which);
    explicit basic_ostringstream(
      const basic_string<CharT, Traits, Allocator>& s,
      ios_base::openmode which = ios_base::out);
    basic_ostringstream(ios_base::openmode which, const Allocator& a);
    explicit basic_ostringstream(
      basic_string<CharT, Traits, Allocator>&& s,
      ios_base::openmode which = ios_base::out);
    template<class SAlloc>
      basic_ostringstream(
        const basic_string<CharT, Traits, SAlloc>& s, const Allocator& a)
        : basic_ostringstream(s, ios_base::out, a) {}
    template<class SAlloc>
      basic_ostringstream(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which, const Allocator& a);
    template<class SAlloc>
      explicit basic_ostringstream(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which = ios_base::out);
    basic_ostringstream(const basic_ostringstream&) = delete;
    basic_ostringstream(basic_ostringstream&& rhs);
 
    // assign and swap
    basic_ostringstream& operator=(const basic_ostringstream&) = delete;
    basic_ostringstream& operator=(basic_ostringstream&& rhs);
    void swap(basic_ostringstream& rhs);
 
    // members
    basic_stringbuf<CharT, Traits, Allocator>* rdbuf() const;
 
    basic_string<CharT, Traits, Allocator> str() const &;
    template<class SAlloc>
      basic_string<CharT,Traits,SAlloc> str(const SAlloc& sa) const;
    basic_string<CharT, Traits, Allocator> str() &&;
    basic_string_view<CharT, Traits> view() const noexcept;
 
    void str(const basic_string<CharT, Traits, Allocator>& s);
    template<class SAlloc>
      void str(const basic_string<CharT, Traits, SAlloc>& s);
    void str(basic_string<CharT, Traits, Allocator>&& s);
 
   private:
    basic_stringbuf<CharT, Traits, Allocator> sb;   // exposition only
  };
 
  template<class CharT, class Traits, class Allocator>
    void swap(basic_ostringstream<CharT, Traits, Allocator>& x,
              basic_ostringstream<CharT, Traits, Allocator>& y);
}

```

#### Class template std::basic_stringstream

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
  class basic_stringstream : public basic_iostream<CharT, Traits> {
  public:
    using char_type      = CharT;
    using int_type       = typename Traits::int_type;
    using pos_type       = typename Traits::pos_type;
    using off_type       = typename Traits::off_type;
    using traits_type    = Traits;
    using allocator_type = Allocator;
 
    // constructors
    basic_stringstream() : basic_stringstream(ios_base::out | ios_base::in) {}
    explicit basic_stringstream(ios_base::openmode which);
    explicit basic_stringstream(
      const basic_string<CharT, Traits, Allocator>& s,
      ios_base::openmode which = ios_base::out | ios_base::in);
    basic_stringstream(ios_base::openmode which, const Allocator& a);
    explicit basic_stringstream(
      basic_string<CharT, Traits, Allocator>&& s,
      ios_base::openmode which = ios_base::out | ios_base::in);
    template<class SAlloc>
      basic_stringstream(
        const basic_string<CharT, Traits, SAlloc>& s, const Allocator& a)
        : basic_stringstream(s, ios_base::out | ios_base::in, a) {}
    template<class SAlloc>
      basic_stringstream(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which, const Allocator& a);
    template<class SAlloc>
      explicit basic_stringstream(
        const basic_string<CharT, Traits, SAlloc>& s,
        ios_base::openmode which = ios_base::out | ios_base::in);
    basic_stringstream(const basic_stringstream&) = delete;
    basic_stringstream(basic_stringstream&& rhs);
 
    // assign and swap
    basic_stringstream& operator=(const basic_stringstream&) = delete;
    basic_stringstream& operator=(basic_stringstream&& rhs);
    void swap(basic_stringstream& rhs);
 
    // members
    basic_stringbuf<CharT, Traits, Allocator>* rdbuf() const;
 
    basic_string<CharT, Traits, Allocator> str() const &;
    template<class SAlloc>
      basic_string<CharT,Traits,SAlloc> str(const SAlloc& sa) const;
    basic_string<CharT, Traits, Allocator> str() &&;
    basic_string_view<CharT, Traits> view() const noexcept;
 
    void str(const basic_string<CharT, Traits, Allocator>& s);
    template<class SAlloc>
      void str(const basic_string<CharT, Traits, SAlloc>& s);
    void str(basic_string<CharT, Traits, Allocator>&& s);
 
  private:
    basic_stringbuf<CharT, Traits> sb;  // exposition only
  };
 
  template<class CharT, class Traits, class Allocator>
    void swap(basic_stringstream<CharT, Traits, Allocator>& x,
              basic_stringstream<CharT, Traits, Allocator>& y);
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 170 | C++98 | the definitions of `traits_type` were missing in the synopses of std::basic_ostringstream and std::basic_stringstream | added |
| LWG 251 | C++98 | the definitions of `allocator_type` were missing in the synopses of std::basic_stringbuf, std::basic_istringstream std::basic_ostringstream and std::basic_stringstream | added |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/sstream&oldid=164066>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 07:55.