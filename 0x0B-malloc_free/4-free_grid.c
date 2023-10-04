#include "main.h"
/**
 * free_grid - function frees 2D grid previously created by your alloc_grid
 *
 * @grid: array pointer.
 *
 * @height: rows number.
 *
 * Return: void function
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
