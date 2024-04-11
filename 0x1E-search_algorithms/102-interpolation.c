#include "search_algos.h"
/**
 * interpolation_search - to search for value in array by interpolation algorithm
 * @array:  pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for it
 * Return: first index where value is located or -1 if arry is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t idx;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left < right && value >= array[left] && value <= array[right])
	{
		idx = left + (((double)(right - left) / (array[right] - array[left])) 
				* (value - array[left]));
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		else if (array[idx] < value)
		{
			left = idx + 1;
		}
		else
		{
			right = idx - 1;
		}
		idx = left + (((double)(right - left) / (array[right] - array[left]))
				* (value - array[left]));
		printf("Value checked array[%lu] is out of range\n", idx);
	}
	return (-1);
}
