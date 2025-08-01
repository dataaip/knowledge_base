# memcpy, memcpy_s

From cppreference.com
< c‎ | string‎ | byte
 C

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Language | | | | |
| Headers | | | | |
| Type support | | | | |
| Program utilities | | | | |
| Variadic function support | | | | |
| Error handling | | | | |
| Dynamic memory management | | | | |
| Strings library | | | | |
| Algorithms | | | | |
| Numerics | | | | |
| Date and time utilities | | | | |
| Input/output support | | | | |
| Localization support | | | | |
| Concurrency support (C11) | | | | |
| Technical Specifications | | | | |
| Symbol index | | | | |

 Strings library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Null-terminated byte strings | | | | |
| Null-terminated multibyte strings | | | | |
| Null-terminated wide strings | | | | |

 Null-terminated byte strings

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Character manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | isalnum | | | | | | isalpha | | | | | | islower | | | | | | isupper | | | | | | isdigit | | | | | | isxdigit | | | | | | isblank(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iscntrl | | | | | | isgraph | | | | | | isspace | | | | | | isprint | | | | | | ispunct | | | | | | tolower | | | | | | toupper | | | | | |
| Conversions to and from numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atoiatolatoll(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | strtoulstrtoull(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoimaxstrtoumax(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | strfromfstrfromdstrfroml(C23)(C23)(C23) | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcpystrcpy_s(C11) | | | | | | strncpystrncpy_s(C11) | | | | | | strcatstrcat_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strncatstrncat_s(C11) | | | | | | strxfrm | | | | | | strdup(C23) | | | | | | strndup(C23) | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strlenstrnlen_s(C11) | | | | | | strcmp | | | | | | strncmp | | | | | | strcoll | | | | | | strchr | | | | | | strrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strspn | | | | | | strcspn | | | | | | strpbrk | | | | | | strstr | | | | | | strtokstrtok_s(C11) | | | | | |  | | | | | |
| Memory manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | memchr | | | | | | memcmp | | | | | | memsetmemset_explicitmemset_s(C23)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****memcpymemcpy_s****(C11) | | | | | | memmovememmove_s(C11) | | | | | | memccpy(C23) | | | | | |
| Miscellaneous | | | | |
| strerrorstrerror_sstrerrorlen_s(C11)(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<string.h>` |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| void\* memcpy( void \*dest, const void \*src, size_t count ); |  | (until C99) |
| void\* memcpy( void \*restrict dest, const void \*restrict src, size_t count ); |  | (since C99) |
|  |  |  |
| --- | --- | --- |
| errno_t memcpy_s( void \*restrict dest, rsize_t destsz,                    const void \*restrict src, rsize_t count ); | (2) | (since C11) |
|  |  |  |

1) Copies `count` characters from the object pointed to by `src` to the object pointed to by `dest`. Both objects are interpreted as arrays of unsigned char. The behavior is undefined if access occurs beyond the end of the `dest` array. If the objects overlap (which is a violation of the restrict contract)(since C99), the behavior is undefined. The behavior is undefined if either `dest` or `src` is an invalid or null pointer.2) Same as (1), except that the following errors are detected at runtime and cause the entire destination range dest, dest+destsz) to be zeroed out (if both `dest` and `destsz` are valid), as well as call the currently installed [constraint handler function:

:   - `dest` or `src` is a null pointer
    - `destsz` or `count` is greater than RSIZE_MAX
    - `count` is greater than `destsz` (buffer overflow would occur)
    - the source and the destination objects overlap

 The behavior is undefined if the size of the character array pointed to by `dest` < `count` <= `destsz`; in other words, an erroneous value of `destsz` does not expose the impending buffer overflow.

:   As with all bounds-checked functions, `memcpy_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <string.h>.

### Parameters

|  |  |  |
| --- | --- | --- |
| dest | - | pointer to the object to copy to |
| destsz | - | max number of bytes to modify in the destination (typically the size of the destination object) |
| src | - | pointer to the object to copy from |
| count | - | number of bytes to copy |

### Return value

1) Returns a copy of `dest`2) Returns zero on success and non-zero value on error. Also on error, if `dest` is not a null pointer and `destsz` is valid, writes `destsz` zero bytes in to the destination array.

### Notes

`memcpy` may be used to set the effective type of an object obtained by an allocation function.

`memcpy` is the fastest library routine for memory-to-memory copy. It is usually more efficient than strcpy, which must scan the data it copies or memmove, which must take precautions to handle overlapping inputs.

Several C compilers transform suitable memory-copying loops to `memcpy` calls.

Where strict aliasing prohibits examining the same memory as values of two different types, `memcpy` may be used to convert the values.

### Example

Run this code

```
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    // simple usage
    char source[] = "once upon a midnight dreary...", dest[4];
    memcpy(dest, source, sizeof dest);
    for(size_t n = 0; n < sizeof dest; ++n)
        putchar(dest[n]);
 
    // setting effective type of allocated memory to be int
    int *p = malloc(3*sizeof(int));   // allocated memory has no effective type
    int arr[3] = {1,2,3};
    memcpy(p,arr,3*sizeof(int));      // allocated memory now has an effective type
 
    // reinterpreting data
    double d = 0.1;
//    int64_t n = *(int64_t*)(&d); // strict aliasing violation
    int64_t n;
    memcpy(&n, &d, sizeof d); // OK
    printf("\n%a is %" PRIx64 " as an int64_t\n", d, n);
 
#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    char src[] = "aaaaaaaaaa";
    char dst[] = "xyxyxyxyxy";
    int r = memcpy_s(dst,sizeof dst,src,5);
    printf("dst = \"%s\", r = %d\n", dst,r);
    r = memcpy_s(dst,5,src,10);            //  count is greater than destsz  
    printf("dst = \"");
    for(size_t ndx=0; ndx<sizeof dst; ++ndx) {
        char c = dst[ndx];
        c ? printf("%c", c) : printf("\\0");
    }
    printf("\", r = %d\n", r);
#endif
}

```

Possible output:

```
once
0x1.999999999999ap-4 is 3fb999999999999a as an int64_t
dst = "aaaaayxyxy", r = 0
dst = "\0\0\0\0\0yxyxy", r = 22

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.24.2.1 The memcpy function (p: 362)

:   - K.3.7.1.1 The memcpy_s function (p: 614)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.21.2.1 The memcpy function (p: 325)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.11.2.1 The memcpy function

### See also

|  |  |
| --- | --- |
| memccpy(C23) | copies one buffer to another, stopping after the specified delimiter   (function) |
| memmovememmove_s(C11) | moves one buffer to another   (function) |
| wmemcpywmemcpy_s(C95)(C11) | copies a certain amount of wide characters between two non-overlapping arrays   (function) |
| C++ documentation for memcpy | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/memcpy&oldid=123807>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 November 2020, at 01:28.