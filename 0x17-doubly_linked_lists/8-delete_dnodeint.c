#include "lists.h"
/**
 *  delete_dnodeint_at_index - function to deletes the node at index in dlist
 *  @head: pointer to the head node of the list
 *  @index: index to delete at.
 *  Return: 1 if succee, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	while (index != 0)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		index--;
	}
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
	}
	free(current);
	return (1);
}
