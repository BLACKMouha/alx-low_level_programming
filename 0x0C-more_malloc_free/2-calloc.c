#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc. It sets the
 * memory to zero.
 * Prototype: void *_calloc(unsigned int nmemb, unsingned int size);
 * @nmemb: number of elements
 * @size: size of an element
 * Return: the pointer to the allocated memory, or NULL if @nmemb or
 * size is 0, also if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}


















