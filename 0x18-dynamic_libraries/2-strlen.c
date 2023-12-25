#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * Discription: it is a function that determine the length of string.
 *
 * @s: input string
 *
 * Return: length of a string.
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		++len;
	}
	return (len);
}
