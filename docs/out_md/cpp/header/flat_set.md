# Standard library header <flat_set> (C++23)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | ****<flat_set>**** (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the containers library.

|  |  |
| --- | --- |
| Includes | |
| <compare>(C++20) | Three-way comparison operator support |
| <initializer_list>(C++11) | std::initializer_list class template |
| Classes | |
| flat_set(C++23) | adapts a container to provide a collection of unique keys, sorted by keys   (class template) |
| flat_multiset(C++23) | adapts a container to provide a collection of keys, sorted by keys   (class template) |
| std::uses_allocator<std::flat_set>(C++23) | specializes the std::uses_allocator type trait   (class template specialization) |
| std::uses_allocator<std::flat_multiset>(C++23) | specializes the std::uses_allocator type trait   (class template specialization) |
| Functions | |
| erase_if(std::flat_set)(C++23) | erases all elements satisfying specific criteria   (function template) |
| erase_if(std::flat_multiset)(C++23) | erases all elements satisfying specific criteria   (function template) |
| Tags | |
| sorted_uniquesorted_unique_t(C++23) | indicates that elements of a range are sorted and unique (tag) |
| sorted_equivalentsorted_equivalent_t(C++23) | indicates that elements of a range are sorted (uniqueness is not required) (tag) |

### Synopsis

```
#include <compare>
#include <initializer_list>
 
namespace std {
  // class template flat_set
  template<class Key, class Compare = less<Key>, class KeyContainer = vector<Key>>
  class flat_set;
 
  struct sorted_unique_t
  {
    explicit sorted_unique_t() = default;
  };
  inline constexpr sorted_unique_t sorted_unique{};
 
  template<class Key, class Compare, class KeyContainer, class Allocator>
  struct uses_allocator<flat_set<Key, Compare, KeyContainer>, Allocator>;
 
  // erasure for flat_set
  template<class Key, class Compare, class KeyContainer, class Predicate>
  typename flat_set<Key, Compare, KeyContainer>::size_type erase_if(
    flat_set<Key, Compare, KeyContainer>& c,
    Predicate pred);
 
  // class template flat_multiset
  template<class Key, class Compare = less<Key>, class KeyContainer = vector<Key>>
  class flat_multiset;
 
  struct sorted_equivalent_t
  {
    explicit sorted_equivalent_t() = default;
  };
  inline constexpr sorted_equivalent_t sorted_equivalent{};
 
  template<class Key, class Compare, class KeyContainer, class Allocator>
  struct uses_allocator<flat_multiset<Key, Compare, KeyContainer>, Allocator>;
 
  // erasure for flat_multiset
  template<class Key, class Compare, class KeyContainer, class Predicate>
  typename flat_multiset<Key, Compare, KeyContainer>::size_type erase_if(
    flat_multiset<Key, Compare, KeyContainer>& c,
    Predicate pred);
}

```

#### Class template std::flat_set

```
namespace std {
  template<class Key, class Compare = less<Key>, class KeyContainer = vector<Key>>
  class flat_set
  {
  public:
    // types
    using key_type               = Key;
    using value_type             = Key;
    using key_compare            = Compare;
    using value_compare          = Compare;
    using reference              = value_type&;
    using const_reference        = const value_type&;
    using size_type              = typename KeyContainer::size_type;
    using difference_type        = typename KeyContainer::difference_type;
    using iterator               = /* implementation-defined */;
    using const_iterator         = /* implementation-defined */;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    using container_type         = KeyContainer;
 
    // constructors
    flat_set()
      : flat_set(key_compare())
    {
    }
 
    explicit flat_set(const key_compare& comp)
      : /*c*/()
      , /*compare*/(comp)
    {
    }
 
    explicit flat_set(container_type cont, const key_compare& comp = key_compare());
 
    flat_set(sorted_unique_t,
             container_type cont,
             const key_compare& comp = key_compare())
      : /*c*/(std::move(cont))
      , /*compare*/(comp)
    {
    }
 
    template<class InputIter>
    flat_set(InputIter first, InputIter last, const key_compare& comp = key_compare())
      : /*c*/()
      , /*compare*/(comp)
    {
      insert(first, last);
    }
 
    template<class InputIter>
    flat_set(sorted_unique_t,
             InputIter first,
             InputIter last,
             const key_compare& comp = key_compare())
      : /*c*/(first, last)
      , /*compare*/(comp)
    {
    }
 
    template<container-compatible-range<value_type> R>
    flat_set(from_range_t fr, R&& rg)
      : flat_set(fr, std::forward<R>(rg), key_compare())
    {
    }
    template<container-compatible-range<value_type> R>
    flat_set(from_range_t, R&& rg, const key_compare& comp)
      : flat_set(comp)
    {
      insert_range(std::forward<R>(rg));
    }
 
    flat_set(initializer_list<value_type> il, const key_compare& comp = key_compare())
      : flat_set(il.begin(), il.end(), comp)
    {
    }
 
    flat_set(sorted_unique_t s,
             initializer_list<value_type> il,
             const key_compare& comp = key_compare())
      : flat_set(s, il.begin(), il.end(), comp)
    {
    }
 
    // constructors with allocators
 
    template<class Alloc>
    explicit flat_set(const Alloc& a);
    template<class Alloc>
    flat_set(const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_set(const container_type& cont, const Alloc& a);
    template<class Alloc>
    flat_set(const container_type& cont, const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_set(sorted_unique_t, const container_type& cont, const Alloc& a);
    template<class Alloc>
    flat_set(sorted_unique_t,
             const container_type& cont,
             const key_compare& comp,
             const Alloc& a);
    template<class Alloc>
    flat_set(const flat_set&, const Alloc& a);
    template<class Alloc>
    flat_set(flat_set&&, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_set(InputIter first, InputIter last, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_set(InputIter first, InputIter last, const key_compare& comp, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_set(sorted_unique_t, InputIter first, InputIter last, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_set(sorted_unique_t,
             InputIter first,
             InputIter last,
             const key_compare& comp,
             const Alloc& a);
    template<container-compatible-range<value_type> R, class Alloc>
    flat_set(from_range_t, R&& rg, const Alloc& a);
    template<container-compatible-range<value_type> R, class Alloc>
    flat_set(from_range_t, R&& rg, const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_set(initializer_list<value_type> il, const Alloc& a);
    template<class Alloc>
    flat_set(initializer_list<value_type> il, const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_set(sorted_unique_t, initializer_list<value_type> il, const Alloc& a);
    template<class Alloc>
    flat_set(sorted_unique_t,
             initializer_list<value_type> il,
             const key_compare& comp,
             const Alloc& a);
 
    flat_set& operator=(initializer_list<value_type>);
 
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
    [[nodiscard]] bool empty() const noexcept;
    size_type size() const noexcept;
    size_type max_size() const noexcept;
 
    // modifiers
    template<class... Args>
    pair<iterator, bool> emplace(Args&&... args);
    template<class... Args>
    iterator emplace_hint(const_iterator position, Args&&... args);
 
    pair<iterator, bool> insert(const value_type& x) { return emplace(x); }
    pair<iterator, bool> insert(value_type&& x) { return emplace(std::move(x)); }
    template<class K>
    pair<iterator, bool> insert(K&& x);
    iterator insert(const_iterator position, const value_type& x)
    {
      return emplace_hint(position, x);
    }
    iterator insert(const_iterator position, value_type&& x)
    {
      return emplace_hint(position, std::move(x));
    }
    template<class K>
    iterator insert(const_iterator hint, K&& x);
 
    template<class InputIter>
    void insert(InputIter first, InputIter last);
    template<class InputIter>
    void insert(sorted_unique_t, InputIter first, InputIter last);
    template<container-compatible-range<value_type> R>
    void insert_range(R&& rg);
 
    void insert(initializer_list<value_type> il) { insert(il.begin(), il.end()); }
    void insert(sorted_unique_t s, initializer_list<value_type> il)
    {
      insert(s, il.begin(), il.end());
    }
 
    container_type extract() &&;
    void replace(container_type&&);
 
    iterator erase(iterator position);
    iterator erase(const_iterator position);
    size_type erase(const key_type& x);
    template<class K>
    size_type erase(K&& x);
    iterator erase(const_iterator first, const_iterator last);
 
    void swap(flat_set& y) noexcept;
    void clear() noexcept;
 
    // observers
    key_compare key_comp() const;
    value_compare value_comp() const;
 
    // set operations
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
 
    friend bool operator==(const flat_set& x, const flat_set& y);
 
    friend /*synth-three-way-result*/<value_type> operator<=>(const flat_set& x,
                                                              const flat_set& y);
 
    friend void swap(flat_set& x, flat_set& y) noexcept { x.swap(y); }
 
  private:
    container_type /*c*/;    // exposition only
    key_compare /*compare*/; // exposition only
  };
 
  template<class KeyContainer, class Compare = less<typename KeyContainer::value_type>>
  flat_set(KeyContainer, Compare = Compare())
    -> flat_set<typename KeyContainer::value_type, Compare, KeyContainer>;
  template<class KeyContainer, class Allocator>
  flat_set(KeyContainer, Allocator) -> flat_set<typename KeyContainer::value_type,
                                                less<typename KeyContainer::value_type>,
                                                KeyContainer>;
  template<class KeyContainer, class Compare, class Allocator>
  flat_set(KeyContainer, Compare, Allocator)
    -> flat_set<typename KeyContainer::value_type, Compare, KeyContainer>;
 
  template<class KeyContainer, class Compare = less<typename KeyContainer::value_type>>
  flat_set(sorted_unique_t, KeyContainer, Compare = Compare())
    -> flat_set<typename KeyContainer::value_type, Compare, KeyContainer>;
  template<class KeyContainer, class Allocator>
  flat_set(sorted_unique_t, KeyContainer, Allocator)
    -> flat_set<typename KeyContainer::value_type,
                less<typename KeyContainer::value_type>,
                KeyContainer>;
  template<class KeyContainer, class Compare, class Allocator>
  flat_set(sorted_unique_t, KeyContainer, Compare, Allocator)
    -> flat_set<typename KeyContainer::value_type, Compare, KeyContainer>;
 
  template<class InputIter, class Compare = less</*iter-value-type*/<InputIter>>>
  flat_set(InputIter, InputIter, Compare = Compare())
    -> flat_set</*iter-value-type*/<InputIter>, Compare>;
 
  template<class InputIter, class Compare = less</*iter-value-type*/<InputIter>>>
  flat_set(sorted_unique_t, InputIter, InputIter, Compare = Compare())
    -> flat_set</*iter-value-type*/<InputIter>, Compare>;
 
  template<ranges::input_range R,
           class Compare   = less<ranges::range_value_t<R>>,
           class Allocator = allocator<ranges::range_value_t<R>>>
  flat_set(from_range_t, R&&, Compare = Compare(), Allocator = Allocator())
    -> flat_set<ranges::range_value_t<R>,
                Compare,
                vector<ranges::range_value_t<R>,
                       /*alloc-rebind*/<Allocator, ranges::range_value_t<R>>>>;
 
  template<ranges::input_range R, class Allocator>
  flat_set(from_range_t, R&&, Allocator)
    -> flat_set<ranges::range_value_t<R>,
                less<ranges::range_value_t<R>>,
                vector<ranges::range_value_t<R>,
                       /*alloc-rebind*/<Allocator, ranges::range_value_t<R>>>>;
 
  template<class Key, class Compare = less<Key>>
  flat_set(initializer_list<Key>, Compare = Compare()) -> flat_set<Key, Compare>;
 
  template<class Key, class Compare = less<Key>>
  flat_set(sorted_unique_t, initializer_list<Key>, Compare = Compare())
    -> flat_set<Key, Compare>;
 
  template<class Key, class Compare, class KeyContainer, class Allocator>
  struct uses_allocator<flat_set<Key, Compare, KeyContainer>, Allocator>
    : bool_constant<uses_allocator_v<KeyContainer, Allocator>>
  {};
}

```

#### Class template std::flat_multiset

```
namespace std {
  template<class Key, class Compare = less<Key>, class KeyContainer = vector<Key>>
  class flat_multiset
  {
  public:
    // types
    using key_type               = Key;
    using value_type             = Key;
    using key_compare            = Compare;
    using value_compare          = Compare;
    using reference              = value_type&;
    using const_reference        = const value_type&;
    using size_type              = typename KeyContainer::size_type;
    using difference_type        = typename KeyContainer::difference_type;
    using iterator               = /* implementation-defined */;
    using const_iterator         = /* implementation-defined */;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    using container_type         = KeyContainer;
 
    // constructors
    flat_multiset()
      : flat_multiset(key_compare())
    {
    }
 
    explicit flat_multiset(const key_compare& comp)
      : /*c*/()
      , /*compare*/(comp)
    {
    }
 
    explicit flat_multiset(container_type cont, const key_compare& comp = key_compare());
 
    flat_multiset(sorted_equivalent_t,
                  container_type cont,
                  const key_compare& comp = key_compare())
      : /*c*/(std::move(cont))
      , /*compare*/(comp)
    {
    }
 
    template<class InputIter>
    flat_multiset(InputIter first,
                  InputIter last,
                  const key_compare& comp = key_compare())
      : /*c*/()
      , /*compare*/(comp)
    {
      insert(first, last);
    }
 
    template<class InputIter>
    flat_multiset(sorted_equivalent_t,
                  InputIter first,
                  InputIter last,
                  const key_compare& comp = key_compare())
      : /*c*/(first, last)
      , /*compare*/(comp)
    {
    }
 
    template<container-compatible-range<value_type> R>
    flat_multiset(from_range_t fr, R&& rg)
      : flat_multiset(fr, std::forward<R>(rg), key_compare())
    {
    }
    template<container-compatible-range<value_type> R>
    flat_multiset(from_range_t, R&& rg, const key_compare& comp)
      : flat_multiset(comp)
    {
      insert_range(std::forward<R>(rg));
    }
 
    flat_multiset(initializer_list<value_type> il,
                  const key_compare& comp = key_compare())
      : flat_multiset(il.begin(), il.end(), comp)
    {
    }
 
    flat_multiset(sorted_equivalent_t s,
                  initializer_list<value_type> il,
                  const key_compare& comp = key_compare())
      : flat_multiset(s, il.begin(), il.end(), comp)
    {
    }
 
    // constructors with allocators
 
    template<class Alloc>
    explicit flat_multiset(const Alloc& a);
    template<class Alloc>
    flat_multiset(const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_multiset(const container_type& cont, const Alloc& a);
    template<class Alloc>
    flat_multiset(const container_type& cont, const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_multiset(sorted_equivalent_t, const container_type& cont, const Alloc& a);
    template<class Alloc>
    flat_multiset(sorted_equivalent_t,
                  const container_type& cont,
                  const key_compare& comp,
                  const Alloc& a);
    template<class Alloc>
    flat_multiset(const flat_multiset&, const Alloc& a);
    template<class Alloc>
    flat_multiset(flat_multiset&&, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_multiset(InputIter first, InputIter last, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_multiset(InputIter first,
                  InputIter last,
                  const key_compare& comp,
                  const Alloc& a);
    template<class InputIter, class Alloc>
    flat_multiset(sorted_equivalent_t, InputIter first, InputIter last, const Alloc& a);
    template<class InputIter, class Alloc>
    flat_multiset(sorted_equivalent_t,
                  InputIter first,
                  InputIter last,
                  const key_compare& comp,
                  const Alloc& a);
    template<container-compatible-range<value_type> R, class Alloc>
    flat_multiset(from_range_t, R&& rg, const Alloc& a);
    template<container-compatible-range<value_type> R, class Alloc>
    flat_multiset(from_range_t, R&& rg, const key_compare& comp, const Alloc& a);
    template<class Alloc>
    flat_multiset(initializer_list<value_type> il, const Alloc& a);
    template<class Alloc>
    flat_multiset(initializer_list<value_type> il,
                  const key_compare& comp,
                  const Alloc& a);
    template<class Alloc>
    flat_multiset(sorted_equivalent_t, initializer_list<value_type> il, const Alloc& a);
    template<class Alloc>
    flat_multiset(sorted_equivalent_t,
                  initializer_list<value_type> il,
                  const key_compare& comp,
                  const Alloc& a);
 
    flat_multiset& operator=(initializer_list<value_type>);
 
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
    [[nodiscard]] bool empty() const noexcept;
    size_type size() const noexcept;
    size_type max_size() const noexcept;
 
    // modifiers
    template<class... Args>
    iterator emplace(Args&&... args);
    template<class... Args>
    iterator emplace_hint(const_iterator position, Args&&... args);
 
    iterator insert(const value_type& x) { return emplace(x); }
    iterator insert(value_type&& x) { return emplace(std::move(x)); }
    iterator insert(const_iterator position, const value_type& x)
    {
      return emplace_hint(position, x);
    }
    iterator insert(const_iterator position, value_type&& x)
    {
      return emplace_hint(position, std::move(x));
    }
 
    template<class InputIter>
    void insert(InputIter first, InputIter last);
    template<class InputIter>
    void insert(sorted_equivalent_t, InputIter first, InputIter last);
    template<container-compatible-range<value_type> R>
    void insert_range(R&& rg);
 
    void insert(initializer_list<value_type> il) { insert(il.begin(), il.end()); }
    void insert(sorted_equivalent_t s, initializer_list<value_type> il)
    {
      insert(s, il.begin(), il.end());
    }
 
    container_type extract() &&;
    void replace(container_type&&);
 
    iterator erase(iterator position);
    iterator erase(const_iterator position);
    size_type erase(const key_type& x);
    template<class K>
    size_type erase(K&& x);
    iterator erase(const_iterator first, const_iterator last);
 
    void swap(flat_multiset& y) noexcept;
    void clear() noexcept;
 
    // observers
    key_compare key_comp() const;
    value_compare value_comp() const;
 
    // set operations
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
 
    friend bool operator==(const flat_multiset& x, const flat_multiset& y);
 
    friend /*synth-three-way-result*/<value_type> operator<=>(const flat_multiset& x,
                                                              const flat_multiset& y);
 
    friend void swap(flat_multiset& x, flat_multiset& y) noexcept { x.swap(y); }
 
  private:
    container_type /*c*/;    // exposition only
    key_compare /*compare*/; // exposition only
  };
 
  template<class KeyContainer, class Compare = less<typename KeyContainer::value_type>>
  flat_multiset(KeyContainer, Compare = Compare())
    -> flat_multiset<typename KeyContainer::value_type, Compare, KeyContainer>;
  template<class KeyContainer, class Allocator>
  flat_multiset(KeyContainer, Allocator)
    -> flat_multiset<typename KeyContainer::value_type,
                     less<typename KeyContainer::value_type>,
                     KeyContainer>;
  template<class KeyContainer, class Compare, class Allocator>
  flat_multiset(KeyContainer, Compare, Allocator)
    -> flat_multiset<typename KeyContainer::value_type, Compare, KeyContainer>;
 
  template<class KeyContainer, class Compare = less<typename KeyContainer::value_type>>
  flat_multiset(sorted_equivalent_t, KeyContainer, Compare = Compare())
    -> flat_multiset<typename KeyContainer::value_type, Compare, KeyContainer>;
  template<class KeyContainer, class Allocator>
  flat_multiset(sorted_equivalent_t, KeyContainer, Allocator)
    -> flat_multiset<typename KeyContainer::value_type,
                     less<typename KeyContainer::value_type>,
                     KeyContainer>;
  template<class KeyContainer, class Compare, class Allocator>
  flat_multiset(sorted_equivalent_t, KeyContainer, Compare, Allocator)
    -> flat_multiset<typename KeyContainer::value_type, Compare, KeyContainer>;
 
  template<class InputIter, class Compare = less</*iter-value-type*/<InputIter>>>
  flat_multiset(InputIter, InputIter, Compare = Compare())
    -> flat_multiset</*iter-value-type*/<InputIter>, Compare>;
 
  template<class InputIter, class Compare = less</*iter-value-type*/<InputIter>>>
  flat_multiset(sorted_equivalent_t, InputIter, InputIter, Compare = Compare())
    -> flat_multiset</*iter-value-type*/<InputIter>, Compare>;
 
  template<ranges::input_range R,
           class Compare   = less<ranges::range_value_t<R>>,
           class Allocator = allocator<ranges::range_value_t<R>>>
  flat_multiset(from_range_t, R&&, Compare = Compare(), Allocator = Allocator())
    -> flat_multiset<ranges::range_value_t<R>,
                     Compare,
                     vector<ranges::range_value_t<R>,
                            /*alloc-rebind*/<Allocator, ranges::range_value_t<R>>>>;
 
  template<ranges::input_range R, class Allocator>
  flat_multiset(from_range_t, R&&, Allocator)
    -> flat_multiset<ranges::range_value_t<R>,
                     less<ranges::range_value_t<R>>,
                     vector<ranges::range_value_t<R>,
                            /*alloc-rebind*/<Allocator, ranges::range_value_t<R>>>>;
 
  template<class Key, class Compare = less<Key>>
  flat_multiset(initializer_list<Key>, Compare = Compare())
    -> flat_multiset<Key, Compare>;
 
  template<class Key, class Compare = less<Key>>
  flat_multiset(sorted_equivalent_t, initializer_list<Key>, Compare = Compare())
    -> flat_multiset<Key, Compare>;
 
  template<class Key, class Compare, class KeyContainer, class Allocator>
  struct uses_allocator<flat_multiset<Key, Compare, KeyContainer>, Allocator>
    : bool_constant<uses_allocator_v<KeyContainer, Allocator>>
  {};
}

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 24.6.5 Header `<flat_set>` synopsis [flat.set.syn]

:   - 24.6.11.2 Definition [flat.set.defn]

:   - 24.6.12.2 Definition [flat.multiset.defn]

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/flat_set&oldid=167045>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 December 2023, at 12:19.