#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 * @head: entry point to the list.
 * Return: void function return nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr_new;

	while (head != NULL)
	{
		ptr_new = head;
		head = head->next;
		free(ptr_new);
	}
}
