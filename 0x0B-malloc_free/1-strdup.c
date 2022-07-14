#include "main.h"
#include <string.h>

/**
 * _strdup - duplicate a given string
 * Prototype: char *_strdup(char *str);
 * @s: string to be duplicated
 * Return: a pointer to the newly allocated space in memory which
 * conains a copy of the string given as parameter
 */

char *_strdup(char *s)
{
	char *dup;
	int i = 0;

	if (s ==  NULL)
		return (NULL);

	dup = (char *)malloc(sizeof(s));

	if (dup == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
