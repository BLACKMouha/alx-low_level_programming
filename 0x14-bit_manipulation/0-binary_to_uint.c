#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is 1 or more charse
 *         in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i, len_b;
	unsigned int uint = 0;

	if (!b)
		return (0);

	len_b = strlen(b);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			uint += 1 << len_b;
		len_b--;
		i++;
	}
	uint >>= 1;

	return (uint);
}
