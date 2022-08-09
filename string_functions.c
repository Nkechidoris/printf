#include "main.h"

/**
 * reverse_str - reverses a string
 * @str: the string
 * Return: pointer to the reversed string
 */
char *reverse_str(char *str)
{
	int i = 0, j = 0;
	char *tmp;

	if (str == NULL)
		return (0);
	/* get the length of str */
	while (str[i])
		i++;
	tmp = (char *)malloc(i + 1);
	if (tmp == NULL)
		return (0);
	/* reverse the string */
	i--;
	while (i >= 0)
		tmp[j++] = str[i--];
	tmp[j] = '\0';
	return (tmp);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - prints a string
 * @str: pointer to the string
 * Return: the number of characters printed
 */
int print_str(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * get_index - finds an index of a char
 * @c: key
 * @s: haystack
 * Return: index of c or -1
 */
int get_index(char *s, char c)
{
	int i = 0;

	while (s[i])
		if (s[i++] == c)
			return (i - 1);
	return (-1);
}

char _rot13(char *s)
{
	int x = 0, index;
	char *chars = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *res;

	if (!s)
		return (0);
	while (s[x])
		x++;
	res = malloc((x + 1) * sizeof(char));
	if (!res)
		return (0);
	x = 0;
	while (s[x])
	{
		index = get_index(chars, s[x]);
		if (index > -1)
		{
			/* rotate */
			index = (index + 26) % 52;
			res[x] = chars[index];
		}
		else
		{
			res[x] = s[x];
		}
		x++;
	}
	return (res);
}
