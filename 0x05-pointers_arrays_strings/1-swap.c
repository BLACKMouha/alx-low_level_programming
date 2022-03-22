#include "main.h"
#include <stdio.h>

/**
 * swap_int - Updates the value of the parameter to 98
 * @a: first parameter that will store the value of the second parameter
 * @b: second parameter that will store the value of the first parameter
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int t;

	t  = *a;
	*a = *b;
	*b = t;
}
