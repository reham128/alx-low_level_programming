#include "main.h"
int tmp(int n, int x);
/**
 * tmp - to check the number prime or not with the help of itreative x.
 *
 * @n: the number to check.
 *
 * @x: increasing to be a divisor from 2 to just befor n.
 *
 * Return: 1 for success
 */
int tmp(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	else if (x < (n / 2))

		return (tmp(n, x + 1));
	else
		return (1);
}
/**
 * is_prime_number - a function determin if a n is prime or not.
 *
 * @n: the number to check.
 *
 * Return: 1 if prime and 0 if not
*/
int is_prime_number(int n)
{
	if (n > 1)
		return (tmp(n, 2));
	else
		return (0);
}
