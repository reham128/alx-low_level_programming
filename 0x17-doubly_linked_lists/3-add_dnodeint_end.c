#include "lists.h"
/**
 * *add_dnodeint_end - function to add new node at end of a dlistint_t list
 * @head: pointer to the head node of the list
 * @n: data of element to add at the node
 * Return:  address of added elemen if success or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *h;


	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = newNode;
		newNode->prev = h;
	}
	return (newNode);
}
