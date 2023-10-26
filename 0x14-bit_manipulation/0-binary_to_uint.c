#include "main.h"
/**
 * binary_to_uint - to convert binary numbers to int.
 * @b: pointer to string consist of 0 or 1 only.
 * Return: the equivalent converted number or 0 if fail.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	unsigned int result = 0;
	int base = 2;

	if (b == NULL)
	{
		return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
		else
		{
			result = result * base + (b[a] - 48);
		}
	}
	return (result);
}
