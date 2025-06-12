#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <limits.h>

/*

关键知识点：
1. 随机数：
- 随机数生成原理及种子初始化 rand time

2. 输入流：
- 安全的用户输入处理（避免缓冲区溢出）scanf fgets
- 输入缓冲区清除技巧 getchar
- EOF(文件结束符)处理机制 feof
- 错误处理 errno perror
- 类型安全转换 strtol
- 输入验证（空输入、超长输入、无效数字）

*/

#define MAX_IN 50

/*
清除缓冲区陷阱
*/
void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF);
}

/*
随机数生成
*/
int random_int(int min, int max) {
    static int seeded = 0;
    if (!seeded) {
        srand(time(NULL));
        seeded = 1;
    }

    return rand() % (max - min + 1) + min;
}


/*
获取输入
*/
int get_input_number() {

    char inputs[MAX_IN];

    while (true) {
        printf("please input a guess number: \n");
        // if (scanf("%d", &guess) != 1) {
        //     printf("invalid input, please try again.\n");
        //     clear_input_buffer();
        //     continue;
        // }
        // clear_input_buffer();
        
        // 使用 fgets()+strtol() 替代 scanf() 避免非数字和缓冲区溢出
        if(!fgets(inputs, sizeof(inputs), stdin)) {
            if (feof(stdin)) {
                printf("EOF received. Exiting program.\n");
                clearerr(stdin);
                // exit(0);
            } else {
                perror("fgets input error");
            }
            clear_input_buffer();
            continue;  
        }
        // 完整性
        size_t len = strlen(inputs);
        if (len > 0 && inputs[len - 1] != '\n') {
            printf("input too long, please try again.\n");
            clear_input_buffer();
            continue;  
        }

        char* endptr = NULL;
        errno = 0;
        long val = strtol(inputs, &endptr, 10);
        if (
            inputs == endptr ||
            *endptr != '\n'  ||
            errno == ERANGE  ||
            val < INT_MIN    ||
            val > INT_MAX
        ) {
            printf("invalid strtol, please try again.\n");
            continue;             
        }

        return (int)val;
    }
}

int main() {
    printf("guess game for c beg!\n");

    int secret_number = random_int(1, 100);
    int guess = 0;
    int guess_count = 0;

    while (true) {
        guess = get_input_number();
        guess_count ++;

        if (guess > secret_number) {
            printf("greater\n");
        } else if (guess < secret_number) {
            printf("less\n");
        } else {
            printf("ok\n");
            printf("rand number is %d, you guess %d count.\n", secret_number, guess_count);
            break;
        }
    }
    return 0;
}
