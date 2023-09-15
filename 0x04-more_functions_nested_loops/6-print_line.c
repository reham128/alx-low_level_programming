#include "main.h"

/**
 * print_line - function to print strait line using putchar.
 *
 * @n: number of times that the _ should repeated.
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
