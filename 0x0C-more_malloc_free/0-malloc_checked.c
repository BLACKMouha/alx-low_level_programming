#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * Prototype: void *malloc_checked(unsigned int b);
 * @b: capacity of memory
 * Return: a pointer to the allocated memory, or 98 in failure
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
