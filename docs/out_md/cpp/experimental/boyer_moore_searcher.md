# std::experimental::boyer_moore_searcher, std::experimental::make_boyer_moore_searcher

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
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Library fundamentals

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::optional | | | | |
| experimental::any | | | | |
| experimental::basic_string_view | | | | |
| experimental::sample | | | | |
| experimental::shared_ptr | | | | |
| experimental::weak_ptr | | | | |
| experimental::apply | | | | |
| experimental::invocation_typeexperimental::raw_invocation_type | | | | |
| experimental::search | | | | |
| experimental::default_searcherexperimental::make_default_searcher | | | | |
| ****experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher**** | | | | |
| experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher | | | | |
| Type-erased and polymorphic allocators | | | | |
| Variable templates for type traits | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/functional>` |  |  |
| template< class RandomIt1,  class Hash = std::hash<typename std::iterator_traits<RandomIt1>::value_type>,            class BinaryPredicate = std::equal_to<> > class boyer_moore_searcher; |  | (library fundamentals TS) |
|  |  |  |

A searcher suitable for use with std::experimental::search that implements the Boyer-Moore string searching algorithm.

`boyer_moore_searcher` is CopyConstructible and CopyAssignable.

`RandomIt1` must meet the requirements of LegacyRandomAccessIterator.

### Member functions

## std::experimental::boyer_moore_searcher::boyer_moore_searcher

|  |  |  |
| --- | --- | --- |
| boyer_moore_searcher( RandomIt1 pat_first,                        RandomIt1 pat_last,                        Hash hf = Hash(),                       BinaryPredicate pred = BinaryPredicate() ); |  |  |
|  |  |  |

Constructs a `boyer_moore_searcher` by storing copies of pat_first, pat_last, hf, and pred, setting up any necessary internal data structures.

The value type of `RandomIt1` must be DefaultConstructible, CopyConstructible and CopyAssignable.

For any two values `A` and `B` of the type std::iterator_traits<RandomIt1>::value_type, if pred(A, B) == true, then hf(A) == hf(B) shall be true.

### Parameters

|  |  |  |
| --- | --- | --- |
| pat_first, pat_last | - | a pair of iterators designating the string to be searched for |
| hf | - | a callable object used to hash the elements of the string |
| pred | - | a callable object used to determine equality |

### Exceptions

Any exceptions thrown by

- the copy constructor of `RandomIt1`;
- the default constructor, copy constructor, and copy assignment operator of the value type of `RandomIt1`; or
- the copy constructor and function call operator of `BinaryPredicate` or `Hash`.

May also throw std::bad_alloc if additional memory required for internal data structures cannot be allocated.

## std::experimental::boyer_moore_searcher::operator()

|  |  |  |
| --- | --- | --- |
| template< class RandomIt2 >  RandomIt2 operator()( RandomIt2 first, RandomIt2 last ) const; |  | (until C++17) |
| template< class RandomIt2 >  std::pair<RandomIt2,RandomIt2> operator()( RandomIt2 first, RandomIt2 last ) const; |  | (since C++17) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

The member function called by std::experimental::search to perform a search with this searcher. `RandomIt2` must meet the requirements of LegacyRandomAccessIterator.

`RandomIt1` and `RandomIt2` must have the same value type.

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | a pair of iterators designating the string to be examined |

### Return value

|  |  |
| --- | --- |
| If the pattern ``pat_first`,`pat_last`)` is empty, returns first.  Otherwise, an iterator to the first position in `[`first`,`last`)` where a subsequence that compares equal to `[`pat_first`,`pat_last`)` as defined by pred is located, or a copy of last otherwise. | (until C++17) |
| If the pattern `[`pat_first`,`pat_last`)` is empty, returns `make_pair(first, first)`.  Otherwise, returns a pair of iterators to the first and one past last positions in `[`first`,`last`)` where a subsequence that compares equal to `[`pat_first`,`pat_last`)` as defined by pred is located, or `make_pair(last, last)` otherwise. | (since C++17) |

### Helper Functions

|  |  |  |
| --- | --- | --- |
| template< class RandomIt,   class Hash = [std::hash<typename std::iterator_traits<RandomIt>::value_type>,            class BinaryPredicate = std::equal_to<> >  boyer_moore_searcher<RandomIt, Hash, BinaryPredicate> make_boyer_moore_searcher(      RandomIt pat_first,      RandomIt pat_last,      Hash hf = Hash(),     BinaryPredicate pred = BinaryPredicate()); |  | (library fundamentals TS) |
|  |  |  |

Helper function that constructs a `std::experimental::boyer_moore_searcher` using template argument deduction. Equivalent to return boyer_moore_searcher<RandomIt, Hash, BinaryPredicate>(pat_first, pat_last, hf, pred);

### Parameters

|  |  |  |
| --- | --- | --- |
| pat_first, pat_last | - | a pair of iterators designating the string to be searched for |
| hf | - | a callable object used to hash the elements of the string |
| pred | - | a callable object used to determine equality |

### Return value

A `boyer_moore_searcher` constructed with the arguments pat_first, pat_last, hf, and pred.

### Example

Run this code

```
#include <experimental/algorithm>
#include <experimental/functional>
#include <iostream>
#include <string>
 
int main()
{
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";
    std::string needle = "pisci";
    auto it = std::experimental::search(in.begin(), in.end(),
                  std::experimental::make_boyer_moore_searcher(
                      needle.begin(), needle.end()));
    if (it != in.end())
        std::cout << "The string " << needle << " found at offset "
                  << it - in.begin() << '\n';
    else
        std::cout << "The string " << needle << " not found\n";
}

```

Output:

```
The string pisci found at offset 43

```

### See also

|  |  |
| --- | --- |
| search | searches for the first occurrence of a range of elements   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/boyer_moore_searcher&oldid=154731>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 July 2023, at 02:00.