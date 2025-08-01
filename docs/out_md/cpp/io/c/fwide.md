# std::fwide

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopen | | | | | | freopen | | | | | | fclose | | | | | | fflush | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****fwide**** | | | | | | setbuf | | | | | | setvbuf | | | | | |  | | | | | | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetcgetc | | | | | | fgets | | | | | | fputcputc | | | | | | fputs | | | | | | getchar | | | | | | gets(until C++14) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetwcgetwc | | | | | | fgetws | | | | | | fputwcputwc | | | | | | fputws | | | | | | getwchar | | | | | | putwchar | | | | | | ungetwc | | | | | |  | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanf | | | | | | vscanfvfscanfvsscanf(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wscanffwscanfswscanf | | | | | | vwscanfvfwscanfvswscanf(C++11)(C++11)(C++11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintf(C++11) | | | | | | vprintfvfprintfvsprintfvsnprintf(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wprintffwprintfswprintf | | | | | | vwprintfvfwprintfvswprintf | | | | | | | File positioning | | | | | | ftell | | | | | | fgetpos | | | | | | fseek | | | | | | fsetpos | | | | | | rewind | | | | | | Error handling | | | | | | clearerr | | | | | | feof | | | | | | ferror | | | | | | perror | | | | | | Operations on files | | | | | | remove | | | | | | rename | | | | | | tmpfile | | | | | | tmpnam | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| int fwide( std::FILE\* stream, int mode ); |  |  |
|  |  |  |

If mode > 0, attempts to make stream wide-oriented. If mode < 0, attempts to make stream byte-oriented. If mode == 0, only queries the current orientation of the stream.

If the orientation of the stream has already been decided (by executing output or by an earlier call to fwide), this function does nothing.

### Parameters

|  |  |  |
| --- | --- | --- |
| stream | - | pointer to the C I/O stream to modify or query |
| mode | - | integer value greater than zero to set the stream wide, less than zero to set the stream narrow, or zero to query only |

### Return value

An integer greater than zero if the stream is wide-oriented after this call, less than zero if the stream is byte-oriented after this call, and zero if the stream has no orientation.

### Example

The following code sets and resets the stream orientation.

Run this code

```
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <iostream>
 
void show_orientation(int n)
{
    n < 0 ? std::wcout << "\tnarrow orientation\n" :
    n > 0 ? std::wcout << "\twide orientation\n" :
            std::wcout << "\tno orientation\n";
}
 
void try_read(FILE* fp)
{
    if (const int c = std::fgetc(fp); c == EOF)
        std::wcout << "\tnarrow character read failed\n";
    else
        std::wcout << "\tnarrow character read '" << static_cast<char>(c) << "'\n";
 
    if (const wint_t wc = std::fgetwc(fp); wc == WEOF)
        std::wcout << "\twide character read failed\n";
    else
        std::wcout << "\twide character read '" << static_cast<wchar_t>(wc) << "'\n";
}
 
int main()
{
    enum fwide_orientation : int { narrow = -1, query, wide };
 
    FILE* fp = std::fopen("main.cpp", "r");
    if (!fp)
    {
        std::wcerr << "fopen() failed\n";
        return EXIT_FAILURE;
    }
 
    std::wcout << "1) A newly opened stream has no orientation.\n";
    show_orientation(std::fwide(fp, fwide_orientation::query));
 
    std::wcout << "2) Establish byte orientation.\n";
    show_orientation(std::fwide(fp, fwide_orientation::narrow));
    try_read(fp);
 
    std::wcout << "3) Only freopen() can reset stream orientation.\n";
    if (std::freopen("main.cpp", "r", fp) == NULL)
    {
        std::wcerr << "freopen() failed\n";
        return EXIT_FAILURE;
    }
 
    std::wcout << "4) A reopened stream has no orientation.\n";
    show_orientation(std::fwide(fp, fwide_orientation::query));
 
    std::wcout << "5) Establish wide orientation.\n";
    show_orientation(std::fwide(fp, fwide_orientation::wide));
    try_read(fp);
 
    std::fclose(fp);
}

```

Possible output:

```
1) A newly opened stream has no orientation.
        no orientation
2) Establish byte orientation.
        narrow orientation
        narrow character read '#'
        wide character read failed
3) Only freopen() can reset stream orientation.
4) A reopened stream has no orientation.
        no orientation
5) Establish wide orientation.
        wide orientation
        narrow character read failed
        wide character read '#'

```

### See also

|  |  |
| --- | --- |
| fopen | opens a file   (function) |
| C documentation for fwide | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fwide&oldid=158705>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 September 2023, at 10:47.