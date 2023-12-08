#include "lists.h"
/**
 * get_dnodeint_at_index - function to fine nth node of dlistint_t linked list
 * @head: pointer to the head node of the list
 * @index: the index to find the wanted node
 * Return: the nth node wanted, or null if fail
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tmp = 0;

	while (head != NULL)
	{
		if (tmp == index)
		{
			return (head);
		}
		tmp = tmp + 1;
		head = head->next;
	}
	return (NULL);
}
