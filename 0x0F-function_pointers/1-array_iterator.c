#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of array.
 * @array: is array of type int.
 *
 * @size: the array size.
 *
 * @action: is a pointer to the function you need to use
 *
 * Return: void function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
