#include "main.h"

/**
 * reverse_array - function to reverses the content of an array of integers.
 *
 * @a: array name.
 *
 * @n: number of array elements
 *
 * Return: void function returns nothing
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
