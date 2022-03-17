#include "main.h"

/**
 * _isupper - This function checks if a character is lowercase or not
 * @c: refers to a character in ASCII
 * Return: 1 if success otherwise 0
*/

int _isupper(char c)
{
    int r;

    r = (c >= 'A' && c <= 'Z') ? 1 : 0;

    return r;
}

