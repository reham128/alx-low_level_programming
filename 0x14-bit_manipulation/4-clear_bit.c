#include "main.h"
/**
 * clear_bit - function set the value of a bit to 0 at a given index.
 * @n: pointer to the desired bit.
 * @index: the position of the bit wanted to change.
 * Return: 1 for success or -1 for fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int c;

	a = (sizeof(n) * 8);
	c = 1UL << index;
	if ((index >= a) || n == NULL)
	{
		return (-1);
	}
	else
	{
		*n = (~(c) & *n);
	}
	return (1);
}
