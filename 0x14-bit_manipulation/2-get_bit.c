#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * @n: decimal integer
 * @index:starting to 0, it's the index of the bit to be got
 *
 * Return: the value of the bit at index @index or -1 if an failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
































