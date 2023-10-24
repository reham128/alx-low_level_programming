#include "lists.h"
/**
 * pop_listint - to delete the head node of a listint_t linked list.
 * @head: pointer to the 1st node.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr_new;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	ptr_new = (*head)->next;
	n = (*head)->n;
	free(ptr_new);
	return (n);
}
