#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PRINT_INT128(n)                                                        \
  do {                                                                         \
    if ((n) == 0) {                                                            \
      putchar('0');                                                            \
    } else {                                                                   \
      char queue[40];                                                          \
      if ((n) < 0) {                                                           \
        putchar('-');                                                          \
      }                                                                        \
      int i = 0;                                                               \
      __int128 temp = (n);                                                     \
      while (!(temp == 0)) {                                                   \
        queue[i++] = '0' + abs((int)(temp % 10));                              \
        temp /= 10;                                                            \
      }                                                                        \
      while (i > 0) {                                                          \
        putchar(queue[--i]);                                                   \
      }                                                                        \
    }                                                                          \
    putchar('\n');                                                             \
  } while (0)

// 循环 -> 优化递归
int print_int128(__int128 data) {
  if (data == 0) {
    putchar('0');
    goto end;
  }
  char queue[40];
  if (data < 0) {
    putchar('-');
  }
  int i = 0;
  __int128 temp = data;
  while (!(temp == 0)) {
    queue[i++] = '0' + abs((int)(temp % 10));
    temp /= 10;
  }
  while (i > 0) {
    putchar(queue[--i]);
  }
end:
  putchar('\n');
  return 0;
}
// 递归 -> 不能优化为尾递归
void print_int128_st1(__int128 temp) {
  if (temp == 0) {
    return;
  }
  print_int128_st1(temp / 10);
  putchar(abs((int)(temp % 10)) + '0');
}
int print_int128_st0(__int128 data) {
  if (data == 0) {
    putchar('0');
    goto end;
  }
  if (data < 0) {
    putchar('-');
  }
  __int128 temp = data;
  print_int128_st1(temp);
end:
  putchar('\n');
  return 0;
}

int main(void) {
  printf("variable test...\n\n");

  __int128_t maximum = ((__int128_t)1 << 127) - 1;
  __int128_t minimum = -((__int128_t)1 << 127);
  __int128_t zero = 0;
  PRINT_INT128(maximum);
  PRINT_INT128(minimum);
  PRINT_INT128(zero);
  return 0;
}