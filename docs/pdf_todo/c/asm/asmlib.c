#include <stdio.h>

extern int func(void);
extern int add(int a, int b);
extern int sub(int a, int b);

/**
* @brief             asm 汇编 和 内联汇编 函数库 打印函数定义
* @return  int       Return Description
*
* @note              Revision History
*/
int asc_print_fn(void) {
    
    // 内联汇编加法计算    
    int numa = 10;
    int numb = 20;
    __asm__("add %1, %2\n\t"
            "mov %2, %0"
            : "=r"(numa)
            : "r"(numb), "r"(numa));
    printf("numa  = %d., numb = %d.\n\n", numa, numb);
    __asm__("add %1, %0\n\t" : "+r"(numa) : "r"(numb));
    printf("numa  = %d., numb = %d.\n\n", numa, numb);
  
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("array[2] = %p.\n\n", &array[2]);
    int *result;
    __asm__ volatile("movq $2, %%rax\n\t"             // rax = 2
                     "leaq (%%rcx,%%rax,4),%%rbx\n\t" // ebx =  + (2 * 4) = 4
                     : "=b"(result)
                     : "c"(array)
                     : "%rax");
    printf("Result:size of %lu byte, address = %p, value = %d.\n\n",
           sizeof(result), result, *result);
  
    int n = func();
    __asm__("leal (%0,%0,4),%0" : "=r"(n) : "0"(n)); // 7 +  (7*4)
    printf("7*5 = %d\n", n);
    fflush(stdout);
  
    // 汇编库函数代码调用
    int a = 20, b = 4;
    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Sub: %d - %d = %d\n", a, b, sub(a, b));
  
    __asm__("movq $60, %rax\n\t"
            "movq $2,  %rdi\n\t"
            "syscall");
  
    return 0;        
  }
  
  // 函数 func 的定义是用汇编语言编写的
  __asm__(".globl func\n\t"
          ".type func, @function\n\t"
          "func:\n\t"
          ".cfi_startproc\n\t"
          "movl $7, %eax\n\t"
          "ret\n\t"
          ".cfi_endproc");