#ifndef PARSER_H
#define PARSER_H

// 词法分析器状态
typedef struct {
    const char* input;
    const char* current;
} Lexer;

double evaluate_expression(const char *expr);

#endif // !PARSER_H