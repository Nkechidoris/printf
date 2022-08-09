#include "main.h"

/**
 * _printf - prints anything
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;
	printer pr;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			pr = get_printer(format[i]);
			if (pr.c)
			{
				count += pr.func(format, i, args);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

/**
 * get-printer - getting the printers
 * @c: character
 * Return: printed string
 */
printer get_printer(char c)
{
	int i = 0;
	static printer printers[] = {
		{'c', print_char},
		{'%', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	for (i = 0; printers[i].c; i++)
	{
		if (printers[i].c == c)
			break;
	}
	return (printers[i]);
}
