#include "main.h"
/**
 * print_numbers - prints number from 0 to 9.
 *
 * Description: this function that prints the numbers
 *              from 0 to 9, followed by a new line.
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
