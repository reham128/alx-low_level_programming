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

	ptr = malloc(height * sizeof(int));

	if (width <= 0 || height <= 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(width * sizeof(int));
		if (ptr[h] == NULL)
		{
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
			if (ptr == NULL)
			{
				free(ptr);
			}
		}
	}
	return (ptr);
}
