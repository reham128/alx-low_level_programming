#include "lists.h"
/**
 * listint_len - to find number of elements of linked listint_t list.
 * @h: is the head node.
 * Return: the number fo nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_num;

	for (node_num = 0; h != NULL; node_num++)
		h = h->next;
	return (node_num);
}
