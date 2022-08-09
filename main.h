#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

/**
 * struct printer - a struct
 * @c: character to identify a format
 * @func: function that handles printing
 */
typedef struct printer
{
	char c;
	int (*func)(const char *, int, va_list);
} printer;
int isAlpha(int c);
int isDigit(int c);
int _strlen(char *s);
char _rot13(char *s);
int _putchar(char c);
int print_str(char *str);
int get_index(char *s, char c);
printer get_printer(char c);
int print_unsigned(const char *format, int count, va_list args);
int print_signed(const char *format, int count, va_list args);
int print_char(const char *format, int count, va_list args);
int print_string(const char *format, int count, va_list args);
int _printf(const char *format, ...);
void unsigned_num_to_str(int num, int base, char *buff);
void signed_num_to_str(int64_t num, int base, char *buff);
char *reverse_str(char *str);

#endif /* MAIN_H */
