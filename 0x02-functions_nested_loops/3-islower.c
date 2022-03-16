#include "main.h"

/**
 * is_lower - Check if a character is i lowercase of not
 *
 * Return 1 if success otherwhise 0
*/

int _islower(int c)
{
	int i;
	i = ((c >= 97) && (c <= 122)) ? 1 : 0;

	return 1;
}
