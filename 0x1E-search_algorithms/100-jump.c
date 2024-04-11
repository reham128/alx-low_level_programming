#include "search_algos.h"
/**
 * jump_search - search for value in array using jump algorithm
 * @array:  pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for it
 * Return: first index where value is located or -1 if arry is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0;
	size_t idx;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				high, array[high]);
		low = high;
		high = high + step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	for (idx = low; idx < size && array[idx] <= value; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
