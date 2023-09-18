#include "main.h"

/**
 * swap_int - swaps the values of two integers a , and b
 *
 * @a: first parameter
 *
 * @b: second parameter
 *
 * Return: void function returns nothing
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
