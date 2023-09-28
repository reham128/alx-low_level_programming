#include "main.h"
/**
 * _print_rev_recursion -  a function that prints a string in reverse.
 *
 * @s: input character string.
 *
 * Return: void function.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == 0)
	{
		_putchar('\n');
	}
}
