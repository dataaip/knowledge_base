# std::tmpfile

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopen | | | | | | freopen | | | | | | fclose | | | | | | fflush | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwide | | | | | | setbuf | | | | | | setvbuf | | | | | |  | | | | | | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetcgetc | | | | | | fgets | | | | | | fputcputc | | | | | | fputs | | | | | | getchar | | | | | | gets(until C++14) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetwcgetwc | | | | | | fgetws | | | | | | fputwcputwc | | | | | | fputws | | | | | | getwchar | | | | | | putwchar | | | | | | ungetwc | | | | | |  | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanf | | | | | | vscanfvfscanfvsscanf(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wscanffwscanfswscanf | | | | | | vwscanfvfwscanfvswscanf(C++11)(C++11)(C++11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintf(C++11) | | | | | | vprintfvfprintfvsprintfvsnprintf(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wprintffwprintfswprintf | | | | | | vwprintfvfwprintfvswprintf | | | | | | | File positioning | | | | | | ftell | | | | | | fgetpos | | | | | | fseek | | | | | | fsetpos | | | | | | rewind | | | | | | Error handling | | | | | | clearerr | | | | | | feof | | | | | | ferror | | | | | | perror | | | | | | Operations on files | | | | | | remove | | | | | | rename | | | | | | ****tmpfile**** | | | | | | tmpnam | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cstdio>` |  |  |
| std::FILE\* tmpfile(); |  |  |
|  |  |  |

Creates and opens a temporary file with a unique auto-generated filename.

The file is opened as a binary file for update (as by std::fopen with access mode "wb+"). At least TMP_MAX files may be opened during the lifetime of a program (this limit may be shared with std::tmpnam and may be further limited by FOPEN_MAX).

If the program closes the file, e.g. by executing std::fclose, the file is automatically deleted.

If the program terminates normally (by calling std::exit, returning from main, etc), all files that were opened by calling `std::tmpfile` are also automatically deleted.

If the program terminates abnormally, it is implementation-defined if these temporary files are deleted.

### Parameters

(none)

### Return value

The associated file stream or a null pointer if an error has occurred.

### Notes

On some implementations (e.g. older Linux), this function actually creates, opens, and immediately deletes the file from the file system: as long as an open file descriptor to a deleted file is held by a program, the file exists, but since it was deleted, its name does not appear in any directory, so that no other process can open it. Once the file descriptor is closed, or once the program terminates (normally or abnormally), the space occupied by the file is reclaimed by the filesystem. Newer Linux (since 3.11 or later, depending on filesystem) creates such invisible temporary files in one step, via special flag in the `open()` syscall.

On some implementations (e.g. Windows), elevated privileges are required as the function may create the temporary file in a system directory.

### Example

Run this code

```
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
 
int main()
{
    std::cout << "TMP_MAX = " << TMP_MAX << '\n'
              << "FOPEN_MAX = " << FOPEN_MAX << '\n';
    std::FILE* tmpf = std::tmpfile();
    std::fputs("Hello, world", tmpf);
    std::rewind(tmpf);
    char buf[6];
    std::fgets(buf, sizeof buf, tmpf);
    std::cout << buf << '\n';
 
    // Linux-specific method to display the tmpfile name
    std::cout << fs::read_symlink(
                     fs::path("/proc/self/fd") / std::to_string(fileno(tmpf))
                 ) << '\n';
}

```

Possible output:

```
TMP_MAX = 238328
FOPEN_MAX = 16
Hello
"/tmp/tmpfBlY1lI (deleted)"

```

### See also

|  |  |
| --- | --- |
| tmpnam | returns a unique filename   (function) |
| temp_directory_path(C++17) | returns a directory suitable for temporary files   (function) |
| C documentation for tmpfile | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/tmpfile&oldid=158990>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 September 2023, at 11:25.