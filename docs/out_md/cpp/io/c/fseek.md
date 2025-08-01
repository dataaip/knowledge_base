# std::fseek

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopen | | | | | | freopen | | | | | | fclose | | | | | | fflush | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwide | | | | | | setbuf | | | | | | setvbuf | | | | | |  | | | | | | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetcgetc | | | | | | fgets | | | | | | fputcputc | | | | | | fputs | | | | | | getchar | | | | | | gets(until C++14) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetwcgetwc | | | | | | fgetws | | | | | | fputwcputwc | | | | | | fputws | | | | | | getwchar | | | | | | putwchar | | | | | | ungetwc | | | | | |  | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanf | | | | | | vscanfvfscanfvsscanf(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wscanffwscanfswscanf | | | | | | vwscanfvfwscanfvswscanf(C++11)(C++11)(C++11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintf(C++11) | | | | | | vprintfvfprintfvsprintfvsnprintf(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wprintffwprintfswprintf | | | | | | vwprintfvfwprintfvswprintf | | | | | | | File positioning | | | | | | ftell | | | | | | fgetpos | | | | | | ****fseek**** | | | | | | fsetpos | | | | | | rewind | | | | | | Error handling | | | | | | clearerr | | | | | | feof | | | | | | ferror | | | | | | perror | | | | | | Operations on files | | | | | | remove | | | | | | rename | | | | | | tmpfile | | | | | | tmpnam | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cstdio>` |  |  |
| int fseek( std::FILE\* stream, long offset, int origin ); |  |  |
|  |  |  |

Sets the file position indicator for the file stream stream.

If the stream is open in binary mode, the new position is exactly offset bytes measured from the beginning of the file if origin is SEEK_SET, from the current file position if origin is SEEK_CUR, and from the end of the file if origin is SEEK_END. Binary streams are not required to support SEEK_END, in particular if additional null bytes are output.

If the stream is open in text mode, the only supported values for offset are zero (which works with any origin) and a value returned by an earlier call to std::ftell on a stream associated with the same file (which only works with origin of SEEK_SET).

If the stream is wide-oriented, the restrictions of both text and binary streams apply (result of std::ftell is allowed with SEEK_SET and zero offset is allowed from SEEK_SET and SEEK_CUR, but not SEEK_END).

In addition to changing the file position indicator, `fseek` undoes the effects of std::ungetc and clears the end-of-file status, if applicable.

If a read or write error occurs, the error indicator for the stream (std::ferror) is set and the file position is unaffected.

### Parameters

|  |  |  |
| --- | --- | --- |
| stream | - | file stream to modify |
| offset | - | number of characters to shift the position relative to origin |
| origin | - | position to which offset is added. It can have one of the following values: SEEK_SET, SEEK_CUR, SEEK_END |

### Return value

​0​ upon success, nonzero value otherwise.

### Notes

After seeking to a non-end position in a wide stream, the next call to any output function may render the remainder of the file undefined, e.g. by outputting a multibyte sequence of a different length.

POSIX allows seeking beyond the existing end of file. If an output is performed after this seek, any read from the gap will return zero bytes. Where supported by the filesystem, this creates a **sparse file**.

POSIX also requires that `fseek` first performs fflush if there are any unwritten data (but whether the shift state is restored is implementation-defined). The standard C++ file streams guarantee both flushing and unshifting: std::basic_filebuf::seekoff.

POSIX specifies, that `fseek` should return -1 on error, and set errno to indicate the error.

On Windows, `_fseeki64` can be used to work with files larger than 2 GiB.

### Example

Run this code

```
#include <cassert>
#include <cstdio>
#include <cstdint>
#include <fstream>
#include <vector>
 
int main()
{
    std::ofstream("dummy.nfo") << "8 bytes\n"; // create the file
 
    std::FILE* fp = std::fopen("dummy.nfo", "rb");
    assert(fp);
 
    std::fseek(fp, 0, SEEK_END); // seek to end
    const std::size_t filesize = std::ftell(fp);
    std::vector<std::uint8_t> buffer(filesize);
 
    std::fseek(fp, 0, SEEK_SET); // seek to start
    std::fread(buffer.data(), sizeof(std::uint8_t), buffer.size(), fp);
 
    std::fclose(fp);
    std::printf("I've read %zi bytes\n", filesize);
}

```

Possible output:

```
I've read 8 bytes

```

### See also

|  |  |
| --- | --- |
| fsetpos | moves the file position indicator to a specific location in a file   (function) |
| fgetpos | gets the file position indicator   (function) |
| ftell | returns the current file position indicator   (function) |
| rewind | moves the file position indicator to the beginning in a file   (function) |
| C documentation for fseek | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fseek&oldid=178173>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 December 2024, at 08:18.