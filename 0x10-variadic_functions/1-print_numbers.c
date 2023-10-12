#include "variadic_functions.h"
/**
 * print_numbers - function that prints all numbers passed to it.
 *
 * @separator: symbole between printed numbers.
 *
 * @n: number of printed numbers.
 *
 * Return: void function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list print;

	va_start(print, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(print, int));
		if (separator != NULL && a != (n - 1))
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end(print);
}
