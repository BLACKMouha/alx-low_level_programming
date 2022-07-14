#include "main.h"
#include <string.h>


/**
 * str_concat - concatenates two strings
 * Prototype: char *str_concat(char *s1, char *s2);
 * @s1: string
 * @s2: string to be concatenated at the end of @s1
 * Return: a new string in success, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len_s1 = 0, len_s2 = 0, i = 0, j = 0, len_str = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL && s2 != NULL)
		s1 = "";
	if (s1 != NULL && s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len_str = len_s1 + len_s2;
	str = (char *) malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (str == NULL)
		return (free(str), NULL);

	for (i = 0; i <= len_s1; i++)
		str[i] = s1[i];
	for (i = len_s1, j = 0; i < len_str && j < len_str; i++, j++)
		str[i] = s2[j];

	str[len_str] = '\0';
	return (str);
}











































































