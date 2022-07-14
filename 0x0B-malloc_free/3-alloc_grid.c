#include "main.h"

/**
 * alloc_grid - create a two dimensional array of integers
 * Prototype: int **alloc_grid(int width, int heigth);
 * @width: the first subscript of a two dimensional array
 * @height: the second subscript of a two dimentsional array
 * Return: a pointer to a two dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **array_int;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_int = (int **)malloc(sizeof(int *) * height);

	if (array_int == NULL)
		return (free(array_int), NULL);

	for (i = 0; i < height; i++)
	{
		array_int[i] = (int *)malloc(sizeof(int) * width);

		if (array_int[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array_int[i]);
			}
			free(array_int);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_int[i][j] = 0;
		}
	}
		return (array_int);
}
