#include "main.h"
/*
 * print_numbers - Prints a list of numbers from 0 to 9.
 *
 * @n: the number of elements.
 *
 * Description: this function unction that prints the numbers,
 *              from 0 to 9, followed by a new line only with using putchar.
 *
 * Return:  Always 0 (Success)
*/
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
	return (0);
}
