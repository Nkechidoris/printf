#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

int isAlpha(int c);
int isDigit(int c);
int _strlen(char *s);
char _rot13(char *s);
int _putchar(char c);
int print_str(char *str);
int get_index(char *s, char c);
int _printf(const char *format, ...);
void unsigned_num_to_str(int num, int base, char *buff);
void signed_num_to_str(int64_t num, int base, char *buff);
char *reverse_str(char *str);

#endif /* MAIN_H */
