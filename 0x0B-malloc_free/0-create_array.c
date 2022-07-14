#include "main.h"

/**
 * create_array - create an array of chars, and initializes it with a
 * specific char.
 * Prototype: char *create_array(unsigned int size, char c);
 * @size: size of the array
 * @c: character that will be used to initialize all the array
 * Return: NULL if size = 0, or a pointer to the newly array create or
 * NULL in failure
 */

char *create_array(int size, char c)
{
	char *arr_char;
	int i = 0;

	if (size == 0)
		return (NULL);

	arr_char = (char*) malloc(size * sizeof(int));
	if (arr_char == NULL)
		return (NULL);

	while (i < size)
	{
		*(arr_char + i) = c;
		i++;
	}
	return (arr_char); 
}
