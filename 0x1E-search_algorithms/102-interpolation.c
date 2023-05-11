#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 *
 * Prototype: int interpolation_search(int *array, size_t size, int value);
 * @array: array of integers
 * @size: size of the array
 * @value: sought integer
 * Return: the index of the value in array if found, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos > high || pos < low)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
