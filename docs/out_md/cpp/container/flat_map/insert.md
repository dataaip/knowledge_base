# std::flat_map<Key,T,Compare,KeyContainer,MappedContainer>::insert

From cppreference.com
< cpp‎ | container‎ | flat map
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

std::flat_map

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | flat_map::flat_map | | | | | | flat_map::operator= | | | | | | Element access | | | | | | flat_map::at | | | | | | [flat_map::operator[]](operator_at.html "cpp/container/flat map/operator at") | | | | | | Iterators | | | | | | flat_map::beginflat_map::cbegin | | | | | | flat_map::endflat_map::cend | | | | | | flat_map::rbeginflat_map::crbegin | | | | | | flat_map::rendflat_map::crend | | | | | | Lookup | | | | | | flat_map::count | | | | | | flat_map::find | | | | | | flat_map::contains | | | | | | flat_map::equal_range | | | | | | flat_map::lower_bound | | | | | | flat_map::upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Capacity | | | | | | flat_map::size | | | | | | flat_map::max_size | | | | | | flat_map::empty | | | | | | Modifiers | | | | | | flat_map::clear | | | | | | flat_map::erase | | | | | | flat_map::swap | | | | | | flat_map::emplace | | | | | | flat_map::extract | | | | | | flat_map::replace | | | | | | ****flat_map::insert**** | | | | | | flat_map::insert_range | | | | | | flat_map::insert_or_assign | | | | | | flat_map::emplace_hint | | | | | | flat_map::try_emplace | | | | | | Observers | | | | | | flat_map::key_comp | | | | | | flat_map::keys | | | | | | flat_map::value_comp | | | | | | flat_map::values | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::flat_map) | | | | | | erase_if(std::flat_map) | | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uses_allocator<std::flat_map> | | | | | | |
| Tags | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_unique | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sorted_unique_t | | | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| std::pair<iterator, bool> insert( const value_type& value ); | (1) | (since C++23) |
| std::pair<iterator, bool> insert( value_type&& value ); | (2) | (since C++23) |
| iterator insert( const_iterator pos, const value_type& value ); | (3) | (since C++23) |
| iterator insert( const_iterator pos, value_type&& value ); | (4) | (since C++23) |
| template< class P >  std::pair<iterator, bool> insert( P&& x ); | (5) | (since C++23) |
| template< class P >  iterator insert( const_iterator pos, P&& x ); | (6) | (since C++23) |
| template< class InputIt >  void insert( InputIt first, InputIt last ); | (7) | (since C++23) |
| template< class InputIt >  void insert( std::sorted_unique_t, InputIt first, InputIt last ); | (8) | (since C++23) |
| void insert( std::initializer_list<key_type> ilist ); | (9) | (since C++23) |
| void insert( std::sorted_unique_t s, std::initializer_list<key_type> ilist ); | (10) | (since C++23) |
|  |  |  |

Inserts element(s) into the container, if the container does not already contain an element with an equivalent key.

1) Inserts value. Equivalent to return emplace(value);.2) Inserts value. Equivalent to return emplace(std::move(value));.3) Inserts value in the position as close as possible to the position just prior to pos. Equivalent to return emplace_hint(pos, value);.4) Inserts value in the position as close as possible to the position just prior to pos. Equivalent to return emplace_hint(pos, std::move(value));.5) If \*this already contains an element which transparently compares **equivalent** to x, does nothing. Otherwise, inserts `x` into \*this as if by emplace(std::forward<P>(x));. This overload participates in overload resolution only if std::is_constructible_v<pair<key_type, mapped_type>, P> is true.6) If \*this already contains an element which transparently compares **equivalent** to x, does nothing. Otherwise, inserts `x` into \*this in the position as close as possible to the position just prior to pos. Equivalent to return emplace_hint(position, std::forward<P>(x));. This overload participates in overload resolution only if std::is_constructible_v<pair<key_type, mapped_type>, P> is true.7) Inserts elements from range ``first`,`last`)` as if performing the following operations sequentially:

1. Adds elements to [`c` as if by  
   for (; first != last; ++first)  
   {  
       value_type value = \*first;  
       c.keys.insert(c.keys.end(), std::move(value.first));  
       c.values.insert(c.values.end(), std::move(value.second));  
   }
2. Sorts the range of newly inserted elements with respect to `value_comp`.
3. Merges the resulting sorted range and the sorted range of pre-existing elements into a single sorted range.
4. Erases the duplicate elements as if by:  
   auto zv = std::views::zip(c.keys, c.values);  
   auto it = ranges::unique(zv, key_equiv(compare)).begin();  
   auto dist = std::distance(zv.begin(), it);  
   c.keys.erase(c.keys.begin() + dist, c.keys.end());  
   c.values.erase(c.values.begin() + dist, c.values.end());
 May allocate memory during the in-place merge operation. If multiple elements in the range have keys that compare equivalent, it is unspecified which element is inserted (pending LWG2844).8) Inserts elements from range ``first`,`last`)` as if performing the following operations sequentially:

1. Adds elements to [`c` as if by  
   for (; first != last; ++first)  
   {  
       value_type value = \*first;  
       c.keys.insert(c.keys.end(), std::move(value.first));  
       c.values.insert(c.values.end(), std::move(value.second));  
   }
2. Merges the sorted range of newly added elements and the sorted range of pre-existing elements into a single sorted range.
3. Erases the duplicate elements as if by:  
   auto zv = std::views::zip(c.keys, c.values);  
   auto it = ranges::unique(zv, key_equiv(compare)).begin();  
   auto dist = std::distance(zv.begin(), it);  
   c.keys.erase(c.keys.begin() + dist, c.keys.end());  
   c.values.erase(c.values.begin() + dist, c.values.end());
 May allocate memory during the in-place merge operation. If multiple elements in the range have keys that compare equivalent, it is unspecified which element is inserted (pending LWG2844).9) Inserts elements from initializer list ilist. Equivalent to insert(ilist.begin(), ilist.end());. If multiple elements in the range have keys that compare equivalent, it is unspecified which element is inserted (pending LWG2844).10) Inserts elements from initializer list ilist. Equivalent to insert(s, ilist.begin(), ilist.end());. If multiple elements in the range have keys that compare equivalent, it is unspecified which element is inserted (pending LWG2844).

|  |  |
| --- | --- |
|  | Information on iterator invalidation is copied from here |

### Parameters

|  |  |  |
| --- | --- | --- |
| pos | - | an iterator to the position before which the new element will be inserted |
| value | - | an element value to insert |
| first, last | - | a range of elements to insert |
| ilist | - | an initializer list to insert the values from |
| x | - | a value of any type that can be transparently compared with a key |
| s | - | a disambiguation tag indicating that the input sequence is sorted (with respect to `value_comp()`) and contains only unique elements |
| Type requirements | | |
| -`InputIt` must meet the requirements of LegacyInputIterator. | | |

### Return value

1,2) A pair consisting of an iterator to the inserted element (or to the element that prevented the insertion) and a bool value set to true if and only if the insertion took place.3,4) An iterator to the inserted element, or to the element that prevented the insertion.5) A pair consisting of an iterator to the inserted element (or to the element that prevented the insertion) and a bool value set to true if and only if the insertion took place.6) An iterator to the inserted element, or to the element that prevented the insertion.7-10) (none)

### Exceptions

1-6) If an exception is thrown by any operation, the insertion has no effect.

|  |  |
| --- | --- |
|  | This section is incomplete Reason: cases 7-10 |

### Complexity

1-6) Linear in `size()`.7) N + M·log(M), where `N` is the `size()` before the operation and `M` is std::distance(first, last).8) Linear in `size()`.9) N + M·log(M), where `N` is the `size()` before the operation and `M` is ilist.size().10) Linear in `N`, where `N` is `size()` after the operation.

### Notes

The hinted insert (3,4,6) does not return a boolean in order to be signature-compatible with positional insert on sequential containers, such as std::vector::insert. This makes it possible to create generic inserters such as std::inserter. One way to check success of a hinted insert is to compare `size()` before and after.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| emplace | constructs element in-place   (public member function) |
| emplace_hint | constructs elements in-place using a hint   (public member function) |
| insert_or_assign | inserts an element or assigns to the current element if the key already exists   (public member function) |
| inserter | creates a std::insert_iterator of type inferred from the argument   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_map/insert&oldid=170213>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 March 2024, at 16:12.