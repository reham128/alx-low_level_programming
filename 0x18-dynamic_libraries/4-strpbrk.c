#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 *
 * @s: string array to search for char .
 *
 * @accept: string array to search in it for that char.
 *
 * Return: a pointer to the byte in s that match or NULL if not.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
