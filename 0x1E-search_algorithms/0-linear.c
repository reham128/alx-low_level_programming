#include "search_algos.h"
/**
 * linear_search - search for a value in array of int using linear search alg
 * @array:  pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for it
 * Return: first index where value is located or -1 if arry is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
	{
		return (-1);
	}
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
