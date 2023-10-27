#include "main.h"
/**
 * flip_bits - return no of bits needed flip to get from one number to another
 * @n: 1st number.
 * @m: 2nd number.
 * Return: no of fliped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;
	int bitNum;

	a = n ^ m;
	bitNum = 0;
	while (a)
	{
		b = (a & 1UL);
		if (b == 1)
		{
			bitNum = bitNum + 1;
		}
		a = a >> 1;
	}
	return (bitNum);
}
