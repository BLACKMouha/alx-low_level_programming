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
	unsigned int power, i, j, number_of_powers, nop;
	int *arr_bin;
	if (n == 0)
		return (0);

	power = 1;
	number_of_powers = 0;
	while (power <= n)
	{
		number_of_powers++;
		power <<= 1;
	}

	power >>= 1;
	arr_bin = (int *)malloc(sizeof(int) * number_of_powers);
	nop = number_of_powers - 1;
	for (i = power, j = nop; i > 0 && j > 0; i >>= 1, j--)
	{
		if ((n & i) == i)
			*(arr_bin + j) = 1;
		else
			*(arr_bin + j) = 0;
	}

	return (arr_bin[index]);
}
































