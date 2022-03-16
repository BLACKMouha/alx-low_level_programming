#include "main.h"

/**
 *_isalpha - This function checks if a given character is in letter or not
 *@c: have to be an ASCII character
 *
 * Return: 1 if Success otherwhise 0
*/

int _isalpha(int c)
{
	int i;

	i = (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122))) ? 1 : 0;

	return i;
}
