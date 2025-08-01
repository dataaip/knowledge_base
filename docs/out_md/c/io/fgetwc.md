# fgetwc, getwc

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
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stdinstdoutstderr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | FILE | | | | | | fpos_t | | | | | |  | | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | File access | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fopenfopen_s(C11) | | | | | | freopenfreopen_s(C11) | | | | | | fwide(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setbuf | | | | | | setvbuf | | | | | | fclose | | | | | | fflush | | | | | |  | | | | | | | Unformatted input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fgetc | | | | | | fgets | | | | | | fputc | | | | | | fputs | | | | | | getchar | | | | | | getsgets_s(until C11)(C11) | | | | | | putchar | | | | | | puts | | | | | | ungetc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****fgetwcgetwc****(C95)(C95) | | | | | | fgetws(C95) | | | | | | fputwcputwc(C95)(C95) | | | | | | fputws(C95) | | | | | | getwchar(C95) | | | | | | putwchar(C95) | | | | | | ungetwc(C95) | | | | | |  | | | | | | | Formatted input | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scanffscanfsscanfscanf_sfscanf_ssscanf_s(C11)(C11)(C11) | | | | | | wscanffwscanfswscanfwscanf_sfwscanf_sswscanf_s(C95)(C95)(C95)(C11)(C11)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | vscanfvfscanfvsscanfvscanf_svfscanf_svsscanf_s(C99)(C99)(C99)(C11)(C11)(C11) | | | | | | vwscanfvfwscanfvswscanfvwscanf_svfwscanf_svswscanf_s(C99)(C99)(C99)(C11)(C11)(C11) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Direct input/output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fread | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fwrite | | | | | | | Formatted output | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | printffprintfsprintfsnprintfprintf_sfprintf_ssprintf_ssnprintf_s(C99)(C11)(C11)(C11)(C11) | | | | | | wprintffwprintfswprintfwprintf_sfwprintf_sswprintf_ssnwprintf_s(C95)(C95)(C95)(C11)(C11)(C11)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | vprintfvfprintfvsprintfvsnprintfvprintf_svfprintf_svsprintf_svsnprintf_s(C99)(C11)(C11)(C11)(C11) | | | | | | vwprintfvfwprintfvswprintfvwprintf_svfwprintf_svswprintf_svsnwprintf_s(C95)(C95)(C95)(C11)(C11)(C11)(C11) | | | | | | | File positioning | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ftell | | | | | | fgetpos | | | | | | fseek | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fsetpos | | | | | | rewind | | | | | |  | | | | | | | Error handling | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clearerr | | | | | | feof | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ferror | | | | | | perror | | | | | | | Operations on files | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove | | | | | | tmpfiletmpfile_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rename | | | | | | tmpnamtmpnam_s(C11) | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<wchar.h>` |  |  |
|  |  |  |
| --- | --- | --- |
| wint_t fgetwc( FILE \*stream ); |  | (since C95) |
| wint_t getwc( FILE \*stream ); |  | (since C95) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Reads the next wide character from the given input stream. getwc() may be implemented as a macro and may evaluate `stream` more than once.

### Parameters

|  |  |  |
| --- | --- | --- |
| stream | - | to read the wide character from |

### Return value

The next wide character from the stream or WEOF on failure.

If the failure has been caused by end-of-file condition, additionally sets the **eof** indicator (see feof()) on `stream`. If the failure has been caused by some other error, sets the **error** indicator (see ferror()) on `stream`.

If an encoding error occurred, additionally sets errno to `EILSEQ`.

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <errno.h>
#include <locale.h>
 
int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    FILE *fp = fopen("fgetwc.dat", "w");
    if(!fp) {
        perror("Can't open file for writing");
        return EXIT_FAILURE;
    }
    fputs("кошка\n", fp);
    fclose(fp);
 
    fp = fopen("fgetwc.dat", "r");
    if(!fp) {
        perror("Can't open file for reading");
        return EXIT_FAILURE;
    }
    wint_t wc;
    errno = 0;
    while ((wc = fgetwc(fp)) != WEOF)
        putwchar(wc);
 
    if (ferror(fp)) {
        if (errno == EILSEQ)
            puts("Character encoding error while reading.");
        else
            puts("I/O error when reading");
    } else if (feof(fp))
        puts("End of file reached successfully");
 
    fclose(fp);
}

```

Output:

```
кошка

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.29.3.1 The fgetwc function (p: 307-308)

:   - 7.29.3.6 The getwc function (p: 309)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.29.3.1 The fgetwc function (p: 421-422)

:   - 7.29.3.6 The getwc function (p: 424)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.24.3.1 The fgetwc function (p: 367)

:   - 7.24.3.6 The getwc function (p: 369)

### See also

|  |  |
| --- | --- |
| fgetcgetc | gets a character from a file stream   (function) |
| fgetws(C95) | gets a wide string from a file stream   (function) |
| fputwcputwc(C95) | writes a wide character to a file stream   (function) |
| ungetwc(C95) | puts a wide character back into a file stream   (function) |
| C++ documentation for fgetwc | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/io/fgetwc&oldid=133650>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 September 2021, at 13:00.