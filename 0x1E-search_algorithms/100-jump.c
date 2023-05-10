#include "search_algos.h"
#include <math.h>

/**
 * min - computes the minimum between two integers
 * Prototype: size_t min(size_t a, size_t b);
 * @a: integer
 * @b: integer
 * Return: the lowest integer between provided arguments
 */
size_t min(size_t a, size_t b) { return (a < b) ? a : b; }

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * Prototype: int jump_search(int *array, size_t size, int value);
 * @array: array of integers
 * @size: size of the array
 * @value: integer to search for
 * Return: the index of @value if found in the array, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step, left, right;

	if (array == NULL || size == 0)
		return (-1);
	step = (size_t)floor(sqrt(size));
	while (1)
	{
		for (i = 0; array[i] < value && i < size; )
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			left = i;
			i += step;
			right = i;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", left, right);
		if (left >= size)
			return (-1);
		for (j = left; j <= right; j++)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			if (right >= size)
				return (-1);
			if (array[j] == value)
				return (j);
		}
		return (-1);
	}
	return (-1);
}
