#include "main.h"

/**
 * _strcpy - a function that copies the string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Description: copies the string pointed to by src, including the
 *              terminating null byte (\0), to the buffer pointed to by dest
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *pointer = dest;

	while (*src != '\0')
	{
		*pointer++ = *src++;
	}
	*pointer = '\0';
	return (dest);
}
