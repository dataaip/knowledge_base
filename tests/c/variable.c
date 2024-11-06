#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// 循环 -> 递归
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
  while (!(data == 0)) {
    queue[i++] = '0' + abs((int)(data % 10));
    data /= 10;
  }
  while (i > 0) {
    putchar(queue[--i]);
  }
end:
  putchar('\n');
  return 0;
}

// 递归 -> 不能优化为尾递归
void print_int128_st1(__int128 data) {
  if (data == 0) {
    return;
  }
  print_int128_st1(data / 10);
  putchar(abs((int)(data % 10)) + '0');
}
int print_int128_st0(__int128 data) {
  if (data == 0) {
    putchar('0');
    goto end;
  }
  if (data < 0) {
    putchar('-');
  }
  print_int128_st1(data);
end:
  putchar('\n');
  return 0;
}

int main(void) {
  printf("variable test...\n\n");

  __int128_t maximum = ((__int128_t)1 << 127) - 1;
  __int128_t minimum = -((__int128_t)1 << 127);
  __int128_t zero = 0;
  print_int128_st0(maximum);
  print_int128_st0(minimum);
  print_int128_st0(zero);
  return 0;
}