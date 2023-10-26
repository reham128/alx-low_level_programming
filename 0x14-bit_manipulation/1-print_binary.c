#include "main.h"
/**
 * print_binary - function to print binary representation of number.
 * @n: the number to convert.
 * Return: void function.
 */
void print_binary(unsigned long int n)
{
	unsigned int a, b;

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
		for (a = 64; a > 0; a--)
		{
			b = n & (1UL << a);
			if (b)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}

