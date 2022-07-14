#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns length of string
 * @s: the string to measure
 *
 * Return: the integer length
 */
unsigned int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s+1));
	return (0);

}

/**
 * _strdup - duplicate a given string
 * Prototype: char *_strdup(char *str);
 * @s: string to be duplicated
 * Return: a pointer to the newly allocated space in memory which
 * conains a copy of the string given as parameter
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i = 0;

	if (str ==  NULL)
		return (NULL);

	len = _strlen(str);

	dup = (char *)malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	return (dup);
}





















