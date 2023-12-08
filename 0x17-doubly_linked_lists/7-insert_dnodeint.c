#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at index
 * @h: pointer to the head node of the list
 * @idx: index to insert node at.
 * @n: data to be added
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *newNod = NULL;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(current);
		return (NULL);
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newNod = malloc(sizeof(dlistint_t));
	if (newNod == NULL)
	{
		free(newNod);
		return (NULL);
	}
	newNod->n = n;
	newNod->prev = current;
	newNod->next = current->next;
	current->next->prev = newNod;
	current->next = newNod;
	return (newNod);
}
