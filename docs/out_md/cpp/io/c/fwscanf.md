# std::wscanf, std::fwscanf, std::swscanf

From cppreference.com
< cpp‎ | io‎ | c
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

C-style I/O

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Types and objects | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | FILE | | | | | | fpos_t | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stdinstdoutstderr | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopen | | | | | | freopen | | | | | | fclose | | | | | | fflush | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwide | | | | | | setbuf | | | | | | setvbuf | | | | | |  | | | | | | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetcgetc | | | | | | fgets | | | | | | fputcputc | | | | | | fputs | | | | | | getchar | | | | | | gets(until C++14) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetwcgetwc | | | | | | fgetws | | | | | | fputwcputwc | | | | | | fputws | | | | | | getwchar | | | | | | putwchar | | | | | | ungetwc | | | | | |  | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanf | | | | | | vscanfvfscanfvsscanf(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****wscanffwscanfswscanf**** | | | | | | vwscanfvfwscanfvswscanf(C++11)(C++11)(C++11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintf(C++11) | | | | | | vprintfvfprintfvsprintfvsnprintf(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wprintffwprintfswprintf | | | | | | vwprintfvfwprintfvswprintf | | | | | | | File positioning | | | | | | ftell | | | | | | fgetpos | | | | | | fseek | | | | | | fsetpos | | | | | | rewind | | | | | | Error handling | | | | | | clearerr | | | | | | feof | | | | | | ferror | | | | | | perror | | | | | | Operations on files | | | | | | remove | | | | | | rename | | | | | | tmpfile | | | | | | tmpnam | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| int wscanf( const wchar_t\* format, ... ); | (1) |  |
| int fwscanf( std::FILE\* stream, const wchar_t\* format, ... ); | (2) |  |
| int swscanf( const wchar_t\* buffer, const wchar_t\* format, ... ); | (3) |  |
|  |  |  |

Reads data from the a variety of sources, interprets it according to `format` and stores the results into given locations.

1) Reads the data from stdin.2) Reads the data from file stream `stream`.3) Reads the data from null-terminated wide string `buffer`.

### Parameters

|  |  |  |
| --- | --- | --- |
| stream | - | input file stream to read from |
| buffer | - | pointer to a null-terminated wide string to read from |
| format | - | pointer to a null-terminated wide string specifying how to read the input |
| ... | - | receiving arguments. |

The ****format**** string consists of

- non-whitespace wide characters except %: each such character in the format string consumes exactly one identical character from the input stream, or causes the function to fail if the next character on the stream does not compare equal.
- whitespace characters: any single whitespace character in the format string consumes all available consecutive whitespace characters from the input (determined as if by calling iswspace in a loop). Note that there is no difference between "\n", " ", "\t\t", or other whitespace in the format string.
- conversion specifications. Each conversion specification has the following format:

:   - introductory % character.

:   - (optional) assignment-suppressing character \*. If this option is present, the function does not assign the result of the conversion to any receiving argument.

:   - (optional) integer number (greater than zero) that specifies **maximum field width**, that is, the maximum number of characters that the function is allowed to consume when doing the conversion specified by the current conversion specification. Note that %s and %[ may lead to buffer overflow if the width is not provided.

:   - (optional) **length modifier** that specifies the size of the receiving argument, that is, the actual destination type. This affects the conversion accuracy and overflow rules. The default destination type is different for each conversion type (see table below).

:   - conversion format specifier.

The following format specifiers are available:

| Conversion specifier | Explanation | Argument type | | | | | | | | |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| ****Length modifier →**** | | `hh` (C++11) | `h` | (none) | `l` | `ll` (C++11) | `j` (C++11) | `z` (C++11) | `t` (C++11) | `L` |
| `%` | Matches literal `%`. | N/A | N/A | N/A | N/A | N/A | N/A | N/A | N/A | N/A |
| `c` | Matches a ****character**** or a sequence of ****characters****.  If a width specifier is used, matches exactly **width** wide characters (the argument must be a pointer to an array with sufficient room). Unlike %s and %[, does not append the null character to the array. | N/A | N/A | char\* | wchar_t\* | N/A | N/A | N/A | N/A | N/A |
| `s` | Matches a sequence of non-whitespace characters (a ****string****).  If width specifier is used, matches up to **width** or until the first whitespace character, whichever appears first. Always stores a null character in addition to the characters matched (so the argument array must have room for at least **width+1** characters) |
| `[`set`]` | Matches a non-empty sequence of character from set of characters.  If the first character of the set is `^`, then all characters not in the set are matched. If the set begins with `]` or `^]` then the `]` character is also included into the set. It is implementation-defined whether the character `-` in the non-initial position in the scanset may be indicating a range, as in `[0-9]`. If width specifier is used, matches only up to **width**. Always stores a null character in addition to the characters matched (so the argument array must have room for at least **width+1** characters) |
| `d` | Matches a ****decimal integer****.  The format of the number is the same as expected by wcstol with the value 10 for the `base` argument | signed char\* or unsigned char\* | signed short\* or unsigned short\* | signed int\* or unsigned int\* | signed long\* or unsigned long\* | signed long long\* or unsigned long long\* | intmax_t\* or uintmax_t\* | size_t\* | ptrdiff_t\* | N/A |
| `i` | Matches an ****integer****.  The format of the number is the same as expected by wcstol with the value ​0​ for the `base` argument (base is determined by the first characters parsed) |
| `u` | Matches an unsigned ****decimal integer****.  The format of the number is the same as expected by wcstoul with the value 10 for the `base` argument. |
| `o` | Matches an unsigned ****octal integer****.  The format of the number is the same as expected by wcstoul with the value 8 for the `base` argument |
| `x`, `X` | Matches an unsigned ****hexadecimal integer****.  The format of the number is the same as expected by wcstoul with the value 16 for the `base` argument |
| `n` | Returns the ****number of characters read so far****.  No input is consumed. Does not increment the assignment count. If the specifier has assignment-suppressing operator defined, the behavior is undefined |
| `a`, `A`(C++11) `e`, `E` `f`, `F` `g`, `G` | Matches a ****floating-point number****.  The format of the number is the same as expected by wcstof | N/A | N/A | float\* | double\* | N/A | N/A | N/A | N/A | long double\* |
| `p` | Matches implementation defined character sequence defining a ****pointer****.  `printf` family of functions should produce the same sequence using `%p` format specifier | N/A | N/A | void\*\* | N/A | N/A | N/A | N/A | N/A | N/A |

For every conversion specifier other than n, the longest sequence of input characters which does not exceed any specified ﬁeld width and which either is exactly what the conversion specifier expects or is a prefix of a sequence it would expect, is what's consumed from the stream. The ﬁrst character, if any, after this consumed sequence remains unread. If the consumed sequence has length zero or if the consumed sequence cannot be converted as specified above, the matching failure occurs unless end-of-ﬁle, an encoding error, or a read error prevented input from the stream, in which case it is an input failure.

All conversion specifiers other than , c, and n consume and discard all leading whitespace characters (determined as if by calling [iswspace) before attempting to parse the input. These consumed characters do not count towards the specified maximum field width.

If the length specifier l is not used, the conversion specifiers c, s, and  perform wide-to-multibyte character conversion as if by calling [wcrtomb with an mbstate_t object initialized to zero before the first character is converted.

The conversion specifiers s and  always store the null terminator in addition to the matched characters. The size of the destination array must be at least one greater than the specified field width. The use of %s or %[, without specifying the destination array size, is as unsafe as [std::gets.

The correct conversion specifications for the fixed-width integer types (int8_t, etc) are defined in the header <cinttypes> (although SCNdMAX, SCNuMAX, etc is synonymous with %jd, %ju, etc).

There is a sequence point after the action of each conversion specifier; this permits storing multiple fields in the same "sink" variable.

When parsing an incomplete floating-point value that ends in the exponent with no digits, such as parsing "100er" with the conversion specifier %f, the sequence "100e" (the longest prefix of a possibly valid floating-point number) is consumed, resulting in a matching error (the consumed sequence cannot be converted to a floating-point number), with "r" remaining. Some existing implementations do not follow this rule and roll back to consume only "100", leaving "er", e.g. glibc bug 1765.

A conversion specification must be valid. Otherwise, the behavior is undefined.

### Return value

Number of arguments successfully read, or EOF if failure occurs before the first receiving argument was assigned.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| vwscanfvfwscanfvswscanf(C++11)(C++11)(C++11) | reads formatted wide character input from stdin, a file stream or a buffer using variable argument list   (function) |
| C documentation for wscanf, fwscanf, swscanf | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fwscanf&oldid=125687>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 January 2021, at 15:43.