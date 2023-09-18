#include "main.h"

/**
 * int _strlen - function that returns the length of a string.
 *
 * @s: input string
 *
 * Return: length of a string.
*/
int _strlen(char *s);
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		++len;
	}
	return (len);
}
