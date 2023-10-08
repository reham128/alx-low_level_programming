#include "main.h"
/**
 * malloc_checked - simple function allocate memory using malloc
 *
 * @b: input integer to be allocated.
 *
 * Return: pointer to memory if success ,null if false.
 */
void *malloc_checked(unsigned int b)
{
	char *mall = malloc(b);

	if (mall == NULL)
	{
		exit(98);
	}
	else
	{
		return (mall);
	}
}
