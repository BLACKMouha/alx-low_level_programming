#include "main.h"

/**
 * _strlen - computes the length of a given string
 * Prototype: int _strlen(char *str);
 * @str: string
 * Return: an integer representing the length of a string
 */

int _strlen(char *str)
{
	if (*str)
		return (1 + _strlen(str + 1));
	else
		return (0);
}


/**
 * string_nconcat - concatenates two strings
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * @s1: string that recieve @n bytes from @s2
 * @s2: string to be concatenated
 * @n: number of bytes to be concatenated
 * Return: a pointer to a newly allocated space memory for in succes.
 * Otherwise, it returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, len_str, i, j;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n < len_s2)
		len_str = len_s1 + n;
	else
		len_str = len_s1 + len_s2;

	str = malloc(sizeof(*str) * (len_str + 1));
	if (str == NULL)
		return (free(str), NULL);

	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (j = 0; j < len_str; j++, i++)
		str[i] = s2[j];
	str[j] = '\0';

	return (str);
}







































