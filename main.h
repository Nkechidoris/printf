#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
void unsigned_num_to_str(int num, int base, char *buff);
void signed_num_to_str(int64_t num, int base, char *buff);

#endif /* MAIN_H */
