#include "main.h"
/**
 * get_bit - function return the value of nth bit.
 * @n: the input value.
 * @index: the index where value wanted to find.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;
	unsigned int c;

	a = (sizeof(n) * 8);
	if (index >=a)
	{
		return (-1);
	}
	else
	{
		for (c = 0; c < index; c++)
		{
			n = n >> 1;
		}
		b = (1UL & n);
	}
	return (b);
}
