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
 * print_unsigned - prints unsigned digit
 * @format: character string
 * @count: number of characters printed
 * @args: argument
 * Return: 1 if true
 */
int print_unsigned(const char *format, int count, va_list args)
{
	char c = format[count];
	uint64_t num;
	char buff[30];
	int retval;

	num = (va_arg(args, uint64_t));

	if (c == 'u')
	{
		unsigned_num_to_str(num, 10, buff);
		retval = _strlen(buff);
		print_str(buff);
	}
	return (retval);
}
/**
 * print_signed - prints signed digit
 * @format: character string
 * @count: number of characters printed
 * @args: argument
 * Return: 1 if true
 */
int print_signed(const char *format, int count, va_list args)
{
	char c = format[count];
	int64_t num;
	char buff[30];
	int retval;

	num = (va_arg(args, int64_t));

	if (c == 'i' || c == 'd')
	{
		signed_num_to_str(num, 10, buff);
		retval = _strlen(buff);
		print_str(buff);
	}
	return (retval);
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
