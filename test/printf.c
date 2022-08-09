#include "main.h"

/**
 * _printf - prints anything
 * @format: character string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;
	char *str;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count += 1;
					break;
				case 's':
					str = (va_arg(args, char *));
					print_str(str);
					count += _strlen(str);
					break;
				case '%':
					_putchar('%');
					count += 1;
					break;
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
