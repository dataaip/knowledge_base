# aligned_alloc

From cppreference.com
< c‎ | memory
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

 Dynamic memory management

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| malloc | | | | |
| calloc | | | | |
| realloc | | | | |
| free | | | | |
| free_sized(C23) | | | | |
| free_aligned_sized(C23) | | | | |
| ****aligned_alloc****(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdlib.h>` |  |  |
| void \*aligned_alloc( size_t alignment, size_t size ); |  | (since C11) |
|  |  |  |

Allocate size bytes of uninitialized storage whose alignment is specified by alignment. The size parameter must be an integral multiple of alignment.

`aligned_alloc` is thread-safe: it behaves as though only accessing the memory locations visible through its argument, and not any static storage.

A previous call to free, free_sized, and free_aligned_sized(since C23) or realloc that deallocates a region of memory **synchronizes-with** a call to `aligned_alloc` that allocates the same or a part of the same region of memory. This synchronization occurs after any access to the memory by the deallocating function and before any access to the memory by `aligned_alloc`. There is a single total order of all allocation and deallocation functions operating on each particular region of memory.

### Parameters

|  |  |  |
| --- | --- | --- |
| alignment | - | specifies the alignment. Must be a valid alignment supported by the implementation. |
| size | - | number of bytes to allocate. An integral multiple of alignment |

### Return value

On success, returns the pointer to the beginning of newly allocated memory. To avoid a memory leak, the returned pointer must be deallocated with free or realloc.

On failure, returns a null pointer.

### Notes

Passing a size which is not an integral multiple of alignment or an alignment which is not valid or not supported by the implementation causes the function to fail and return a null pointer (C11, as published, specified undefined behavior in this case, this was corrected by DR460). Removal of size restrictions to make it possible to allocate small objects at restrictive alignment boundaries (similar to alignas) has been proposed by N2072.

As an example of the "supported by the implementation" requirement, POSIX function `posix_memalign` accepts any alignment that is a power of two and a multiple of sizeof(void \*), and POSIX-based implementations of `aligned_alloc` inherit this requirements.

Fundamental alignments are always supported. If alignment is a power of two and not greater than _Alignof(max_align_t), `aligned_alloc` may simply call malloc.

Regular malloc aligns memory suitable for any object type with a fundamental alignment. The `aligned_alloc` is useful for over-aligned allocations, such as to SSE, cache line, or VM page#Multiple_page_sizes "enwiki:Page (computer memory)") boundary.

This function is not supported in Microsoft C Runtime library because its implementation of std::free is unable to handle aligned allocations of any kind. Instead, MS CRT provides `_aligned_malloc` (to be freed with `_aligned_free`).

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *p1 = malloc(10*sizeof *p1);
    printf("default-aligned addr:   %p\n", (void*)p1);
    free(p1);
 
    int *p2 = aligned_alloc(1024, 1024*sizeof *p2);
    printf("1024-byte aligned addr: %p\n", (void*)p2);
    free(p2);
}

```

Possible output:

```
default-aligned addr:   0x1e40c20
1024-byte aligned addr: 0x1e41000

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.22.3.1 The aligned_alloc function (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.22.3.1 The aligned_alloc function (p: 253)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.3.1 The aligned_alloc function (p: 347-348)

### See also

|  |  |
| --- | --- |
| C++ documentation for aligned_alloc | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/memory/aligned_alloc&oldid=157842>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 September 2023, at 17:12.