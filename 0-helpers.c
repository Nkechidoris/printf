#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: the character to check
 *
 * Return: 1 if c is a letter and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: input
 *
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
