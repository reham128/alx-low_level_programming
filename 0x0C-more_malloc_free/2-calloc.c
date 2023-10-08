#include "main.h"
/**
 * _calloc - function allocates memory for array
 *
 * @nmemb: the array to be allocated in the memory.
 *
 * @size: size of the array.
 *
 * Return: pointer to array if suucess , null if fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		Ptr = calloc(nmemb, size);
	}
	if (Ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (Ptr);
	}
}
