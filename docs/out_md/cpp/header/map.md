# Standard library header <map>

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | ****<map>**** | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the containers library.

|  |  |
| --- | --- |
| Includes | |
| <compare>(C++20) | Three-way comparison operator support |
| <initializer_list>(C++11) | std::initializer_list class template |
| Classes | |
| map | collection of key-value pairs, sorted by keys, keys are unique   (class template) |
| multimap | collection of key-value pairs, sorted by keys   (class template) |
| Functions | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) | lexicographically compares the values of two `map`s   (function template) |
| std::swap(std::map) | specializes the std::swap algorithm   (function template) |
| erase_if(std::map)(C++20) | erases all elements satisfying specific criteria   (function template) |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) | lexicographically compares the values of two `multimap`s   (function template) |
| std::swap(std::multimap) | specializes the std::swap algorithm   (function template) |
| erase_if(std::multimap)(C++20) | erases all elements satisfying specific criteria   (function template) |
| Range access | |
| begincbegin(C++11)(C++14) | returns an iterator to the beginning of a container or array   (function template) |
| endcend(C++11)(C++14) | returns an iterator to the end of a container or array   (function template) |
| rbegincrbegin(C++14) | returns a reverse iterator to the beginning of a container or array   (function template) |
| rendcrend(C++14) | returns a reverse end iterator for a container or array   (function template) |
| sizessize(C++17)(C++20) | returns the size of a container or array   (function template) |
| empty(C++17) | checks whether the container is empty   (function template) |
| data(C++17) | obtains the pointer to the underlying array   (function template) |

### Synopsis

```
#include <compare>
#include <initializer_list>
 
namespace std {
  // class template map
  template<class Key,
           class T,
           class Compare   = less<Key>,
           class Allocator = allocator<pair<const Key, T>>>
  class map;
 
  template<class Key, class T, class Compare, class Allocator>
  bool operator==(const map<Key, T, Compare, Allocator>& x,
                  const map<Key, T, Compare, Allocator>& y);
  template<class Key, class T, class Compare, class Allocator>
  /*synth-three-way-result*/<pair<const Key, T>> operator<=>(
    const map<Key, T, Compare, Allocator>& x,
    const map<Key, T, Compare, Allocator>& y);
 
  template<class Key, class T, class Compare, class Allocator>
  void swap(map<Key, T, Compare, Allocator>& x,
            map<Key, T, Compare, Allocator>& y) noexcept(noexcept(x.swap(y)));
 
  // erasure for map
  template<class Key, class T, class Compare, class Allocator, class Predicate>
  typename map<Key, T, Compare, Allocator>::size_type erase_if(
    map<Key, T, Compare, Allocator>& c,
    Predicate pred);
 
  // class template multimap
  template<class Key,
           class T,
           class Compare   = less<Key>,
           class Allocator = allocator<pair<const Key, T>>>
  class multimap;
 
  template<class Key, class T, class Compare, class Allocator>
  bool operator==(const multimap<Key, T, Compare, Allocator>& x,
                  const multimap<Key, T, Compare, Allocator>& y);
  template<class Key, class T, class Compare, class Allocator>
  /*synth-three-way-result*/<pair<const Key, T>> operator<=>(
    const multimap<Key, T, Compare, Allocator>& x,
    const multimap<Key, T, Compare, Allocator>& y);
 
  template<class Key, class T, class Compare, class Allocator>
  void swap(multimap<Key, T, Compare, Allocator>& x,
            multimap<Key, T, Compare, Allocator>& y) noexcept(noexcept(x.swap(y)));
 
  // erasure for multimap
  template<class Key, class T, class Compare, class Allocator, class Predicate>
  typename multimap<Key, T, Compare, Allocator>::size_type erase_if(
    multimap<Key, T, Compare, Allocator>& c,
    Predicate pred);
 
  namespace pmr {
    template<class Key, class T, class Compare = less<Key>>
    using map = std::map<Key, T, Compare, polymorphic_allocator<pair<const Key, T>>>;
 
    template<class Key, class T, class Compare = less<Key>>
    using multimap =
      std::multimap<Key, T, Compare, polymorphic_allocator<pair<const Key, T>>>;
  }
}

```

#### Class template std::map

```
namespace std {
  template<class Key,
           class T,
           class Compare   = less<Key>,
           class Allocator = allocator<pair<const Key, T>>>
  class map
  {
  public:
    // types
    using key_type               = Key;
    using mapped_type            = T;
    using value_type             = pair<const Key, T>;
    using key_compare            = Compare;
    using allocator_type         = Allocator;
    using pointer                = typename allocator_traits<Allocator>::pointer;
    using const_pointer          = typename allocator_traits<Allocator>::const_pointer;
    using reference              = value_type&;
    using const_reference        = const value_type&;
    using size_type              = /* implementation-defined */;
    using difference_type        = /* implementation-defined */;
    using iterator               = /* implementation-defined */;
    using const_iterator         = /* implementation-defined */;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    using node_type              = /* unspecified */;
    using insert_return_type     = /*insert-return-type*/<iterator, node_type>;
 
    class value_compare
    {
    protected:
      Compare comp;
      value_compare(Compare c)
        : comp(c)
      {
      }
 
    public:
      bool operator()(const value_type& x, const value_type& y) const
      {
        return comp(x.first, y.first);
      }
    };
 
    // construct/copy/destroy
    map()
      : map(Compare())
    {
    }
    explicit map(const Compare& comp, const Allocator& = Allocator());
    template<class InputIter>
    map(InputIter first,
        InputIter last,
        const Compare& comp = Compare(),
        const Allocator&    = Allocator());
    template<container-compatible-range<value_type> R>
    map(from_range_t,
        R&& rg,
        const Compare& comp = Compare(),
        const Allocator&    = Allocator());
    map(const map& x);
    map(map&& x);
    explicit map(const Allocator&);
    map(const map&, const type_identity_t<Allocator>&);
    map(map&&, const type_identity_t<Allocator>&);
    map(initializer_list<value_type>,
        const Compare&   = Compare(),
        const Allocator& = Allocator());
    template<class InputIter>
    map(InputIter first, InputIter last, const Allocator& a)
      : map(first, last, Compare(), a)
    {
    }
    template<container-compatible-range<value_type> R>
      map(from_range_t, R&& rg, const Allocator& a))
        : map(from_range, std::forward<R>(rg), Compare(), a)
    {
    }
    map(initializer_list<value_type> il, const Allocator& a)
      : map(il, Compare(), a)
    {
    }
    ~map();
    map& operator=(const map& x);
    map& operator=(map&& x) noexcept(allocator_traits<Allocator>::is_always_equal::value&&
                                       is_nothrow_move_assignable_v<Compare>);
    map& operator=(initializer_list<value_type>);
    allocator_type get_allocator() const noexcept;
 
    // iterators
    iterator begin() noexcept;
    const_iterator begin() const noexcept;
    iterator end() noexcept;
    const_iterator end() const noexcept;
 
    reverse_iterator rbegin() noexcept;
    const_reverse_iterator rbegin() const noexcept;
    reverse_iterator rend() noexcept;
    const_reverse_iterator rend() const noexcept;
 
    const_iterator cbegin() const noexcept;
    const_iterator cend() const noexcept;
    const_reverse_iterator crbegin() const noexcept;
    const_reverse_iterator crend() const noexcept;
 
    // capacity
    bool empty() const noexcept;
    size_type size() const noexcept;
    size_type max_size() const noexcept;
 
    // element access
    mapped_type& operator[](const key_type& x);
    mapped_type& operator[](key_type&& x);
    template<class K>
    mapped_type& operator[](K&& x);
    mapped_type& at(const key_type& x);
    const mapped_type& at(const key_type& x) const;
    template<class K>
    mapped_type& at(const K& x);
    template<class K>
    const mapped_type& at(const K& x) const;
 
    // modifiers
    template<class... Args>
    pair<iterator, bool> emplace(Args&&... args);
    template<class... Args>
    iterator emplace_hint(const_iterator position, Args&&... args);
    pair<iterator, bool> insert(const value_type& x);
    pair<iterator, bool> insert(value_type&& x);
    template<class P>
    pair<iterator, bool> insert(P&& x);
    iterator insert(const_iterator position, const value_type& x);
    iterator insert(const_iterator position, value_type&& x);
    template<class P>
    iterator insert(const_iterator position, P&&);
    template<class InputIter>
    void insert(InputIter first, InputIter last);
    template<container-compatible-range<value_type> R>
    void insert_range(R&& rg);
    void insert(initializer_list<value_type>);
 
    node_type extract(const_iterator position);
    node_type extract(const key_type& x);
    template<class K>
    node_type extract(K&& x);
    insert_return_type insert(node_type&& nh);
    iterator insert(const_iterator hint, node_type&& nh);
 
    template<class... Args>
    pair<iterator, bool> try_emplace(const key_type& k, Args&&... args);
    template<class... Args>
    pair<iterator, bool> try_emplace(key_type&& k, Args&&... args);
    template<class K, class... Args>
    pair<iterator, bool> try_emplace(K&& k, Args&&... args);
    template<class... Args>
    iterator try_emplace(const_iterator hint, const key_type& k, Args&&... args);
    template<class... Args>
    iterator try_emplace(const_iterator hint, key_type&& k, Args&&... args);
    template<class K, class... Args>
    iterator try_emplace(const_iterator hint, K&& k, Args&&... args);
    template<class M>
    pair<iterator, bool> insert_or_assign(const key_type& k, M&& obj);
    template<class M>
    pair<iterator, bool> insert_or_assign(key_type&& k, M&& obj);
    template<class K, class M>
    pair<iterator, bool> insert_or_assign(K&& k, M&& obj);
    template<class M>
    iterator insert_or_assign(const_iterator hint, const key_type& k, M&& obj);
    template<class M>
    iterator insert_or_assign(const_iterator hint, key_type&& k, M&& obj);
    template<class K, class M>
    iterator insert_or_assign(const_iterator hint, K&& k, M&& obj);
 
    iterator erase(iterator position);
    iterator erase(const_iterator position);
    size_type erase(const key_type& x);
    template<class K>
    size_type erase(K&& x);
    iterator erase(const_iterator first, const_iterator last);
    void swap(map&) noexcept(allocator_traits<Allocator>::is_always_equal::value&&
                               is_nothrow_swappable_v<Compare>);
    void clear() noexcept;
 
    template<class C2>
    void merge(map<Key, T, C2, Allocator>& source);
    template<class C2>
    void merge(map<Key, T, C2, Allocator>&& source);
    template<class C2>
    void merge(multimap<Key, T, C2, Allocator>& source);
    template<class C2>
    void merge(multimap<Key, T, C2, Allocator>&& source);
 
    // observers
    key_compare key_comp() const;
    value_compare value_comp() const;
 
    // map operations
    iterator find(const key_type& x);
    const_iterator find(const key_type& x) const;
    template<class K>
    iterator find(const K& x);
    template<class K>
    const_iterator find(const K& x) const;
 
    size_type count(const key_type& x) const;
    template<class K>
    size_type count(const K& x) const;
 
    bool contains(const key_type& x) const;
    template<class K>
    bool contains(const K& x) const;
 
    iterator lower_bound(const key_type& x);
    const_iterator lower_bound(const key_type& x) const;
    template<class K>
    iterator lower_bound(const K& x);
    template<class K>
    const_iterator lower_bound(const K& x) const;
 
    iterator upper_bound(const key_type& x);
    const_iterator upper_bound(const key_type& x) const;
    template<class K>
    iterator upper_bound(const K& x);
    template<class K>
    const_iterator upper_bound(const K& x) const;
 
    pair<iterator, iterator> equal_range(const key_type& x);
    pair<const_iterator, const_iterator> equal_range(const key_type& x) const;
    template<class K>
    pair<iterator, iterator> equal_range(const K& x);
    template<class K>
    pair<const_iterator, const_iterator> equal_range(const K& x) const;
  };
 
  template<class InputIter,
           class Compare   = less</*iter-key-type*/<InputIter>>,
           class Allocator = allocator</*iter-to-alloc-type*/<InputIter>>>
  map(InputIter, InputIter, Compare = Compare(), Allocator = Allocator())
    -> map</*iter-key-type*/<InputIter>,
           /*iter-mapped-type*/<InputIter>,
           Compare,
           Allocator>;
 
  template<
    ranges::input_range R,
    class Compare =
      less</*range-key-type*/<R>, class Allocator = allocator</*range-to-alloc-type*/<R>>>
        map(from_range_t, R&&, Compare = Compare(), Allocator = Allocator())
          -> map</*range-key-type*/<R>, /*range-mapped-type*/<R>, Compare, Allocator>;
 
  template<class Key,
           class T,
           class Compare   = less<Key>,
           class Allocator = allocator<pair<const Key, T>>>
  map(initializer_list<pair<Key, T>>, Compare = Compare(), Allocator = Allocator())
    -> map<Key, T, Compare, Allocator>;
 
  template<class InputIter, class Allocator>
  map(InputIter, InputIter, Allocator) -> map</*iter-key-type*/<InputIter>,
                                              /*iter-mapped-type*/<InputIter>,
                                              less</*iter-key-type*/<InputIter>>,
                                              Allocator>;
 
  template<ranges::input_range R, class Allocator>
  map(from_range_t, R&&, Allocator) -> map</*range-key-type*/<R>,
                                           /*range-mapped-type*/<R>,
                                           less</*range-key-type*/<R>>,
                                           Allocator>;
 
  template<class Key, class T, class Allocator>
  map(initializer_list<pair<Key, T>>, Allocator) -> map<Key, T, less<Key>, Allocator>;
}

```

#### Class template std::multimap

```
namespace std {
  template<class Key,
           class T,
           class Compare   = less<Key>,
           class Allocator = allocator<pair<const Key, T>>>
  class multimap
  {
  public:
    // types
    using key_type               = Key;
    using mapped_type            = T;
    using value_type             = pair<const Key, T>;
    using key_compare            = Compare;
    using allocator_type         = Allocator;
    using pointer                = typename allocator_traits<Allocator>::pointer;
    using const_pointer          = typename allocator_traits<Allocator>::const_pointer;
    using reference              = value_type&;
    using const_reference        = const value_type&;
    using size_type              = /* implementation-defined */;
    using difference_type        = /* implementation-defined */;
    using iterator               = /* implementation-defined */;
    using const_iterator         = /* implementation-defined */;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    using node_type              = /* unspecified */;
 
    class value_compare
    {
    protected:
      Compare comp;
      value_compare(Compare c)
        : comp(c)
      {
      }
 
    public:
      bool operator()(const value_type& x, const value_type& y) const
      {
        return comp(x.first, y.first);
      }
    };
 
    // construct/copy/destroy
    multimap()
      : multimap(Compare())
    {
    }
    explicit multimap(const Compare& comp, const Allocator& = Allocator());
    template<class InputIter>
    multimap(InputIter first,
             InputIter last,
             const Compare& comp = Compare(),
             const Allocator&    = Allocator());
    template<container-compatible-range<value_type> R>
    multimap(from_range_t,
             R&& rg,
             const Compare& comp = Compare(),
             const Allocator&    = Allocator());
    multimap(const multimap& x);
    multimap(multimap&& x);
    explicit multimap(const Allocator&);
    multimap(const multimap&, const type_identity_t<Allocator>&);
    multimap(multimap&&, const type_identity_t<Allocator>&);
    multimap(initializer_list<value_type>,
             const Compare&   = Compare(),
             const Allocator& = Allocator());
    template<class InputIter>
    multimap(InputIter first, InputIter last, const Allocator& a)
      : multimap(first, last, Compare(), a)
    {
    }
    template<container-compatible-range<value_type> R>
      multimap(from_range_t, R&& rg, const Allocator& a))
        : multimap(from_range, std::forward<R>(rg), Compare(), a)
    {
    }
    multimap(initializer_list<value_type> il, const Allocator& a)
      : multimap(il, Compare(), a)
    {
    }
    ~multimap();
    multimap& operator=(const multimap& x);
    multimap& operator=(multimap&& x) noexcept(
      allocator_traits<Allocator>::is_always_equal::value&&
        is_nothrow_move_assignable_v<Compare>);
    multimap& operator=(initializer_list<value_type>);
    allocator_type get_allocator() const noexcept;
 
    // iterators
    iterator begin() noexcept;
    const_iterator begin() const noexcept;
    iterator end() noexcept;
    const_iterator end() const noexcept;
 
    reverse_iterator rbegin() noexcept;
    const_reverse_iterator rbegin() const noexcept;
    reverse_iterator rend() noexcept;
    const_reverse_iterator rend() const noexcept;
 
    const_iterator cbegin() const noexcept;
    const_iterator cend() const noexcept;
    const_reverse_iterator crbegin() const noexcept;
    const_reverse_iterator crend() const noexcept;
 
    // capacity
    bool empty() const noexcept;
    size_type size() const noexcept;
    size_type max_size() const noexcept;
 
    // modifiers
    template<class... Args>
    iterator emplace(Args&&... args);
    template<class... Args>
    iterator emplace_hint(const_iterator position, Args&&... args);
    iterator insert(const value_type& x);
    iterator insert(value_type&& x);
    template<class P>
    iterator insert(P&& x);
    iterator insert(const_iterator position, const value_type& x);
    iterator insert(const_iterator position, value_type&& x);
    template<class P>
    iterator insert(const_iterator position, P&& x);
    template<class InputIter>
    void insert(InputIter first, InputIter last);
    template<container-compatible-range<value_type> R>
    void insert_range(R&& rg);
    void insert(initializer_list<value_type>);
 
    node_type extract(const_iterator position);
    node_type extract(const key_type& x);
    template<class K>
    node_type extract(K&& x);
    iterator insert(node_type&& nh);
    iterator insert(const_iterator hint, node_type&& nh);
 
    iterator erase(iterator position);
    iterator erase(const_iterator position);
    size_type erase(const key_type& x);
    template<class K>
    size_type erase(K&& x);
    iterator erase(const_iterator first, const_iterator last);
    void swap(multimap&) noexcept(allocator_traits<Allocator>::is_always_equal::value&&
                                    is_nothrow_swappable_v<Compare>);
    void clear() noexcept;
 
    template<class C2>
    void merge(multimap<Key, T, C2, Allocator>& source);
    template<class C2>
    void merge(multimap<Key, T, C2, Allocator>&& source);
    template<class C2>
    void merge(map<Key, T, C2, Allocator>& source);
    template<class C2>
    void merge(map<Key, T, C2, Allocator>&& source);
 
    // observers
    key_compare key_comp() const;
    value_compare value_comp() const;
 
    // map operations
    iterator find(const key_type& x);
    const_iterator find(const key_type& x) const;
    template<class K>
    iterator find(const K& x);
    template<class K>
    const_iterator find(const K& x) const;
 
    size_type count(const key_type& x) const;
    template<class K>
    size_type count(const K& x) const;
 
    bool contains(const key_type& x) const;
    template<class K>
    bool contains(const K& x) const;
 
    iterator lower_bound(const key_type& x);
    const_iterator lower_bound(const key_type& x) const;
    template<class K>
    iterator lower_bound(const K& x);
    template<class K>
    const_iterator lower_bound(const K& x) const;
 
    iterator upper_bound(const key_type& x);
    const_iterator upper_bound(const key_type& x) const;
    template<class K>
    iterator upper_bound(const K& x);
    template<class K>
    const_iterator upper_bound(const K& x) const;
 
    pair<iterator, iterator> equal_range(const key_type& x);
    pair<const_iterator, const_iterator> equal_range(const key_type& x) const;
    template<class K>
    pair<iterator, iterator> equal_range(const K& x);
    template<class K>
    pair<const_iterator, const_iterator> equal_range(const K& x) const;
  };
 
  template<class InputIter,
           class Compare   = less</*iter-key-type*/<InputIter>>,
           class Allocator = allocator</*iter-to-alloc-type*/<InputIter>>>
  multimap(InputIter, InputIter, Compare = Compare(), Allocator = Allocator())
    -> multimap</*iter-key-type*/<InputIter>,
                /*iter-mapped-type*/<InputIter>,
                Compare,
                Allocator>;
 
  template<ranges::input_range R,
           class Compare   = less</*range-key-type*/<R>>,
           class Allocator = allocator</*range-to-alloc-type*/<R>>>
  multimap(from_range_t, R&&, Compare = Compare(), Allocator = Allocator())
    -> multimap</*range-key-type*/<R>, /*range-mapped-type*/<R>, Compare, Allocator>;
 
  template<class Key,
           class T,
           class Compare   = less<Key>,
           class Allocator = allocator<pair<const Key, T>>>
  multimap(initializer_list<pair<Key, T>>, Compare = Compare(), Allocator = Allocator())
    -> multimap<Key, T, Compare, Allocator>;
 
  template<class InputIter, class Allocator>
  multimap(InputIter, InputIter, Allocator)
    -> multimap</*iter-key-type*/<InputIter>,
                /*iter-mapped-type*/<InputIter>,
                less</*iter-key-type*/<InputIter>>,
                Allocator>;
 
  template<ranges::input_range R, class Allocator>
  multimap(from_range_t, R&&, Allocator) -> multimap</*range-key-type*/<R>,
                                                     /*range-mapped-type*/<R>,
                                                     less</*range-key-type*/<R>>,
                                                     Allocator>;
 
  template<class Key, class T, class Allocator>
  multimap(initializer_list<pair<Key, T>>, Allocator)
    -> multimap<Key, T, less<Key>, Allocator>;
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 133 | C++98 | map::get_allocator was missing in the synopsis | added |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/map&oldid=163961>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 07:06.