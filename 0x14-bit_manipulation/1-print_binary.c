#include "main.h"
/**
 * print_binary - function to print binary representation of number.
 * @n: the number to convert.
 * Return: void function.
 */
void print_binary(unsigned long int n)
{
	unsigned int b;

	if (n == 1)
	{
		_putchar('1');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_binary(n >> 1);
		b = (n & 1UL);
		if (b)
		{
			_putchar('1');
		}
		else if (!b)
		{
			_putchar('0');
		}
	}
}
