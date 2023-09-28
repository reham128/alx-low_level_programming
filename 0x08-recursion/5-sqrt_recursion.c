#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of number.
 *
 * @n: input int value.
 *
 * Return: n (square root).
*/
int _sqrt_recursion(int n)
{
	if (n >= 1)
	{
		int new_n = _sqrt_recursion(n - 1);

		if (new_n >= 1)
		{
			return (new_n);
		}
	        else
		{
			return (-1);
		}
	}
	else
		return (-1);
	return (0);
}	
