#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: a number representing an ASCII character
 *
 * Return: 1 if digit, other case 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
