#include "main.h"
/**
 * alloc_grid - function returns pointer to a 2 dimensional array of integers.
 *
 * @width: column number
 *
 * @height: rows number.
 *
 * Return:  pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(width * sizeof(int **));
		if (ptr[h] == NULL)
		{
			free(ptr);
			for (h = 0; h <= height; h++)
			{
				free(ptr[h]);
				return (NULL);
			}
		}
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
			if (ptr == NULL)
			{
				free(ptr);
				return (NULL);
			}
		}
	}
	return (ptr);
}
