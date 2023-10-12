#include "variadic_functions.h"
/**
 * sum_them_all - a function that adds all its parameters.
 *
 * @n: the number of argument wanted to add.
 *
 * Return: the added value of all args.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int a;
	va_list nums;

	va_start(nums, n);
	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			result = result + va_arg(nums, int);
		}
	}
	va_end(nums);
	return (result);
}
