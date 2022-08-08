#include "main.h"

/**
 * num_to_str - coverts number to str
 * @num: number
 * @base: the base
 * @buff: pointer to the string
 */
void num_to_str(int num, int base, char *buff)
{
	int res = 0, i, j, tmp;

	buff = (char*)malloc(20);

	for (i = 0; buff[i] != '\0'; i++)
	{
		while (num > 0)
		{
			res = num % base;
			if (res > 9)
				buff[i] = res + 'a' - 10;
			else
				buff[i] = res + '0';
			num /= base;
		}
	}
	buff[i] = '\0';

	i--;
	for (j = 0; i > j; j++)
	{
		tmp = buff[j];
		buff[j] = buff[i];
		buff[i] = tmp;
		i--;
	}
}
