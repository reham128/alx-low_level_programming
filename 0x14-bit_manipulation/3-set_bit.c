#include "main.h"
/**
 * set_bit -  function to set the value of bit to 1 at a given index.
 * @n: pointer to the desired bit.
 * @index: the position of the bit wanted to change.
 * Return: 1 for success or 0 for fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int c = 1;

	a = (sizeof(n) * 8);
	if (index >= a)
	{
		return (-1);
	}
	else
	{
		c = c << index;
		*n = (c | (*n));
	}
	return (1);
}
