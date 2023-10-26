#include "main.h"
/**
 * print_binary - function to print binary representation of number.
 * @n: the number to convert.
 * Return: void function.
 */
void print_binary(unsigned long int n)
{
	unsigned int b, c;
	int new = 0;
	unsigned long int a = 63;

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
		while (a)
		{
			b = (n >> a);
			c = (1UL & b);
			if (c)
			{
				_putchar('1');
				new = new + 1;
			}
			else if (new)
			{
				_putchar('0');
			}
			a--;
		}
		if (!new)
		{
			_putchar('0');
		}
	}
}
