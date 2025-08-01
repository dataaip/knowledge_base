# FE_DFL_ENV

From cppreference.com
< c‎ | numeric‎ | fenv
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

 Numerics

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Common mathematical functions | | | | |
| Floating-point environment (C99) | | | | |
| Pseudo-random number generation | | | | |
| Complex number arithmetic (C99) | | | | |
| Type-generic math (C99) | | | | |
| Bit manipulation (C23) | | | | |
| Checked integer arithmetic (C23) | | | | |

 Floating-point environment

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| feclearexcept(C99) | | | | |
| fetestexcept(C99) | | | | |
| feraiseexcept(C99) | | | | |
| fegetexceptflagfesetexceptflag(C99)(C99) | | | | |
| fegetroundfesetround(C99)(C99) | | | | |
| fegetenvfesetenv(C99) | | | | |
| feholdexcept(C99) | | | | |
| feupdateenv(C99) | | | | |
| Macro constants | | | | |
| FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW(C99) | | | | |
| FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD(C99) | | | | |
| ****FE_DFL_ENV****(C99) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<fenv.h>` |  |  |
| #define FE_DFL_ENV  /\*implementation defined\*/ |  | (since C99) |
|  |  |  |

The macro constant ****FE_DFL_ENV**** expands to an expression of type const fenv_t\*, which points to a full copy of the default floating-point environment, that is, the environment as loaded at program startup.

Additional macros that begin with `FE_` followed by uppercase letters, and have the type const fenv_t\*, may be supported by an implementation.

### Example

Run this code

```
#include <stdio.h>
#include <fenv.h>
 
#pragma STDC FENV_ACCESS ON
 
void show_fe_exceptions(void)
{
    printf("current exceptions raised: ");
    if(fetestexcept(FE_DIVBYZERO))     printf(" FE_DIVBYZERO");
    if(fetestexcept(FE_INEXACT))       printf(" FE_INEXACT");
    if(fetestexcept(FE_INVALID))       printf(" FE_INVALID");
    if(fetestexcept(FE_OVERFLOW))      printf(" FE_OVERFLOW");
    if(fetestexcept(FE_UNDERFLOW))     printf(" FE_UNDERFLOW");
    if(fetestexcept(FE_ALL_EXCEPT)==0) printf(" none");
    printf("\n");
}
 
void show_fe_rounding_method(void)
{
    printf("current rounding method:    ");
    switch (fegetround()) {
           case FE_TONEAREST:  printf ("FE_TONEAREST");  break;
           case FE_DOWNWARD:   printf ("FE_DOWNWARD");   break;
           case FE_UPWARD:     printf ("FE_UPWARD");     break;
           case FE_TOWARDZERO: printf ("FE_TOWARDZERO"); break;
           default:            printf ("unknown");
    };
    printf("\n");
}
 
void show_fe_environment(void)
{
    show_fe_exceptions();
    show_fe_rounding_method();
} 
 
int main()
{
    printf("On startup:\n");
    show_fe_environment();
 
    // Change environment
    fesetround(FE_DOWNWARD);     // change rounding mode
    feraiseexcept(FE_INVALID);   // raise exception
    printf("\nBefore restoration:\n");
    show_fe_environment();
 
    fesetenv(FE_DFL_ENV);    // restore
    printf("\nAfter restoring default environment:\n");
    show_fe_environment();
}

```

Output:

```
On startup:
current exceptions raised:  none
current rounding method:    FE_TONEAREST
 
Before restoration:
current exceptions raised:  FE_INVALID
current rounding method:    FE_DOWNWARD
 
After restoring default environment:
current exceptions raised:  none
current rounding method:    FE_TONEAREST

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.6/9 Floating-point environment <fenv.h> (p: 208)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.6/8 Floating-point environment <fenv.h> (p: 188-189)

### See also

|  |  |
| --- | --- |
| fegetenvfesetenv(C99) | saves or restores the current floating-point environment   (function) |
| feupdateenv(C99) | restores the floating-point environment and raises the previously raise exceptions   (function) |
| C++ documentation for FE_DFL_ENV | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/fenv/FE_DFL_ENV&oldid=133803>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 September 2021, at 02:06.