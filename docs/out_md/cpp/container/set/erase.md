# std::set<Key,Compare,Allocator>::erase

From cppreference.com
< cpp‎ | container‎ | set
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

std::set

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set::set | | | | | | set::~set | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set::operator= | | | | | | set::get_allocator | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Iterators | | | | | | set::beginset::cbegin(C++11) | | | | | | set::endset::cend(C++11) | | | | | | set::rbeginset::crbegin(C++11) | | | | | | set::rendset::crend(C++11) | | | | | | Capacity | | | | | | set::size | | | | | | set::max_size | | | | | | set::empty | | | | | | Observers | | | | | | set::key_comp | | | | | | set::value_comp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | set::clear | | | | | | ****set::erase**** | | | | | | set::swap | | | | | | set::extract(C++17) | | | | | | set::merge(C++17) | | | | | | set::insert | | | | | | set::insert_range(C++23) | | | | | | set::emplace(C++11) | | | | | | set::emplace_hint(C++11) | | | | | | Lookup | | | | | | set::count | | | | | | set::find | | | | | | set::contains(C++20) | | | | | | set::equal_range | | | | | | set::lower_bound | | | | | | set::upper_bound | | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator<=>(C++20) | | | | | | std::swap(std::set) | | | | | | erase_if(std::set)(C++20) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!=operator<operator>operator<=operator>=(until C++20)(until C++20)(until C++20)(until C++20)(until C++20) | | | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| iterator erase( iterator pos ); |  | (until C++23) |
| iterator erase( iterator pos )      requires(!std::same_as<iterator, const_iterator>); |  | (since C++23) |
|  |  |  |
| --- | --- | --- |
| iterator erase( const_iterator pos ); | (2) | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  | (3) |  |
| iterator erase( iterator first, iterator last ); |  | (until C++11) |
| iterator erase( const_iterator first, const_iterator last ); |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
| size_type erase( const Key& key ); | (4) |  |
| template< class K >  size_type erase( K&& x ); | (5) | (since C++23) |
|  |  |  |

Removes specified elements from the container.

1,2) Removes the element at pos. Only one overload is provided if `iterator` and `const_iterator` are the same type.(since C++11)3) Removes the elements in the range ``first`,`last`)`, which must be a valid range in \*this.4) Removes the element (if one exists) with the key equivalent to key.5) Removes all elements with key that compares **equivalent** to the value x. This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type, and neither `iterator` nor `const_iterator` is implicitly convertible from `K`. It allows calling this function without constructing an instance of `Key`.

References and iterators to the erased elements are invalidated. Other references and iterators are not affected.

The iterator pos must be valid and dereferenceable. Thus the [end() iterator (which is valid, but is not dereferenceable) cannot be used as a value for pos.

### Parameters

|  |  |  |
| --- | --- | --- |
| pos | - | iterator to the element to remove |
| first, last | - | range of elements to remove |
| key | - | key value of the elements to remove |
| x | - | a value of any type that can be transparently compared with a key denoting the elements to remove |

### Return value

1-3) Iterator following the last removed element.4) Number of elements removed (0 or 1).5) Number of elements removed.

### Exceptions

1-3) Throws nothing.4,5) Any exceptions thrown by the `Compare` object.

### Complexity

Given an instance c of `set`:

1,2) Amortized constant3) log(c.size()) + std::distance(first, last)4) log(c.size()) + c.count(key)5) log(c.size()) + c.count(x)

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_associative_heterogeneous_erasure` | `202110L` | (C++23) | Heterogeneous erasure in associative containers and unordered associative containers; overload (5) |

### Example

Run this code

```
#include <set>
#include <iostream>
 
int main()
{
    std::set<int> c = {1, 2, 3, 4, 1, 2, 3, 4};
 
    auto print = [&c]
    {
        std::cout << "c = { ";
        for (int n : c)
            std::cout << n << ' ';
        std::cout << "}\n";
    };
    print();
 
    std::cout << "Erase all odd numbers:\n";
    for (auto it = c.begin(); it != c.end();)
    {
        if (*it % 2 != 0)
            it = c.erase(it);
        else
            ++it;
    }
    print();
 
    std::cout << "Erase 1, erased count: " << c.erase(1) << '\n';
    std::cout << "Erase 2, erased count: " << c.erase(2) << '\n';
    std::cout << "Erase 2, erased count: " << c.erase(2) << '\n';
    print();
}

```

Output:

```
c = { 1 2 3 4 }
Erase all odd numbers:
c = { 2 4 }
Erase 1, erased count: 0
Erase 2, erased count: 1
Erase 2, erased count: 0
c = { 4 }

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 130 | C++98 | the return type of overloads (1) and (3) was void (it is not consistent with the `erase()` requirement on sequence containers) | corrected to `iterator` |
| LWG 2059 | C++11 | replacing overload (1) with overload (2) introduced new ambiguity | added overload (1) back |

### See also

|  |  |
| --- | --- |
| clear | clears the contents   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/container/set/erase&oldid=132451>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 August 2021, at 06:09.