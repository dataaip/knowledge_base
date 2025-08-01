# fegetenv, fesetenv

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
| ****fegetenvfesetenv****(C99) | | | | |
| feholdexcept(C99) | | | | |
| feupdateenv(C99) | | | | |
| Macro constants | | | | |
| FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW(C99) | | | | |
| FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD(C99) | | | | |
| FE_DFL_ENV(C99) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<fenv.h>` |  |  |
| int fegetenv( fenv_t\* envp ); | (1) | (since C99) |
| int fesetenv( const fenv_t\* envp ); | (2) | (since C99) |
|  |  |  |

1) Attempts to store the status of the floating-point environment in the object pointed to by `envp`.

2) Attempts to establish the floating-point environment from the object pointed to by `envp`. The value of that object must be previously obtained by a call to feholdexcept or `fegetenv` or be a floating-point macro constant. If any of the floating-point status flags are set in `envp`, they become set in the environment (and are then testable with fetestexcept), but the corresponding floating-point exceptions are not raised (execution continues uninterrupted)

### Parameters

|  |  |  |
| --- | --- | --- |
| envp | - | pointer to the object of type fenv_t which holds the status of the floating-point environment |

### Return value

​0​ on success, non-zero otherwise.

### Example

Run this code

```
#include <stdio.h>
#include <math.h>
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
 
int main(void)
{
    fenv_t curr_env;
    int rtn;
 
    /* Show default environment. */
    show_fe_environment();
    printf("\n");
 
    /* Perform some computation under default environment. */
    printf("+11.5 -> %+4.1f\n", rint(+11.5)); /* midway between two integers */
    printf("+12.5 -> %+4.1f\n", rint(+12.5)); /* midway between two integers */
    show_fe_environment();
    printf("\n");
 
    /* Save current environment. */
    rtn = fegetenv(&curr_env);
 
    /* Perform some computation with new rounding method. */
    feclearexcept(FE_ALL_EXCEPT);
    fesetround(FE_DOWNWARD);
    printf("1.0/0.0 = %f\n", 1.0/0.0);
    printf("+11.5 -> %+4.1f\n", rint(+11.5));
    printf("+12.5 -> %+4.1f\n", rint(+12.5));
    show_fe_environment();
    printf("\n");
 
    /* Restore previous environment. */
    rtn = fesetenv(&curr_env);
    show_fe_environment();
 
    return 0;
}

```

Output:

```
current exceptions raised: none
current rounding method:   FE_TONEAREST
 
+11.5 -> +12.0
+12.5 -> +12.0
current exceptions raised: FE_INEXACT
current rounding method:   FE_TONEAREST
 
1.0/0.0 = inf
+11.5 -> +11.0
+12.5 -> +12.0
current exceptions raised: FE_DIVBYZERO FE_INEXACT
current rounding method:   FE_DOWNWARD
 
current exceptions raised: FE_INEXACT
current rounding method:   FE_TONEAREST

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.6.4.1 The fegetenv function (p: 213)

:   - 7.6.4.3 The fesetenv function (p: 214)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.6.4.1 The fegetenv function (p: 194)

:   - 7.6.4.3 The fesetenv function (p: 195)

### See also

|  |  |
| --- | --- |
| feholdexcept(C99) | saves the environment, clears all status flags and ignores all future errors   (function) |
| feupdateenv(C99) | restores the floating-point environment and raises the previously raise exceptions   (function) |
| FE_DFL_ENV(C99) | default floating-point environment   (macro constant) |
| C++ documentation for fegetenv, fesetenv | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/numeric/fenv/feenv&oldid=133798>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 September 2021, at 02:02.