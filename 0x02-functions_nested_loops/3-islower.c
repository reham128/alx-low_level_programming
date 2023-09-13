#include "main.h"
/**
 * _islower - function that used to check for lower case letters.
 *
 * Return: return 1 if c is lower case and return 0 if c is upper case.
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);
}
