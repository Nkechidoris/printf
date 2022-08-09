#include "main.h"

/**
 * print_char - prints a char
 * @format: character string
 * @count: number of characters printed
 * @args: argument
 * Return: 1 if true
 */
int print_char(const char *format, int count, va_list args)
{
	char c = format[count];

	if (c == 'c')
		_putchar(va_arg(args, int));
	else if (c == '%')
		_putchar(c);
	return (1);
}
/**
 * print_char - prints a char
 * @format: character string
 * @count: number of characters printed
 * @args: argument
 * Return: 1 if true
 */
int print_char(const char *format, int count, va_list args)
{
	char c = format[count];

	if (c == 'c')
		_putchar(va_arg(args, int));
	else if (c == '%')
		_putchar(c);
	return (1);
}
/**
 * print_string - prints a string
 * @format: character string
 * @count: number of characters printed
 * @args: argument
 * Return: 1 if true
 */
int print_string(const char *format, int count, va_list args)
{
	char c = format[count];
	char *s;
	int retval;

	s = va_arg(args, char *);
	retval = _strlen(s);
	if (c == 's')
	{
		print_str(s);
	}
	else if (c == 'r')
	{
		s = (reverse_str(s));
		print_str(s);
		free(s);
	}
	else if (c == 'R')
	{
		s = (_rot13(s));
		print_str(s);
		free(s);
	}
	return (retval);
}
