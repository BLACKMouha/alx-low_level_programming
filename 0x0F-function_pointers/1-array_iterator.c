#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * paramater on each element of an array.
 * Prototype:
 * void array_iterator(int *array, size_t size, void (*action)(int));
 * @array: the array to iterate
 * @size: the size of @array
 * @action: is a function pointer applied to @array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (!array || !action)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
