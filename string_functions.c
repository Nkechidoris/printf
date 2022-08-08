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
