#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void) {

  setlocale(LC_ALL, "en_US.UTF-8");
  fflush(stdout);

  int direction = fwide(stdout, 1); 

  wprintf(L"fwide is %d.\n",direction);

  printf("variable test...\n\n");

  wprintf(L"天生我材必有用");
  wchar_t sheep = L'A';
  wchar_t horse[] = L"Hello, 世界";
  wprintf(L"sheep is %lc\n", sheep);
  wprintf(L"horse is %ls\n", horse);

  printf("variable test...\n\n");

  return 0;
}