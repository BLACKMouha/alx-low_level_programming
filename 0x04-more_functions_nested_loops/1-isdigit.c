#include "main.h"

/**
 * _isdigit - Checks if a given parameter is a digit
 * @c: ASCII character in integer format
 *
 * Return: 1 if digit, other case 0.
 */
int _isdigit(int c)
{
        return ((c >= 48 && c <= 57) ?1 :0);
}

