#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: string that will search insid it.
 *
 * @accept: string that will be search for.
 *
 * Return: Number of bytes in s which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, ac;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (ac = 0; s[a] != accept[ac]; ac++)
		{
			if (accept[ac] == '\0')
			{
				return (a);
			}
		}
	}
	return (0);
}
