# quick_exit

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abort | | | | | | exit | | | | | | ****quick_exit****(C11) | | | | | | _Exit(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | atexit | | | | | | at_quick_exit(C11) | | | | | | EXIT_SUCCESSEXIT_FAILURE | | | | | |
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
| _Noreturn void quick_exit( int exit_code ); |  | (since C11)  (until C23) |
| [[noreturn]] void quick_exit( int exit_code ); |  | (since C23) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Causes normal program termination to occur without completely cleaning the resources.

Functions passed to at_quick_exit are called in reverse order of their registration. After calling the registered functions, calls _Exit(exit_code).

Functions passed to atexit or signal handlers passed to signal are not called.

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
 
void f1(void)
{
    puts("pushed first");
    fflush(stdout);
}
 
void f2(void)
{
    puts("pushed second");
}
 
void f3(void)
{
    puts("won't be called");
}
 
int main(void)
{
    at_quick_exit(f1);
    at_quick_exit(f2);
    atexit(f3);
    quick_exit(0);
}

```

Output:

```
pushed second
pushed first

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.22.4.7 The quick_exit function (p: 257)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.4.7 The quick_exit function (p: 353)

### See also

|  |  |
| --- | --- |
| abort | causes abnormal program termination (without cleaning up)   (function) |
| atexit | registers a function to be called on exit() invocation   (function) |
| at_quick_exit(C11) | registers a function to be called on ****quick_exit**** invocation   (function) |
| C++ documentation for quick_exit | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/program/quick_exit&oldid=154418>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 June 2023, at 04:42.