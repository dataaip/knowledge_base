# SIG_ERR

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abort | | | | | | exit | | | | | | quick_exit(C11) | | | | | | _Exit(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | atexit | | | | | | at_quick_exit(C11) | | | | | | EXIT_SUCCESSEXIT_FAILURE | | | | | |
| Unreachable control flow | | | | |
| unreachable(C23) | | | | |
| Communicating with the environment | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | getenvgetenv_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | system | | | | | |  | | | | | |
| Memory alignment query | | | | |
| memalignment(C23) | | | | |
| Signals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | signal | | | | | | raise | | | | | | sig_atomic_t | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | SIG_DFLSIG_IGN | | | | | | ****SIG_ERR**** | | | | | |
| Signal types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | SIGABRTSIGFPESIGILL | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | SIGINTSIGSEGVSIGTERM | | | | | |
| Non-local jumps | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | setjmp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | longjmp | | | | | |
| Types | | | | |
| jmp_buf | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<signal.h>` |  |  |
| #define SIG_ERR /\* implementation defined \*/ |  |  |
|  |  |  |

A value of type `void (*)(int)`. When returned by signal, indicates that an error has occurred.

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
 
void signal_handler(int sig)
{
    printf("Received signal: %d\n", sig);
}
 
int main(void)
{
    /* Install a signal handler. */
    if (signal(SIGTERM, signal_handler) == SIG_ERR)
    {
        printf("Error while installing a signal handler.\n");
        exit(EXIT_FAILURE);
    }
 
    printf("Sending signal: %d\n", SIGTERM);
    if (raise(SIGTERM) != 0)
    {
        printf("Error while raising the SIGTERM signal.\n");
        exit(EXIT_FAILURE);
    }
 
    printf("Exit main()\n");
    return EXIT_SUCCESS;
}

```

Output:

```
Sending signal: 15
Received signal: 15
Exit main()

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.14/3 Signal handling <signal.h> (p: 194)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.14/3 Signal handling <signal.h> (p: 265)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.14/3 Signal handling <signal.h> (p: 246)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.7 SIGNAL HANDLING <signal.h>

### See also

|  |  |
| --- | --- |
| signal | sets a signal handler for particular signal   (function) |
| C++ documentation for SIG_ERR | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/program/SIG_ERR&oldid=140334>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 June 2022, at 08:06.