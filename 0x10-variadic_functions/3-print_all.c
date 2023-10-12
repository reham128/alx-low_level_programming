#include "variadic_functions.h"
/**
 * print_all - to act like print f.
 *
 * @format: is the arg spicifier.
 *
 * Return: void function.
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0;
	int b;
	va_list printAll;

	va_start(printAll, format);
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'i':
				printf("%d", va_arg(printAll, int));
				b = 0;
				break;
			case 'f':
				printf("%f", va_arg(printAll, double));
				b = 0;
				break;
			case 'c':
				printf("%c", va_arg(printAll, int));
				b = 0;
				break;
			case 's':
				printf("%s", va_arg(printAll, char *));
				b = 0;
				break;
			default:
				b = 1;
				break;
		}
		if (format[a + 1] != '\0' && b == 0)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
	va_end(printAll);
}
