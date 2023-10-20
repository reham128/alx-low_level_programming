#include "lists.h"
/**
 * print_list - to  print all Eelements of list.
 * @h: the linke list.
 * Return: the number of linked list nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodeNum;

	for (nodeNum = 0; h != NULL; nodeNum++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		 h = h->next;
	}
	return (nodeNum);
}
