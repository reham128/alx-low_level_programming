#include "lists.h"
/**
 * list_len - function to find  number of elements in a linked list_t list.
 * @h: is the head node.
 * Return: the number fo nodes.
*/
size_t list_len(const list_t *h)
{
	size_t nodeNum;

	for (nodeNum = 0; h != NULL; nodeNum++)
	{
		h = h->next;
	}
	return (nodeNum);
}
