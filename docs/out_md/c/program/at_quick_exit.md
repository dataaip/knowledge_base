# at_quick_exit

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | abort | | | | | | exit | | | | | | quick_exit(C11) | | | | | | _Exit(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | atexit | | | | | | ****at_quick_exit****(C11) | | | | | | EXIT_SUCCESSEXIT_FAILURE | | | | | |
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
| int at_quick_exit( void (\*func)(void) ); |  | (since C11) |
|  |  |  |

Registers the function pointed to by `func` to be called on quick program termination (via quick_exit).

Calling the function from several threads does not induce a data race. The implementation is guaranteed to support the registration of at least 32 functions. The exact limit is implementation-defined.

The registered functions will not be called on normal program termination. If a function need to be called in that case, atexit must be used.

### Parameters

|  |  |  |
| --- | --- | --- |
| func | - | pointer to a function to be called on quick program termination |

### Return value

​0​ if the registration succeeds, nonzero value otherwise.

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
 
int main(void)
{
    at_quick_exit(f1);
    at_quick_exit(f2);
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

:   - 7.22.4.3 The at_quick_exit function (p: 255)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.4.3 The at_quick_exit function (p: 351)

### See also

|  |  |
| --- | --- |
| abort | causes abnormal program termination (without cleaning up)   (function) |
| exit | causes normal program termination with cleaning up   (function) |
| atexit | registers a function to be called on exit() invocation   (function) |
| quick_exit(C11) | causes normal program termination without completely cleaning up   (function) |
| C++ documentation for at_quick_exit | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/program/at_quick_exit&oldid=144355>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 October 2022, at 23:14.