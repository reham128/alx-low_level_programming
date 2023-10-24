#include "lists.h"
/**
 * print_listint - a function that prints all elements at listint_t list.
 * @h: the linke list.
 * Return: the number of nodes at linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum;

	if (!h)
	{
		return (0);
	}
	else
	{
		for (nodeNum = 0; h != NULL; nodeNum++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (nodeNum);
}
