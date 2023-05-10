#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * Prototype: int linear_search(int *array, size_t size, int value);
 * @array: array of integers
 * @size: size of the array
 * @value: integer to search for
 * Return: the index of value if found in array otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			if (i < size)
				return (i);
		}
	}
	return (-1);
}
