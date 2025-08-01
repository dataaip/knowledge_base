# Standard library header <unordered_set> (C++11)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | ****<unordered_set>**** (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the containers library.

|  |  |
| --- | --- |
| Includes | |
| <compare>(C++20) | Three-way comparison operator support |
| <initializer_list>(C++11) | std::initializer_list class template |
| Classes | |
| unordered_set(C++11) | collection of unique keys, hashed by keys   (class template) |
| unordered_multiset(C++11) | collection of keys, hashed by keys   (class template) |
| Functions | |
| operator==operator!=(C++11)(C++11)(removed in C++20) | compares the values in the unordered_set   (function template) |
| std::swap(std::unordered_set)(C++11) | specializes the std::swap algorithm   (function template) |
| erase_if(std::unordered_set)(C++20) | erases all elements satisfying specific criteria   (function template) |
| operator==operator!=(C++11)(C++11)(removed in C++20) | compares the values in the unordered_multiset   (function template) |
| std::swap(std::unordered_multiset)(C++11) | specializes the std::swap algorithm   (function template) |
| erase_if(std::unordered_multiset)(C++20) | erases all elements satisfying specific criteria   (function template) |
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
  // class template unordered_set
  template<class Key,
           class Hash  = hash<Key>,
           class Pred  = equal_to<Key>,
           class Alloc = allocator<Key>>
  class unordered_set;
 
  // class template unordered_multiset
  template<class Key,
           class Hash  = hash<Key>,
           class Pred  = equal_to<Key>,
           class Alloc = allocator<Key>>
  class unordered_multiset;
 
  template<class Key, class Hash, class Pred, class Alloc>
  bool operator==(const unordered_set<Key, Hash, Pred, Alloc>& a,
                  const unordered_set<Key, Hash, Pred, Alloc>& b);
 
  template<class Key, class Hash, class Pred, class Alloc>
  bool operator==(const unordered_multiset<Key, Hash, Pred, Alloc>& a,
                  const unordered_multiset<Key, Hash, Pred, Alloc>& b);
 
  template<class Key, class Hash, class Pred, class Alloc>
  void swap(unordered_set<Key, Hash, Pred, Alloc>& x,
            unordered_set<Key, Hash, Pred, Alloc>& y) noexcept(noexcept(x.swap(y)));
 
  template<class Key, class Hash, class Pred, class Alloc>
  void swap(unordered_multiset<Key, Hash, Pred, Alloc>& x,
            unordered_multiset<Key, Hash, Pred, Alloc>& y) noexcept(noexcept(x.swap(y)));
 
  // erasure for unordered_set
  template<class K, class H, class P, class A, class Predicate>
  typename unordered_set<K, H, P, A>::size_type erase_if(unordered_set<K, H, P, A>& c,
                                                         Predicate pred);
 
  // erasure for unordered_multiset
  template<class K, class H, class P, class A, class Predicate>
  typename unordered_multiset<K, H, P, A>::size_type erase_if(
    unordered_multiset<K, H, P, A>& c,
    Predicate pred);
 
  namespace pmr {
    template<class Key, class Hash = hash<Key>, class Pred = equal_to<Key>>
    using unordered_set = std::unordered_set<Key, Hash, Pred, polymorphic_allocator<Key>>;
 
    template<class Key, class Hash = hash<Key>, class Pred = equal_to<Key>>
    using unordered_multiset =
      std::unordered_multiset<Key, Hash, Pred, polymorphic_allocator<Key>>;
  }
}

```

#### Class template std::unordered_set

```
namespace std {
  template<class Key,
           class Hash      = hash<Key>,
           class Pred      = equal_to<Key>,
           class Allocator = allocator<Key>>
  class unordered_set
  {
  public:
    // types
    using key_type             = Key;
    using value_type           = Key;
    using hasher               = Hash;
    using key_equal            = Pred;
    using allocator_type       = Allocator;
    using pointer              = typename allocator_traits<Allocator>::pointer;
    using const_pointer        = typename allocator_traits<Allocator>::const_pointer;
    using reference            = value_type&;
    using const_reference      = const value_type&;
    using size_type            = /* implementation-defined */;
    using difference_type      = /* implementation-defined */;
 
    using iterator             = /* implementation-defined */;
    using const_iterator       = /* implementation-defined */;
    using local_iterator       = /* implementation-defined */;
    using const_local_iterator = /* implementation-defined */;
    using node_type            = /* unspecified */;
    using insert_return_type   = /*insert-return-type*/<iterator, node_type>;
 
    // construct/copy/destroy
    unordered_set();
    explicit unordered_set(size_type n,
                           const hasher& hf        = hasher(),
                           const key_equal& eql    = key_equal(),
                           const allocator_type& a = allocator_type());
    template<class InputIter>
    unordered_set(InputIter f,
                  InputIter l,
                  size_type n             = /* see description */,
                  const hasher& hf        = hasher(),
                  const key_equal& eql    = key_equal(),
                  const allocator_type& a = allocator_type());
    template<container-compatible-range<value_type> R>
    unordered_set(from_range_t,
                  R&& rg,
                  size_type n             = /* see description */,
                  const hasher& hf        = hasher(),
                  const key_equal& eql    = key_equal(),
                  const allocator_type& a = allocator_type());
    unordered_set(const unordered_set&);
    unordered_set(unordered_set&&);
    explicit unordered_set(const Allocator&);
    unordered_set(const unordered_set&, const type_identity_t<Allocator>&);
    unordered_set(unordered_set&&, const type_identity_t<Allocator>&);
    unordered_set(initializer_list<value_type> il,
                  size_type n             = /* see description */,
                  const hasher& hf        = hasher(),
                  const key_equal& eql    = key_equal(),
                  const allocator_type& a = allocator_type());
    unordered_set(size_type n, const allocator_type& a)
      : unordered_set(n, hasher(), key_equal(), a)
    {
    }
    unordered_set(size_type n, const hasher& hf, const allocator_type& a)
      : unordered_set(n, hf, key_equal(), a)
    {
    }
    template<class InputIter>
    unordered_set(InputIter f, InputIter l, size_type n, const allocator_type& a)
      : unordered_set(f, l, n, hasher(), key_equal(), a)
    {
    }
    template<class InputIter>
    unordered_set(InputIter f,
                  InputIter l,
                  size_type n,
                  const hasher& hf,
                  const allocator_type& a)
      : unordered_set(f, l, n, hf, key_equal(), a)
    {
    }
    unordered_set(initializer_list<value_type> il, size_type n, const allocator_type& a)
      : unordered_set(il, n, hasher(), key_equal(), a)
    {
    }
    template<container-compatible-range<value_type> R>
    unordered_set(from_range_t, R&& rg, size_type n, const allocator_type& a)
      : unordered_set(from_range, std::forward<R>(rg), n, hasher(), key_equal(), a)
    {
    }
    template<container-compatible-range<value_type> R>
    unordered_set(from_range_t,
                  R&& rg,
                  size_type n,
                  const hasher& hf,
                  const allocator_type& a)
      : unordered_set(from_range, std::forward<R>(rg), n, hf, key_equal(), a)
    {
    }
    unordered_set(initializer_list<value_type> il,
                  size_type n,
                  const hasher& hf,
                  const allocator_type& a)
      : unordered_set(il, n, hf, key_equal(), a)
    {
    }
    ~unordered_set();
    unordered_set& operator=(const unordered_set&);
    unordered_set& operator=(unordered_set&&) noexcept(
      allocator_traits<Allocator>::is_always_equal::value&&
        is_nothrow_move_assignable_v<Hash>&& is_nothrow_move_assignable_v<Pred>);
    unordered_set& operator=(initializer_list<value_type>);
    allocator_type get_allocator() const noexcept;
 
    // iterators
    iterator begin() noexcept;
    const_iterator begin() const noexcept;
    iterator end() noexcept;
    const_iterator end() const noexcept;
    const_iterator cbegin() const noexcept;
    const_iterator cend() const noexcept;
 
    // capacity
    bool empty() const noexcept;
    size_type size() const noexcept;
    size_type max_size() const noexcept;
 
    // modifiers
    template<class... Args>
    pair<iterator, bool> emplace(Args&&... args);
    template<class... Args>
    iterator emplace_hint(const_iterator position, Args&&... args);
    pair<iterator, bool> insert(const value_type& obj);
    pair<iterator, bool> insert(value_type&& obj);
    template<class K>
    pair<iterator, bool> insert(K&& obj);
    iterator insert(const_iterator hint, const value_type& obj);
    iterator insert(const_iterator hint, value_type&& obj);
    template<class K>
    iterator insert(const_iterator hint, K&& obj);
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
 
    iterator erase(iterator position)
      requires(!same_as<iterator, const_iterator>);
    iterator erase(const_iterator position);
    size_type erase(const key_type& k);
    template<class K>
    size_type erase(K&& x);
    iterator erase(const_iterator first, const_iterator last);
    void swap(unordered_set&) noexcept(
      allocator_traits<Allocator>::is_always_equal::value&& is_nothrow_swappable_v<Hash>&&
        is_nothrow_swappable_v<Pred>);
    void clear() noexcept;
 
    template<class H2, class P2>
    void merge(unordered_set<Key, H2, P2, Allocator>& source);
    template<class H2, class P2>
    void merge(unordered_set<Key, H2, P2, Allocator>&& source);
    template<class H2, class P2>
    void merge(unordered_multiset<Key, H2, P2, Allocator>& source);
    template<class H2, class P2>
    void merge(unordered_multiset<Key, H2, P2, Allocator>&& source);
 
    // observers
    hasher hash_function() const;
    key_equal key_eq() const;
 
    // set operations
    iterator find(const key_type& k);
    const_iterator find(const key_type& k) const;
    template<class K>
    iterator find(const K& k);
    template<class K>
    const_iterator find(const K& k) const;
    size_type count(const key_type& k) const;
    template<class K>
    size_type count(const K& k) const;
    bool contains(const key_type& k) const;
    template<class K>
    bool contains(const K& k) const;
    pair<iterator, iterator> equal_range(const key_type& k);
    pair<const_iterator, const_iterator> equal_range(const key_type& k) const;
    template<class K>
    pair<iterator, iterator> equal_range(const K& k);
    template<class K>
    pair<const_iterator, const_iterator> equal_range(const K& k) const;
 
    // bucket interface
    size_type bucket_count() const noexcept;
    size_type max_bucket_count() const noexcept;
    size_type bucket_size(size_type n) const;
    size_type bucket(const key_type& k) const;
    template<class K>
    size_type bucket(const K& k) const;
    local_iterator begin(size_type n);
    const_local_iterator begin(size_type n) const;
    local_iterator end(size_type n);
    const_local_iterator end(size_type n) const;
    const_local_iterator cbegin(size_type n) const;
    const_local_iterator cend(size_type n) const;
 
    // hash policy
    float load_factor() const noexcept;
    float max_load_factor() const noexcept;
    void max_load_factor(float z);
    void rehash(size_type n);
    void reserve(size_type n);
  };
 
  template<class InputIter,
           class Hash      = hash</*iter-value-type*/<InputIter>>,
           class Pred      = equal_to</*iter-value-type*/<InputIter>>,
           class Allocator = allocator</*iter-value-type*/<InputIter>>>
  unordered_set(InputIter,
                InputIter,
                typename /* see description */ ::size_type = /* see description */,
                Hash                                       = Hash(),
                Pred                                       = Pred(),
                Allocator                                  = Allocator())
    -> unordered_set</*iter-value-type*/<InputIter>, Hash, Pred, Allocator>;
 
  template<ranges::input_range R,
           class Hash      = hash<ranges::range_value_t<R>>,
           class Pred      = equal_to<ranges::range_value_t<R>>,
           class Allocator = allocator<ranges::range_value_t<R>>>
  unordered_set(from_range_t,
                R&&,
                typename /* see description */ ::size_type = /* see description */,
                Hash                                       = Hash(),
                Pred                                       = Pred(),
                Allocator                                  = Allocator())
    -> unordered_set<ranges::range_value_t<R>, Hash, Pred, Allocator>;
 
  template<class T,
           class Hash      = hash<T>,
           class Pred      = equal_to<T>,
           class Allocator = allocator<T>>
  unordered_set(initializer_list<T>,
                typename /* see description */ ::size_type = /* see description */,
                Hash                                       = Hash(),
                Pred                                       = Pred(),
                Allocator = Allocator()) -> unordered_set<T, Hash, Pred, Allocator>;
 
  template<class InputIter, class Allocator>
  unordered_set(InputIter,
                InputIter,
                typename /* see description */ ::size_type,
                Allocator) -> unordered_set</*iter-value-type*/<InputIter>,
                                            hash</*iter-value-type*/<InputIter>>,
                                            equal_to</*iter-value-type*/<InputIter>>,
                                            Allocator>;
 
  template<class InputIter, class Hash, class Allocator>
  unordered_set(InputIter,
                InputIter,
                typename /* see description */ ::size_type,
                Hash,
                Allocator) -> unordered_set</*iter-value-type*/<InputIter>,
                                            Hash,
                                            equal_to</*iter-value-type*/<InputIter>>,
                                            Allocator>;
 
  template<ranges::input_range R, class Allocator>
  unordered_set(from_range_t, R&&, typename /* see description */ ::size_type, Allocator)
    -> unordered_set<ranges::range_value_t<R>,
                     hash<ranges::range_value_t<R>>,
                     equal_to<ranges::range_value_t<R>>,
                     Allocator>;
 
  template<ranges::input_range R, class Allocator>
  unordered_set(from_range_t, R&&, Allocator)
    -> unordered_set<ranges::range_value_t<R>,
                     hash<ranges::range_value_t<R>>,
                     equal_to<ranges::range_value_t<R>>,
                     Allocator>;
 
  template<ranges::input_range R, class Hash, class Allocator>
  unordered_set(from_range_t,
                R&&,
                typename /* see description */ ::size_type,
                Hash,
                Allocator) -> unordered_set<ranges::range_value_t<R>,
                                            Hash,
                                            equal_to<ranges::range_value_t<R>>,
                                            Allocator>;
 
  template<class T, class Allocator>
  unordered_set(initializer_list<T>,
                typename /* see description */ ::size_type,
                Allocator) -> unordered_set<T, hash<T>, equal_to<T>, Allocator>;
 
  template<class T, class Hash, class Allocator>
  unordered_set(initializer_list<T>,
                typename /* see description */ ::size_type,
                Hash,
                Allocator) -> unordered_set<T, Hash, equal_to<T>, Allocator>;
}

```

#### Class template std::unordered_multiset

```
namespace std {
  template<class Key,
           class Hash      = hash<Key>,
           class Pred      = equal_to<Key>,
           class Allocator = allocator<Key>>
  class unordered_multiset
  {
  public:
    // types
    using key_type             = Key;
    using value_type           = Key;
    using hasher               = Hash;
    using key_equal            = Pred;
    using allocator_type       = Allocator;
    using pointer              = typename allocator_traits<Allocator>::pointer;
    using const_pointer        = typename allocator_traits<Allocator>::const_pointer;
    using reference            = value_type&;
    using const_reference      = const value_type&;
    using size_type            = /* implementation-defined */;
    using difference_type      = /* implementation-defined */;
 
    using iterator             = /* implementation-defined */;
    using const_iterator       = /* implementation-defined */;
    using local_iterator       = /* implementation-defined */;
    using const_local_iterator = /* implementation-defined */;
    using node_type            = /* unspecified */;
 
    // construct/copy/destroy
    unordered_multiset();
    explicit unordered_multiset(size_type n,
                                const hasher& hf        = hasher(),
                                const key_equal& eql    = key_equal(),
                                const allocator_type& a = allocator_type());
    template<class InputIter>
    unordered_multiset(InputIter f,
                       InputIter l,
                       size_type n             = /* see description */,
                       const hasher& hf        = hasher(),
                       const key_equal& eql    = key_equal(),
                       const allocator_type& a = allocator_type());
    template<container-compatible-range<value_type> R>
    unordered_multiset(from_range_t,
                       R&& rg,
                       size_type n             = /* see description */,
                       const hasher& hf        = hasher(),
                       const key_equal& eql    = key_equal(),
                       const allocator_type& a = allocator_type());
    unordered_multiset(const unordered_multiset&);
    unordered_multiset(unordered_multiset&&);
    explicit unordered_multiset(const Allocator&);
    unordered_multiset(const unordered_multiset&, const type_identity_t<Allocator>&);
    unordered_multiset(unordered_multiset&&, const type_identity_t<Allocator>&);
    unordered_multiset(initializer_list<value_type> il,
                       size_type n             = /* see description */,
                       const hasher& hf        = hasher(),
                       const key_equal& eql    = key_equal(),
                       const allocator_type& a = allocator_type());
    unordered_multiset(size_type n, const allocator_type& a)
      : unordered_multiset(n, hasher(), key_equal(), a)
    {
    }
    unordered_multiset(size_type n, const hasher& hf, const allocator_type& a)
      : unordered_multiset(n, hf, key_equal(), a)
    {
    }
    template<class InputIter>
    unordered_multiset(InputIter f, InputIter l, size_type n, const allocator_type& a)
      : unordered_multiset(f, l, n, hasher(), key_equal(), a)
    {
    }
    template<class InputIter>
    unordered_multiset(InputIter f,
                       InputIter l,
                       size_type n,
                       const hasher& hf,
                       const allocator_type& a)
      : unordered_multiset(f, l, n, hf, key_equal(), a)
    {
    }
    template<container-compatible-range<value_type> R>
    unordered_multiset(from_range_t, R&& rg, size_type n, const allocator_type& a)
      : unordered_multiset(from_range, std::forward<R>(rg), n, hasher(), key_equal(), a)
    {
    }
    template<container-compatible-range<value_type> R>
    unordered_multiset(from_range_t,
                       R&& rg,
                       size_type n,
                       const hasher& hf,
                       const allocator_type& a)
      : unordered_multiset(from_range, std::forward<R>(rg), n, hf, key_equal(), a)
    {
    }
    unordered_multiset(initializer_list<value_type> il,
                       size_type n,
                       const allocator_type& a)
      : unordered_multiset(il, n, hasher(), key_equal(), a)
    {
    }
    unordered_multiset(initializer_list<value_type> il,
                       size_type n,
                       const hasher& hf,
                       const allocator_type& a)
      : unordered_multiset(il, n, hf, key_equal(), a)
    {
    }
    ~unordered_multiset();
    unordered_multiset& operator=(const unordered_multiset&);
    unordered_multiset& operator=(unordered_multiset&&) noexcept(
      allocator_traits<Allocator>::is_always_equal::value&&
        is_nothrow_move_assignable_v<Hash>&& is_nothrow_move_assignable_v<Pred>);
    unordered_multiset& operator=(initializer_list<value_type>);
    allocator_type get_allocator() const noexcept;
 
    // iterators
    iterator begin() noexcept;
    const_iterator begin() const noexcept;
    iterator end() noexcept;
    const_iterator end() const noexcept;
    const_iterator cbegin() const noexcept;
    const_iterator cend() const noexcept;
 
    // capacity
    bool empty() const noexcept;
    size_type size() const noexcept;
    size_type max_size() const noexcept;
 
    // modifiers
    template<class... Args>
    iterator emplace(Args&&... args);
    template<class... Args>
    iterator emplace_hint(const_iterator position, Args&&... args);
    iterator insert(const value_type& obj);
    iterator insert(value_type&& obj);
    iterator insert(const_iterator hint, const value_type& obj);
    iterator insert(const_iterator hint, value_type&& obj);
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
 
    iterator erase(iterator position)
      requires(!same_as<iterator, const_iterator>);
    iterator erase(const_iterator position);
    size_type erase(const key_type& k);
    template<class K>
    size_type erase(K&& x);
    iterator erase(const_iterator first, const_iterator last);
    void swap(unordered_multiset&) noexcept(
      allocator_traits<Allocator>::is_always_equal::value&& is_nothrow_swappable_v<Hash>&&
        is_nothrow_swappable_v<Pred>);
    void clear() noexcept;
 
    template<class H2, class P2>
    void merge(unordered_multiset<Key, H2, P2, Allocator>& source);
    template<class H2, class P2>
    void merge(unordered_multiset<Key, H2, P2, Allocator>&& source);
    template<class H2, class P2>
    void merge(unordered_set<Key, H2, P2, Allocator>& source);
    template<class H2, class P2>
    void merge(unordered_set<Key, H2, P2, Allocator>&& source);
 
    // observers
    hasher hash_function() const;
    key_equal key_eq() const;
 
    // set operations
    iterator find(const key_type& k);
    const_iterator find(const key_type& k) const;
    template<class K>
    iterator find(const K& k);
    template<class K>
    const_iterator find(const K& k) const;
    size_type count(const key_type& k) const;
    template<class K>
    size_type count(const K& k) const;
    bool contains(const key_type& k) const;
    template<class K>
    bool contains(const K& k) const;
    pair<iterator, iterator> equal_range(const key_type& k);
    pair<const_iterator, const_iterator> equal_range(const key_type& k) const;
    template<class K>
    pair<iterator, iterator> equal_range(const K& k);
    template<class K>
    pair<const_iterator, const_iterator> equal_range(const K& k) const;
 
    // bucket interface
    size_type bucket_count() const noexcept;
    size_type max_bucket_count() const noexcept;
    size_type bucket_size(size_type n) const;
    size_type bucket(const key_type& k) const;
    template<class K>
    size_type bucket(const K& k) const;
    local_iterator begin(size_type n);
    const_local_iterator begin(size_type n) const;
    local_iterator end(size_type n);
    const_local_iterator end(size_type n) const;
    const_local_iterator cbegin(size_type n) const;
    const_local_iterator cend(size_type n) const;
 
    // hash policy
    float load_factor() const noexcept;
    float max_load_factor() const noexcept;
    void max_load_factor(float z);
    void rehash(size_type n);
    void reserve(size_type n);
  };
 
  template<class InputIter,
           class Hash      = hash</*iter-value-type*/<InputIter>>,
           class Pred      = equal_to</*iter-value-type*/<InputIter>>,
           class Allocator = allocator</*iter-value-type*/<InputIter>>>
  unordered_multiset(InputIter,
                     InputIter,
                     /* see description */ ::size_type = /* see description */,
                     Hash                              = Hash(),
                     Pred                              = Pred(),
                     Allocator                         = Allocator())
    -> unordered_multiset</*iter-value-type*/<InputIter>, Hash, Pred, Allocator>;
 
  template<ranges::input_range R,
           class Hash      = hash<ranges::range_value_t<R>>,
           class Pred      = equal_to<ranges::range_value_t<R>>,
           class Allocator = allocator<ranges::range_value_t<R>>>
  unordered_multiset(from_range_t,
                     R&&,
                     typename /* see description */ ::size_type = /* see description */,
                     Hash                                       = Hash(),
                     Pred                                       = Pred(),
                     Allocator                                  = Allocator())
    -> unordered_multiset<ranges::range_value_t<R>, Hash, Pred, Allocator>;
 
  template<class T,
           class Hash      = hash<T>,
           class Pred      = equal_to<T>,
           class Allocator = allocator<T>>
  unordered_multiset(initializer_list<T>,
                     typename /* see description */ ::size_type = /* see description */,
                     Hash                                       = Hash(),
                     Pred                                       = Pred(),
                     Allocator                                  = Allocator())
    -> unordered_multiset<T, Hash, Pred, Allocator>;
 
  template<class InputIter, class Allocator>
  unordered_multiset(InputIter,
                     InputIter,
                     typename /* see description */ ::size_type,
                     Allocator)
    -> unordered_multiset</*iter-value-type*/<InputIter>,
                          hash</*iter-value-type*/<InputIter>>,
                          equal_to</*iter-value-type*/<InputIter>>,
                          Allocator>;
 
  template<class InputIter, class Hash, class Allocator>
  unordered_multiset(InputIter,
                     InputIter,
                     typename /* see description */ ::size_type,
                     Hash,
                     Allocator)
    -> unordered_multiset</*iter-value-type*/<InputIter>,
                          Hash,
                          equal_to</*iter-value-type*/<InputIter>>,
                          Allocator>;
 
  template<ranges::input_range R, class Allocator>
  unordered_multiset(from_range_t,
                     R&&,
                     typename /* see description */ ::size_type,
                     Allocator) -> unordered_multiset<ranges::range_value_t<R>,
                                                      hash<ranges::range_value_t<R>>,
                                                      equal_to<ranges::range_value_t<R>>,
                                                      Allocator>;
 
  template<ranges::input_range R, class Allocator>
  unordered_multiset(from_range_t, R&&, Allocator)
    -> unordered_multiset<ranges::range_value_t<R>,
                          hash<ranges::range_value_t<R>>,
                          equal_to<ranges::range_value_t<R>>,
                          Allocator>;
 
  template<ranges::input_range R, class Hash, class Allocator>
  unordered_multiset(from_range_t,
                     R&&,
                     typename /* see description */ ::size_type,
                     Hash,
                     Allocator) -> unordered_multiset<ranges::range_value_t<R>,
                                                      Hash,
                                                      equal_to<ranges::range_value_t<R>>,
                                                      Allocator>;
 
  template<class T, class Allocator>
  unordered_multiset(initializer_list<T>,
                     typename /* see description */ ::size_type,
                     Allocator) -> unordered_multiset<T, hash<T>, equal_to<T>, Allocator>;
 
  template<class T, class Hash, class Allocator>
  unordered_multiset(initializer_list<T>,
                     typename /* see description */ ::size_type,
                     Hash,
                     Allocator) -> unordered_multiset<T, Hash, equal_to<T>, Allocator>;
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/unordered_set&oldid=163957>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 07:05.