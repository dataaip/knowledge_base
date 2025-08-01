# std::fgetws

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopen | | | | | | freopen | | | | | | fclose | | | | | | fflush | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwide | | | | | | setbuf | | | | | | setvbuf | | | | | |  | | | | | | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetcgetc | | | | | | fgets | | | | | | fputcputc | | | | | | fputs | | | | | | getchar | | | | | | gets(until C++14) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetwcgetwc | | | | | | ****fgetws**** | | | | | | fputwcputwc | | | | | | fputws | | | | | | getwchar | | | | | | putwchar | | | | | | ungetwc | | | | | |  | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanf | | | | | | vscanfvfscanfvsscanf(C++11)(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wscanffwscanfswscanf | | | | | | vwscanfvfwscanfvswscanf(C++11)(C++11)(C++11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintf(C++11) | | | | | | vprintfvfprintfvsprintfvsnprintf(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wprintffwprintfswprintf | | | | | | vwprintfvfwprintfvswprintf | | | | | | | File positioning | | | | | | ftell | | | | | | fgetpos | | | | | | fseek | | | | | | fsetpos | | | | | | rewind | | | | | | Error handling | | | | | | clearerr | | | | | | feof | | | | | | ferror | | | | | | perror | | | | | | Operations on files | | | | | | remove | | | | | | rename | | | | | | tmpfile | | | | | | tmpnam | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| wchar_t\* fgetws( wchar_t\* str, int count, std::FILE\* stream ); |  |  |
|  |  |  |

Reads at most count - 1 wide characters from the given file stream and stores them in str. The produced wide string is always null-terminated. Parsing stops if end-of-file occurs or a newline wide character is found, in which case str will contain that wide newline character.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | wide string to read the characters to |
| count | - | the length of str |
| stream | - | file stream to read the data from |

### Return value

str on success, a null pointer on an error.

### Example

Run this code

```
#include <array>
#include <clocale>
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <cwctype>
#include <iomanip>
#include <iostream>
#include <span>
#include <string>
 
void dump(std::span<const wchar_t> sp, std::size_t width = 14)
{
    for (wchar_t wc : sp)
        std::wcout << (std::iswprint(wc) ? wc : L'.');
    std::wcout << std::wstring(width > sp.size() ? width - sp.size() : 1, L' ')
               << std::hex << std::uppercase << std::setfill(L'0');
    for (wchar_t wc : sp)
        std::wcout << std::setw(sizeof wc) << static_cast<unsigned>(wc) << ' ';
    std::wcout << '\n';
}
 
int main()
{
    // Create temp file that contains wide characters
    std::setlocale(LC_ALL, "en_US.utf8");
    std::FILE* tmpf = std::tmpfile();
 
    for (const wchar_t* text : {
        L"Tétraèdre"    L"\n",
        L"Cube"         L"\n",
        L"Octaèdre"     L"\n",
        L"Icosaèdre"    L"\n",
        L"Dodécaèdre"   L"\n"
        })
        if (int rc = std::fputws(text, tmpf); rc == EOF)
        {
            std::perror("fputws()"); // POSIX requires that errno is set
            return EXIT_FAILURE;
        }
 
    std::rewind(tmpf);
 
    std::array<wchar_t, 12> buf;
    while (std::fgetws(buf.data(), buf.size(), tmpf) != nullptr)
        dump(std::span(buf.data(), buf.size()));
 
    return EXIT_SUCCESS;
}

```

Possible output:

```
Tétraèdre...  0054 00E9 0074 0072 0061 00E8 0064 0072 0065 000A 0000 0000 
Cube..dre...  0043 0075 0062 0065 000A 0000 0064 0072 0065 000A 0000 0000 
Octaèdre....  004F 0063 0074 0061 00E8 0064 0072 0065 000A 0000 0000 0000 
Icosaèdre...  0049 0063 006F 0073 0061 00E8 0064 0072 0065 000A 0000 0000 
Dodécaèdre..  0044 006F 0064 00E9 0063 0061 00E8 0064 0072 0065 000A 0000

```

### See also

|  |  |
| --- | --- |
| wscanffwscanfswscanf | reads formatted wide character input from stdin, a file stream or a buffer   (function) |
| fgetwcgetwc | gets a wide character from a file stream   (function) |
| fputws | writes a wide string to a file stream   (function) |
| C documentation for fgetws | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fgetws&oldid=160021>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 October 2023, at 13:07.