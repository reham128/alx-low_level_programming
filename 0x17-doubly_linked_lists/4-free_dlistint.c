#include "lists.h"
/**
 * free_dlistint - a function that frees all data from dlistint_t list.
 * @head: pointer to the head node of the list
 * Return: void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *data;

	while (head != NULL)
	{
		data = head;
		head = head->next;
		free(data);
	}
}
