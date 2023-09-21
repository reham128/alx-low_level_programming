#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination string.
 *
 * @src: source string.
 *
 * Return: dest.
*/
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		src_length++;
	}
	for (i = 0; i <= src_length; i++)
	{
		dest[dest_length + i] = src[i];
	}
	return (dest);
}
