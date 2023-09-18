#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *         starting with the first character
 *
 * @str: input parameter
 *
 * Discription:to print even numbers
 *
 * Return: void function returns nothing
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
