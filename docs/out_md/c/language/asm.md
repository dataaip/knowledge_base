# Inline assembly

From cppreference.com
< c‎ | language
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

 C language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Basic concepts | | | | |
| Keywords | | | | |
| Preprocessor | | | | |
| Statements | | | | |
| Expressions | | | | |
| Initialization | | | | |
| Declarations | | | | |
| Functions | | | | |
| Miscellaneous | | | | |
| History of C | | | | |
| Technical Specifications | | | | |

Inline assembly (typically introduced by the asm keyword) gives the ability to embed assembly language source code within a C program.

Unlike in C++, inline assembly is treated as an extension in C. It is conditionally supported and implementation defined, meaning that it may not be present and, even when provided by the implementation, it does not have a fixed meaning.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `asm (` string_literal `)` `;` |  |  |
|  | | | | | | | | | |

|  |  |
| --- | --- |
|  | This section is incomplete Reason: write a note on GCC extended assembly syntax, since it is now supported by Intel, IBM, Sun (as of v12), etc |

### Explanation

This kind of inline assembly syntax is accepted by the C++ standard and called **asm-declaration** in C++. The string_literal is typically a short program written in assembly language, which is executed whenever this declaration is executed. Different C compilers have wildly varying rules for asm-declarations, and different conventions for the interaction with the surrounding C code.

asm-declaration can appear inside a block (a function body or another compound statement), and, as all other declarations, this declaration can also appear outside a block.

### Notes

MSVC does not support inline assembly on the ARM and x64 processors, and only support the form introduced by __asm on x86 processors.

When compiling in ISO C mode by GCC or Clang (e.g. with option -std=c11), __asm__ must be used instead of asm.

### Examples

Demonstrates two kinds of inline assembly syntax offered by the GCC compiler. This program will only work correctly on x86-64 platform under Linux. Note that the "standard inline assembly" is also treated as an extension in the C standard.

Run this code

```
#include <stdio.h>
 
extern int func(void);
// the definition of func is written in assembly language
__asm__(".globl func\n\t"
        ".type func, @function\n\t"
        "func:\n\t"
        ".cfi_startproc\n\t"
        "movl $7, %eax\n\t"
        "ret\n\t"
        ".cfi_endproc");
 
int main(void)
{
    int n = func();
    // gcc's extended inline assembly
    __asm__ ("leal (%0,%0,4),%0"
           : "=r" (n)
           : "0" (n));
    printf("7*5 = %d\n", n);
    fflush(stdout); // flush is intentional
 
    // standard inline assembly in C++
    __asm__ ("movq $60, %rax\n\t" // the exit syscall number on Linux
             "movq $2,  %rdi\n\t" // this program returns 2
             "syscall");
}

```

Output:

```
7*5 = 35

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - J.5.10 The asm keyword (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - J.5.10 The asm keyword (p: 422)

- C11 standard (ISO/IEC 9899:2011):

:   - J.5.10 The asm keyword (p: 580)

- C99 standard (ISO/IEC 9899:1999):

:   - J.5.10 The asm keyword (p: 512)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - G.5.10 The asm keyword

### See also

|  |  |
| --- | --- |
| C++ documentation for `asm` declaration | |

### External links

|  |  |
| --- | --- |
| 1. | GCC Inline Assembly HOWTO |
| 2. | IBM XL C/C++ Inline Assembly |
| 3. | Intel C++ Inline Assembly |
| 4. | Visual Studio Inline Assembler |
| 5. | Sun Studio 12 Asm Statements |
| 6. | Inline assembly for Itanium-based HP-UX |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/asm&oldid=178601>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 14:15.