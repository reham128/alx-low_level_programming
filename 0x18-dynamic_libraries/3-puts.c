#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 * Discription: it is a function to print string to stdout
 *
 * @str:  string prameter to be printed
 *
 * Return: void function returns nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
