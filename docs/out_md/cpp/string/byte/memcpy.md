# std::memcpy

From cppreference.com
< cpp‎ | string‎ | byte
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

Text processing library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Localization library | | | | |
| Regular expressions library (C++11) | | | | |
| Formatting library (C++20) | | | | |
| Null-terminated sequence utilities | | | | |
| Byte strings | | | | |
| Multibyte strings | | | | |
| Wide strings | | | | |
| Primitive numeric conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

Null-terminated byte strings

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Character classification | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | isalnum | | | | | | isalpha | | | | | | islower | | | | | | isupper | | | | | | isdigit | | | | | | isxdigit | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | iscntrl | | | | | | isgraph | | | | | | isspace | | | | | | isprint | | | | | | ispunct | | | | | |
| Character manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | |
| Conversions to numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atof | | | | | | atoiatolatoll(C++11) | | | | | | strtolstrtoll(C++11) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoulstrtoull(C++11) | | | | | | strtofstrtodstrtold(C++11)(C++11) | | | | | | strtoimaxstrtouimax(C++11)(C++11) | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcpy | | | | | | strncpy | | | | | | strxfrm | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcat | | | | | | strncat | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strlen | | | | | | strcmp | | | | | | strncmp | | | | | | strcoll | | | | | | strchr | | | | | | strrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strspn | | | | | | strcspn | | | | | | strpbrk | | | | | | strstr | | | | | | strtok | | | | | |  | | | | | |
| Character array functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | memchr | | | | | | memcmp | | | | | | memset | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****memcpy**** | | | | | | memmove | | | | | |  | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strerror | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cstring>` |  |  |
| void\* memcpy( void\* dest, const void\* src, std::size_t count ); |  |  |
|  |  |  |

Copies count bytes from the object pointed to by src to the object pointed to by dest. Both objects are reinterpreted as arrays of unsigned char.

If the objects overlap, the behavior is undefined.

If either dest or src is an invalid or null pointer, the behavior is undefined, even if count is zero.

If the objects are potentially-overlapping or not TriviallyCopyable, the behavior of `memcpy` is not specified and may be undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| dest | - | pointer to the memory location to copy to |
| src | - | pointer to the memory location to copy from |
| count | - | number of bytes to copy |

### Return value

dest

### Notes

`std::memcpy` may be used to implicitly create objects in the destination buffer.

`std::memcpy` is meant to be the fastest library routine for memory-to-memory copy. It is usually more efficient than std::strcpy, which must scan the data it copies or std::memmove, which must take precautions to handle overlapping inputs.

Several C++ compilers transform suitable memory-copying loops to `std::memcpy` calls.

Where strict aliasing prohibits examining the same memory as values of two different types, `std::memcpy` may be used to convert the values.

### Example

Run this code

```
#include <cstdint>
#include <cstring>
#include <iostream>
 
int main()
{
    // simple usage
    char source[] = "once upon a daydream...", dest[4];
    std::memcpy(dest, source, sizeof dest);
    std::cout << "dest[4] = {";
    for (int n{}; char c : dest)
        std::cout << (n++ ? ", " : "") << '\'' << c << "'";
    std::cout << "};\n";
 
    // reinterpreting
    double d = 0.1;
//  std::int64_t n = *reinterpret_cast<std::int64_t*>(&d); // aliasing violation
    std::int64_t n;
    std::memcpy(&n, &d, sizeof d); // OK
 
    std::cout << std::hexfloat << d << " is " << std::hex << n
              << " as a std::int64_t\n" << std::dec;
 
    // object creation in destination buffer
    struct S
    {
        int x{42};
        void print() const { std::cout << '{' << x << "}\n"; }
    } s;
    alignas(S) char buf[sizeof(S)];
    S* ps = new (buf) S; // placement new
    std::memcpy(ps, &s, sizeof s);
    ps->print();
}

```

Output:

```
dest[4] = {'o', 'n', 'c', 'e'};
0x1.999999999999ap-4 is 3fb999999999999a as a std::int64_t
{42}

```

### See also

|  |  |
| --- | --- |
| memmove | moves one buffer to another   (function) |
| memset | fills a buffer with a character   (function) |
| wmemcpy | copies a certain amount of wide characters between two non-overlapping arrays   (function) |
| copy | copies characters   (public member function of `std::basic_string<CharT,Traits,Allocator>`) |
| copycopy_if(C++11) | copies a range of elements to a new location   (function template) |
| copy_backward | copies a range of elements in backwards order   (function template) |
| is_trivially_copyable(C++11) | checks if a type is trivially copyable   (class template) |
| C documentation for memcpy | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/byte/memcpy&oldid=161335>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 October 2023, at 08:01.