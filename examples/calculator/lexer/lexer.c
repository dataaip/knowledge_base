#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int istype_test(const char **input) {

  if (!input || !*input ) {
    return -1; // 输入指针无效
  }

  size_t len = strlen(*input);
  printf("ch len is %zu.\n", len);

  const char *tmp = *input;

  while (*tmp != '\0') {
    if(isspace(*tmp)) {
      printf("ch %c 是 空格.\n", *tmp);
      tmp++;
    } else if (isdigit(*tmp)) {
      printf("ch %c 是 数值.\n", *tmp);
      tmp++;
    } else {
      printf("ch %c 是 其他.\n", *tmp);
      tmp++;
    }
    
  }

  return 0;
}

int number_strtol(const char **input) {

  char* endptr = NULL;
  const char *tmp = *input;
  errno = 0;
  long num = strtol(tmp, &endptr, 10);
  if (errno == ERANGE) {
    printf("invalid strtol, please try again.\n");
  }

  printf("long num is %ld.\n", num);
  printf("input is %c.\n", *endptr);

  return 0;
}

int main() {

  char *ch = "2034 + 4 * 8 % 10";
  istype_test((const char **)&ch);

  number_strtol((const char **)&ch);
}