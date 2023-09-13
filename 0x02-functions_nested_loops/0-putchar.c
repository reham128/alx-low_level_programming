#include "main.h"
/**
 * main - entry point
 *
 * Discription: Putchar function and prototype concept.
 *
 * Return: 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";
	inti;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
