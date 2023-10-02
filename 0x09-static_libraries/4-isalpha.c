#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: take input of the function.
 *
 * Return: return 1 if c is a letter, lowercase or uppercase.
 *
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
