#include "main.h"

/**
 * free_grid - frees a two dimensional array of integers
 * Prototype: void free_grid(int **grid, int height);
 * @grid: points to a two dimmensional array of integers
 * @height: height of a two dimensional array
 * Return Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
	return;
}
