#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: starting address of memory to be filled out.
 *
 * @b: the value that we want to fill memory by.
 *
 * @n: number of repaitation.
 *
 * Return: s the new array after change.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		s[idx] = b;
	}
	return (s);
}
