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
	unsigned int result = 0;
	unsigned int a;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);
	for (a = 0; a < n; a++)
	{
		result = result + va_arg(nums, int);
	}
	va_end(nums);
	return (result);
}
