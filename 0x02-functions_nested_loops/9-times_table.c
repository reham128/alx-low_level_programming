#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Discription: use _putchar to print the output
*/
void times_table(void)
{
	int num1, num2, reslt;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');
			reslt = num1 * num2;
			if (reslt <= 9)
				_putchar(' ');
			else
				_putchar((reslt / 10) + '0');
			_putchar((reslt % 10) + '0');
		}
	}
}
