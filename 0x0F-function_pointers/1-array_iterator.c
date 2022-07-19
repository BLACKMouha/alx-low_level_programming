#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * Prototype:
 * void array_iterator(int *array, size_t size, void (*action)(int));
 * @array: array of integers
 * @size: size of the array
 * @action: poitner to a function that performs some operatino on
 * each
 * element of @array
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
















































































































