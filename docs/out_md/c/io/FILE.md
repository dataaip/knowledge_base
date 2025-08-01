# FILE

From cppreference.com
< c‎ | io
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

 File input/output

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Types and objects | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stdinstdoutstderr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****FILE**** | | | | | | fpos_t | | | | | |  | | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopenfopen_s(C11) | | | | | | freopenfreopen_s(C11) | | | | | | fwide(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setbuf | | | | | | setvbuf | | | | | | fclose | | | | | | fflush | | | | | |  | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetc | | | | | | fgets | | | | | | fputc | | | | | | fputs | | | | | | getchar | | | | | | getsgets_s(until C11)(C11) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetwcgetwc(C95)(C95) | | | | | | fgetws(C95) | | | | | | fputwcputwc(C95)(C95) | | | | | | fputws(C95) | | | | | | getwchar(C95) | | | | | | putwchar(C95) | | | | | | ungetwc(C95) | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanfscanf_sfscanf_ssscanf_s(C11)(C11)(C11) | | | | | | wscanffwscanfswscanfwscanf_sfwscanf_sswscanf_s(C95)(C95)(C95)(C11)(C11)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | vscanfvfscanfvsscanfvscanf_svfscanf_svsscanf_s(C99)(C99)(C99)(C11)(C11)(C11) | | | | | | vwscanfvfwscanfvswscanfvwscanf_svfwscanf_svswscanf_s(C99)(C99)(C99)(C11)(C11)(C11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintfprintf_sfprintf_ssprintf_ssnprintf_s(C99)(C11)(C11)(C11)(C11) | | | | | | wprintffwprintfswprintfwprintf_sfwprintf_sswprintf_ssnwprintf_s(C95)(C95)(C95)(C11)(C11)(C11)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | vprintfvfprintfvsprintfvsnprintfvprintf_svfprintf_svsprintf_svsnprintf_s(C99)(C11)(C11)(C11)(C11) | | | | | | vwprintfvfwprintfvswprintfvwprintf_svfwprintf_svswprintf_svsnwprintf_s(C95)(C95)(C95)(C11)(C11)(C11)(C11) | | | | | | | File positioning | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ftell | | | | | | fgetpos | | | | | | fseek | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fsetpos | | | | | | rewind | | | | | |  | | | | | | | Error handling | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clearerr | | | | | | feof | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ferror | | | | | | perror | | | | | | | Operations on files | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove | | | | | | tmpfiletmpfile_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rename | | | | | | tmpnamtmpnam_s(C11) | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdio.h>` |  |  |
| typedef /\* unspecified \*/ FILE; |  |  |
|  |  |  |

Each `FILE` object denotes a C stream.

C standard does not specify whether `FILE` is a complete object type. While it may be possible to copy a valid `FILE`, using a pointer to such a copy as an argument for an I/O function invokes unspecified behavior. In other words, `FILE` may be semantically non-copyable.

I/O streams can be used for both unformatted and formatted input and output. Furthermore, the functions that handle input and output can also be locale-sensitive, such that wide/multibyte conversions are performed as necessary.

### Stream state

Besides the system-specific information necessary to access the device (**e.g.,** a POSIX file descriptor), each `FILE` object directly or indirectly holds the following:

1. (C95) Character width: unset, narrow, or wide.
2. (C95) Parse state for conversions between multibyte and wide characters (an object of type mbstate_t)
3. Buffering state: unbuffered, line-buffered, fully buffered.
4. The buffer, which may be replaced by an external, user-provided buffer.
5. I/O mode: input, output, or update (both input and output).
6. Binary/text mode indicator.
7. End-of-file status indicator.
8. Error status indicator.
9. File position indicator, accessible as an object of type fpos_t, which, for wide streams, includes parse state.
10. (C11) Reentrant lock used to prevent data races when multiple threads read, write, position, or query the position of a stream.

#### Narrow and wide orientation

A newly opened stream has no orientation. The first call to fwide or to any I/O function establishes the orientation: a wide I/O function makes the stream wide-oriented; a narrow I/O function makes the stream narrow-oriented. Once set, the orientation can be changed with only freopen. Narrow I/O functions cannot be called on a wide-oriented stream; wide I/O functions cannot be called on a narrow-oriented stream. Wide I/O functions convert between wide and multibyte characters as if by calling mbrtowc or wcrtomb with the conversion state as described by the stream. Unlike the multibyte character strings that are valid in a program, multibyte character sequences in the file may contain embedded nulls and do not have to begin or end in the initial shift state.

The conversion state of a stream with wide orientation is established by the C locale that is installed at the time the stream's orientation is set.

#### Binary and text modes

A **text stream** is an ordered sequence of characters that can be composed into lines; a line can be decomposed into zero or more characters plus a terminating '\n' (“newline”) character. Whether the last line requires a terminating '\n' is implementation-defined. Furthermore, characters may have to be added, altered, or deleted on input and output to conform to the conventions for representing text in the OS (in particular, C streams on Windows OS convert '\n' to '\r\n' on output, and convert '\r\n' to '\n' on input).

Data read in from a text stream is guaranteed to compare equal to the data that were earlier written out to that stream only if each of the following is true:

- The data consist of only printing characters and/or the control characters '\t' and '\n' (in particular, on Windows OS, the character '\0x1A' terminates input).
- No '\n' character is immediately preceded by space characters (such space characters may disappear when such output is later read as input).
- The last character is '\n'.

A **binary stream** is an ordered sequence of characters that can transparently record internal data. Data read in from a binary stream always equal the data that were earlier written out to that stream, except that an implementation is allowed to append an indeterminate number of null characters to the end of the stream. A wide binary stream doesn't need to end in the initial shift state.

### Notes

POSIX explicitly requires that the `LC_CTYPE` facet of the currently installed C locale be stored within the `FILE` object the moment the stream's orientation becomes wide; POSIX requires that this `LC_CTYPE` facet be used for all future I/O on this stream until the orientation is changed, regardless of any subsequent call to setlocale.

It is intended that each line of text be composed of data that are essentially human-readable. POSIX implementations do not distinguish between text and binary streams (there is no special mapping for '\n' or any other characters).

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.21 Input/output <stdio.h> (p: 217-247)

:   - 7.29 Extended multibyte and wide character utilities <wchar.h> (p: 295-325)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.21 Input/output <stdio.h> (p: 296-339)

:   - 7.29 Extended multibyte and wide character utilities <wchar.h> (p: 402-446)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.19 Input/output <stdio.h> (p: 262-305)

:   - 7.24 Extended multibyte and wide character utilities <wchar.h> (p: 348-392)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.9 INPUT/OUTPUT <stdio.h>

### See also

|  |  |
| --- | --- |
| stdinstdoutstderr | expression of type FILE\* associated with the input stream expression of type FILE\* associated with the output stream expression of type FILE\* associated with the error output stream   (macro constant) |
| C++ documentation for FILE | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/io/FILE&oldid=151194>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 April 2023, at 15:06.