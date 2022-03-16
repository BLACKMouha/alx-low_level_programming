#include "main.h"

/**
 * _islower - Check if a character is i lowercase of not
 * 
 * @c refers to a character in ASCII
 * 
 * Return 1 if success otherwhise 0
*/

int _islower(int c)
{
	int i;
	i = ((c >= 97) && (c <= 122)) ? 1 : 0;

	return i;
}
