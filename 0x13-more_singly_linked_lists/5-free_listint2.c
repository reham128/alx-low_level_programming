#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to pointer of first node
 * Return: void function.
 */
void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *ptr_new;

	new = *head;
	if (*head == NULL || head == NULL)
	{
		return;
	}
	while (new != NULL)
	{
		ptr_new = new;
		new = new->next;
		free(ptr_new);
	}
	*head = NULL;
}
