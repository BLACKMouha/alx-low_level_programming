#include "main.h"
#include <string.h>

/**
 * _strlen - computes the length of a string
 * Prototype: unsigned int _strlen(char *s);
 * @s: string
 * Return: an integer representing the length of a given string
 */

unsigned int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - duplicate a given string
 * Prototype: char *_strdup(char *str);
 * @str: string to be duplicated
 * Return: a pointer to the newly allocated space in memory which
 * conains a copy of the string given as parameter
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}


















