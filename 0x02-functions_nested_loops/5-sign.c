#include "main.h"
/**
 * print_sign - prints + if n greater than 0, print 0 if n equal to 0
 *               and - if n less than 0.
 *
 * @n: puts input to the function.
 *
 * Return: 1 if +, 0 for 0, and - for -;
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
