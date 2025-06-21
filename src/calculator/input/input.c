#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input.h"

#define MAX_IN 100

/*
清除缓冲区陷阱
*/
void clear_input_buffer() {
  int c = 0;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

char *get_input_expression() {

  // 申请堆内存
  char *inputs = malloc(sizeof(char) * MAX_IN);

  printf("请输出一个要求值数学表达式：");

  while (true) {
    // 获取输入
    if (!fgets(inputs, sizeof(char) * MAX_IN, stdin)) {
      if (feof(stdin)) {
        printf("输入流 EOF 关闭输入.\n");
        clearerr(stdin);
      } else {
        perror("fgets 输入 异常");
      }

      clear_input_buffer();
      continue;
    }

    // 验证输入完整性
    if (strchr(inputs, '\n') == NULL) {
      printf("输入字符太长, 请重新输入.\n");
      clear_input_buffer();
      continue;
    }

    // 去掉最后的 \n 换行符
    size_t len = strlen(inputs);
    if (len > 0 && inputs[len - 1] == '\n') {
      inputs[len - 1] = '\0';
      len--;
    }

    return inputs;
  }
}