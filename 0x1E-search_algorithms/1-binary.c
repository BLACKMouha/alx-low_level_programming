#include "search_algos.h"

/**
 * print_array -prints elements of an array depending on the limits
 * Prototype: void print_array(int *array, size_t start, size_t end);
 * @array: array of integers
 * @start: index to start from
 * @end: index to stop
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%d", array[start]);
		if (start != end)
			printf(", ");
		start++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * Prototype: int binary_search(int *array, size_t size, int value);
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: index of value in the array if found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m = 0, r = size - 1, l = 0;

	if (!array || size == 0)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
