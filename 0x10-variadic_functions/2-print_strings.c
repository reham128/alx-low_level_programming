#include "variadic_functions.h"
/**
 * print_strings - to print string passed in.
 *
 * @separator: symbole between strings.
 *
 * @n: number of string.
 *
 * Return: void function return nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *print;
	va_list printStr;

	va_start(printStr, n);
	for (a = 0; a < n; a++)
	{
		print = va_arg(printStr, char *);
		if (print != NULL)
		{
			printf("%s", print);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && a != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(printStr);
}
