 #include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 exept 2 and 4.
 *
 * Description: this function that prints the numbers
 *              from 0 to 9, exept 2 and 4 followed by a new line.
 * Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		if (count == 2 || count == 4)
			continue;
		_putchar(count + '0');
	}
	_putchar('\n');
}
