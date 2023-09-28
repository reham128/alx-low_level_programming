#include "main.h"
/**
 * _pow_recursion -  a function that returns the value of x power of y.
 *
 * @x: the input number (bais).
 *
 * @y: the desired power.
 *
 * Return: value of x powerded by y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (0);
}
