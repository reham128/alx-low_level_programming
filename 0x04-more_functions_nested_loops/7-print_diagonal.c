#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 *
 * @n: is the number of the charecter / to draw.
*/
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= i; space++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
