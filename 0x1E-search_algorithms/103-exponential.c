#include "search_algos.h"

/**
 * min - computes the minimum between two integers
 * Prototype: size_t min(size_t a, size_t b);
 * @a: integer
 * @b: integer
 * Return: the lowest integer between provided arguments
 */
size_t min(size_t a, size_t b) { return (a < b) ? a : b; }

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
 * bin_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * Prototype: int bin_search(int *array,int value, size_t l, size_t r);
 * @array: array of integers
 * @value: value to search for
 * @l: left index where to start from
 * @r: right index where to end
 * Return: index of value in the array if found otherwise -1
 */
int bin_search(int *array, int value, size_t l, size_t r)
{
	size_t m = 0;

	if (!array)
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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * Prototype: int exponential_search(int *array, size_t size, int value);
 * @array: list of integers
 * @size: size of the list
 * @value: sought value
 * Return: the index of value in the list if found, or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t ub;

	if (!array || size == 0)
		return (-1);
	if (size == 1)
		return (0);
	ub = 1;
	while (array[ub] < value && ub < size)
	{
		printf("Value checked array[%ld] = [%d]\n", ub, array[ub]);
		ub *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", ub / 2,
			min(ub, size - 1));
	return (bin_search(array, value, ub / 2, min(ub, size - 1)));
}
