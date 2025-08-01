# std::flat_multiset<Key,Compare,KeyContainer>::flat_multiset

From cppreference.com
< cpp‎ | container‎ | flat multiset
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

Containers library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Sequence | | | | |
| array(C++11) | | | | |
| vector | | | | |
| vector<bool> | | | | |
| inplace_vector(C++26) | | | | |
| deque | | | | |
| forward_list(C++11) | | | | |
| list | | | | |
| Associative | | | | |
| set | | | | |
| multiset | | | | |
| map | | | | |
| multimap | | | | |
| Unordered associative | | | | |
| unordered_set(C++11) | | | | |
| unordered_multiset(C++11) | | | | |
| unordered_map(C++11) | | | | |
| unordered_multimap(C++11) | | | | |
| Adaptors | | | | |
| stack | | | | |
| queue | | | | |
| priority_queue | | | | |
| flat_set(C++23) | | | | |
| flat_multiset(C++23) | | | | |
| flat_map(C++23) | | | | |
| flat_multimap(C++23) | | | | |
| Views | | | | |
| span(C++20) | | | | |
| mdspan(C++23) | | | | |
| Tables | | | | |
| Iterator invalidation | | | | |
| Member function table | | | | |
| Non-member function table | | | | |

std::flat_multiset

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****flat_multiset::flat_multiset**** | | | | | | flat_multiset::operator= | | | | | | Iterators | | | | | | flat_multiset::beginflat_multiset::cbegin | | | | | | flat_multiset::endflat_multiset::cend | | | | | | flat_multiset::rbeginflat_multiset::crbegin | | | | | | flat_multiset::rendflat_multiset::crend | | | | | | Capacity | | | | | | flat_multiset::size | | | | | | flat_multiset::max_size | | | | | | flat_multiset::empty | | | | | | Observers | | | | | | flat_multiset::key_comp | | | | | | flat_multiset::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | flat_multiset::clear | | | | | | flat_multiset::insert | | | | | | flat_multiset::insert_range | | | | | | flat_multiset::emplace | | | | | | flat_multiset::emplace_hint | | | | | | flat_multiset::erase | | | | | | flat_multiset::swap | | | | | | flat_multiset::extract | | | | | | flat_multiset::replace | | | | | | Lookup | | | | | | flat_multiset::count | | | | | | flat_multiset::find | | | | | | flat_multiset::contains | | | | | | flat_multiset::equal_range | | | | | | flat_multiset::lower_bound | | | | | | flat_multiset::upper_bound | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::flat_multiset) | | | | | | erase_if(std::flat_multiset) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=> | | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | uses_allocator<std::flat_multiset> | | | | | |
| Tags | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_equivalent | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_equivalent_t | | | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| flat_multiset()      : flat_multiset(key_compare()) { } | (1) | (since C++23) |
| template< class Allocator >  flat_multiset( const flat_multiset& other, const Allocator& alloc ); | (2) | (since C++23) |
| template< class Allocator >  flat_multiset( flat_multiset&& other, const Allocator& alloc ); | (3) | (since C++23) |
| explicit flat_multiset( container_type cont,                          const key_compare& comp = key_compare() ); | (4) | (since C++23) |
| template< class Allocator >  flat_multiset( const container_type& cont, const Allocator& alloc ); | (5) | (since C++23) |
| template< class Allocator >  flat_multiset( const container_type& cont, const key_compare& comp, const Allocator& alloc ); | (6) | (since C++23) |
| flat_multiset( std::sorted_equivalent_t s, container_type cont,  const key_compare& comp = key_compare() ) : c(std::move(cont)), compare(comp) { } | (7) | (since C++23) |
| template< class Allocator >  flat_multiset( std::sorted_equivalent_t s, const container_type& cont, const Allocator& alloc ); | (8) | (since C++23) |
| template< class Allocator >  flat_multiset( std::sorted_equivalent_t s, const container_type& cont, const key_compare& comp, const Allocator& alloc ); | (9) | (since C++23) |
| explicit flat_multiset( const key_compare& comp )      : c(), compare(comp) { } | (10) | (since C++23) |
| template< class Allocator >  flat_multiset( const key_compare& comp, const Allocator& alloc ); | (11) | (since C++23) |
| template< class Allocator >  explicit flat_multiset( const Allocator& alloc ); | (12) | (since C++23) |
| template< class InputIter >  flat_multiset( InputIter first, InputIter last,                 const key_compare& comp = key_compare() ) : c(), compare(comp); | (13) | (since C++23) |
| template< class InputIter, class Allocator >  flat_multiset( InputIter first, InputIter last, const key_compare& comp, const Allocator& alloc ); | (14) | (since C++23) |
| template< class InputIter, class Allocator >  flat_multiset( InputIter first, InputIter last, const Allocator& alloc ); | (15) | (since C++23) |
| template< container-compatible-range<value_type> R >  flat_multiset( std::from_range_t, R&& rg, const key_compare& comp ) : flat_multiset(comp); | (16) | (since C++23) |
| template< container-compatible-range<value_type> R >  flat_multiset( std::from_range_t fr, R&& rg ) : flat_multiset( fr, std::forward<R>(rg), key_compare() ) { } | (17) | (since C++23) |
| template< container-compatible-range<value_type> R, class Allocator >  flat_multiset( std::from_range_t, R&& rg, const Allocator& alloc ); | (18) | (since C++23) |
| template< container-compatible-range<value_type> R, class Allocator >  flat_multiset( std::from_range_t, R&& rg, const key_compare& comp, const Allocator& alloc ); | (19) | (since C++23) |
| template< class InputIter >  flat_multiset( std::sorted_equivalent_t s, InputIter first, InputIter last,                 const key_compare& comp = key_compare() ) : c(first, last), compare(comp) { } | (20) | (since C++23) |
| template< class InputIter, class Allocator >  flat_multiset( std::sorted_equivalent_t s, InputIter first, InputIter last, const key_compare& comp, const Allocator& alloc ); | (21) | (since C++23) |
| template< class InputIter, class Allocator >  flat_multiset( std::sorted_equivalent_t s, InputIter first, InputIter last, const Allocator& alloc ); | (22) | (since C++23) |
| flat_multiset( std::initializer_list<value_type> init,  const key_compare& comp = key_compare() ) : flat_multiset(init.begin(), init.end(), comp) { } | (23) | (since C++23) |
| template< class Allocator >  flat_multiset( std::initializer_list<value_type> init, const key_compare& comp, const Allocator& alloc ); | (24) | (since C++23) |
| template< class Allocator >  flat_multiset( std::initializer_list<value_type> init, const Allocator& alloc ); | (25) | (since C++23) |
| flat_multiset( std::sorted_equivalent_t s, std::initializer_list<value_type> init,  const key_compare& comp = key_compare() ) : flat_multiset(s, init.begin(), init.end(), comp) { } | (26) | (since C++23) |
| template< class Allocator >  flat_multiset( std::sorted_equivalent_t s, std::initializer_list<value_type> init, const key_compare& comp, const Allocator& alloc ); | (27) | (since C++23) |
| template< class Allocator >  flat_multiset( std::sorted_equivalent_t s, std::initializer_list<value_type> init, const Allocator& alloc ); | (28) | (since C++23) |
|  |  |  |

Constructs new container adaptor from a variety of data sources and optionally provided comparison function object comp and/or allocator alloc.

1) A default constructor. Constructs an empty container adaptor.2) A copy constructor. Constructs `c` with the copy of the contents of other.c and `compare` with other.compare.
See allocator usage note below.3) A move constructor. Constructs the container adaptor with the contents of other using move semantics.
See allocator usage note below.4) Constructs the underlying container with the contents of the container cont. First, initializes `c` with std::move(cont) and `compare` with comp. Then sorts the `c` with respect to `comp`.5) Same as (4), equivalent to flat_multiset(cont);.
See allocator usage note below.6) Same as (4), equivalent to flat_multiset(cont, comp);.
See allocator usage note below.7) Constructs the underlying container with the contents of the other container cont. Initializes `c` with std::move(cont) and `compare` with comp.8) Same as (7), equivalent to flat_multiset(s, cont);.
See allocator usage note below.9) Same as (7), equivalent to flat_multiset(s, cont, comp);.
See allocator usage note below.10) Constructs an empty container adaptor.11,12) Constructs an empty container adaptor.
See allocator usage note below.13) Constructs the container adaptor with the contents of the range ``first`,`last`)`, equivalent to insert(first, last);.14,15) Same as (13).
See [allocator usage note below.16) Constructs the container adaptor with the contents of the range rg. First, uses (10) as delegating constructor. Then initializes `c` with the contents of rg as if by insert_range(std::forward<R>(rg));.17) Same as (16) using it as delegating constructor.18,19) Same as (16).
See allocator usage note below.20) Constructs the underlying container with the contents of the range ``first`,`last`)`. Initializes [`c` with c(first, last) and `compare` with compare(comp).21,22) Same as (20).
See allocator usage note below.23) An initializer-list constructor. Constructs the underlying container with the contents of the initializer list init, using (13) as delegating constructor.24,25) Same as (23).
See allocator usage note below.26) An initializer-list constructor. Constructs the underlying container with the contents of the initializer list init, using (20) as delegating constructor.27,28) Save as (26).
See allocator usage note below.

Note for overloads (13-15,20-22): If ``first`,`last`)` is not a [valid range, the behavior is undefined.

##### Allocator usage note

The constructors (2,3,5,6,8,9,11,12,14,15,17,19,21,22,24,25,27,28) are equivalent to the corresponding non-allocator constructors except that `c` is constructed with uses-allocator construction.
These overloads participate in overload resolution only if std::uses_allocator_v<container_type, Allocator> is true.

### Parameters

|  |  |  |
| --- | --- | --- |
| cont | - | a container to be used as source to initialize the underlying container |
| other | - | another `flat_multiset` to be used as source to initialize the elements of the underlying container with |
| alloc | - | an allocator to use for all memory allocations of the underlying container |
| comp | - | a function object to be used for all comparisons of keys |
| first, last | - | a range to copy the elements from |
| init | - | an initializer list to initialize the elements of the underlying container with |
| rg | - | a container compatible range (that is, an `input_range` whose elements are convertible to `value_type`) to be used as source to initialize the underlying container |
| fr | - | a disambiguation tag that indicates that the contained member should be range constructed |
| s | - | a disambiguation tag that indicates that the input sequence is sorted with respect to `compare` |
| Type requirements | | |
| -`InputIt` must meet the requirements of LegacyInputIterator. | | |
| -`Compare` must meet the requirements of Compare. | | |
| -`Allocator` must meet the requirements of Allocator. | | |

### Complexity

1) Constant.2) Linear in size of other.3) Same as the corresponding move-constructor of the wrapped container, i.e. constant or linear in size of cont.4-6) Linear in \(\scriptsize N\)N if cont is sorted with respect to compare, otherwise \(\scriptsize \mathcal{O}(N\cdot\log{(N)})\)𝓞(N·log(N)), where \(\scriptsize N\)N is the value of cont.size() before this call.7-9) Same as the corresponding move-constructor of the wrapped container, i.e. constant or linear in size of cont.10-12) Constant.13-15) Linear in \(\scriptsize N\)N if the input range `[`first`,`last`)` is sorted with respect to compare, otherwise \(\scriptsize \mathcal{O}(N\cdot\log{(N)})\)𝓞(N·log(N)), where \(\scriptsize N\)N is the value of cont.size() before this call.16-19) Linear in \(\scriptsize N\)N if the input range rg is sorted with respect to compare, otherwise \(\scriptsize \mathcal{O}(N\cdot\log{(N)})\)𝓞(N·log(N)), where \(\scriptsize N\)N is the value of cont.size() before this call.20-22) Linear in size of `[`first`,`last`)`.23-25) Linear in \(\scriptsize N\)N if the elements of init are sorted with respect to compare, otherwise \(\scriptsize \mathcal{O}(N\cdot\log{(N)})\)𝓞(N·log(N)), where \(\scriptsize N\)N is the value of cont.size() before this call.26-28) Linear in size of init.

### Exceptions

Calls to `Allocator::allocate` may throw.

### Notes

After container move construction (overload (3,16-19)), references, pointers, and iterators (other than the end iterator) to `other` remain valid, but refer to elements that are now in \*this. The current standard makes this guarantee via the blanket statement in [[container.reqmts]/67](https://eel.is/c++draft/container.reqmts#67), and a more direct guarantee is under consideration via LWG issue 2321.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| operator= | assigns values to the container adaptor   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_multiset/flat_multiset&oldid=171781>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 May 2024, at 15:10.