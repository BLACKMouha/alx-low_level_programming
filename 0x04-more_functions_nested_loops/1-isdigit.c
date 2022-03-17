#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks if a given parameter is a number of not
 * @c: an ASCII character in integer format
 * Return: 1 if number otherwise 0 
*/

int _isdigit(int c)
{
	int r;

	r = (c >=48 && c <= 57) ? 1 : 0;

	return r;
}


