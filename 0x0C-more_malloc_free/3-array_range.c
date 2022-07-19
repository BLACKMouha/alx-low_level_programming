#include "main.h"

/**
 * _abs - computes the absolute value of a given integer
 * Prototype: unsigned int _abs(int n);
 * @n: integer
 * Return an integer representing its absolute value
 */
unsigned int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}


/**
 * array_range - creates an array of integers.
 * Prototype: int *array_range(int min, int max);
 * @min: the smallest value of an element from the array
 * @max: the greatest value of an element from the array
 * Return: a pointer to the newly created array or
 * NULL if min > max
 * 			if malloc fails.
 */

int *array_range(int min, int max)
{
	int i;
	int *arr_int;
	unsigned int nmemb;
	
	if (min > max)
		return (NULL);

	nmemb = _abs(max - min) + 1;

	arr_int = _calloc(nmemb, (unsigned int)sizeof(int));

	if ( arr_int == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr_int[i] = min;

	return (arr_int);
}



















































