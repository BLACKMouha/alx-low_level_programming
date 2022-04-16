#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer in an array
 * @array: array of integers where the function iterate
 * @size: the size of @array
 * @cmp: a function pointer that compare an integer to another
 * Return: an index to the first occurence that matches or -1 if no
 * match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}

	return (-1);
}
