#ifndef LEXER_LEXER_H
#define LEXER_LEXER_H

#include "token.h"

token get_next_token(const char **input);

void print_token(const token* t);

#endif // !LEXER_LEXER_H