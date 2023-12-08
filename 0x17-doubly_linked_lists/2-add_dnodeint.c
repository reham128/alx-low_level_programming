#include "lists.h"
/**
 * add_dnodeint - function to add new node at beginning of a dlistint_t list
 * @head: pointer to the head node of the list
 * @n: data of element to add at the node
 * Return:  address of added elemen if success or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
