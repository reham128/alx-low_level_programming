#include "lists.h"
/**
 * dlistint_len - function to fine num of elements il list
 * @h: list head address
 * Return: number of list elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (a);
	}
	else
	{
		while (h != NULL)
		{
			h = h->next;
			a++;
		}
	}
	return (a);
}
