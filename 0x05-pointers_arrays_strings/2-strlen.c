#include "main.h"

/**
 * _strlen - find the length of a string
 *
 * @s: a string
 *
 * Return: The long of the string as an integer number
 */

int _strlen(char *s)
{
	int q = 0;

	while (*(s + q) != '\0')
		q++;

	return (q);
}
