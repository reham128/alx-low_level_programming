#include "main.h"
int root(int n, int x);
/**
 * root - function to find the square of the root number.
 *
 * @x: from 0 to n
 *
 * @n: square number which need to find its root.
 *
 * Return: x the value of root to n.
*/
int root(int n, int x)
{
	int new = x * x;

	if (n > new)
	{
		int newRoot = root(n, x + 1);

		return (newRoot);
	}
	else if (new == n)
	{
		return (x);
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of number.
 *
 * @n: input int value.
 *
 * Return: n (square root).
*/
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (root(n, 0));
	else
		return (-1);
}
