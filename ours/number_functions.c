#include "main.h"

/**
 * unsigned_num_to_str - coverts unsigned number to str
 * @num: number
 * @base: the base
 * @buff: pointer to the string
 */
void unsigned_num_to_str(int num, int base, char *buff)
{
	int res = 0, i = 0, j, tmp;

	do {
		res = num % base;
		if (res > 9)
			buff[i] = res + 'a' - 10;
		else
			buff[i] = res + '0';
		num /= base;
		i++;
	} while (num > 0);

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
/**
 * signed_num_to_str - converts signed number to string
 * @num: number
 * @base: the base
 * @buff: pointer to string
 */
void signed_num_to_str(int64_t num, int base, char *buff)
{
	uint64_t n;

	if (num < 0)
	{
		*buff++ = '-';
		num = -num;
	}
	n = (uint64_t)num;
	unsigned_num_to_str(n, base, buff);
}
