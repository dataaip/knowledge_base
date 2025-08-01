# Dynamic memory extensions

From cppreference.com
< c‎ | experimental
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

 Technical Specifications

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Extensions for embedded processors") | | | | |
| ****Dynamic memory extensions**** | | | | |
| Floating-point extensions part 1: Binary floating-point | | | | |
| Floating-point extensions part 4: Supplementary functions | | | | |

 ****Dynamic memory extensions****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| fmemopen") | | | | |
| open_memstreamopen_wmemstream") | | | | |
| asprintfaswprintfvasprintfvaswprintf | | | | |
| getlinegetwlinegetdelimgetwdelim | | | | |
| strdup | | | | |
| strndup | | | | |

Extensions to the C Library Part II: Dynamic Allocation Functions, ISO/IEC TR 24731-2:2010, defines the following new components for the C standard library:

|  |  |
| --- | --- |
| __STDC_ALLOC_LIB__ | integer constant of type long indicating conformance level   (macro constant) |
| Defined in header `<stdio.h>` | |
| fmemopen")(dynamic memory TR) | opens a fixed-size memory buffer as an I/O stream   (function) |
| open_memstreamopen_wmemstream")(dynamic memory TR) | opens a dynamically resized memory buffer as an I/O stream   (function) |
| asprintfaswprintfvasprintfvaswprintf(dynamic memory TR) | variants of sprintf etc that write to automatically-allocated buffer and return a pointer to it   (function) |
| getlinegetwlinegetdelimgetwdelim(dynamic memory TR) | read from a stream into an automatically resized buffer until delimiter/end of line   (function) |
| Defined in header `<string.h>` | |
| strdup(dynamic memory TR) | allocate a copy of a string   (function) |
| strndup(dynamic memory TR) | allocate a copy of a string up to specified size   (function) |

This library extension also introduces assignment-allocation character `m` for use with `%s`, `%`, and `%c` conversion specifiers in [fscanf and fwscanf family of functions.

### Notes

The functions `fmemopen`, `open_memstream`, `open_wmemstream`, `getdelim`, `getline`, `strdup`, `strndup`, and the extensions to `fscanf` are available in POSIX (ISO/IEC 9945:2003).

The functions `asprintf` and `vasprintf` are available in Linux Standard Base (ISO/IEC IS 23360:2006)

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/experimental/dynamic&oldid=104628>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 July 2018, at 17:55.