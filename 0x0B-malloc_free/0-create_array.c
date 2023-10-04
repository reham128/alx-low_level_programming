#include "main.h"
/**
 * create_array - a function that creates an array of chars.
 *
 * @size: size of array.
 *
 * @c: input character.
 *
 * Return: pointer to arry for succes and NULL for fail.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);
}
