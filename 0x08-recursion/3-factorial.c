#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: input number to find its factorial.
 *
 * Return: factorial if n >= 0 and return -1 for error if n < 0.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
