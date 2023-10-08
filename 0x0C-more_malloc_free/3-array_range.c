#include "main.h"
/**
 * array_range - function that creates an ranged array of integers.
 *
 * @min: minimum value of array
 *
 * @max: maximum value of the array.
 *
 * Return: pointer to new array if success , null if fail.
 */
int *array_range(int min, int max)
{
	int a, n, *Ptr;

	n = 1 + (max - min);
	if (min > max)
	{
		return (NULL);
	}
	Ptr = malloc(n * sizeof(int));
	if (Ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; min <= max; a++)
		{
			Ptr[a] = min;
			min++;
		}
	}
	return (Ptr);
}
