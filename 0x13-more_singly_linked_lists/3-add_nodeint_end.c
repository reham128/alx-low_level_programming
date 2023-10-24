#include "lists.h"
/**
 * add_nodeint_end - to add a new node at the end of a listint_t list.
 * @head: starting point.
 * @n: the int values wanted to add.
 * Return: address of new node, or NULL if it failed to add the node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_new, *node;

	node = *head;
	ptr_new = malloc(sizeof(listint_t));
	if (ptr_new == NULL)
	{
		free(ptr_new);
		return (NULL);
	}
	ptr_new->n = n;
	ptr_new->next = NULL;
	if (*head == NULL)
	{
		*head = ptr_new;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = ptr_new;
	}
	return (ptr_new);
}
