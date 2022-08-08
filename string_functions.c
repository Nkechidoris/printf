#include "main.h"

/**
 * reverse_str - reverses a string
 * @str: the string
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
	tmp = (char*)malloc(i + 1);
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
