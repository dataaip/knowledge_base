#include <stdio.h>
#include <aio.h>

#define HL_HIGHLIGHT_STRINGS (1 << 0) // 01
#define HL_HIGHLIGHT_NUMBERS (1 << 1) // 10

int main(void) {

  printf("%d\n", HL_HIGHLIGHT_STRINGS);
  printf("%d\n", HL_HIGHLIGHT_NUMBERS);

  return 0;
}