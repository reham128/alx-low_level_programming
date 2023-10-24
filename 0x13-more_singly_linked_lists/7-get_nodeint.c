#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a listint_t.
 * @head: pointer to the list head.
 * @index: the addres to put the node at it.
 * Return : pointer to the add node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (!head)
	{
		return (NULL);
	}
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (!head)
		{
			return (NULL);
		}
	}
	return (head);
}
