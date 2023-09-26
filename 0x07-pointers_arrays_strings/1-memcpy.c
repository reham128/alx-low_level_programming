#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: A pointer to memory location where copied data will be store.
 *
 * @src: A pointer to memory location from where data is to be copide.
 *
 * @n: number of bytes to be copied.
 *
 * Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
