#include "lists.h"
/**
 * add_nodeint - to add new node at beginning of the list.
 * @head: start point of the list.
 * @n: int value of the new node.
 * Return: address of the new added node, or NULL if fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_new;

	ptr_new = malloc(sizeof(listint_t));
	if (ptr_new == NULL)
	{
		free(ptr_new);
		return (NULL);
	}
	ptr_new->n = n;
	ptr_new->next = NULL;
	ptr_new->next = *head;
	*head = ptr_new;
	return (0);
}
