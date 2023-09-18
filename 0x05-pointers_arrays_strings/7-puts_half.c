#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * Discription: The function should print the second half of the string
 *
 * @str: array of type string
 *
 * Return: void function returns nothing
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i;

	if (length % 2 == 1)
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
