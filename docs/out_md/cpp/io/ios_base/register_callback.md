# std::ios_base::register_callback

From cppreference.com
< cpp‎ | io‎ | ios base
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

Input/output library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| I/O manipulators | | | | |
| Print functions (C++23) | | | | |
| C-style I/O | | | | |
| Buffers | | | | |
| basic_streambuf | | | | |
| basic_filebuf | | | | |
| basic_stringbuf | | | | |
| basic_spanbuf(C++23) | | | | |
| strstreambuf(C++98/26\*) | | | | |
| basic_syncbuf(C++20) | | | | |
| Streams | | | | |
| Abstractions | | | | |
| ios_base | | | | |
| basic_ios | | | | |
| basic_istream | | | | |
| basic_ostream | | | | |
| basic_iostream | | | | |
| File I/O | | | | |
| basic_ifstream | | | | |
| basic_ofstream | | | | |
| basic_fstream | | | | |
| String I/O | | | | |
| basic_istringstream | | | | |
| basic_ostringstream | | | | |
| basic_stringstream | | | | |
| Array I/O | | | | |
| basic_ispanstream(C++23) | | | | |
| basic_ospanstream(C++23) | | | | |
| basic_spanstream(C++23) | | | | |
| istrstream(C++98/26\*) | | | | |
| ostrstream(C++98/26\*) | | | | |
| strstream(C++98/26\*) | | | | |
| Synchronized Output | | | | |
| basic_osyncstream(C++20) | | | | |
| Types | | | | |
| streamoff | | | | |
| streamsize | | | | |
| fpos | | | | |
| Error category interface | | | | |
| iostream_category(C++11) | | | | |
| io_errc(C++11) | | | | |

std::ios_base

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ios_base::ios_base | | | | |
| ios_base::~ios_base | | | | |
| ios_base::operator= | | | | |
| Formatting | | | | |
| ios_base::flags | | | | |
| ios_base::setf | | | | |
| ios_base::unsetf | | | | |
| ios_base::precision | | | | |
| ios_base::width | | | | |
| Locales | | | | |
| ios_base::imbue | | | | |
| ios_base::getloc | | | | |
| Internal extensible array | | | | |
| ios_base::xalloc | | | | |
| ios_base::iword | | | | |
| ios_base::pword | | | | |
| Miscellaneous | | | | |
| ****ios_base::register_callback**** | | | | |
| ios_base::sync_with_stdio | | | | |
| Member classes | | | | |
| ios_base::failure | | | | |
| ios_base::Init | | | | |
| Member types | | | | |
| ios_base::openmode | | | | |
| ios_base::fmtflags | | | | |
| ios_base::iostate | | | | |
| ios_base::seekdir | | | | |
| ios_base::event | | | | |
| ios_base::event_callback | | | | |

|  |  |  |
| --- | --- | --- |
| void register_callback( event_callback function, int index ); |  |  |
|  |  |  |

Registers a user-defined function which will be called by imbue(), std::basic_ios::copyfmt() and ~ios_base(). Every registered callback is called every time: the event type (a value of type event) is passed as its first argument, and may be used to distinguish between the callers.

The callbacks are called in the reverse order of registration (in other words, `register_callback()` pushes a callback pair on the callback stack). If `register_callback()` is called from within a callback function to add a new callback, the new callback is only called on the next event.

The user-defined callback function is not allowed to throw exceptions.

### Parameters

|  |  |  |
| --- | --- | --- |
| function | - | the function which will be called on event, supplied as a function pointer of type event_callback |
| index | - | custom parameter which will be passed to the function |

### Return value

(none)

### Notes

Once registered, a callback cannot be deregistered: it remains a part of the stream object for the rest of its lifetime. If the behavior of a callback needs to change, it may be controlled through iword() or pword().

If the same function is registered multiple times, it is called multiple times.

The integer value that is stored together with the callback is typically an index obtained from xalloc().

### Example

Demonstrates the use of `register_callback` to update locale-dependent cached values that are used by a custom output operator.

Run this code

```
#include <functional>
#include <iostream>
#include <locale>
 
// Cached locale-specific message and its hash
typedef std::pair<std::string, std::size_t> cache_t;
 
// Populate the cached message and its hash from the locale
void update_cache(cache_t& cache, std::locale loc)
{
    auto& fct = std::use_facet< std::messages<char> >(loc);
    std::messages_base::catalog cat = fct.open("sed", loc);
    cache.first = cat < 0 ? "" : fct.get(cat, 0, 0, "Memory exhausted");
    cache.second = std::hash<std::string>()(cache.first);
}
 
// Update the cache if the locale changed
void true_callback(std::ios_base::event evt, std::ios_base& str, int idx)
{
    if (evt == std::ios_base::imbue_event) 
    {
        cache_t* ptr = static_cast<cache_t*>(str.pword(idx));
        update_cache(*ptr, str.getloc());
    }
}
 
// Registers the cache in pword() and sets up the callback
struct CacheSetup
{
    CacheSetup(std::ostream& os, std::ios_base::event_callback f, cache_t* cache)
    {
        int index = std::ostream::xalloc();
        os.pword(index) = cache; // Store pointer to cache in the stream
        os.register_callback(f, index); // Store callback and the index to the pointer
        update_cache(*cache, os.getloc()); // Initialize cache
    };
};
 
// Some custom class 
struct S {};
// Some custom class's operator<< that needs fast access to hashed message
std::ostream& operator<<(std::ostream& os, const S&)
{
    static cache_t cache;
    static CacheSetup setup(os, true_callback, &cache);
    return os << cache.first << " : " << cache.second;
}
 
int main()
{
    std::locale loc("en_US.utf8");
 
    S s;
    std::cout.imbue(loc);
    std::cout << s << '\n';
 
    std::cout.imbue(std::locale(loc, new std::messages_byname<char>("de_DE.utf8")));
    std::cout << s << '\n';
 
    std::cout.imbue(std::locale(loc, new std::messages_byname<char>("ja_JP.utf8")));
    std::cout << s << '\n';
 
    std::cout.imbue(std::locale(loc, new std::messages_byname<char>("ru_RU.utf8")));
    std::cout << s << '\n';
}

```

Output:

```
Memory exhausted : 2,295,079,096
Speicher erschöpft : 3,139,423,551
メモリーが足りません : 3,837,351,114
Память исчерпана : 3,742,732,851

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base/register_callback&oldid=170169>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 March 2024, at 05:14.