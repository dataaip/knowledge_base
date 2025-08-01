# _Exit

From cppreference.com
< c‎ | program
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

 Program support utilities

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Program termination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abort | | | | | | exit | | | | | | quick_exit(C11) | | | | | | ****_Exit****(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | atexit | | | | | | at_quick_exit(C11) | | | | | | EXIT_SUCCESSEXIT_FAILURE | | | | | |
| Unreachable control flow | | | | |
| unreachable(C23) | | | | |
| Communicating with the environment | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | getenvgetenv_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | system | | | | | |  | | | | | |
| Memory alignment query | | | | |
| memalignment(C23) | | | | |
| Signals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | signal | | | | | | raise | | | | | | sig_atomic_t | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | SIG_DFLSIG_IGN | | | | | | SIG_ERR | | | | | |
| Signal types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | SIGABRTSIGFPESIGILL | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | SIGINTSIGSEGVSIGTERM | | | | | |
| Non-local jumps | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setjmp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | longjmp | | | | | |
| Types | | | | |
| jmp_buf | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdlib.h>` |  |  |
|  |  |  |
| --- | --- | --- |
| void _Exit( int exit_code ); |  | (since C99)  (until C11) |
| _Noreturn void _Exit( int exit_code ); |  | (since C11)  (until C23) |
| [[noreturn]] void _Exit( int exit_code ); |  | (since C23) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Causes normal program termination to occur without completely cleaning the resources.

Functions passed to at_quick_exit() or atexit() are not called. Whether open streams with unwritten buffered data are flushed, open streams are closed, or temporary files are removed is implementation-defined.

If `exit_code` is 0 or EXIT_SUCCESS, an implementation-defined status indicating successful termination is returned to the host environment. If `exit_code` is EXIT_FAILURE, an implementation-defined status, indicating **unsuccessful** termination, is returned. In other cases an implementation-defined status value is returned.

### Parameters

|  |  |  |
| --- | --- | --- |
| exit_code | - | exit status of the program |

### Return value

(none)

### Example

Run this code

```
#include <stdlib.h>
#include <stdio.h>
 
/* _Exit does not call functions registered with atexit. */
void f1(void)
{
    puts("pushed first");
}
 
void f2(void)
{
    puts("pushed second");
}
 
int main(void)
{
    printf("Enter main()\n");
    atexit(f1);
    atexit(f2);
    fflush(stdout);   /* _Exit may not flush unwritten buffered data */
    _Exit(0);
}

```

Output:

```
Enter main()

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.22.4.5 The _Exit function (p: 256)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.4.5 The _Exit function (p: 352)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.20.4.4 The _Exit function (p: 316)

### See also

|  |  |
| --- | --- |
| abort | causes abnormal program termination (without cleaning up)   (function) |
| exit | causes normal program termination with cleaning up   (function) |
| C++ documentation for _Exit | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/program/_Exit&oldid=154416>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 June 2023, at 04:37.