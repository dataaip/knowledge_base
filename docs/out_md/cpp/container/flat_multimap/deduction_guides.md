# deduction guides for `std::flat_multimap`

From cppreference.com
< cpp‎ | container‎ | flat multimap
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

std::flat_multimap

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | flat_multimap::flat_multimap | | | | | | flat_multimap::operator= | | | | | | Modifiers | | | | | | flat_multimap::clear | | | | | | flat_multimap::erase | | | | | | flat_multimap::swap | | | | | | flat_multimap::extract | | | | | | flat_multimap::replace | | | | | | flat_multimap::insert | | | | | | flat_multimap::insert_range | | | | | | flat_multimap::emplace | | | | | | flat_multimap::emplace_hint | | | | | | Lookup | | | | | | flat_multimap::count | | | | | | flat_multimap::find | | | | | | flat_multimap::contains | | | | | | flat_multimap::equal_range | | | | | | flat_multimap::lower_bound | | | | | | flat_multimap::upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterators | | | | | | flat_multimap::beginflat_multimap::cbegin | | | | | | flat_multimap::endflat_multimap::cend | | | | | | flat_multimap::rbeginflat_multimap::crbegin | | | | | | flat_multimap::rendflat_multimap::crend | | | | | | Capacity | | | | | | flat_multimap::size | | | | | | flat_multimap::max_size | | | | | | flat_multimap::empty | | | | | | Observers | | | | | | flat_multimap::key_comp | | | | | | flat_multimap::keys | | | | | | flat_multimap::value_comp | | | | | | flat_multimap::values | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::flat_multimap) | | | | | | erase_if(std::flat_multimap) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=> | | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uses_allocator<std::flat_multimap> | | | | | | |
| Tags | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_equivalent | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_equivalent_t | | | | | | |
| ****Deduction guides**** | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<flat_map>` |  |  |
| template< class KeyContainer, class MappedContainer,  class Compare = std::less<typename KeyContainer::value_type> >  flat_multimap( KeyContainer, MappedContainer, Compare = Compare() )      -> flat_multimap<typename KeyContainer::value_type,                       typename MappedContainer::value_type,                      Compare, KeyContainer, MappedContainer>; | (1) | (since C++23) |
| template< class KeyContainer, class MappedContainer, class Allocator >  flat_multimap( KeyContainer, MappedContainer, Allocator )      -> flat_multimap<typename KeyContainer::value_type,                       typename MappedContainer::value_type,                       std::less<typename KeyContainer::value_type>,                      KeyContainer, MappedContainer>; | (2) | (since C++23) |
| template< class KeyContainer, class MappedContainer,  class Compare, class Allocator >  flat_multimap( KeyContainer, MappedContainer, Compare, Allocator )      -> flat_multimap<typename KeyContainer::value_type,                       typename MappedContainer::value_type,                      Compare, KeyContainer, MappedContainer>; | (3) | (since C++23) |
| template< class KeyContainer, class MappedContainer,  class Compare = std::less<typename KeyContainer::value_type> >  flat_multimap( std::sorted_equivalent_t, KeyContainer, MappedContainer,                 Compare = Compare() )      -> flat_multimap<typename KeyContainer::value_type,                       typename MappedContainer::value_type,                      Compare, KeyContainer, MappedContainer>; | (4) | (since C++23) |
| template< class KeyContainer, class MappedContainer, class Allocator >  flat_multimap( std::sorted_equivalent_t, KeyContainer, MappedContainer,                 Allocator )      -> flat_multimap<typename KeyContainer::value_type,                       typename MappedContainer::value_type,                       std::less<typename KeyContainer::value_type>,                      KeyContainer, MappedContainer>; | (5) | (since C++23) |
| template< class KeyContainer, class MappedContainer,  class Compare, class Allocator>  flat_multimap( std::sorted_equivalent_t, KeyContainer, MappedContainer,                 Compare, Allocator )      -> flat_multimap<typename KeyContainer::value_type,                       typename MappedContainer::value_type,                      Compare, KeyContainer, MappedContainer>; | (6) | (since C++23) |
| template< class InputIter,  class Compare = std::less</\*iter-key-type\*/<InputIter>> >  flat_multimap( InputIter, InputIter, Compare = Compare() )      -> flat_multimap</\*iter-key-type\*/<InputIter>, /\*iter-mapped-type\*/<InputIter>, Compare>; | (7) | (since C++23) |
| template< class InputIter,  class Compare = std::less</\*iter-key-type\*/<InputIter>> >  flat_multimap( std::sorted_equivalent_t, InputIter, InputIter,                 Compare = Compare() )      -> flat_multimap</\*iter-key-type\*/<InputIter>, /\*iter-mapped-type\*/<InputIter>, Compare>; | (8) | (since C++23) |
| template< ranges::input_range R,  class Compare = std::less</\*range-key-type\*/<R>>,            class Allocator = allocator<byte> >  flat_multimap( std::from_range_t, R&&, Compare = Compare(),                 Allocator = Allocator() )      -> flat_multimap</\*range-key-type\*/<R>, /\*range-mapped-type\*/<R>, Compare,                       std::vector</\*range-key-type\*/<R>,                                   /\*alloc-rebind\*/<Allocator,                                                    /\*range-key-type\*/<R>>>,                       std::vector</\*range-mapped-type\*/<R>,                                   /\*alloc-rebind\*/<Allocator, /\*range-mapped-type\*/<R>>>>; | (9) | (since C++23) |
| template< ranges::input_range R, class Allocator >  flat_multimap( std::from_range_t, R&&, Allocator )      -> flat_multimap</\*range-key-type\*/<R>, /\*range-mapped-type\*/<R>,                       std::less</\*range-key-type\*/<R>>,                       std::vector</\*range-key-type\*/<R>,                                   /\*alloc-rebind\*/<Allocator,                                                    /\*range-key-type\*/<R>>>,                       std::vector</\*range-mapped-type\*/<R>,                                   /\*alloc-rebind\*/<Allocator, /\*range-mapped-type\*/<R>>>>; | (10) | (since C++23) |
| template< class Key, class T, class Compare = std::less<Key> >  flat_multimap( std::initializer_list<pair<Key, T>>, Compare = Compare() ) -> flat_multimap<Key, T, Compare>; | (11) | (since C++23) |
| template< class Key, class T, class Compare = std::less<Key> >  flat_multimap( std::sorted_equivalent_t, std::initializer_list<pair<Key, T>>,                 Compare = Compare() ) -> flat_multimap<Key, T, Compare>; | (12) | (since C++23) |
|  |  |  |

These deduction guides are provided for  to allow deduction from:

1) A key-container, a mapped-container and a comparator.2) A key-container, a mapped-container and an allocator.3) A key-container, a mapped-container, a comparator and an allocator.4) The std::sorted_equivalent_t tag, a key-container, a mapped-container and a comparator.5) The std::sorted_equivalent_t tag, a key-container, a mapped-container and an allocator.6) The std::sorted_equivalent_t tag, a key-container, a mapped-container, a comparator and an allocator.7) An iterator range and a comparator.8) The std::sorted_equivalent_t tag, an iterator range and a comparator.9) The std::from_range_t tag, an `input_range` range, a comparator and an allocator.10) The std::from_range_t tag, an `input_range` range and an allocator.11) The std::initializer_list and a comparator.12) The std::sorted_equivalent_t tag, the std::initializer_list and a comparator.

These overloads participate in overload resolution only if `InputIt` satisfies LegacyInputIterator, `Alloc` satisfies Allocator, and `Comp` does not satisfy Allocator.

Note: the extent to which the library determines that a type does not satisfy LegacyInputIterator is unspecified, except that as a minimum integral types do not qualify as input iterators. Likewise, the extent to which it determines that a type does not satisfy Allocator is unspecified, except that as a minimum the member type `Alloc::value_type` must exist and the expression std::declval<Alloc&>().allocate(std::size_t{}) must be well-formed when treated as an unevaluated operand.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_multimap/deduction_guides&oldid=171814>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 May 2024, at 18:08.