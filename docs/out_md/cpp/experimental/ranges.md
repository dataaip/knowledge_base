# Extensions for ranges

From cppreference.com
< cpp‎ | experimental
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| ****Ranges**** (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

****Ranges****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Concepts | | | | |
| General utilities | | | | |
| Iterators | | | | |
| Ranges | | | | |
| Algorithms | | | | |

The C++ Extensions for Ranges, ISO/IEC TS 21425:2017, specifies one modification to the core language and defines new components for the C++ standard library listed on this page.

The Ranges TS is based on the C++14 standard as modified by the Concepts TS.

#### Core language changes

The Ranges TS modifies the specification of the range-based for loop to permit differently typed begin and end iterators. This change permits the use of sentinels and is also present in C++17.

#### Concepts

|  |  |
| --- | --- |
| Core language concepts | |
| Defined in header `<experimental/ranges/concepts>` | |
| Defined in namespace `std::experimental::ranges` | |
| Same | specifies that a type is the same as another type   (concept) |
| DerivedFrom | specifies that a type is derived from another type   (concept) |
| ConvertibleTo | specifies that a type is implicitly convertible to another type   (concept) |
| CommonReference | specifies that two types share a common reference type   (concept) |
| Common | specifies that two types share a common type   (concept) |
| Integral | specifies that a type is an integral type   (concept) |
| SignedIntegral | specifies that a type is an integral type that is signed   (concept) |
| UnsignedIntegral | specifies that a type is an integral type that is not signed   (concept) |
| Assignable | specifies that a type is assignable from another type   (concept) |
| SwappableSwappableWith | specifies that a type can be swapped or that two types can be swapped with each other   (concept) |
| Comparison concepts | |
| Defined in header `<experimental/ranges/concepts>` | |
| Defined in namespace `std::experimental::ranges` | |
| Boolean | specifies that a type can be used in Boolean contexts   (concept) |
| WeaklyEqualityComparableWith | specifies that two types can be compared for equality using operators == and !=   (concept) |
| EqualityComparableEqualityComparableWith | specifies that operator == is an equivalence relation   (concept) |
| StrictTotallyOrderedStrictTotallyOrderedWith | specifies that the comparison operators on the type yield a total order   (concept) |
| Object concepts | |
| Defined in header `<experimental/ranges/concepts>` | |
| Defined in namespace `std::experimental::ranges` | |
| Destructible | specifies that an object of the type can be destroyed   (concept) |
| Constructible | specifies that a variable of the type can be constructed from or bound to a set of argument types   (concept) |
| DefaultConstructible | specifies that an object of a type can be default constructed   (concept) |
| MoveConstructible | specifies that an object of a type can be move constructed   (concept) |
| CopyConstructible | specifies that an object of a type can be copy constructed and move constructed   (concept) |
| Movable | specifies that an object of a type can be moved and swapped   (concept) |
| Copyable | specifies that an object of a type can be copied, moved, and swapped   (concept) |
| Semiregular | specifies that an object of a type can be copied, moved, swapped, and default constructed   (concept) |
| Regular | specifies that a type is regular, that is, it is both `Semiregular` and `EqualityComparable`   (concept) |
| Callable concepts | |
| Defined in header `<experimental/ranges/concepts>` | |
| Defined in namespace `std::experimental::ranges` | |
| InvocableRegularInvocable | specifies that a callable type can be invoked with a given set of argument types   (concept) |
| Predicate | specifies that a callable type is a Boolean predicate   (concept) |
| Relation | specifies that a callable type is a binary relation   (concept) |
| StrictWeakOrder | specifies that a `Relation` imposes a strict weak ordering   (concept) |
| Random number generator concept | |
| Defined in header `<experimental/ranges/random>` | |
| Defined in namespace `std::experimental::ranges` | |
| UniformRandomNumberGenerator | specifies that a type qualifies as a uniform random number generator   (concept) |

#### General utilities

|  |  |
| --- | --- |
| Utility components | |
| Defined in header `<experimental/ranges/utility>` | |
| Defined in namespace `std::experimental::ranges` | |
| swap | swaps the value of two objects (customization point object) |
| exchange | replaces the argument with a new value and returns its previous value   (function template) |
| Function objects | |
| Defined in header `<experimental/ranges/functional>` | |
| Defined in namespace `std::experimental::ranges` | |
| invoke | invokes a Callable object with the given arguments   (function template) |
| equal_to | function object implementing x == y   (class template) |
| not_equal_to | function object implementing x != y   (class template) |
| greater | function object implementing x > y   (class template) |
| less | function object implementing x < y   (class template) |
| greater_equal | function object implementing x >= y   (class template) |
| less_equal | function object implementing x <= y   (class template) |
| identity | function object that returns its argument unchanged   (class) |
| Metaprogramming and type traits | |
| Defined in header `<experimental/ranges/type_traits>` | |
| Defined in namespace `std::experimental::ranges` | |
| is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable | checks if objects of a type can be swapped with objects of same or different type   (class template) |
| common_reference | determine the common reference type of a set of types   (class template) |
| common_type | determine the common type of a set of types   (class template) |
| Tagged pairs and tuples | |
| Defined in header `<experimental/ranges/utility>` | |
| Defined in namespace `std::experimental::ranges` | |
| TagSpecifier | specifies that a type is a tag specifier   (concept) |
| TaggedType | specifies that a type represents a tag specifier and its element type   (concept) |
| tagged | augument a tuple-like type with named accessors   (class template) |
| tagged_pair | alias template for a tagged std::pair (alias template) |
| make_tagged_pair | convenience function for creating a `tagged_pair`   (function template) |
| Defined in header `<experimental/ranges/tuple>` | |
| tagged_tuple | alias template for a tagged std::tuple (alias template) |
| make_tagged_tuple | convenience function for creating a `tagged_tuple`   (function template) |
| Defined in header `<experimental/ranges/algorithm>` | |
| Defined in namespace `std::experimental::ranges::tag` | |
| inin1in2outout1out2funminmaxbeginend | tag specifiers for use with ranges::tagged   (class) |

#### Iterators

|  |  |
| --- | --- |
| Defined in header `<experimental/ranges/iterator>` | |
| Iterator-related concepts | |
| Defined in namespace `std::experimental::ranges` | |
| Iterator concepts | |
| Readable | specifies that a type is readable by applying operator `*`   (concept) |
| Writable | specifies that a value can be written to an iterator's referenced object   (concept) |
| WeaklyIncrementable | specifies that a `Semiregular` type can be incremented with pre- and post-increment operators   (concept) |
| Incrementable | specifies that the increment operation on a `WeaklyIncrementable` type is equality-preserving and that the type is `EqualityComparable`   (concept) |
| Iterator | specifies that objects of a type can be incremented and dereferenced   (concept) |
| Sentinel | specifies that objects of a type is a sentinel for an `Iterator` type   (concept) |
| SizedSentinel | specifies that the `-` operator can be applied to an iterator and a sentinel to calculate their difference in constant time   (concept) |
| InputIterator | specifies that a type is an input iterator, that is, its referenced values can be read and it can be both pre- and post-incremented   (concept) |
| OutputIterator | specifies that a type is an output iterator for a given value type, that is, values of that type can be written to it and it can be both pre- and post-incremented   (concept) |
| ForwardIterator | specifies that an `InputIterator` is a forward iterator, supporting equality comparison and multi-pass   (concept) |
| BidirectionalIterator | specifies that a `ForwardIterator` is a bidirectional iterator, supporting movement backwards   (concept) |
| RandomAccessIterator | specifies that a `BidirectionalIterator` is a random-access iterator, supporting advancement in constant time and subscripting   (concept) |
| Indirect callable concepts | |
| IndirectUnaryInvocableIndirectRegularUnaryInvocable | specifies that a callable type can be invoked with the result of dereferencing a `Readable` type   (concept) |
| IndirectUnaryPredicate | specifies that a callable object, when invoked with the result of dereferencing a `Readable` type, satisfies `Predicate`   (concept) |
| IndirectRelation | specifies that a callable object, when invoked with the result of dereferencing some `Readable` types, satisfies `Relation`   (concept) |
| IndirectStrictWeakOrder | specifies that a callable object, when invoked with the result of dereferencing some `Readable` types, satisfies `StrictWeakOrder`   (concept) |
| Common algorithm requirements | |
| IndirectlyMovable | specifies that values may be moved from a `Readable` type to a `Writable` type   (concept) |
| IndirectlyMovableStorable | specifies that values may be moved from a `Readable` type to a `Writable` type and that the move may be performed via an intermediate object   (concept) |
| IndirectlyCopyable | specifies that values may be copied from a `Readable` type to a `Writable` type   (concept) |
| IndirectlyCopyableStorable | specifies that values may be copied from a `Readable` type to a `Writable` type and that the copy may be performed via an intermediate object   (concept) |
| IndirectlySwappable | specifies that the values referenced by two `Readable` types can be swapped   (concept) |
| IndirectlyComparable | specifies that the values referenced by two `Readable` types can be compared   (concept) |
| Permutable | specifies the common requirements of algorithms that reorder elements in place   (concept) |
| Mergeable | specifies the requirements of algorithms that merge sorted sequences into an output sequence by copying elements   (concept) |
| Sortable | specifies the common requirements of algorithms that permute sequences into ordered sequences   (concept) |
| Concept utilities | |
| indirect_result_of | compute the result of invoking a callable object on the result of dereferencing some set of `Readable` types   (class template) |
| projected | helper template for specifying the constraints on algorithms that accept projections   (class template) |
| Iterator primitives | |
| Iterator utilities | |
| Defined in namespace `std::experimental::ranges` | |
| iter_move") | casts the result of dereferencing an object to its associated rvalue reference type (customization point object) |
| iter_swap") | swap the values referenced by two dereferenceable objects (customization point object) |
| Iterator traits | |
| Defined in namespace `std::experimental::ranges` | |
| difference_type | obtains the difference type of a `WeaklyIncrementable` type   (class template) |
| value_type | obtains the value type of a `Readable` type   (class template) |
| iterator_category | obtains the iterator category of an input iterator type   (class template) |
| iterator_traits") | compatibility traits class that collects an iterator’s associated types (alias template) |
| reference_trvalue_reference_titer_common_reference_t | obtains a dereferenceable object's associated reference types (alias template) |
| Iterator category tags | |
| Defined in namespace `std::experimental::ranges` | |
| input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tag | empty class types used to indicate iterator categories   (class) |
| std::iterator_traits specializations | |
| Defined in namespace `std` | |
| std::iterator_traits<InputIterator>std::iterator_traits<OutputIterator>") | specializes std::iterator_traits for ranges TS iterators   (class template specialization) |
| Iterator operations | |
| Defined in namespace `std::experimental::ranges` | |
| advance | advances an iterator by given distance   (function template) |
| distance | returns the distance between an iterator and a sentinel, or between the beginning and the end of a range   (function template) |
| next | increment an iterator   (function template) |
| prev | decrement an iterator   (function template) |
| Iterator adaptors | |
| Defined in namespace `std::experimental::ranges` | |
| reverse_iterator") | iterator adaptor for reverse-order traversal   (class template) |
| back_insert_iterator") | iterator adaptor for insertion at the end of a container   (class template) |
| front_insert_iterator") | iterator adaptor for insertion at the front of a container   (class template) |
| insert_iterator") | iterator adaptor for insertion into a container   (class template) |
| move_iterator") | iterator adaptor which dereferences to an rvalue reference   (class template) |
| move_sentinel") | sentinel adaptor for use with `move_iterator`   (class template) |
| common_iterator") | adapt an iterator-sentinel pair into a common iterator type for use with legacy algorithms   (class template) |
| counted_iterator") | iterator adaptor that keeps track of its distance from its starting position   (class template) |
| default_sentinel") | empty sentinel type for use with iterator types that know the bound of their range   (class) |
| dangling | wrapper for a possibly dangling iterator   (class template) |
| safe_iterator_t | alias template that wraps the iterator type of an rvalue range with `dangling` (alias template) |
| unreachable") | sentinel type used with any iterator to denote an infinite range   (class) |
| Stream iterators | |
| Defined in namespace `std::experimental::ranges` | |
| istream_iterator") | input iterator that reads from std::basic_istream   (class template) |
| ostream_iterator") | output iterator that writes to std::basic_ostream   (class template) |
| istreambuf_iterator") | input iterator that reads from std::basic_streambuf   (class template) |
| ostreambuf_iterator") | output iterator that writes to std::basic_streambuf   (class template) |

#### Ranges

|  |  |
| --- | --- |
| Defined in header `<experimental/ranges/range>` | |
| Range concepts | |
| Range | specifies that a type is a range, that is, it provides a `begin` iterator and an `end` sentinel   (concept) |
| SizedRange | specifies that a range knows its size in constant time   (concept) |
| View | specifies that a range is a view, that is, it has constant time copy/move/assignment   (concept) |
| BoundedRange | specifies that a range has identical iterator and sentinel types   (concept) |
| InputRange | specifies a range whose iterator type satisfies `InputIterator`   (concept) |
| OutputRange | specifies a range whose iterator type satisfies `OutputIterator`   (concept) |
| ForwardRange | specifies a range whose iterator type satisfies `ForwardIterator`   (concept) |
| BidirectionalRange | specifies a range whose iterator type satisfies `BidirectionalIterator`   (concept) |
| RandomAccessRange | specifies a range whose iterator type satisfies `RandomAccessIterator`   (concept) |
| Range access | |
| Defined in namespace `std::experimental::ranges` | |
| begincbegin") | returns an iterator to the beginning of a range (customization point object) |
| endcend") | returns an iterator to the end of a range (customization point object) |
| rbegincrbegin") | returns a reverse iterator to a range (customization point object) |
| rendcrend") | returns a reverse end iterator to a range (customization point object) |
| Range primitives | |
| Defined in namespace `std::experimental::ranges` | |
| size") | obtains the size of a range whose size can be calculated in constant time (customization point object) |
| empty") | checks whether a range is empty (customization point object) |
| datacdata") | obtains a pointer to the beginning of a contiguous range (customization point object) |
| iterator_tsentinel_t | obtains the iterator and sentinel types of a range (alias template) |

#### Algorithms

|  |  |
| --- | --- |
| Defined in header `<experimental/ranges/algorithm>` | |
| Non-modifying sequence operations | |
| Defined in namespace `std::experimental::ranges` | |
| all_ofany_ofnone_of | checks if a predicate is true for all, any or none of the elements in a range   (function template) |
| for_each | applies a function to a range of elements   (function template) |
| countcount_if | returns the number of elements satisfying specific criteria   (function template) |
| mismatch | finds the first position where two ranges differ   (function template) |
| equal | determines if two sets of elements are the same   (function template) |
| lexicographical_compare | returns true if one range is lexicographically less than another   (function template) |
| findfind_iffind_if_not | finds the first element satisfying specific criteria   (function template) |
| find_end | finds the last sequence of elements in a certain range   (function template) |
| find_first_of | searches for any one of a set of elements   (function template) |
| adjacent_find | finds the first two adjacent items that are equal (or satisfy a given predicate)   (function template) |
| search | searches for a range of elements   (function template) |
| search_n | searches for a number consecutive copies of an element in a range   (function template) |
| Modifying sequence operations | |
| Defined in namespace `std::experimental::ranges` | |
| copycopy_if | copies a range of elements to a new location   (function template) |
| copy_n") | copies a number of elements to a new location   (function template) |
| copy_backward") | copies a range of elements in backwards order   (function template) |
| move") | moves a range of elements to a new location   (function template) |
| move_backward") | moves a range of elements to a new location in backwards order   (function template) |
| fill") | assigns a range of elements a certain value   (function template) |
| fill_n") | assigns a value to a number of elements   (function template) |
| transform") | applies a function to a range of elements   (function template) |
| generate") | saves the result of a function in a range   (function template) |
| generate_n") | saves the result of N applications of a function   (function template) |
| removeremove_if") | removes elements satisfying specific criteria   (function template) |
| remove_copyremove_copy_if") | copies a range of elements omitting those that satisfy specific criteria   (function template) |
| replacereplace_if") | replaces all values satisfying specific criteria with another value   (function template) |
| replace_copyreplace_copy_if") | copies a range, replacing elements satisfying specific criteria with another value   (function template) |
| swap_ranges") | swaps two ranges of elements   (function template) |
| reverse") | reverses the order of elements in a range   (function template) |
| reverse_copy") | creates a copy of a range that is reversed   (function template) |
| rotate") | rotates the order of elements in a range   (function template) |
| rotate_copy") | copies and rotate a range of elements   (function template) |
| shuffle") | randomly re-orders elements in a range   (function template) |
| unique") | removes consecutive duplicate elements in a range   (function template) |
| unique_copy") | creates a copy of some range of elements that contains no consecutive duplicates   (function template) |
| Partitioning operations | |
| Defined in namespace `std::experimental::ranges` | |
| is_partitioned") | determines if the range is partitioned by the given predicate   (function template) |
| partition") | divides a range of elements into two groups   (function template) |
| partition_copy") | copies a range dividing the elements into two groups   (function template) |
| stable_partition") | divides elements into two groups while preserving their relative order   (function template) |
| partition_point") | locates the partition point of a partitioned range   (function template) |
| Sorting operations | |
| Defined in namespace `std::experimental::ranges` | |
| is_sorted") | checks whether a range is sorted into ascending order   (function template) |
| is_sorted_until") | finds the largest sorted subrange   (function template) |
| sort | sorts a range into ascending order   (function template) |
| partial_sort") | sorts the first N elements of a range   (function template) |
| partial_sort_copy") | copies and partially sorts a range of elements   (function template) |
| stable_sort") | sorts a range of elements while preserving order between equal elements   (function template) |
| nth_element") | partially sorts the given range making sure that it is partitioned by the given element   (function template) |
| Binary search operations (on sorted ranges) | |
| Defined in namespace `std::experimental::ranges` | |
| lower_bound") | returns an iterator to the first element **not less** than the given value   (function template) |
| upper_bound") | returns an iterator to the first element **greater** than a certain value   (function template) |
| binary_search") | determines if an element exists in a certain range   (function template) |
| equal_range") | returns range of elements matching a specific key   (function template) |
| Set operations (on sorted ranges) | |
| Defined in namespace `std::experimental::ranges` | |
| merge") | merges two sorted ranges   (function template) |
| inplace_merge") | merges two ordered ranges in-place   (function template) |
| includes") | returns true if one set is a subset of another   (function template) |
| set_difference") | computes the difference between two sets   (function template) |
| set_intersection") | computes the intersection of two sets   (function template) |
| set_symmetric_difference") | computes the symmetric difference between two sets   (function template) |
| set_union") | computes the union of two sets   (function template) |
| Heap operations | |
| Defined in namespace `std::experimental::ranges` | |
| is_heap") | checks if the given range is a max heap   (function template) |
| is_heap_until") | finds the largest subrange that is a max heap   (function template) |
| make_heap") | creates a max heap out of a range of elements   (function template) |
| push_heap") | adds an element to a max heap   (function template) |
| pop_heap") | removes the largest element from a max heap   (function template) |
| sort_heap") | turns a max heap into a range of elements sorted in ascending order   (function template) |
| Minimum/maximum operations | |
| Defined in namespace `std::experimental::ranges` | |
| max") | returns the greater of the given values   (function template) |
| max_element") | returns the largest element in a range   (function template) |
| min") | returns the smaller of the given values   (function template) |
| min_element") | returns the smallest element in a range   (function template) |
| minmax") | returns the smaller and larger of two elements   (function template) |
| minmax_element") | returns the smallest and the largest elements in a range   (function template) |
| Permutation operations | |
| Defined in namespace `std::experimental::ranges` | |
| is_permutation | determines if a sequence is a permutation of another sequence   (function template) |
| next_permutation") | generates the next greater lexicographic permutation of a range of elements   (function template) |
| prev_permutation") | generates the next smaller lexicographic permutation of a range of elements   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges&oldid=164262>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 November 2023, at 10:56.