#include "main.h"
#include <stddef.h>
/**
 * _pow_recursion - returns the x to the power y
 * @x: the base
 * @y: the exponent
 *
 * Return: the integer result, -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: point to a string of 0 and 1 chars
 * Return: the converted number, or 0 if :
 * - there is one or more chars in the string @b that is not 0 or 1
 * - @b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len_b, i;
	unsigned int result = 0;

	if (!b)
		return (0);

	len_b = strlen(b);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '0')
				result += 0;
			if (b[i] == '1')
				result += _pow_recursion(2, (int)len_b);
		}
		else
			return (0);
		len_b--;
		i++;
	}
	return (result / 2);
}
