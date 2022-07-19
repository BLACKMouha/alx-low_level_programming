#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * Prototype: int int_inedx(int *array, int size, int (*cmp)(int));
 * @array: an array of integers
 * @size: size of @array
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: the index of the first element for which the cmp()
 * does not return 0. If no element matches, int_index() or if
 * size <= 0, int_index() returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return -1;
}












































































