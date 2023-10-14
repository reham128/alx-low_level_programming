#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *
 * @array: is array of type int.
 *
 * @size: number of elements in the array (array size).
 *
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index to the int we search about.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
		{
			return (a);
		}
	}
	return (-1);
}
