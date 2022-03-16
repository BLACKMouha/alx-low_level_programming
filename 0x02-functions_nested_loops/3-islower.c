#include "main.h"

/**
 * _islower - This functions checks if a character is lowercase or not
 *
 * @c: refers to a character in ASCII
 *
 * Return: 1 if success otherwhise 0
*/

int _islower(int c)
{
	int i;

	i = ((c >= 97) && (c <= 122)) ? 1 : 0;

	return (i);
}
