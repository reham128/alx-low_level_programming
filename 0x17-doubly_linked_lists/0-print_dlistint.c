#include "lists.h"
/**
 * print_dlistint - function to print all elements of double linke list
 * @h: list head address
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (a);
	}
	else
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			a++;
		}
	}
	return (a);
}
