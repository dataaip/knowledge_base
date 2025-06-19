#include "lexer/lexer.h"
#include "lexer/token.h"
#include <stddef.h>
#include <string.h>

int main() {

  char *ch = "2034 + 4.5 * 8 % 10 + sin(10) + 5!";

  while (*ch != '\0') {
    token tok = get_next_token((const char **)&ch);
    print_token(&tok);
  }
  
  return 0;
}