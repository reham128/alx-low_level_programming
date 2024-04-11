#include "search_algos.h"
/**
 * binary_search - to search a value in array using binary algorithm.
 * @array:  pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for it
 * Return: first index where value is located or -1 if arry is null
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, idx;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
		{
			if (idx == high)
			{
				printf("%d\n", array[idx]);
			}
			else
			{
				printf("%d, ", array[idx]);
			}
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
