#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * @n: pointer to an unsigned long integer
 * @index: index of the bit to be set to 0
 * Return: 1 on succes, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	else
	{
		mask = 1 << index;
		*n = *n & ~mask;
		return (1);
	}
}
