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
	int a;

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
		for (a = 32; a >= 0; a--)
		{
			b = (n >> a);
			c = (1 & b);
			if (c)
			{
				_putchar('1');
				new = new + 1;
			}
			else if (new)
			{
				_putchar('0');
			}
		}
		if (!new)
		{
			_putchar('0');
		}
	}
}
