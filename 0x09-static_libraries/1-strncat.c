#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 *
 * @dest: destination string.
 *
 * @src: source string.
 *
 * @n: number of string to be copyied.
 *
 * Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[dest_len + i] = *src;
		src++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
